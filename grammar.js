// From https://github.com/publicodes/publicodes/blob/6ee8c5d2316c8099931504b401feaaabd22b89c8/packages/core/source/grammar.ne#L17C6-L19
const letter = /[a-zA-Z\u00C0-\u017F€$%]/;
const letterOrNumber = /[a-zA-Z\u00C0-\u017F0-9\',°\s]/;

const word = seq(letter, repeat(letterOrNumber));

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
        source_file: ($) => repeat($._definition),

        _definition: ($) => choice($.rule_definition, $.value_definition),

        _rule_name: ($) => seq(field("name", $.identifier), ":"),

        namespace_definition: ($) => $._rule_name,

        value_definition: ($) =>
            seq($._rule_name, field("value", choice($._expression, $.empty))),

        rule_definition: ($) => seq($._rule_name, field("body", $.rule_body)),

        rule_body: ($) => indentedBlock($._statement),

        _statement: ($) => choice($.mechanism),

        mechanism: ($) => choice($.valeur, $.somme),

        valeur: ($) => seq("valeur", ":", $._expression),

        somme: ($) =>
            prec.left(
                seq("somme", ":", indentedBlock(seq("-", $._expression))),
            ),

        _expression: ($) =>
            choice(
                $.constant,
                // TODO: binary expressions, references, etc.
            ),

        constant: ($) =>
            choice($.true, $.false, $.identifier, $.number, $.string),

        identifier: (_) => token(seq(word, repeat(seq(" . ", word)))),

        true: (_) => token(prec(2, "oui")),
        false: (_) => token(prec(2, "non")),

        empty: (_) => /(\r|\s)*\n/,
        string: (_) => /".*?"/,
        comment: (_) => /#.*/,
        // TODO: may want to distinguish between integers and floats
        number: (_) => /\d+(\.\d)*/,
    },
});
