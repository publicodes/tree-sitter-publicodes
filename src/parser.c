#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_COLON = 2,
  anon_sym_formule = 3,
  anon_sym_valeur = 4,
  anon_sym_plafond = 5,
  anon_sym_plancher = 6,
  anon_sym_unitu00e9 = 7,
  anon_sym_applicablesi = 8,
  anon_sym_nonapplicablesi = 9,
  anon_sym_arrondi = 10,
  anon_sym_estnondu00e9fini = 11,
  anon_sym_estdu00e9fini = 12,
  anon_sym_estnonapplicable = 13,
  anon_sym_estapplicable = 14,
  anon_sym_pardu00e9faut = 15,
  anon_sym_somme = 16,
  anon_sym_produit = 17,
  anon_sym_moyenne = 18,
  anon_sym_lemaximumde = 19,
  anon_sym_leminimumde = 20,
  anon_sym_unedecesconditions = 21,
  anon_sym_toutescesconditions = 22,
  anon_sym_DASH = 23,
  anon_sym_inversionnumu00e9rique = 24,
  anon_sym_contexte = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  aux_sym_ar_unary_expression_token1 = 28,
  aux_sym_ar_binary_expression_token1 = 29,
  aux_sym_ar_binary_expression_token2 = 30,
  anon_sym_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_DOT = 37,
  sym_comment = 38,
  anon_sym_oui = 39,
  anon_sym_non = 40,
  sym_string = 41,
  sym_date = 42,
  aux_sym_number_token1 = 43,
  anon_sym_SPACE = 44,
  anon_sym_SLASH = 45,
  anon_sym_DOT2 = 46,
  aux_sym_unit_token1 = 47,
  sym_exposant = 48,
  anon_sym_titre = 49,
  anon_sym_question = 50,
  anon_sym_ru00e9fu00e9rences = 51,
  anon_sym_description = 52,
  anon_sym_notes = 53,
  anon_sym_PIPE = 54,
  sym_key = 55,
  sym_meta_string = 56,
  sym__indent = 57,
  sym__dedent = 58,
  sym__newline = 59,
  sym_paragraph = 60,
  sym_error_recovery_mode = 61,
  sym_source_file = 62,
  sym_rule = 63,
  sym_rule_body = 64,
  sym__statement = 65,
  sym_formule = 66,
  sym__valeur = 67,
  sym_mechanism = 68,
  sym_m_unary = 69,
  sym_m_array = 70,
  sym__m_special = 71,
  sym_m_inversion = 72,
  sym_m_contexte = 73,
  sym__expression = 74,
  sym__ar_expression = 75,
  sym_ar_unary_expression = 76,
  sym_ar_binary_expression = 77,
  sym__bool_expression = 78,
  sym_comparison = 79,
  sym__dottedName = 80,
  sym_reference = 81,
  sym_boolean = 82,
  sym_number = 83,
  sym_units = 84,
  sym__units = 85,
  sym_unit = 86,
  sym_meta = 87,
  sym__reserved_key = 88,
  sym_meta_value = 89,
  sym__meta_multiline_string = 90,
  sym__meta_paragraph = 91,
  sym_meta_object = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_rule_body_repeat1 = 94,
  aux_sym_m_array_repeat1 = 95,
  aux_sym_m_inversion_repeat1 = 96,
  aux_sym_m_contexte_repeat1 = 97,
  aux_sym__dottedName_repeat1 = 98,
  aux_sym_units_repeat1 = 99,
  aux_sym__units_repeat1 = 100,
  aux_sym__meta_multiline_string2_repeat1 = 101,
  aux_sym_meta_object_repeat1 = 102,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_formule] = "formule",
  [anon_sym_valeur] = "valeur",
  [anon_sym_plafond] = "plafond",
  [anon_sym_plancher] = "plancher",
  [anon_sym_unitu00e9] = "unit\u00e9",
  [anon_sym_applicablesi] = "applicable si",
  [anon_sym_nonapplicablesi] = "non applicable si",
  [anon_sym_arrondi] = "arrondi",
  [anon_sym_estnondu00e9fini] = "est non d\u00e9fini",
  [anon_sym_estdu00e9fini] = "est d\u00e9fini",
  [anon_sym_estnonapplicable] = "est non applicable",
  [anon_sym_estapplicable] = "est applicable",
  [anon_sym_pardu00e9faut] = "par d\u00e9faut",
  [anon_sym_somme] = "somme",
  [anon_sym_produit] = "produit",
  [anon_sym_moyenne] = "moyenne",
  [anon_sym_lemaximumde] = "le maximum de",
  [anon_sym_leminimumde] = "le minimum de",
  [anon_sym_unedecesconditions] = "une de ces conditions",
  [anon_sym_toutescesconditions] = "toutes ces conditions",
  [anon_sym_DASH] = "-",
  [anon_sym_inversionnumu00e9rique] = "inversion num\u00e9rique",
  [anon_sym_contexte] = "contexte",
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
  [anon_sym_titre] = "titre",
  [anon_sym_question] = "question",
  [anon_sym_ru00e9fu00e9rences] = "r\u00e9f\u00e9rences",
  [anon_sym_description] = "description",
  [anon_sym_notes] = "notes",
  [anon_sym_PIPE] = "|",
  [sym_key] = "key",
  [sym_meta_string] = "meta_string",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_paragraph] = "paragraph",
  [sym_error_recovery_mode] = "error_recovery_mode",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_formule] = "formule",
  [sym__valeur] = "_valeur",
  [sym_mechanism] = "mechanism",
  [sym_m_unary] = "m_unary",
  [sym_m_array] = "m_array",
  [sym__m_special] = "_m_special",
  [sym_m_inversion] = "m_inversion",
  [sym_m_contexte] = "m_contexte",
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
  [sym_meta] = "meta",
  [sym__reserved_key] = "key",
  [sym_meta_value] = "meta_value",
  [sym__meta_multiline_string] = "_meta_multiline_string",
  [sym__meta_paragraph] = "_meta_paragraph",
  [sym_meta_object] = "meta_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_m_array_repeat1] = "m_array_repeat1",
  [aux_sym_m_inversion_repeat1] = "m_inversion_repeat1",
  [aux_sym_m_contexte_repeat1] = "m_contexte_repeat1",
  [aux_sym__dottedName_repeat1] = "_dottedName_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
  [aux_sym__meta_multiline_string2_repeat1] = "_meta_multiline_string2_repeat1",
  [aux_sym_meta_object_repeat1] = "meta_object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_formule] = anon_sym_formule,
  [anon_sym_valeur] = anon_sym_valeur,
  [anon_sym_plafond] = anon_sym_plafond,
  [anon_sym_plancher] = anon_sym_plancher,
  [anon_sym_unitu00e9] = anon_sym_unitu00e9,
  [anon_sym_applicablesi] = anon_sym_applicablesi,
  [anon_sym_nonapplicablesi] = anon_sym_nonapplicablesi,
  [anon_sym_arrondi] = anon_sym_arrondi,
  [anon_sym_estnondu00e9fini] = anon_sym_estnondu00e9fini,
  [anon_sym_estdu00e9fini] = anon_sym_estdu00e9fini,
  [anon_sym_estnonapplicable] = anon_sym_estnonapplicable,
  [anon_sym_estapplicable] = anon_sym_estapplicable,
  [anon_sym_pardu00e9faut] = anon_sym_pardu00e9faut,
  [anon_sym_somme] = anon_sym_somme,
  [anon_sym_produit] = anon_sym_produit,
  [anon_sym_moyenne] = anon_sym_moyenne,
  [anon_sym_lemaximumde] = anon_sym_lemaximumde,
  [anon_sym_leminimumde] = anon_sym_leminimumde,
  [anon_sym_unedecesconditions] = anon_sym_unedecesconditions,
  [anon_sym_toutescesconditions] = anon_sym_toutescesconditions,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_inversionnumu00e9rique] = anon_sym_inversionnumu00e9rique,
  [anon_sym_contexte] = anon_sym_contexte,
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
  [anon_sym_titre] = anon_sym_titre,
  [anon_sym_question] = anon_sym_question,
  [anon_sym_ru00e9fu00e9rences] = anon_sym_ru00e9fu00e9rences,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_notes] = anon_sym_notes,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_key] = sym_key,
  [sym_meta_string] = sym_meta_string,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_paragraph] = sym_paragraph,
  [sym_error_recovery_mode] = sym_error_recovery_mode,
  [sym_source_file] = sym_source_file,
  [sym_rule] = sym_rule,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_formule] = sym_formule,
  [sym__valeur] = sym__valeur,
  [sym_mechanism] = sym_mechanism,
  [sym_m_unary] = sym_m_unary,
  [sym_m_array] = sym_m_array,
  [sym__m_special] = sym__m_special,
  [sym_m_inversion] = sym_m_inversion,
  [sym_m_contexte] = sym_m_contexte,
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
  [sym_meta] = sym_meta,
  [sym__reserved_key] = sym_key,
  [sym_meta_value] = sym_meta_value,
  [sym__meta_multiline_string] = sym__meta_multiline_string,
  [sym__meta_paragraph] = sym__meta_paragraph,
  [sym_meta_object] = sym_meta_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_m_array_repeat1] = aux_sym_m_array_repeat1,
  [aux_sym_m_inversion_repeat1] = aux_sym_m_inversion_repeat1,
  [aux_sym_m_contexte_repeat1] = aux_sym_m_contexte_repeat1,
  [aux_sym__dottedName_repeat1] = aux_sym__dottedName_repeat1,
  [aux_sym_units_repeat1] = aux_sym_units_repeat1,
  [aux_sym__units_repeat1] = aux_sym__units_repeat1,
  [aux_sym__meta_multiline_string2_repeat1] = aux_sym__meta_multiline_string2_repeat1,
  [aux_sym_meta_object_repeat1] = aux_sym_meta_object_repeat1,
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
  [anon_sym_plafond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plancher] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unitu00e9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_applicablesi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonapplicablesi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arrondi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estnondu00e9fini] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estdu00e9fini] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estnonapplicable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estapplicable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pardu00e9faut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_somme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_produit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_moyenne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lemaximumde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leminimumde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unedecesconditions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toutescesconditions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inversionnumu00e9rique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contexte] = {
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
  [anon_sym_titre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_question] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ru00e9fu00e9rences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_string] = {
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
  [sym_paragraph] = {
    .visible = true,
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
  [sym_m_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_m_array] = {
    .visible = true,
    .named = true,
  },
  [sym__m_special] = {
    .visible = false,
    .named = true,
  },
  [sym_m_inversion] = {
    .visible = true,
    .named = true,
  },
  [sym_m_contexte] = {
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
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym__reserved_key] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_value] = {
    .visible = true,
    .named = true,
  },
  [sym__meta_multiline_string] = {
    .visible = false,
    .named = true,
  },
  [sym__meta_paragraph] = {
    .visible = false,
    .named = true,
  },
  [sym_meta_object] = {
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
  [aux_sym_m_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_inversion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_contexte_repeat1] = {
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
  [aux_sym__meta_multiline_string2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_object_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_denominators = 2,
  field_empty = 3,
  field_mechanism_name = 4,
  field_numerators = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_denominators] = "denominators",
  [field_empty] = "empty",
  [field_mechanism_name] = "mechanism_name",
  [field_numerators] = "numerators",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_empty, 2},
  [1] =
    {field_body, 2},
  [2] =
    {field_numerators, 0},
  [3] =
    {field_value, 2},
    {field_value, 3},
  [5] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [8] =
    {field_numerators, 0},
    {field_numerators, 1},
  [10] =
    {field_denominators, 1},
    {field_numerators, 0},
  [12] =
    {field_mechanism_name, 0},
  [13] =
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
  [5] = 4,
  [6] = 6,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 11,
  [13] = 11,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 45,
  [49] = 47,
  [50] = 47,
  [51] = 51,
  [52] = 51,
  [53] = 51,
  [54] = 54,
  [55] = 18,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 16,
  [60] = 17,
  [61] = 61,
  [62] = 61,
  [63] = 58,
  [64] = 54,
  [65] = 56,
  [66] = 61,
  [67] = 58,
  [68] = 56,
  [69] = 69,
  [70] = 70,
  [71] = 19,
  [72] = 17,
  [73] = 18,
  [74] = 69,
  [75] = 75,
  [76] = 76,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 16,
  [81] = 78,
  [82] = 70,
  [83] = 76,
  [84] = 84,
  [85] = 69,
  [86] = 75,
  [87] = 79,
  [88] = 16,
  [89] = 75,
  [90] = 18,
  [91] = 17,
  [92] = 84,
  [93] = 84,
  [94] = 76,
  [95] = 79,
  [96] = 78,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 97,
  [101] = 19,
  [102] = 99,
  [103] = 98,
  [104] = 104,
  [105] = 25,
  [106] = 106,
  [107] = 98,
  [108] = 104,
  [109] = 104,
  [110] = 106,
  [111] = 106,
  [112] = 19,
  [113] = 97,
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 117,
  [121] = 118,
  [122] = 122,
  [123] = 122,
  [124] = 119,
  [125] = 117,
  [126] = 119,
  [127] = 122,
  [128] = 128,
  [129] = 116,
  [130] = 130,
  [131] = 115,
  [132] = 132,
  [133] = 132,
  [134] = 118,
  [135] = 128,
  [136] = 115,
  [137] = 116,
  [138] = 25,
  [139] = 132,
  [140] = 115,
  [141] = 130,
  [142] = 130,
  [143] = 132,
  [144] = 128,
  [145] = 25,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 149,
  [152] = 152,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 153,
  [157] = 153,
  [158] = 158,
  [159] = 159,
  [160] = 152,
  [161] = 161,
  [162] = 148,
  [163] = 161,
  [164] = 164,
  [165] = 152,
  [166] = 161,
  [167] = 159,
  [168] = 159,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 170,
  [173] = 170,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 16,
  [178] = 176,
  [179] = 179,
  [180] = 176,
  [181] = 16,
  [182] = 18,
  [183] = 17,
  [184] = 17,
  [185] = 18,
  [186] = 179,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 188,
  [192] = 23,
  [193] = 22,
  [194] = 194,
  [195] = 195,
  [196] = 187,
  [197] = 197,
  [198] = 194,
  [199] = 199,
  [200] = 200,
  [201] = 189,
  [202] = 190,
  [203] = 200,
  [204] = 195,
  [205] = 205,
  [206] = 206,
  [207] = 188,
  [208] = 199,
  [209] = 194,
  [210] = 21,
  [211] = 19,
  [212] = 20,
  [213] = 200,
  [214] = 21,
  [215] = 19,
  [216] = 199,
  [217] = 20,
  [218] = 28,
  [219] = 197,
  [220] = 22,
  [221] = 23,
  [222] = 189,
  [223] = 24,
  [224] = 190,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 42,
  [229] = 226,
  [230] = 230,
  [231] = 24,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 26,
  [237] = 237,
  [238] = 27,
  [239] = 227,
  [240] = 232,
  [241] = 25,
  [242] = 242,
  [243] = 232,
  [244] = 244,
  [245] = 233,
  [246] = 233,
  [247] = 226,
  [248] = 39,
  [249] = 31,
  [250] = 30,
  [251] = 251,
  [252] = 25,
  [253] = 27,
  [254] = 43,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 235,
  [259] = 237,
  [260] = 260,
  [261] = 235,
  [262] = 244,
  [263] = 242,
  [264] = 264,
  [265] = 234,
  [266] = 41,
  [267] = 237,
  [268] = 268,
  [269] = 269,
  [270] = 28,
  [271] = 242,
  [272] = 244,
  [273] = 230,
  [274] = 26,
  [275] = 40,
  [276] = 35,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 36,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 32,
  [287] = 278,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 32,
  [292] = 292,
  [293] = 293,
  [294] = 292,
  [295] = 292,
  [296] = 292,
  [297] = 283,
  [298] = 288,
  [299] = 299,
  [300] = 292,
  [301] = 284,
  [302] = 283,
  [303] = 34,
  [304] = 37,
  [305] = 38,
  [306] = 37,
  [307] = 292,
  [308] = 288,
  [309] = 38,
  [310] = 293,
  [311] = 311,
  [312] = 278,
  [313] = 36,
  [314] = 314,
  [315] = 34,
  [316] = 282,
  [317] = 277,
  [318] = 284,
  [319] = 282,
  [320] = 277,
  [321] = 280,
  [322] = 280,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '|') ADVANCE(82);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ':') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '|') ADVANCE(82);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '|') ADVANCE(82);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '-') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ':') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(68);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(33);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(31);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(30);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
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
      if (sym_name_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 47:
      if (sym_name_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(46);
      if (sym_name_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(70);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '0') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(47);
      if (sym_name_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(23);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(23);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(23);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_meta_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(98);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 233) ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_non);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 233) ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 233) ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 233) ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_notes);
      END_STATE();
    case 99:
      if (lookahead == 233) ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_somme);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_titre);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_unitu00e9);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_arrondi);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_formule);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_moyenne);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_plafond);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_produit);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_contexte);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_plancher);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_question);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 233) ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_estdu00e9fini);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_pardu00e9faut);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ru00e9fu00e9rences);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_applicablesi);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 223:
      if (lookahead == 233) ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_lemaximumde);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_leminimumde);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_estapplicable);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_estnondu00e9fini);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 233:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 236:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 242:
      if (lookahead == 'q') ADVANCE(247);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_nonapplicablesi);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_estnonapplicable);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_inversionnumu00e9rique);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_toutescesconditions);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_unedecesconditions);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 25, .external_lex_state = 3},
  [3] = {.lex_state = 25, .external_lex_state = 4},
  [4] = {.lex_state = 25, .external_lex_state = 4},
  [5] = {.lex_state = 25, .external_lex_state = 4},
  [6] = {.lex_state = 25, .external_lex_state = 4},
  [7] = {.lex_state = 25, .external_lex_state = 4},
  [8] = {.lex_state = 25, .external_lex_state = 4},
  [9] = {.lex_state = 25, .external_lex_state = 4},
  [10] = {.lex_state = 25, .external_lex_state = 4},
  [11] = {.lex_state = 25, .external_lex_state = 2},
  [12] = {.lex_state = 25, .external_lex_state = 2},
  [13] = {.lex_state = 25, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 13, .external_lex_state = 3},
  [17] = {.lex_state = 13, .external_lex_state = 3},
  [18] = {.lex_state = 13, .external_lex_state = 3},
  [19] = {.lex_state = 13, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 25, .external_lex_state = 5},
  [45] = {.lex_state = 25, .external_lex_state = 2},
  [46] = {.lex_state = 25, .external_lex_state = 2},
  [47] = {.lex_state = 25, .external_lex_state = 2},
  [48] = {.lex_state = 25, .external_lex_state = 2},
  [49] = {.lex_state = 25, .external_lex_state = 2},
  [50] = {.lex_state = 25, .external_lex_state = 2},
  [51] = {.lex_state = 16, .external_lex_state = 6},
  [52] = {.lex_state = 16, .external_lex_state = 7},
  [53] = {.lex_state = 16, .external_lex_state = 2},
  [54] = {.lex_state = 20, .external_lex_state = 6},
  [55] = {.lex_state = 22, .external_lex_state = 2},
  [56] = {.lex_state = 20, .external_lex_state = 6},
  [57] = {.lex_state = 20, .external_lex_state = 7},
  [58] = {.lex_state = 20, .external_lex_state = 7},
  [59] = {.lex_state = 22, .external_lex_state = 2},
  [60] = {.lex_state = 22, .external_lex_state = 2},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 20, .external_lex_state = 7},
  [63] = {.lex_state = 20, .external_lex_state = 6},
  [64] = {.lex_state = 20, .external_lex_state = 2},
  [65] = {.lex_state = 20, .external_lex_state = 7},
  [66] = {.lex_state = 20, .external_lex_state = 6},
  [67] = {.lex_state = 20, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 6},
  [70] = {.lex_state = 20, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 2},
  [72] = {.lex_state = 22, .external_lex_state = 7},
  [73] = {.lex_state = 22, .external_lex_state = 7},
  [74] = {.lex_state = 20, .external_lex_state = 7},
  [75] = {.lex_state = 20, .external_lex_state = 7},
  [76] = {.lex_state = 20, .external_lex_state = 6},
  [77] = {.lex_state = 20, .external_lex_state = 6},
  [78] = {.lex_state = 20, .external_lex_state = 6},
  [79] = {.lex_state = 20, .external_lex_state = 7},
  [80] = {.lex_state = 22, .external_lex_state = 7},
  [81] = {.lex_state = 20, .external_lex_state = 7},
  [82] = {.lex_state = 20, .external_lex_state = 7},
  [83] = {.lex_state = 20, .external_lex_state = 7},
  [84] = {.lex_state = 20, .external_lex_state = 7},
  [85] = {.lex_state = 20, .external_lex_state = 2},
  [86] = {.lex_state = 20, .external_lex_state = 2},
  [87] = {.lex_state = 20, .external_lex_state = 6},
  [88] = {.lex_state = 22, .external_lex_state = 6},
  [89] = {.lex_state = 20, .external_lex_state = 6},
  [90] = {.lex_state = 22, .external_lex_state = 6},
  [91] = {.lex_state = 22, .external_lex_state = 6},
  [92] = {.lex_state = 20, .external_lex_state = 2},
  [93] = {.lex_state = 20, .external_lex_state = 6},
  [94] = {.lex_state = 20, .external_lex_state = 2},
  [95] = {.lex_state = 20, .external_lex_state = 2},
  [96] = {.lex_state = 20, .external_lex_state = 2},
  [97] = {.lex_state = 25, .external_lex_state = 2},
  [98] = {.lex_state = 25, .external_lex_state = 2},
  [99] = {.lex_state = 25, .external_lex_state = 2},
  [100] = {.lex_state = 25, .external_lex_state = 2},
  [101] = {.lex_state = 22, .external_lex_state = 7},
  [102] = {.lex_state = 25, .external_lex_state = 2},
  [103] = {.lex_state = 25, .external_lex_state = 2},
  [104] = {.lex_state = 20, .external_lex_state = 7},
  [105] = {.lex_state = 20, .external_lex_state = 2},
  [106] = {.lex_state = 25, .external_lex_state = 2},
  [107] = {.lex_state = 25, .external_lex_state = 2},
  [108] = {.lex_state = 20, .external_lex_state = 6},
  [109] = {.lex_state = 20, .external_lex_state = 2},
  [110] = {.lex_state = 25, .external_lex_state = 2},
  [111] = {.lex_state = 25, .external_lex_state = 2},
  [112] = {.lex_state = 22, .external_lex_state = 6},
  [113] = {.lex_state = 25, .external_lex_state = 2},
  [114] = {.lex_state = 25, .external_lex_state = 2},
  [115] = {.lex_state = 20, .external_lex_state = 2},
  [116] = {.lex_state = 20, .external_lex_state = 6},
  [117] = {.lex_state = 20, .external_lex_state = 2},
  [118] = {.lex_state = 20, .external_lex_state = 2},
  [119] = {.lex_state = 20, .external_lex_state = 2},
  [120] = {.lex_state = 20, .external_lex_state = 2},
  [121] = {.lex_state = 20, .external_lex_state = 6},
  [122] = {.lex_state = 20, .external_lex_state = 2},
  [123] = {.lex_state = 20, .external_lex_state = 6},
  [124] = {.lex_state = 20, .external_lex_state = 6},
  [125] = {.lex_state = 20, .external_lex_state = 2},
  [126] = {.lex_state = 20, .external_lex_state = 7},
  [127] = {.lex_state = 20, .external_lex_state = 7},
  [128] = {.lex_state = 20, .external_lex_state = 2},
  [129] = {.lex_state = 20, .external_lex_state = 2},
  [130] = {.lex_state = 20, .external_lex_state = 2},
  [131] = {.lex_state = 20, .external_lex_state = 2},
  [132] = {.lex_state = 20, .external_lex_state = 2},
  [133] = {.lex_state = 20, .external_lex_state = 2},
  [134] = {.lex_state = 20, .external_lex_state = 7},
  [135] = {.lex_state = 20, .external_lex_state = 6},
  [136] = {.lex_state = 20, .external_lex_state = 6},
  [137] = {.lex_state = 20, .external_lex_state = 7},
  [138] = {.lex_state = 20, .external_lex_state = 7},
  [139] = {.lex_state = 20, .external_lex_state = 7},
  [140] = {.lex_state = 20, .external_lex_state = 7},
  [141] = {.lex_state = 20, .external_lex_state = 6},
  [142] = {.lex_state = 20, .external_lex_state = 7},
  [143] = {.lex_state = 20, .external_lex_state = 6},
  [144] = {.lex_state = 20, .external_lex_state = 7},
  [145] = {.lex_state = 20, .external_lex_state = 6},
  [146] = {.lex_state = 92, .external_lex_state = 5},
  [147] = {.lex_state = 92, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 7},
  [149] = {.lex_state = 0, .external_lex_state = 6},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 7},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 6},
  [154] = {.lex_state = 0, .external_lex_state = 7},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 6},
  [157] = {.lex_state = 0, .external_lex_state = 6},
  [158] = {.lex_state = 0, .external_lex_state = 6},
  [159] = {.lex_state = 0, .external_lex_state = 7},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 7},
  [162] = {.lex_state = 0, .external_lex_state = 7},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 7},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 6},
  [167] = {.lex_state = 0, .external_lex_state = 6},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 13, .external_lex_state = 7},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 88, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 13, .external_lex_state = 6},
  [182] = {.lex_state = 13, .external_lex_state = 6},
  [183] = {.lex_state = 13, .external_lex_state = 6},
  [184] = {.lex_state = 13, .external_lex_state = 7},
  [185] = {.lex_state = 13, .external_lex_state = 7},
  [186] = {.lex_state = 88, .external_lex_state = 2},
  [187] = {.lex_state = 2, .external_lex_state = 7},
  [188] = {.lex_state = 0, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 7},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 7},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 20, .external_lex_state = 2},
  [195] = {.lex_state = 93, .external_lex_state = 7},
  [196] = {.lex_state = 2, .external_lex_state = 7},
  [197] = {.lex_state = 93, .external_lex_state = 7},
  [198] = {.lex_state = 20, .external_lex_state = 2},
  [199] = {.lex_state = 20, .external_lex_state = 2},
  [200] = {.lex_state = 20, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 20, .external_lex_state = 2},
  [204] = {.lex_state = 93, .external_lex_state = 7},
  [205] = {.lex_state = 2, .external_lex_state = 7},
  [206] = {.lex_state = 93, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 7},
  [208] = {.lex_state = 20, .external_lex_state = 2},
  [209] = {.lex_state = 20, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 7},
  [211] = {.lex_state = 13, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 7},
  [213] = {.lex_state = 20, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 13, .external_lex_state = 7},
  [216] = {.lex_state = 20, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 0, .external_lex_state = 7},
  [219] = {.lex_state = 93, .external_lex_state = 7},
  [220] = {.lex_state = 0, .external_lex_state = 7},
  [221] = {.lex_state = 0, .external_lex_state = 7},
  [222] = {.lex_state = 0, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 7},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 20, .external_lex_state = 2},
  [227] = {.lex_state = 93, .external_lex_state = 2},
  [228] = {.lex_state = 2, .external_lex_state = 7},
  [229] = {.lex_state = 20, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 5},
  [235] = {.lex_state = 0, .external_lex_state = 5},
  [236] = {.lex_state = 0, .external_lex_state = 6},
  [237] = {.lex_state = 0, .external_lex_state = 5},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 93, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 7},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 20, .external_lex_state = 2},
  [248] = {.lex_state = 2, .external_lex_state = 7},
  [249] = {.lex_state = 2, .external_lex_state = 7},
  [250] = {.lex_state = 2, .external_lex_state = 7},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 6},
  [253] = {.lex_state = 0, .external_lex_state = 7},
  [254] = {.lex_state = 2, .external_lex_state = 7},
  [255] = {.lex_state = 0, .external_lex_state = 7},
  [256] = {.lex_state = 2, .external_lex_state = 7},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 5},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 5},
  [266] = {.lex_state = 2, .external_lex_state = 7},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 93, .external_lex_state = 7},
  [270] = {.lex_state = 0, .external_lex_state = 6},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 3},
  [274] = {.lex_state = 0, .external_lex_state = 7},
  [275] = {.lex_state = 2, .external_lex_state = 7},
  [276] = {.lex_state = 2, .external_lex_state = 7},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 7},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 6},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 6},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 7},
  [287] = {.lex_state = 0, .external_lex_state = 7},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 6},
  [291] = {.lex_state = 0, .external_lex_state = 6},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 8},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 6},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 0, .external_lex_state = 7},
  [304] = {.lex_state = 0, .external_lex_state = 6},
  [305] = {.lex_state = 0, .external_lex_state = 6},
  [306] = {.lex_state = 0, .external_lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 2},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 7},
  [310] = {.lex_state = 0, .external_lex_state = 8},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 7},
  [313] = {.lex_state = 0, .external_lex_state = 7},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 6},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_formule] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [anon_sym_plafond] = ACTIONS(1),
    [anon_sym_plancher] = ACTIONS(1),
    [anon_sym_unitu00e9] = ACTIONS(1),
    [anon_sym_applicablesi] = ACTIONS(1),
    [anon_sym_nonapplicablesi] = ACTIONS(1),
    [anon_sym_arrondi] = ACTIONS(1),
    [anon_sym_estnondu00e9fini] = ACTIONS(1),
    [anon_sym_estdu00e9fini] = ACTIONS(1),
    [anon_sym_estnonapplicable] = ACTIONS(1),
    [anon_sym_estapplicable] = ACTIONS(1),
    [anon_sym_pardu00e9faut] = ACTIONS(1),
    [anon_sym_somme] = ACTIONS(1),
    [anon_sym_produit] = ACTIONS(1),
    [anon_sym_moyenne] = ACTIONS(1),
    [anon_sym_lemaximumde] = ACTIONS(1),
    [anon_sym_leminimumde] = ACTIONS(1),
    [anon_sym_unedecesconditions] = ACTIONS(1),
    [anon_sym_toutescesconditions] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_inversionnumu00e9rique] = ACTIONS(1),
    [anon_sym_contexte] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_ar_binary_expression_token1] = ACTIONS(1),
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
    [anon_sym_titre] = ACTIONS(1),
    [anon_sym_question] = ACTIONS(1),
    [anon_sym_ru00e9fu00e9rences] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_notes] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_paragraph] = ACTIONS(1),
    [sym_error_recovery_mode] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(285),
    [sym_rule] = STATE(174),
    [sym__dottedName] = STATE(311),
    [aux_sym_source_file_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(14),
    [sym_formule] = STATE(14),
    [sym_mechanism] = STATE(14),
    [sym_m_unary] = STATE(32),
    [sym_m_array] = STATE(32),
    [sym__m_special] = STATE(32),
    [sym_m_inversion] = STATE(32),
    [sym_m_contexte] = STATE(32),
    [sym__expression] = STATE(164),
    [sym__ar_expression] = STATE(137),
    [sym_ar_unary_expression] = STATE(137),
    [sym_ar_binary_expression] = STATE(137),
    [sym__bool_expression] = STATE(164),
    [sym_comparison] = STATE(164),
    [sym__dottedName] = STATE(138),
    [sym_reference] = STATE(139),
    [sym_boolean] = STATE(164),
    [sym_number] = STATE(140),
    [sym_meta] = STATE(14),
    [sym__reserved_key] = STATE(299),
    [aux_sym_rule_body_repeat1] = STATE(14),
    [sym_name] = ACTIONS(9),
    [anon_sym_formule] = ACTIONS(11),
    [anon_sym_valeur] = ACTIONS(13),
    [anon_sym_plafond] = ACTIONS(13),
    [anon_sym_plancher] = ACTIONS(13),
    [anon_sym_unitu00e9] = ACTIONS(13),
    [anon_sym_applicablesi] = ACTIONS(13),
    [anon_sym_nonapplicablesi] = ACTIONS(13),
    [anon_sym_arrondi] = ACTIONS(13),
    [anon_sym_estnondu00e9fini] = ACTIONS(13),
    [anon_sym_estdu00e9fini] = ACTIONS(13),
    [anon_sym_estnonapplicable] = ACTIONS(13),
    [anon_sym_estapplicable] = ACTIONS(13),
    [anon_sym_pardu00e9faut] = ACTIONS(13),
    [anon_sym_somme] = ACTIONS(15),
    [anon_sym_produit] = ACTIONS(15),
    [anon_sym_moyenne] = ACTIONS(15),
    [anon_sym_lemaximumde] = ACTIONS(15),
    [anon_sym_leminimumde] = ACTIONS(15),
    [anon_sym_unedecesconditions] = ACTIONS(15),
    [anon_sym_toutescesconditions] = ACTIONS(15),
    [anon_sym_inversionnumu00e9rique] = ACTIONS(17),
    [anon_sym_contexte] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_ar_unary_expression_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_oui] = ACTIONS(25),
    [anon_sym_non] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_date] = ACTIONS(27),
    [aux_sym_number_token1] = ACTIONS(29),
    [anon_sym_titre] = ACTIONS(31),
    [anon_sym_question] = ACTIONS(31),
    [anon_sym_ru00e9fu00e9rences] = ACTIONS(31),
    [anon_sym_description] = ACTIONS(31),
    [anon_sym_notes] = ACTIONS(31),
    [sym__dedent] = ACTIONS(33),
    [sym__newline] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(57), 1,
      sym__indent,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(236), 1,
      sym__valeur,
    STATE(297), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(53), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(153), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [89] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(57), 1,
      sym__indent,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(281), 1,
      sym__valeur,
    STATE(297), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(53), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(153), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [178] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(61), 1,
      sym__indent,
    STATE(36), 1,
      sym__valeur,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(302), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(59), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(156), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [267] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(61), 1,
      sym__indent,
    STATE(29), 1,
      sym__valeur,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(302), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(59), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(156), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [356] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(65), 1,
      sym__indent,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(274), 1,
      sym__valeur,
    STATE(283), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(157), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [445] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(61), 1,
      sym__indent,
    STATE(26), 1,
      sym__valeur,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(302), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(59), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(156), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [534] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(65), 1,
      sym__indent,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(255), 1,
      sym__valeur,
    STATE(283), 1,
      sym_mechanism,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(157), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [623] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(45), 1,
      anon_sym_contexte,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(65), 1,
      sym__indent,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(283), 1,
      sym_mechanism,
    STATE(313), 1,
      sym__valeur,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(157), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(291), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(41), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(39), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [712] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(29), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(73), 1,
      anon_sym_contexte,
    STATE(138), 1,
      sym__dottedName,
    STATE(139), 1,
      sym_reference,
    STATE(140), 1,
      sym_number,
    STATE(287), 1,
      sym_mechanism,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(75), 2,
      sym_string,
      sym_date,
    STATE(137), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(148), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(286), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(69), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(67), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [795] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(29), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(73), 1,
      anon_sym_contexte,
    STATE(138), 1,
      sym__dottedName,
    STATE(139), 1,
      sym_reference,
    STATE(140), 1,
      sym_number,
    STATE(312), 1,
      sym_mechanism,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(77), 2,
      sym_string,
      sym_date,
    STATE(137), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(162), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(286), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(69), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(67), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [878] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(29), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(73), 1,
      anon_sym_contexte,
    STATE(138), 1,
      sym__dottedName,
    STATE(139), 1,
      sym_reference,
    STATE(140), 1,
      sym_number,
    STATE(278), 1,
      sym_mechanism,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(79), 2,
      sym_string,
      sym_date,
    STATE(137), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(154), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(286), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(69), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(67), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [961] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_formule,
    ACTIONS(87), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(89), 1,
      anon_sym_contexte,
    ACTIONS(93), 1,
      sym__dedent,
    ACTIONS(95), 1,
      sym__newline,
    STATE(299), 1,
      sym__reserved_key,
    ACTIONS(91), 5,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
    STATE(15), 5,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_meta,
      aux_sym_rule_body_repeat1,
    STATE(32), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(85), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(83), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [1027] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_formule,
    ACTIONS(106), 1,
      anon_sym_inversionnumu00e9rique,
    ACTIONS(109), 1,
      anon_sym_contexte,
    ACTIONS(115), 1,
      sym__dedent,
    ACTIONS(117), 1,
      sym__newline,
    STATE(299), 1,
      sym__reserved_key,
    ACTIONS(112), 5,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
    STATE(15), 5,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_meta,
      aux_sym_rule_body_repeat1,
    STATE(32), 5,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
    ACTIONS(103), 7,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
    ACTIONS(100), 12,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 31,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_DOT,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DASH,
    STATE(20), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(131), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DASH,
    STATE(21), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(136), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DASH,
    STATE(20), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(141), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DASH,
    STATE(21), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(145), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 30,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_DASH,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [2020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 29,
      sym__dedent,
      sym__newline,
      anon_sym_formule,
      anon_sym_valeur,
      anon_sym_plafond,
      anon_sym_plancher,
      anon_sym_unitu00e9,
      anon_sym_applicablesi,
      anon_sym_nonapplicablesi,
      anon_sym_arrondi,
      anon_sym_estnondu00e9fini,
      anon_sym_estdu00e9fini,
      anon_sym_estnonapplicable,
      anon_sym_estapplicable,
      anon_sym_pardu00e9faut,
      anon_sym_somme,
      anon_sym_produit,
      anon_sym_moyenne,
      anon_sym_lemaximumde,
      anon_sym_leminimumde,
      anon_sym_unedecesconditions,
      anon_sym_toutescesconditions,
      anon_sym_inversionnumu00e9rique,
      anon_sym_contexte,
      anon_sym_titre,
      anon_sym_question,
      anon_sym_ru00e9fu00e9rences,
      anon_sym_description,
      anon_sym_notes,
  [2125] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(185), 1,
      sym__indent,
    ACTIONS(187), 1,
      sym__newline,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    STATE(260), 1,
      sym_rule_body,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(183), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(158), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2178] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_name,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(131), 1,
      sym_number,
    STATE(133), 1,
      sym_reference,
    STATE(155), 1,
      sym_boolean,
    STATE(169), 1,
      sym__expression,
    ACTIONS(195), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(197), 2,
      sym_string,
      sym_date,
    STATE(160), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(117), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2226] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_name,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(131), 1,
      sym_number,
    STATE(133), 1,
      sym_reference,
    STATE(155), 1,
      sym_boolean,
    STATE(169), 1,
      sym__expression,
    ACTIONS(195), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(197), 2,
      sym_string,
      sym_date,
    STATE(152), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(120), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2274] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    STATE(136), 1,
      sym_number,
    STATE(143), 1,
      sym_reference,
    STATE(145), 1,
      sym__dottedName,
    ACTIONS(51), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(201), 2,
      sym_string,
      sym_date,
    STATE(116), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(167), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2318] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_name,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(131), 1,
      sym_number,
    STATE(133), 1,
      sym_reference,
    STATE(155), 1,
      sym_boolean,
    STATE(169), 1,
      sym__expression,
    ACTIONS(195), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(197), 2,
      sym_string,
      sym_date,
    STATE(165), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(125), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2366] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_name,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(199), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(115), 1,
      sym_number,
    STATE(132), 1,
      sym_reference,
    ACTIONS(195), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(203), 2,
      sym_string,
      sym_date,
    STATE(129), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(168), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2410] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(29), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym__dottedName,
    STATE(139), 1,
      sym_reference,
    STATE(140), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(205), 2,
      sym_string,
      sym_date,
    STATE(137), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(159), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2454] = 8,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SPACE,
    ACTIONS(213), 1,
      aux_sym_unit_token1,
    ACTIONS(215), 1,
      sym__newline,
    STATE(63), 1,
      sym_unit,
    STATE(93), 1,
      sym__units,
    STATE(135), 1,
      sym_units,
    ACTIONS(207), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2486] = 8,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__dedent,
    ACTIONS(217), 1,
      anon_sym_SPACE,
    ACTIONS(219), 1,
      aux_sym_unit_token1,
    STATE(58), 1,
      sym_unit,
    STATE(84), 1,
      sym__units,
    STATE(144), 1,
      sym_units,
    ACTIONS(207), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2518] = 7,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SPACE,
    ACTIONS(223), 1,
      aux_sym_unit_token1,
    STATE(67), 1,
      sym_unit,
    STATE(92), 1,
      sym__units,
    STATE(128), 1,
      sym_units,
    ACTIONS(207), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      sym_exposant,
    ACTIONS(225), 10,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [2570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 10,
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
  [2592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_DOT2,
    STATE(56), 1,
      aux_sym__units_repeat1,
    ACTIONS(233), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(240), 1,
      sym_exposant,
    ACTIONS(225), 10,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [2638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_DOT2,
    STATE(62), 1,
      aux_sym__units_repeat1,
    ACTIONS(242), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 10,
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
  [2684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 10,
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
  [2706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_DOT2,
    STATE(68), 1,
      aux_sym__units_repeat1,
    ACTIONS(251), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOT2,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      aux_sym__units_repeat1,
    ACTIONS(251), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_DOT2,
    STATE(66), 1,
      aux_sym__units_repeat1,
    ACTIONS(242), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      sym_exposant,
    ACTIONS(225), 10,
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
  [2800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(261), 1,
      anon_sym_DOT2,
    STATE(65), 1,
      aux_sym__units_repeat1,
    ACTIONS(233), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_DOT2,
    STATE(56), 1,
      aux_sym__units_repeat1,
    ACTIONS(251), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(255), 1,
      anon_sym_DOT2,
    STATE(61), 1,
      aux_sym__units_repeat1,
    ACTIONS(242), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(264), 1,
      anon_sym_DOT2,
    STATE(68), 1,
      aux_sym__units_repeat1,
    ACTIONS(233), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(233), 10,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(267), 10,
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
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 11,
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
  [2951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(233), 10,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [3012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_units_repeat1,
    ACTIONS(273), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      aux_sym_units_repeat1,
    ACTIONS(278), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(267), 10,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      aux_sym_units_repeat1,
    ACTIONS(282), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_units_repeat1,
    ACTIONS(284), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    STATE(75), 1,
      aux_sym_units_repeat1,
    ACTIONS(282), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SLASH,
    ACTIONS(267), 10,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT2,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_units_repeat1,
    ACTIONS(278), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SLASH,
    STATE(81), 1,
      aux_sym_units_repeat1,
    ACTIONS(291), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SLASH,
    ACTIONS(233), 10,
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
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      aux_sym_units_repeat1,
    ACTIONS(273), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      aux_sym_units_repeat1,
    ACTIONS(284), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      aux_sym_units_repeat1,
    ACTIONS(273), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(96), 1,
      aux_sym_units_repeat1,
    ACTIONS(291), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(78), 1,
      aux_sym_units_repeat1,
    ACTIONS(291), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(95), 1,
      aux_sym_units_repeat1,
    ACTIONS(278), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      aux_sym_units_repeat1,
    ACTIONS(284), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      aux_sym_units_repeat1,
    ACTIONS(282), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(306), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym__dottedName,
    STATE(126), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(122), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(316), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_number_token1,
    STATE(145), 1,
      sym__dottedName,
    STATE(141), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(316), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_number_token1,
    STATE(145), 1,
      sym__dottedName,
    STATE(124), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 10,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(306), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym__dottedName,
    STATE(142), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3614] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(316), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_number_token1,
    STATE(145), 1,
      sym__dottedName,
    STATE(123), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(273), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 10,
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
  [3674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(200), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3700] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(306), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym__dottedName,
    STATE(127), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(273), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(273), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(213), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3788] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(203), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 10,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [3830] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(119), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(105), 1,
      sym__dottedName,
    STATE(130), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(330), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(340), 8,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(340), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(340), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(355), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(324), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4401] = 8,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      sym_meta_string,
    ACTIONS(361), 1,
      sym__indent,
    ACTIONS(363), 1,
      sym__newline,
    STATE(256), 1,
      sym_meta_value,
    STATE(275), 1,
      sym__meta_multiline_string,
    STATE(276), 2,
      sym__meta_paragraph,
      sym_meta_object,
  [4427] = 8,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(367), 1,
      sym_meta_string,
    ACTIONS(369), 1,
      sym__indent,
    ACTIONS(371), 1,
      sym__newline,
    STATE(33), 1,
      sym_meta_value,
    STATE(40), 1,
      sym__meta_multiline_string,
    STATE(35), 2,
      sym__meta_paragraph,
      sym_meta_object,
  [4453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__dedent,
    ACTIONS(373), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__newline,
    ACTIONS(381), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__dedent,
    ACTIONS(373), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__newline,
    ACTIONS(381), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__newline,
    ACTIONS(381), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(381), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__dedent,
    ACTIONS(373), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__dedent,
    ACTIONS(373), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [4762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(409), 1,
      sym__dedent,
    STATE(105), 1,
      sym__dottedName,
    STATE(171), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_name,
    ACTIONS(414), 1,
      sym__dedent,
    STATE(105), 1,
      sym__dottedName,
    STATE(171), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(416), 1,
      sym__dedent,
    STATE(105), 1,
      sym__dottedName,
    STATE(171), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(418), 1,
      sym__dedent,
    STATE(105), 1,
      sym__dottedName,
    STATE(171), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      sym__dottedName,
    STATE(175), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [4855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      sym_name,
    STATE(311), 1,
      sym__dottedName,
    STATE(175), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [4872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(105), 1,
      sym__dottedName,
    STATE(170), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 2,
      sym__dedent,
      anon_sym_DASH,
  [4902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(105), 1,
      sym__dottedName,
    STATE(173), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4918] = 5,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_key,
    ACTIONS(432), 1,
      sym_meta_string,
    STATE(196), 1,
      aux_sym_meta_object_repeat1,
    STATE(197), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [4934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(105), 1,
      sym__dottedName,
    STATE(172), 1,
      aux_sym_m_contexte_repeat1,
    STATE(314), 1,
      sym_reference,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(120), 2,
      sym__newline,
      anon_sym_DASH,
  [4964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_DASH,
  [4978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOT,
    STATE(182), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_DASH,
  [4992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(185), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(125), 2,
      sym__dedent,
      anon_sym_DASH,
  [5006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(129), 2,
      sym__dedent,
      anon_sym_DASH,
  [5020] = 5,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_key,
    ACTIONS(441), 1,
      sym_meta_string,
    STATE(187), 1,
      aux_sym_meta_object_repeat1,
    STATE(219), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(445), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym_meta_object_repeat1,
  [5049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(449), 1,
      sym__dedent,
    STATE(212), 1,
      aux_sym_m_array_repeat1,
  [5062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      sym__dedent,
    STATE(210), 1,
      aux_sym_m_inversion_repeat1,
  [5075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_name,
    STATE(238), 1,
      sym_reference,
    STATE(252), 1,
      sym__dottedName,
  [5088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(212), 1,
      aux_sym_m_array_repeat1,
  [5101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__newline,
    ACTIONS(459), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_m_inversion_repeat1,
  [5114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__newline,
    ACTIONS(461), 1,
      anon_sym_DASH,
    STATE(217), 1,
      aux_sym_m_array_repeat1,
  [5127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_unit_token1,
    STATE(67), 1,
      sym_unit,
    STATE(94), 1,
      sym__units,
  [5140] = 4,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    ACTIONS(465), 1,
      sym__dedent,
    STATE(206), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym_meta_object_repeat1,
  [5166] = 4,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    ACTIONS(469), 1,
      sym__dedent,
    STATE(206), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_unit_token1,
    STATE(63), 1,
      sym_unit,
    STATE(76), 1,
      sym__units,
  [5192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_unit_token1,
    STATE(58), 1,
      sym_unit,
    STATE(104), 1,
      sym__units,
  [5205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
  [5218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      sym__dedent,
    STATE(210), 1,
      aux_sym_m_inversion_repeat1,
  [5231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_name,
    STATE(25), 1,
      sym__dottedName,
    STATE(27), 1,
      sym_reference,
  [5244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [5257] = 4,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    ACTIONS(475), 1,
      sym__dedent,
    STATE(206), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_key,
    ACTIONS(480), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym_meta_object_repeat1,
  [5283] = 4,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_meta_string,
    ACTIONS(485), 1,
      sym__dedent,
    STATE(206), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      sym__dedent,
    STATE(212), 1,
      aux_sym_m_array_repeat1,
  [5309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_unit_token1,
    STATE(63), 1,
      sym_unit,
    STATE(108), 1,
      sym__units,
  [5322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_unit_token1,
    STATE(58), 1,
      sym_unit,
    STATE(83), 1,
      sym__units,
  [5335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__dedent,
    ACTIONS(489), 1,
      anon_sym_DASH,
    STATE(210), 1,
      aux_sym_m_inversion_repeat1,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym__newline,
      anon_sym_DASH,
      anon_sym_DOT,
  [5357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__dedent,
    ACTIONS(492), 1,
      anon_sym_DASH,
    STATE(212), 1,
      aux_sym_m_array_repeat1,
  [5370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(336), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [5383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(214), 1,
      aux_sym_m_inversion_repeat1,
  [5396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_DOT,
  [5405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_unit_token1,
    STATE(67), 1,
      sym_unit,
    STATE(109), 1,
      sym__units,
  [5418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(498), 1,
      anon_sym_DASH,
    STATE(217), 1,
      aux_sym_m_array_repeat1,
  [5431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      sym__dedent,
      anon_sym_DASH,
      sym_name,
  [5440] = 4,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    ACTIONS(501), 1,
      sym__dedent,
    STATE(206), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__dedent,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(212), 1,
      aux_sym_m_array_repeat1,
  [5466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__dedent,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(210), 1,
      aux_sym_m_inversion_repeat1,
  [5479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(503), 1,
      sym__dedent,
    STATE(210), 1,
      aux_sym_m_inversion_repeat1,
  [5492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      sym__dedent,
      anon_sym_DASH,
      sym_name,
  [5501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_name,
    STATE(241), 1,
      sym__dottedName,
    STATE(253), 1,
      sym_reference,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      sym_name,
  [5522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_unit_token1,
    STATE(74), 1,
      sym_unit,
  [5532] = 3,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    STATE(204), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym__dedent,
      sym_key,
  [5550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_unit_token1,
    STATE(85), 1,
      sym_unit,
  [5560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__dedent,
    ACTIONS(511), 1,
      sym__newline,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym__newline,
      anon_sym_DASH,
  [5578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(189), 1,
      aux_sym_m_inversion_repeat1,
  [5588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(191), 1,
      aux_sym_m_array_repeat1,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__indent,
    ACTIONS(515), 1,
      sym__newline,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__indent,
    ACTIONS(519), 1,
      sym__newline,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_DASH,
  [5626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__indent,
    ACTIONS(523), 1,
      sym__newline,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym__newline,
      anon_sym_DASH,
  [5644] = 3,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_meta_string,
    STATE(195), 1,
      aux_sym__meta_multiline_string2_repeat1,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(201), 1,
      aux_sym_m_inversion_repeat1,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__dedent,
      anon_sym_DASH,
  [5672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DASH,
    STATE(23), 1,
      aux_sym_m_inversion_repeat1,
  [5682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(222), 1,
      aux_sym_m_inversion_repeat1,
  [5692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DASH,
    STATE(22), 1,
      aux_sym_m_array_repeat1,
  [5702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(188), 1,
      aux_sym_m_array_repeat1,
  [5712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(207), 1,
      aux_sym_m_array_repeat1,
  [5722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_unit_token1,
    STATE(69), 1,
      sym_unit,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym__dedent,
      sym_key,
  [5740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__dedent,
      sym_key,
  [5748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      sym__dedent,
      sym_key,
  [5756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      sym_name,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__newline,
      anon_sym_DASH,
  [5772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym__dedent,
      anon_sym_DASH,
  [5780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym__dedent,
      sym_key,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      sym__dedent,
      sym_name,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      sym__dedent,
      sym_key,
  [5804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      sym_name,
  [5812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__indent,
    ACTIONS(533), 1,
      sym__newline,
  [5822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__indent,
    ACTIONS(537), 1,
      sym__newline,
  [5832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      ts_builtin_sym_end,
      sym_name,
  [5840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__indent,
    ACTIONS(543), 1,
      sym__newline,
  [5850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DASH,
    STATE(193), 1,
      aux_sym_m_array_repeat1,
  [5860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_DASH,
    STATE(192), 1,
      aux_sym_m_inversion_repeat1,
  [5870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      sym_name,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__indent,
    ACTIONS(549), 1,
      sym__newline,
  [5888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__dedent,
      sym_key,
  [5896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__indent,
    ACTIONS(553), 1,
      sym__newline,
  [5906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      sym_name,
  [5914] = 3,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__dedent,
    ACTIONS(557), 1,
      sym_meta_string,
  [5924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      sym__newline,
      anon_sym_DASH,
  [5932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(221), 1,
      aux_sym_m_inversion_repeat1,
  [5942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(220), 1,
      aux_sym_m_array_repeat1,
  [5952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__newline,
    ACTIONS(559), 1,
      sym__dedent,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__dedent,
      anon_sym_DASH,
  [5970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym__dedent,
      sym_key,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym__dedent,
      sym_key,
  [5986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__indent,
  [5993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__dedent,
  [6000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [6007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COLON,
  [6014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__newline,
  [6021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [6028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__newline,
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON,
  [6042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [6049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__dedent,
  [6056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__dedent,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [6070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [6077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__newline,
  [6084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__newline,
  [6091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_name,
  [6098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_paragraph,
  [6105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_name,
  [6112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_name,
  [6119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_name,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__newline,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_name,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [6161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__newline,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__dedent,
  [6175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__newline,
  [6182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym__newline,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__dedent,
  [6196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_name,
  [6203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [6210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym__dedent,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_paragraph,
  [6224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COLON,
  [6231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__dedent,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__dedent,
  [6245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__newline,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__indent,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COLON,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COLON,
  [6287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__indent,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COLON,
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 178,
  [SMALL_STATE(6)] = 267,
  [SMALL_STATE(7)] = 356,
  [SMALL_STATE(8)] = 445,
  [SMALL_STATE(9)] = 534,
  [SMALL_STATE(10)] = 623,
  [SMALL_STATE(11)] = 712,
  [SMALL_STATE(12)] = 795,
  [SMALL_STATE(13)] = 878,
  [SMALL_STATE(14)] = 961,
  [SMALL_STATE(15)] = 1027,
  [SMALL_STATE(16)] = 1093,
  [SMALL_STATE(17)] = 1135,
  [SMALL_STATE(18)] = 1177,
  [SMALL_STATE(19)] = 1219,
  [SMALL_STATE(20)] = 1256,
  [SMALL_STATE(21)] = 1297,
  [SMALL_STATE(22)] = 1338,
  [SMALL_STATE(23)] = 1379,
  [SMALL_STATE(24)] = 1420,
  [SMALL_STATE(25)] = 1456,
  [SMALL_STATE(26)] = 1492,
  [SMALL_STATE(27)] = 1528,
  [SMALL_STATE(28)] = 1564,
  [SMALL_STATE(29)] = 1600,
  [SMALL_STATE(30)] = 1635,
  [SMALL_STATE(31)] = 1670,
  [SMALL_STATE(32)] = 1705,
  [SMALL_STATE(33)] = 1740,
  [SMALL_STATE(34)] = 1775,
  [SMALL_STATE(35)] = 1810,
  [SMALL_STATE(36)] = 1845,
  [SMALL_STATE(37)] = 1880,
  [SMALL_STATE(38)] = 1915,
  [SMALL_STATE(39)] = 1950,
  [SMALL_STATE(40)] = 1985,
  [SMALL_STATE(41)] = 2020,
  [SMALL_STATE(42)] = 2055,
  [SMALL_STATE(43)] = 2090,
  [SMALL_STATE(44)] = 2125,
  [SMALL_STATE(45)] = 2178,
  [SMALL_STATE(46)] = 2226,
  [SMALL_STATE(47)] = 2274,
  [SMALL_STATE(48)] = 2318,
  [SMALL_STATE(49)] = 2366,
  [SMALL_STATE(50)] = 2410,
  [SMALL_STATE(51)] = 2454,
  [SMALL_STATE(52)] = 2486,
  [SMALL_STATE(53)] = 2518,
  [SMALL_STATE(54)] = 2548,
  [SMALL_STATE(55)] = 2570,
  [SMALL_STATE(56)] = 2592,
  [SMALL_STATE(57)] = 2616,
  [SMALL_STATE(58)] = 2638,
  [SMALL_STATE(59)] = 2662,
  [SMALL_STATE(60)] = 2684,
  [SMALL_STATE(61)] = 2706,
  [SMALL_STATE(62)] = 2730,
  [SMALL_STATE(63)] = 2754,
  [SMALL_STATE(64)] = 2778,
  [SMALL_STATE(65)] = 2800,
  [SMALL_STATE(66)] = 2824,
  [SMALL_STATE(67)] = 2848,
  [SMALL_STATE(68)] = 2872,
  [SMALL_STATE(69)] = 2896,
  [SMALL_STATE(70)] = 2915,
  [SMALL_STATE(71)] = 2934,
  [SMALL_STATE(72)] = 2951,
  [SMALL_STATE(73)] = 2972,
  [SMALL_STATE(74)] = 2993,
  [SMALL_STATE(75)] = 3012,
  [SMALL_STATE(76)] = 3033,
  [SMALL_STATE(77)] = 3054,
  [SMALL_STATE(78)] = 3073,
  [SMALL_STATE(79)] = 3094,
  [SMALL_STATE(80)] = 3115,
  [SMALL_STATE(81)] = 3136,
  [SMALL_STATE(82)] = 3157,
  [SMALL_STATE(83)] = 3176,
  [SMALL_STATE(84)] = 3197,
  [SMALL_STATE(85)] = 3218,
  [SMALL_STATE(86)] = 3237,
  [SMALL_STATE(87)] = 3258,
  [SMALL_STATE(88)] = 3279,
  [SMALL_STATE(89)] = 3300,
  [SMALL_STATE(90)] = 3321,
  [SMALL_STATE(91)] = 3342,
  [SMALL_STATE(92)] = 3363,
  [SMALL_STATE(93)] = 3384,
  [SMALL_STATE(94)] = 3405,
  [SMALL_STATE(95)] = 3426,
  [SMALL_STATE(96)] = 3447,
  [SMALL_STATE(97)] = 3468,
  [SMALL_STATE(98)] = 3494,
  [SMALL_STATE(99)] = 3520,
  [SMALL_STATE(100)] = 3546,
  [SMALL_STATE(101)] = 3572,
  [SMALL_STATE(102)] = 3588,
  [SMALL_STATE(103)] = 3614,
  [SMALL_STATE(104)] = 3640,
  [SMALL_STATE(105)] = 3658,
  [SMALL_STATE(106)] = 3674,
  [SMALL_STATE(107)] = 3700,
  [SMALL_STATE(108)] = 3726,
  [SMALL_STATE(109)] = 3744,
  [SMALL_STATE(110)] = 3762,
  [SMALL_STATE(111)] = 3788,
  [SMALL_STATE(112)] = 3814,
  [SMALL_STATE(113)] = 3830,
  [SMALL_STATE(114)] = 3856,
  [SMALL_STATE(115)] = 3882,
  [SMALL_STATE(116)] = 3899,
  [SMALL_STATE(117)] = 3918,
  [SMALL_STATE(118)] = 3939,
  [SMALL_STATE(119)] = 3954,
  [SMALL_STATE(120)] = 3971,
  [SMALL_STATE(121)] = 3992,
  [SMALL_STATE(122)] = 4007,
  [SMALL_STATE(123)] = 4022,
  [SMALL_STATE(124)] = 4037,
  [SMALL_STATE(125)] = 4054,
  [SMALL_STATE(126)] = 4075,
  [SMALL_STATE(127)] = 4092,
  [SMALL_STATE(128)] = 4107,
  [SMALL_STATE(129)] = 4122,
  [SMALL_STATE(130)] = 4141,
  [SMALL_STATE(131)] = 4156,
  [SMALL_STATE(132)] = 4173,
  [SMALL_STATE(133)] = 4190,
  [SMALL_STATE(134)] = 4209,
  [SMALL_STATE(135)] = 4224,
  [SMALL_STATE(136)] = 4239,
  [SMALL_STATE(137)] = 4256,
  [SMALL_STATE(138)] = 4275,
  [SMALL_STATE(139)] = 4290,
  [SMALL_STATE(140)] = 4307,
  [SMALL_STATE(141)] = 4324,
  [SMALL_STATE(142)] = 4339,
  [SMALL_STATE(143)] = 4354,
  [SMALL_STATE(144)] = 4371,
  [SMALL_STATE(145)] = 4386,
  [SMALL_STATE(146)] = 4401,
  [SMALL_STATE(147)] = 4427,
  [SMALL_STATE(148)] = 4453,
  [SMALL_STATE(149)] = 4468,
  [SMALL_STATE(150)] = 4481,
  [SMALL_STATE(151)] = 4494,
  [SMALL_STATE(152)] = 4507,
  [SMALL_STATE(153)] = 4522,
  [SMALL_STATE(154)] = 4537,
  [SMALL_STATE(155)] = 4552,
  [SMALL_STATE(156)] = 4567,
  [SMALL_STATE(157)] = 4582,
  [SMALL_STATE(158)] = 4597,
  [SMALL_STATE(159)] = 4612,
  [SMALL_STATE(160)] = 4625,
  [SMALL_STATE(161)] = 4640,
  [SMALL_STATE(162)] = 4653,
  [SMALL_STATE(163)] = 4668,
  [SMALL_STATE(164)] = 4681,
  [SMALL_STATE(165)] = 4696,
  [SMALL_STATE(166)] = 4711,
  [SMALL_STATE(167)] = 4724,
  [SMALL_STATE(168)] = 4737,
  [SMALL_STATE(169)] = 4750,
  [SMALL_STATE(170)] = 4762,
  [SMALL_STATE(171)] = 4781,
  [SMALL_STATE(172)] = 4800,
  [SMALL_STATE(173)] = 4819,
  [SMALL_STATE(174)] = 4838,
  [SMALL_STATE(175)] = 4855,
  [SMALL_STATE(176)] = 4872,
  [SMALL_STATE(177)] = 4888,
  [SMALL_STATE(178)] = 4902,
  [SMALL_STATE(179)] = 4918,
  [SMALL_STATE(180)] = 4934,
  [SMALL_STATE(181)] = 4950,
  [SMALL_STATE(182)] = 4964,
  [SMALL_STATE(183)] = 4978,
  [SMALL_STATE(184)] = 4992,
  [SMALL_STATE(185)] = 5006,
  [SMALL_STATE(186)] = 5020,
  [SMALL_STATE(187)] = 5036,
  [SMALL_STATE(188)] = 5049,
  [SMALL_STATE(189)] = 5062,
  [SMALL_STATE(190)] = 5075,
  [SMALL_STATE(191)] = 5088,
  [SMALL_STATE(192)] = 5101,
  [SMALL_STATE(193)] = 5114,
  [SMALL_STATE(194)] = 5127,
  [SMALL_STATE(195)] = 5140,
  [SMALL_STATE(196)] = 5153,
  [SMALL_STATE(197)] = 5166,
  [SMALL_STATE(198)] = 5179,
  [SMALL_STATE(199)] = 5192,
  [SMALL_STATE(200)] = 5205,
  [SMALL_STATE(201)] = 5218,
  [SMALL_STATE(202)] = 5231,
  [SMALL_STATE(203)] = 5244,
  [SMALL_STATE(204)] = 5257,
  [SMALL_STATE(205)] = 5270,
  [SMALL_STATE(206)] = 5283,
  [SMALL_STATE(207)] = 5296,
  [SMALL_STATE(208)] = 5309,
  [SMALL_STATE(209)] = 5322,
  [SMALL_STATE(210)] = 5335,
  [SMALL_STATE(211)] = 5348,
  [SMALL_STATE(212)] = 5357,
  [SMALL_STATE(213)] = 5370,
  [SMALL_STATE(214)] = 5383,
  [SMALL_STATE(215)] = 5396,
  [SMALL_STATE(216)] = 5405,
  [SMALL_STATE(217)] = 5418,
  [SMALL_STATE(218)] = 5431,
  [SMALL_STATE(219)] = 5440,
  [SMALL_STATE(220)] = 5453,
  [SMALL_STATE(221)] = 5466,
  [SMALL_STATE(222)] = 5479,
  [SMALL_STATE(223)] = 5492,
  [SMALL_STATE(224)] = 5501,
  [SMALL_STATE(225)] = 5514,
  [SMALL_STATE(226)] = 5522,
  [SMALL_STATE(227)] = 5532,
  [SMALL_STATE(228)] = 5542,
  [SMALL_STATE(229)] = 5550,
  [SMALL_STATE(230)] = 5560,
  [SMALL_STATE(231)] = 5570,
  [SMALL_STATE(232)] = 5578,
  [SMALL_STATE(233)] = 5588,
  [SMALL_STATE(234)] = 5598,
  [SMALL_STATE(235)] = 5608,
  [SMALL_STATE(236)] = 5618,
  [SMALL_STATE(237)] = 5626,
  [SMALL_STATE(238)] = 5636,
  [SMALL_STATE(239)] = 5644,
  [SMALL_STATE(240)] = 5654,
  [SMALL_STATE(241)] = 5664,
  [SMALL_STATE(242)] = 5672,
  [SMALL_STATE(243)] = 5682,
  [SMALL_STATE(244)] = 5692,
  [SMALL_STATE(245)] = 5702,
  [SMALL_STATE(246)] = 5712,
  [SMALL_STATE(247)] = 5722,
  [SMALL_STATE(248)] = 5732,
  [SMALL_STATE(249)] = 5740,
  [SMALL_STATE(250)] = 5748,
  [SMALL_STATE(251)] = 5756,
  [SMALL_STATE(252)] = 5764,
  [SMALL_STATE(253)] = 5772,
  [SMALL_STATE(254)] = 5780,
  [SMALL_STATE(255)] = 5788,
  [SMALL_STATE(256)] = 5796,
  [SMALL_STATE(257)] = 5804,
  [SMALL_STATE(258)] = 5812,
  [SMALL_STATE(259)] = 5822,
  [SMALL_STATE(260)] = 5832,
  [SMALL_STATE(261)] = 5840,
  [SMALL_STATE(262)] = 5850,
  [SMALL_STATE(263)] = 5860,
  [SMALL_STATE(264)] = 5870,
  [SMALL_STATE(265)] = 5878,
  [SMALL_STATE(266)] = 5888,
  [SMALL_STATE(267)] = 5896,
  [SMALL_STATE(268)] = 5906,
  [SMALL_STATE(269)] = 5914,
  [SMALL_STATE(270)] = 5924,
  [SMALL_STATE(271)] = 5932,
  [SMALL_STATE(272)] = 5942,
  [SMALL_STATE(273)] = 5952,
  [SMALL_STATE(274)] = 5962,
  [SMALL_STATE(275)] = 5970,
  [SMALL_STATE(276)] = 5978,
  [SMALL_STATE(277)] = 5986,
  [SMALL_STATE(278)] = 5993,
  [SMALL_STATE(279)] = 6000,
  [SMALL_STATE(280)] = 6007,
  [SMALL_STATE(281)] = 6014,
  [SMALL_STATE(282)] = 6021,
  [SMALL_STATE(283)] = 6028,
  [SMALL_STATE(284)] = 6035,
  [SMALL_STATE(285)] = 6042,
  [SMALL_STATE(286)] = 6049,
  [SMALL_STATE(287)] = 6056,
  [SMALL_STATE(288)] = 6063,
  [SMALL_STATE(289)] = 6070,
  [SMALL_STATE(290)] = 6077,
  [SMALL_STATE(291)] = 6084,
  [SMALL_STATE(292)] = 6091,
  [SMALL_STATE(293)] = 6098,
  [SMALL_STATE(294)] = 6105,
  [SMALL_STATE(295)] = 6112,
  [SMALL_STATE(296)] = 6119,
  [SMALL_STATE(297)] = 6126,
  [SMALL_STATE(298)] = 6133,
  [SMALL_STATE(299)] = 6140,
  [SMALL_STATE(300)] = 6147,
  [SMALL_STATE(301)] = 6154,
  [SMALL_STATE(302)] = 6161,
  [SMALL_STATE(303)] = 6168,
  [SMALL_STATE(304)] = 6175,
  [SMALL_STATE(305)] = 6182,
  [SMALL_STATE(306)] = 6189,
  [SMALL_STATE(307)] = 6196,
  [SMALL_STATE(308)] = 6203,
  [SMALL_STATE(309)] = 6210,
  [SMALL_STATE(310)] = 6217,
  [SMALL_STATE(311)] = 6224,
  [SMALL_STATE(312)] = 6231,
  [SMALL_STATE(313)] = 6238,
  [SMALL_STATE(314)] = 6245,
  [SMALL_STATE(315)] = 6252,
  [SMALL_STATE(316)] = 6259,
  [SMALL_STATE(317)] = 6266,
  [SMALL_STATE(318)] = 6273,
  [SMALL_STATE(319)] = 6280,
  [SMALL_STATE(320)] = 6287,
  [SMALL_STATE(321)] = 6294,
  [SMALL_STATE(322)] = 6301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(289),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(288),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(284),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(282),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(280),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(279),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(295),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(202),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_object, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 8),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta_multiline_string, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta_paragraph, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta_multiline_string, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(247),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(307),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(226),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(229),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(199),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 7),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 9),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(300),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(216),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(292),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(208),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(60),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(294),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(296),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_object_repeat1, 2), SHIFT_REPEAT(146),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_object_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__meta_multiline_string2_repeat1, 2), SHIFT_REPEAT(290),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__meta_multiline_string2_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(224),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(7),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(190),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__meta_multiline_string2_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reserved_key, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [571] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token_comment = 2,
  ts_external_token__newline = 3,
  ts_external_token_paragraph = 4,
  ts_external_token_error_recovery_mode = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_paragraph] = sym_paragraph,
  [ts_external_token_error_recovery_mode] = sym_error_recovery_mode,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_paragraph] = true,
    [ts_external_token_error_recovery_mode] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [7] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_paragraph] = true,
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
