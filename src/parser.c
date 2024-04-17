#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_COLON = 2,
  anon_sym_formule = 3,
  anon_sym_valeur = 4,
  aux_sym_meta_token1 = 5,
  anon_sym_titre = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_ar_unary_expression_token1 = 9,
  aux_sym_ar_binary_expression_token1 = 10,
  aux_sym_ar_binary_expression_token2 = 11,
  anon_sym_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_LT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_DOT = 18,
  sym_comment = 19,
  anon_sym_oui = 20,
  anon_sym_non = 21,
  sym_string = 22,
  sym_date = 23,
  aux_sym_number_token1 = 24,
  anon_sym_SPACE = 25,
  anon_sym_SLASH = 26,
  anon_sym_DOT2 = 27,
  aux_sym_unit_token1 = 28,
  sym_exposant = 29,
  sym__indent = 30,
  sym__dedent = 31,
  sym__newline = 32,
  sym_error_recovery_mode = 33,
  sym_source_file = 34,
  sym_rule = 35,
  sym_rule_body = 36,
  sym__statement = 37,
  sym_formule = 38,
  sym__valeur = 39,
  sym_mechanism = 40,
  sym_m_valeur = 41,
  sym_meta = 42,
  sym_meta_key = 43,
  sym__expression = 44,
  sym__ar_expression = 45,
  sym_ar_unary_expression = 46,
  sym_ar_binary_expression = 47,
  sym__bool_expression = 48,
  sym_comparison = 49,
  sym__dottedName = 50,
  sym_reference = 51,
  sym_boolean = 52,
  sym_number = 53,
  sym_units = 54,
  sym__units = 55,
  sym_unit = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_rule_body_repeat1 = 58,
  aux_sym__dottedName_repeat1 = 59,
  aux_sym_units_repeat1 = 60,
  aux_sym__units_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_formule] = "formule",
  [anon_sym_valeur] = "valeur",
  [aux_sym_meta_token1] = "meta_token1",
  [anon_sym_titre] = "titre",
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
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_error_recovery_mode] = "error_recovery_mode",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_formule] = "formule",
  [sym__valeur] = "_valeur",
  [sym_mechanism] = "mechanism",
  [sym_m_valeur] = "m_valeur",
  [sym_meta] = "meta",
  [sym_meta_key] = "meta_key",
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
  [aux_sym__dottedName_repeat1] = "_dottedName_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_formule] = anon_sym_formule,
  [anon_sym_valeur] = anon_sym_valeur,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [anon_sym_titre] = anon_sym_titre,
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
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_error_recovery_mode] = sym_error_recovery_mode,
  [sym_source_file] = sym_source_file,
  [sym_rule] = sym_rule,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_formule] = sym_formule,
  [sym__valeur] = sym__valeur,
  [sym_mechanism] = sym_mechanism,
  [sym_m_valeur] = sym_m_valeur,
  [sym_meta] = sym_meta,
  [sym_meta_key] = sym_meta_key,
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
  [anon_sym_formule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valeur] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_titre] = {
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
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_error_recovery_mode] = {
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
  [sym_formule] = {
    .visible = true,
    .named = true,
  },
  [sym__valeur] = {
    .visible = false,
    .named = true,
  },
  [sym_mechanism] = {
    .visible = true,
    .named = true,
  },
  [sym_m_valeur] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_key] = {
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
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
  [1] =
    {field_value, 2},
  [2] =
    {field_numerators, 0},
  [3] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [6] =
    {field_numerators, 0},
    {field_numerators, 1},
  [8] =
    {field_denominators, 1},
    {field_numerators, 0},
  [10] =
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
  [10] = 9,
  [11] = 9,
  [12] = 8,
  [13] = 9,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 19,
  [22] = 22,
  [23] = 14,
  [24] = 24,
  [25] = 18,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 16,
  [34] = 32,
  [35] = 35,
  [36] = 24,
  [37] = 37,
  [38] = 28,
  [39] = 22,
  [40] = 30,
  [41] = 27,
  [42] = 42,
  [43] = 31,
  [44] = 35,
  [45] = 37,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 57,
  [60] = 55,
  [61] = 51,
  [62] = 52,
  [63] = 48,
  [64] = 50,
  [65] = 53,
  [66] = 66,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 76,
  [80] = 70,
  [81] = 76,
  [82] = 71,
  [83] = 72,
  [84] = 84,
  [85] = 69,
  [86] = 78,
  [87] = 55,
  [88] = 84,
  [89] = 89,
  [90] = 50,
  [91] = 51,
  [92] = 48,
  [93] = 73,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 75,
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 109,
  [114] = 110,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 125,
  [132] = 132,
  [133] = 133,
  [134] = 132,
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

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 'f'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'd')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
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

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 'm'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'k')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 'n'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'l')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_7(int32_t c) {
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

static inline bool sym_name_character_set_8(int32_t c) {
  return (c < 's'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'q')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_9(int32_t c) {
  return (c < 'u'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 's')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_10(int32_t c) {
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

static inline bool sym_name_character_set_11(int32_t c) {
  return (c < 'b'
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
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(109);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(17);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '1') ADVANCE(15);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(14);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(109);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (lookahead == '\r') SKIP(38)
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(109);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (lookahead == '\r') SKIP(40)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 40:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      if (lookahead == '\r') SKIP(40)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (lookahead == '\r') SKIP(42)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(141);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 42:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (lookahead == '\r') SKIP(42)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 43:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      END_STATE();
    case 44:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (lookahead == '\r') SKIP(44)
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (lookahead == '\r') SKIP(48)
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 48:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (lookahead == '\r') SKIP(48)
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ':') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(50)
      if (lookahead == '\r') SKIP(50)
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(50)
      if (lookahead == '\r') SKIP(50)
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(51)
      if (lookahead == '\r') SKIP(51)
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(109);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (lookahead == '\r') SKIP(52)
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(109);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(112);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(112);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 55:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 61:
      if (sym_name_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 62:
      if (sym_name_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 63:
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(63)
      if (lookahead == '\r') SKIP(63)
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '3') ADVANCE(115);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(65)
      if (lookahead == '\r') SKIP(65)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (aux_sym_unit_token1_character_set_2(lookahead)) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(142);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(65)
      if (lookahead == '\r') SKIP(65)
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(66)
      if (lookahead == '\r') SKIP(66)
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(124);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (lookahead == '\r') SKIP(67)
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ':') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_formule);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_formule);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_formule);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_valeur);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_valeur);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_titre);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_titre);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_titre);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(110);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(110);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(110);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_4(lookahead)) ADVANCE(110);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_5(lookahead)) ADVANCE(110);
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_5(lookahead)) ADVANCE(110);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_6(lookahead)) ADVANCE(110);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_7(lookahead)) ADVANCE(110);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_8(lookahead)) ADVANCE(110);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_8(lookahead)) ADVANCE(110);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_8(lookahead)) ADVANCE(110);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_9(lookahead)) ADVANCE(110);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_10(lookahead)) ADVANCE(110);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_10(lookahead)) ADVANCE(110);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_11(lookahead)) ADVANCE(110);
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(117);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(142);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(142);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(142);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_4(lookahead)) ADVANCE(142);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_5(lookahead)) ADVANCE(142);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_5(lookahead)) ADVANCE(142);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_6(lookahead)) ADVANCE(142);
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_7(lookahead)) ADVANCE(142);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_8(lookahead)) ADVANCE(142);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_8(lookahead)) ADVANCE(142);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_8(lookahead)) ADVANCE(142);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_9(lookahead)) ADVANCE(142);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_10(lookahead)) ADVANCE(142);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_10(lookahead)) ADVANCE(142);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_11(lookahead)) ADVANCE(142);
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(143);
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
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 51, .external_lex_state = 2},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 63, .external_lex_state = 3},
  [5] = {.lex_state = 63, .external_lex_state = 4},
  [6] = {.lex_state = 63, .external_lex_state = 4},
  [7] = {.lex_state = 63, .external_lex_state = 4},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 41, .external_lex_state = 2},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 44, .external_lex_state = 2},
  [17] = {.lex_state = 44, .external_lex_state = 2},
  [18] = {.lex_state = 44, .external_lex_state = 2},
  [19] = {.lex_state = 44, .external_lex_state = 2},
  [20] = {.lex_state = 66},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 44, .external_lex_state = 2},
  [23] = {.lex_state = 64, .external_lex_state = 2},
  [24] = {.lex_state = 50, .external_lex_state = 2},
  [25] = {.lex_state = 66},
  [26] = {.lex_state = 50, .external_lex_state = 2},
  [27] = {.lex_state = 44, .external_lex_state = 2},
  [28] = {.lex_state = 44, .external_lex_state = 2},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 44, .external_lex_state = 2},
  [31] = {.lex_state = 44, .external_lex_state = 2},
  [32] = {.lex_state = 50, .external_lex_state = 2},
  [33] = {.lex_state = 66},
  [34] = {.lex_state = 67},
  [35] = {.lex_state = 44, .external_lex_state = 2},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 44, .external_lex_state = 2},
  [38] = {.lex_state = 66},
  [39] = {.lex_state = 66},
  [40] = {.lex_state = 66},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 66},
  [45] = {.lex_state = 66},
  [46] = {.lex_state = 44, .external_lex_state = 2},
  [47] = {.lex_state = 50, .external_lex_state = 2},
  [48] = {.lex_state = 44, .external_lex_state = 2},
  [49] = {.lex_state = 66},
  [50] = {.lex_state = 44, .external_lex_state = 2},
  [51] = {.lex_state = 44, .external_lex_state = 2},
  [52] = {.lex_state = 44, .external_lex_state = 2},
  [53] = {.lex_state = 44, .external_lex_state = 2},
  [54] = {.lex_state = 44, .external_lex_state = 2},
  [55] = {.lex_state = 44, .external_lex_state = 2},
  [56] = {.lex_state = 44, .external_lex_state = 2},
  [57] = {.lex_state = 44, .external_lex_state = 2},
  [58] = {.lex_state = 66},
  [59] = {.lex_state = 66},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 66},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 66},
  [66] = {.lex_state = 44, .external_lex_state = 2},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 44, .external_lex_state = 2},
  [69] = {.lex_state = 44, .external_lex_state = 2},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 63},
  [72] = {.lex_state = 63},
  [73] = {.lex_state = 44, .external_lex_state = 2},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 44, .external_lex_state = 2},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 44, .external_lex_state = 2},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 63},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 63},
  [83] = {.lex_state = 63},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 63},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 44, .external_lex_state = 2},
  [88] = {.lex_state = 44},
  [89] = {.lex_state = 63},
  [90] = {.lex_state = 44},
  [91] = {.lex_state = 44},
  [92] = {.lex_state = 44, .external_lex_state = 2},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 63},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 63},
  [102] = {.lex_state = 63},
  [103] = {.lex_state = 44, .external_lex_state = 2},
  [104] = {.lex_state = 44, .external_lex_state = 2},
  [105] = {.lex_state = 44, .external_lex_state = 2},
  [106] = {.lex_state = 44, .external_lex_state = 2},
  [107] = {.lex_state = 44, .external_lex_state = 2},
  [108] = {.lex_state = 44, .external_lex_state = 2},
  [109] = {.lex_state = 54},
  [110] = {.lex_state = 54},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 54},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 1, .external_lex_state = 4},
  [116] = {.lex_state = 54},
  [117] = {.lex_state = 63},
  [118] = {.lex_state = 63},
  [119] = {.lex_state = 63},
  [120] = {.lex_state = 63},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 63},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 63},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 63},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_formule] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_titre] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_ar_unary_expression_token1] = ACTIONS(1),
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
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_error_recovery_mode] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym_rule] = STATE(102),
    [sym__dottedName] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_formule,
    ACTIONS(13), 1,
      anon_sym_valeur,
    ACTIONS(15), 1,
      anon_sym_titre,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      sym__dedent,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    STATE(107), 1,
      sym_m_valeur,
    STATE(126), 1,
      sym_meta_key,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(23), 2,
      sym_string,
      sym_date,
    STATE(87), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(99), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(66), 5,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_meta,
      aux_sym_rule_body_repeat1,
  [69] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      anon_sym_valeur,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    STATE(107), 1,
      sym_m_valeur,
    STATE(127), 1,
      sym_mechanism,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(31), 2,
      sym_string,
      sym_date,
    STATE(87), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(96), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [122] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym__indent,
    ACTIONS(47), 1,
      sym__newline,
    STATE(58), 1,
      sym__dottedName,
    STATE(61), 1,
      sym_reference,
    STATE(64), 1,
      sym_number,
    STATE(89), 1,
      sym_boolean,
    STATE(122), 1,
      sym_rule_body,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(41), 2,
      sym_string,
      sym_date,
    STATE(60), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(94), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [177] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(51), 1,
      sym__indent,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    STATE(103), 1,
      sym__valeur,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(49), 2,
      sym_string,
      sym_date,
    STATE(87), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(97), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [227] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym__indent,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    STATE(103), 1,
      sym__valeur,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(55), 2,
      sym_string,
      sym_date,
    STATE(55), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(75), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [277] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym__indent,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    STATE(105), 1,
      sym__valeur,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(55), 2,
      sym_string,
      sym_date,
    STATE(55), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(75), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [327] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(61), 1,
      sym_reference,
    STATE(64), 1,
      sym_number,
    STATE(89), 1,
      sym_boolean,
    STATE(100), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(59), 2,
      sym_string,
      sym_date,
    STATE(98), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(88), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [375] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(61), 2,
      sym_string,
      sym_date,
    STATE(87), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(73), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [419] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(90), 1,
      sym_number,
    STATE(91), 1,
      sym_reference,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(60), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(93), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [463] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(61), 1,
      sym_reference,
    STATE(64), 1,
      sym_number,
    STATE(89), 1,
      sym_boolean,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(60), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(93), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(61), 1,
      sym_reference,
    STATE(64), 1,
      sym_number,
    STATE(89), 1,
      sym_boolean,
    STATE(100), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(59), 2,
      sym_string,
      sym_date,
    STATE(95), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(84), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [557] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(50), 1,
      sym_number,
    STATE(51), 1,
      sym_reference,
    STATE(56), 1,
      sym__dottedName,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(61), 2,
      sym_string,
      sym_date,
    STATE(55), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(73), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [601] = 8,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SPACE,
    ACTIONS(71), 1,
      aux_sym_unit_token1,
    ACTIONS(73), 1,
      sym__dedent,
    STATE(17), 1,
      sym_unit,
    STATE(22), 1,
      sym__units,
    STATE(57), 1,
      sym_units,
    ACTIONS(65), 11,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [636] = 8,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_SPACE,
    ACTIONS(77), 1,
      aux_sym_unit_token1,
    STATE(20), 1,
      sym_unit,
    STATE(39), 1,
      sym__units,
    STATE(59), 1,
      sym_units,
    ACTIONS(65), 10,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(83), 1,
      anon_sym_DOT2,
    STATE(16), 1,
      aux_sym__units_repeat1,
    ACTIONS(79), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT2,
    STATE(18), 1,
      aux_sym__units_repeat1,
    ACTIONS(86), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DOT2,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym__units_repeat1,
    ACTIONS(92), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      sym_exposant,
    ACTIONS(96), 13,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT2,
    STATE(25), 1,
      aux_sym__units_repeat1,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      sym_exposant,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_DOT2,
  [826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(37), 1,
      aux_sym_units_repeat1,
    ACTIONS(106), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [850] = 8,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SPACE,
    ACTIONS(73), 1,
      sym__dedent,
    ACTIONS(110), 1,
      aux_sym_unit_token1,
    STATE(17), 1,
      sym_unit,
    STATE(22), 1,
      sym__units,
    STATE(57), 1,
      sym_units,
    ACTIONS(65), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(112), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT2,
    STATE(33), 1,
      aux_sym__units_repeat1,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(117), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(79), 13,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_units_repeat1,
    ACTIONS(121), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(117), 12,
      ts_builtin_sym_end,
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
      sym_name,
  [1026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_units_repeat1,
    ACTIONS(128), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_units_repeat1,
    ACTIONS(130), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(132), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(33), 1,
      aux_sym__units_repeat1,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(132), 12,
      ts_builtin_sym_end,
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
      sym_name,
  [1148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(137), 13,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [1170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(112), 12,
      ts_builtin_sym_end,
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
      sym_name,
  [1194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_units_repeat1,
    ACTIONS(144), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_units_repeat1,
    ACTIONS(121), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      aux_sym_units_repeat1,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_units_repeat1,
    ACTIONS(128), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(79), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_DOT2,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
      ts_builtin_sym_end,
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
      sym_name,
  [1327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(40), 1,
      aux_sym_units_repeat1,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
      anon_sym_DOT2,
  [1371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      aux_sym_units_repeat1,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(121), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(153), 11,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(121), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(165), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 12,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_formule,
    ACTIONS(180), 1,
      anon_sym_valeur,
    ACTIONS(182), 1,
      anon_sym_titre,
    ACTIONS(184), 1,
      sym__dedent,
    STATE(107), 1,
      sym_m_valeur,
    STATE(126), 1,
      sym_meta_key,
    STATE(68), 5,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_meta,
      aux_sym_rule_body_repeat1,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [1820] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_formule,
    ACTIONS(189), 1,
      anon_sym_valeur,
    ACTIONS(192), 1,
      anon_sym_titre,
    ACTIONS(195), 1,
      sym__dedent,
    STATE(107), 1,
      sym_m_valeur,
    STATE(126), 1,
      sym_meta_key,
    STATE(68), 5,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_meta,
      aux_sym_rule_body_repeat1,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1865] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(62), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [1891] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(54), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [1917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(112), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [1959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(52), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
    ACTIONS(215), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2003] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(63), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2029] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(54), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2071] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(92), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(52), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2123] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(203), 1,
      sym_name,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      aux_sym_number_token1,
    STATE(56), 1,
      sym__dottedName,
    STATE(48), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2149] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(67), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2175] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(58), 1,
      sym__dottedName,
    STATE(111), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [2201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(223), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(157), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(153), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_name,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_name,
    ACTIONS(231), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__dedent,
    ACTIONS(235), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__dedent,
    ACTIONS(235), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__dedent,
    ACTIONS(235), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym_name,
    STATE(133), 1,
      sym__dottedName,
    STATE(101), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [2495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym__dottedName,
    STATE(101), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      sym__dedent,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_titre,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_unit_token1,
    STATE(17), 1,
      sym_unit,
    STATE(46), 1,
      sym__units,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_unit_token1,
    STATE(20), 1,
      sym_unit,
    STATE(43), 1,
      sym__units,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [2611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [2624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_unit_token1,
    STATE(20), 1,
      sym_unit,
    STATE(49), 1,
      sym__units,
  [2637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_unit_token1,
    STATE(17), 1,
      sym_unit,
    STATE(31), 1,
      sym__units,
  [2650] = 3,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_meta_token1,
    ACTIONS(266), 1,
      sym__indent,
  [2660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_unit_token1,
    STATE(27), 1,
      sym_unit,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym_name,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_name,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      sym_name,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      sym_name,
  [2702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_unit_token1,
    STATE(41), 1,
      sym_unit,
  [2712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym_name,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [2727] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_meta_token1,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_name,
  [2741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__dedent,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym__dedent,
  [2762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_name,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 227,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 463,
  [SMALL_STATE(12)] = 509,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 601,
  [SMALL_STATE(15)] = 636,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 697,
  [SMALL_STATE(18)] = 724,
  [SMALL_STATE(19)] = 751,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 850,
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 906,
  [SMALL_STATE(26)] = 932,
  [SMALL_STATE(27)] = 956,
  [SMALL_STATE(28)] = 978,
  [SMALL_STATE(29)] = 1002,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1098,
  [SMALL_STATE(34)] = 1124,
  [SMALL_STATE(35)] = 1148,
  [SMALL_STATE(36)] = 1170,
  [SMALL_STATE(37)] = 1194,
  [SMALL_STATE(38)] = 1218,
  [SMALL_STATE(39)] = 1241,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1287,
  [SMALL_STATE(42)] = 1308,
  [SMALL_STATE(43)] = 1327,
  [SMALL_STATE(44)] = 1350,
  [SMALL_STATE(45)] = 1371,
  [SMALL_STATE(46)] = 1394,
  [SMALL_STATE(47)] = 1415,
  [SMALL_STATE(48)] = 1434,
  [SMALL_STATE(49)] = 1454,
  [SMALL_STATE(50)] = 1474,
  [SMALL_STATE(51)] = 1494,
  [SMALL_STATE(52)] = 1514,
  [SMALL_STATE(53)] = 1532,
  [SMALL_STATE(54)] = 1550,
  [SMALL_STATE(55)] = 1568,
  [SMALL_STATE(56)] = 1590,
  [SMALL_STATE(57)] = 1608,
  [SMALL_STATE(58)] = 1626,
  [SMALL_STATE(59)] = 1643,
  [SMALL_STATE(60)] = 1660,
  [SMALL_STATE(61)] = 1681,
  [SMALL_STATE(62)] = 1702,
  [SMALL_STATE(63)] = 1719,
  [SMALL_STATE(64)] = 1738,
  [SMALL_STATE(65)] = 1757,
  [SMALL_STATE(66)] = 1774,
  [SMALL_STATE(67)] = 1803,
  [SMALL_STATE(68)] = 1820,
  [SMALL_STATE(69)] = 1849,
  [SMALL_STATE(70)] = 1865,
  [SMALL_STATE(71)] = 1891,
  [SMALL_STATE(72)] = 1917,
  [SMALL_STATE(73)] = 1943,
  [SMALL_STATE(74)] = 1959,
  [SMALL_STATE(75)] = 1985,
  [SMALL_STATE(76)] = 2003,
  [SMALL_STATE(77)] = 2029,
  [SMALL_STATE(78)] = 2055,
  [SMALL_STATE(79)] = 2071,
  [SMALL_STATE(80)] = 2097,
  [SMALL_STATE(81)] = 2123,
  [SMALL_STATE(82)] = 2149,
  [SMALL_STATE(83)] = 2175,
  [SMALL_STATE(84)] = 2201,
  [SMALL_STATE(85)] = 2222,
  [SMALL_STATE(86)] = 2237,
  [SMALL_STATE(87)] = 2252,
  [SMALL_STATE(88)] = 2271,
  [SMALL_STATE(89)] = 2292,
  [SMALL_STATE(90)] = 2309,
  [SMALL_STATE(91)] = 2326,
  [SMALL_STATE(92)] = 2343,
  [SMALL_STATE(93)] = 2360,
  [SMALL_STATE(94)] = 2375,
  [SMALL_STATE(95)] = 2391,
  [SMALL_STATE(96)] = 2406,
  [SMALL_STATE(97)] = 2421,
  [SMALL_STATE(98)] = 2436,
  [SMALL_STATE(99)] = 2451,
  [SMALL_STATE(100)] = 2466,
  [SMALL_STATE(101)] = 2478,
  [SMALL_STATE(102)] = 2495,
  [SMALL_STATE(103)] = 2512,
  [SMALL_STATE(104)] = 2522,
  [SMALL_STATE(105)] = 2532,
  [SMALL_STATE(106)] = 2542,
  [SMALL_STATE(107)] = 2552,
  [SMALL_STATE(108)] = 2562,
  [SMALL_STATE(109)] = 2572,
  [SMALL_STATE(110)] = 2585,
  [SMALL_STATE(111)] = 2598,
  [SMALL_STATE(112)] = 2611,
  [SMALL_STATE(113)] = 2624,
  [SMALL_STATE(114)] = 2637,
  [SMALL_STATE(115)] = 2650,
  [SMALL_STATE(116)] = 2660,
  [SMALL_STATE(117)] = 2670,
  [SMALL_STATE(118)] = 2678,
  [SMALL_STATE(119)] = 2686,
  [SMALL_STATE(120)] = 2694,
  [SMALL_STATE(121)] = 2702,
  [SMALL_STATE(122)] = 2712,
  [SMALL_STATE(123)] = 2720,
  [SMALL_STATE(124)] = 2727,
  [SMALL_STATE(125)] = 2734,
  [SMALL_STATE(126)] = 2741,
  [SMALL_STATE(127)] = 2748,
  [SMALL_STATE(128)] = 2755,
  [SMALL_STATE(129)] = 2762,
  [SMALL_STATE(130)] = 2769,
  [SMALL_STATE(131)] = 2776,
  [SMALL_STATE(132)] = 2783,
  [SMALL_STATE(133)] = 2790,
  [SMALL_STATE(134)] = 2797,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(116),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(125),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(109),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(121),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(131),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 6),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(113),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(130),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(132),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(123),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_valeur, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_key, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [288] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_error_recovery_mode = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_error_recovery_mode] = sym_error_recovery_mode,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_error_recovery_mode] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_publicodes_external_scanner_create(void);
void tree_sitter_publicodes_external_scanner_destroy(void *);
bool tree_sitter_publicodes_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_publicodes_external_scanner_serialize(void *, char *);
void tree_sitter_publicodes_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_publicodes_external_scanner_create,
      tree_sitter_publicodes_external_scanner_destroy,
      tree_sitter_publicodes_external_scanner_scan,
      tree_sitter_publicodes_external_scanner_serialize,
      tree_sitter_publicodes_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
