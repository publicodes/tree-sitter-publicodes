#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_DOT = 20,
  sym__empty = 21,
  sym_comment = 22,
  anon_sym_oui = 23,
  anon_sym_non = 24,
  sym_string = 25,
  sym_date = 26,
  aux_sym_number_token1 = 27,
  anon_sym_SPACE = 28,
  anon_sym_SLASH = 29,
  anon_sym_DOT2 = 30,
  aux_sym_unit_token1 = 31,
  sym_exposant = 32,
  sym_source_file = 33,
  sym_rule = 34,
  sym_rule_body = 35,
  sym__statement = 36,
  sym_mechanism = 37,
  sym_valeur = 38,
  sym_somme = 39,
  sym__expression = 40,
  sym__ar_expression = 41,
  sym_ar_unary_expression = 42,
  sym_ar_binary_expression = 43,
  sym__bool_expression = 44,
  sym_comparison = 45,
  sym__dottedName = 46,
  sym_reference = 47,
  sym_boolean = 48,
  sym_number = 49,
  sym_units = 50,
  sym__units = 51,
  sym_unit = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_rule_body_repeat1 = 54,
  aux_sym_somme_repeat1 = 55,
  aux_sym__dottedName_repeat1 = 56,
  aux_sym_units_repeat1 = 57,
  aux_sym__units_repeat1 = 58,
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
  [anon_sym_EQ] = " = ",
  [anon_sym_BANG_EQ] = " != ",
  [anon_sym_LT] = " < ",
  [anon_sym_LT_EQ] = " <= ",
  [anon_sym_GT] = " > ",
  [anon_sym_GT_EQ] = " >= ",
  [anon_sym_DOT] = " . ",
  [sym__empty] = "_empty",
  [sym_comment] = "comment",
  [anon_sym_oui] = "oui",
  [anon_sym_non] = "non",
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
  [sym__bool_expression] = "_bool_expression",
  [sym_comparison] = "comparison",
  [sym__dottedName] = "_dottedName",
  [sym_reference] = "reference",
  [sym_boolean] = "boolean",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__empty] = sym__empty,
  [sym_comment] = sym_comment,
  [anon_sym_oui] = anon_sym_oui,
  [anon_sym_non] = anon_sym_non,
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
  [sym__bool_expression] = sym__bool_expression,
  [sym_comparison] = sym_comparison,
  [sym__dottedName] = sym__dottedName,
  [sym_reference] = sym_reference,
  [sym_boolean] = sym_boolean,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
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
  [anon_sym_oui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non] = {
    .visible = true,
    .named = false,
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
  [sym__bool_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym__dottedName] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 5,
  [14] = 14,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 3,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 14,
  [39] = 12,
  [40] = 8,
  [41] = 3,
  [42] = 7,
  [43] = 24,
  [44] = 44,
  [45] = 16,
  [46] = 25,
  [47] = 47,
  [48] = 23,
  [49] = 49,
  [50] = 22,
  [51] = 19,
  [52] = 18,
  [53] = 17,
  [54] = 54,
  [55] = 20,
  [56] = 21,
  [57] = 14,
  [58] = 27,
  [59] = 12,
  [60] = 24,
  [61] = 28,
  [62] = 23,
  [63] = 7,
  [64] = 25,
  [65] = 65,
  [66] = 8,
  [67] = 21,
  [68] = 68,
  [69] = 28,
  [70] = 22,
  [71] = 18,
  [72] = 20,
  [73] = 19,
  [74] = 17,
  [75] = 36,
  [76] = 35,
  [77] = 31,
  [78] = 30,
  [79] = 33,
  [80] = 80,
  [81] = 37,
  [82] = 34,
  [83] = 16,
  [84] = 32,
  [85] = 29,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 88,
  [92] = 86,
  [93] = 88,
  [94] = 87,
  [95] = 89,
  [96] = 86,
  [97] = 27,
  [98] = 89,
  [99] = 37,
  [100] = 33,
  [101] = 47,
  [102] = 102,
  [103] = 103,
  [104] = 54,
  [105] = 31,
  [106] = 103,
  [107] = 30,
  [108] = 33,
  [109] = 29,
  [110] = 103,
  [111] = 35,
  [112] = 32,
  [113] = 36,
  [114] = 30,
  [115] = 34,
  [116] = 44,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 54,
  [122] = 119,
  [123] = 47,
  [124] = 44,
  [125] = 125,
  [126] = 119,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 131,
  [133] = 131,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 136,
  [140] = 135,
  [141] = 141,
  [142] = 135,
  [143] = 143,
  [144] = 143,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 148,
  [152] = 148,
  [153] = 153,
  [154] = 154,
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
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == ':') ADVANCE(69);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(73);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '#') ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(73);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '#') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '#') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(34);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '1') ADVANCE(31);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (lookahead == '\r') SKIP(40)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 40:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (lookahead == '\r') SKIP(40)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == ':') ADVANCE(69);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (lookahead == '\r') SKIP(41)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(87);
      END_STATE();
    case 42:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (lookahead == '\r') SKIP(41)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(87);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 43:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 44:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ':') ADVANCE(69);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '3') ADVANCE(111);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (lookahead == '\r') SKIP(47)
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 48:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 54:
      if (sym_name_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 55:
      if (sym_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 56:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(61)
      if (aux_sym_unit_token1_character_set_2(lookahead)) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(127);
      END_STATE();
    case 57:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(76);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 58:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 59:
      if (eof) ADVANCE(68);
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 60:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 61:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 62:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 63:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '#') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(65)
      if (aux_sym_unit_token1_character_set_2(lookahead)) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(127);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '#') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '#') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(66)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '-') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(54);
      if (sym_name_character_set_2(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\t') ADVANCE(72);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(6);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(10);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(13);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(14);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(16);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(19);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(113);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(14);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(55);
      if (sym_name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(128);
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
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_oui);
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
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 58},
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 66},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 60},
  [53] = {.lex_state = 60},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 60},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 60},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 60},
  [78] = {.lex_state = 60},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 60},
  [82] = {.lex_state = 60},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 60},
  [85] = {.lex_state = 60},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 46},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 60},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 60},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 60},
  [128] = {.lex_state = 60},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 45},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 45},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 47},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_oui] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_exposant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(154),
    [sym_rule] = STATE(127),
    [sym__dottedName] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym__empty] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
    ACTIONS(27), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym__dottedName,
    STATE(78), 1,
      sym_reference,
    STATE(79), 1,
      sym_number,
    STATE(138), 1,
      sym_rule_body,
    ACTIONS(15), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
    ACTIONS(23), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(25), 2,
      sym_string,
      sym_date,
    STATE(76), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(102), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [54] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_SPACE,
    ACTIONS(35), 1,
      aux_sym_unit_token1,
    STATE(14), 1,
      sym_unit,
    STATE(16), 1,
      sym__units,
    STATE(36), 1,
      sym_units,
    ACTIONS(31), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [92] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    STATE(30), 1,
      sym_reference,
    STATE(31), 1,
      sym__dottedName,
    STATE(33), 1,
      sym_number,
    ACTIONS(43), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(45), 2,
      sym_string,
      sym_date,
    STATE(35), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(44), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [136] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(107), 1,
      sym_reference,
    STATE(108), 1,
      sym_number,
    STATE(120), 1,
      sym_boolean,
    STATE(129), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(55), 2,
      sym_string,
      sym_date,
    STATE(126), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(103), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [184] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(107), 1,
      sym_reference,
    STATE(108), 1,
      sym_number,
    STATE(120), 1,
      sym_boolean,
    STATE(129), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(55), 2,
      sym_string,
      sym_date,
    STATE(122), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(106), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [232] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_DOT2,
    STATE(7), 1,
      aux_sym__units_repeat1,
    ACTIONS(61), 15,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [262] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_exposant,
    ACTIONS(68), 16,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [290] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    STATE(30), 1,
      sym_reference,
    STATE(31), 1,
      sym__dottedName,
    STATE(33), 1,
      sym_number,
    ACTIONS(43), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(72), 2,
      sym_string,
      sym_date,
    STATE(35), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(49), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [334] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(100), 1,
      sym_number,
    STATE(105), 1,
      sym__dottedName,
    STATE(114), 1,
      sym_reference,
    ACTIONS(53), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(74), 2,
      sym_string,
      sym_date,
    STATE(111), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(124), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [378] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    STATE(30), 1,
      sym_reference,
    STATE(31), 1,
      sym__dottedName,
    STATE(33), 1,
      sym_number,
    ACTIONS(43), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(76), 2,
      sym_string,
      sym_date,
    STATE(35), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(65), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [422] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_DOT2,
    STATE(7), 1,
      aux_sym__units_repeat1,
    ACTIONS(80), 15,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [452] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(107), 1,
      sym_reference,
    STATE(108), 1,
      sym_number,
    STATE(120), 1,
      sym_boolean,
    STATE(129), 1,
      sym__expression,
    ACTIONS(53), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(55), 2,
      sym_string,
      sym_date,
    STATE(119), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(110), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [500] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOT2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym__units_repeat1,
    ACTIONS(86), 15,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [530] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      aux_sym_ar_unary_expression_token1,
    STATE(77), 1,
      sym__dottedName,
    STATE(78), 1,
      sym_reference,
    STATE(79), 1,
      sym_number,
    ACTIONS(23), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(92), 2,
      sym_string,
      sym_date,
    STATE(76), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(116), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [574] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_units_repeat1,
    ACTIONS(96), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [603] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 16,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [628] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_units_repeat1,
    ACTIONS(106), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [657] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 16,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [682] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_units_repeat1,
    ACTIONS(110), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [711] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_units_repeat1,
    ACTIONS(114), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [740] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      aux_sym_units_repeat1,
    ACTIONS(118), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [769] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [798] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(132), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [827] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(138), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [856] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_SPACE,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(38), 1,
      sym_unit,
    STATE(45), 1,
      sym__units,
    STATE(75), 1,
      sym_units,
    ACTIONS(31), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [890] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 15,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
      anon_sym_SLASH,
  [914] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 15,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
      sym_name,
      sym__empty,
  [938] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [961] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(150), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [986] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1009] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1032] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(150), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1057] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(164), 13,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1082] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(168), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(150), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1109] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1132] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 14,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1155] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOT2,
    STATE(39), 1,
      aux_sym__units_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(86), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
  [1181] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DOT2,
    STATE(42), 1,
      aux_sym__units_repeat1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(80), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
  [1207] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_exposant,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(68), 11,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1231] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SPACE,
    ACTIONS(180), 1,
      aux_sym_unit_token1,
    STATE(57), 1,
      sym_unit,
    STATE(83), 1,
      sym__units,
    STATE(113), 1,
      sym_units,
    ACTIONS(31), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1261] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT2,
    STATE(42), 1,
      aux_sym__units_repeat1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(61), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
  [1287] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(132), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1312] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1333] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_units_repeat1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(96), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1358] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(138), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1383] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1404] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(125), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1429] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_name,
      sym__empty,
    ACTIONS(204), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1452] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_units_repeat1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(118), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1477] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(61), 11,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1498] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      aux_sym_units_repeat1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(106), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1523] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(102), 11,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [1544] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 12,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      sym__empty,
  [1565] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_units_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(110), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1590] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_units_repeat1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(114), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    ACTIONS(213), 1,
      anon_sym_DOT2,
    STATE(59), 1,
      aux_sym__units_repeat1,
    ACTIONS(84), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1639] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(118), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_SLASH,
  [1659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    ACTIONS(213), 1,
      anon_sym_DOT2,
    STATE(63), 1,
      aux_sym__units_repeat1,
    ACTIONS(78), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(130), 10,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1705] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(125), 10,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
      sym_name,
  [1725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(123), 10,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(220), 1,
      anon_sym_DOT2,
    STATE(63), 1,
      aux_sym__units_repeat1,
    ACTIONS(59), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(136), 10,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1793] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
    ACTIONS(204), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      sym_exposant,
    ACTIONS(66), 10,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [1837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      aux_sym_units_repeat1,
    ACTIONS(112), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1858] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_valeur,
    ACTIONS(238), 1,
      anon_sym_somme,
    STATE(130), 2,
      sym_valeur,
      sym_somme,
    ACTIONS(233), 3,
      aux_sym_rule_body_token3,
      sym_name,
      sym__empty,
    STATE(68), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 11,
      anon_sym_COLON,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      aux_sym_units_repeat1,
    ACTIONS(116), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    STATE(67), 1,
      aux_sym_units_repeat1,
    ACTIONS(104), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      aux_sym_units_repeat1,
    ACTIONS(108), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(59), 10,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SLASH,
    ACTIONS(100), 10,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [2003] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(172), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2022] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(246), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(150), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2045] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(156), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2064] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(152), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(150), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2085] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(152), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(150), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2106] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_rule_body_token3,
    ACTIONS(254), 1,
      anon_sym_valeur,
    ACTIONS(256), 1,
      anon_sym_somme,
    ACTIONS(250), 2,
      sym_name,
      sym__empty,
    STATE(130), 2,
      sym_valeur,
      sym_somme,
    STATE(68), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [2135] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(164), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2154] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(164), 8,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      aux_sym_units_repeat1,
    ACTIONS(94), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2196] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(160), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2215] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(146), 9,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(99), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(115), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2286] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(264), 1,
      sym_name,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym__dottedName,
    STATE(84), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(140), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(270), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_number_token1,
    STATE(31), 1,
      sym__dottedName,
    STATE(34), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(270), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_number_token1,
    STATE(31), 1,
      sym__dottedName,
    STATE(32), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2390] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(270), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_number_token1,
    STATE(31), 1,
      sym__dottedName,
    STATE(37), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2416] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(112), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(264), 1,
      sym_name,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym__dottedName,
    STATE(82), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(142), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(264), 1,
      sym_name,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym__dottedName,
    STATE(81), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(116), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(258), 1,
      sym_name,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(135), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2596] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(195), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2613] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_name,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(282), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2653] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(211), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(148), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(162), 8,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2861] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(189), 7,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2878] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      anon_sym_DASH,
    STATE(118), 1,
      aux_sym_somme_repeat1,
    ACTIONS(299), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [2898] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      anon_sym_DASH,
    STATE(118), 1,
      aux_sym_somme_repeat1,
    ACTIONS(202), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [2918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_valeur,
    ACTIONS(314), 1,
      anon_sym_somme,
    STATE(130), 2,
      sym_valeur,
      sym_somme,
    STATE(80), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [3021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3036] = 6,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      sym__empty,
    STATE(153), 1,
      sym__dottedName,
    STATE(128), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [3056] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      sym_name,
    ACTIONS(327), 1,
      sym__empty,
    STATE(153), 1,
      sym__dottedName,
    STATE(128), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3088] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_name,
      sym__empty,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(38), 1,
      sym_unit,
    STATE(52), 1,
      sym__units,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_unit_token1,
    STATE(57), 1,
      sym_unit,
    STATE(71), 1,
      sym__units,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_unit_token1,
    STATE(14), 1,
      sym_unit,
    STATE(18), 1,
      sym__units,
  [3141] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_name,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__empty,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_unit_token1,
    STATE(57), 1,
      sym_unit,
    STATE(97), 1,
      sym__units,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(38), 1,
      sym_unit,
    STATE(58), 1,
      sym__units,
  [3191] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_name,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__empty,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_unit_token1,
    STATE(14), 1,
      sym_unit,
    STATE(27), 1,
      sym__units,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [3228] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_name,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__empty,
  [3239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(288), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [3252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_unit_token1,
    STATE(19), 1,
      sym_unit,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unit_token1,
    STATE(51), 1,
      sym_unit,
  [3272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_unit_token1,
    STATE(73), 1,
      sym_unit,
  [3282] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(350), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DASH,
    STATE(117), 1,
      aux_sym_somme_repeat1,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_name,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_name,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_name,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 452,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 603,
  [SMALL_STATE(18)] = 628,
  [SMALL_STATE(19)] = 657,
  [SMALL_STATE(20)] = 682,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 740,
  [SMALL_STATE(23)] = 769,
  [SMALL_STATE(24)] = 798,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 856,
  [SMALL_STATE(27)] = 890,
  [SMALL_STATE(28)] = 914,
  [SMALL_STATE(29)] = 938,
  [SMALL_STATE(30)] = 961,
  [SMALL_STATE(31)] = 986,
  [SMALL_STATE(32)] = 1009,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1057,
  [SMALL_STATE(35)] = 1082,
  [SMALL_STATE(36)] = 1109,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1155,
  [SMALL_STATE(39)] = 1181,
  [SMALL_STATE(40)] = 1207,
  [SMALL_STATE(41)] = 1231,
  [SMALL_STATE(42)] = 1261,
  [SMALL_STATE(43)] = 1287,
  [SMALL_STATE(44)] = 1312,
  [SMALL_STATE(45)] = 1333,
  [SMALL_STATE(46)] = 1358,
  [SMALL_STATE(47)] = 1383,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1429,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1477,
  [SMALL_STATE(52)] = 1498,
  [SMALL_STATE(53)] = 1523,
  [SMALL_STATE(54)] = 1544,
  [SMALL_STATE(55)] = 1565,
  [SMALL_STATE(56)] = 1590,
  [SMALL_STATE(57)] = 1615,
  [SMALL_STATE(58)] = 1639,
  [SMALL_STATE(59)] = 1659,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1705,
  [SMALL_STATE(62)] = 1725,
  [SMALL_STATE(63)] = 1747,
  [SMALL_STATE(64)] = 1771,
  [SMALL_STATE(65)] = 1793,
  [SMALL_STATE(66)] = 1815,
  [SMALL_STATE(67)] = 1837,
  [SMALL_STATE(68)] = 1858,
  [SMALL_STATE(69)] = 1885,
  [SMALL_STATE(70)] = 1902,
  [SMALL_STATE(71)] = 1923,
  [SMALL_STATE(72)] = 1944,
  [SMALL_STATE(73)] = 1965,
  [SMALL_STATE(74)] = 1984,
  [SMALL_STATE(75)] = 2003,
  [SMALL_STATE(76)] = 2022,
  [SMALL_STATE(77)] = 2045,
  [SMALL_STATE(78)] = 2064,
  [SMALL_STATE(79)] = 2085,
  [SMALL_STATE(80)] = 2106,
  [SMALL_STATE(81)] = 2135,
  [SMALL_STATE(82)] = 2154,
  [SMALL_STATE(83)] = 2175,
  [SMALL_STATE(84)] = 2196,
  [SMALL_STATE(85)] = 2215,
  [SMALL_STATE(86)] = 2234,
  [SMALL_STATE(87)] = 2260,
  [SMALL_STATE(88)] = 2286,
  [SMALL_STATE(89)] = 2312,
  [SMALL_STATE(90)] = 2338,
  [SMALL_STATE(91)] = 2364,
  [SMALL_STATE(92)] = 2390,
  [SMALL_STATE(93)] = 2416,
  [SMALL_STATE(94)] = 2442,
  [SMALL_STATE(95)] = 2468,
  [SMALL_STATE(96)] = 2494,
  [SMALL_STATE(97)] = 2520,
  [SMALL_STATE(98)] = 2538,
  [SMALL_STATE(99)] = 2564,
  [SMALL_STATE(100)] = 2579,
  [SMALL_STATE(101)] = 2596,
  [SMALL_STATE(102)] = 2613,
  [SMALL_STATE(103)] = 2632,
  [SMALL_STATE(104)] = 2653,
  [SMALL_STATE(105)] = 2670,
  [SMALL_STATE(106)] = 2685,
  [SMALL_STATE(107)] = 2706,
  [SMALL_STATE(108)] = 2725,
  [SMALL_STATE(109)] = 2742,
  [SMALL_STATE(110)] = 2757,
  [SMALL_STATE(111)] = 2778,
  [SMALL_STATE(112)] = 2797,
  [SMALL_STATE(113)] = 2812,
  [SMALL_STATE(114)] = 2827,
  [SMALL_STATE(115)] = 2844,
  [SMALL_STATE(116)] = 2861,
  [SMALL_STATE(117)] = 2878,
  [SMALL_STATE(118)] = 2898,
  [SMALL_STATE(119)] = 2918,
  [SMALL_STATE(120)] = 2933,
  [SMALL_STATE(121)] = 2948,
  [SMALL_STATE(122)] = 2961,
  [SMALL_STATE(123)] = 2976,
  [SMALL_STATE(124)] = 2989,
  [SMALL_STATE(125)] = 3002,
  [SMALL_STATE(126)] = 3021,
  [SMALL_STATE(127)] = 3036,
  [SMALL_STATE(128)] = 3056,
  [SMALL_STATE(129)] = 3076,
  [SMALL_STATE(130)] = 3088,
  [SMALL_STATE(131)] = 3102,
  [SMALL_STATE(132)] = 3115,
  [SMALL_STATE(133)] = 3128,
  [SMALL_STATE(134)] = 3141,
  [SMALL_STATE(135)] = 3152,
  [SMALL_STATE(136)] = 3165,
  [SMALL_STATE(137)] = 3178,
  [SMALL_STATE(138)] = 3191,
  [SMALL_STATE(139)] = 3202,
  [SMALL_STATE(140)] = 3215,
  [SMALL_STATE(141)] = 3228,
  [SMALL_STATE(142)] = 3239,
  [SMALL_STATE(143)] = 3252,
  [SMALL_STATE(144)] = 3262,
  [SMALL_STATE(145)] = 3272,
  [SMALL_STATE(146)] = 3282,
  [SMALL_STATE(147)] = 3290,
  [SMALL_STATE(148)] = 3300,
  [SMALL_STATE(149)] = 3307,
  [SMALL_STATE(150)] = 3314,
  [SMALL_STATE(151)] = 3321,
  [SMALL_STATE(152)] = 3328,
  [SMALL_STATE(153)] = 3335,
  [SMALL_STATE(154)] = 3342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(143),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 2, .production_id = 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 2, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 3, .production_id = 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(139),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(152),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dottedName, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dottedName, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ar_expression, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ar_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ar_unary_expression, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ar_binary_expression, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(144),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(148),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_somme_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(137),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bool_expression, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(151),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(145),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(150),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(149),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(136),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_somme, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_somme, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2), SHIFT_REPEAT(9),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
