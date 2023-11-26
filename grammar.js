// From https://github.com/publicodes/publicodes/blob/6ee8c5d2316c8099931504b401feaaabd22b89c8/packages/core/source/grammar.ne#L17C6-L19
const letter = /[a-zA-Z\u00C0-\u017F€$%]/
const letterOrNumber = /[a-zA-Z\u00C0-\u017F0-9\',°\s]/

const word = seq(letter, repeat(letterOrNumber))

const space_indent= / {2}/
const tab_indent =/\t/
const indent = choice(space_indent, tab_indent)
const dedent = token.immediate(seq(indent, optional(/\n/)))

module.exports = grammar({
  name: "publicodes",

  extras: $ => [
		/[\s\f\uFEFF\u2060\u200B]/,
		/\r?\n/,
    $.comment,
  ],

	conflicts: $ => [
	],

	word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.rule_definition,
			$.value_definition,
		),

		_rule_name : $ => seq(
			field('name', $.identifier), ":",
		),

		namespace_definition: $ =>  $._rule_name,

		value_definition: $ => seq(
			$._rule_name,
			field('value', $._expression)
		),

    rule_definition: $ => seq(
			$._rule_name,
			field('body', $.rule_body)
		),

    rule_body: $ => seq(
			$._statement,
			repeat($._statement),
			optional(dedent),
		),

		_statement: $ => seq(
			indent,
			choice(
				$.mechanism,
			)
		),

		mechanism: $ => choice(
			$.valeur,
		),

    valeur: $ => seq("valeur", ":", $._expression),

    _expression: $ => choice(
			$.constant,
			$.empty,
			// TODO: binary expressions, references, etc.
		),

    constant: $ => choice(
			$.number,
			$.string,
			$.boolean,
		),

		identifier: _ => token(seq(word, repeat(seq(" . ", word)))),

		empty: _ => /(\r|\s)*\n/,
		boolean: _ => choice("oui", "non"),
    string: _ => /".*?"/,
    comment: _ => /#.*/,
		number: _ => /\d+/,
  },
});
