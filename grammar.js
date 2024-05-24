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
        repeat(seq(" ", seq(any_char, repeat(any_char_or_special_char)))),
    );

const rule_name = token(phrase_starting_with(letter));

const unit_symbol = /[°%\p{Sc}]/; // °, %, and all currency symbols (to be completed?)
const unit_identifier = token.immediate(
    phrase_starting_with(choice(unit_symbol, letter)),
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
        rule,
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
    return seq($._array_prefix, rule, $._dedent);
}

function keywords(keys) {
    if (!Array.isArray(keys)) {
        keys = [keys];
    }
    return token(prec(4, choice(...keys)));
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
        source_file: ($) => seq(optional($.import), repeat($.rule)),

        /*
        =====================
           Macro importer!
        =====================
        */

        import: ($) =>
            seq(
                $.importer,
                ":",
                indented(
                    $,
                    seq(
                        $.import_from,
                        optional($.import_into),
                        optional($.import_rules),
                    ),
                ),
            ),

        import_from: ($) =>
            seq(
                $.depuis,
                ":",
                indented(
                    $,
                    seq(
                        $.import_name,
                        optional($.import_source),
                        optional($.import_url),
                    ),
                ),
            ),
        import_name: ($) => seq($.nom, ":", maybe_with_quote($.text_line)),
        import_source: ($) => seq($.source, ":", maybe_with_quote($.text_line)),
        import_url: ($) => seq($.url, ":", maybe_with_quote($.text_line)),

        import_into: ($) => seq($.dans, ":", maybe_with_quote($.text_line)),

        import_rules: ($) =>
            seq($.les_règles, ":", array($, choice($.import_rule, $.rule))),
        import_rule: ($) => $.dotted_name,

        /*
        =====================
           Rule definition
        =====================
        */

        rule: ($) =>
            seq(
                optional(seq("[", $.tag, "]")),
                field("rule_name", $.dotted_name),
                ":",
                field("body", $.rule_body),
            ),

        rule_body: ($) =>
            choice(
                $._newline,
                single_line($, maybe_with_quote($._expression)),
                indented($, repeat1($._statement)),
            ),

        _statement: ($) =>
            choice(
                $.mechanism,
                $.meta,
                $.s_formule,
                $.s_avec,
                $.s_remplace,
                $._tags,
                $.custom_meta,
                $.m_une_possibilité,
            ),

        // Formule can only appear top-level in a rule
        s_formule: ($) =>
            seq(
                field("m_name", $.formule),
                ":",
                choice($._valeur, indented($, $.m_une_possibilité)),
            ),

        /*
        ====================
            Mécanismes
        ====================
        */
        _valeur: ($) =>
            choice(
                single_line($, maybe_with_quote($._expression)),
                indented($, repeat1($.mechanism)),
            ),

        mechanism: ($) => choice($.m_unary, $.m_array, $._m_special),

        m_unary: ($) => seq(field("m_name", $.m_unary_name), ":", $._valeur),
        m_unary_name: (_) =>
            keywords([
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
            ]),

        m_array: ($) =>
            seq(
                field("m_name", $.m_array_name),
                ":",
                array(
                    $,
                    choice(
                        maybe_with_quote($._expression),
                        repeat1($.mechanism),
                    ),
                ),
            ),
        m_array_name: (_) =>
            keywords([
                "somme",
                "produit",
                "moyenne",
                "le maximum de",
                "le minimum de",
                "une de ces conditions",
                "toutes ces conditions",
            ]),

        _m_special: ($) =>
            choice(
                $.m_inversion,
                $.m_contexte,
                $.m_variations,
                $.m_unité,
                $.m_durée,
                $.m_barème_like,
                $.m_texte,
            ),

        m_inversion: ($) =>
            seq(
                field("m_name", $.inversion_numérique),
                ":",
                array($, $.reference),
            ),

        m_contexte: ($) =>
            seq(
                field("m_name", $.contexte),
                ":",
                indented($, repeat1(seq($.reference, ":", $._valeur))),
            ),

        m_variations: ($) =>
            seq(
                field("m_name", $.variations),
                ":",
                indented(
                    $,
                    seq(
                        repeat1(array_item($, $.m_variation_si)),
                        optional(array_item($, $.m_variation_sinon)),
                    ),
                ),
            ),

        m_variation_si: ($) =>
            seq(
                $.si,
                ":",
                field("condition", $._valeur),
                $.alors,
                ":",
                field("consequence", $._valeur),
            ),

        m_variation_sinon: ($) => seq($.sinon, ":", $._valeur),

        m_unité: ($) =>
            seq(field("m_name", $.unité), ":", single_line($, $.units)),

        m_durée: ($) =>
            seq(
                field("m_name", $.durée),
                ":",
                indented(
                    $,
                    seq(
                        optional(
                            seq($.depuis, ":", field("from", $._date_or_ref)),
                        ),
                        optional(
                            seq($.jusqu_à, ":", field("to", $._date_or_ref)),
                        ),
                        optional(
                            seq(
                                $.unité,
                                ":",
                                field("unit", single_line($, $.m_durée_units)),
                            ),
                        ),
                    ),
                ),
            ),
        _date_or_ref: ($) =>
            single_line($, maybe_with_quote(choice($.date, $.reference))),
        m_durée_units: (_) =>
            choice(
                "jour",
                "mois",
                "an",
                "année civile",
                "trimestre",
                "trimestre civil",
            ),

        m_barème_like: ($) =>
            seq(
                field("m_name", $.m_barème_like_name),
                ":",
                indented(
                    $,
                    seq(
                        $.assiette,
                        ":",
                        field("assiette", $._valeur),
                        optional(
                            seq(
                                $.multiplicateur,
                                ":",
                                field("multiplier", $._valeur),
                            ),
                        ),
                        $.tranches,
                        ":",
                        may_be_indented(
                            $,
                            seq(
                                repeat1(array_item($, $._m_tranche)),
                                optional(array_item($, $._m_taux_or_montant)),
                            ),
                        ),
                    ),
                ),
            ),
        m_barème_like_name: (_) =>
            keywords(["barème", "taux progressif", "grille"]),

        _m_tranche: ($) =>
            choice(
                // With plafond last
                seq(
                    $._m_taux_or_montant,
                    seq($.plafond, ":", field("ceiling", $._valeur)),
                ),
                // With plafond first
                seq(
                    seq($.plafond, ":", field("ceiling", $._valeur)),
                    $._m_taux_or_montant,
                ),
            ),

        _m_taux_or_montant: ($) =>
            seq(choice($.taux, $.montant), ":", $._valeur),

        m_texte: ($) =>
            seq(
                field("m_name", $.texte),
                ":",
                choice($._text_line, $._paragraph),
            ),

        m_une_possibilité: ($) =>
            seq(
                field("m_name", $.une_possibilité),
                ":",
                indented(
                    $,
                    seq(
                        optional(
                            seq(
                                $.choix_obligatoire,
                                ":",
                                field("required", $.boolean),
                            ),
                        ),
                        seq(
                            $.possibilités,
                            ":",
                            field("options", $.m_une_possibilité_options),
                        ),
                    ),
                ),
            ),

        m_une_possibilité_options: ($) => array($, $.reference),

        /*
        ========================
            Avec et remplace
        ========================
        */

        s_avec: ($) =>
            seq(field("m_name", $.avec), ":", indented($, repeat1($.rule))),
        s_remplace: ($) =>
            seq(
                field("m_name", $.remplace),
                ":",
                choice(
                    single_line($, $.reference),
                    indented($, $._remplace_rule),
                    array($, choice($._remplace_rule, $.reference)),
                ),
            ),

        _remplace_rule: ($) =>
            seq(
                $.références_à,
                ":",
                field("ref", single_line($, $.reference)),
                optional(seq($.dans, ":", field("in", $.remplace_rule_in))),
                optional(
                    seq(
                        $.sauf_dans,
                        ":",
                        field("except", $.remplace_rule_except),
                    ),
                ),
            ),
        remplace_rule_in: ($) =>
            choice(single_line($, $.reference), array($, $.reference)),
        remplace_rule_except: ($) =>
            choice(single_line($, $.reference), array($, $.reference)),

        /*
        ========================
            Tags
        ========================
        */

        _tags: ($) => seq($.tag, ":", "oui"),
        tag: (_) =>
            token(
                prec(
                    3,
                    choice(
                        "privé",
                        "résoudre la référence circulaire",
                        "expérimental",
                    ),
                ),
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
                    $._bool_expression,
                ),
            ),

        _ar_expression: ($) =>
            choice(
                $.ar_unary_expression,
                $.ar_binary_expression,
                seq("(", $._ar_expression, ")"),
                $.number,
                $.reference,
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
                        $._ar_expression,
                    ),
                ),
                prec.left(
                    1,
                    seq(
                        $._ar_expression,
                        token(prec(2, choice(" + ", " - "))),
                        $._ar_expression,
                    ),
                ),
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
                seq("(", $._bool_expression, ")"),
            ),

        comparison: ($) =>
            prec.left(
                1,
                seq(
                    $._expression,
                    choice(" = ", " != ", " < ", " <= ", " > ", " >= "),
                    $._expression,
                ),
            ),

        /*
        ===================
            Identifier
        ===================
        */

        dotted_name: ($) => seq($.name, repeat(seq(" . ", $.name))),
        name: (_) => rule_name,
        reference: ($) => $.dotted_name,

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
                field("denominators", repeat(seq("/", $._units))),
            ),
        _units: ($) => seq($.unit, repeat(seq(".", $.unit))),
        unit: ($) => seq(unit_identifier, optional($.exposant)),
        exposant: () => exposant,

        /*
        ====================
            Keywords

        NOTE: we use named node to be able to used them in the semantic
        highlighting in the language server.

        ====================
        */

        importer: (_) => keywords("importer!"),
        depuis: (_) => keywords("depuis"),
        nom: (_) => keywords("nom"),
        source: (_) => keywords("source"),
        url: (_) => keywords("url"),
        dans: (_) => keywords("dans"),
        les_règles: (_) => keywords("les règles"),

        formule: (_) => keywords("formule"),

        avec: (_) => keywords("avec"),
        remplace: (_) => keywords("remplace"),
        références_à: (_) => keywords("références à"),
        dans: (_) => keywords("dans"),
        sauf_dans: (_) => keywords("sauf dans"),

        une_possibilité: (_) => keywords("une possibilité"),
        choix_obligatoire: (_) => keywords("choix obligatoire"),
        possibilités: (_) => keywords("possibilités"),

        texte: (_) => keywords("texte"),

        assiette: (_) => keywords("assiette"),
        montant: (_) => keywords("montant"),
        multiplicateur: (_) => keywords("multiplicateur"),
        tranches: (_) => keywords("tranches"),

        plafond: (_) => keywords("plafond"),
        taux: (_) => keywords("taux"),

        inversion_numérique: (_) => keywords("inversion numérique"),
        contexte: (_) => keywords("contexte"),
        variations: (_) => keywords("variations"),

        si: (_) => keywords("si"),
        alors: (_) => keywords("alors"),
        sinon: (_) => keywords("sinon"),

        durée: (_) => keywords("durée"),
        depuis: (_) => keywords("depuis"),
        jusqu_à: (_) => keywords("jusqu'à"),
        unité: (_) => keywords("unité"),

        /*
        ====================
            Métadonnées
        ====================
        */

        meta: ($) =>
            seq(
                field("meta_name", $.meta_name),
                ":",
                field("meta_value", $.meta_value),
            ),
        meta_name: (_) =>
            keywords([
                "titre",
                "question",
                "références",
                "description",
                "notes",
            ]),

        custom_meta: ($) => seq(field("meta_name", $._key), $.meta_value),

        meta_value: ($) =>
            choice($._newline, $._text_line, $.object, $._paragraph),

        _text_line: ($) =>
            choice(
                seq(
                    optional($.text_line),
                    indented($, repeat1(seq($.text_line, $._newline))),
                ),
                seq($.text_line, $._newline),
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
