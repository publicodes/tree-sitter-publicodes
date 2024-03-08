// From https://github.com/publicodes/publicodes/blob/6ee8c5d2316c8099931504b401feaaabd22b89c8/packages/core/source/grammar.ne#L17C6-L19
const letter = /[a-zA-Z\u00C0-\u017F]/;
const digit = /[0-9]/;
const symbol = /[',°€%²$_()’"«»]/;
const anyChar = choice(letter, symbol, digit);
const wordStartingWithLetter = seq(letter, repeat(anyChar));

const wordsStartingWith = (word) =>
    seq(word, repeat(seq(" ", repeat1(anyChar))));

const words = wordsStartingWith(wordStartingWithLetter);

const unitSymbol = /[°%\p{Sc}]/; // °, %, and all currency symbols (to be completed?)

const unitWord = choice(
    seq(unitSymbol, repeat(anyChar)),
    wordStartingWithLetter
);
const unit = wordsStartingWith(unitWord);

const space_indent = / {2}/;
const tab_indent = /\t/;
const indent = choice(space_indent, tab_indent);
const dedent = token.immediate(seq(indent, optional(/\n/)));

const indentedBlock = (rule) => {
    return seq(indent, repeat1(rule), optional(dedent));
};

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "publicodes",

    extras: ($) => [/[\s\f\uFEFF\u2060\u200B]/, /\r?\n/, $.comment],

    inline: ($) => [$.constant],

    // FIXME: issue with boolean and identifier
    // word: ($) => $.identifier,

    rules: {
        source_file: ($) => repeat(choice($.rule_definition, $._empty)),

        _rule_name: ($) => seq(field("dottedName", $.identifier), ":"),

        rule_definition: ($) =>
            seq(
                $._rule_name,
                choice(
                    field("body", $.rule_body),
                    field("value", choice($._expression, $._empty))
                )
            ),

        rule_body: ($) => indentedBlock($._statement),

        _statement: ($) => choice($.mechanism),

        mechanism: ($) => choice($.valeur, $.somme),

        valeur: ($) => seq("valeur", ":", $._expression),

        somme: ($) =>
            prec.left(
                seq("somme", ":", indentedBlock(seq("-", $._expression)))
            ),

        _expression: ($) => $.constant,

        constant: ($) =>
            choice($.true, $.false, $.identifier, $.number, $.string),

        identifier: (_) => token(seq(words, repeat(seq(" . ", words)))),

        true: (_) => token(prec(2, "oui")),
        false: (_) => token(prec(2, "non")),

        _empty: (_) => /(\r|\s)*\n/,
        string: (_) => /".*?"/,
        comment: (_) => /#.*/,
        // TODO: may want to distinguish between integers and floats
        number: ($) => seq(/\d+(\.\d)*/, optional($.units)),
        units: ($) =>
            seq(
                / ?/,
                field("numerators", $._units),
                field("denominators", repeat(seq(/ ?\//, $._units)))
            ),
        _units: ($) => seq($.unit, repeat(seq(/ ?\./, $.unit))),
        unit: ($) => seq(token.immediate(unit), optional($.exposant)),
        exposant: () => token.immediate(choice("²", "³")),
    },
});
