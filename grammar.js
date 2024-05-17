// From https://github.com/publicodes/publicodes/blob/6ee8c5d2316c8099931504b401feaaabd22b89c8/packages/core/source/grammar.ne#L17C6-L19
const letter = /[a-zA-Z\u00C0-\u017F]/;
const symbol = prec(0, /[',°€%²$_’"«»]/); // TODO: add parentheses
const digit = /\d/;

const number = /\d+(\.\d+)?/;
const date = /(?:(?:0?[1-9]|[12][0-9]|3[01])\/)?(?:0?[1-9]|1[012])\/\d{4}/;
const exposant = /[⁰-⁹]+/;
const any_char = choice(letter, symbol, digit);
const any_char_or_special_char = choice(any_char, /\-|\+/);

const phrase_starting_with = (char) =>
    seq(
        seq(char, repeat(any_char_or_special_char)),
        repeat(seq(" ", seq(any_char, repeat(any_char_or_special_char))))
    );

const rule_name = token(phrase_starting_with(letter));

const unit_symbol = /[°%\p{Sc}]/; // °, %, and all currency symbols (to be completed?)
const unit_identifier = token.immediate(
    phrase_starting_with(choice(unit_symbol, letter))
);

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function single_line($, rule) {
    return choice(indented($, rule), seq(rule, $._newline));
}

function maybe_with_quote(rule) {
    return choice(
        // This is to be coherent with the YAML parser
        prec(1, seq(token(prec(1, '"')), rule, token(prec(1, '"')))),
        prec(1, seq(token(prec(1, "'")), rule, token(prec(1, "'")))),
        rule
    );
}

function indented($, rule) {
    return seq($._indent, rule, $._dedent);
}

function may_be_indented($, rule) {
    return choice(indented($, rule), seq($._newline, rule));
}

function array($, rule) {
    const array_rule = repeat1(array_item($, rule));
    return may_be_indented($, array_rule);
}

function array_item($, rule) {
    return seq($._array_prefix, choice(rule, indented($, rule)), $._dedent);
}
function key_value(keys, rule, key_name) {
    if (!Array.isArray(keys)) {
        keys = [keys];
    }
    let possible_keys = token(prec(4, choice(...keys)));
    if (key_name !== undefined) {
        possible_keys = field(key_name, possible_keys);
    }
    return seq(possible_keys, ":", rule);
}

module.exports = grammar({
    name: "publicodes",

    extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]/],
    inline: ($) => [$.constant],

    externals: ($) => [
        $._indent,
        $._dedent,
        $._array_prefix,
        $.comment,
        $._newline,
        $.paragraph,
        $.error_recovery_mode,
    ],

    // FIXME: issue with boolean and identifier
    word: ($) => $.name,
    conflicts: ($) => [[$._ar_expression, $._bool_expression]],
    rules: {
        source_file: ($) => repeat($.rule),

        rule: ($) =>
            seq(
                optional(seq("[", $.tag, "]")),
                $._dottedName,
                ":",
                choice(
                    field("empty", $._newline),
                    field(
                        "value",
                        single_line($, maybe_with_quote($._expression))
                    ),
                    field("body", $.rule_body)
                )
            ),

        rule_body: ($) => indented($, repeat1($._statement)),
        _statement: ($) =>
            choice(
                $.mechanism,
                $.meta,
                $.formule,
                $.avec,
                $.remplace,
                $._tags,
                $.custom_meta,
                $.m_une_possibilité
            ),
        // Formule can only appear top-level in a rule
        formule: ($) =>
            key_value(
                "formule",
                choice($._valeur, indented($, $.m_une_possibilité))
            ),
        /*
        ====================
            Mécanismes
        ====================
        */
        _valeur: ($) =>
            choice(
                single_line($, maybe_with_quote($._expression)),
                indented($, repeat1($.mechanism))
            ),

        mechanism: ($) => choice($.m_unary, $.m_array, $._m_special),

        m_unary: ($) =>
            key_value(
                [
                    "valeur",
                    "plafond",
                    "plancher",
                    "applicable si",
                    "non applicable si",
                    "arrondi",
                    "est non défini",
                    "est défini",
                    "est non applicable",
                    "est applicable",
                    "par défaut",
                    "abattement",
                ],
                $._valeur,
                "mechanism_name"
            ),
        m_array: ($) =>
            key_value(
                [
                    "somme",
                    "produit",
                    "moyenne",
                    "le maximum de",
                    "le minimum de",
                    "une de ces conditions",
                    "toutes ces conditions",
                ],
                array(
                    $,
                    choice(
                        maybe_with_quote($._expression),
                        repeat1($.mechanism)
                    )
                ),
                "mechanism_name"
            ),

        _m_special: ($) =>
            choice(
                $.m_inversion,
                $.m_contexte,
                $.m_variations,
                $.m_unité,
                $.m_durée,
                $.m_barème_like,
                $.m_texte
            ),

        m_inversion: ($) =>
            key_value("inversion numérique", array($, $.reference)),

        m_contexte: ($) =>
            key_value(
                "contexte",
                indented($, repeat1(seq($.reference, ":", $._valeur)))
            ),
        m_variations: ($) =>
            key_value(
                "variations",
                indented(
                    $,
                    seq(
                        repeat1(array_item($, $._variation_si)),
                        optional(array_item($, $._variation_sinon))
                    )
                )
            ),
        _variation_si: ($) =>
            seq(key_value("si", $._valeur), key_value("alors", $._valeur)),
        _variation_sinon: ($) => key_value("sinon", $._valeur),

        m_unité: ($) => key_value("unité", single_line($, $.units)),

        m_durée: ($) =>
            key_value(
                "durée",
                indented(
                    $,
                    seq(
                        optional(
                            seq("depuis", ":", field("depuis", $._valeur))
                        ),
                        optional(
                            seq("jusqu'à", ":", field("jusqu_à", $._valeur))
                        ),
                        optional(
                            seq(
                                "unité",
                                ":",
                                field(
                                    "unité",
                                    single_line(
                                        $,
                                        choice(
                                            "jour",
                                            "mois",
                                            "an",
                                            "année civile",
                                            "trimestre",
                                            "trimestre civil"
                                        )
                                    )
                                )
                            )
                        )
                    )
                )
            ),

        m_barème_like: ($) =>
            key_value(
                ["barème", "taux progressif", "grille"],
                indented(
                    $,
                    seq(
                        "assiette",
                        ":",
                        field("assiette", $._valeur),
                        optional(
                            seq(
                                "multiplicateur",
                                ":",
                                field("multiplicateur", $._valeur)
                            )
                        ),
                        "tranches",
                        ":",
                        may_be_indented(
                            $,
                            seq(
                                repeat1(array_item($, $._m_tranche)),
                                optional(array_item($, $._m_last_tranche))
                            )
                        )
                    )
                ),
                "mechanism_name"
            ),

        _m_tranche: ($) =>
            choice(
                // With plafond last
                seq(
                    key_value(["taux", "montant"], field("valeur", $._valeur)),
                    key_value("plafond", field("plafond", $._valeur))
                ),
                // With plafond first
                seq(
                    key_value("plafond", field("plafond", $._valeur)),
                    key_value(["taux", "montant"], field("valeur", $._valeur))
                )
            ),

        _m_last_tranche: ($) =>
            key_value(["taux", "montant"], field("valeur", $._valeur)),

        m_texte: ($) => key_value("texte", choice($._text_line, $._paragraph)),

        m_une_possibilité: ($) =>
            key_value(
                "une possibilité",
                indented(
                    $,
                    seq(
                        optional(
                            key_value("choix obligatoire", choice("oui", "non"))
                        ),
                        key_value("possibilités", array($, $.reference))
                    )
                )
            ),

        /*
        ========================
            Avec et remplace     
        ========================
        */

        avec: ($) => key_value("avec", indented($, repeat1($.rule))),
        remplace: ($) =>
            key_value(
                "remplace",
                choice(
                    single_line($, $.reference),
                    indented($, $._remplace_rule),
                    array($, choice($._remplace_rule, $.reference))
                )
            ),

        _remplace_rule: ($) =>
            seq(
                key_value("références à", single_line($, $.reference)),
                optional(
                    field(
                        "dans",
                        key_value(
                            "dans",
                            choice(
                                single_line($, $.reference),
                                array($, $.reference)
                            )
                        )
                    )
                ),
                optional(
                    field(
                        "sauf_dans",
                        key_value(
                            "sauf dans",
                            choice(
                                single_line($, $.reference),
                                array($, $.reference)
                            )
                        )
                    )
                )
            ),

        /*
        ========================
            Tags
        ========================
        */

        _tags: ($) => seq($.tag, ":", "oui"),
        tag: ($) =>
            token(
                prec(
                    3,
                    choice(
                        "privé",
                        "résoudre la référence circulaire",
                        "expérimental"
                    )
                )
            ),

        /*
        ==============================
            Expressions arithmétiques
        =============================
        */
        _expression: ($) =>
            seq(
                choice(
                    prec(3, $.constant),
                    prec(2, $.reference),
                    $._ar_expression,
                    $._bool_expression
                )
            ),

        _ar_expression: ($) =>
            choice(
                $.ar_unary_expression,
                $.ar_binary_expression,
                seq("(", $._ar_expression, ")"),
                $.number,
                $.reference
            ),

        ar_unary_expression: ($) => prec(3, seq(/- ?/, $._ar_expression)),

        ar_binary_expression: ($) =>
            choice(
                // TODO : power of
                prec.left(
                    2,
                    seq(
                        $._ar_expression,
                        token(prec(2, choice(" * ", " / "))),
                        $._ar_expression
                    )
                ),
                prec.left(
                    1,
                    seq(
                        $._ar_expression,
                        token(prec(2, choice(" + ", " - "))),
                        $._ar_expression
                    )
                )
            ),

        /*
        ==============================
            Expressions booléennes
        =============================
        */
        _bool_expression: ($) =>
            choice(
                $.boolean,
                $.comparison,
                $.reference,
                seq("(", $._bool_expression, ")")
            ),

        comparison: ($) =>
            prec.left(
                1,
                seq(
                    $._expression,
                    choice(" = ", " != ", " < ", " <= ", " > ", " >= "),
                    $._expression
                )
            ),

        /*
        ===================
            Identifier
        ===================
        */
        _dottedName: ($) => seq($.name, repeat(seq(" . ", $.name))),
        name: ($) => rule_name,
        reference: ($) => $._dottedName,

        /*
        ===================
            Various
        ===================
        */

        comment: (_) => token(prec(3, seq("#", /.*/))),

        /*
        ===================
            Constants
        ===================
        */

        constant: ($) => choice($.boolean, $.string, $.number, $.date),
        boolean: (_) => choice("oui", "non"),

        string: (_) => /'.*?'/,

        date: () => date,
        // TODO: may want to distinguish between integers and floats
        number: ($) => seq(number, optional($.units)),
        units: ($) =>
            seq(
                field("numerators", seq(optional(" "), $._units)),
                field("denominators", repeat(seq("/", $._units)))
            ),
        _units: ($) => seq($.unit, repeat(seq(".", $.unit))),
        unit: ($) => seq(unit_identifier, optional($.exposant)),
        exposant: () => exposant,

        /*
        ====================
            Métadonnées
        ====================
        */

        meta: ($) =>
            key_value(
                ["titre", "question", "références", "description", "notes"],
                $.meta_value,
                "meta_name"
            ),

        custom_meta: ($) => seq(field("meta_name", $._key), $.meta_value),

        meta_value: ($) =>
            choice($._newline, $._text_line, $.object, $._paragraph),

        _text_line: ($) =>
            choice(
                seq(
                    optional($.text_line),
                    indented($, repeat1(seq($.text_line, $._newline)))
                ),
                seq($.text_line, $._newline)
            ),
        // Paragraph are like multiline strings but they do not parse # as comments
        // This needs to be done in the external scanner because otherwise # would be consumed as comments
        _paragraph: ($) => seq(token(prec(2, choice("|", ">"))), $.paragraph),

        object: ($) => indented($, repeat1(seq($._key, $.meta_value))),
        _key: ($) =>
            token(prec(2, seq(choice(/"[^"]+"/, /'[^']+'/, /[^:#\n]+/), ":"))),
        text_line: ($) => token(prec(1, /[^\n#]*/)),
    },
});

/* Questions : 
- Should we enforce a space between operators and operands? 
    -> YES because it is easier to read and because it enable to disambiguate between unit (12 €/an) and division (12 € / an)
- If so, should we allow for operator symbol to appear in words (ex : "a . a+") 
    -> NO because it is not a common practice and it would make the grammar more complex

- Should we allow for multiple spaces between operators, operands, words, etc? 
    -> YES because it is a common practice and it makes the grammar more flexible 
        (That's what copilot is saying anyway)

- Should we allow tabs and spaces ?
    -> NO, because it leads to complex indentation logic : 
       we have to choose an arbitrary length for the tab, in order to compare indentation levels of different lines. 
       In python it's 8. But it's usually defined in the editor settings. So it would lead to unexpected behavior.


- Should we have a number node that contains unit or separate them in number_with_unit and number ?

*/
