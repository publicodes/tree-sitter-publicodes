#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  aux_sym_rule_body_token1 = 2,
  aux_sym_rule_body_token2 = 3,
  aux_sym_rule_body_token3 = 4,
  anon_sym_valeur = 5,
  anon_sym_somme = 6,
  anon_sym_DASH = 7,
  sym_identifier = 8,
  sym_true = 9,
  sym_false = 10,
  sym__empty = 11,
  sym_string = 12,
  sym_comment = 13,
  aux_sym_number_token1 = 14,
  aux_sym_units_token1 = 15,
  aux_sym_units_token2 = 16,
  aux_sym__units_token1 = 17,
  aux_sym_unit_token1 = 18,
  sym_exposant = 19,
  sym_source_file = 20,
  sym__rule_name = 21,
  sym_rule_definition = 22,
  sym_rule_body = 23,
  sym__statement = 24,
  sym_mechanism = 25,
  sym_valeur = 26,
  sym_somme = 27,
  sym__expression = 28,
  sym_number = 29,
  sym_units = 30,
  sym__units = 31,
  sym_unit = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_rule_body_repeat1 = 34,
  aux_sym_somme_repeat1 = 35,
  aux_sym_units_repeat1 = 36,
  aux_sym__units_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_rule_body_token1] = "rule_body_token1",
  [aux_sym_rule_body_token2] = "rule_body_token2",
  [aux_sym_rule_body_token3] = "rule_body_token3",
  [anon_sym_valeur] = "valeur",
  [anon_sym_somme] = "somme",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym__empty] = "_empty",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_units_token1] = "units_token1",
  [aux_sym_units_token2] = "units_token2",
  [aux_sym__units_token1] = "_units_token1",
  [aux_sym_unit_token1] = "unit_token1",
  [sym_exposant] = "exposant",
  [sym_source_file] = "source_file",
  [sym__rule_name] = "_rule_name",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_mechanism] = "mechanism",
  [sym_valeur] = "valeur",
  [sym_somme] = "somme",
  [sym__expression] = "_expression",
  [sym_number] = "number",
  [sym_units] = "units",
  [sym__units] = "_units",
  [sym_unit] = "unit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_somme_repeat1] = "somme_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_rule_body_token1] = aux_sym_rule_body_token1,
  [aux_sym_rule_body_token2] = aux_sym_rule_body_token2,
  [aux_sym_rule_body_token3] = aux_sym_rule_body_token3,
  [anon_sym_valeur] = anon_sym_valeur,
  [anon_sym_somme] = anon_sym_somme,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym__empty] = sym__empty,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_units_token1] = aux_sym_units_token1,
  [aux_sym_units_token2] = aux_sym_units_token2,
  [aux_sym__units_token1] = aux_sym__units_token1,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [sym_exposant] = sym_exposant,
  [sym_source_file] = sym_source_file,
  [sym__rule_name] = sym__rule_name,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_mechanism] = sym_mechanism,
  [sym_valeur] = sym_valeur,
  [sym_somme] = sym_somme,
  [sym__expression] = sym__expression,
  [sym_number] = sym_number,
  [sym_units] = sym_units,
  [sym__units] = sym__units,
  [sym_unit] = sym_unit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_somme_repeat1] = aux_sym_somme_repeat1,
  [aux_sym_units_repeat1] = aux_sym_units_repeat1,
  [aux_sym__units_repeat1] = aux_sym__units_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [sym__empty] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_units_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_units_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__units_token1] = {
    .visible = false,
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
  [sym__rule_name] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_definition] = {
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
  field_dottedName = 3,
  field_numerators = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_denominators] = "denominators",
  [field_dottedName] = "dottedName",
  [field_numerators] = "numerators",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_dottedName, 0},
  [1] =
    {field_dottedName, 0, .inherited = true},
    {field_value, 1},
  [3] =
    {field_body, 1},
    {field_dottedName, 0, .inherited = true},
  [5] =
    {field_numerators, 1},
  [6] =
    {field_denominators, 2},
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
  [23] = 23,
  [24] = 5,
  [25] = 8,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 7,
  [30] = 6,
  [31] = 31,
  [32] = 11,
  [33] = 10,
  [34] = 9,
  [35] = 14,
  [36] = 13,
  [37] = 12,
  [38] = 16,
  [39] = 39,
  [40] = 40,
  [41] = 22,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < ','
      ? (c < '$'
        ? c == '"'
        : (c <= '%' || (c >= '\'' && c <= ')')))
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

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < ','
      ? (c < '$'
        ? c == '"'
        : (c <= '%' || (c >= '\'' && c <= ')')))
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

static inline bool aux_sym_unit_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 178 ||
          lookahead == 179) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(38);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '#') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(38);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(5);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(8);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 21:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 22:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 23:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(67);
      END_STATE();
    case 24:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(67);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(76);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 27:
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 28:
      if (eof) ADVANCE(33);
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 178 ||
          lookahead == 179) ADVANCE(77);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 29:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 178 ||
          lookahead == 179) ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(5);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(5);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (lookahead == '\r') SKIP(32)
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_valeur);
      if (lookahead == ' ') ADVANCE(10);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_somme);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_somme);
      if (lookahead == ' ') ADVANCE(10);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(50);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(60);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(48);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(51);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(49);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(56);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(10);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(7);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__empty);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (eof) ADVANCE(33);
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_units_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__units_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(27);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_exposant);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_somme] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_units_token2] = ACTIONS(1),
    [aux_sym__units_token1] = ACTIONS(1),
    [sym_exposant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym__rule_name] = STATE(2),
    [sym_rule_definition] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym__empty] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(45), 1,
      sym_rule_body,
    ACTIONS(13), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
    STATE(44), 2,
      sym__expression,
      sym_number,
    ACTIONS(15), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_string,
  [27] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_valeur,
    ACTIONS(28), 1,
      anon_sym_somme,
    STATE(31), 2,
      sym_valeur,
      sym_somme,
    ACTIONS(23), 3,
      aux_sym_rule_body_token3,
      sym_identifier,
      sym__empty,
    STATE(3), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [54] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_rule_body_token3,
    ACTIONS(35), 1,
      anon_sym_valeur,
    ACTIONS(37), 1,
      anon_sym_somme,
    ACTIONS(39), 2,
      sym_identifier,
      sym__empty,
    STATE(31), 2,
      sym_valeur,
      sym_somme,
    STATE(3), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [83] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym__units_token1,
    STATE(6), 1,
      aux_sym__units_repeat1,
    ACTIONS(43), 7,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
  [105] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym__units_token1,
    STATE(6), 1,
      aux_sym__units_repeat1,
    ACTIONS(49), 7,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
  [127] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_exposant,
    ACTIONS(56), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [147] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym__units_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym__units_repeat1,
    ACTIONS(62), 7,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
  [169] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_units_token1,
    STATE(22), 1,
      sym_units,
    ACTIONS(66), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [190] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym_units_token2,
    STATE(13), 1,
      aux_sym_units_repeat1,
    ACTIONS(72), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [211] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [228] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 8,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [245] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym_units_token2,
    STATE(13), 1,
      aux_sym_units_repeat1,
    ACTIONS(82), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [266] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_units_token2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_units_repeat1,
    ACTIONS(89), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [287] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_DASH,
    STATE(15), 1,
      aux_sym_somme_repeat1,
    ACTIONS(93), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
      sym__empty,
  [307] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 7,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
      aux_sym_units_token2,
  [323] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_DASH,
    STATE(15), 1,
      aux_sym_somme_repeat1,
    ACTIONS(100), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
      sym__empty,
  [343] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(104), 8,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
      sym_identifier,
      sym_true,
      sym_false,
      sym__empty,
      sym_string,
      aux_sym_number_token1,
  [357] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      aux_sym_number_token1,
    STATE(26), 2,
      sym__expression,
      sym_number,
    ACTIONS(108), 3,
      sym_true,
      sym_false,
      sym_string,
  [391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_valeur,
    ACTIONS(114), 1,
      anon_sym_somme,
    STATE(31), 2,
      sym_valeur,
      sym_somme,
    STATE(4), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [410] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 6,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
      sym__empty,
  [425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_number_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(19), 2,
      sym__expression,
      sym_number,
    ACTIONS(122), 3,
      sym_true,
      sym_false,
      sym_string,
  [444] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__units_token1,
    STATE(30), 1,
      aux_sym__units_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(43), 2,
      sym_identifier,
      aux_sym_units_token2,
  [462] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym__units_token1,
    STATE(24), 1,
      aux_sym__units_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(62), 2,
      sym_identifier,
      aux_sym_units_token2,
  [480] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
      sym__empty,
  [494] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym__empty,
    STATE(2), 1,
      sym__rule_name,
    STATE(27), 2,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [514] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym__empty,
    STATE(2), 1,
      sym__rule_name,
    STATE(27), 2,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [534] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_exposant,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(56), 3,
      sym_identifier,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [550] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__units_token1,
    STATE(30), 1,
      aux_sym__units_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(49), 2,
      sym_identifier,
      aux_sym_units_token2,
  [568] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 5,
      aux_sym_rule_body_token3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
      sym__empty,
  [582] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(78), 3,
      sym_identifier,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [595] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(151), 1,
      aux_sym_units_token2,
    STATE(36), 1,
      aux_sym_units_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__empty,
  [612] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      aux_sym_units_token1,
    STATE(41), 1,
      sym_units,
    ACTIONS(66), 2,
      sym_identifier,
      sym__empty,
  [629] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(151), 1,
      aux_sym_units_token2,
    STATE(33), 1,
      aux_sym_units_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__empty,
  [646] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(155), 1,
      aux_sym_units_token2,
    STATE(36), 1,
      aux_sym_units_repeat1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__empty,
  [663] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(49), 3,
      sym_identifier,
      aux_sym_units_token2,
      aux_sym__units_token1,
  [676] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__empty,
    ACTIONS(82), 2,
      sym_identifier,
      aux_sym_units_token2,
  [688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_unit_token1,
    STATE(25), 1,
      sym_unit,
    STATE(38), 1,
      sym__units,
  [701] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__empty,
  [712] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym__empty,
  [723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_unit_token1,
    STATE(25), 1,
      sym_unit,
    STATE(35), 1,
      sym__units,
  [736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_unit_token1,
    STATE(8), 1,
      sym_unit,
    STATE(16), 1,
      sym__units,
  [749] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym__empty,
  [760] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__empty,
  [771] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym__empty,
  [782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_unit_token1,
    STATE(8), 1,
      sym_unit,
    STATE(14), 1,
      sym__units,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_unit_token1,
    STATE(37), 1,
      sym_unit,
  [805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DASH,
    STATE(17), 1,
      aux_sym_somme_repeat1,
  [815] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(176), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
  [823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_unit_token1,
    STATE(12), 1,
      sym_unit,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 357,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 425,
  [SMALL_STATE(24)] = 444,
  [SMALL_STATE(25)] = 462,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 514,
  [SMALL_STATE(29)] = 534,
  [SMALL_STATE(30)] = 550,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 582,
  [SMALL_STATE(33)] = 595,
  [SMALL_STATE(34)] = 612,
  [SMALL_STATE(35)] = 629,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 663,
  [SMALL_STATE(38)] = 676,
  [SMALL_STATE(39)] = 688,
  [SMALL_STATE(40)] = 701,
  [SMALL_STATE(41)] = 712,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 736,
  [SMALL_STATE(44)] = 749,
  [SMALL_STATE(45)] = 760,
  [SMALL_STATE(46)] = 771,
  [SMALL_STATE(47)] = 782,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 805,
  [SMALL_STATE(50)] = 815,
  [SMALL_STATE(51)] = 823,
  [SMALL_STATE(52)] = 833,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(54),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(51),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 3, .production_id = 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 2, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_somme_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2), SHIFT_REPEAT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_somme, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_somme, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_name, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 2, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 2, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
