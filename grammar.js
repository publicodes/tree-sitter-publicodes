const 
	COLON = ":",
	unicode_letter = /[\p{Ll}\p{Lu}\p{Lt}\p{Lo}\p{Nl}]/u,
	LETTER = choice(unicode_letter),
	space_indent = / {2}/,
	tab_indent = /\t/,
	INDENT = choice(space_indent, tab_indent),
	DEDENT = token.immediate(seq(INDENT, optional(/\n/))),
	NEW_LINE = /\r?\n/;

module.exports = grammar({
  name: "publicodes",

  extras: ($) => [
    /\s/, // whitespace
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.rule_definition,
			$.value_definition,
		),

		value_definition: $ => seq(
			field('name', $.identifier), COLON,
			field('value', $._expression)
		),

    rule_definition: $ => seq(
			field('name', $.identifier), COLON,
			field('body', $.rule_body)
		),

    rule_body: $ => seq(
			$._statement,
			repeat($._statement),
		),

		_statement: $ => seq(
			INDENT,
			choice(
				$.mechanism,
			)
		),

		mechanism: $ => choice(
			$.valeur,
		),

    valeur: $ => seq("valeur", COLON, $._expression),

    _expression: $ => choice(
			$.constant
			// TODO: binary expressions, references, etc.
		),

    constant: $ => choice(
			$.number,
			$.string,
			$.boolean,
		),

		identifier: $ => token(seq(
      LETTER,
      repeat(choice(LETTER, " . "))
    )),

    string: $ => /".*?"/,
    comment: $ => /#.*/,
		number: $ => /\d+/,
		boolean: $ => choice("oui", "non"),
  },
});
