#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_COLON = 1,
  aux_sym_rule_body_token1 = 2,
  aux_sym_rule_body_token2 = 3,
  aux_sym_rule_body_token3 = 4,
  anon_sym_valeur = 5,
  anon_sym_somme = 6,
  anon_sym_DASH = 7,
  sym_identifier = 8,
  sym_empty = 9,
  anon_sym_oui = 10,
  anon_sym_non = 11,
  sym_string = 12,
  sym_comment = 13,
  sym_number = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym__rule_name = 17,
  sym_value_definition = 18,
  sym_rule_definition = 19,
  sym_rule_body = 20,
  sym__statement = 21,
  sym_mechanism = 22,
  sym_valeur = 23,
  sym_somme = 24,
  sym__expression = 25,
  sym_constant = 26,
  sym_boolean = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_rule_body_repeat1 = 29,
  aux_sym_somme_repeat1 = 30,
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
  [sym_empty] = "empty",
  [anon_sym_oui] = "oui",
  [anon_sym_non] = "non",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__rule_name] = "_rule_name",
  [sym_value_definition] = "value_definition",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_mechanism] = "mechanism",
  [sym_valeur] = "valeur",
  [sym_somme] = "somme",
  [sym__expression] = "_expression",
  [sym_constant] = "constant",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_somme_repeat1] = "somme_repeat1",
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
  [sym_empty] = sym_empty,
  [anon_sym_oui] = anon_sym_oui,
  [anon_sym_non] = anon_sym_non,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__rule_name] = sym__rule_name,
  [sym_value_definition] = sym_value_definition,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_mechanism] = sym_mechanism,
  [sym_valeur] = sym_valeur,
  [sym_somme] = sym_somme,
  [sym__expression] = sym__expression,
  [sym_constant] = sym_constant,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_somme_repeat1] = aux_sym_somme_repeat1,
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
  [sym_empty] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_name] = {
    .visible = false,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
};

enum {
  field_body = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
    {field_value, 1},
  [3] =
    {field_body, 1},
    {field_name, 0, .inherited = true},
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
  [23] = 15,
  [24] = 14,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '\''
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= '\'' || c == ','))
    : (c <= '9' || (c < 176
      ? (c < 'a'
        ? (c >= 'A' && c <= 'Z')
        : c <= 'z')
      : (c <= 176 || (c >= 192 && c <= 383)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < '\''
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= '\'' || c == ','))
    : (c <= '9' || (c < 176
      ? (c < 'b'
        ? (c >= 'A' && c <= 'Z')
        : c <= 'z')
      : (c <= 176 || (c >= 192 && c <= 383)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '#') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_rule_body_token2);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_rule_body_token3);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_valeur);
      if (lookahead == ' ') ADVANCE(40);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_somme);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_somme);
      if (lookahead == ' ') ADVANCE(40);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '.') ADVANCE(5);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(49);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(38);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(46);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(43);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(36);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(48);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_empty);
      if (lookahead == '\t') ADVANCE(31);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_somme] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_oui] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__definition] = STATE(10),
    [sym__rule_name] = STATE(2),
    [sym_value_definition] = STATE(10),
    [sym_rule_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      sym_empty,
    ACTIONS(17), 1,
      sym_comment,
    STATE(19), 1,
      sym_rule_body,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
    ACTIONS(13), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(15), 2,
      sym_string,
      sym_number,
    STATE(18), 2,
      sym__expression,
      sym_constant,
  [29] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_valeur,
    ACTIONS(24), 1,
      anon_sym_somme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    STATE(16), 2,
      sym_valeur,
      sym_somme,
    STATE(3), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [55] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_rule_body_token3,
    ACTIONS(33), 1,
      anon_sym_valeur,
    ACTIONS(35), 1,
      anon_sym_somme,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(16), 2,
      sym_valeur,
      sym_somme,
    STATE(3), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [83] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_valeur,
    ACTIONS(41), 1,
      anon_sym_somme,
    STATE(16), 2,
      sym_valeur,
      sym_somme,
    STATE(4), 3,
      sym__statement,
      sym_mechanism,
      aux_sym_rule_body_repeat1,
  [102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_boolean,
    ACTIONS(43), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(45), 2,
      sym_string,
      sym_number,
    STATE(13), 2,
      sym__expression,
      sym_constant,
  [121] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(47), 7,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
      sym_empty,
      anon_sym_oui,
      anon_sym_non,
      sym_string,
      sym_number,
  [134] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym_somme_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(51), 3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
  [153] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym_somme_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(58), 3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
  [172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__rule_name,
    STATE(12), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_boolean,
    ACTIONS(43), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(45), 2,
      sym_string,
      sym_number,
    STATE(17), 2,
      sym__expression,
      sym_constant,
  [210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(2), 1,
      sym__rule_name,
    STATE(12), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [229] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(51), 4,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
  [243] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(71), 4,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
  [257] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(75), 4,
      anon_sym_valeur,
      anon_sym_somme,
      anon_sym_DASH,
      sym_identifier,
  [271] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(79), 3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
  [284] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_rule_body_token3,
    ACTIONS(83), 3,
      anon_sym_valeur,
      anon_sym_somme,
      sym_identifier,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [313] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 2,
      aux_sym_rule_body_token1,
      aux_sym_rule_body_token2,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DASH,
    STATE(9), 1,
      aux_sym_somme_repeat1,
  [339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COLON,
  [377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COLON,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 384,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(26),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_name, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_somme_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_somme_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_somme, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_somme, 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 2, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_publicodes(void) {
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
