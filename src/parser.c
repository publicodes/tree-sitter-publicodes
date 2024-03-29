#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_COLON = 2,
  aux_sym_rule_body_token1 = 3,
  aux_sym_rule_body_token2 = 4,
  aux_sym_rule_body_token3 = 5,
  anon_sym_valeur = 6,
  anon_sym_somme = 7,
  anon_sym_DASH = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_ar_unary_expression_token1 = 11,
  aux_sym_ar_binary_expression_token1 = 12,
  aux_sym_ar_binary_expression_token2 = 13,
  anon_sym_DOT = 14,
  sym__empty = 15,
  sym_comment = 16,
  sym_boolean = 17,
  sym_true = 18,
  sym_false = 19,
  sym_string = 20,
  sym_date = 21,
  aux_sym_number_token1 = 22,
  anon_sym_SPACE = 23,
  anon_sym_SLASH = 24,
  anon_sym_DOT2 = 25,
  aux_sym_unit_token1 = 26,
  sym_exposant = 27,
  sym_source_file = 28,
  sym_rule = 29,
  sym_rule_body = 30,
  sym__statement = 31,
  sym_mechanism = 32,
  sym_valeur = 33,
  sym_somme = 34,
  sym__expression = 35,
  sym__ar_expression = 36,
  sym_ar_unary_expression = 37,
  sym_ar_binary_expression = 38,
  sym__dottedName = 39,
  sym_number = 40,
  sym_units = 41,
  sym__units = 42,
  sym_unit = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_rule_body_repeat1 = 45,
  aux_sym_somme_repeat1 = 46,
  aux_sym__dottedName_repeat1 = 47,
  aux_sym_units_repeat1 = 48,
  aux_sym__units_repeat1 = 49,
  alias_sym_reference = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [aux_sym_rule_body_token1] = "rule_body_token1",
  [aux_sym_rule_body_token2] = "rule_body_token2",
  [aux_sym_rule_body_token3] = "rule_body_token3",
  [anon_sym_valeur] = "valeur",
  [anon_sym_somme] = "somme",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_ar_unary_expression_token1] = "ar_unary_expression_token1",
  [aux_sym_ar_binary_expression_token1] = "ar_binary_expression_token1",
  [aux_sym_ar_binary_expression_token2] = "ar_binary_expression_token2",
  [anon_sym_DOT] = " . ",
  [sym__empty] = "_empty",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_string] = "string",
  [sym_date] = "date",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_SPACE] = " ",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT2] = ".",
  [aux_sym_unit_token1] = "unit_token1",
  [sym_exposant] = "exposant",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_mechanism] = "mechanism",
  [sym_valeur] = "valeur",
  [sym_somme] = "somme",
  [sym__expression] = "_expression",
  [sym__ar_expression] = "_ar_expression",
  [sym_ar_unary_expression] = "ar_unary_expression",
  [sym_ar_binary_expression] = "ar_binary_expression",
  [sym__dottedName] = "_dottedName",
  [sym_number] = "number",
  [sym_units] = "units",
  [sym__units] = "_units",
  [sym_unit] = "unit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_somme_repeat1] = "somme_repeat1",
  [aux_sym__dottedName_repeat1] = "_dottedName_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
  [alias_sym_reference] = "reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_rule_body_token1] = aux_sym_rule_body_token1,
  [aux_sym_rule_body_token2] = aux_sym_rule_body_token2,
  [aux_sym_rule_body_token3] = aux_sym_rule_body_token3,
  [anon_sym_valeur] = anon_sym_valeur,
  [anon_sym_somme] = anon_sym_somme,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_ar_unary_expression_token1] = aux_sym_ar_unary_expression_token1,
  [aux_sym_ar_binary_expression_token1] = aux_sym_ar_binary_expression_token1,
  [aux_sym_ar_binary_expression_token2] = aux_sym_ar_binary_expression_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__empty] = sym__empty,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_string] = sym_string,
  [sym_date] = sym_date,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT2] = anon_sym_DOT2,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [sym_exposant] = sym_exposant,
  [sym_source_file] = sym_source_file,
  [sym_rule] = sym_rule,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_mechanism] = sym_mechanism,
  [sym_valeur] = sym_valeur,
  [sym_somme] = sym_somme,
  [sym__expression] = sym__expression,
  [sym__ar_expression] = sym__ar_expression,
  [sym_ar_unary_expression] = sym_ar_unary_expression,
  [sym_ar_binary_expression] = sym_ar_binary_expression,
  [sym__dottedName] = sym__dottedName,
  [sym_number] = sym_number,
  [sym_units] = sym_units,
  [sym__units] = sym__units,
  [sym_unit] = sym_unit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_somme_repeat1] = aux_sym_somme_repeat1,
  [aux_sym__dottedName_repeat1] = aux_sym__dottedName_repeat1,
  [aux_sym_units_repeat1] = aux_sym_units_repeat1,
  [aux_sym__units_repeat1] = aux_sym__units_repeat1,
  [alias_sym_reference] = alias_sym_reference,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rule_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_body_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_valeur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_somme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ar_unary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ar_binary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ar_binary_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__empty] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_exposant] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_body] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_mechanism] = {
    .visible = true,
    .named = true,
  },
  [sym_valeur] = {
    .visible = true,
    .named = true,
  },
  [sym_somme] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__ar_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ar_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ar_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__dottedName] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym__units] = {
    .visible = false,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_somme_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dottedName_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_units_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__units_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_reference] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_denominators = 2,
  field_numerators = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_denominators] = "denominators",
  [field_numerators] = "numerators",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
  [1] =
    {field_value, 2},
  [2] =
    {field_numerators, 0},
  [3] =
    {field_numerators, 0},
    {field_numerators, 1},
  [5] =
    {field_denominators, 1},
    {field_numerators, 0},
  [7] =
    {field_denominators, 2},
    {field_numerators, 0},
    {field_numerators, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_reference,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__dottedName, 2,
    sym__dottedName,
    alias_sym_reference,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 4,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 26,
  [34] = 32,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 31,
  [40] = 27,
  [41] = 41,
  [42] = 26,
  [43] = 32,
  [44] = 9,
  [45] = 45,
  [46] = 4,
  [47] = 6,
  [48] = 48,
  [49] = 7,
  [50] = 8,
  [51] = 11,
  [52] = 52,
  [53] = 12,
  [54] = 17,
  [55] = 20,
  [56] = 19,
  [57] = 57,
  [58] = 13,
  [59] = 14,
  [60] = 16,
  [61] = 15,
  [62] = 18,
  [63] = 63,
  [64] = 7,
  [65] = 14,
  [66] = 66,
  [67] = 8,
  [68] = 15,
  [69] = 24,
  [70] = 6,
  [71] = 71,
  [72] = 72,
  [73] = 13,
  [74] = 22,
  [75] = 9,
  [76] = 11,
  [77] = 22,
  [78] = 18,
  [79] = 17,
  [80] = 41,
  [81] = 16,
  [82] = 37,
  [83] = 35,
  [84] = 29,
  [85] = 12,
  [86] = 38,
  [87] = 20,
  [88] = 19,
  [89] = 25,
  [90] = 30,
  [91] = 24,
  [92] = 35,
  [93] = 25,
  [94] = 94,
  [95] = 95,
  [96] = 30,
  [97] = 97,
  [98] = 95,
  [99] = 95,
  [100] = 100,
  [101] = 41,
  [102] = 97,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 29,
  [107] = 103,
  [108] = 97,
  [109] = 38,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 117,
  [120] = 120,
  [121] = 121,
  [122] = 122,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < ','
      ? (c < '$'
        ? c == '"'
        : (c <= '%' || c == '\''))
      : (c <= ',' || (c < 'A'
        ? (c >= '0' && c <= '9')
        : (c <= 'Z' || c == '_'))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 'j'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'h')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 'o'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'm')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 'p'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'n')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 'v'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 't')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 'a'
    ? (c < '+'
      ? (c < '$'
        ? c == '"'
        : (c <= '%' || c == '\''))
      : (c <= '-' || (c < 'A'
        ? (c >= '0' && c <= '9')
        : (c <= 'Z' || c == '_'))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool aux_sym_unit_token1_character_set_1(int32_t c) {
  return (c < 2801
    ? (c < 192
      ? (c < 'a'
        ? (c < 'A'
          ? (c >= '$' && c <= '%')
          : c <= 'Z')
        : (c <= 'z' || (c < 176
          ? (c >= 162 && c <= 165)
          : c <= 176)))
      : (c <= 383 || (c < 2046
        ? (c < 1547
          ? c == 1423
          : c <= 1547)
        : (c <= 2047 || (c < 2555
          ? (c >= 2546 && c <= 2547)
          : c <= 2555)))))
    : (c <= 2801 || (c < 65020
      ? (c < 6107
        ? (c < 3647
          ? c == 3065
          : c <= 3647)
        : (c <= 6107 || (c < 43064
          ? (c >= 8352 && c <= 8384)
          : c <= 43064)))
      : (c <= 65020 || (c < 65504
        ? (c < 65284
          ? c == 65129
          : c <= 65284)
        : (c <= 65505 || (c >= 65509 && c <= 65510)))))));
}

static inline bool aux_sym_unit_token1_character_set_2(int32_t c) {
  return (c < 3065
    ? (c < 1547
      ? (c < 176
        ? (c < 162
          ? (c >= '$' && c <= '%')
          : c <= 165)
        : (c <= 176 || c == 1423))
      : (c <= 1547 || (c < 2555
        ? (c < 2546
          ? (c >= 2046 && c <= 2047)
          : c <= 2547)
        : (c <= 2555 || c == 2801))))
    : (c <= 3065 || (c < 65020
      ? (c < 8352
        ? (c < 6107
          ? c == 3647
          : c <= 6107)
        : (c <= 8384 || c == 43064))
      : (c <= 65020 || (c < 65504
        ? (c < 65284
          ? c == 65129
          : c <= 65284)
        : (c <= 65505 || (c >= 65509 && c <= 65510)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(65);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '#') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(65);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '#') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(18);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(18);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(27);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '1') ADVANCE(25);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(24);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 31:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 32:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 33:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ')') ADVANCE(79);
      END_STATE();
    case 34:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (lookahead == '\r') SKIP(33)
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ')') ADVANCE(79);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 35:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 36:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (lookahead == '\r') SKIP(36)
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ':') ADVANCE(61);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(101);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      if (lookahead == '\r') SKIP(39)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 46:
      if (sym_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 47:
      if (sym_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 48:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(67);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(9);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (aux_sym_unit_token1_character_set_2(lookahead)) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(117);
      END_STATE();
    case 49:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(68);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 50:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(69);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 51:
      if (eof) ADVANCE(60);
      if (lookahead == '\t') ADVANCE(71);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 52:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 53:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 54:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 55:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 56:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '-') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 57:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '#') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (aux_sym_unit_token1_character_set_2(lookahead)) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(117);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '#') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(18);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_2(lookahead)) ADVANCE(89);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_3(lookahead)) ADVANCE(89);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_4(lookahead)) ADVANCE(89);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_5(lookahead)) ADVANCE(89);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_6(lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(12);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(15);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(18);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(103);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '0') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(9);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(47);
      if (sym_name_character_set_6(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'n') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_somme);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 59},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 59},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 52},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 52},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 52},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 52},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 52},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_somme] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_ar_binary_expression_token1] = ACTIONS(1),
    [aux_sym_ar_binary_expression_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_boolean] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_exposant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym_rule] = STATE(63),
    [sym__dottedName] = STATE(121),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym__empty] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(21), 1,
      sym__empty,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    STATE(83), 1,
      sym__dottedName,
    STATE(100), 1,
      sym_rule_body,
    STATE(104), 1,
      sym__expression,
    ACTIONS(15), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
    ACTIONS(23), 4,
      sym_true,
      sym_false,
      sym_string,
      sym_date,
    STATE(82), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [44] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_name,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    STATE(35), 1,
      sym__dottedName,
    STATE(57), 1,
      sym__expression,
    ACTIONS(33), 2,
      sym_true,
      sym_false,
    ACTIONS(35), 2,
      sym_string,
      sym_date,
    STATE(37), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [80] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SPACE,
    ACTIONS(45), 1,
      aux_sym_unit_token1,
    STATE(6), 1,
      sym_unit,
    STATE(11), 1,
      sym__units,
    STATE(38), 1,
      sym_units,
    ACTIONS(41), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [112] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_name,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    STATE(35), 1,
      sym__dottedName,
    STATE(72), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_true,
      sym_false,
    ACTIONS(49), 2,
      sym_string,
      sym_date,
    STATE(37), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [148] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_DOT2,
    STATE(9), 1,
      aux_sym__units_repeat1,
    ACTIONS(53), 9,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [172] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_DOT2,
    STATE(7), 1,
      aux_sym__units_repeat1,
    ACTIONS(59), 9,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [196] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_exposant,
    ACTIONS(66), 10,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [218] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DOT2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym__units_repeat1,
    ACTIONS(72), 9,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [242] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_valeur,
    ACTIONS(81), 1,
      anon_sym_somme,
    STATE(71), 2,
      sym_valeur,
      sym_somme,
    ACTIONS(76), 3,
      aux_sym_rule_body_token3,
      sym_name,
      sym__empty,
    STATE(10), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [269] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_units_repeat1,
    ACTIONS(86), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [292] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_units_repeat1,
    ACTIONS(92), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [315] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(96), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [338] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(102), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [361] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(106), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [384] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_units_repeat1,
    ACTIONS(113), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [407] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 10,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [426] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_units_repeat1,
    ACTIONS(121), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [449] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 10,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [468] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_units_repeat1,
    ACTIONS(125), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [491] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      aux_sym_rule_body_token3,
    ACTIONS(136), 1,
      anon_sym_valeur,
    ACTIONS(138), 1,
      anon_sym_somme,
    ACTIONS(132), 2,
      sym_name,
      sym__empty,
    STATE(71), 2,
      sym_valeur,
      sym_somme,
    STATE(10), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [520] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 9,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT,
      sym_name,
      sym__empty,
  [538] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_SPACE,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(47), 1,
      sym_unit,
    STATE(51), 1,
      sym__units,
    STATE(86), 1,
      sym_units,
    ACTIONS(41), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [566] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 9,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [584] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(148), 1,
      sym_name,
    ACTIONS(150), 1,
      aux_sym_number_token1,
    STATE(35), 1,
      sym__dottedName,
    STATE(30), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(108), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(102), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [676] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [693] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(166), 7,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(106), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [737] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(176), 1,
      aux_sym_number_token1,
    STATE(83), 1,
      sym__dottedName,
    STATE(80), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(176), 1,
      aux_sym_number_token1,
    STATE(83), 1,
      sym__dottedName,
    STATE(90), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(148), 1,
      sym_name,
    ACTIONS(150), 1,
      aux_sym_number_token1,
    STATE(35), 1,
      sym__dottedName,
    STATE(41), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [812] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [829] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(148), 1,
      sym_name,
    ACTIONS(150), 1,
      aux_sym_number_token1,
    STATE(35), 1,
      sym__dottedName,
    STATE(29), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [854] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(184), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_name,
      sym__empty,
  [875] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [892] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(176), 1,
      aux_sym_number_token1,
    STATE(83), 1,
      sym__dottedName,
    STATE(84), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(97), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [942] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      sym__empty,
  [959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(96), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [984] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(158), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym__dottedName,
    STATE(101), 4,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_number,
  [1009] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym__units_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(72), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
  [1029] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      anon_sym_DASH,
    STATE(48), 1,
      aux_sym_somme_repeat1,
    ACTIONS(196), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [1049] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SPACE,
    ACTIONS(202), 1,
      aux_sym_unit_token1,
    STATE(70), 1,
      sym_unit,
    STATE(76), 1,
      sym__units,
    STATE(109), 1,
      sym_units,
    ACTIONS(41), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1073] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT2,
    STATE(44), 1,
      aux_sym__units_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(53), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
  [1093] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      anon_sym_DASH,
    STATE(48), 1,
      aux_sym_somme_repeat1,
    ACTIONS(206), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [1113] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym__units_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(59), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
  [1133] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_exposant,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(66), 5,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1151] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      aux_sym_units_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(86), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_valeur,
    ACTIONS(220), 1,
      anon_sym_somme,
    STATE(71), 2,
      sym_valeur,
      sym_somme,
    STATE(21), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [1189] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_units_repeat1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(92), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1208] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(117), 5,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1223] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_units_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(125), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1242] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(59), 5,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1257] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_name,
      sym__empty,
  [1272] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(96), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1291] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(102), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1310] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_units_repeat1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(113), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1329] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(106), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1348] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_units_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(121), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1367] = 6,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__empty,
    STATE(121), 1,
      sym__dottedName,
    STATE(66), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [1387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_DOT2,
    STATE(64), 1,
      aux_sym__units_repeat1,
    ACTIONS(57), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(100), 4,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1421] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym_name,
    ACTIONS(244), 1,
      sym__empty,
    STATE(121), 1,
      sym__dottedName,
    STATE(66), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    ACTIONS(247), 1,
      sym_exposant,
    ACTIONS(64), 4,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT2,
  [1457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(104), 4,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1473] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(125), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
      anon_sym_SLASH,
  [1487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      anon_sym_DOT2,
    STATE(75), 1,
      aux_sym__units_repeat1,
    ACTIONS(51), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1505] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [1519] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [1533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(94), 4,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1549] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(106), 4,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT,
      sym_name,
  [1563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      anon_sym_DOT2,
    STATE(64), 1,
      aux_sym__units_repeat1,
    ACTIONS(70), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      aux_sym_units_repeat1,
    ACTIONS(84), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 5,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT,
  [1607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      aux_sym_units_repeat1,
    ACTIONS(119), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(115), 4,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT2,
  [1635] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(166), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_units_repeat1,
    ACTIONS(111), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1663] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_name,
    ACTIONS(264), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(266), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym__empty,
  [1680] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(180), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1693] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(162), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_units_repeat1,
    ACTIONS(90), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1721] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(190), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_units_repeat1,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(57), 4,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_DOT2,
  [1762] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(146), 3,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1775] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(166), 2,
      aux_sym_ar_binary_expression_token2,
      sym_name,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    ACTIONS(123), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1820] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_name,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym__empty,
  [1831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(47), 1,
      sym_unit,
    STATE(62), 1,
      sym__units,
  [1844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token2,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      aux_sym_ar_binary_expression_token2,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_unit_token1,
    STATE(70), 1,
      sym_unit,
    STATE(78), 1,
      sym__units,
  [1881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_unit_token1,
    STATE(6), 1,
      sym_unit,
    STATE(18), 1,
      sym__units,
  [1894] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_name,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym__empty,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(279), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [1927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_unit_token1,
    STATE(6), 1,
      sym_unit,
    STATE(24), 1,
      sym__units,
  [1940] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_name,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym__empty,
  [1951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(47), 1,
      sym_unit,
    STATE(69), 1,
      sym__units,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [1973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_unit_token1,
    STATE(70), 1,
      sym_unit,
    STATE(91), 1,
      sym__units,
  [1986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(279), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
  [2008] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_name,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__empty,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DASH,
    STATE(45), 1,
      aux_sym_somme_repeat1,
  [2029] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(301), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_unit_token1,
    STATE(19), 1,
      sym_unit,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_unit_token1,
    STATE(88), 1,
      sym_unit,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(56), 1,
      sym_unit,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_name,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_name,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_name,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 292,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 426,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 520,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 584,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 626,
  [SMALL_STATE(28)] = 651,
  [SMALL_STATE(29)] = 676,
  [SMALL_STATE(30)] = 693,
  [SMALL_STATE(31)] = 712,
  [SMALL_STATE(32)] = 737,
  [SMALL_STATE(33)] = 762,
  [SMALL_STATE(34)] = 787,
  [SMALL_STATE(35)] = 812,
  [SMALL_STATE(36)] = 829,
  [SMALL_STATE(37)] = 854,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 892,
  [SMALL_STATE(40)] = 917,
  [SMALL_STATE(41)] = 942,
  [SMALL_STATE(42)] = 959,
  [SMALL_STATE(43)] = 984,
  [SMALL_STATE(44)] = 1009,
  [SMALL_STATE(45)] = 1029,
  [SMALL_STATE(46)] = 1049,
  [SMALL_STATE(47)] = 1073,
  [SMALL_STATE(48)] = 1093,
  [SMALL_STATE(49)] = 1113,
  [SMALL_STATE(50)] = 1133,
  [SMALL_STATE(51)] = 1151,
  [SMALL_STATE(52)] = 1170,
  [SMALL_STATE(53)] = 1189,
  [SMALL_STATE(54)] = 1208,
  [SMALL_STATE(55)] = 1223,
  [SMALL_STATE(56)] = 1242,
  [SMALL_STATE(57)] = 1257,
  [SMALL_STATE(58)] = 1272,
  [SMALL_STATE(59)] = 1291,
  [SMALL_STATE(60)] = 1310,
  [SMALL_STATE(61)] = 1329,
  [SMALL_STATE(62)] = 1348,
  [SMALL_STATE(63)] = 1367,
  [SMALL_STATE(64)] = 1387,
  [SMALL_STATE(65)] = 1405,
  [SMALL_STATE(66)] = 1421,
  [SMALL_STATE(67)] = 1441,
  [SMALL_STATE(68)] = 1457,
  [SMALL_STATE(69)] = 1473,
  [SMALL_STATE(70)] = 1487,
  [SMALL_STATE(71)] = 1505,
  [SMALL_STATE(72)] = 1519,
  [SMALL_STATE(73)] = 1533,
  [SMALL_STATE(74)] = 1549,
  [SMALL_STATE(75)] = 1563,
  [SMALL_STATE(76)] = 1581,
  [SMALL_STATE(77)] = 1596,
  [SMALL_STATE(78)] = 1607,
  [SMALL_STATE(79)] = 1622,
  [SMALL_STATE(80)] = 1635,
  [SMALL_STATE(81)] = 1648,
  [SMALL_STATE(82)] = 1663,
  [SMALL_STATE(83)] = 1680,
  [SMALL_STATE(84)] = 1693,
  [SMALL_STATE(85)] = 1706,
  [SMALL_STATE(86)] = 1721,
  [SMALL_STATE(87)] = 1734,
  [SMALL_STATE(88)] = 1749,
  [SMALL_STATE(89)] = 1762,
  [SMALL_STATE(90)] = 1775,
  [SMALL_STATE(91)] = 1790,
  [SMALL_STATE(92)] = 1802,
  [SMALL_STATE(93)] = 1811,
  [SMALL_STATE(94)] = 1820,
  [SMALL_STATE(95)] = 1831,
  [SMALL_STATE(96)] = 1844,
  [SMALL_STATE(97)] = 1855,
  [SMALL_STATE(98)] = 1868,
  [SMALL_STATE(99)] = 1881,
  [SMALL_STATE(100)] = 1894,
  [SMALL_STATE(101)] = 1905,
  [SMALL_STATE(102)] = 1914,
  [SMALL_STATE(103)] = 1927,
  [SMALL_STATE(104)] = 1940,
  [SMALL_STATE(105)] = 1951,
  [SMALL_STATE(106)] = 1964,
  [SMALL_STATE(107)] = 1973,
  [SMALL_STATE(108)] = 1986,
  [SMALL_STATE(109)] = 1999,
  [SMALL_STATE(110)] = 2008,
  [SMALL_STATE(111)] = 2019,
  [SMALL_STATE(112)] = 2029,
  [SMALL_STATE(113)] = 2037,
  [SMALL_STATE(114)] = 2047,
  [SMALL_STATE(115)] = 2057,
  [SMALL_STATE(116)] = 2067,
  [SMALL_STATE(117)] = 2074,
  [SMALL_STATE(118)] = 2081,
  [SMALL_STATE(119)] = 2088,
  [SMALL_STATE(120)] = 2095,
  [SMALL_STATE(121)] = 2102,
  [SMALL_STATE(122)] = 2109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(113),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(116),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(120),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 7),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 3, .production_id = 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dottedName, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dottedName, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(118),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 2, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 2, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(103),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ar_expression, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ar_unary_expression, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ar_binary_expression, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ar_expression, 1, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_somme, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_somme, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_somme_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2), SHIFT_REPEAT(3),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(115),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(105),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(119),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(114),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(117),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_publicodes() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
