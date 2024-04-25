#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 712
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 20
#define PRODUCTION_ID_COUNT 62

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COLON = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_formule_token1 = 7,
  aux_sym_m_unary_token1 = 8,
  aux_sym_m_array_token1 = 9,
  aux_sym_m_inversion_token1 = 10,
  aux_sym_m_contexte_token1 = 11,
  aux_sym_m_variations_token1 = 12,
  aux_sym__variation_si_token1 = 13,
  aux_sym__variation_si_token2 = 14,
  aux_sym__variation_sinon_token1 = 15,
  aux_sym_m_unitu00e9_token1 = 16,
  aux_sym_m_duru00e9e_token1 = 17,
  anon_sym_depuis = 18,
  anon_sym_jusqu_SQUOTEu00e0 = 19,
  anon_sym_unitu00e9 = 20,
  anon_sym_jour = 21,
  anon_sym_mois = 22,
  anon_sym_an = 23,
  anon_sym_annu00e9ecivile = 24,
  anon_sym_trimestre = 25,
  anon_sym_trimestrecivil = 26,
  aux_sym_m_baru00e8me_like_token1 = 27,
  anon_sym_assiette = 28,
  anon_sym_multiplicateur = 29,
  anon_sym_tranches = 30,
  aux_sym__m_tranche_token1 = 31,
  aux_sym__m_tranche_token2 = 32,
  aux_sym_m_texte_token1 = 33,
  aux_sym_avec_token1 = 34,
  aux_sym_remplace_token1 = 35,
  aux_sym__remplace_rule_token1 = 36,
  aux_sym__remplace_rule_token2 = 37,
  aux_sym__remplace_rule_token3 = 38,
  anon_sym_oui = 39,
  sym_tag = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  aux_sym_ar_unary_expression_token1 = 43,
  aux_sym_ar_binary_expression_token1 = 44,
  aux_sym_ar_binary_expression_token2 = 45,
  anon_sym_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_LT = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_DOT = 52,
  sym_comment = 53,
  anon_sym_non = 54,
  sym_string = 55,
  sym_date = 56,
  aux_sym_number_token1 = 57,
  anon_sym_SPACE = 58,
  anon_sym_SLASH = 59,
  anon_sym_DOT2 = 60,
  aux_sym_unit_token1 = 61,
  sym_exposant = 62,
  aux_sym_meta_token1 = 63,
  aux_sym__paragraph_token1 = 64,
  sym__key = 65,
  sym_text_line = 66,
  sym__indent = 67,
  sym__dedent = 68,
  sym__array_prefix = 69,
  sym__newline = 70,
  sym_paragraph = 71,
  sym_error_recovery_mode = 72,
  sym_source_file = 73,
  sym_rule = 74,
  sym_rule_body = 75,
  sym__statement = 76,
  sym_formule = 77,
  sym__valeur = 78,
  sym_mechanism = 79,
  sym_m_unary = 80,
  sym_m_array = 81,
  sym__m_special = 82,
  sym_m_inversion = 83,
  sym_m_contexte = 84,
  sym_m_variations = 85,
  sym__variation_si = 86,
  sym__variation_sinon = 87,
  sym_m_unitu00e9 = 88,
  sym_m_duru00e9e = 89,
  sym_m_baru00e8me_like = 90,
  sym__m_tranche = 91,
  sym__m_last_tranche = 92,
  sym_m_texte = 93,
  sym_avec = 94,
  sym_remplace = 95,
  sym__remplace_rule = 96,
  sym__tags = 97,
  sym__expression = 98,
  sym__ar_expression = 99,
  sym_ar_unary_expression = 100,
  sym_ar_binary_expression = 101,
  sym__bool_expression = 102,
  sym_comparison = 103,
  sym__dottedName = 104,
  sym_reference = 105,
  sym_boolean = 106,
  sym_number = 107,
  sym_units = 108,
  sym__units = 109,
  sym_unit = 110,
  sym_meta = 111,
  sym_custom_meta = 112,
  sym_meta_value = 113,
  sym__text_line = 114,
  sym__paragraph = 115,
  sym_object = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_rule_body_repeat1 = 118,
  aux_sym__valeur_repeat1 = 119,
  aux_sym_m_array_repeat1 = 120,
  aux_sym_m_inversion_repeat1 = 121,
  aux_sym_m_contexte_repeat1 = 122,
  aux_sym_m_variations_repeat1 = 123,
  aux_sym_m_baru00e8me_like_repeat1 = 124,
  aux_sym_remplace_repeat1 = 125,
  aux_sym__dottedName_repeat1 = 126,
  aux_sym_units_repeat1 = 127,
  aux_sym__units_repeat1 = 128,
  aux_sym__text_line_repeat1 = 129,
  aux_sym_object_repeat1 = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_formule_token1] = "formule_token1",
  [aux_sym_m_unary_token1] = "m_unary_token1",
  [aux_sym_m_array_token1] = "m_array_token1",
  [aux_sym_m_inversion_token1] = "m_inversion_token1",
  [aux_sym_m_contexte_token1] = "m_contexte_token1",
  [aux_sym_m_variations_token1] = "m_variations_token1",
  [aux_sym__variation_si_token1] = "_variation_si_token1",
  [aux_sym__variation_si_token2] = "_variation_si_token2",
  [aux_sym__variation_sinon_token1] = "_variation_sinon_token1",
  [aux_sym_m_unitu00e9_token1] = "m_unit\u00e9_token1",
  [aux_sym_m_duru00e9e_token1] = "m_dur\u00e9e_token1",
  [anon_sym_depuis] = "depuis",
  [anon_sym_jusqu_SQUOTEu00e0] = "jusqu'\u00e0",
  [anon_sym_unitu00e9] = "unit\u00e9",
  [anon_sym_jour] = "jour",
  [anon_sym_mois] = "mois",
  [anon_sym_an] = "an",
  [anon_sym_annu00e9ecivile] = "ann\u00e9e civile",
  [anon_sym_trimestre] = "trimestre",
  [anon_sym_trimestrecivil] = "trimestre civil",
  [aux_sym_m_baru00e8me_like_token1] = "m_bar\u00e8me_like_token1",
  [anon_sym_assiette] = "assiette",
  [anon_sym_multiplicateur] = "multiplicateur",
  [anon_sym_tranches] = "tranches",
  [aux_sym__m_tranche_token1] = "_m_tranche_token1",
  [aux_sym__m_tranche_token2] = "_m_tranche_token2",
  [aux_sym_m_texte_token1] = "m_texte_token1",
  [aux_sym_avec_token1] = "avec_token1",
  [aux_sym_remplace_token1] = "remplace_token1",
  [aux_sym__remplace_rule_token1] = "_remplace_rule_token1",
  [aux_sym__remplace_rule_token2] = "_remplace_rule_token2",
  [aux_sym__remplace_rule_token3] = "_remplace_rule_token3",
  [anon_sym_oui] = "oui",
  [sym_tag] = "tag",
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
  [anon_sym_non] = "non",
  [sym_string] = "string",
  [sym_date] = "date",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_SPACE] = " ",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT2] = ".",
  [aux_sym_unit_token1] = "unit_token1",
  [sym_exposant] = "exposant",
  [aux_sym_meta_token1] = "meta_token1",
  [aux_sym__paragraph_token1] = "_paragraph_token1",
  [sym__key] = "_key",
  [sym_text_line] = "text_line",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__array_prefix] = "_array_prefix",
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
  [sym_m_variations] = "m_variations",
  [sym__variation_si] = "_variation_si",
  [sym__variation_sinon] = "_variation_sinon",
  [sym_m_unitu00e9] = "m_unit\u00e9",
  [sym_m_duru00e9e] = "m_dur\u00e9e",
  [sym_m_baru00e8me_like] = "m_bar\u00e8me_like",
  [sym__m_tranche] = "_m_tranche",
  [sym__m_last_tranche] = "_m_last_tranche",
  [sym_m_texte] = "m_texte",
  [sym_avec] = "avec",
  [sym_remplace] = "remplace",
  [sym__remplace_rule] = "_remplace_rule",
  [sym__tags] = "_tags",
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
  [sym_custom_meta] = "custom_meta",
  [sym_meta_value] = "meta_value",
  [sym__text_line] = "_text_line",
  [sym__paragraph] = "_paragraph",
  [sym_object] = "object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym__valeur_repeat1] = "_valeur_repeat1",
  [aux_sym_m_array_repeat1] = "m_array_repeat1",
  [aux_sym_m_inversion_repeat1] = "m_inversion_repeat1",
  [aux_sym_m_contexte_repeat1] = "m_contexte_repeat1",
  [aux_sym_m_variations_repeat1] = "m_variations_repeat1",
  [aux_sym_m_baru00e8me_like_repeat1] = "m_bar\u00e8me_like_repeat1",
  [aux_sym_remplace_repeat1] = "remplace_repeat1",
  [aux_sym__dottedName_repeat1] = "_dottedName_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
  [aux_sym__text_line_repeat1] = "_text_line_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_formule_token1] = aux_sym_formule_token1,
  [aux_sym_m_unary_token1] = aux_sym_m_unary_token1,
  [aux_sym_m_array_token1] = aux_sym_m_array_token1,
  [aux_sym_m_inversion_token1] = aux_sym_m_inversion_token1,
  [aux_sym_m_contexte_token1] = aux_sym_m_contexte_token1,
  [aux_sym_m_variations_token1] = aux_sym_m_variations_token1,
  [aux_sym__variation_si_token1] = aux_sym__variation_si_token1,
  [aux_sym__variation_si_token2] = aux_sym__variation_si_token2,
  [aux_sym__variation_sinon_token1] = aux_sym__variation_sinon_token1,
  [aux_sym_m_unitu00e9_token1] = aux_sym_m_unitu00e9_token1,
  [aux_sym_m_duru00e9e_token1] = aux_sym_m_duru00e9e_token1,
  [anon_sym_depuis] = anon_sym_depuis,
  [anon_sym_jusqu_SQUOTEu00e0] = anon_sym_jusqu_SQUOTEu00e0,
  [anon_sym_unitu00e9] = anon_sym_unitu00e9,
  [anon_sym_jour] = anon_sym_jour,
  [anon_sym_mois] = anon_sym_mois,
  [anon_sym_an] = anon_sym_an,
  [anon_sym_annu00e9ecivile] = anon_sym_annu00e9ecivile,
  [anon_sym_trimestre] = anon_sym_trimestre,
  [anon_sym_trimestrecivil] = anon_sym_trimestrecivil,
  [aux_sym_m_baru00e8me_like_token1] = aux_sym_m_baru00e8me_like_token1,
  [anon_sym_assiette] = anon_sym_assiette,
  [anon_sym_multiplicateur] = anon_sym_multiplicateur,
  [anon_sym_tranches] = anon_sym_tranches,
  [aux_sym__m_tranche_token1] = aux_sym__m_tranche_token1,
  [aux_sym__m_tranche_token2] = aux_sym__m_tranche_token2,
  [aux_sym_m_texte_token1] = aux_sym_m_texte_token1,
  [aux_sym_avec_token1] = aux_sym_avec_token1,
  [aux_sym_remplace_token1] = aux_sym_remplace_token1,
  [aux_sym__remplace_rule_token1] = aux_sym__remplace_rule_token1,
  [aux_sym__remplace_rule_token2] = aux_sym__remplace_rule_token2,
  [aux_sym__remplace_rule_token3] = aux_sym__remplace_rule_token3,
  [anon_sym_oui] = anon_sym_oui,
  [sym_tag] = sym_tag,
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
  [anon_sym_non] = anon_sym_non,
  [sym_string] = sym_string,
  [sym_date] = sym_date,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT2] = anon_sym_DOT2,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [sym_exposant] = sym_exposant,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [aux_sym__paragraph_token1] = aux_sym__paragraph_token1,
  [sym__key] = sym__key,
  [sym_text_line] = sym_text_line,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__array_prefix] = sym__array_prefix,
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
  [sym_m_variations] = sym_m_variations,
  [sym__variation_si] = sym__variation_si,
  [sym__variation_sinon] = sym__variation_sinon,
  [sym_m_unitu00e9] = sym_m_unitu00e9,
  [sym_m_duru00e9e] = sym_m_duru00e9e,
  [sym_m_baru00e8me_like] = sym_m_baru00e8me_like,
  [sym__m_tranche] = sym__m_tranche,
  [sym__m_last_tranche] = sym__m_last_tranche,
  [sym_m_texte] = sym_m_texte,
  [sym_avec] = sym_avec,
  [sym_remplace] = sym_remplace,
  [sym__remplace_rule] = sym__remplace_rule,
  [sym__tags] = sym__tags,
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
  [sym_custom_meta] = sym_custom_meta,
  [sym_meta_value] = sym_meta_value,
  [sym__text_line] = sym__text_line,
  [sym__paragraph] = sym__paragraph,
  [sym_object] = sym_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym__valeur_repeat1] = aux_sym__valeur_repeat1,
  [aux_sym_m_array_repeat1] = aux_sym_m_array_repeat1,
  [aux_sym_m_inversion_repeat1] = aux_sym_m_inversion_repeat1,
  [aux_sym_m_contexte_repeat1] = aux_sym_m_contexte_repeat1,
  [aux_sym_m_variations_repeat1] = aux_sym_m_variations_repeat1,
  [aux_sym_m_baru00e8me_like_repeat1] = aux_sym_m_baru00e8me_like_repeat1,
  [aux_sym_remplace_repeat1] = aux_sym_remplace_repeat1,
  [aux_sym__dottedName_repeat1] = aux_sym__dottedName_repeat1,
  [aux_sym_units_repeat1] = aux_sym_units_repeat1,
  [aux_sym__units_repeat1] = aux_sym__units_repeat1,
  [aux_sym__text_line_repeat1] = aux_sym__text_line_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_formule_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_unary_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_array_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_inversion_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_contexte_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_variations_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variation_si_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variation_si_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variation_sinon_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_unitu00e9_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_duru00e9e_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_depuis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jusqu_SQUOTEu00e0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unitu00e9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mois] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_an] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annu00e9ecivile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trimestre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trimestrecivil] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_m_baru00e8me_like_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_assiette] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiplicateur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tranches] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__m_tranche_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__m_tranche_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_texte_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_avec_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remplace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remplace_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remplace_rule_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__remplace_rule_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_oui] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
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
  [aux_sym_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_text_line] = {
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
  [sym__array_prefix] = {
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
  [sym_m_variations] = {
    .visible = true,
    .named = true,
  },
  [sym__variation_si] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_sinon] = {
    .visible = false,
    .named = true,
  },
  [sym_m_unitu00e9] = {
    .visible = true,
    .named = true,
  },
  [sym_m_duru00e9e] = {
    .visible = true,
    .named = true,
  },
  [sym_m_baru00e8me_like] = {
    .visible = true,
    .named = true,
  },
  [sym__m_tranche] = {
    .visible = false,
    .named = true,
  },
  [sym__m_last_tranche] = {
    .visible = false,
    .named = true,
  },
  [sym_m_texte] = {
    .visible = true,
    .named = true,
  },
  [sym_avec] = {
    .visible = true,
    .named = true,
  },
  [sym_remplace] = {
    .visible = true,
    .named = true,
  },
  [sym__remplace_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__tags] = {
    .visible = false,
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
  [sym_custom_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_value] = {
    .visible = true,
    .named = true,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym__paragraph] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
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
  [aux_sym__valeur_repeat1] = {
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
  [aux_sym_m_variations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_baru00e8me_like_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remplace_repeat1] = {
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
  [aux_sym__text_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_assiette = 1,
  field_body = 2,
  field_dans = 3,
  field_denominators = 4,
  field_depuis = 5,
  field_empty = 6,
  field_jusqu_à = 7,
  field_mechanism_name = 8,
  field_meta_name = 9,
  field_multiplicateur = 10,
  field_numerators = 11,
  field_plafond = 12,
  field_sauf_dans = 13,
  field_unité = 14,
  field_valeur = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assiette] = "assiette",
  [field_body] = "body",
  [field_dans] = "dans",
  [field_denominators] = "denominators",
  [field_depuis] = "depuis",
  [field_empty] = "empty",
  [field_jusqu_à] = "jusqu_à",
  [field_mechanism_name] = "mechanism_name",
  [field_meta_name] = "meta_name",
  [field_multiplicateur] = "multiplicateur",
  [field_numerators] = "numerators",
  [field_plafond] = "plafond",
  [field_sauf_dans] = "sauf_dans",
  [field_unité] = "unité",
  [field_valeur] = "valeur",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 4},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 5},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 4},
  [19] = {.index = 39, .length = 4},
  [20] = {.index = 43, .length = 2},
  [21] = {.index = 45, .length = 5},
  [22] = {.index = 50, .length = 1},
  [23] = {.index = 51, .length = 1},
  [24] = {.index = 52, .length = 2},
  [25] = {.index = 54, .length = 2},
  [26] = {.index = 56, .length = 3},
  [27] = {.index = 59, .length = 2},
  [28] = {.index = 61, .length = 3},
  [29] = {.index = 64, .length = 3},
  [30] = {.index = 67, .length = 4},
  [31] = {.index = 71, .length = 4},
  [32] = {.index = 75, .length = 4},
  [33] = {.index = 79, .length = 4},
  [34] = {.index = 83, .length = 4},
  [35] = {.index = 87, .length = 4},
  [36] = {.index = 91, .length = 2},
  [37] = {.index = 93, .length = 4},
  [38] = {.index = 97, .length = 4},
  [39] = {.index = 101, .length = 5},
  [40] = {.index = 106, .length = 5},
  [41] = {.index = 111, .length = 5},
  [42] = {.index = 116, .length = 5},
  [43] = {.index = 121, .length = 4},
  [44] = {.index = 125, .length = 5},
  [45] = {.index = 130, .length = 2},
  [46] = {.index = 132, .length = 1},
  [47] = {.index = 133, .length = 5},
  [48] = {.index = 138, .length = 5},
  [49] = {.index = 143, .length = 8},
  [50] = {.index = 151, .length = 2},
  [51] = {.index = 153, .length = 2},
  [52] = {.index = 155, .length = 5},
  [53] = {.index = 160, .length = 8},
  [54] = {.index = 168, .length = 9},
  [55] = {.index = 177, .length = 9},
  [56] = {.index = 186, .length = 6},
  [57] = {.index = 192, .length = 9},
  [58] = {.index = 201, .length = 9},
  [59] = {.index = 210, .length = 10},
  [60] = {.index = 220, .length = 10},
  [61] = {.index = 230, .length = 6},
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
    {field_meta_name, 0},
  [6] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [9] =
    {field_numerators, 0},
    {field_numerators, 1},
  [11] =
    {field_denominators, 1},
    {field_numerators, 0},
  [13] =
    {field_empty, 5},
  [14] =
    {field_body, 5},
  [15] =
    {field_mechanism_name, 0},
  [16] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [20] =
    {field_denominators, 2},
    {field_numerators, 0},
    {field_numerators, 1},
  [23] =
    {field_value, 5},
    {field_value, 6},
  [25] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
  [30] =
    {field_dans, 3, .inherited = true},
    {field_sauf_dans, 3, .inherited = true},
  [32] =
    {field_value, 5},
    {field_value, 6},
    {field_value, 7},
  [35] =
    {field_dans, 0, .inherited = true},
    {field_dans, 1, .inherited = true},
    {field_sauf_dans, 0, .inherited = true},
    {field_sauf_dans, 1, .inherited = true},
  [39] =
    {field_value, 5},
    {field_value, 6},
    {field_value, 7},
    {field_value, 8},
  [43] =
    {field_dans, 1, .inherited = true},
    {field_sauf_dans, 1, .inherited = true},
  [45] =
    {field_value, 5},
    {field_value, 6},
    {field_value, 7},
    {field_value, 8},
    {field_value, 9},
  [50] =
    {field_depuis, 5},
  [51] =
    {field_jusqu_à, 5},
  [52] =
    {field_unité, 5},
    {field_unité, 6},
  [54] =
    {field_dans, 2, .inherited = true},
    {field_sauf_dans, 2, .inherited = true},
  [56] =
    {field_unité, 5},
    {field_unité, 6},
    {field_unité, 7},
  [59] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
  [61] =
    {field_depuis, 5},
    {field_unité, 8},
    {field_unité, 9},
  [64] =
    {field_jusqu_à, 5},
    {field_unité, 8},
    {field_unité, 9},
  [67] =
    {field_plafond, 0, .inherited = true},
    {field_plafond, 1, .inherited = true},
    {field_valeur, 0, .inherited = true},
    {field_valeur, 1, .inherited = true},
  [71] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_plafond, 9, .inherited = true},
    {field_valeur, 9, .inherited = true},
  [75] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
  [79] =
    {field_sauf_dans, 4},
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
  [83] =
    {field_depuis, 5},
    {field_unité, 8},
    {field_unité, 9},
    {field_unité, 10},
  [87] =
    {field_jusqu_à, 5},
    {field_unité, 8},
    {field_unité, 9},
    {field_unité, 10},
  [91] =
    {field_plafond, 1, .inherited = true},
    {field_valeur, 1, .inherited = true},
  [93] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
  [97] =
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
  [101] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
  [106] =
    {field_sauf_dans, 4},
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
  [111] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_dans, 9},
  [116] =
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
  [121] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
    {field_unité, 11},
    {field_unité, 12},
  [125] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
    {field_valeur, 12, .inherited = true},
  [130] =
    {field_plafond, 2, .inherited = true},
    {field_valeur, 2, .inherited = true},
  [132] =
    {field_valeur, 2},
  [133] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_plafond, 9, .inherited = true},
    {field_valeur, 9, .inherited = true},
    {field_valeur, 11, .inherited = true},
  [138] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
    {field_unité, 11},
    {field_unité, 12},
    {field_unité, 13},
  [143] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
  [151] =
    {field_plafond, 5},
    {field_valeur, 2},
  [153] =
    {field_plafond, 2},
    {field_valeur, 5},
  [155] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_plafond, 9, .inherited = true},
    {field_valeur, 9, .inherited = true},
    {field_valeur, 12, .inherited = true},
  [160] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
  [168] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
  [177] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
  [186] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
    {field_valeur, 12, .inherited = true},
    {field_valeur, 14, .inherited = true},
  [192] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
  [201] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
  [210] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
  [220] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
    {field_sauf_dans, 14},
  [230] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
    {field_valeur, 12, .inherited = true},
    {field_valeur, 15, .inherited = true},
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
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
  [33] = 25,
  [34] = 25,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 25,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
  [64] = 57,
  [65] = 65,
  [66] = 46,
  [67] = 67,
  [68] = 53,
  [69] = 62,
  [70] = 54,
  [71] = 62,
  [72] = 43,
  [73] = 48,
  [74] = 49,
  [75] = 53,
  [76] = 54,
  [77] = 62,
  [78] = 61,
  [79] = 59,
  [80] = 54,
  [81] = 58,
  [82] = 82,
  [83] = 47,
  [84] = 43,
  [85] = 53,
  [86] = 58,
  [87] = 43,
  [88] = 57,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 132,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 132,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 157,
  [168] = 156,
  [169] = 169,
  [170] = 170,
  [171] = 152,
  [172] = 152,
  [173] = 153,
  [174] = 157,
  [175] = 156,
  [176] = 153,
  [177] = 159,
  [178] = 166,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 164,
  [183] = 162,
  [184] = 184,
  [185] = 165,
  [186] = 163,
  [187] = 165,
  [188] = 188,
  [189] = 162,
  [190] = 166,
  [191] = 164,
  [192] = 161,
  [193] = 150,
  [194] = 154,
  [195] = 155,
  [196] = 161,
  [197] = 159,
  [198] = 198,
  [199] = 163,
  [200] = 200,
  [201] = 201,
  [202] = 155,
  [203] = 150,
  [204] = 154,
  [205] = 160,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 160,
  [210] = 206,
  [211] = 211,
  [212] = 208,
  [213] = 213,
  [214] = 213,
  [215] = 211,
  [216] = 170,
  [217] = 208,
  [218] = 211,
  [219] = 170,
  [220] = 213,
  [221] = 221,
  [222] = 184,
  [223] = 201,
  [224] = 188,
  [225] = 179,
  [226] = 184,
  [227] = 169,
  [228] = 181,
  [229] = 201,
  [230] = 230,
  [231] = 169,
  [232] = 232,
  [233] = 198,
  [234] = 181,
  [235] = 180,
  [236] = 200,
  [237] = 180,
  [238] = 188,
  [239] = 198,
  [240] = 240,
  [241] = 241,
  [242] = 200,
  [243] = 240,
  [244] = 179,
  [245] = 201,
  [246] = 240,
  [247] = 179,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 221,
  [261] = 255,
  [262] = 262,
  [263] = 254,
  [264] = 264,
  [265] = 265,
  [266] = 265,
  [267] = 264,
  [268] = 268,
  [269] = 221,
  [270] = 270,
  [271] = 256,
  [272] = 272,
  [273] = 253,
  [274] = 274,
  [275] = 258,
  [276] = 272,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 251,
  [281] = 281,
  [282] = 230,
  [283] = 257,
  [284] = 284,
  [285] = 285,
  [286] = 285,
  [287] = 230,
  [288] = 251,
  [289] = 279,
  [290] = 284,
  [291] = 232,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 262,
  [296] = 278,
  [297] = 277,
  [298] = 298,
  [299] = 277,
  [300] = 268,
  [301] = 284,
  [302] = 278,
  [303] = 232,
  [304] = 278,
  [305] = 262,
  [306] = 277,
  [307] = 272,
  [308] = 279,
  [309] = 274,
  [310] = 281,
  [311] = 311,
  [312] = 279,
  [313] = 284,
  [314] = 262,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 316,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 98,
  [349] = 99,
  [350] = 350,
  [351] = 351,
  [352] = 126,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 147,
  [357] = 357,
  [358] = 152,
  [359] = 359,
  [360] = 360,
  [361] = 152,
  [362] = 362,
  [363] = 157,
  [364] = 364,
  [365] = 153,
  [366] = 126,
  [367] = 98,
  [368] = 153,
  [369] = 369,
  [370] = 370,
  [371] = 157,
  [372] = 156,
  [373] = 156,
  [374] = 147,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 99,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 394,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 391,
  [404] = 388,
  [405] = 405,
  [406] = 406,
  [407] = 400,
  [408] = 408,
  [409] = 401,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 408,
  [417] = 411,
  [418] = 412,
  [419] = 419,
  [420] = 420,
  [421] = 412,
  [422] = 408,
  [423] = 419,
  [424] = 424,
  [425] = 420,
  [426] = 426,
  [427] = 427,
  [428] = 411,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 387,
  [434] = 434,
  [435] = 163,
  [436] = 436,
  [437] = 437,
  [438] = 166,
  [439] = 162,
  [440] = 408,
  [441] = 165,
  [442] = 442,
  [443] = 164,
  [444] = 161,
  [445] = 159,
  [446] = 424,
  [447] = 384,
  [448] = 448,
  [449] = 411,
  [450] = 163,
  [451] = 451,
  [452] = 452,
  [453] = 411,
  [454] = 166,
  [455] = 162,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 408,
  [461] = 165,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 395,
  [466] = 164,
  [467] = 448,
  [468] = 468,
  [469] = 161,
  [470] = 396,
  [471] = 159,
  [472] = 472,
  [473] = 99,
  [474] = 474,
  [475] = 474,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 170,
  [497] = 479,
  [498] = 498,
  [499] = 170,
  [500] = 500,
  [501] = 479,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 98,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 479,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 147,
  [521] = 521,
  [522] = 126,
  [523] = 523,
  [524] = 479,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 632,
  [642] = 630,
  [643] = 643,
  [644] = 620,
  [645] = 640,
  [646] = 639,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 640,
  [653] = 630,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 640,
  [659] = 630,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 634,
  [677] = 677,
  [678] = 631,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 664,
  [705] = 705,
  [706] = 620,
  [707] = 707,
  [708] = 661,
  [709] = 709,
  [710] = 707,
  [711] = 667,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 'b'
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

static inline bool sym_name_character_set_3(int32_t c) {
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

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 'q'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < 'a'
        ? (c < '_'
          ? (c >= 'A' && c <= 'Z')
          : c <= '_')
        : (c <= 'a' || (c >= 'c' && c <= 'o')))))
    : (c <= 'q' || (c < 178
      ? (c < 171
        ? (c < 'w'
          ? (c >= 's' && c <= 'u')
          : c <= 'z')
        : (c <= 171 || c == 176))
      : (c <= 178 || (c < 8217
        ? (c < 192
          ? c == 187
          : c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 'q'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < 'a'
        ? (c < '_'
          ? (c >= 'A' && c <= 'Z')
          : c <= '_')
        : (c <= 'a' || (c >= 'c' && c <= 'o')))))
    : (c <= 'q' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 's' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 'f'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'b' && c <= 'd')))))
    : (c <= 'n' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'p' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 'j'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < 'a'
        ? (c < '_'
          ? (c >= 'A' && c <= 'Z')
          : c <= '_')
        : (c <= 'd' || (c >= 'f' && c <= 'h')))))
    : (c <= 'n' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'p' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_8(int32_t c) {
  return (c < 'm'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'b' && c <= 'k')))))
    : (c <= 'q' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 's' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_9(int32_t c) {
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
    : (c <= 'h' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'j' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_10(int32_t c) {
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
    : (c <= 't' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'v' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_11(int32_t c) {
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
    : (c <= 'z' || (c < 192
      ? (c < 178
        ? (c < 176
          ? c == 171
          : c <= 176)
        : (c <= 178 || c == 187))
      : (c <= 232 || (c < 8217
        ? (c >= 234 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_12(int32_t c) {
  return (c < 'g'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'e')))))
    : (c <= 'm' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'o' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_13(int32_t c) {
  return (c < 'g'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'e')))))
    : (c <= 'r' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 't' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_14(int32_t c) {
  return (c < 'j'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'b' && c <= 'h')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_15(int32_t c) {
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
    : (c <= 'n' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'p' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_16(int32_t c) {
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
    : (c <= 'q' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 's' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_17(int32_t c) {
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
    : (c <= 's' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'u' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_18(int32_t c) {
  return (c < 't'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'r')))))
    : (c <= 'w' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'y' && c <= 'z')
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_19(int32_t c) {
  return (c < 'c'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || c == 'a'))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_20(int32_t c) {
  return (c < 'd'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'b')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_21(int32_t c) {
  return (c < 'e'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'c')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_22(int32_t c) {
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

static inline bool sym_name_character_set_23(int32_t c) {
  return (c < 'g'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'e')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_24(int32_t c) {
  return (c < 'h'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'f')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_25(int32_t c) {
  return (c < 'i'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'g')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_26(int32_t c) {
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

static inline bool sym_name_character_set_27(int32_t c) {
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

static inline bool sym_name_character_set_28(int32_t c) {
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

static inline bool sym_name_character_set_29(int32_t c) {
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

static inline bool sym_name_character_set_30(int32_t c) {
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

static inline bool sym_name_character_set_31(int32_t c) {
  return (c < 'q'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'o')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_32(int32_t c) {
  return (c < 'r'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'p')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_33(int32_t c) {
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

static inline bool sym_name_character_set_34(int32_t c) {
  return (c < 't'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'r')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_35(int32_t c) {
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

static inline bool sym_name_character_set_36(int32_t c) {
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

static inline bool sym_name_character_set_37(int32_t c) {
  return (c < 'w'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'u')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_38(int32_t c) {
  return (c < 'y'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'w')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_39(int32_t c) {
  return (c < 'z'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'x')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_40(int32_t c) {
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

static inline bool sym_name_character_set_41(int32_t c) {
  return (c < 171
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))))
    : (c <= 171 || (c < 192
      ? (c < 178
        ? c == 176
        : (c <= 178 || c == 187))
      : (c <= 231 || (c < 8217
        ? (c >= 233 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_42(int32_t c) {
  return (c < 171
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))))
    : (c <= 171 || (c < 192
      ? (c < 178
        ? c == 176
        : (c <= 178 || c == 187))
      : (c <= 232 || (c < 8217
        ? (c >= 234 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_43(int32_t c) {
  return (c < 'j'
    ? (c < '0'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < 'b'
        ? (c < '_'
          ? (c >= 'A' && c <= 'Z')
          : c <= '_')
        : (c <= 'd' || (c >= 'f' && c <= 'h')))))
    : (c <= 'n' || (c < 187
      ? (c < 176
        ? (c < 171
          ? (c >= 'p' && c <= 'z')
          : c <= 171)
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
      if (eof) ADVANCE(114);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(702);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(382);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '0') ADVANCE(691);
      if (lookahead == '1') ADVANCE(687);
      if (lookahead == '2') ADVANCE(689);
      if (lookahead == '3') ADVANCE(686);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'b') ADVANCE(632);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == 'q') ADVANCE(611);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead == 'v') ADVANCE(629);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(652);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '0') ADVANCE(691);
      if (lookahead == '1') ADVANCE(687);
      if (lookahead == '2') ADVANCE(689);
      if (lookahead == '3') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'b') ADVANCE(632);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == 'q') ADVANCE(611);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead == 'v') ADVANCE(629);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(675);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ':') ADVANCE(703);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(5);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(702);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(382);
      if (lookahead == '|') ADVANCE(702);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(702);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(382);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(115);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == '[') ADVANCE(115);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(695);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(695);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(699);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(382);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == ':') ADVANCE(705);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(382);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(699);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == ':') ADVANCE(707);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(43);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(47);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '1') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == ':') ADVANCE(703);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == ':') ADVANCE(703);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(703);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(703);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(552);
      if (sym_name_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(644);
      if (sym_name_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(558);
      if (sym_name_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(492);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(475);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(556);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(645);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(450);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(467);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(636);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(426);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(615);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(575);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(646);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(485);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(703);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(703);
      if (sym_name_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(300);
      if (sym_name_character_set_1(lookahead)) ADVANCE(407);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(398);
      if (sym_name_character_set_1(lookahead)) ADVANCE(407);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(308);
      if (sym_name_character_set_1(lookahead)) ADVANCE(407);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(236);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(217);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(307);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(400);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(192);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(206);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(390);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(166);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(369);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(325);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(401);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(227);
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 233) ADVANCE(130);
      END_STATE();
    case 105:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      if (sym_name_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 112:
      if (sym_name_character_set_2(lookahead)) ADVANCE(699);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '1') ADVANCE(680);
      if (lookahead == '2') ADVANCE(682);
      if (lookahead == '3') ADVANCE(679);
      if (lookahead == '[') ADVANCE(115);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(407);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == ':') ADVANCE(705);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_formule_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_m_unary_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_m_array_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_m_inversion_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_m_contexte_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_m_variations_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_m_unitu00e9_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_m_duru00e9e_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_unitu00e9);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_unitu00e9);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_m_baru00e8me_like_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__m_tranche_token2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_m_texte_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_avec_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_remplace_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_4(lookahead)) ADVANCE(407);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_5(lookahead)) ADVANCE(407);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_6(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_7(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_8(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_8(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_9(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_10(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_11(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 233) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_12(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_13(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(405);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_14(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_15(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_16(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_17(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_18(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 'x') ADVANCE(311);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_19(lookahead)) ADVANCE(407);
      if (lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_19(lookahead)) ADVANCE(407);
      if (lookahead == 'b') ADVANCE(253);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(407);
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(407);
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(407);
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(407);
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(407);
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_25(lookahead)) ADVANCE(407);
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(407);
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(407);
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(368);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(407);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(407);
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(407);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(407);
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(407);
      if (lookahead == 'q') ADVANCE(372);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(407);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(407);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(407);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(407);
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(407);
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(407);
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(407);
      if (lookahead == 'x') ADVANCE(232);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(407);
      if (lookahead == 'x') ADVANCE(664);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(407);
      if (lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(407);
      if (lookahead == 'x') ADVANCE(358);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_39(lookahead)) ADVANCE(407);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(407);
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(407);
      if (lookahead == 232) ADVANCE(264);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(137);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(128);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(222);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(131);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(221);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(224);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(322);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(189);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(326);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(329);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(407);
      if (lookahead == 233) ADVANCE(330);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(95);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(81);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(83);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(85);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(82);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(94);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(98);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(102);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(101);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_4(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'b') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == 'v') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_43(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_8(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_9(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_10(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_11(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 233) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_12(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_13(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_14(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_15(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_16(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_17(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_18(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 'x') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_19(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'b') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_19(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'b') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_24(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'g') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_25(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'h') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_32(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'q') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_37(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'v') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_37(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'v') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_39(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'y') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_41(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 232) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == 233) ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(66);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(56);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(58);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(68);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(60);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(57);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(65);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(67);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(70);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(69);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(100);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(90);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(86);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(64);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(89);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(84);
      if (sym_name_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(63);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(59);
      if (sym_name_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(676);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(683);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(681);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(685);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(681);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(690);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(688);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(692);
      if (lookahead == ':') ADVANCE(703);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(695);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_3(lookahead)) ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(675);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(715);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(718);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\'') ADVANCE(715);
      if (lookahead == ':') ADVANCE(719);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(718);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == ':') ADVANCE(706);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(702);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(719);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(673);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(719);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(718);
      if (lookahead == ':') ADVANCE(708);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(719);
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
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'j') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 233) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__variation_si_token1);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 233) ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 38:
      if (lookahead == 233) ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token2);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_jour);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_mois);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__m_tranche_token1);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__variation_si_token2);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == '\'') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__variation_sinon_token1);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_depuis);
      END_STATE();
    case 75:
      if (lookahead == 224) ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_jusqu_SQUOTEu00e0);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_assiette);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_tranches);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token3);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_trimestre);
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 224) ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_annu00e9ecivile);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token1);
      END_STATE();
    case 113:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_multiplicateur);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_trimestrecivil);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 113, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 26, .external_lex_state = 2},
  [7] = {.lex_state = 26, .external_lex_state = 2},
  [8] = {.lex_state = 26, .external_lex_state = 2},
  [9] = {.lex_state = 26, .external_lex_state = 2},
  [10] = {.lex_state = 29, .external_lex_state = 3},
  [11] = {.lex_state = 29, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 4},
  [13] = {.lex_state = 2, .external_lex_state = 4},
  [14] = {.lex_state = 2, .external_lex_state = 4},
  [15] = {.lex_state = 113, .external_lex_state = 5},
  [16] = {.lex_state = 113, .external_lex_state = 5},
  [17] = {.lex_state = 113, .external_lex_state = 5},
  [18] = {.lex_state = 113, .external_lex_state = 5},
  [19] = {.lex_state = 113, .external_lex_state = 3},
  [20] = {.lex_state = 113, .external_lex_state = 3},
  [21] = {.lex_state = 113, .external_lex_state = 3},
  [22] = {.lex_state = 113, .external_lex_state = 3},
  [23] = {.lex_state = 113, .external_lex_state = 3},
  [24] = {.lex_state = 113, .external_lex_state = 3},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 113, .external_lex_state = 3},
  [27] = {.lex_state = 113, .external_lex_state = 3},
  [28] = {.lex_state = 113, .external_lex_state = 3},
  [29] = {.lex_state = 113, .external_lex_state = 3},
  [30] = {.lex_state = 113, .external_lex_state = 3},
  [31] = {.lex_state = 113, .external_lex_state = 3},
  [32] = {.lex_state = 113, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 113, .external_lex_state = 3},
  [38] = {.lex_state = 113, .external_lex_state = 3},
  [39] = {.lex_state = 113, .external_lex_state = 3},
  [40] = {.lex_state = 2, .external_lex_state = 4},
  [41] = {.lex_state = 2, .external_lex_state = 4},
  [42] = {.lex_state = 2, .external_lex_state = 6},
  [43] = {.lex_state = 30, .external_lex_state = 2},
  [44] = {.lex_state = 2, .external_lex_state = 6},
  [45] = {.lex_state = 30, .external_lex_state = 2},
  [46] = {.lex_state = 30, .external_lex_state = 2},
  [47] = {.lex_state = 30, .external_lex_state = 2},
  [48] = {.lex_state = 30, .external_lex_state = 2},
  [49] = {.lex_state = 30, .external_lex_state = 2},
  [50] = {.lex_state = 30, .external_lex_state = 2},
  [51] = {.lex_state = 30, .external_lex_state = 2},
  [52] = {.lex_state = 2, .external_lex_state = 6},
  [53] = {.lex_state = 30, .external_lex_state = 2},
  [54] = {.lex_state = 30, .external_lex_state = 2},
  [55] = {.lex_state = 2, .external_lex_state = 6},
  [56] = {.lex_state = 30, .external_lex_state = 2},
  [57] = {.lex_state = 30, .external_lex_state = 2},
  [58] = {.lex_state = 30, .external_lex_state = 2},
  [59] = {.lex_state = 30, .external_lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 6},
  [61] = {.lex_state = 30, .external_lex_state = 2},
  [62] = {.lex_state = 30, .external_lex_state = 2},
  [63] = {.lex_state = 30, .external_lex_state = 2},
  [64] = {.lex_state = 30, .external_lex_state = 2},
  [65] = {.lex_state = 2, .external_lex_state = 6},
  [66] = {.lex_state = 30, .external_lex_state = 2},
  [67] = {.lex_state = 2, .external_lex_state = 6},
  [68] = {.lex_state = 30, .external_lex_state = 2},
  [69] = {.lex_state = 30, .external_lex_state = 2},
  [70] = {.lex_state = 30, .external_lex_state = 2},
  [71] = {.lex_state = 30, .external_lex_state = 2},
  [72] = {.lex_state = 30, .external_lex_state = 2},
  [73] = {.lex_state = 30, .external_lex_state = 2},
  [74] = {.lex_state = 30, .external_lex_state = 2},
  [75] = {.lex_state = 30, .external_lex_state = 2},
  [76] = {.lex_state = 30, .external_lex_state = 2},
  [77] = {.lex_state = 30, .external_lex_state = 2},
  [78] = {.lex_state = 30, .external_lex_state = 2},
  [79] = {.lex_state = 30, .external_lex_state = 2},
  [80] = {.lex_state = 30, .external_lex_state = 2},
  [81] = {.lex_state = 30, .external_lex_state = 2},
  [82] = {.lex_state = 2, .external_lex_state = 6},
  [83] = {.lex_state = 30, .external_lex_state = 2},
  [84] = {.lex_state = 30, .external_lex_state = 2},
  [85] = {.lex_state = 30, .external_lex_state = 2},
  [86] = {.lex_state = 30, .external_lex_state = 2},
  [87] = {.lex_state = 30, .external_lex_state = 2},
  [88] = {.lex_state = 30, .external_lex_state = 2},
  [89] = {.lex_state = 2, .external_lex_state = 6},
  [90] = {.lex_state = 2, .external_lex_state = 6},
  [91] = {.lex_state = 2, .external_lex_state = 6},
  [92] = {.lex_state = 2, .external_lex_state = 6},
  [93] = {.lex_state = 2, .external_lex_state = 6},
  [94] = {.lex_state = 2, .external_lex_state = 6},
  [95] = {.lex_state = 2, .external_lex_state = 4},
  [96] = {.lex_state = 2, .external_lex_state = 4},
  [97] = {.lex_state = 2, .external_lex_state = 4},
  [98] = {.lex_state = 2, .external_lex_state = 4},
  [99] = {.lex_state = 2, .external_lex_state = 4},
  [100] = {.lex_state = 2, .external_lex_state = 4},
  [101] = {.lex_state = 2, .external_lex_state = 4},
  [102] = {.lex_state = 2, .external_lex_state = 4},
  [103] = {.lex_state = 2, .external_lex_state = 4},
  [104] = {.lex_state = 2, .external_lex_state = 4},
  [105] = {.lex_state = 2, .external_lex_state = 4},
  [106] = {.lex_state = 2, .external_lex_state = 4},
  [107] = {.lex_state = 2, .external_lex_state = 4},
  [108] = {.lex_state = 2, .external_lex_state = 4},
  [109] = {.lex_state = 2, .external_lex_state = 4},
  [110] = {.lex_state = 2, .external_lex_state = 4},
  [111] = {.lex_state = 2, .external_lex_state = 4},
  [112] = {.lex_state = 2, .external_lex_state = 4},
  [113] = {.lex_state = 2, .external_lex_state = 4},
  [114] = {.lex_state = 2, .external_lex_state = 4},
  [115] = {.lex_state = 2, .external_lex_state = 4},
  [116] = {.lex_state = 2, .external_lex_state = 4},
  [117] = {.lex_state = 2, .external_lex_state = 4},
  [118] = {.lex_state = 2, .external_lex_state = 4},
  [119] = {.lex_state = 2, .external_lex_state = 4},
  [120] = {.lex_state = 2, .external_lex_state = 4},
  [121] = {.lex_state = 2, .external_lex_state = 4},
  [122] = {.lex_state = 2, .external_lex_state = 4},
  [123] = {.lex_state = 2, .external_lex_state = 4},
  [124] = {.lex_state = 2, .external_lex_state = 4},
  [125] = {.lex_state = 2, .external_lex_state = 4},
  [126] = {.lex_state = 2, .external_lex_state = 4},
  [127] = {.lex_state = 2, .external_lex_state = 4},
  [128] = {.lex_state = 2, .external_lex_state = 4},
  [129] = {.lex_state = 2, .external_lex_state = 4},
  [130] = {.lex_state = 2, .external_lex_state = 4},
  [131] = {.lex_state = 2, .external_lex_state = 4},
  [132] = {.lex_state = 20, .external_lex_state = 2},
  [133] = {.lex_state = 2, .external_lex_state = 4},
  [134] = {.lex_state = 2, .external_lex_state = 4},
  [135] = {.lex_state = 2, .external_lex_state = 4},
  [136] = {.lex_state = 2, .external_lex_state = 4},
  [137] = {.lex_state = 2, .external_lex_state = 4},
  [138] = {.lex_state = 2, .external_lex_state = 4},
  [139] = {.lex_state = 2, .external_lex_state = 4},
  [140] = {.lex_state = 2, .external_lex_state = 4},
  [141] = {.lex_state = 2, .external_lex_state = 4},
  [142] = {.lex_state = 2, .external_lex_state = 4},
  [143] = {.lex_state = 2, .external_lex_state = 4},
  [144] = {.lex_state = 2, .external_lex_state = 4},
  [145] = {.lex_state = 2, .external_lex_state = 4},
  [146] = {.lex_state = 2, .external_lex_state = 4},
  [147] = {.lex_state = 2, .external_lex_state = 4},
  [148] = {.lex_state = 2, .external_lex_state = 4},
  [149] = {.lex_state = 2, .external_lex_state = 4},
  [150] = {.lex_state = 22, .external_lex_state = 2},
  [151] = {.lex_state = 20, .external_lex_state = 7},
  [152] = {.lex_state = 25, .external_lex_state = 2},
  [153] = {.lex_state = 25, .external_lex_state = 2},
  [154] = {.lex_state = 22, .external_lex_state = 2},
  [155] = {.lex_state = 22, .external_lex_state = 2},
  [156] = {.lex_state = 25, .external_lex_state = 2},
  [157] = {.lex_state = 25, .external_lex_state = 2},
  [158] = {.lex_state = 20, .external_lex_state = 4},
  [159] = {.lex_state = 25, .external_lex_state = 2},
  [160] = {.lex_state = 22, .external_lex_state = 2},
  [161] = {.lex_state = 22, .external_lex_state = 2},
  [162] = {.lex_state = 25, .external_lex_state = 2},
  [163] = {.lex_state = 22, .external_lex_state = 2},
  [164] = {.lex_state = 22, .external_lex_state = 2},
  [165] = {.lex_state = 22, .external_lex_state = 2},
  [166] = {.lex_state = 22, .external_lex_state = 2},
  [167] = {.lex_state = 25, .external_lex_state = 4},
  [168] = {.lex_state = 25, .external_lex_state = 7},
  [169] = {.lex_state = 22, .external_lex_state = 2},
  [170] = {.lex_state = 22, .external_lex_state = 2},
  [171] = {.lex_state = 25, .external_lex_state = 7},
  [172] = {.lex_state = 25, .external_lex_state = 4},
  [173] = {.lex_state = 25, .external_lex_state = 7},
  [174] = {.lex_state = 25, .external_lex_state = 7},
  [175] = {.lex_state = 25, .external_lex_state = 4},
  [176] = {.lex_state = 25, .external_lex_state = 4},
  [177] = {.lex_state = 25, .external_lex_state = 7},
  [178] = {.lex_state = 22, .external_lex_state = 4},
  [179] = {.lex_state = 22, .external_lex_state = 2},
  [180] = {.lex_state = 22, .external_lex_state = 2},
  [181] = {.lex_state = 22, .external_lex_state = 2},
  [182] = {.lex_state = 22, .external_lex_state = 7},
  [183] = {.lex_state = 25, .external_lex_state = 4},
  [184] = {.lex_state = 22, .external_lex_state = 2},
  [185] = {.lex_state = 22, .external_lex_state = 7},
  [186] = {.lex_state = 22, .external_lex_state = 7},
  [187] = {.lex_state = 22, .external_lex_state = 4},
  [188] = {.lex_state = 22, .external_lex_state = 2},
  [189] = {.lex_state = 25, .external_lex_state = 7},
  [190] = {.lex_state = 22, .external_lex_state = 7},
  [191] = {.lex_state = 22, .external_lex_state = 4},
  [192] = {.lex_state = 22, .external_lex_state = 4},
  [193] = {.lex_state = 22, .external_lex_state = 4},
  [194] = {.lex_state = 22, .external_lex_state = 7},
  [195] = {.lex_state = 22, .external_lex_state = 7},
  [196] = {.lex_state = 22, .external_lex_state = 7},
  [197] = {.lex_state = 25, .external_lex_state = 4},
  [198] = {.lex_state = 22, .external_lex_state = 2},
  [199] = {.lex_state = 22, .external_lex_state = 4},
  [200] = {.lex_state = 22, .external_lex_state = 2},
  [201] = {.lex_state = 22, .external_lex_state = 2},
  [202] = {.lex_state = 22, .external_lex_state = 4},
  [203] = {.lex_state = 22, .external_lex_state = 7},
  [204] = {.lex_state = 22, .external_lex_state = 4},
  [205] = {.lex_state = 22, .external_lex_state = 4},
  [206] = {.lex_state = 113, .external_lex_state = 2},
  [207] = {.lex_state = 113, .external_lex_state = 2},
  [208] = {.lex_state = 113, .external_lex_state = 2},
  [209] = {.lex_state = 22, .external_lex_state = 7},
  [210] = {.lex_state = 113, .external_lex_state = 2},
  [211] = {.lex_state = 113, .external_lex_state = 2},
  [212] = {.lex_state = 113, .external_lex_state = 2},
  [213] = {.lex_state = 113, .external_lex_state = 2},
  [214] = {.lex_state = 113, .external_lex_state = 2},
  [215] = {.lex_state = 113, .external_lex_state = 2},
  [216] = {.lex_state = 22, .external_lex_state = 4},
  [217] = {.lex_state = 113, .external_lex_state = 2},
  [218] = {.lex_state = 113, .external_lex_state = 2},
  [219] = {.lex_state = 22, .external_lex_state = 7},
  [220] = {.lex_state = 113, .external_lex_state = 2},
  [221] = {.lex_state = 113, .external_lex_state = 2},
  [222] = {.lex_state = 22, .external_lex_state = 4},
  [223] = {.lex_state = 22, .external_lex_state = 7},
  [224] = {.lex_state = 22, .external_lex_state = 7},
  [225] = {.lex_state = 22, .external_lex_state = 7},
  [226] = {.lex_state = 22, .external_lex_state = 7},
  [227] = {.lex_state = 22, .external_lex_state = 7},
  [228] = {.lex_state = 22, .external_lex_state = 7},
  [229] = {.lex_state = 22, .external_lex_state = 2},
  [230] = {.lex_state = 113, .external_lex_state = 2},
  [231] = {.lex_state = 22, .external_lex_state = 4},
  [232] = {.lex_state = 113, .external_lex_state = 2},
  [233] = {.lex_state = 22, .external_lex_state = 4},
  [234] = {.lex_state = 22, .external_lex_state = 4},
  [235] = {.lex_state = 22, .external_lex_state = 4},
  [236] = {.lex_state = 22, .external_lex_state = 4},
  [237] = {.lex_state = 22, .external_lex_state = 7},
  [238] = {.lex_state = 22, .external_lex_state = 4},
  [239] = {.lex_state = 22, .external_lex_state = 7},
  [240] = {.lex_state = 22, .external_lex_state = 2},
  [241] = {.lex_state = 113, .external_lex_state = 2},
  [242] = {.lex_state = 22, .external_lex_state = 7},
  [243] = {.lex_state = 22, .external_lex_state = 2},
  [244] = {.lex_state = 22, .external_lex_state = 4},
  [245] = {.lex_state = 22, .external_lex_state = 4},
  [246] = {.lex_state = 22, .external_lex_state = 2},
  [247] = {.lex_state = 22, .external_lex_state = 2},
  [248] = {.lex_state = 713, .external_lex_state = 5},
  [249] = {.lex_state = 713, .external_lex_state = 5},
  [250] = {.lex_state = 713, .external_lex_state = 5},
  [251] = {.lex_state = 113, .external_lex_state = 2},
  [252] = {.lex_state = 113, .external_lex_state = 2},
  [253] = {.lex_state = 113, .external_lex_state = 2},
  [254] = {.lex_state = 113, .external_lex_state = 4},
  [255] = {.lex_state = 113, .external_lex_state = 7},
  [256] = {.lex_state = 113, .external_lex_state = 2},
  [257] = {.lex_state = 113, .external_lex_state = 2},
  [258] = {.lex_state = 113, .external_lex_state = 2},
  [259] = {.lex_state = 113, .external_lex_state = 8},
  [260] = {.lex_state = 113, .external_lex_state = 7},
  [261] = {.lex_state = 113, .external_lex_state = 7},
  [262] = {.lex_state = 113, .external_lex_state = 2},
  [263] = {.lex_state = 113, .external_lex_state = 4},
  [264] = {.lex_state = 113, .external_lex_state = 2},
  [265] = {.lex_state = 113, .external_lex_state = 2},
  [266] = {.lex_state = 113, .external_lex_state = 2},
  [267] = {.lex_state = 113, .external_lex_state = 2},
  [268] = {.lex_state = 113, .external_lex_state = 4},
  [269] = {.lex_state = 113, .external_lex_state = 4},
  [270] = {.lex_state = 113, .external_lex_state = 4},
  [271] = {.lex_state = 113, .external_lex_state = 2},
  [272] = {.lex_state = 113, .external_lex_state = 2},
  [273] = {.lex_state = 113, .external_lex_state = 2},
  [274] = {.lex_state = 113, .external_lex_state = 2},
  [275] = {.lex_state = 113, .external_lex_state = 2},
  [276] = {.lex_state = 113, .external_lex_state = 2},
  [277] = {.lex_state = 113, .external_lex_state = 7},
  [278] = {.lex_state = 113, .external_lex_state = 4},
  [279] = {.lex_state = 113, .external_lex_state = 2},
  [280] = {.lex_state = 113, .external_lex_state = 2},
  [281] = {.lex_state = 113, .external_lex_state = 2},
  [282] = {.lex_state = 113, .external_lex_state = 4},
  [283] = {.lex_state = 113, .external_lex_state = 2},
  [284] = {.lex_state = 113, .external_lex_state = 2},
  [285] = {.lex_state = 113, .external_lex_state = 7},
  [286] = {.lex_state = 113, .external_lex_state = 7},
  [287] = {.lex_state = 113, .external_lex_state = 7},
  [288] = {.lex_state = 113, .external_lex_state = 2},
  [289] = {.lex_state = 113, .external_lex_state = 2},
  [290] = {.lex_state = 113, .external_lex_state = 2},
  [291] = {.lex_state = 113, .external_lex_state = 4},
  [292] = {.lex_state = 113, .external_lex_state = 3},
  [293] = {.lex_state = 113, .external_lex_state = 3},
  [294] = {.lex_state = 113, .external_lex_state = 3},
  [295] = {.lex_state = 113, .external_lex_state = 2},
  [296] = {.lex_state = 113, .external_lex_state = 4},
  [297] = {.lex_state = 113, .external_lex_state = 7},
  [298] = {.lex_state = 113, .external_lex_state = 3},
  [299] = {.lex_state = 113, .external_lex_state = 7},
  [300] = {.lex_state = 113, .external_lex_state = 4},
  [301] = {.lex_state = 113, .external_lex_state = 2},
  [302] = {.lex_state = 113, .external_lex_state = 4},
  [303] = {.lex_state = 113, .external_lex_state = 7},
  [304] = {.lex_state = 113, .external_lex_state = 4},
  [305] = {.lex_state = 113, .external_lex_state = 2},
  [306] = {.lex_state = 113, .external_lex_state = 7},
  [307] = {.lex_state = 113, .external_lex_state = 2},
  [308] = {.lex_state = 113, .external_lex_state = 2},
  [309] = {.lex_state = 113, .external_lex_state = 2},
  [310] = {.lex_state = 113, .external_lex_state = 2},
  [311] = {.lex_state = 113, .external_lex_state = 4},
  [312] = {.lex_state = 113, .external_lex_state = 2},
  [313] = {.lex_state = 113, .external_lex_state = 2},
  [314] = {.lex_state = 113, .external_lex_state = 2},
  [315] = {.lex_state = 113, .external_lex_state = 4},
  [316] = {.lex_state = 113, .external_lex_state = 2},
  [317] = {.lex_state = 113, .external_lex_state = 2},
  [318] = {.lex_state = 113, .external_lex_state = 4},
  [319] = {.lex_state = 113, .external_lex_state = 2},
  [320] = {.lex_state = 113, .external_lex_state = 2},
  [321] = {.lex_state = 113, .external_lex_state = 2},
  [322] = {.lex_state = 113, .external_lex_state = 2},
  [323] = {.lex_state = 20, .external_lex_state = 3},
  [324] = {.lex_state = 113, .external_lex_state = 2},
  [325] = {.lex_state = 113, .external_lex_state = 3},
  [326] = {.lex_state = 113, .external_lex_state = 5},
  [327] = {.lex_state = 113, .external_lex_state = 8},
  [328] = {.lex_state = 113, .external_lex_state = 5},
  [329] = {.lex_state = 113, .external_lex_state = 5},
  [330] = {.lex_state = 713, .external_lex_state = 3},
  [331] = {.lex_state = 113, .external_lex_state = 5},
  [332] = {.lex_state = 20, .external_lex_state = 2},
  [333] = {.lex_state = 113, .external_lex_state = 4},
  [334] = {.lex_state = 113, .external_lex_state = 5},
  [335] = {.lex_state = 113, .external_lex_state = 5},
  [336] = {.lex_state = 113, .external_lex_state = 8},
  [337] = {.lex_state = 113, .external_lex_state = 2},
  [338] = {.lex_state = 113, .external_lex_state = 8},
  [339] = {.lex_state = 113, .external_lex_state = 8},
  [340] = {.lex_state = 22, .external_lex_state = 3},
  [341] = {.lex_state = 113, .external_lex_state = 5},
  [342] = {.lex_state = 22, .external_lex_state = 3},
  [343] = {.lex_state = 113, .external_lex_state = 3},
  [344] = {.lex_state = 113, .external_lex_state = 8},
  [345] = {.lex_state = 113, .external_lex_state = 2},
  [346] = {.lex_state = 113, .external_lex_state = 5},
  [347] = {.lex_state = 113, .external_lex_state = 4},
  [348] = {.lex_state = 22, .external_lex_state = 2},
  [349] = {.lex_state = 22, .external_lex_state = 2},
  [350] = {.lex_state = 22, .external_lex_state = 3},
  [351] = {.lex_state = 113, .external_lex_state = 5},
  [352] = {.lex_state = 22, .external_lex_state = 2},
  [353] = {.lex_state = 22, .external_lex_state = 3},
  [354] = {.lex_state = 113, .external_lex_state = 8},
  [355] = {.lex_state = 113, .external_lex_state = 8},
  [356] = {.lex_state = 22, .external_lex_state = 2},
  [357] = {.lex_state = 113, .external_lex_state = 8},
  [358] = {.lex_state = 113, .external_lex_state = 4},
  [359] = {.lex_state = 113, .external_lex_state = 6},
  [360] = {.lex_state = 113, .external_lex_state = 3},
  [361] = {.lex_state = 113, .external_lex_state = 7},
  [362] = {.lex_state = 113, .external_lex_state = 6},
  [363] = {.lex_state = 113, .external_lex_state = 4},
  [364] = {.lex_state = 22, .external_lex_state = 2},
  [365] = {.lex_state = 113, .external_lex_state = 4},
  [366] = {.lex_state = 25, .external_lex_state = 4},
  [367] = {.lex_state = 25, .external_lex_state = 4},
  [368] = {.lex_state = 113, .external_lex_state = 7},
  [369] = {.lex_state = 22, .external_lex_state = 2},
  [370] = {.lex_state = 113, .external_lex_state = 3},
  [371] = {.lex_state = 113, .external_lex_state = 7},
  [372] = {.lex_state = 113, .external_lex_state = 7},
  [373] = {.lex_state = 113, .external_lex_state = 4},
  [374] = {.lex_state = 25, .external_lex_state = 4},
  [375] = {.lex_state = 22, .external_lex_state = 2},
  [376] = {.lex_state = 32, .external_lex_state = 4},
  [377] = {.lex_state = 710, .external_lex_state = 2},
  [378] = {.lex_state = 22, .external_lex_state = 2},
  [379] = {.lex_state = 25, .external_lex_state = 4},
  [380] = {.lex_state = 22, .external_lex_state = 3},
  [381] = {.lex_state = 113, .external_lex_state = 2},
  [382] = {.lex_state = 113, .external_lex_state = 2},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 113, .external_lex_state = 4},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 6, .external_lex_state = 4},
  [387] = {.lex_state = 113, .external_lex_state = 4},
  [388] = {.lex_state = 113, .external_lex_state = 4},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 113, .external_lex_state = 4},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 113, .external_lex_state = 2},
  [395] = {.lex_state = 113, .external_lex_state = 4},
  [396] = {.lex_state = 113, .external_lex_state = 4},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 113, .external_lex_state = 4},
  [400] = {.lex_state = 113, .external_lex_state = 4},
  [401] = {.lex_state = 113, .external_lex_state = 4},
  [402] = {.lex_state = 32, .external_lex_state = 4},
  [403] = {.lex_state = 113, .external_lex_state = 2},
  [404] = {.lex_state = 113, .external_lex_state = 2},
  [405] = {.lex_state = 0, .external_lex_state = 6},
  [406] = {.lex_state = 0, .external_lex_state = 6},
  [407] = {.lex_state = 113, .external_lex_state = 2},
  [408] = {.lex_state = 34, .external_lex_state = 2},
  [409] = {.lex_state = 113, .external_lex_state = 2},
  [410] = {.lex_state = 0, .external_lex_state = 6},
  [411] = {.lex_state = 34, .external_lex_state = 2},
  [412] = {.lex_state = 22, .external_lex_state = 2},
  [413] = {.lex_state = 113, .external_lex_state = 3},
  [414] = {.lex_state = 22, .external_lex_state = 2},
  [415] = {.lex_state = 714, .external_lex_state = 4},
  [416] = {.lex_state = 34, .external_lex_state = 2},
  [417] = {.lex_state = 34, .external_lex_state = 2},
  [418] = {.lex_state = 22, .external_lex_state = 2},
  [419] = {.lex_state = 113, .external_lex_state = 4},
  [420] = {.lex_state = 113, .external_lex_state = 4},
  [421] = {.lex_state = 22, .external_lex_state = 2},
  [422] = {.lex_state = 34, .external_lex_state = 2},
  [423] = {.lex_state = 113, .external_lex_state = 2},
  [424] = {.lex_state = 113, .external_lex_state = 4},
  [425] = {.lex_state = 113, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 34, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 6},
  [430] = {.lex_state = 714, .external_lex_state = 4},
  [431] = {.lex_state = 6, .external_lex_state = 4},
  [432] = {.lex_state = 714, .external_lex_state = 4},
  [433] = {.lex_state = 113, .external_lex_state = 2},
  [434] = {.lex_state = 113, .external_lex_state = 2},
  [435] = {.lex_state = 113, .external_lex_state = 7},
  [436] = {.lex_state = 113, .external_lex_state = 4},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 113, .external_lex_state = 7},
  [439] = {.lex_state = 113, .external_lex_state = 7},
  [440] = {.lex_state = 34, .external_lex_state = 2},
  [441] = {.lex_state = 113, .external_lex_state = 7},
  [442] = {.lex_state = 113, .external_lex_state = 4},
  [443] = {.lex_state = 113, .external_lex_state = 7},
  [444] = {.lex_state = 113, .external_lex_state = 7},
  [445] = {.lex_state = 113, .external_lex_state = 7},
  [446] = {.lex_state = 113, .external_lex_state = 2},
  [447] = {.lex_state = 113, .external_lex_state = 2},
  [448] = {.lex_state = 113, .external_lex_state = 4},
  [449] = {.lex_state = 34, .external_lex_state = 2},
  [450] = {.lex_state = 113, .external_lex_state = 4},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 0, .external_lex_state = 6},
  [453] = {.lex_state = 34, .external_lex_state = 2},
  [454] = {.lex_state = 113, .external_lex_state = 4},
  [455] = {.lex_state = 113, .external_lex_state = 4},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 34, .external_lex_state = 2},
  [461] = {.lex_state = 113, .external_lex_state = 4},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 0, .external_lex_state = 6},
  [465] = {.lex_state = 113, .external_lex_state = 2},
  [466] = {.lex_state = 113, .external_lex_state = 4},
  [467] = {.lex_state = 113, .external_lex_state = 2},
  [468] = {.lex_state = 113, .external_lex_state = 2},
  [469] = {.lex_state = 113, .external_lex_state = 4},
  [470] = {.lex_state = 113, .external_lex_state = 2},
  [471] = {.lex_state = 113, .external_lex_state = 4},
  [472] = {.lex_state = 0, .external_lex_state = 8},
  [473] = {.lex_state = 113, .external_lex_state = 4},
  [474] = {.lex_state = 113, .external_lex_state = 2},
  [475] = {.lex_state = 113, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 5},
  [477] = {.lex_state = 0, .external_lex_state = 5},
  [478] = {.lex_state = 0, .external_lex_state = 5},
  [479] = {.lex_state = 34, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 8},
  [481] = {.lex_state = 0, .external_lex_state = 8},
  [482] = {.lex_state = 0, .external_lex_state = 8},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 0, .external_lex_state = 8},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 714, .external_lex_state = 2},
  [487] = {.lex_state = 714, .external_lex_state = 2},
  [488] = {.lex_state = 6, .external_lex_state = 4},
  [489] = {.lex_state = 714, .external_lex_state = 4},
  [490] = {.lex_state = 113, .external_lex_state = 2},
  [491] = {.lex_state = 113, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 6},
  [493] = {.lex_state = 31, .external_lex_state = 4},
  [494] = {.lex_state = 113, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 8},
  [496] = {.lex_state = 113, .external_lex_state = 4},
  [497] = {.lex_state = 34, .external_lex_state = 2},
  [498] = {.lex_state = 113, .external_lex_state = 4},
  [499] = {.lex_state = 113, .external_lex_state = 7},
  [500] = {.lex_state = 0, .external_lex_state = 6},
  [501] = {.lex_state = 34, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 8},
  [503] = {.lex_state = 0, .external_lex_state = 5},
  [504] = {.lex_state = 0, .external_lex_state = 8},
  [505] = {.lex_state = 113, .external_lex_state = 4},
  [506] = {.lex_state = 113, .external_lex_state = 4},
  [507] = {.lex_state = 31, .external_lex_state = 4},
  [508] = {.lex_state = 0, .external_lex_state = 5},
  [509] = {.lex_state = 0, .external_lex_state = 8},
  [510] = {.lex_state = 0, .external_lex_state = 8},
  [511] = {.lex_state = 0, .external_lex_state = 6},
  [512] = {.lex_state = 0, .external_lex_state = 8},
  [513] = {.lex_state = 0, .external_lex_state = 8},
  [514] = {.lex_state = 31, .external_lex_state = 4},
  [515] = {.lex_state = 0, .external_lex_state = 8},
  [516] = {.lex_state = 34, .external_lex_state = 2},
  [517] = {.lex_state = 113, .external_lex_state = 4},
  [518] = {.lex_state = 0, .external_lex_state = 6},
  [519] = {.lex_state = 0, .external_lex_state = 8},
  [520] = {.lex_state = 113, .external_lex_state = 4},
  [521] = {.lex_state = 0, .external_lex_state = 8},
  [522] = {.lex_state = 113, .external_lex_state = 4},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 34, .external_lex_state = 2},
  [525] = {.lex_state = 113, .external_lex_state = 4},
  [526] = {.lex_state = 0, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 4},
  [528] = {.lex_state = 0, .external_lex_state = 4},
  [529] = {.lex_state = 0, .external_lex_state = 4},
  [530] = {.lex_state = 0, .external_lex_state = 4},
  [531] = {.lex_state = 0, .external_lex_state = 7},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 4},
  [534] = {.lex_state = 0, .external_lex_state = 4},
  [535] = {.lex_state = 0, .external_lex_state = 4},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 4},
  [539] = {.lex_state = 0, .external_lex_state = 4},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 0, .external_lex_state = 4},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 4},
  [544] = {.lex_state = 0, .external_lex_state = 4},
  [545] = {.lex_state = 0, .external_lex_state = 4},
  [546] = {.lex_state = 0, .external_lex_state = 4},
  [547] = {.lex_state = 113, .external_lex_state = 2},
  [548] = {.lex_state = 31, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 4},
  [550] = {.lex_state = 0, .external_lex_state = 4},
  [551] = {.lex_state = 0, .external_lex_state = 4},
  [552] = {.lex_state = 0, .external_lex_state = 4},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 0, .external_lex_state = 4},
  [555] = {.lex_state = 0, .external_lex_state = 4},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 4},
  [558] = {.lex_state = 0, .external_lex_state = 4},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 4},
  [561] = {.lex_state = 0, .external_lex_state = 7},
  [562] = {.lex_state = 0, .external_lex_state = 4},
  [563] = {.lex_state = 0, .external_lex_state = 4},
  [564] = {.lex_state = 0, .external_lex_state = 4},
  [565] = {.lex_state = 0, .external_lex_state = 7},
  [566] = {.lex_state = 0, .external_lex_state = 7},
  [567] = {.lex_state = 0, .external_lex_state = 4},
  [568] = {.lex_state = 0, .external_lex_state = 4},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 0, .external_lex_state = 4},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 0, .external_lex_state = 7},
  [574] = {.lex_state = 0, .external_lex_state = 7},
  [575] = {.lex_state = 0, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0, .external_lex_state = 4},
  [578] = {.lex_state = 0, .external_lex_state = 4},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 2},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 4},
  [585] = {.lex_state = 113, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 7},
  [587] = {.lex_state = 0, .external_lex_state = 7},
  [588] = {.lex_state = 0, .external_lex_state = 4},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 4},
  [591] = {.lex_state = 0, .external_lex_state = 4},
  [592] = {.lex_state = 0, .external_lex_state = 4},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 0, .external_lex_state = 4},
  [595] = {.lex_state = 0, .external_lex_state = 7},
  [596] = {.lex_state = 0, .external_lex_state = 2},
  [597] = {.lex_state = 0, .external_lex_state = 7},
  [598] = {.lex_state = 0, .external_lex_state = 4},
  [599] = {.lex_state = 0, .external_lex_state = 4},
  [600] = {.lex_state = 0, .external_lex_state = 4},
  [601] = {.lex_state = 0, .external_lex_state = 4},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 4},
  [605] = {.lex_state = 0, .external_lex_state = 4},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 4},
  [610] = {.lex_state = 0, .external_lex_state = 4},
  [611] = {.lex_state = 113, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 4},
  [613] = {.lex_state = 0, .external_lex_state = 4},
  [614] = {.lex_state = 0, .external_lex_state = 4},
  [615] = {.lex_state = 0, .external_lex_state = 4},
  [616] = {.lex_state = 0, .external_lex_state = 4},
  [617] = {.lex_state = 0, .external_lex_state = 7},
  [618] = {.lex_state = 0, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 4},
  [620] = {.lex_state = 113, .external_lex_state = 2},
  [621] = {.lex_state = 0, .external_lex_state = 4},
  [622] = {.lex_state = 0, .external_lex_state = 7},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0, .external_lex_state = 2},
  [626] = {.lex_state = 0, .external_lex_state = 4},
  [627] = {.lex_state = 0, .external_lex_state = 4},
  [628] = {.lex_state = 0, .external_lex_state = 4},
  [629] = {.lex_state = 0, .external_lex_state = 4},
  [630] = {.lex_state = 0, .external_lex_state = 4},
  [631] = {.lex_state = 0, .external_lex_state = 7},
  [632] = {.lex_state = 0, .external_lex_state = 4},
  [633] = {.lex_state = 0, .external_lex_state = 4},
  [634] = {.lex_state = 0, .external_lex_state = 4},
  [635] = {.lex_state = 0, .external_lex_state = 4},
  [636] = {.lex_state = 0, .external_lex_state = 4},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 4},
  [639] = {.lex_state = 0, .external_lex_state = 7},
  [640] = {.lex_state = 0, .external_lex_state = 7},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 0, .external_lex_state = 4},
  [643] = {.lex_state = 0, .external_lex_state = 4},
  [644] = {.lex_state = 113, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 7},
  [646] = {.lex_state = 0, .external_lex_state = 7},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0, .external_lex_state = 4},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 0, .external_lex_state = 4},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 7},
  [653] = {.lex_state = 0, .external_lex_state = 4},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 0, .external_lex_state = 2},
  [656] = {.lex_state = 0, .external_lex_state = 2},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 7},
  [659] = {.lex_state = 0, .external_lex_state = 4},
  [660] = {.lex_state = 0, .external_lex_state = 4},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 4},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 7},
  [666] = {.lex_state = 0, .external_lex_state = 7},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 4},
  [669] = {.lex_state = 113, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 7},
  [671] = {.lex_state = 0, .external_lex_state = 7},
  [672] = {.lex_state = 0, .external_lex_state = 4},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 4},
  [675] = {.lex_state = 0, .external_lex_state = 4},
  [676] = {.lex_state = 0, .external_lex_state = 4},
  [677] = {.lex_state = 0, .external_lex_state = 4},
  [678] = {.lex_state = 0, .external_lex_state = 7},
  [679] = {.lex_state = 0, .external_lex_state = 4},
  [680] = {.lex_state = 0, .external_lex_state = 9},
  [681] = {.lex_state = 113, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 3},
  [683] = {.lex_state = 0, .external_lex_state = 3},
  [684] = {.lex_state = 0, .external_lex_state = 3},
  [685] = {.lex_state = 0, .external_lex_state = 3},
  [686] = {.lex_state = 0, .external_lex_state = 3},
  [687] = {.lex_state = 0, .external_lex_state = 4},
  [688] = {.lex_state = 0, .external_lex_state = 4},
  [689] = {.lex_state = 0, .external_lex_state = 4},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 2},
  [693] = {.lex_state = 0, .external_lex_state = 2},
  [694] = {.lex_state = 0, .external_lex_state = 2},
  [695] = {.lex_state = 0, .external_lex_state = 2},
  [696] = {.lex_state = 0, .external_lex_state = 2},
  [697] = {.lex_state = 0, .external_lex_state = 2},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 0, .external_lex_state = 2},
  [701] = {.lex_state = 0, .external_lex_state = 2},
  [702] = {.lex_state = 0, .external_lex_state = 2},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 2},
  [705] = {.lex_state = 0, .external_lex_state = 4},
  [706] = {.lex_state = 113, .external_lex_state = 2},
  [707] = {.lex_state = 0, .external_lex_state = 2},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 2},
  [710] = {.lex_state = 0, .external_lex_state = 2},
  [711] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_formule_token1] = ACTIONS(1),
    [aux_sym_m_unary_token1] = ACTIONS(1),
    [aux_sym_m_array_token1] = ACTIONS(1),
    [aux_sym_m_inversion_token1] = ACTIONS(1),
    [aux_sym_m_contexte_token1] = ACTIONS(1),
    [aux_sym_m_variations_token1] = ACTIONS(1),
    [aux_sym__variation_si_token1] = ACTIONS(1),
    [aux_sym__variation_si_token2] = ACTIONS(1),
    [aux_sym__variation_sinon_token1] = ACTIONS(1),
    [aux_sym_m_unitu00e9_token1] = ACTIONS(1),
    [aux_sym_m_duru00e9e_token1] = ACTIONS(1),
    [anon_sym_depuis] = ACTIONS(1),
    [anon_sym_jusqu_SQUOTEu00e0] = ACTIONS(1),
    [anon_sym_unitu00e9] = ACTIONS(1),
    [anon_sym_jour] = ACTIONS(1),
    [anon_sym_mois] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(1),
    [anon_sym_annu00e9ecivile] = ACTIONS(1),
    [anon_sym_trimestre] = ACTIONS(1),
    [anon_sym_trimestrecivil] = ACTIONS(1),
    [anon_sym_assiette] = ACTIONS(1),
    [anon_sym_multiplicateur] = ACTIONS(1),
    [anon_sym_tranches] = ACTIONS(1),
    [aux_sym__m_tranche_token1] = ACTIONS(1),
    [aux_sym__m_tranche_token2] = ACTIONS(1),
    [aux_sym_m_texte_token1] = ACTIONS(1),
    [aux_sym_avec_token1] = ACTIONS(1),
    [aux_sym_remplace_token1] = ACTIONS(1),
    [aux_sym__remplace_rule_token1] = ACTIONS(1),
    [aux_sym__remplace_rule_token2] = ACTIONS(1),
    [aux_sym__remplace_rule_token3] = ACTIONS(1),
    [anon_sym_oui] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
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
    [anon_sym_non] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_exposant] = ACTIONS(1),
    [aux_sym_meta_token1] = ACTIONS(1),
    [aux_sym__paragraph_token1] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__array_prefix] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_paragraph] = ACTIONS(1),
    [sym_error_recovery_mode] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(709),
    [sym_rule] = STATE(319),
    [sym__dottedName] = STATE(708),
    [aux_sym_source_file_repeat1] = STATE(319),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(49), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(268), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(14), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [118] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(61), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(254), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(13), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [236] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(67), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(14), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [354] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(73), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(300), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(13), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [472] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_date,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(41), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(304), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [567] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_string,
    ACTIONS(93), 1,
      sym_date,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(34), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(302), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [662] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym_string,
    ACTIONS(101), 1,
      sym_date,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(33), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [757] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_string,
    ACTIONS(109), 1,
      sym_date,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(25), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [852] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(113), 1,
      sym__indent,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(111), 2,
      sym_string,
      sym_date,
    STATE(40), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [942] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(115), 2,
      sym_string,
      sym_date,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [1029] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_formule_token1,
    ACTIONS(120), 1,
      aux_sym_m_unary_token1,
    ACTIONS(123), 1,
      aux_sym_m_array_token1,
    ACTIONS(126), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(129), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(132), 1,
      aux_sym_m_variations_token1,
    ACTIONS(135), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(138), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(141), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(144), 1,
      aux_sym_m_texte_token1,
    ACTIONS(147), 1,
      aux_sym_avec_token1,
    ACTIONS(150), 1,
      aux_sym_remplace_token1,
    ACTIONS(153), 1,
      sym_tag,
    ACTIONS(156), 1,
      aux_sym_meta_token1,
    ACTIONS(159), 1,
      sym__key,
    ACTIONS(162), 1,
      sym__dedent,
    STATE(12), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [1104] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    ACTIONS(164), 1,
      sym__dedent,
    STATE(12), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [1179] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_formule_token1,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(37), 1,
      aux_sym_avec_token1,
    ACTIONS(39), 1,
      aux_sym_remplace_token1,
    ACTIONS(43), 1,
      sym_tag,
    ACTIONS(53), 1,
      aux_sym_meta_token1,
    ACTIONS(55), 1,
      sym__key,
    ACTIONS(166), 1,
      sym__dedent,
    STATE(12), 9,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [1254] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(180), 1,
      sym_string,
    ACTIONS(182), 1,
      sym_date,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(188), 1,
      sym__newline,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(400), 1,
      sym_rule_body,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1315] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(196), 1,
      sym_date,
    ACTIONS(198), 1,
      sym__indent,
    ACTIONS(200), 1,
      sym__newline,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(467), 1,
      sym_rule_body,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1376] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_string,
    ACTIONS(208), 1,
      sym_date,
    ACTIONS(210), 1,
      sym__indent,
    ACTIONS(212), 1,
      sym__newline,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(407), 1,
      sym_rule_body,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1437] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_string,
    ACTIONS(220), 1,
      sym_date,
    ACTIONS(222), 1,
      sym__indent,
    ACTIONS(224), 1,
      sym__newline,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(448), 1,
      sym_rule_body,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1498] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(115), 1,
      sym__valeur,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1556] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(621), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1614] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(593), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1672] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(242), 1,
      sym_date,
    ACTIONS(244), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(514), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1730] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_string,
    ACTIONS(252), 1,
      sym_date,
    ACTIONS(254), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(547), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1788] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_string,
    ACTIONS(252), 1,
      sym_date,
    ACTIONS(254), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(548), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1846] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(256), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [1896] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_string,
    ACTIONS(252), 1,
      sym_date,
    ACTIONS(254), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(494), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1954] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(242), 1,
      sym_date,
    ACTIONS(244), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(493), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2012] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(242), 1,
      sym_date,
    ACTIONS(244), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(402), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2070] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_string,
    ACTIONS(252), 1,
      sym_date,
    ACTIONS(254), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(611), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2128] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(581), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2186] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(618), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2244] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_string,
    ACTIONS(232), 1,
      sym_date,
    ACTIONS(234), 1,
      sym__indent,
    STATE(117), 1,
      sym__valeur,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2302] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(258), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2352] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(260), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2402] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2452] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_m_unary_token1,
    ACTIONS(267), 1,
      aux_sym_m_array_token1,
    ACTIONS(270), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(273), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(276), 1,
      aux_sym_m_variations_token1,
    ACTIONS(279), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(282), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(285), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(288), 1,
      aux_sym_m_texte_token1,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2502] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      sym_string,
    ACTIONS(299), 1,
      sym_date,
    ACTIONS(301), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(491), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(299), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2560] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(242), 1,
      sym_date,
    ACTIONS(244), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(507), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2618] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_string,
    ACTIONS(252), 1,
      sym_date,
    ACTIONS(254), 1,
      sym__indent,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    STATE(585), 1,
      sym__valeur,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2676] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(303), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2726] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_m_unary_token1,
    ACTIONS(21), 1,
      aux_sym_m_array_token1,
    ACTIONS(23), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(25), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(27), 1,
      aux_sym_m_variations_token1,
    ACTIONS(29), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(31), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(33), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(35), 1,
      aux_sym_m_texte_token1,
    ACTIONS(305), 1,
      sym__dedent,
    STATE(36), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(118), 10,
      sym_m_unary,
      sym_m_array,
      sym__m_special,
      sym_m_inversion,
      sym_m_contexte,
      sym_m_variations,
      sym_m_unitu00e9,
      sym_m_duru00e9e,
      sym_m_baru00e8me_like,
      sym_m_texte,
  [2776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__key,
    ACTIONS(311), 1,
      sym__array_prefix,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(307), 16,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      aux_sym__remplace_rule_token3,
      sym_tag,
      aux_sym_meta_token1,
  [2807] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(322), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(312), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__key,
    ACTIONS(326), 17,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      aux_sym__remplace_rule_token3,
      sym_tag,
      aux_sym_meta_token1,
  [2879] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(330), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(332), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2971] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(334), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(256), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3017] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(336), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3063] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(338), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3109] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(340), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3155] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(342), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(267), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__key,
    ACTIONS(348), 1,
      sym__array_prefix,
    STATE(52), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(344), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [3231] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(351), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(280), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3277] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(353), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__key,
    ACTIONS(359), 1,
      sym__array_prefix,
    STATE(55), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(355), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [3353] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(362), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(264), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3399] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(229), 1,
      sym_number,
    STATE(247), 1,
      sym_reference,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(364), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(230), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3443] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    STATE(321), 1,
      sym__expression,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(366), 2,
      sym_string,
      sym_date,
    STATE(272), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(243), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3491] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(368), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(274), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__key,
    ACTIONS(374), 1,
      sym__array_prefix,
    STATE(52), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(370), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [3567] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(376), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3613] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(378), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3659] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_name,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(184), 1,
      aux_sym_number_token1,
    STATE(223), 1,
      sym_number,
    STATE(225), 1,
      sym_reference,
    STATE(227), 1,
      sym__dottedName,
    ACTIONS(174), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(380), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3703] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(364), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(230), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__key,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(382), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [3779] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(388), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(273), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__key,
    ACTIONS(394), 1,
      sym__array_prefix,
    STATE(55), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(390), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [3855] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(396), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3901] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(398), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(301), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(400), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(305), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3993] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(402), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4039] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(404), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(308), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4085] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(406), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4131] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(408), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4177] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(410), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(252), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4223] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(412), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(314), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4269] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(414), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(313), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4315] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(416), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(310), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4361] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(418), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4407] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(420), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4453] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    STATE(321), 1,
      sym__expression,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(366), 2,
      sym_string,
      sym_date,
    STATE(276), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(246), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym__key,
    ACTIONS(422), 17,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      aux_sym__remplace_rule_token3,
      sym_tag,
      aux_sym_meta_token1,
  [4527] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(426), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(428), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4619] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(430), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4665] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    STATE(321), 1,
      sym__expression,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(366), 2,
      sym_string,
      sym_date,
    STATE(307), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(240), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4713] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_name,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(324), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(179), 1,
      sym_reference,
    STATE(201), 1,
      sym_number,
    STATE(241), 1,
      sym_boolean,
    ACTIONS(316), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(432), 2,
      sym_string,
      sym_date,
    STATE(181), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4759] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(244), 1,
      sym_reference,
    STATE(245), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(434), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(282), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym__key,
    ACTIONS(436), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym__key,
    ACTIONS(440), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__key,
    ACTIONS(444), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym__key,
    ACTIONS(448), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym__key,
    ACTIONS(452), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__key,
    ACTIONS(456), 16,
      sym__dedent,
      sym__array_prefix,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__key,
    ACTIONS(460), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym__key,
    ACTIONS(464), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__key,
    ACTIONS(468), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__key,
    ACTIONS(472), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym__key,
    ACTIONS(476), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym__key,
    ACTIONS(480), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__key,
    ACTIONS(484), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__key,
    ACTIONS(488), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__key,
    ACTIONS(492), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__key,
    ACTIONS(496), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym__key,
    ACTIONS(500), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__key,
    ACTIONS(504), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__key,
    ACTIONS(496), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__key,
    ACTIONS(508), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym__key,
    ACTIONS(512), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__key,
    ACTIONS(516), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__key,
    ACTIONS(520), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym__key,
    ACTIONS(524), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__key,
    ACTIONS(528), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__key,
    ACTIONS(532), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__key,
    ACTIONS(536), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__key,
    ACTIONS(540), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__key,
    ACTIONS(544), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__key,
    ACTIONS(548), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__key,
    ACTIONS(552), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__key,
    ACTIONS(556), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__key,
    ACTIONS(560), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__key,
    ACTIONS(564), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__key,
    ACTIONS(568), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__key,
    ACTIONS(572), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym__key,
    ACTIONS(576), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__key,
    ACTIONS(580), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__key,
    ACTIONS(584), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__key,
    ACTIONS(588), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__key,
    ACTIONS(592), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__key,
    ACTIONS(596), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__key,
    ACTIONS(600), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5841] = 7,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SPACE,
    ACTIONS(610), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(163), 1,
      sym__units,
    STATE(198), 1,
      sym_units,
    ACTIONS(604), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__key,
    ACTIONS(612), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__key,
    ACTIONS(616), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__key,
    ACTIONS(620), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__key,
    ACTIONS(624), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__key,
    ACTIONS(628), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__key,
    ACTIONS(632), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__key,
    ACTIONS(636), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__key,
    ACTIONS(640), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__key,
    ACTIONS(644), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__key,
    ACTIONS(648), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__key,
    ACTIONS(652), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__key,
    ACTIONS(656), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__key,
    ACTIONS(660), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__key,
    ACTIONS(664), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__key,
    ACTIONS(668), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__key,
    ACTIONS(672), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__key,
    ACTIONS(676), 15,
      sym__dedent,
      aux_sym_formule_token1,
      aux_sym_m_unary_token1,
      aux_sym_m_array_token1,
      aux_sym_m_inversion_token1,
      aux_sym_m_contexte_token1,
      aux_sym_m_variations_token1,
      aux_sym_m_unitu00e9_token1,
      aux_sym_m_duru00e9e_token1,
      aux_sym_m_baru00e8me_like_token1,
      aux_sym_m_texte_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(680), 12,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6305] = 8,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SPACE,
    ACTIONS(687), 1,
      aux_sym_unit_token1,
    ACTIONS(689), 1,
      sym__newline,
    STATE(173), 1,
      sym_unit,
    STATE(186), 1,
      sym__units,
    STATE(239), 1,
      sym_units,
    ACTIONS(604), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    ACTIONS(695), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(691), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_DOT2,
    ACTIONS(699), 1,
      anon_sym_SLASH,
    STATE(152), 1,
      aux_sym__units_repeat1,
    ACTIONS(697), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(701), 12,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(705), 12,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(711), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(707), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    ACTIONS(718), 1,
      sym_exposant,
    ACTIONS(714), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6487] = 8,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__dedent,
    ACTIONS(720), 1,
      anon_sym_SPACE,
    ACTIONS(722), 1,
      aux_sym_unit_token1,
    STATE(176), 1,
      sym_unit,
    STATE(199), 1,
      sym__units,
    STATE(233), 1,
      sym_units,
    ACTIONS(604), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(707), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 13,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      aux_sym_units_repeat1,
    ACTIONS(724), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SLASH,
    ACTIONS(729), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    STATE(165), 1,
      aux_sym_units_repeat1,
    ACTIONS(733), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      aux_sym_units_repeat1,
    ACTIONS(737), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      aux_sym_units_repeat1,
    ACTIONS(739), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    STATE(164), 1,
      aux_sym_units_repeat1,
    ACTIONS(741), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    ACTIONS(743), 1,
      sym_exposant,
    ACTIONS(714), 10,
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
  [6717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(745), 1,
      anon_sym_DOT2,
    STATE(168), 1,
      aux_sym__units_repeat1,
    ACTIONS(707), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 12,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SLASH,
    ACTIONS(724), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    ACTIONS(752), 1,
      anon_sym_DOT2,
    STATE(168), 1,
      aux_sym__units_repeat1,
    ACTIONS(691), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    ACTIONS(754), 1,
      anon_sym_DOT2,
    STATE(175), 1,
      aux_sym__units_repeat1,
    ACTIONS(691), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SLASH,
    ACTIONS(752), 1,
      anon_sym_DOT2,
    STATE(171), 1,
      aux_sym__units_repeat1,
    ACTIONS(697), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    ACTIONS(756), 1,
      sym_exposant,
    ACTIONS(714), 10,
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
  [6873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(758), 1,
      anon_sym_DOT2,
    STATE(175), 1,
      aux_sym__units_repeat1,
    ACTIONS(707), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SLASH,
    ACTIONS(754), 1,
      anon_sym_DOT2,
    STATE(172), 1,
      aux_sym__units_repeat1,
    ACTIONS(697), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(707), 10,
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
  [6940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    STATE(191), 1,
      aux_sym_units_repeat1,
    ACTIONS(741), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    STATE(196), 1,
      aux_sym_units_repeat1,
    ACTIONS(737), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SLASH,
    ACTIONS(729), 10,
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
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    STATE(196), 1,
      aux_sym_units_repeat1,
    ACTIONS(739), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      aux_sym_units_repeat1,
    ACTIONS(733), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    STATE(192), 1,
      aux_sym_units_repeat1,
    ACTIONS(739), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(778), 10,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SLASH,
    ACTIONS(729), 10,
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
  [7178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SLASH,
    STATE(182), 1,
      aux_sym_units_repeat1,
    ACTIONS(741), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    STATE(192), 1,
      aux_sym_units_repeat1,
    ACTIONS(737), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SLASH,
    STATE(192), 1,
      aux_sym_units_repeat1,
    ACTIONS(724), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_DOT,
    STATE(193), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(680), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DOT,
    STATE(195), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(701), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(705), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SLASH,
    STATE(196), 1,
      aux_sym_units_repeat1,
    ACTIONS(724), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SLASH,
    ACTIONS(707), 10,
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
  [7344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    STATE(187), 1,
      aux_sym_units_repeat1,
    ACTIONS(733), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 11,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DOT,
    STATE(193), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(705), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DOT,
    STATE(203), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(680), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(701), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 10,
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
  [7497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(421), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(418), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(804), 1,
      sym_name,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      aux_sym_number_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(236), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 10,
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
  [7591] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(412), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7617] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      aux_sym_number_token1,
    STATE(227), 1,
      sym__dottedName,
    STATE(224), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7643] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(200), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(184), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7695] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(804), 1,
      sym_name,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      aux_sym_number_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(222), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(804), 1,
      sym_name,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      aux_sym_number_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(238), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SLASH,
    ACTIONS(724), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7765] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      aux_sym_number_token1,
    STATE(227), 1,
      sym__dottedName,
    STATE(242), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7791] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(320), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      aux_sym_number_token1,
    STATE(169), 1,
      sym__dottedName,
    STATE(188), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SLASH,
    ACTIONS(724), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      aux_sym_number_token1,
    STATE(227), 1,
      sym__dottedName,
    STATE(226), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(778), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(820), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(828), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(778), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8310] = 7,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__paragraph_token1,
    ACTIONS(840), 1,
      sym_text_line,
    ACTIONS(842), 1,
      sym__indent,
    ACTIONS(844), 1,
      sym__newline,
    STATE(134), 1,
      sym_meta_value,
    STATE(143), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8334] = 7,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__paragraph_token1,
    ACTIONS(840), 1,
      sym_text_line,
    ACTIONS(842), 1,
      sym__indent,
    ACTIONS(844), 1,
      sym__newline,
    STATE(97), 1,
      sym_meta_value,
    STATE(143), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8358] = 7,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__paragraph_token1,
    ACTIONS(840), 1,
      sym_text_line,
    ACTIONS(842), 1,
      sym__indent,
    ACTIONS(844), 1,
      sym__newline,
    STATE(488), 1,
      sym_meta_value,
    STATE(143), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(374), 1,
      sym__array_prefix,
    ACTIONS(864), 1,
      aux_sym__remplace_rule_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(429), 1,
      aux_sym_remplace_repeat1,
    STATE(649), 1,
      sym_reference,
    STATE(650), 1,
      sym__remplace_rule,
  [8527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__indent,
    ACTIONS(902), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(900), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym__indent,
    ACTIONS(908), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(906), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym__indent,
    ACTIONS(914), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(912), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__indent,
    ACTIONS(924), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(922), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym__newline,
    ACTIONS(858), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__dedent,
    ACTIONS(854), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(848), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      sym__dedent,
    STATE(661), 1,
      sym__dottedName,
    STATE(318), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      ts_builtin_sym_end,
    ACTIONS(946), 1,
      sym_name,
    ACTIONS(949), 1,
      anon_sym_LBRACK,
    STATE(708), 1,
      sym__dottedName,
    STATE(316), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(952), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym__dedent,
    ACTIONS(946), 1,
      sym_name,
    ACTIONS(956), 1,
      anon_sym_LBRACK,
    STATE(661), 1,
      sym__dottedName,
    STATE(318), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
    STATE(708), 1,
      sym__dottedName,
    STATE(316), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(961), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(967), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9482] = 7,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SPACE,
    ACTIONS(973), 1,
      aux_sym_unit_token1,
    ACTIONS(975), 1,
      sym__indent,
    STATE(368), 1,
      sym_unit,
    STATE(435), 1,
      sym__units,
    STATE(670), 1,
      sym_units,
  [9504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(977), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9518] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(864), 1,
      aux_sym__remplace_rule_token1,
    ACTIONS(981), 1,
      sym__indent,
    STATE(231), 1,
      sym__dottedName,
    STATE(633), 1,
      sym_reference,
    STATE(635), 1,
      sym__remplace_rule,
  [9540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(983), 1,
      sym__indent,
    ACTIONS(985), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(565), 1,
      sym_reference,
  [9559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(456), 1,
      aux_sym_m_inversion_repeat1,
    STATE(647), 1,
      sym_reference,
  [9578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(987), 1,
      sym__indent,
    ACTIONS(989), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(597), 1,
      sym_reference,
  [9597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(991), 1,
      sym__indent,
    ACTIONS(993), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(595), 1,
      sym_reference,
  [9616] = 5,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__paragraph_token1,
    ACTIONS(840), 1,
      sym_text_line,
    ACTIONS(995), 1,
      sym__indent,
    STATE(128), 2,
      sym__text_line,
      sym__paragraph,
  [9633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(997), 1,
      sym__indent,
    ACTIONS(999), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(574), 1,
      sym_reference,
  [9652] = 6,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_SPACE,
    ACTIONS(1003), 1,
      aux_sym_unit_token1,
    STATE(365), 1,
      sym_unit,
    STATE(450), 1,
      sym__units,
    STATE(660), 1,
      sym_units,
  [9671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_name,
    ACTIONS(1008), 1,
      sym__dedent,
    STATE(169), 1,
      sym__dottedName,
    STATE(333), 1,
      aux_sym_m_contexte_repeat1,
    STATE(662), 1,
      sym_reference,
  [9690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1010), 1,
      sym__indent,
    ACTIONS(1012), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(566), 1,
      sym_reference,
  [9709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1014), 1,
      sym__indent,
    ACTIONS(1016), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(573), 1,
      sym_reference,
  [9728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(383), 1,
      aux_sym_m_inversion_repeat1,
    STATE(564), 1,
      sym_reference,
  [9747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    STATE(661), 1,
      sym__dottedName,
    STATE(315), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(462), 1,
      aux_sym_m_inversion_repeat1,
    STATE(679), 1,
      sym_reference,
  [9783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(393), 1,
      aux_sym_m_inversion_repeat1,
    STATE(563), 1,
      sym_reference,
  [9802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1022), 1,
      sym__indent,
    STATE(529), 1,
      sym__m_last_tranche,
    STATE(568), 1,
      sym__m_tranche,
  [9821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1024), 1,
      sym__indent,
    ACTIONS(1026), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(666), 1,
      sym_reference,
  [9840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1028), 1,
      sym__indent,
    STATE(530), 1,
      sym__m_last_tranche,
    STATE(568), 1,
      sym__m_tranche,
  [9859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1032), 1,
      aux_sym__variation_sinon_token1,
    ACTIONS(1034), 1,
      sym__indent,
    STATE(624), 1,
      sym__variation_sinon,
    STATE(636), 1,
      sym__variation_si,
  [9878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(458), 1,
      aux_sym_m_inversion_repeat1,
    STATE(623), 1,
      sym_reference,
  [9897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(864), 1,
      aux_sym__remplace_rule_token1,
    STATE(231), 1,
      sym__dottedName,
    STATE(527), 1,
      sym__remplace_rule,
    STATE(584), 1,
      sym_reference,
  [9916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1036), 1,
      sym__indent,
    ACTIONS(1038), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(531), 1,
      sym_reference,
  [9935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(1040), 1,
      sym__dedent,
    STATE(169), 1,
      sym__dottedName,
    STATE(333), 1,
      aux_sym_m_contexte_repeat1,
    STATE(662), 1,
      sym_reference,
  [9954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [9965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [9976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1042), 1,
      sym__indent,
    STATE(558), 1,
      sym__m_last_tranche,
    STATE(568), 1,
      sym__m_tranche,
  [9995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1044), 1,
      sym__indent,
    ACTIONS(1046), 1,
      sym__newline,
    STATE(227), 1,
      sym__dottedName,
    STATE(671), 1,
      sym_reference,
  [10014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1048), 1,
      sym__indent,
    STATE(557), 1,
      sym__m_last_tranche,
    STATE(568), 1,
      sym__m_tranche,
  [10044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(385), 1,
      aux_sym_m_inversion_repeat1,
    STATE(556), 1,
      sym_reference,
  [10063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(451), 1,
      aux_sym_m_inversion_repeat1,
    STATE(598), 1,
      sym_reference,
  [10082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(389), 1,
      aux_sym_m_inversion_repeat1,
    STATE(555), 1,
      sym_reference,
  [10112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_DOT2,
    STATE(373), 1,
      aux_sym__units_repeat1,
    ACTIONS(691), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1052), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1054), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_name,
    ACTIONS(1056), 1,
      sym__indent,
    STATE(227), 1,
      sym__dottedName,
    STATE(617), 1,
      sym_reference,
  [10158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_DOT2,
    STATE(372), 1,
      aux_sym__units_repeat1,
    ACTIONS(691), 2,
      sym__newline,
      anon_sym_SLASH,
  [10172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1060), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1062), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym_exposant,
    ACTIONS(714), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    STATE(560), 1,
      sym__m_tranche,
    STATE(638), 1,
      sym__m_last_tranche,
  [10216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_DOT2,
    STATE(358), 1,
      aux_sym__units_repeat1,
    ACTIONS(697), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_DOT2,
    STATE(361), 1,
      aux_sym__units_repeat1,
    ACTIONS(697), 2,
      sym__newline,
      anon_sym_SLASH,
  [10264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    STATE(560), 1,
      sym__m_tranche,
    STATE(687), 1,
      sym__m_last_tranche,
  [10280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_name,
    ACTIONS(1066), 1,
      sym__indent,
    STATE(231), 1,
      sym__dottedName,
    STATE(643), 1,
      sym_reference,
  [10296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym_exposant,
    ACTIONS(714), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_DOT2,
    STATE(372), 1,
      aux_sym__units_repeat1,
    ACTIONS(707), 2,
      sym__newline,
      anon_sym_SLASH,
  [10322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_DOT2,
    STATE(373), 1,
      aux_sym__units_repeat1,
    ACTIONS(707), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    STATE(546), 1,
      sym__m_last_tranche,
    STATE(560), 1,
      sym__m_tranche,
  [10362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_depuis,
    ACTIONS(1078), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1080), 1,
      anon_sym_unitu00e9,
    ACTIONS(1082), 1,
      sym__dedent,
  [10378] = 5,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__key,
    ACTIONS(1086), 1,
      sym_text_line,
    STATE(386), 1,
      aux_sym_object_repeat1,
    STATE(415), 1,
      aux_sym__text_line_repeat1,
  [10394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    STATE(544), 1,
      sym__m_last_tranche,
    STATE(560), 1,
      sym__m_tranche,
  [10410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1088), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1090), 1,
      sym__indent,
    STATE(568), 1,
      sym__m_tranche,
  [10436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(169), 1,
      sym__dottedName,
    STATE(347), 1,
      aux_sym_m_contexte_repeat1,
    STATE(662), 1,
      sym_reference,
  [10452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1032), 1,
      aux_sym__variation_sinon_token1,
    STATE(610), 1,
      sym__variation_sinon,
    STATE(627), 1,
      sym__variation_si,
  [10468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1092), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1096), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym__key,
    ACTIONS(1100), 1,
      sym__dedent,
    STATE(431), 1,
      aux_sym_object_repeat1,
  [10516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1106), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1108), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1112), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1114), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__dedent,
    ACTIONS(1124), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym__dedent,
    ACTIONS(1128), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1136), 1,
      anon_sym_unitu00e9,
    ACTIONS(1138), 1,
      sym__dedent,
  [10688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__array_prefix,
    ACTIONS(1140), 1,
      sym__dedent,
    STATE(55), 1,
      aux_sym_m_array_repeat1,
  [10719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym__dedent,
    ACTIONS(1144), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_unit_token1,
    STATE(176), 1,
      sym_unit,
    STATE(216), 1,
      sym__units,
  [10754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1147), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [10776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_unit_token1,
    STATE(365), 1,
      sym_unit,
    STATE(454), 1,
      sym__units,
  [10789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [10802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1151), 1,
      sym__indent,
    STATE(636), 1,
      sym__variation_si,
  [10815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1088), 1,
      aux_sym__m_tranche_token1,
    STATE(560), 1,
      sym__m_tranche,
  [10828] = 4,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_text_line,
    ACTIONS(1153), 1,
      sym__dedent,
    STATE(430), 1,
      aux_sym__text_line_repeat1,
  [10841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_unit_token1,
    STATE(173), 1,
      sym_unit,
    STATE(219), 1,
      sym__units,
  [10854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_unit_token1,
    STATE(368), 1,
      sym_unit,
    STATE(438), 1,
      sym__units,
  [10867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [10880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(774), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [10911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(170), 1,
      sym__units,
  [10924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym__dedent,
    ACTIONS(1163), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym__dedent,
    ACTIONS(1167), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(166), 1,
      sym__units,
  [10990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__array_prefix,
    ACTIONS(1169), 1,
      sym__dedent,
    STATE(52), 1,
      aux_sym_remplace_repeat1,
  [11003] = 4,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_text_line,
    ACTIONS(1174), 1,
      sym__dedent,
    STATE(430), 1,
      aux_sym__text_line_repeat1,
  [11016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym__key,
    ACTIONS(1179), 1,
      sym__dedent,
    STATE(431), 1,
      aux_sym_object_repeat1,
  [11029] = 4,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_text_line,
    ACTIONS(1181), 1,
      sym__dedent,
    STATE(430), 1,
      aux_sym__text_line_repeat1,
  [11042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(629), 1,
      sym_reference,
  [11064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__newline,
    ACTIONS(1183), 1,
      anon_sym_SLASH,
    STATE(441), 1,
      aux_sym_units_repeat1,
  [11077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1187), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1189), 1,
      sym__dedent,
  [11090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      sym__dedent,
    ACTIONS(1193), 1,
      sym__array_prefix,
    STATE(437), 1,
      aux_sym_m_variations_repeat1,
  [11103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__newline,
    ACTIONS(1183), 1,
      anon_sym_SLASH,
    STATE(443), 1,
      aux_sym_units_repeat1,
  [11116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_unit_token1,
    STATE(368), 1,
      sym_unit,
    STATE(499), 1,
      sym__units,
  [11138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__newline,
    ACTIONS(1183), 1,
      anon_sym_SLASH,
    STATE(444), 1,
      aux_sym_units_repeat1,
  [11151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1198), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1200), 1,
      sym__dedent,
  [11164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__newline,
    ACTIONS(1183), 1,
      anon_sym_SLASH,
    STATE(444), 1,
      aux_sym_units_repeat1,
  [11177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__newline,
    ACTIONS(1202), 1,
      anon_sym_SLASH,
    STATE(444), 1,
      aux_sym_units_repeat1,
  [11190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_unit_token1,
    STATE(173), 1,
      sym_unit,
    STATE(190), 1,
      sym__units,
  [11239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__dedent,
    ACTIONS(1207), 1,
      anon_sym_SLASH,
    STATE(461), 1,
      aux_sym_units_repeat1,
  [11252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1209), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_unit_token1,
    STATE(176), 1,
      sym_unit,
    STATE(178), 1,
      sym__units,
  [11291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__dedent,
    ACTIONS(1207), 1,
      anon_sym_SLASH,
    STATE(466), 1,
      aux_sym_units_repeat1,
  [11304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1213), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1215), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1217), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1219), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_unit_token1,
    STATE(365), 1,
      sym_unit,
    STATE(496), 1,
      sym__units,
  [11378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__dedent,
    ACTIONS(1207), 1,
      anon_sym_SLASH,
    STATE(469), 1,
      aux_sym_units_repeat1,
  [11391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1221), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    ACTIONS(1223), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_m_inversion_repeat1,
  [11417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym__dedent,
    ACTIONS(1227), 1,
      sym__array_prefix,
    STATE(437), 1,
      aux_sym_m_variations_repeat1,
  [11430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__dedent,
    ACTIONS(1207), 1,
      anon_sym_SLASH,
    STATE(469), 1,
      aux_sym_units_repeat1,
  [11452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_name,
    STATE(231), 1,
      sym__dottedName,
    STATE(599), 1,
      sym_reference,
  [11474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__dedent,
    ACTIONS(1229), 1,
      anon_sym_SLASH,
    STATE(469), 1,
      aux_sym_units_repeat1,
  [11487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(359), 1,
      aux_sym_m_inversion_repeat1,
  [11515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym__dedent,
      sym_name,
  [11523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(704), 1,
      sym__dottedName,
  [11533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(664), 1,
      sym__dottedName,
  [11543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      sym__indent,
    ACTIONS(1234), 1,
      sym__newline,
  [11553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym__indent,
    ACTIONS(1238), 1,
      sym__newline,
  [11563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym__indent,
    ACTIONS(1242), 1,
      sym__newline,
  [11573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      aux_sym_unit_token1,
    STATE(177), 1,
      sym_unit,
  [11583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__array_prefix,
    STATE(405), 1,
      aux_sym_m_array_repeat1,
  [11593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(463), 1,
      aux_sym_m_inversion_repeat1,
  [11603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__array_prefix,
    STATE(67), 1,
      aux_sym_m_array_repeat1,
  [11613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(410), 1,
      aux_sym_m_inversion_repeat1,
  [11623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(65), 1,
      aux_sym_m_inversion_repeat1,
  [11633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      sym__array_prefix,
    STATE(464), 1,
      aux_sym_m_variations_repeat1,
  [11643] = 3,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_text_line,
    STATE(415), 1,
      aux_sym__text_line_repeat1,
  [11653] = 3,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_text_line,
    STATE(432), 1,
      aux_sym__text_line_repeat1,
  [11663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 2,
      sym__dedent,
      sym__key,
  [11671] = 3,
    ACTIONS(606), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym__dedent,
    ACTIONS(1246), 1,
      sym_text_line,
  [11681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym__variation_si_token1,
    STATE(627), 1,
      sym__variation_si,
  [11691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 2,
      sym__dedent,
      sym_name,
  [11699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 2,
      sym__dedent,
      sym__array_prefix,
  [11707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_unitu00e9,
    ACTIONS(1254), 1,
      sym__dedent,
  [11717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_multiplicateur,
    ACTIONS(1258), 1,
      anon_sym_tranches,
  [11727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__array_prefix,
    STATE(60), 1,
      aux_sym_remplace_repeat1,
  [11737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym__dedent,
      anon_sym_SLASH,
  [11745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_unit_token1,
    STATE(471), 1,
      sym_unit,
  [11755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1054), 1,
      sym__dedent,
  [11765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym__newline,
      anon_sym_SLASH,
  [11773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 2,
      sym__dedent,
      sym__array_prefix,
  [11781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_unit_token1,
    STATE(445), 1,
      sym_unit,
  [11791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(459), 1,
      aux_sym_m_inversion_repeat1,
  [11801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym__indent,
    ACTIONS(1264), 1,
      sym__newline,
  [11811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(457), 1,
      aux_sym_m_inversion_repeat1,
  [11821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1062), 1,
      sym__dedent,
  [11831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      sym__dedent,
      sym_name,
  [11839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_unitu00e9,
    ACTIONS(1268), 1,
      sym__dedent,
  [11849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym__indent,
    ACTIONS(1272), 1,
      sym__newline,
  [11859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(390), 1,
      aux_sym_m_inversion_repeat1,
  [11869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(452), 1,
      aux_sym_m_inversion_repeat1,
  [11879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 2,
      sym__dedent,
      sym__array_prefix,
  [11887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(362), 1,
      aux_sym_m_inversion_repeat1,
  [11897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym__array_prefix,
    STATE(398), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1280), 1,
      sym__dedent,
  [11917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym__array_prefix,
    STATE(397), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_unit_token1,
    STATE(159), 1,
      sym_unit,
  [11937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1284), 1,
      sym__dedent,
  [11947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 2,
      sym__dedent,
      sym__array_prefix,
  [11955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym__array_prefix,
    STATE(427), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      sym__dedent,
      sym_name,
  [11973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__array_prefix,
    STATE(392), 1,
      aux_sym_m_inversion_repeat1,
  [11983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      sym__dedent,
      sym_name,
  [11991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym__array_prefix,
    STATE(426), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_unit_token1,
    STATE(197), 1,
      sym_unit,
  [12011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1290), 1,
      sym__dedent,
  [12021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COLON,
  [12028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym__dedent,
  [12035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym__dedent,
  [12042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      sym__dedent,
  [12049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      sym__dedent,
  [12056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym__newline,
  [12063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_COLON,
  [12070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym__dedent,
  [12077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym__dedent,
  [12084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym__dedent,
  [12091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_COLON,
  [12098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_COLON,
  [12105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym__dedent,
  [12112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      sym__dedent,
  [12119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_COLON,
  [12126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym__dedent,
  [12133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_COLON,
  [12140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym__dedent,
  [12147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym__dedent,
  [12154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym__dedent,
  [12161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym__dedent,
  [12168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      aux_sym__m_tranche_token1,
  [12175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      aux_sym__m_tranche_token2,
  [12182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym__dedent,
  [12189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym__dedent,
  [12196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym__dedent,
  [12203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      sym__dedent,
  [12210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_COLON,
  [12217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym__dedent,
  [12224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym__dedent,
  [12231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__dedent,
  [12238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      sym__dedent,
  [12245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      sym__dedent,
  [12252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_COLON,
  [12259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym__dedent,
  [12266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym__newline,
  [12273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym__dedent,
  [12280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__dedent,
  [12287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__dedent,
  [12294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      sym__newline,
  [12301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      sym__newline,
  [12308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      sym__dedent,
  [12315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__dedent,
  [12322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_COLON,
  [12329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_COLON,
  [12336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      sym__dedent,
  [12343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      sym__dedent,
  [12350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      sym__newline,
  [12357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      sym__newline,
  [12364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_COLON,
  [12371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym__dedent,
  [12378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      sym__dedent,
  [12385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym__dedent,
  [12392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      sym__dedent,
  [12399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_COLON,
  [12406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym__dedent,
  [12413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_COLON,
  [12420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_COLON,
  [12427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      sym__dedent,
  [12434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_tranches,
  [12441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      sym__newline,
  [12448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      sym__newline,
  [12455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      sym__dedent,
  [12462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_COLON,
  [12469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      sym__dedent,
  [12476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      sym__dedent,
  [12483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      sym__dedent,
  [12490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      sym__dedent,
  [12497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      sym__dedent,
  [12504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      sym__newline,
  [12511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      anon_sym_COLON,
  [12518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      sym__newline,
  [12525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      sym__dedent,
  [12532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      sym__dedent,
  [12539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      sym__dedent,
  [12546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      sym__dedent,
  [12553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_COLON,
  [12560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_COLON,
  [12567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      sym__dedent,
  [12574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      sym__dedent,
  [12581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_COLON,
  [12588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_COLON,
  [12595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_COLON,
  [12602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      sym__dedent,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      sym__dedent,
  [12616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      aux_sym__variation_si_token2,
  [12623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym__dedent,
  [12630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      sym__dedent,
  [12637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      sym__dedent,
  [12644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      sym__dedent,
  [12651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      sym__dedent,
  [12658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      sym__newline,
  [12665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      sym__dedent,
  [12672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      sym__dedent,
  [12679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      sym_name,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      sym__dedent,
  [12693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      sym__newline,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym__dedent,
  [12707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      sym__dedent,
  [12714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_COLON,
  [12721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      sym__dedent,
  [12728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      sym__dedent,
  [12735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      sym__dedent,
  [12742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      sym__dedent,
  [12749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      sym__dedent,
  [12756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      sym__newline,
  [12763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      sym__dedent,
  [12770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      sym__dedent,
  [12777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      sym__dedent,
  [12784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      sym__dedent,
  [12791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym__dedent,
  [12798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_COLON,
  [12805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      sym__dedent,
  [12812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      sym__newline,
  [12819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      sym__newline,
  [12826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      sym__dedent,
  [12833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      sym__dedent,
  [12840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      sym__dedent,
  [12847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      sym_name,
  [12854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      sym__newline,
  [12861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      sym__newline,
  [12868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      sym__dedent,
  [12875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      sym__dedent,
  [12882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      sym__dedent,
  [12889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      sym__dedent,
  [12896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_COLON,
  [12903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      sym__newline,
  [12910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      sym__dedent,
  [12917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_COLON,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_COLON,
  [12931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_COLON,
  [12938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COLON,
  [12945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      sym__newline,
  [12952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      sym__dedent,
  [12959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      sym__dedent,
  [12966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_COLON,
  [12973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
  [12980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      sym__dedent,
  [12987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_COLON,
  [12994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      sym__newline,
  [13001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      sym__newline,
  [13008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      sym_tag,
  [13015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      sym__dedent,
  [13022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_assiette,
  [13029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      sym__newline,
  [13036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      sym__newline,
  [13043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      sym__dedent,
  [13050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      sym__dedent,
  [13057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      sym__dedent,
  [13064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym__dedent,
  [13071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      sym__dedent,
  [13078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym__dedent,
  [13085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      sym__newline,
  [13092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      sym__dedent,
  [13099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym_paragraph,
  [13106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_oui,
  [13113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym__indent,
  [13120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      sym__indent,
  [13127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      sym__indent,
  [13134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      sym__indent,
  [13141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      sym__indent,
  [13148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      sym__dedent,
  [13155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      sym__dedent,
  [13162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      sym__dedent,
  [13169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_COLON,
  [13176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_COLON,
  [13183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_COLON,
  [13190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_COLON,
  [13197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_COLON,
  [13204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_COLON,
  [13211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_COLON,
  [13218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_COLON,
  [13225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_COLON,
  [13232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_COLON,
  [13239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_COLON,
  [13246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_COLON,
  [13253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_COLON,
  [13260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_COLON,
  [13267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_COLON,
  [13274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      sym__dedent,
  [13281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      sym_name,
  [13288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_RBRACK,
  [13295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_COLON,
  [13302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      ts_builtin_sym_end,
  [13309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_RBRACK,
  [13316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 118,
  [SMALL_STATE(4)] = 236,
  [SMALL_STATE(5)] = 354,
  [SMALL_STATE(6)] = 472,
  [SMALL_STATE(7)] = 567,
  [SMALL_STATE(8)] = 662,
  [SMALL_STATE(9)] = 757,
  [SMALL_STATE(10)] = 852,
  [SMALL_STATE(11)] = 942,
  [SMALL_STATE(12)] = 1029,
  [SMALL_STATE(13)] = 1104,
  [SMALL_STATE(14)] = 1179,
  [SMALL_STATE(15)] = 1254,
  [SMALL_STATE(16)] = 1315,
  [SMALL_STATE(17)] = 1376,
  [SMALL_STATE(18)] = 1437,
  [SMALL_STATE(19)] = 1498,
  [SMALL_STATE(20)] = 1556,
  [SMALL_STATE(21)] = 1614,
  [SMALL_STATE(22)] = 1672,
  [SMALL_STATE(23)] = 1730,
  [SMALL_STATE(24)] = 1788,
  [SMALL_STATE(25)] = 1846,
  [SMALL_STATE(26)] = 1896,
  [SMALL_STATE(27)] = 1954,
  [SMALL_STATE(28)] = 2012,
  [SMALL_STATE(29)] = 2070,
  [SMALL_STATE(30)] = 2128,
  [SMALL_STATE(31)] = 2186,
  [SMALL_STATE(32)] = 2244,
  [SMALL_STATE(33)] = 2302,
  [SMALL_STATE(34)] = 2352,
  [SMALL_STATE(35)] = 2402,
  [SMALL_STATE(36)] = 2452,
  [SMALL_STATE(37)] = 2502,
  [SMALL_STATE(38)] = 2560,
  [SMALL_STATE(39)] = 2618,
  [SMALL_STATE(40)] = 2676,
  [SMALL_STATE(41)] = 2726,
  [SMALL_STATE(42)] = 2776,
  [SMALL_STATE(43)] = 2807,
  [SMALL_STATE(44)] = 2853,
  [SMALL_STATE(45)] = 2879,
  [SMALL_STATE(46)] = 2925,
  [SMALL_STATE(47)] = 2971,
  [SMALL_STATE(48)] = 3017,
  [SMALL_STATE(49)] = 3063,
  [SMALL_STATE(50)] = 3109,
  [SMALL_STATE(51)] = 3155,
  [SMALL_STATE(52)] = 3201,
  [SMALL_STATE(53)] = 3231,
  [SMALL_STATE(54)] = 3277,
  [SMALL_STATE(55)] = 3323,
  [SMALL_STATE(56)] = 3353,
  [SMALL_STATE(57)] = 3399,
  [SMALL_STATE(58)] = 3443,
  [SMALL_STATE(59)] = 3491,
  [SMALL_STATE(60)] = 3537,
  [SMALL_STATE(61)] = 3567,
  [SMALL_STATE(62)] = 3613,
  [SMALL_STATE(63)] = 3659,
  [SMALL_STATE(64)] = 3703,
  [SMALL_STATE(65)] = 3749,
  [SMALL_STATE(66)] = 3779,
  [SMALL_STATE(67)] = 3825,
  [SMALL_STATE(68)] = 3855,
  [SMALL_STATE(69)] = 3901,
  [SMALL_STATE(70)] = 3947,
  [SMALL_STATE(71)] = 3993,
  [SMALL_STATE(72)] = 4039,
  [SMALL_STATE(73)] = 4085,
  [SMALL_STATE(74)] = 4131,
  [SMALL_STATE(75)] = 4177,
  [SMALL_STATE(76)] = 4223,
  [SMALL_STATE(77)] = 4269,
  [SMALL_STATE(78)] = 4315,
  [SMALL_STATE(79)] = 4361,
  [SMALL_STATE(80)] = 4407,
  [SMALL_STATE(81)] = 4453,
  [SMALL_STATE(82)] = 4501,
  [SMALL_STATE(83)] = 4527,
  [SMALL_STATE(84)] = 4573,
  [SMALL_STATE(85)] = 4619,
  [SMALL_STATE(86)] = 4665,
  [SMALL_STATE(87)] = 4713,
  [SMALL_STATE(88)] = 4759,
  [SMALL_STATE(89)] = 4803,
  [SMALL_STATE(90)] = 4828,
  [SMALL_STATE(91)] = 4853,
  [SMALL_STATE(92)] = 4878,
  [SMALL_STATE(93)] = 4903,
  [SMALL_STATE(94)] = 4928,
  [SMALL_STATE(95)] = 4953,
  [SMALL_STATE(96)] = 4977,
  [SMALL_STATE(97)] = 5001,
  [SMALL_STATE(98)] = 5025,
  [SMALL_STATE(99)] = 5049,
  [SMALL_STATE(100)] = 5073,
  [SMALL_STATE(101)] = 5097,
  [SMALL_STATE(102)] = 5121,
  [SMALL_STATE(103)] = 5145,
  [SMALL_STATE(104)] = 5169,
  [SMALL_STATE(105)] = 5193,
  [SMALL_STATE(106)] = 5217,
  [SMALL_STATE(107)] = 5241,
  [SMALL_STATE(108)] = 5265,
  [SMALL_STATE(109)] = 5289,
  [SMALL_STATE(110)] = 5313,
  [SMALL_STATE(111)] = 5337,
  [SMALL_STATE(112)] = 5361,
  [SMALL_STATE(113)] = 5385,
  [SMALL_STATE(114)] = 5409,
  [SMALL_STATE(115)] = 5433,
  [SMALL_STATE(116)] = 5457,
  [SMALL_STATE(117)] = 5481,
  [SMALL_STATE(118)] = 5505,
  [SMALL_STATE(119)] = 5529,
  [SMALL_STATE(120)] = 5553,
  [SMALL_STATE(121)] = 5577,
  [SMALL_STATE(122)] = 5601,
  [SMALL_STATE(123)] = 5625,
  [SMALL_STATE(124)] = 5649,
  [SMALL_STATE(125)] = 5673,
  [SMALL_STATE(126)] = 5697,
  [SMALL_STATE(127)] = 5721,
  [SMALL_STATE(128)] = 5745,
  [SMALL_STATE(129)] = 5769,
  [SMALL_STATE(130)] = 5793,
  [SMALL_STATE(131)] = 5817,
  [SMALL_STATE(132)] = 5841,
  [SMALL_STATE(133)] = 5873,
  [SMALL_STATE(134)] = 5897,
  [SMALL_STATE(135)] = 5921,
  [SMALL_STATE(136)] = 5945,
  [SMALL_STATE(137)] = 5969,
  [SMALL_STATE(138)] = 5993,
  [SMALL_STATE(139)] = 6017,
  [SMALL_STATE(140)] = 6041,
  [SMALL_STATE(141)] = 6065,
  [SMALL_STATE(142)] = 6089,
  [SMALL_STATE(143)] = 6113,
  [SMALL_STATE(144)] = 6137,
  [SMALL_STATE(145)] = 6161,
  [SMALL_STATE(146)] = 6185,
  [SMALL_STATE(147)] = 6209,
  [SMALL_STATE(148)] = 6233,
  [SMALL_STATE(149)] = 6257,
  [SMALL_STATE(150)] = 6281,
  [SMALL_STATE(151)] = 6305,
  [SMALL_STATE(152)] = 6337,
  [SMALL_STATE(153)] = 6363,
  [SMALL_STATE(154)] = 6389,
  [SMALL_STATE(155)] = 6413,
  [SMALL_STATE(156)] = 6437,
  [SMALL_STATE(157)] = 6463,
  [SMALL_STATE(158)] = 6487,
  [SMALL_STATE(159)] = 6519,
  [SMALL_STATE(160)] = 6540,
  [SMALL_STATE(161)] = 6559,
  [SMALL_STATE(162)] = 6582,
  [SMALL_STATE(163)] = 6603,
  [SMALL_STATE(164)] = 6626,
  [SMALL_STATE(165)] = 6649,
  [SMALL_STATE(166)] = 6672,
  [SMALL_STATE(167)] = 6695,
  [SMALL_STATE(168)] = 6717,
  [SMALL_STATE(169)] = 6741,
  [SMALL_STATE(170)] = 6759,
  [SMALL_STATE(171)] = 6779,
  [SMALL_STATE(172)] = 6803,
  [SMALL_STATE(173)] = 6827,
  [SMALL_STATE(174)] = 6851,
  [SMALL_STATE(175)] = 6873,
  [SMALL_STATE(176)] = 6897,
  [SMALL_STATE(177)] = 6921,
  [SMALL_STATE(178)] = 6940,
  [SMALL_STATE(179)] = 6961,
  [SMALL_STATE(180)] = 6982,
  [SMALL_STATE(181)] = 6999,
  [SMALL_STATE(182)] = 7020,
  [SMALL_STATE(183)] = 7041,
  [SMALL_STATE(184)] = 7060,
  [SMALL_STATE(185)] = 7077,
  [SMALL_STATE(186)] = 7098,
  [SMALL_STATE(187)] = 7119,
  [SMALL_STATE(188)] = 7140,
  [SMALL_STATE(189)] = 7159,
  [SMALL_STATE(190)] = 7178,
  [SMALL_STATE(191)] = 7199,
  [SMALL_STATE(192)] = 7220,
  [SMALL_STATE(193)] = 7241,
  [SMALL_STATE(194)] = 7262,
  [SMALL_STATE(195)] = 7283,
  [SMALL_STATE(196)] = 7304,
  [SMALL_STATE(197)] = 7325,
  [SMALL_STATE(198)] = 7344,
  [SMALL_STATE(199)] = 7361,
  [SMALL_STATE(200)] = 7382,
  [SMALL_STATE(201)] = 7399,
  [SMALL_STATE(202)] = 7418,
  [SMALL_STATE(203)] = 7439,
  [SMALL_STATE(204)] = 7460,
  [SMALL_STATE(205)] = 7481,
  [SMALL_STATE(206)] = 7497,
  [SMALL_STATE(207)] = 7523,
  [SMALL_STATE(208)] = 7549,
  [SMALL_STATE(209)] = 7575,
  [SMALL_STATE(210)] = 7591,
  [SMALL_STATE(211)] = 7617,
  [SMALL_STATE(212)] = 7643,
  [SMALL_STATE(213)] = 7669,
  [SMALL_STATE(214)] = 7695,
  [SMALL_STATE(215)] = 7721,
  [SMALL_STATE(216)] = 7747,
  [SMALL_STATE(217)] = 7765,
  [SMALL_STATE(218)] = 7791,
  [SMALL_STATE(219)] = 7817,
  [SMALL_STATE(220)] = 7835,
  [SMALL_STATE(221)] = 7861,
  [SMALL_STATE(222)] = 7876,
  [SMALL_STATE(223)] = 7891,
  [SMALL_STATE(224)] = 7908,
  [SMALL_STATE(225)] = 7925,
  [SMALL_STATE(226)] = 7942,
  [SMALL_STATE(227)] = 7957,
  [SMALL_STATE(228)] = 7972,
  [SMALL_STATE(229)] = 7991,
  [SMALL_STATE(230)] = 8008,
  [SMALL_STATE(231)] = 8023,
  [SMALL_STATE(232)] = 8038,
  [SMALL_STATE(233)] = 8053,
  [SMALL_STATE(234)] = 8068,
  [SMALL_STATE(235)] = 8087,
  [SMALL_STATE(236)] = 8102,
  [SMALL_STATE(237)] = 8117,
  [SMALL_STATE(238)] = 8132,
  [SMALL_STATE(239)] = 8149,
  [SMALL_STATE(240)] = 8164,
  [SMALL_STATE(241)] = 8185,
  [SMALL_STATE(242)] = 8202,
  [SMALL_STATE(243)] = 8217,
  [SMALL_STATE(244)] = 8238,
  [SMALL_STATE(245)] = 8255,
  [SMALL_STATE(246)] = 8272,
  [SMALL_STATE(247)] = 8293,
  [SMALL_STATE(248)] = 8310,
  [SMALL_STATE(249)] = 8334,
  [SMALL_STATE(250)] = 8358,
  [SMALL_STATE(251)] = 8382,
  [SMALL_STATE(252)] = 8397,
  [SMALL_STATE(253)] = 8412,
  [SMALL_STATE(254)] = 8427,
  [SMALL_STATE(255)] = 8442,
  [SMALL_STATE(256)] = 8457,
  [SMALL_STATE(257)] = 8472,
  [SMALL_STATE(258)] = 8487,
  [SMALL_STATE(259)] = 8502,
  [SMALL_STATE(260)] = 8527,
  [SMALL_STATE(261)] = 8540,
  [SMALL_STATE(262)] = 8555,
  [SMALL_STATE(263)] = 8570,
  [SMALL_STATE(264)] = 8585,
  [SMALL_STATE(265)] = 8600,
  [SMALL_STATE(266)] = 8615,
  [SMALL_STATE(267)] = 8630,
  [SMALL_STATE(268)] = 8645,
  [SMALL_STATE(269)] = 8660,
  [SMALL_STATE(270)] = 8673,
  [SMALL_STATE(271)] = 8688,
  [SMALL_STATE(272)] = 8703,
  [SMALL_STATE(273)] = 8718,
  [SMALL_STATE(274)] = 8733,
  [SMALL_STATE(275)] = 8748,
  [SMALL_STATE(276)] = 8763,
  [SMALL_STATE(277)] = 8778,
  [SMALL_STATE(278)] = 8793,
  [SMALL_STATE(279)] = 8808,
  [SMALL_STATE(280)] = 8823,
  [SMALL_STATE(281)] = 8838,
  [SMALL_STATE(282)] = 8853,
  [SMALL_STATE(283)] = 8866,
  [SMALL_STATE(284)] = 8881,
  [SMALL_STATE(285)] = 8896,
  [SMALL_STATE(286)] = 8911,
  [SMALL_STATE(287)] = 8926,
  [SMALL_STATE(288)] = 8939,
  [SMALL_STATE(289)] = 8954,
  [SMALL_STATE(290)] = 8969,
  [SMALL_STATE(291)] = 8984,
  [SMALL_STATE(292)] = 8997,
  [SMALL_STATE(293)] = 9014,
  [SMALL_STATE(294)] = 9031,
  [SMALL_STATE(295)] = 9048,
  [SMALL_STATE(296)] = 9063,
  [SMALL_STATE(297)] = 9078,
  [SMALL_STATE(298)] = 9093,
  [SMALL_STATE(299)] = 9110,
  [SMALL_STATE(300)] = 9125,
  [SMALL_STATE(301)] = 9140,
  [SMALL_STATE(302)] = 9155,
  [SMALL_STATE(303)] = 9170,
  [SMALL_STATE(304)] = 9183,
  [SMALL_STATE(305)] = 9198,
  [SMALL_STATE(306)] = 9213,
  [SMALL_STATE(307)] = 9228,
  [SMALL_STATE(308)] = 9243,
  [SMALL_STATE(309)] = 9258,
  [SMALL_STATE(310)] = 9273,
  [SMALL_STATE(311)] = 9288,
  [SMALL_STATE(312)] = 9303,
  [SMALL_STATE(313)] = 9318,
  [SMALL_STATE(314)] = 9333,
  [SMALL_STATE(315)] = 9348,
  [SMALL_STATE(316)] = 9368,
  [SMALL_STATE(317)] = 9388,
  [SMALL_STATE(318)] = 9402,
  [SMALL_STATE(319)] = 9422,
  [SMALL_STATE(320)] = 9442,
  [SMALL_STATE(321)] = 9456,
  [SMALL_STATE(322)] = 9468,
  [SMALL_STATE(323)] = 9482,
  [SMALL_STATE(324)] = 9504,
  [SMALL_STATE(325)] = 9518,
  [SMALL_STATE(326)] = 9540,
  [SMALL_STATE(327)] = 9559,
  [SMALL_STATE(328)] = 9578,
  [SMALL_STATE(329)] = 9597,
  [SMALL_STATE(330)] = 9616,
  [SMALL_STATE(331)] = 9633,
  [SMALL_STATE(332)] = 9652,
  [SMALL_STATE(333)] = 9671,
  [SMALL_STATE(334)] = 9690,
  [SMALL_STATE(335)] = 9709,
  [SMALL_STATE(336)] = 9728,
  [SMALL_STATE(337)] = 9747,
  [SMALL_STATE(338)] = 9764,
  [SMALL_STATE(339)] = 9783,
  [SMALL_STATE(340)] = 9802,
  [SMALL_STATE(341)] = 9821,
  [SMALL_STATE(342)] = 9840,
  [SMALL_STATE(343)] = 9859,
  [SMALL_STATE(344)] = 9878,
  [SMALL_STATE(345)] = 9897,
  [SMALL_STATE(346)] = 9916,
  [SMALL_STATE(347)] = 9935,
  [SMALL_STATE(348)] = 9954,
  [SMALL_STATE(349)] = 9965,
  [SMALL_STATE(350)] = 9976,
  [SMALL_STATE(351)] = 9995,
  [SMALL_STATE(352)] = 10014,
  [SMALL_STATE(353)] = 10025,
  [SMALL_STATE(354)] = 10044,
  [SMALL_STATE(355)] = 10063,
  [SMALL_STATE(356)] = 10082,
  [SMALL_STATE(357)] = 10093,
  [SMALL_STATE(358)] = 10112,
  [SMALL_STATE(359)] = 10126,
  [SMALL_STATE(360)] = 10142,
  [SMALL_STATE(361)] = 10158,
  [SMALL_STATE(362)] = 10172,
  [SMALL_STATE(363)] = 10188,
  [SMALL_STATE(364)] = 10200,
  [SMALL_STATE(365)] = 10216,
  [SMALL_STATE(366)] = 10230,
  [SMALL_STATE(367)] = 10240,
  [SMALL_STATE(368)] = 10250,
  [SMALL_STATE(369)] = 10264,
  [SMALL_STATE(370)] = 10280,
  [SMALL_STATE(371)] = 10296,
  [SMALL_STATE(372)] = 10308,
  [SMALL_STATE(373)] = 10322,
  [SMALL_STATE(374)] = 10336,
  [SMALL_STATE(375)] = 10346,
  [SMALL_STATE(376)] = 10362,
  [SMALL_STATE(377)] = 10378,
  [SMALL_STATE(378)] = 10394,
  [SMALL_STATE(379)] = 10410,
  [SMALL_STATE(380)] = 10420,
  [SMALL_STATE(381)] = 10436,
  [SMALL_STATE(382)] = 10452,
  [SMALL_STATE(383)] = 10468,
  [SMALL_STATE(384)] = 10481,
  [SMALL_STATE(385)] = 10490,
  [SMALL_STATE(386)] = 10503,
  [SMALL_STATE(387)] = 10516,
  [SMALL_STATE(388)] = 10525,
  [SMALL_STATE(389)] = 10534,
  [SMALL_STATE(390)] = 10547,
  [SMALL_STATE(391)] = 10560,
  [SMALL_STATE(392)] = 10569,
  [SMALL_STATE(393)] = 10582,
  [SMALL_STATE(394)] = 10595,
  [SMALL_STATE(395)] = 10604,
  [SMALL_STATE(396)] = 10613,
  [SMALL_STATE(397)] = 10622,
  [SMALL_STATE(398)] = 10635,
  [SMALL_STATE(399)] = 10648,
  [SMALL_STATE(400)] = 10657,
  [SMALL_STATE(401)] = 10666,
  [SMALL_STATE(402)] = 10675,
  [SMALL_STATE(403)] = 10688,
  [SMALL_STATE(404)] = 10697,
  [SMALL_STATE(405)] = 10706,
  [SMALL_STATE(406)] = 10719,
  [SMALL_STATE(407)] = 10732,
  [SMALL_STATE(408)] = 10741,
  [SMALL_STATE(409)] = 10754,
  [SMALL_STATE(410)] = 10763,
  [SMALL_STATE(411)] = 10776,
  [SMALL_STATE(412)] = 10789,
  [SMALL_STATE(413)] = 10802,
  [SMALL_STATE(414)] = 10815,
  [SMALL_STATE(415)] = 10828,
  [SMALL_STATE(416)] = 10841,
  [SMALL_STATE(417)] = 10854,
  [SMALL_STATE(418)] = 10867,
  [SMALL_STATE(419)] = 10880,
  [SMALL_STATE(420)] = 10889,
  [SMALL_STATE(421)] = 10898,
  [SMALL_STATE(422)] = 10911,
  [SMALL_STATE(423)] = 10924,
  [SMALL_STATE(424)] = 10933,
  [SMALL_STATE(425)] = 10942,
  [SMALL_STATE(426)] = 10951,
  [SMALL_STATE(427)] = 10964,
  [SMALL_STATE(428)] = 10977,
  [SMALL_STATE(429)] = 10990,
  [SMALL_STATE(430)] = 11003,
  [SMALL_STATE(431)] = 11016,
  [SMALL_STATE(432)] = 11029,
  [SMALL_STATE(433)] = 11042,
  [SMALL_STATE(434)] = 11051,
  [SMALL_STATE(435)] = 11064,
  [SMALL_STATE(436)] = 11077,
  [SMALL_STATE(437)] = 11090,
  [SMALL_STATE(438)] = 11103,
  [SMALL_STATE(439)] = 11116,
  [SMALL_STATE(440)] = 11125,
  [SMALL_STATE(441)] = 11138,
  [SMALL_STATE(442)] = 11151,
  [SMALL_STATE(443)] = 11164,
  [SMALL_STATE(444)] = 11177,
  [SMALL_STATE(445)] = 11190,
  [SMALL_STATE(446)] = 11199,
  [SMALL_STATE(447)] = 11208,
  [SMALL_STATE(448)] = 11217,
  [SMALL_STATE(449)] = 11226,
  [SMALL_STATE(450)] = 11239,
  [SMALL_STATE(451)] = 11252,
  [SMALL_STATE(452)] = 11265,
  [SMALL_STATE(453)] = 11278,
  [SMALL_STATE(454)] = 11291,
  [SMALL_STATE(455)] = 11304,
  [SMALL_STATE(456)] = 11313,
  [SMALL_STATE(457)] = 11326,
  [SMALL_STATE(458)] = 11339,
  [SMALL_STATE(459)] = 11352,
  [SMALL_STATE(460)] = 11365,
  [SMALL_STATE(461)] = 11378,
  [SMALL_STATE(462)] = 11391,
  [SMALL_STATE(463)] = 11404,
  [SMALL_STATE(464)] = 11417,
  [SMALL_STATE(465)] = 11430,
  [SMALL_STATE(466)] = 11439,
  [SMALL_STATE(467)] = 11452,
  [SMALL_STATE(468)] = 11461,
  [SMALL_STATE(469)] = 11474,
  [SMALL_STATE(470)] = 11487,
  [SMALL_STATE(471)] = 11496,
  [SMALL_STATE(472)] = 11505,
  [SMALL_STATE(473)] = 11515,
  [SMALL_STATE(474)] = 11523,
  [SMALL_STATE(475)] = 11533,
  [SMALL_STATE(476)] = 11543,
  [SMALL_STATE(477)] = 11553,
  [SMALL_STATE(478)] = 11563,
  [SMALL_STATE(479)] = 11573,
  [SMALL_STATE(480)] = 11583,
  [SMALL_STATE(481)] = 11593,
  [SMALL_STATE(482)] = 11603,
  [SMALL_STATE(483)] = 11613,
  [SMALL_STATE(484)] = 11623,
  [SMALL_STATE(485)] = 11633,
  [SMALL_STATE(486)] = 11643,
  [SMALL_STATE(487)] = 11653,
  [SMALL_STATE(488)] = 11663,
  [SMALL_STATE(489)] = 11671,
  [SMALL_STATE(490)] = 11681,
  [SMALL_STATE(491)] = 11691,
  [SMALL_STATE(492)] = 11699,
  [SMALL_STATE(493)] = 11707,
  [SMALL_STATE(494)] = 11717,
  [SMALL_STATE(495)] = 11727,
  [SMALL_STATE(496)] = 11737,
  [SMALL_STATE(497)] = 11745,
  [SMALL_STATE(498)] = 11755,
  [SMALL_STATE(499)] = 11765,
  [SMALL_STATE(500)] = 11773,
  [SMALL_STATE(501)] = 11781,
  [SMALL_STATE(502)] = 11791,
  [SMALL_STATE(503)] = 11801,
  [SMALL_STATE(504)] = 11811,
  [SMALL_STATE(505)] = 11821,
  [SMALL_STATE(506)] = 11831,
  [SMALL_STATE(507)] = 11839,
  [SMALL_STATE(508)] = 11849,
  [SMALL_STATE(509)] = 11859,
  [SMALL_STATE(510)] = 11869,
  [SMALL_STATE(511)] = 11879,
  [SMALL_STATE(512)] = 11887,
  [SMALL_STATE(513)] = 11897,
  [SMALL_STATE(514)] = 11907,
  [SMALL_STATE(515)] = 11917,
  [SMALL_STATE(516)] = 11927,
  [SMALL_STATE(517)] = 11937,
  [SMALL_STATE(518)] = 11947,
  [SMALL_STATE(519)] = 11955,
  [SMALL_STATE(520)] = 11965,
  [SMALL_STATE(521)] = 11973,
  [SMALL_STATE(522)] = 11983,
  [SMALL_STATE(523)] = 11991,
  [SMALL_STATE(524)] = 12001,
  [SMALL_STATE(525)] = 12011,
  [SMALL_STATE(526)] = 12021,
  [SMALL_STATE(527)] = 12028,
  [SMALL_STATE(528)] = 12035,
  [SMALL_STATE(529)] = 12042,
  [SMALL_STATE(530)] = 12049,
  [SMALL_STATE(531)] = 12056,
  [SMALL_STATE(532)] = 12063,
  [SMALL_STATE(533)] = 12070,
  [SMALL_STATE(534)] = 12077,
  [SMALL_STATE(535)] = 12084,
  [SMALL_STATE(536)] = 12091,
  [SMALL_STATE(537)] = 12098,
  [SMALL_STATE(538)] = 12105,
  [SMALL_STATE(539)] = 12112,
  [SMALL_STATE(540)] = 12119,
  [SMALL_STATE(541)] = 12126,
  [SMALL_STATE(542)] = 12133,
  [SMALL_STATE(543)] = 12140,
  [SMALL_STATE(544)] = 12147,
  [SMALL_STATE(545)] = 12154,
  [SMALL_STATE(546)] = 12161,
  [SMALL_STATE(547)] = 12168,
  [SMALL_STATE(548)] = 12175,
  [SMALL_STATE(549)] = 12182,
  [SMALL_STATE(550)] = 12189,
  [SMALL_STATE(551)] = 12196,
  [SMALL_STATE(552)] = 12203,
  [SMALL_STATE(553)] = 12210,
  [SMALL_STATE(554)] = 12217,
  [SMALL_STATE(555)] = 12224,
  [SMALL_STATE(556)] = 12231,
  [SMALL_STATE(557)] = 12238,
  [SMALL_STATE(558)] = 12245,
  [SMALL_STATE(559)] = 12252,
  [SMALL_STATE(560)] = 12259,
  [SMALL_STATE(561)] = 12266,
  [SMALL_STATE(562)] = 12273,
  [SMALL_STATE(563)] = 12280,
  [SMALL_STATE(564)] = 12287,
  [SMALL_STATE(565)] = 12294,
  [SMALL_STATE(566)] = 12301,
  [SMALL_STATE(567)] = 12308,
  [SMALL_STATE(568)] = 12315,
  [SMALL_STATE(569)] = 12322,
  [SMALL_STATE(570)] = 12329,
  [SMALL_STATE(571)] = 12336,
  [SMALL_STATE(572)] = 12343,
  [SMALL_STATE(573)] = 12350,
  [SMALL_STATE(574)] = 12357,
  [SMALL_STATE(575)] = 12364,
  [SMALL_STATE(576)] = 12371,
  [SMALL_STATE(577)] = 12378,
  [SMALL_STATE(578)] = 12385,
  [SMALL_STATE(579)] = 12392,
  [SMALL_STATE(580)] = 12399,
  [SMALL_STATE(581)] = 12406,
  [SMALL_STATE(582)] = 12413,
  [SMALL_STATE(583)] = 12420,
  [SMALL_STATE(584)] = 12427,
  [SMALL_STATE(585)] = 12434,
  [SMALL_STATE(586)] = 12441,
  [SMALL_STATE(587)] = 12448,
  [SMALL_STATE(588)] = 12455,
  [SMALL_STATE(589)] = 12462,
  [SMALL_STATE(590)] = 12469,
  [SMALL_STATE(591)] = 12476,
  [SMALL_STATE(592)] = 12483,
  [SMALL_STATE(593)] = 12490,
  [SMALL_STATE(594)] = 12497,
  [SMALL_STATE(595)] = 12504,
  [SMALL_STATE(596)] = 12511,
  [SMALL_STATE(597)] = 12518,
  [SMALL_STATE(598)] = 12525,
  [SMALL_STATE(599)] = 12532,
  [SMALL_STATE(600)] = 12539,
  [SMALL_STATE(601)] = 12546,
  [SMALL_STATE(602)] = 12553,
  [SMALL_STATE(603)] = 12560,
  [SMALL_STATE(604)] = 12567,
  [SMALL_STATE(605)] = 12574,
  [SMALL_STATE(606)] = 12581,
  [SMALL_STATE(607)] = 12588,
  [SMALL_STATE(608)] = 12595,
  [SMALL_STATE(609)] = 12602,
  [SMALL_STATE(610)] = 12609,
  [SMALL_STATE(611)] = 12616,
  [SMALL_STATE(612)] = 12623,
  [SMALL_STATE(613)] = 12630,
  [SMALL_STATE(614)] = 12637,
  [SMALL_STATE(615)] = 12644,
  [SMALL_STATE(616)] = 12651,
  [SMALL_STATE(617)] = 12658,
  [SMALL_STATE(618)] = 12665,
  [SMALL_STATE(619)] = 12672,
  [SMALL_STATE(620)] = 12679,
  [SMALL_STATE(621)] = 12686,
  [SMALL_STATE(622)] = 12693,
  [SMALL_STATE(623)] = 12700,
  [SMALL_STATE(624)] = 12707,
  [SMALL_STATE(625)] = 12714,
  [SMALL_STATE(626)] = 12721,
  [SMALL_STATE(627)] = 12728,
  [SMALL_STATE(628)] = 12735,
  [SMALL_STATE(629)] = 12742,
  [SMALL_STATE(630)] = 12749,
  [SMALL_STATE(631)] = 12756,
  [SMALL_STATE(632)] = 12763,
  [SMALL_STATE(633)] = 12770,
  [SMALL_STATE(634)] = 12777,
  [SMALL_STATE(635)] = 12784,
  [SMALL_STATE(636)] = 12791,
  [SMALL_STATE(637)] = 12798,
  [SMALL_STATE(638)] = 12805,
  [SMALL_STATE(639)] = 12812,
  [SMALL_STATE(640)] = 12819,
  [SMALL_STATE(641)] = 12826,
  [SMALL_STATE(642)] = 12833,
  [SMALL_STATE(643)] = 12840,
  [SMALL_STATE(644)] = 12847,
  [SMALL_STATE(645)] = 12854,
  [SMALL_STATE(646)] = 12861,
  [SMALL_STATE(647)] = 12868,
  [SMALL_STATE(648)] = 12875,
  [SMALL_STATE(649)] = 12882,
  [SMALL_STATE(650)] = 12889,
  [SMALL_STATE(651)] = 12896,
  [SMALL_STATE(652)] = 12903,
  [SMALL_STATE(653)] = 12910,
  [SMALL_STATE(654)] = 12917,
  [SMALL_STATE(655)] = 12924,
  [SMALL_STATE(656)] = 12931,
  [SMALL_STATE(657)] = 12938,
  [SMALL_STATE(658)] = 12945,
  [SMALL_STATE(659)] = 12952,
  [SMALL_STATE(660)] = 12959,
  [SMALL_STATE(661)] = 12966,
  [SMALL_STATE(662)] = 12973,
  [SMALL_STATE(663)] = 12980,
  [SMALL_STATE(664)] = 12987,
  [SMALL_STATE(665)] = 12994,
  [SMALL_STATE(666)] = 13001,
  [SMALL_STATE(667)] = 13008,
  [SMALL_STATE(668)] = 13015,
  [SMALL_STATE(669)] = 13022,
  [SMALL_STATE(670)] = 13029,
  [SMALL_STATE(671)] = 13036,
  [SMALL_STATE(672)] = 13043,
  [SMALL_STATE(673)] = 13050,
  [SMALL_STATE(674)] = 13057,
  [SMALL_STATE(675)] = 13064,
  [SMALL_STATE(676)] = 13071,
  [SMALL_STATE(677)] = 13078,
  [SMALL_STATE(678)] = 13085,
  [SMALL_STATE(679)] = 13092,
  [SMALL_STATE(680)] = 13099,
  [SMALL_STATE(681)] = 13106,
  [SMALL_STATE(682)] = 13113,
  [SMALL_STATE(683)] = 13120,
  [SMALL_STATE(684)] = 13127,
  [SMALL_STATE(685)] = 13134,
  [SMALL_STATE(686)] = 13141,
  [SMALL_STATE(687)] = 13148,
  [SMALL_STATE(688)] = 13155,
  [SMALL_STATE(689)] = 13162,
  [SMALL_STATE(690)] = 13169,
  [SMALL_STATE(691)] = 13176,
  [SMALL_STATE(692)] = 13183,
  [SMALL_STATE(693)] = 13190,
  [SMALL_STATE(694)] = 13197,
  [SMALL_STATE(695)] = 13204,
  [SMALL_STATE(696)] = 13211,
  [SMALL_STATE(697)] = 13218,
  [SMALL_STATE(698)] = 13225,
  [SMALL_STATE(699)] = 13232,
  [SMALL_STATE(700)] = 13239,
  [SMALL_STATE(701)] = 13246,
  [SMALL_STATE(702)] = 13253,
  [SMALL_STATE(703)] = 13260,
  [SMALL_STATE(704)] = 13267,
  [SMALL_STATE(705)] = 13274,
  [SMALL_STATE(706)] = 13281,
  [SMALL_STATE(707)] = 13288,
  [SMALL_STATE(708)] = 13295,
  [SMALL_STATE(709)] = 13302,
  [SMALL_STATE(710)] = 13309,
  [SMALL_STATE(711)] = 13316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(703),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(702),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(701),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(700),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(699),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(698),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(697),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(696),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(695),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(694),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(693),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(692),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(691),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(690),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(249),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(702),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(701),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(700),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(699),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(698),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(697),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(696),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(695),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(694),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(370),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18), SHIFT_REPEAT(325),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(10),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 5, .production_id = 25),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 5, .production_id = 25),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 44),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 44),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 20, .production_id = 61),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 20, .production_id = 61),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 43),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 43),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 19, .production_id = 61),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 19, .production_id = 61),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_avec, 5),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_avec, 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 8),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 8),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 56),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 56),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 5),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formule, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 5),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 56),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 56),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 16, .production_id = 52),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 16, .production_id = 52),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 31),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 31),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 26),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 26),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 47),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 47),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 10),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 10),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 27),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 27),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 5),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 35),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 35),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 47),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 47),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 31),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 31),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 44),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 44),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 48),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 48),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(706),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(516),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(422),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 13),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 8),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 7),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(479),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(524),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(408),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(644),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(416),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(620),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(667),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(711),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(154),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 37),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 32),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(501),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(497),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 19),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 17),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 15),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 38),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 14),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 33),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 12),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 10, .production_id = 21),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 10),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 9),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 30),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 30), SHIFT_REPEAT(380),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(665),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(250),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(413),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(440),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 12, .production_id = 49),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 53),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 54),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 57),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(460),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 5),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 36),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_last_tranche, 3, .production_id = 46),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 39),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 5, .production_id = 45),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 41),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 42),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 40),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_si, 6),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 55),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_sinon, 3),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 51),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 50),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 15, .production_id = 60),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 59),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 58),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1628] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__array_prefix = 2,
  ts_external_token_comment = 3,
  ts_external_token__newline = 4,
  ts_external_token_paragraph = 5,
  ts_external_token_error_recovery_mode = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__array_prefix] = sym__array_prefix,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_paragraph] = sym_paragraph,
  [ts_external_token_error_recovery_mode] = sym_error_recovery_mode,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__array_prefix] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_paragraph] = true,
    [ts_external_token_error_recovery_mode] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__array_prefix] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [8] = {
    [ts_external_token__array_prefix] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
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
