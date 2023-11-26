#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  aux_sym_rule_body_token1 = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__statement_token2 = 5,
  anon_sym_valeur = 6,
  sym_empty = 7,
  anon_sym_oui = 8,
  anon_sym_non = 9,
  sym_string = 10,
  sym_comment = 11,
  sym_number = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym__rule_name = 15,
  sym_value_definition = 16,
  sym_rule_definition = 17,
  sym_rule_body = 18,
  sym__statement = 19,
  sym_mechanism = 20,
  sym_valeur = 21,
  sym__expression = 22,
  sym_constant = 23,
  sym_boolean = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_rule_body_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [aux_sym_rule_body_token1] = "rule_body_token1",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [anon_sym_valeur] = "valeur",
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
  [sym__expression] = "_expression",
  [sym_constant] = "constant",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_rule_body_token1] = aux_sym_rule_body_token1,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [anon_sym_valeur] = anon_sym_valeur,
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
  [sym__expression] = sym__expression,
  [sym_constant] = sym_constant,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
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
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_valeur] = {
    .visible = true,
    .named = false,
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
    {field_body, 1},
    {field_name, 0, .inherited = true},
  [3] =
    {field_name, 0, .inherited = true},
    {field_value, 1},
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
  [16] = 13,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\t') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383) ||
          lookahead == 8364) ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_rule_body_token1);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '.') ADVANCE(7);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(20);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_empty);
      if (lookahead == '\t') ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_empty);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'n') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == 'v') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_oui] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__definition] = STATE(5),
    [sym__rule_name] = STATE(2),
    [sym_value_definition] = STATE(5),
    [sym_rule_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      sym_empty,
    ACTIONS(17), 1,
      sym_comment,
    STATE(7), 1,
      sym__statement,
    STATE(17), 1,
      sym_boolean,
    STATE(18), 1,
      sym_rule_body,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    ACTIONS(13), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(15), 2,
      sym_string,
      sym_number,
    STATE(19), 2,
      sym__expression,
      sym_constant,
  [32] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_empty,
    STATE(14), 1,
      sym_boolean,
    ACTIONS(21), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(23), 2,
      sym_string,
      sym_number,
    STATE(12), 2,
      sym__expression,
      sym_constant,
  [54] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_rule_body_token1,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(9), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [75] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__rule_name,
    STATE(8), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [94] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(33), 7,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_empty,
      anon_sym_oui,
      anon_sym_non,
      sym_string,
      sym_number,
  [107] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_rule_body_token1,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(4), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(2), 1,
      sym__rule_name,
    STATE(8), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [147] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 2,
      aux_sym_rule_body_token1,
      sym_identifier,
    ACTIONS(50), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(9), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [166] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 4,
      aux_sym_rule_body_token1,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [179] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 4,
      aux_sym_rule_body_token1,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [192] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 4,
      aux_sym_rule_body_token1,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [205] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 4,
      aux_sym_rule_body_token1,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [218] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 4,
      aux_sym_rule_body_token1,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_valeur,
    STATE(10), 1,
      sym_mechanism,
    STATE(11), 1,
      sym_valeur,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COLON,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COLON,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 179,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 252,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 292,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 306,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_name, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 2, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
