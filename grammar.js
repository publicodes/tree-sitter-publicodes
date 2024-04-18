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

const sepBy = (separator, rule) => seq(rule, repeat(seq(separator, rule)));

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function mayBeIndented($, rule) {
    return choice(seq($._indent, rule, $._dedent), seq(rule, $._newline));
}
module.exports = grammar({
    name: "publicodes",

    extras: ($) => [/[\s\f\uFEFF\u2060\u200B]/, /\r?\n/, $.comment],
    inline: ($) => [$.constant],

    externals: ($) => [$._indent, $._dedent, $._newline, $.error_recovery_mode],

    // FIXME: issue with boolean and identifier
    word: ($) => $.name,
    conflicts: ($) => [[$._ar_expression, $._bool_expression]],
    rules: {
        source_file: ($) => repeat($.rule),

        rule: ($) =>
            seq(
                $._dottedName,
                ":",
                choice(
                    field("empty", $._newline),
                    field("value", mayBeIndented($, $._expression)),
                    field("body", $.rule_body)
                )
            ),

        rule_body: ($) => seq($._indent, repeat($._statement), $._dedent),
        _statement: ($) => choice($.mechanism, $.meta, $.formule, $._newline), //$.remplace, $.privé
        // Formule can only appear top-level in a rule
        formule: ($) => seq("formule", ":", $._valeur),
        /*
        ====================
            Mécanismes
        ====================
        */
        _valeur: ($) =>
            choice(
                mayBeIndented($, $._expression),
                seq($._indent, $.mechanism, $._dedent)
            ),

        mechanism: ($) => choice($.m_valeur),

        m_valeur: ($) => seq("valeur", ":", $._valeur),
        // mec_somme: ($) =>
        //     seq(
        //         "somme",
        //         ":",
        //         indented($, repeat1(seq("-", $.valeur, repeat($._empty))))
        //     ),

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
        _empty: (_) => /((\r|\s)*\n)+/,
        comment: (_) => /#.*/,

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

        meta: ($) => seq($.meta_key, ":", $.meta_value),
        meta_key: ($) =>
            choice("titre", "question", "références", "description", "notes"),

        meta_value: ($) =>
            choice(
                seq($.meta_string, $._newline),
                $.meta_object,
                $._meta_paragraph
            ),
        meta_string: (_) => /[^\n]+/,
        _meta_paragraph: ($) =>
            seq(
                optional($._text_line),
                $._indent,
                repeat1(seq($._text_line, $._newline)),
                $._dedent
            ),
        meta_object: ($) =>
            seq(
                $._indent,
                repeat1(choice(seq($._meta_key_custom, ":", $.meta_value))),
                $._dedent
            ),

        _text_line: ($) => alias($.meta_string, $.text_line),
        _meta_key_custom: ($) => alias($.meta_string, $.meta_key),
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
        TO CHECK WITH TEST
*/
