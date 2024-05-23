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
#define STATE_COUNT 694
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 18
#define PRODUCTION_ID_COUNT 58

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
  aux_sym_m_une_possibilitu00e9_token1 = 34,
  aux_sym_m_une_possibilitu00e9_token2 = 35,
  anon_sym_oui = 36,
  anon_sym_non = 37,
  aux_sym_m_une_possibilitu00e9_token3 = 38,
  aux_sym_avec_token1 = 39,
  aux_sym_remplace_token1 = 40,
  aux_sym__remplace_rule_token1 = 41,
  aux_sym__remplace_rule_token2 = 42,
  aux_sym__remplace_rule_token3 = 43,
  sym_tag = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  aux_sym_ar_unary_expression_token1 = 47,
  aux_sym_ar_binary_expression_token1 = 48,
  aux_sym_ar_binary_expression_token2 = 49,
  anon_sym_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_LT = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_GT = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_DOT = 56,
  sym_comment = 57,
  sym_string = 58,
  sym_date = 59,
  aux_sym_number_token1 = 60,
  anon_sym_SPACE = 61,
  anon_sym_SLASH = 62,
  anon_sym_DOT2 = 63,
  aux_sym_unit_token1 = 64,
  sym_exposant = 65,
  aux_sym_meta_token1 = 66,
  aux_sym__paragraph_token1 = 67,
  sym__key = 68,
  sym_text_line = 69,
  sym__indent = 70,
  sym__dedent = 71,
  sym__array_prefix = 72,
  sym__newline = 73,
  sym_paragraph = 74,
  sym_error_recovery_mode = 75,
  sym_source_file = 76,
  sym_rule = 77,
  sym_rule_body = 78,
  sym__statement = 79,
  sym_formule = 80,
  sym__valeur = 81,
  sym_mechanism = 82,
  sym_m_unary = 83,
  sym_m_array = 84,
  sym__m_special = 85,
  sym_m_inversion = 86,
  sym_m_contexte = 87,
  sym_m_variations = 88,
  sym__variation_si = 89,
  sym__variation_sinon = 90,
  sym_m_unitu00e9 = 91,
  sym_m_duru00e9e = 92,
  sym_m_baru00e8me_like = 93,
  sym__m_tranche = 94,
  sym__m_last_tranche = 95,
  sym_m_texte = 96,
  sym_m_une_possibilitu00e9 = 97,
  sym_avec = 98,
  sym_remplace = 99,
  sym__remplace_rule = 100,
  sym__tags = 101,
  sym__expression = 102,
  sym__ar_expression = 103,
  sym_ar_unary_expression = 104,
  sym_ar_binary_expression = 105,
  sym__bool_expression = 106,
  sym_comparison = 107,
  sym__dottedName = 108,
  sym_reference = 109,
  sym_boolean = 110,
  sym_number = 111,
  sym_units = 112,
  sym__units = 113,
  sym_unit = 114,
  sym_meta = 115,
  sym_custom_meta = 116,
  sym_meta_value = 117,
  sym__text_line = 118,
  sym__paragraph = 119,
  sym_object = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_rule_body_repeat1 = 122,
  aux_sym__valeur_repeat1 = 123,
  aux_sym_m_array_repeat1 = 124,
  aux_sym_m_inversion_repeat1 = 125,
  aux_sym_m_contexte_repeat1 = 126,
  aux_sym_m_variations_repeat1 = 127,
  aux_sym_m_baru00e8me_like_repeat1 = 128,
  aux_sym_remplace_repeat1 = 129,
  aux_sym__dottedName_repeat1 = 130,
  aux_sym_units_repeat1 = 131,
  aux_sym__units_repeat1 = 132,
  aux_sym__text_line_repeat1 = 133,
  aux_sym_object_repeat1 = 134,
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
  [aux_sym_m_une_possibilitu00e9_token1] = "m_une_possibilit\u00e9_token1",
  [aux_sym_m_une_possibilitu00e9_token2] = "m_une_possibilit\u00e9_token2",
  [anon_sym_oui] = "oui",
  [anon_sym_non] = "non",
  [aux_sym_m_une_possibilitu00e9_token3] = "m_une_possibilit\u00e9_token3",
  [aux_sym_avec_token1] = "avec_token1",
  [aux_sym_remplace_token1] = "remplace_token1",
  [aux_sym__remplace_rule_token1] = "_remplace_rule_token1",
  [aux_sym__remplace_rule_token2] = "_remplace_rule_token2",
  [aux_sym__remplace_rule_token3] = "_remplace_rule_token3",
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
  [sym_m_une_possibilitu00e9] = "m_une_possibilit\u00e9",
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
  [aux_sym_m_une_possibilitu00e9_token1] = aux_sym_m_une_possibilitu00e9_token1,
  [aux_sym_m_une_possibilitu00e9_token2] = aux_sym_m_une_possibilitu00e9_token2,
  [anon_sym_oui] = anon_sym_oui,
  [anon_sym_non] = anon_sym_non,
  [aux_sym_m_une_possibilitu00e9_token3] = aux_sym_m_une_possibilitu00e9_token3,
  [aux_sym_avec_token1] = aux_sym_avec_token1,
  [aux_sym_remplace_token1] = aux_sym_remplace_token1,
  [aux_sym__remplace_rule_token1] = aux_sym__remplace_rule_token1,
  [aux_sym__remplace_rule_token2] = aux_sym__remplace_rule_token2,
  [aux_sym__remplace_rule_token3] = aux_sym__remplace_rule_token3,
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
  [sym_m_une_possibilitu00e9] = sym_m_une_possibilitu00e9,
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
  [aux_sym_m_une_possibilitu00e9_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_m_une_possibilitu00e9_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_oui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_m_une_possibilitu00e9_token3] = {
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
  [sym_m_une_possibilitu00e9] = {
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
  [25] = {.index = 54, .length = 3},
  [26] = {.index = 57, .length = 2},
  [27] = {.index = 59, .length = 3},
  [28] = {.index = 62, .length = 3},
  [29] = {.index = 65, .length = 4},
  [30] = {.index = 69, .length = 4},
  [31] = {.index = 73, .length = 4},
  [32] = {.index = 77, .length = 4},
  [33] = {.index = 81, .length = 4},
  [34] = {.index = 85, .length = 4},
  [35] = {.index = 89, .length = 2},
  [36] = {.index = 91, .length = 4},
  [37] = {.index = 95, .length = 4},
  [38] = {.index = 99, .length = 5},
  [39] = {.index = 104, .length = 5},
  [40] = {.index = 109, .length = 5},
  [41] = {.index = 114, .length = 5},
  [42] = {.index = 119, .length = 4},
  [43] = {.index = 123, .length = 5},
  [44] = {.index = 128, .length = 1},
  [45] = {.index = 129, .length = 5},
  [46] = {.index = 134, .length = 5},
  [47] = {.index = 139, .length = 8},
  [48] = {.index = 147, .length = 2},
  [49] = {.index = 149, .length = 2},
  [50] = {.index = 151, .length = 8},
  [51] = {.index = 159, .length = 9},
  [52] = {.index = 168, .length = 9},
  [53] = {.index = 177, .length = 6},
  [54] = {.index = 183, .length = 9},
  [55] = {.index = 192, .length = 9},
  [56] = {.index = 201, .length = 10},
  [57] = {.index = 211, .length = 10},
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
    {field_unité, 5},
    {field_unité, 6},
    {field_unité, 7},
  [57] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
  [59] =
    {field_depuis, 5},
    {field_unité, 8},
    {field_unité, 9},
  [62] =
    {field_jusqu_à, 5},
    {field_unité, 8},
    {field_unité, 9},
  [65] =
    {field_plafond, 0, .inherited = true},
    {field_plafond, 1, .inherited = true},
    {field_valeur, 0, .inherited = true},
    {field_valeur, 1, .inherited = true},
  [69] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_plafond, 9, .inherited = true},
    {field_valeur, 9, .inherited = true},
  [73] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
  [77] =
    {field_sauf_dans, 4},
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
  [81] =
    {field_depuis, 5},
    {field_unité, 8},
    {field_unité, 9},
    {field_unité, 10},
  [85] =
    {field_jusqu_à, 5},
    {field_unité, 8},
    {field_unité, 9},
    {field_unité, 10},
  [89] =
    {field_plafond, 1, .inherited = true},
    {field_valeur, 1, .inherited = true},
  [91] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
  [95] =
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
  [99] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
  [104] =
    {field_sauf_dans, 4},
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
  [109] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_dans, 9},
  [114] =
    {field_sauf_dans, 5},
    {field_sauf_dans, 6},
    {field_sauf_dans, 7},
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
  [119] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
    {field_unité, 11},
    {field_unité, 12},
  [123] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
    {field_valeur, 12, .inherited = true},
  [128] =
    {field_valeur, 2},
  [129] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_plafond, 9, .inherited = true},
    {field_valeur, 9, .inherited = true},
    {field_valeur, 11, .inherited = true},
  [134] =
    {field_depuis, 5},
    {field_jusqu_à, 8},
    {field_unité, 11},
    {field_unité, 12},
    {field_unité, 13},
  [139] =
    {field_dans, 4},
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
  [147] =
    {field_plafond, 5},
    {field_valeur, 2},
  [149] =
    {field_plafond, 2},
    {field_valeur, 5},
  [151] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
  [159] =
    {field_dans, 4},
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
    {field_sauf_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
  [177] =
    {field_assiette, 5},
    {field_mechanism_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
    {field_valeur, 12, .inherited = true},
    {field_valeur, 14, .inherited = true},
  [183] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
  [192] =
    {field_dans, 5},
    {field_dans, 6},
    {field_dans, 7},
    {field_dans, 8},
    {field_sauf_dans, 9},
    {field_sauf_dans, 10},
    {field_sauf_dans, 11},
    {field_sauf_dans, 12},
    {field_sauf_dans, 13},
  [201] =
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
  [211] =
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
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
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 20,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 20,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 52,
  [60] = 50,
  [61] = 56,
  [62] = 53,
  [63] = 63,
  [64] = 64,
  [65] = 57,
  [66] = 66,
  [67] = 67,
  [68] = 57,
  [69] = 56,
  [70] = 64,
  [71] = 71,
  [72] = 72,
  [73] = 66,
  [74] = 67,
  [75] = 48,
  [76] = 76,
  [77] = 71,
  [78] = 72,
  [79] = 71,
  [80] = 80,
  [81] = 55,
  [82] = 72,
  [83] = 54,
  [84] = 64,
  [85] = 56,
  [86] = 86,
  [87] = 64,
  [88] = 88,
  [89] = 48,
  [90] = 72,
  [91] = 91,
  [92] = 57,
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
  [149] = 147,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 147,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 151,
  [166] = 166,
  [167] = 151,
  [168] = 150,
  [169] = 156,
  [170] = 150,
  [171] = 153,
  [172] = 156,
  [173] = 153,
  [174] = 174,
  [175] = 152,
  [176] = 161,
  [177] = 177,
  [178] = 159,
  [179] = 154,
  [180] = 152,
  [181] = 158,
  [182] = 148,
  [183] = 183,
  [184] = 164,
  [185] = 157,
  [186] = 186,
  [187] = 164,
  [188] = 163,
  [189] = 189,
  [190] = 163,
  [191] = 162,
  [192] = 161,
  [193] = 157,
  [194] = 194,
  [195] = 158,
  [196] = 196,
  [197] = 159,
  [198] = 154,
  [199] = 148,
  [200] = 200,
  [201] = 162,
  [202] = 202,
  [203] = 203,
  [204] = 160,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 174,
  [209] = 203,
  [210] = 210,
  [211] = 210,
  [212] = 207,
  [213] = 203,
  [214] = 174,
  [215] = 205,
  [216] = 210,
  [217] = 160,
  [218] = 207,
  [219] = 196,
  [220] = 196,
  [221] = 202,
  [222] = 166,
  [223] = 194,
  [224] = 200,
  [225] = 225,
  [226] = 226,
  [227] = 189,
  [228] = 202,
  [229] = 166,
  [230] = 194,
  [231] = 200,
  [232] = 226,
  [233] = 189,
  [234] = 234,
  [235] = 183,
  [236] = 186,
  [237] = 194,
  [238] = 238,
  [239] = 177,
  [240] = 200,
  [241] = 241,
  [242] = 226,
  [243] = 186,
  [244] = 177,
  [245] = 183,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 241,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 251,
  [262] = 257,
  [263] = 258,
  [264] = 251,
  [265] = 258,
  [266] = 249,
  [267] = 267,
  [268] = 241,
  [269] = 269,
  [270] = 270,
  [271] = 234,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 238,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 280,
  [282] = 279,
  [283] = 251,
  [284] = 279,
  [285] = 285,
  [286] = 277,
  [287] = 267,
  [288] = 272,
  [289] = 289,
  [290] = 234,
  [291] = 257,
  [292] = 280,
  [293] = 259,
  [294] = 294,
  [295] = 295,
  [296] = 250,
  [297] = 259,
  [298] = 279,
  [299] = 278,
  [300] = 300,
  [301] = 238,
  [302] = 280,
  [303] = 289,
  [304] = 255,
  [305] = 255,
  [306] = 257,
  [307] = 275,
  [308] = 308,
  [309] = 273,
  [310] = 253,
  [311] = 254,
  [312] = 258,
  [313] = 285,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 322,
  [324] = 132,
  [325] = 325,
  [326] = 326,
  [327] = 134,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 103,
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
  [348] = 348,
  [349] = 96,
  [350] = 350,
  [351] = 134,
  [352] = 151,
  [353] = 96,
  [354] = 354,
  [355] = 355,
  [356] = 156,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 151,
  [361] = 361,
  [362] = 362,
  [363] = 153,
  [364] = 150,
  [365] = 156,
  [366] = 366,
  [367] = 132,
  [368] = 368,
  [369] = 103,
  [370] = 370,
  [371] = 150,
  [372] = 372,
  [373] = 153,
  [374] = 374,
  [375] = 163,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 381,
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
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 400,
  [404] = 396,
  [405] = 405,
  [406] = 385,
  [407] = 399,
  [408] = 398,
  [409] = 409,
  [410] = 398,
  [411] = 385,
  [412] = 397,
  [413] = 385,
  [414] = 395,
  [415] = 399,
  [416] = 386,
  [417] = 383,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 380,
  [422] = 392,
  [423] = 423,
  [424] = 374,
  [425] = 387,
  [426] = 385,
  [427] = 427,
  [428] = 384,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 379,
  [433] = 433,
  [434] = 159,
  [435] = 158,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 157,
  [441] = 164,
  [442] = 442,
  [443] = 163,
  [444] = 161,
  [445] = 445,
  [446] = 446,
  [447] = 399,
  [448] = 162,
  [449] = 449,
  [450] = 164,
  [451] = 159,
  [452] = 452,
  [453] = 162,
  [454] = 454,
  [455] = 158,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 157,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 399,
  [464] = 161,
  [465] = 465,
  [466] = 466,
  [467] = 174,
  [468] = 468,
  [469] = 469,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 174,
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
  [491] = 466,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 466,
  [507] = 507,
  [508] = 466,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 132,
  [515] = 515,
  [516] = 103,
  [517] = 517,
  [518] = 96,
  [519] = 519,
  [520] = 134,
  [521] = 521,
  [522] = 515,
  [523] = 523,
  [524] = 524,
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
  [621] = 565,
  [622] = 544,
  [623] = 555,
  [624] = 551,
  [625] = 625,
  [626] = 602,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 544,
  [635] = 551,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 544,
  [641] = 551,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 616,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 613,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
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
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 646,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 602,
  [689] = 689,
  [690] = 643,
  [691] = 691,
  [692] = 689,
  [693] = 629,
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
      if (eof) ADVANCE(115);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(727);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'q') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(395);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '0') ADVANCE(716);
      if (lookahead == '1') ADVANCE(712);
      if (lookahead == '2') ADVANCE(714);
      if (lookahead == '3') ADVANCE(711);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'm') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 'q') ADVANCE(635);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead == 'v') ADVANCE(653);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(677);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '0') ADVANCE(716);
      if (lookahead == '1') ADVANCE(712);
      if (lookahead == '2') ADVANCE(714);
      if (lookahead == '3') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'm') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 'q') ADVANCE(635);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead == 'v') ADVANCE(653);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(699);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(700);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ':') ADVANCE(728);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(5);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(698);
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
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(727);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'q') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead == '|') ADVANCE(727);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(727);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'q') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(395);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(116);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == '[') ADVANCE(116);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(724);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(395);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(395);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(724);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(699);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(43);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(47);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(728);
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
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == ':') ADVANCE(728);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == ':') ADVANCE(728);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(728);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(728);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == 'n') ADVANCE(573);
      if (sym_name_character_set_1(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'd') ADVANCE(669);
      if (sym_name_character_set_1(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(579);
      if (sym_name_character_set_1(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(509);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(490);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(577);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(670);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(466);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(571);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(660);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(441);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(639);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(597);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(671);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(501);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(728);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(728);
      if (sym_name_character_set_2(lookahead)) ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(310);
      if (sym_name_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(411);
      if (sym_name_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(318);
      if (sym_name_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(242);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(220);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(317);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(414);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(196);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(308);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(210);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(403);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(169);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(382);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(335);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(415);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(231);
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 233) ADVANCE(131);
      END_STATE();
    case 106:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      if (sym_name_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 113:
      if (sym_name_character_set_2(lookahead)) ADVANCE(724);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(723);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '1') ADVANCE(705);
      if (lookahead == '2') ADVANCE(707);
      if (lookahead == '3') ADVANCE(704);
      if (lookahead == '[') ADVANCE(116);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(114)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(421);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == ':') ADVANCE(730);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(699);
      if (lookahead == ':') ADVANCE(729);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_formule_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_m_unary_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_m_array_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_m_inversion_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_m_contexte_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_m_variations_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_m_unitu00e9_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_m_duru00e9e_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_unitu00e9);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_unitu00e9);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_m_baru00e8me_like_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__m_tranche_token2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_m_texte_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_m_une_possibilitu00e9_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_avec_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_remplace_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_4(lookahead)) ADVANCE(421);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 'v') ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_5(lookahead)) ADVANCE(421);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_6(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_7(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_8(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_8(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_9(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_9(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_10(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_11(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 233) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_12(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_13(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_14(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_15(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_16(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_17(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_18(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(321);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_19(lookahead)) ADVANCE(421);
      if (lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_19(lookahead)) ADVANCE(421);
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_19(lookahead)) ADVANCE(421);
      if (lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_20(lookahead)) ADVANCE(421);
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_21(lookahead)) ADVANCE(421);
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_22(lookahead)) ADVANCE(421);
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_23(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_23(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_23(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_23(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_23(lookahead)) ADVANCE(421);
      if (lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_24(lookahead)) ADVANCE(421);
      if (lookahead == 'g') ADVANCE(342);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_25(lookahead)) ADVANCE(421);
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_26(lookahead)) ADVANCE(421);
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_27(lookahead)) ADVANCE(421);
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(381);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(691);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_28(lookahead)) ADVANCE(421);
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_29(lookahead)) ADVANCE(421);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_30(lookahead)) ADVANCE(421);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_31(lookahead)) ADVANCE(421);
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_32(lookahead)) ADVANCE(421);
      if (lookahead == 'q') ADVANCE(385);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_33(lookahead)) ADVANCE(421);
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_34(lookahead)) ADVANCE(421);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_35(lookahead)) ADVANCE(421);
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_36(lookahead)) ADVANCE(421);
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_37(lookahead)) ADVANCE(421);
      if (lookahead == 'v') ADVANCE(409);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_37(lookahead)) ADVANCE(421);
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_38(lookahead)) ADVANCE(421);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_38(lookahead)) ADVANCE(421);
      if (lookahead == 'x') ADVANCE(690);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_38(lookahead)) ADVANCE(421);
      if (lookahead == 'x') ADVANCE(368);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_38(lookahead)) ADVANCE(421);
      if (lookahead == 'x') ADVANCE(371);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_39(lookahead)) ADVANCE(421);
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_40(lookahead)) ADVANCE(421);
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_41(lookahead)) ADVANCE(421);
      if (lookahead == 232) ADVANCE(272);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(139);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(129);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(226);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(136);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(132);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(225);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(228);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(332);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(193);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(337);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(338);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_42(lookahead)) ADVANCE(421);
      if (lookahead == 233) ADVANCE(340);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(96);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(81);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(83);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(90);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(85);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(82);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(95);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(99);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(103);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(102);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_4(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(604);
      if (lookahead == 'v') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_43(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_8(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead == 'l') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_9(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_10(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_11(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 233) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_12(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(572);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_13(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(673);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_14(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_15(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_16(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_17(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_18(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 'x') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_19(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_19(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_19(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_20(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_21(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_22(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_23(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_24(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_25(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_26(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_27(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_28(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_29(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_30(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_31(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_32(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'q') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_33(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_34(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_35(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_36(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_37(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'v') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_37(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'v') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'x') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'x') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'x') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_38(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'x') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_39(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'y') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_40(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_41(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 232) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_42(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == 233) ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(77);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(66);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(56);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(58);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(64);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(68);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(60);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(57);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(65);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(67);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(70);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(69);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(101);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(89);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(86);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(63);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(91);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(84);
      if (sym_name_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(59);
      if (sym_name_character_set_3(lookahead)) ADVANCE(677);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(699);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(701);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(708);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(706);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '0') ADVANCE(710);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(715);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(713);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(717);
      if (lookahead == ':') ADVANCE(728);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(78);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(113);
      if (sym_name_character_set_3(lookahead)) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(700);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(742);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(740);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(743);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(736);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(740);
      if (lookahead == ':') ADVANCE(744);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(743);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(742);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(727);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(744);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(744);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(743);
      if (lookahead == ':') ADVANCE(733);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(742);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(37);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(744);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(743);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(744);
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
      if (lookahead == 'j') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 233) ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__variation_si_token1);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 233) ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 233) ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token2);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_jour);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_mois);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__m_tranche_token1);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__variation_si_token2);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == '\'') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__variation_sinon_token1);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_depuis);
      END_STATE();
    case 86:
      if (lookahead == 224) ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_jusqu_SQUOTEu00e0);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_assiette);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_tranches);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token3);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_trimestre);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 233) ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 224) ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_annu00e9ecivile);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_m_une_possibilitu00e9_token3);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__remplace_rule_token1);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_multiplicateur);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_trimestrecivil);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_m_une_possibilitu00e9_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 114, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 26, .external_lex_state = 2},
  [7] = {.lex_state = 27, .external_lex_state = 2},
  [8] = {.lex_state = 27, .external_lex_state = 2},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 2, .external_lex_state = 3},
  [14] = {.lex_state = 2, .external_lex_state = 3},
  [15] = {.lex_state = 114, .external_lex_state = 4},
  [16] = {.lex_state = 114, .external_lex_state = 4},
  [17] = {.lex_state = 114, .external_lex_state = 4},
  [18] = {.lex_state = 114, .external_lex_state = 4},
  [19] = {.lex_state = 114, .external_lex_state = 5},
  [20] = {.lex_state = 2, .external_lex_state = 3},
  [21] = {.lex_state = 2, .external_lex_state = 3},
  [22] = {.lex_state = 114, .external_lex_state = 5},
  [23] = {.lex_state = 114, .external_lex_state = 5},
  [24] = {.lex_state = 114, .external_lex_state = 5},
  [25] = {.lex_state = 114, .external_lex_state = 5},
  [26] = {.lex_state = 114, .external_lex_state = 5},
  [27] = {.lex_state = 114, .external_lex_state = 5},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 114, .external_lex_state = 5},
  [31] = {.lex_state = 114, .external_lex_state = 5},
  [32] = {.lex_state = 114, .external_lex_state = 5},
  [33] = {.lex_state = 114, .external_lex_state = 5},
  [34] = {.lex_state = 114, .external_lex_state = 5},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 114, .external_lex_state = 5},
  [37] = {.lex_state = 114, .external_lex_state = 5},
  [38] = {.lex_state = 114, .external_lex_state = 5},
  [39] = {.lex_state = 2, .external_lex_state = 3},
  [40] = {.lex_state = 114, .external_lex_state = 5},
  [41] = {.lex_state = 2, .external_lex_state = 6},
  [42] = {.lex_state = 2, .external_lex_state = 6},
  [43] = {.lex_state = 2, .external_lex_state = 6},
  [44] = {.lex_state = 2, .external_lex_state = 6},
  [45] = {.lex_state = 2, .external_lex_state = 6},
  [46] = {.lex_state = 2, .external_lex_state = 6},
  [47] = {.lex_state = 2, .external_lex_state = 6},
  [48] = {.lex_state = 30, .external_lex_state = 2},
  [49] = {.lex_state = 30, .external_lex_state = 2},
  [50] = {.lex_state = 30, .external_lex_state = 2},
  [51] = {.lex_state = 30, .external_lex_state = 2},
  [52] = {.lex_state = 30, .external_lex_state = 2},
  [53] = {.lex_state = 30, .external_lex_state = 2},
  [54] = {.lex_state = 30, .external_lex_state = 2},
  [55] = {.lex_state = 30, .external_lex_state = 2},
  [56] = {.lex_state = 30, .external_lex_state = 2},
  [57] = {.lex_state = 30, .external_lex_state = 2},
  [58] = {.lex_state = 30, .external_lex_state = 2},
  [59] = {.lex_state = 30, .external_lex_state = 2},
  [60] = {.lex_state = 30, .external_lex_state = 2},
  [61] = {.lex_state = 30, .external_lex_state = 2},
  [62] = {.lex_state = 30, .external_lex_state = 2},
  [63] = {.lex_state = 30, .external_lex_state = 2},
  [64] = {.lex_state = 30, .external_lex_state = 2},
  [65] = {.lex_state = 30, .external_lex_state = 2},
  [66] = {.lex_state = 30, .external_lex_state = 2},
  [67] = {.lex_state = 30, .external_lex_state = 2},
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
  [80] = {.lex_state = 2, .external_lex_state = 6},
  [81] = {.lex_state = 30, .external_lex_state = 2},
  [82] = {.lex_state = 30, .external_lex_state = 2},
  [83] = {.lex_state = 30, .external_lex_state = 2},
  [84] = {.lex_state = 30, .external_lex_state = 2},
  [85] = {.lex_state = 30, .external_lex_state = 2},
  [86] = {.lex_state = 2, .external_lex_state = 6},
  [87] = {.lex_state = 30, .external_lex_state = 2},
  [88] = {.lex_state = 2, .external_lex_state = 6},
  [89] = {.lex_state = 30, .external_lex_state = 2},
  [90] = {.lex_state = 30, .external_lex_state = 2},
  [91] = {.lex_state = 2, .external_lex_state = 6},
  [92] = {.lex_state = 30, .external_lex_state = 2},
  [93] = {.lex_state = 2, .external_lex_state = 3},
  [94] = {.lex_state = 2, .external_lex_state = 3},
  [95] = {.lex_state = 2, .external_lex_state = 3},
  [96] = {.lex_state = 2, .external_lex_state = 3},
  [97] = {.lex_state = 2, .external_lex_state = 3},
  [98] = {.lex_state = 2, .external_lex_state = 3},
  [99] = {.lex_state = 2, .external_lex_state = 3},
  [100] = {.lex_state = 2, .external_lex_state = 3},
  [101] = {.lex_state = 2, .external_lex_state = 3},
  [102] = {.lex_state = 2, .external_lex_state = 3},
  [103] = {.lex_state = 2, .external_lex_state = 3},
  [104] = {.lex_state = 2, .external_lex_state = 3},
  [105] = {.lex_state = 2, .external_lex_state = 3},
  [106] = {.lex_state = 2, .external_lex_state = 3},
  [107] = {.lex_state = 2, .external_lex_state = 3},
  [108] = {.lex_state = 2, .external_lex_state = 3},
  [109] = {.lex_state = 2, .external_lex_state = 3},
  [110] = {.lex_state = 2, .external_lex_state = 3},
  [111] = {.lex_state = 2, .external_lex_state = 3},
  [112] = {.lex_state = 2, .external_lex_state = 3},
  [113] = {.lex_state = 2, .external_lex_state = 3},
  [114] = {.lex_state = 2, .external_lex_state = 3},
  [115] = {.lex_state = 2, .external_lex_state = 3},
  [116] = {.lex_state = 2, .external_lex_state = 3},
  [117] = {.lex_state = 2, .external_lex_state = 3},
  [118] = {.lex_state = 2, .external_lex_state = 3},
  [119] = {.lex_state = 2, .external_lex_state = 3},
  [120] = {.lex_state = 2, .external_lex_state = 3},
  [121] = {.lex_state = 2, .external_lex_state = 3},
  [122] = {.lex_state = 2, .external_lex_state = 3},
  [123] = {.lex_state = 2, .external_lex_state = 3},
  [124] = {.lex_state = 2, .external_lex_state = 3},
  [125] = {.lex_state = 2, .external_lex_state = 3},
  [126] = {.lex_state = 2, .external_lex_state = 3},
  [127] = {.lex_state = 2, .external_lex_state = 3},
  [128] = {.lex_state = 2, .external_lex_state = 3},
  [129] = {.lex_state = 2, .external_lex_state = 3},
  [130] = {.lex_state = 2, .external_lex_state = 3},
  [131] = {.lex_state = 2, .external_lex_state = 3},
  [132] = {.lex_state = 2, .external_lex_state = 3},
  [133] = {.lex_state = 2, .external_lex_state = 3},
  [134] = {.lex_state = 2, .external_lex_state = 3},
  [135] = {.lex_state = 2, .external_lex_state = 3},
  [136] = {.lex_state = 2, .external_lex_state = 3},
  [137] = {.lex_state = 2, .external_lex_state = 3},
  [138] = {.lex_state = 2, .external_lex_state = 3},
  [139] = {.lex_state = 2, .external_lex_state = 3},
  [140] = {.lex_state = 2, .external_lex_state = 3},
  [141] = {.lex_state = 2, .external_lex_state = 3},
  [142] = {.lex_state = 2, .external_lex_state = 3},
  [143] = {.lex_state = 2, .external_lex_state = 3},
  [144] = {.lex_state = 2, .external_lex_state = 3},
  [145] = {.lex_state = 2, .external_lex_state = 3},
  [146] = {.lex_state = 2, .external_lex_state = 3},
  [147] = {.lex_state = 20, .external_lex_state = 2},
  [148] = {.lex_state = 22, .external_lex_state = 2},
  [149] = {.lex_state = 20, .external_lex_state = 3},
  [150] = {.lex_state = 25, .external_lex_state = 2},
  [151] = {.lex_state = 25, .external_lex_state = 2},
  [152] = {.lex_state = 22, .external_lex_state = 2},
  [153] = {.lex_state = 25, .external_lex_state = 2},
  [154] = {.lex_state = 22, .external_lex_state = 2},
  [155] = {.lex_state = 20, .external_lex_state = 7},
  [156] = {.lex_state = 25, .external_lex_state = 2},
  [157] = {.lex_state = 22, .external_lex_state = 2},
  [158] = {.lex_state = 22, .external_lex_state = 2},
  [159] = {.lex_state = 25, .external_lex_state = 2},
  [160] = {.lex_state = 22, .external_lex_state = 2},
  [161] = {.lex_state = 22, .external_lex_state = 2},
  [162] = {.lex_state = 25, .external_lex_state = 2},
  [163] = {.lex_state = 22, .external_lex_state = 2},
  [164] = {.lex_state = 22, .external_lex_state = 2},
  [165] = {.lex_state = 25, .external_lex_state = 3},
  [166] = {.lex_state = 22, .external_lex_state = 2},
  [167] = {.lex_state = 25, .external_lex_state = 7},
  [168] = {.lex_state = 25, .external_lex_state = 7},
  [169] = {.lex_state = 25, .external_lex_state = 3},
  [170] = {.lex_state = 25, .external_lex_state = 3},
  [171] = {.lex_state = 25, .external_lex_state = 3},
  [172] = {.lex_state = 25, .external_lex_state = 7},
  [173] = {.lex_state = 25, .external_lex_state = 7},
  [174] = {.lex_state = 22, .external_lex_state = 2},
  [175] = {.lex_state = 22, .external_lex_state = 3},
  [176] = {.lex_state = 22, .external_lex_state = 7},
  [177] = {.lex_state = 22, .external_lex_state = 2},
  [178] = {.lex_state = 25, .external_lex_state = 7},
  [179] = {.lex_state = 22, .external_lex_state = 7},
  [180] = {.lex_state = 22, .external_lex_state = 7},
  [181] = {.lex_state = 22, .external_lex_state = 7},
  [182] = {.lex_state = 22, .external_lex_state = 7},
  [183] = {.lex_state = 22, .external_lex_state = 2},
  [184] = {.lex_state = 22, .external_lex_state = 7},
  [185] = {.lex_state = 22, .external_lex_state = 7},
  [186] = {.lex_state = 22, .external_lex_state = 2},
  [187] = {.lex_state = 22, .external_lex_state = 3},
  [188] = {.lex_state = 22, .external_lex_state = 7},
  [189] = {.lex_state = 22, .external_lex_state = 2},
  [190] = {.lex_state = 22, .external_lex_state = 3},
  [191] = {.lex_state = 25, .external_lex_state = 3},
  [192] = {.lex_state = 22, .external_lex_state = 3},
  [193] = {.lex_state = 22, .external_lex_state = 3},
  [194] = {.lex_state = 22, .external_lex_state = 2},
  [195] = {.lex_state = 22, .external_lex_state = 3},
  [196] = {.lex_state = 22, .external_lex_state = 2},
  [197] = {.lex_state = 25, .external_lex_state = 3},
  [198] = {.lex_state = 22, .external_lex_state = 3},
  [199] = {.lex_state = 22, .external_lex_state = 3},
  [200] = {.lex_state = 22, .external_lex_state = 2},
  [201] = {.lex_state = 25, .external_lex_state = 7},
  [202] = {.lex_state = 22, .external_lex_state = 2},
  [203] = {.lex_state = 114, .external_lex_state = 2},
  [204] = {.lex_state = 22, .external_lex_state = 3},
  [205] = {.lex_state = 114, .external_lex_state = 2},
  [206] = {.lex_state = 114, .external_lex_state = 2},
  [207] = {.lex_state = 114, .external_lex_state = 2},
  [208] = {.lex_state = 22, .external_lex_state = 3},
  [209] = {.lex_state = 114, .external_lex_state = 2},
  [210] = {.lex_state = 114, .external_lex_state = 2},
  [211] = {.lex_state = 114, .external_lex_state = 2},
  [212] = {.lex_state = 114, .external_lex_state = 2},
  [213] = {.lex_state = 114, .external_lex_state = 2},
  [214] = {.lex_state = 22, .external_lex_state = 7},
  [215] = {.lex_state = 114, .external_lex_state = 2},
  [216] = {.lex_state = 114, .external_lex_state = 2},
  [217] = {.lex_state = 22, .external_lex_state = 7},
  [218] = {.lex_state = 114, .external_lex_state = 2},
  [219] = {.lex_state = 22, .external_lex_state = 7},
  [220] = {.lex_state = 22, .external_lex_state = 3},
  [221] = {.lex_state = 22, .external_lex_state = 7},
  [222] = {.lex_state = 22, .external_lex_state = 7},
  [223] = {.lex_state = 22, .external_lex_state = 7},
  [224] = {.lex_state = 22, .external_lex_state = 7},
  [225] = {.lex_state = 114, .external_lex_state = 2},
  [226] = {.lex_state = 22, .external_lex_state = 2},
  [227] = {.lex_state = 22, .external_lex_state = 7},
  [228] = {.lex_state = 22, .external_lex_state = 3},
  [229] = {.lex_state = 22, .external_lex_state = 3},
  [230] = {.lex_state = 22, .external_lex_state = 3},
  [231] = {.lex_state = 22, .external_lex_state = 3},
  [232] = {.lex_state = 22, .external_lex_state = 2},
  [233] = {.lex_state = 22, .external_lex_state = 3},
  [234] = {.lex_state = 114, .external_lex_state = 2},
  [235] = {.lex_state = 22, .external_lex_state = 3},
  [236] = {.lex_state = 22, .external_lex_state = 7},
  [237] = {.lex_state = 22, .external_lex_state = 2},
  [238] = {.lex_state = 114, .external_lex_state = 2},
  [239] = {.lex_state = 22, .external_lex_state = 7},
  [240] = {.lex_state = 22, .external_lex_state = 2},
  [241] = {.lex_state = 114, .external_lex_state = 2},
  [242] = {.lex_state = 22, .external_lex_state = 2},
  [243] = {.lex_state = 22, .external_lex_state = 3},
  [244] = {.lex_state = 22, .external_lex_state = 3},
  [245] = {.lex_state = 22, .external_lex_state = 7},
  [246] = {.lex_state = 738, .external_lex_state = 4},
  [247] = {.lex_state = 738, .external_lex_state = 4},
  [248] = {.lex_state = 738, .external_lex_state = 4},
  [249] = {.lex_state = 114, .external_lex_state = 7},
  [250] = {.lex_state = 114, .external_lex_state = 2},
  [251] = {.lex_state = 114, .external_lex_state = 3},
  [252] = {.lex_state = 114, .external_lex_state = 7},
  [253] = {.lex_state = 114, .external_lex_state = 3},
  [254] = {.lex_state = 114, .external_lex_state = 7},
  [255] = {.lex_state = 114, .external_lex_state = 2},
  [256] = {.lex_state = 114, .external_lex_state = 5},
  [257] = {.lex_state = 114, .external_lex_state = 2},
  [258] = {.lex_state = 114, .external_lex_state = 7},
  [259] = {.lex_state = 114, .external_lex_state = 2},
  [260] = {.lex_state = 114, .external_lex_state = 2},
  [261] = {.lex_state = 114, .external_lex_state = 3},
  [262] = {.lex_state = 114, .external_lex_state = 2},
  [263] = {.lex_state = 114, .external_lex_state = 7},
  [264] = {.lex_state = 114, .external_lex_state = 3},
  [265] = {.lex_state = 114, .external_lex_state = 7},
  [266] = {.lex_state = 114, .external_lex_state = 7},
  [267] = {.lex_state = 114, .external_lex_state = 2},
  [268] = {.lex_state = 114, .external_lex_state = 3},
  [269] = {.lex_state = 114, .external_lex_state = 2},
  [270] = {.lex_state = 114, .external_lex_state = 2},
  [271] = {.lex_state = 114, .external_lex_state = 7},
  [272] = {.lex_state = 114, .external_lex_state = 2},
  [273] = {.lex_state = 114, .external_lex_state = 2},
  [274] = {.lex_state = 114, .external_lex_state = 8},
  [275] = {.lex_state = 114, .external_lex_state = 2},
  [276] = {.lex_state = 114, .external_lex_state = 7},
  [277] = {.lex_state = 114, .external_lex_state = 2},
  [278] = {.lex_state = 114, .external_lex_state = 2},
  [279] = {.lex_state = 114, .external_lex_state = 2},
  [280] = {.lex_state = 114, .external_lex_state = 2},
  [281] = {.lex_state = 114, .external_lex_state = 2},
  [282] = {.lex_state = 114, .external_lex_state = 2},
  [283] = {.lex_state = 114, .external_lex_state = 3},
  [284] = {.lex_state = 114, .external_lex_state = 2},
  [285] = {.lex_state = 114, .external_lex_state = 3},
  [286] = {.lex_state = 114, .external_lex_state = 2},
  [287] = {.lex_state = 114, .external_lex_state = 2},
  [288] = {.lex_state = 114, .external_lex_state = 2},
  [289] = {.lex_state = 114, .external_lex_state = 2},
  [290] = {.lex_state = 114, .external_lex_state = 3},
  [291] = {.lex_state = 114, .external_lex_state = 2},
  [292] = {.lex_state = 114, .external_lex_state = 2},
  [293] = {.lex_state = 114, .external_lex_state = 2},
  [294] = {.lex_state = 114, .external_lex_state = 5},
  [295] = {.lex_state = 114, .external_lex_state = 5},
  [296] = {.lex_state = 114, .external_lex_state = 2},
  [297] = {.lex_state = 114, .external_lex_state = 2},
  [298] = {.lex_state = 114, .external_lex_state = 2},
  [299] = {.lex_state = 114, .external_lex_state = 2},
  [300] = {.lex_state = 114, .external_lex_state = 5},
  [301] = {.lex_state = 114, .external_lex_state = 3},
  [302] = {.lex_state = 114, .external_lex_state = 2},
  [303] = {.lex_state = 114, .external_lex_state = 2},
  [304] = {.lex_state = 114, .external_lex_state = 2},
  [305] = {.lex_state = 114, .external_lex_state = 2},
  [306] = {.lex_state = 114, .external_lex_state = 2},
  [307] = {.lex_state = 114, .external_lex_state = 2},
  [308] = {.lex_state = 114, .external_lex_state = 3},
  [309] = {.lex_state = 114, .external_lex_state = 2},
  [310] = {.lex_state = 114, .external_lex_state = 3},
  [311] = {.lex_state = 114, .external_lex_state = 7},
  [312] = {.lex_state = 114, .external_lex_state = 7},
  [313] = {.lex_state = 114, .external_lex_state = 3},
  [314] = {.lex_state = 114, .external_lex_state = 3},
  [315] = {.lex_state = 114, .external_lex_state = 2},
  [316] = {.lex_state = 114, .external_lex_state = 2},
  [317] = {.lex_state = 20, .external_lex_state = 5},
  [318] = {.lex_state = 114, .external_lex_state = 2},
  [319] = {.lex_state = 114, .external_lex_state = 2},
  [320] = {.lex_state = 114, .external_lex_state = 2},
  [321] = {.lex_state = 114, .external_lex_state = 2},
  [322] = {.lex_state = 114, .external_lex_state = 3},
  [323] = {.lex_state = 114, .external_lex_state = 2},
  [324] = {.lex_state = 22, .external_lex_state = 2},
  [325] = {.lex_state = 114, .external_lex_state = 4},
  [326] = {.lex_state = 114, .external_lex_state = 4},
  [327] = {.lex_state = 22, .external_lex_state = 2},
  [328] = {.lex_state = 114, .external_lex_state = 3},
  [329] = {.lex_state = 114, .external_lex_state = 4},
  [330] = {.lex_state = 114, .external_lex_state = 2},
  [331] = {.lex_state = 20, .external_lex_state = 2},
  [332] = {.lex_state = 22, .external_lex_state = 2},
  [333] = {.lex_state = 114, .external_lex_state = 2},
  [334] = {.lex_state = 114, .external_lex_state = 8},
  [335] = {.lex_state = 114, .external_lex_state = 8},
  [336] = {.lex_state = 114, .external_lex_state = 4},
  [337] = {.lex_state = 114, .external_lex_state = 4},
  [338] = {.lex_state = 114, .external_lex_state = 8},
  [339] = {.lex_state = 114, .external_lex_state = 8},
  [340] = {.lex_state = 114, .external_lex_state = 4},
  [341] = {.lex_state = 114, .external_lex_state = 8},
  [342] = {.lex_state = 114, .external_lex_state = 3},
  [343] = {.lex_state = 114, .external_lex_state = 4},
  [344] = {.lex_state = 114, .external_lex_state = 8},
  [345] = {.lex_state = 114, .external_lex_state = 8},
  [346] = {.lex_state = 738, .external_lex_state = 5},
  [347] = {.lex_state = 114, .external_lex_state = 4},
  [348] = {.lex_state = 114, .external_lex_state = 4},
  [349] = {.lex_state = 22, .external_lex_state = 2},
  [350] = {.lex_state = 114, .external_lex_state = 8},
  [351] = {.lex_state = 25, .external_lex_state = 3},
  [352] = {.lex_state = 114, .external_lex_state = 3},
  [353] = {.lex_state = 25, .external_lex_state = 3},
  [354] = {.lex_state = 22, .external_lex_state = 2},
  [355] = {.lex_state = 22, .external_lex_state = 2},
  [356] = {.lex_state = 114, .external_lex_state = 3},
  [357] = {.lex_state = 22, .external_lex_state = 2},
  [358] = {.lex_state = 735, .external_lex_state = 2},
  [359] = {.lex_state = 114, .external_lex_state = 2},
  [360] = {.lex_state = 114, .external_lex_state = 7},
  [361] = {.lex_state = 22, .external_lex_state = 2},
  [362] = {.lex_state = 114, .external_lex_state = 5},
  [363] = {.lex_state = 114, .external_lex_state = 7},
  [364] = {.lex_state = 114, .external_lex_state = 7},
  [365] = {.lex_state = 114, .external_lex_state = 7},
  [366] = {.lex_state = 114, .external_lex_state = 6},
  [367] = {.lex_state = 25, .external_lex_state = 3},
  [368] = {.lex_state = 114, .external_lex_state = 6},
  [369] = {.lex_state = 25, .external_lex_state = 3},
  [370] = {.lex_state = 32, .external_lex_state = 3},
  [371] = {.lex_state = 114, .external_lex_state = 3},
  [372] = {.lex_state = 114, .external_lex_state = 2},
  [373] = {.lex_state = 114, .external_lex_state = 3},
  [374] = {.lex_state = 114, .external_lex_state = 3},
  [375] = {.lex_state = 114, .external_lex_state = 3},
  [376] = {.lex_state = 114, .external_lex_state = 2},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 114, .external_lex_state = 2},
  [380] = {.lex_state = 114, .external_lex_state = 2},
  [381] = {.lex_state = 114, .external_lex_state = 2},
  [382] = {.lex_state = 114, .external_lex_state = 3},
  [383] = {.lex_state = 114, .external_lex_state = 3},
  [384] = {.lex_state = 114, .external_lex_state = 3},
  [385] = {.lex_state = 34, .external_lex_state = 2},
  [386] = {.lex_state = 114, .external_lex_state = 2},
  [387] = {.lex_state = 114, .external_lex_state = 3},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 114, .external_lex_state = 3},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 6},
  [395] = {.lex_state = 114, .external_lex_state = 2},
  [396] = {.lex_state = 114, .external_lex_state = 3},
  [397] = {.lex_state = 114, .external_lex_state = 2},
  [398] = {.lex_state = 22, .external_lex_state = 2},
  [399] = {.lex_state = 34, .external_lex_state = 2},
  [400] = {.lex_state = 114, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 6},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 114, .external_lex_state = 2},
  [404] = {.lex_state = 114, .external_lex_state = 2},
  [405] = {.lex_state = 114, .external_lex_state = 3},
  [406] = {.lex_state = 34, .external_lex_state = 2},
  [407] = {.lex_state = 34, .external_lex_state = 2},
  [408] = {.lex_state = 22, .external_lex_state = 2},
  [409] = {.lex_state = 114, .external_lex_state = 3},
  [410] = {.lex_state = 22, .external_lex_state = 2},
  [411] = {.lex_state = 34, .external_lex_state = 2},
  [412] = {.lex_state = 114, .external_lex_state = 3},
  [413] = {.lex_state = 34, .external_lex_state = 2},
  [414] = {.lex_state = 114, .external_lex_state = 3},
  [415] = {.lex_state = 34, .external_lex_state = 2},
  [416] = {.lex_state = 114, .external_lex_state = 3},
  [417] = {.lex_state = 114, .external_lex_state = 2},
  [418] = {.lex_state = 739, .external_lex_state = 3},
  [419] = {.lex_state = 6, .external_lex_state = 3},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 114, .external_lex_state = 3},
  [422] = {.lex_state = 114, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 6},
  [424] = {.lex_state = 114, .external_lex_state = 2},
  [425] = {.lex_state = 114, .external_lex_state = 2},
  [426] = {.lex_state = 34, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 114, .external_lex_state = 2},
  [429] = {.lex_state = 114, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 739, .external_lex_state = 3},
  [432] = {.lex_state = 114, .external_lex_state = 3},
  [433] = {.lex_state = 0, .external_lex_state = 6},
  [434] = {.lex_state = 114, .external_lex_state = 3},
  [435] = {.lex_state = 114, .external_lex_state = 3},
  [436] = {.lex_state = 6, .external_lex_state = 3},
  [437] = {.lex_state = 739, .external_lex_state = 3},
  [438] = {.lex_state = 22, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 114, .external_lex_state = 3},
  [441] = {.lex_state = 114, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 114, .external_lex_state = 7},
  [444] = {.lex_state = 114, .external_lex_state = 3},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 34, .external_lex_state = 2},
  [448] = {.lex_state = 114, .external_lex_state = 3},
  [449] = {.lex_state = 32, .external_lex_state = 3},
  [450] = {.lex_state = 114, .external_lex_state = 3},
  [451] = {.lex_state = 114, .external_lex_state = 7},
  [452] = {.lex_state = 0, .external_lex_state = 6},
  [453] = {.lex_state = 114, .external_lex_state = 7},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 114, .external_lex_state = 7},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 114, .external_lex_state = 7},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 0, .external_lex_state = 6},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 34, .external_lex_state = 2},
  [464] = {.lex_state = 114, .external_lex_state = 7},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 34, .external_lex_state = 2},
  [467] = {.lex_state = 114, .external_lex_state = 7},
  [468] = {.lex_state = 114, .external_lex_state = 3},
  [469] = {.lex_state = 0, .external_lex_state = 8},
  [470] = {.lex_state = 34, .external_lex_state = 2},
  [471] = {.lex_state = 6, .external_lex_state = 3},
  [472] = {.lex_state = 0, .external_lex_state = 8},
  [473] = {.lex_state = 0, .external_lex_state = 8},
  [474] = {.lex_state = 0, .external_lex_state = 8},
  [475] = {.lex_state = 114, .external_lex_state = 3},
  [476] = {.lex_state = 739, .external_lex_state = 3},
  [477] = {.lex_state = 0, .external_lex_state = 8},
  [478] = {.lex_state = 31, .external_lex_state = 3},
  [479] = {.lex_state = 114, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 4},
  [481] = {.lex_state = 0, .external_lex_state = 8},
  [482] = {.lex_state = 739, .external_lex_state = 2},
  [483] = {.lex_state = 31, .external_lex_state = 3},
  [484] = {.lex_state = 739, .external_lex_state = 2},
  [485] = {.lex_state = 114, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 4},
  [487] = {.lex_state = 0, .external_lex_state = 8},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 34, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 0, .external_lex_state = 8},
  [494] = {.lex_state = 114, .external_lex_state = 2},
  [495] = {.lex_state = 31, .external_lex_state = 3},
  [496] = {.lex_state = 114, .external_lex_state = 3},
  [497] = {.lex_state = 0, .external_lex_state = 8},
  [498] = {.lex_state = 0, .external_lex_state = 8},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 114, .external_lex_state = 3},
  [502] = {.lex_state = 0, .external_lex_state = 6},
  [503] = {.lex_state = 0, .external_lex_state = 4},
  [504] = {.lex_state = 0, .external_lex_state = 8},
  [505] = {.lex_state = 0, .external_lex_state = 4},
  [506] = {.lex_state = 34, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 8},
  [508] = {.lex_state = 34, .external_lex_state = 2},
  [509] = {.lex_state = 114, .external_lex_state = 3},
  [510] = {.lex_state = 0, .external_lex_state = 4},
  [511] = {.lex_state = 114, .external_lex_state = 3},
  [512] = {.lex_state = 0, .external_lex_state = 4},
  [513] = {.lex_state = 0, .external_lex_state = 4},
  [514] = {.lex_state = 114, .external_lex_state = 3},
  [515] = {.lex_state = 114, .external_lex_state = 2},
  [516] = {.lex_state = 114, .external_lex_state = 3},
  [517] = {.lex_state = 0, .external_lex_state = 6},
  [518] = {.lex_state = 114, .external_lex_state = 3},
  [519] = {.lex_state = 0, .external_lex_state = 8},
  [520] = {.lex_state = 114, .external_lex_state = 3},
  [521] = {.lex_state = 0, .external_lex_state = 8},
  [522] = {.lex_state = 114, .external_lex_state = 2},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 0, .external_lex_state = 8},
  [525] = {.lex_state = 114, .external_lex_state = 2},
  [526] = {.lex_state = 0, .external_lex_state = 7},
  [527] = {.lex_state = 0, .external_lex_state = 7},
  [528] = {.lex_state = 0, .external_lex_state = 3},
  [529] = {.lex_state = 0, .external_lex_state = 3},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 3},
  [534] = {.lex_state = 114, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 3},
  [536] = {.lex_state = 0, .external_lex_state = 3},
  [537] = {.lex_state = 0, .external_lex_state = 7},
  [538] = {.lex_state = 0, .external_lex_state = 3},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 114, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 7},
  [544] = {.lex_state = 0, .external_lex_state = 7},
  [545] = {.lex_state = 0, .external_lex_state = 2},
  [546] = {.lex_state = 0, .external_lex_state = 3},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 3},
  [550] = {.lex_state = 0, .external_lex_state = 2},
  [551] = {.lex_state = 0, .external_lex_state = 3},
  [552] = {.lex_state = 0, .external_lex_state = 2},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 0, .external_lex_state = 7},
  [555] = {.lex_state = 0, .external_lex_state = 3},
  [556] = {.lex_state = 0, .external_lex_state = 3},
  [557] = {.lex_state = 0, .external_lex_state = 3},
  [558] = {.lex_state = 114, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 3},
  [561] = {.lex_state = 0, .external_lex_state = 3},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 3},
  [564] = {.lex_state = 0, .external_lex_state = 3},
  [565] = {.lex_state = 0, .external_lex_state = 7},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 3},
  [568] = {.lex_state = 0, .external_lex_state = 3},
  [569] = {.lex_state = 0, .external_lex_state = 3},
  [570] = {.lex_state = 0, .external_lex_state = 3},
  [571] = {.lex_state = 0, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 3},
  [573] = {.lex_state = 0, .external_lex_state = 3},
  [574] = {.lex_state = 0, .external_lex_state = 3},
  [575] = {.lex_state = 0, .external_lex_state = 3},
  [576] = {.lex_state = 0, .external_lex_state = 3},
  [577] = {.lex_state = 0, .external_lex_state = 3},
  [578] = {.lex_state = 0, .external_lex_state = 3},
  [579] = {.lex_state = 0, .external_lex_state = 3},
  [580] = {.lex_state = 0, .external_lex_state = 3},
  [581] = {.lex_state = 0, .external_lex_state = 3},
  [582] = {.lex_state = 0, .external_lex_state = 3},
  [583] = {.lex_state = 0, .external_lex_state = 3},
  [584] = {.lex_state = 0, .external_lex_state = 3},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 3},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 3},
  [592] = {.lex_state = 0, .external_lex_state = 3},
  [593] = {.lex_state = 0, .external_lex_state = 3},
  [594] = {.lex_state = 0, .external_lex_state = 3},
  [595] = {.lex_state = 0, .external_lex_state = 3},
  [596] = {.lex_state = 0, .external_lex_state = 2},
  [597] = {.lex_state = 0, .external_lex_state = 7},
  [598] = {.lex_state = 0, .external_lex_state = 7},
  [599] = {.lex_state = 0, .external_lex_state = 7},
  [600] = {.lex_state = 0, .external_lex_state = 3},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 114, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 0, .external_lex_state = 3},
  [605] = {.lex_state = 0, .external_lex_state = 3},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 3},
  [610] = {.lex_state = 0, .external_lex_state = 3},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 3},
  [613] = {.lex_state = 0, .external_lex_state = 7},
  [614] = {.lex_state = 0, .external_lex_state = 3},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 3},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 2},
  [620] = {.lex_state = 0, .external_lex_state = 7},
  [621] = {.lex_state = 0, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 7},
  [623] = {.lex_state = 0, .external_lex_state = 3},
  [624] = {.lex_state = 0, .external_lex_state = 3},
  [625] = {.lex_state = 0, .external_lex_state = 7},
  [626] = {.lex_state = 114, .external_lex_state = 2},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 0, .external_lex_state = 7},
  [629] = {.lex_state = 0, .external_lex_state = 2},
  [630] = {.lex_state = 0, .external_lex_state = 3},
  [631] = {.lex_state = 114, .external_lex_state = 2},
  [632] = {.lex_state = 0, .external_lex_state = 7},
  [633] = {.lex_state = 0, .external_lex_state = 3},
  [634] = {.lex_state = 0, .external_lex_state = 7},
  [635] = {.lex_state = 0, .external_lex_state = 3},
  [636] = {.lex_state = 0, .external_lex_state = 7},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 3},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 7},
  [641] = {.lex_state = 0, .external_lex_state = 3},
  [642] = {.lex_state = 0, .external_lex_state = 3},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 0, .external_lex_state = 3},
  [645] = {.lex_state = 0, .external_lex_state = 3},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 3},
  [648] = {.lex_state = 114, .external_lex_state = 2},
  [649] = {.lex_state = 31, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 3},
  [651] = {.lex_state = 0, .external_lex_state = 3},
  [652] = {.lex_state = 0, .external_lex_state = 7},
  [653] = {.lex_state = 0, .external_lex_state = 3},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 0, .external_lex_state = 3},
  [656] = {.lex_state = 0, .external_lex_state = 9},
  [657] = {.lex_state = 114, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 5},
  [659] = {.lex_state = 0, .external_lex_state = 5},
  [660] = {.lex_state = 0, .external_lex_state = 5},
  [661] = {.lex_state = 0, .external_lex_state = 5},
  [662] = {.lex_state = 0, .external_lex_state = 5},
  [663] = {.lex_state = 0, .external_lex_state = 5},
  [664] = {.lex_state = 0, .external_lex_state = 3},
  [665] = {.lex_state = 0, .external_lex_state = 3},
  [666] = {.lex_state = 0, .external_lex_state = 7},
  [667] = {.lex_state = 0, .external_lex_state = 3},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 3},
  [672] = {.lex_state = 0, .external_lex_state = 2},
  [673] = {.lex_state = 0, .external_lex_state = 2},
  [674] = {.lex_state = 0, .external_lex_state = 2},
  [675] = {.lex_state = 0, .external_lex_state = 2},
  [676] = {.lex_state = 0, .external_lex_state = 2},
  [677] = {.lex_state = 0, .external_lex_state = 2},
  [678] = {.lex_state = 0, .external_lex_state = 2},
  [679] = {.lex_state = 0, .external_lex_state = 2},
  [680] = {.lex_state = 0, .external_lex_state = 2},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 2},
  [684] = {.lex_state = 0, .external_lex_state = 2},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 7},
  [687] = {.lex_state = 0, .external_lex_state = 3},
  [688] = {.lex_state = 114, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 2},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 2},
  [693] = {.lex_state = 0, .external_lex_state = 2},
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
    [aux_sym_m_une_possibilitu00e9_token1] = ACTIONS(1),
    [aux_sym_m_une_possibilitu00e9_token2] = ACTIONS(1),
    [anon_sym_oui] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [aux_sym_m_une_possibilitu00e9_token3] = ACTIONS(1),
    [aux_sym_avec_token1] = ACTIONS(1),
    [aux_sym_remplace_token1] = ACTIONS(1),
    [aux_sym__remplace_rule_token1] = ACTIONS(1),
    [aux_sym__remplace_rule_token2] = ACTIONS(1),
    [aux_sym__remplace_rule_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(691),
    [sym_rule] = STATE(321),
    [sym__dottedName] = STATE(690),
    [aux_sym_source_file_repeat1] = STATE(321),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(51), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(310), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(14), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [122] = 32,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(13), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [244] = 32,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(69), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(313), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(14), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [366] = 32,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(75), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(13), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [488] = 28,
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
    ACTIONS(37), 1,
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    STATE(610), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(39), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [589] = 26,
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
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      sym_string,
    ACTIONS(95), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(28), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(308), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [684] = 26,
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
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_string,
    ACTIONS(103), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [779] = 26,
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
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym_string,
    ACTIONS(111), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(29), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(264), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [874] = 26,
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
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(39), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [969] = 26,
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
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(119), 1,
      sym_date,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(20), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(145), 10,
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
  [1064] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_formule_token1,
    ACTIONS(124), 1,
      aux_sym_m_unary_token1,
    ACTIONS(127), 1,
      aux_sym_m_array_token1,
    ACTIONS(130), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(133), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(136), 1,
      aux_sym_m_variations_token1,
    ACTIONS(139), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(142), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(145), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(148), 1,
      aux_sym_m_texte_token1,
    ACTIONS(151), 1,
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(154), 1,
      aux_sym_avec_token1,
    ACTIONS(157), 1,
      aux_sym_remplace_token1,
    ACTIONS(160), 1,
      sym_tag,
    ACTIONS(163), 1,
      aux_sym_meta_token1,
    ACTIONS(166), 1,
      sym__key,
    ACTIONS(169), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [1143] = 20,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    ACTIONS(171), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [1222] = 20,
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
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(41), 1,
      aux_sym_avec_token1,
    ACTIONS(43), 1,
      aux_sym_remplace_token1,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(55), 1,
      aux_sym_meta_token1,
    ACTIONS(57), 1,
      sym__key,
    ACTIONS(173), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_avec,
      sym_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(145), 10,
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
  [1301] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(187), 1,
      sym_string,
    ACTIONS(189), 1,
      sym_date,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(193), 1,
      sym__indent,
    ACTIONS(195), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(396), 1,
      sym_rule_body,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(249), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1362] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_string,
    ACTIONS(203), 1,
      sym_date,
    ACTIONS(205), 1,
      sym__indent,
    ACTIONS(207), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(380), 1,
      sym_rule_body,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(254), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1423] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      sym_string,
    ACTIONS(215), 1,
      sym_date,
    ACTIONS(217), 1,
      sym__indent,
    ACTIONS(219), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(421), 1,
      sym_rule_body,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1484] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      sym_string,
    ACTIONS(227), 1,
      sym_date,
    ACTIONS(229), 1,
      sym__indent,
    ACTIONS(231), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(404), 1,
      sym_rule_body,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1545] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(241), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(564), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1603] = 13,
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
    ACTIONS(243), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [1653] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_m_unary_token1,
    ACTIONS(248), 1,
      aux_sym_m_array_token1,
    ACTIONS(251), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(254), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(257), 1,
      aux_sym_m_variations_token1,
    ACTIONS(260), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(263), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(266), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(269), 1,
      aux_sym_m_texte_token1,
    ACTIONS(272), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [1703] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_string,
    ACTIONS(280), 1,
      sym_date,
    ACTIONS(282), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(534), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1761] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      sym_string,
    ACTIONS(290), 1,
      sym_date,
    ACTIONS(292), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(496), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(312), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1819] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_string,
    ACTIONS(280), 1,
      sym_date,
    ACTIONS(282), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(649), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1877] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(241), 1,
      sym__indent,
    STATE(119), 1,
      sym__valeur,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1935] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_string,
    ACTIONS(300), 1,
      sym_date,
    ACTIONS(302), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(483), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1993] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_string,
    ACTIONS(280), 1,
      sym_date,
    ACTIONS(282), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(558), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2051] = 13,
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
    ACTIONS(304), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [2101] = 13,
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
    ACTIONS(306), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [2151] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(308), 1,
      sym__indent,
    STATE(116), 1,
      sym__valeur,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2209] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_string,
    ACTIONS(280), 1,
      sym_date,
    ACTIONS(282), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(525), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2267] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_string,
    ACTIONS(300), 1,
      sym_date,
    ACTIONS(302), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(478), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2325] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_string,
    ACTIONS(300), 1,
      sym_date,
    ACTIONS(302), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(495), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2383] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      sym_string,
    ACTIONS(300), 1,
      sym_date,
    ACTIONS(302), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(449), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2441] = 13,
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
    ACTIONS(310), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [2491] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      sym_string,
    ACTIONS(280), 1,
      sym_date,
    ACTIONS(282), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(648), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2549] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(241), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(589), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2607] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(241), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(591), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2665] = 13,
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
    ACTIONS(312), 1,
      sym__dedent,
    STATE(21), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(145), 10,
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
  [2715] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_date,
    ACTIONS(241), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    STATE(538), 1,
      sym__valeur,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__key,
    ACTIONS(318), 1,
      sym__array_prefix,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(314), 17,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      aux_sym__remplace_rule_token3,
      sym_tag,
      aux_sym_meta_token1,
  [2805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__key,
    ACTIONS(325), 1,
      sym__array_prefix,
    STATE(43), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(321), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [2836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__key,
    ACTIONS(331), 1,
      sym__array_prefix,
    STATE(43), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(327), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__key,
    ACTIONS(334), 18,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      aux_sym__remplace_rule_token3,
      sym_tag,
      aux_sym_meta_token1,
  [2894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__key,
    ACTIONS(342), 1,
      sym__array_prefix,
    STATE(46), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(338), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [2925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__key,
    ACTIONS(348), 1,
      sym__array_prefix,
    STATE(46), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(344), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [2956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__key,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(351), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [2987] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(365), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(292), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3033] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(369), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3079] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(371), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(303), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3125] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(373), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(273), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3171] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(375), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3217] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(377), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3263] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(379), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3309] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(381), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3355] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(383), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3401] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(237), 1,
      sym_reference,
    STATE(240), 1,
      sym_number,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(385), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(234), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3445] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(387), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(280), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3491] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(389), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(250), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3537] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(391), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3583] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(393), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3629] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(395), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(307), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(397), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3721] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(399), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(293), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3767] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(191), 1,
      aux_sym_number_token1,
    STATE(222), 1,
      sym__dottedName,
    STATE(223), 1,
      sym_reference,
    STATE(224), 1,
      sym_number,
    ACTIONS(181), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(401), 2,
      sym_string,
      sym_date,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3811] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(403), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3857] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(405), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(267), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3903] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(53), 1,
      aux_sym_number_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(230), 1,
      sym_reference,
    STATE(231), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(407), 2,
      sym_string,
      sym_date,
    STATE(228), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(409), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(298), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3993] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(411), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(260), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4039] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    STATE(318), 1,
      sym__expression,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(413), 2,
      sym_string,
      sym_date,
    STATE(305), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(226), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4087] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(415), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(291), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4133] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(417), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4179] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(419), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4225] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(421), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(302), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4271] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(423), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4317] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    STATE(318), 1,
      sym__expression,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(413), 2,
      sym_string,
      sym_date,
    STATE(255), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(242), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4365] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(425), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4411] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    STATE(318), 1,
      sym__expression,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(413), 2,
      sym_string,
      sym_date,
    STATE(304), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(232), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__key,
    ACTIONS(427), 17,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4485] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(431), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(299), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4531] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(433), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4577] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(435), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4623] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(437), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4669] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(439), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(282), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__key,
    ACTIONS(441), 17,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4741] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(445), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(259), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__key,
    ACTIONS(447), 17,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4813] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(451), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4859] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(453), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__key,
    ACTIONS(455), 17,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [4931] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(194), 1,
      sym_reference,
    STATE(200), 1,
      sym_number,
    STATE(225), 1,
      sym_boolean,
    ACTIONS(359), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(385), 2,
      sym_string,
      sym_date,
    STATE(202), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(234), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__key,
    ACTIONS(459), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__key,
    ACTIONS(463), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__key,
    ACTIONS(467), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__key,
    ACTIONS(471), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__key,
    ACTIONS(475), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__key,
    ACTIONS(479), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__key,
    ACTIONS(483), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__key,
    ACTIONS(487), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__key,
    ACTIONS(491), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__key,
    ACTIONS(495), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__key,
    ACTIONS(499), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__key,
    ACTIONS(503), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__key,
    ACTIONS(507), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__key,
    ACTIONS(511), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__key,
    ACTIONS(515), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__key,
    ACTIONS(519), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__key,
    ACTIONS(523), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__key,
    ACTIONS(527), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__key,
    ACTIONS(531), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__key,
    ACTIONS(535), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__key,
    ACTIONS(539), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__key,
    ACTIONS(543), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__key,
    ACTIONS(547), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__key,
    ACTIONS(551), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__key,
    ACTIONS(555), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__key,
    ACTIONS(559), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__key,
    ACTIONS(563), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__key,
    ACTIONS(567), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__key,
    ACTIONS(571), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__key,
    ACTIONS(575), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__key,
    ACTIONS(579), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__key,
    ACTIONS(571), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__key,
    ACTIONS(583), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__key,
    ACTIONS(587), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__key,
    ACTIONS(591), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__key,
    ACTIONS(595), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__key,
    ACTIONS(599), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__key,
    ACTIONS(603), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__key,
    ACTIONS(607), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__key,
    ACTIONS(611), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [5977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__key,
    ACTIONS(615), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__key,
    ACTIONS(619), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__key,
    ACTIONS(623), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__key,
    ACTIONS(627), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__key,
    ACTIONS(631), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__key,
    ACTIONS(635), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__key,
    ACTIONS(639), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym__key,
    ACTIONS(643), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym__key,
    ACTIONS(647), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__key,
    ACTIONS(651), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__key,
    ACTIONS(655), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__key,
    ACTIONS(659), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__key,
    ACTIONS(663), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym__key,
    ACTIONS(667), 16,
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
      aux_sym_m_une_possibilitu00e9_token1,
      aux_sym_avec_token1,
      aux_sym_remplace_token1,
      sym_tag,
      aux_sym_meta_token1,
  [6327] = 7,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SPACE,
    ACTIONS(677), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(164), 1,
      sym__units,
    STATE(196), 1,
      sym_units,
    ACTIONS(671), 11,
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
  [6359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(679), 12,
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
  [6383] = 8,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SPACE,
    ACTIONS(686), 1,
      aux_sym_unit_token1,
    ACTIONS(688), 1,
      sym__dedent,
    STATE(171), 1,
      sym_unit,
    STATE(187), 1,
      sym__units,
    STATE(220), 1,
      sym_units,
    ACTIONS(671), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SLASH,
    ACTIONS(694), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(690), 11,
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
  [6441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      sym_exposant,
    ACTIONS(696), 12,
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
  [6465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(702), 12,
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
  [6489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_DOT2,
    ACTIONS(708), 1,
      anon_sym_SLASH,
    STATE(150), 1,
      aux_sym__units_repeat1,
    ACTIONS(706), 11,
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
  [6515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(710), 12,
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
  [6539] = 8,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__newline,
    ACTIONS(712), 1,
      anon_sym_SPACE,
    ACTIONS(714), 1,
      aux_sym_unit_token1,
    STATE(173), 1,
      sym_unit,
    STATE(184), 1,
      sym__units,
    STATE(219), 1,
      sym_units,
    ACTIONS(671), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(720), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(716), 11,
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
  [6597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(158), 1,
      aux_sym_units_repeat1,
    ACTIONS(723), 11,
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
  [6620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SLASH,
    STATE(158), 1,
      aux_sym_units_repeat1,
    ACTIONS(727), 11,
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
  [6643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(716), 12,
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
  [6664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 13,
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
  [6683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(158), 1,
      aux_sym_units_repeat1,
    ACTIONS(732), 11,
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
  [6706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SLASH,
    ACTIONS(734), 12,
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
  [6727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(157), 1,
      aux_sym_units_repeat1,
    ACTIONS(738), 11,
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
  [6750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      aux_sym_units_repeat1,
    ACTIONS(740), 11,
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
  [6773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      sym_exposant,
    ACTIONS(696), 10,
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
  [6795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 12,
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
  [6813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SLASH,
    ACTIONS(746), 1,
      sym_exposant,
    ACTIONS(696), 10,
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
  [6835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      anon_sym_DOT2,
    STATE(172), 1,
      aux_sym__units_repeat1,
    ACTIONS(690), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(750), 1,
      anon_sym_DOT2,
    STATE(169), 1,
      aux_sym__units_repeat1,
    ACTIONS(716), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SLASH,
    ACTIONS(753), 1,
      anon_sym_DOT2,
    STATE(169), 1,
      aux_sym__units_repeat1,
    ACTIONS(690), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SLASH,
    ACTIONS(753), 1,
      anon_sym_DOT2,
    STATE(170), 1,
      aux_sym__units_repeat1,
    ACTIONS(706), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(755), 1,
      anon_sym_DOT2,
    STATE(172), 1,
      aux_sym__units_repeat1,
    ACTIONS(716), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      anon_sym_DOT2,
    STATE(168), 1,
      aux_sym__units_repeat1,
    ACTIONS(706), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SLASH,
    ACTIONS(727), 11,
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
    ACTIONS(760), 1,
      anon_sym_DOT,
    STATE(199), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(702), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    STATE(181), 1,
      aux_sym_units_repeat1,
    ACTIONS(732), 9,
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
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(764), 10,
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
  [7060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(716), 10,
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
  [7079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(710), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_DOT,
    STATE(182), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(702), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SLASH,
    STATE(181), 1,
      aux_sym_units_repeat1,
    ACTIONS(727), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DOT,
    STATE(182), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(679), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 11,
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
  [7180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    STATE(176), 1,
      aux_sym_units_repeat1,
    ACTIONS(740), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    STATE(181), 1,
      aux_sym_units_repeat1,
    ACTIONS(723), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 11,
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
  [7239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SLASH,
    STATE(192), 1,
      aux_sym_units_repeat1,
    ACTIONS(740), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      aux_sym_units_repeat1,
    ACTIONS(738), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 11,
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
  [7298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SLASH,
    STATE(193), 1,
      aux_sym_units_repeat1,
    ACTIONS(738), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SLASH,
    ACTIONS(734), 10,
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
  [7338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
    ACTIONS(732), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
    ACTIONS(723), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
    ACTIONS(727), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 11,
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
  [7439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SLASH,
    ACTIONS(716), 10,
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
  [7458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DOT,
    STATE(175), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(710), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_DOT,
    STATE(199), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(679), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SLASH,
    ACTIONS(734), 10,
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
  [7538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      aux_sym_number_token1,
    STATE(222), 1,
      sym__dottedName,
    STATE(239), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 10,
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
  [7601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(805), 1,
      sym_name,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(233), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7627] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      aux_sym_number_token1,
    STATE(222), 1,
      sym__dottedName,
    STATE(227), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7653] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(408), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SLASH,
    ACTIONS(727), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(805), 1,
      sym_name,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(244), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(805), 1,
      sym_name,
    ACTIONS(807), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(243), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7749] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    ACTIONS(803), 1,
      aux_sym_number_token1,
    STATE(222), 1,
      sym__dottedName,
    STATE(236), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(410), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(177), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SLASH,
    ACTIONS(727), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(189), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(186), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 10,
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
  [7913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(363), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      aux_sym_number_token1,
    STATE(166), 1,
      sym__dottedName,
    STATE(398), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(817), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(764), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(782), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(764), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8388] = 7,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym__paragraph_token1,
    ACTIONS(839), 1,
      sym_text_line,
    ACTIONS(841), 1,
      sym__indent,
    ACTIONS(843), 1,
      sym__newline,
    STATE(137), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8412] = 7,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym__paragraph_token1,
    ACTIONS(839), 1,
      sym_text_line,
    ACTIONS(841), 1,
      sym__indent,
    ACTIONS(843), 1,
      sym__newline,
    STATE(471), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8436] = 7,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym__paragraph_token1,
    ACTIONS(839), 1,
      sym_text_line,
    ACTIONS(841), 1,
      sym__indent,
    ACTIONS(843), 1,
      sym__newline,
    STATE(95), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__indent,
    ACTIONS(863), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(861), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(325), 1,
      sym__array_prefix,
    ACTIONS(885), 1,
      aux_sym__remplace_rule_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(462), 1,
      aux_sym_remplace_repeat1,
    STATE(583), 1,
      sym_reference,
    STATE(584), 1,
      sym__remplace_rule,
  [8856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__indent,
    ACTIONS(905), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(903), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__indent,
    ACTIONS(911), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(909), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__indent,
    ACTIONS(923), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(921), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__newline,
    ACTIONS(845), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__dedent,
    ACTIONS(853), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(941), 1,
      anon_sym_LBRACK,
    ACTIONS(943), 1,
      sym__dedent,
    STATE(643), 1,
      sym__dottedName,
    STATE(322), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(945), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(949), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9489] = 7,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_SPACE,
    ACTIONS(955), 1,
      aux_sym_unit_token1,
    ACTIONS(957), 1,
      sym__indent,
    STATE(363), 1,
      sym_unit,
    STATE(441), 1,
      sym__units,
    STATE(632), 1,
      sym_units,
  [9511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9523] = 3,
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
  [9537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(965), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
    STATE(690), 1,
      sym__dottedName,
    STATE(323), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_name,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    ACTIONS(977), 1,
      sym__dedent,
    STATE(643), 1,
      sym__dottedName,
    STATE(322), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_name,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
    ACTIONS(979), 1,
      anon_sym_LBRACK,
    STATE(690), 1,
      sym__dottedName,
    STATE(323), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [9622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(982), 1,
      sym__indent,
    ACTIONS(984), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(636), 1,
      sym_reference,
  [9641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(986), 1,
      sym__indent,
    ACTIONS(988), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(599), 1,
      sym_reference,
  [9660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [9671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(990), 1,
      sym__dedent,
    STATE(166), 1,
      sym__dottedName,
    STATE(342), 1,
      aux_sym_m_contexte_repeat1,
    STATE(606), 1,
      sym_reference,
  [9690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(992), 1,
      sym__indent,
    ACTIONS(994), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(666), 1,
      sym_reference,
  [9709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(941), 1,
      anon_sym_LBRACK,
    STATE(643), 1,
      sym__dottedName,
    STATE(314), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9726] = 6,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_SPACE,
    ACTIONS(998), 1,
      aux_sym_unit_token1,
    STATE(373), 1,
      sym_unit,
    STATE(450), 1,
      sym__units,
    STATE(603), 1,
      sym_units,
  [9745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [9756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(885), 1,
      aux_sym__remplace_rule_token1,
    STATE(229), 1,
      sym__dottedName,
    STATE(556), 1,
      sym_reference,
    STATE(557), 1,
      sym__remplace_rule,
  [9775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(458), 1,
      aux_sym_m_inversion_repeat1,
    STATE(576), 1,
      sym_reference,
  [9794] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(460), 1,
      aux_sym_m_inversion_repeat1,
    STATE(580), 1,
      sym_reference,
  [9813] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1000), 1,
      sym__indent,
    ACTIONS(1002), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(628), 1,
      sym_reference,
  [9832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1004), 1,
      sym__indent,
    ACTIONS(1006), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(597), 1,
      sym_reference,
  [9851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(390), 1,
      aux_sym_m_inversion_repeat1,
    STATE(647), 1,
      sym_reference,
  [9870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(456), 1,
      aux_sym_m_inversion_repeat1,
    STATE(582), 1,
      sym_reference,
  [9889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1008), 1,
      sym__indent,
    ACTIONS(1010), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(526), 1,
      sym_reference,
  [9908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(377), 1,
      aux_sym_m_inversion_repeat1,
    STATE(560), 1,
      sym_reference,
  [9927] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_name,
    ACTIONS(1015), 1,
      sym__dedent,
    STATE(166), 1,
      sym__dottedName,
    STATE(342), 1,
      aux_sym_m_contexte_repeat1,
    STATE(606), 1,
      sym_reference,
  [9946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1017), 1,
      sym__indent,
    ACTIONS(1019), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(527), 1,
      sym_reference,
  [9965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(393), 1,
      aux_sym_m_inversion_repeat1,
    STATE(664), 1,
      sym_reference,
  [9984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(389), 1,
      aux_sym_m_inversion_repeat1,
    STATE(665), 1,
      sym_reference,
  [10003] = 5,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym__paragraph_token1,
    ACTIONS(839), 1,
      sym_text_line,
    ACTIONS(1021), 1,
      sym__indent,
    STATE(131), 2,
      sym__text_line,
      sym__paragraph,
  [10020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1023), 1,
      sym__indent,
    ACTIONS(1025), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(598), 1,
      sym_reference,
  [10039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1027), 1,
      sym__indent,
    ACTIONS(1029), 1,
      sym__newline,
    STATE(222), 1,
      sym__dottedName,
    STATE(625), 1,
      sym_reference,
  [10058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10069] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(445), 1,
      aux_sym_m_inversion_repeat1,
    STATE(595), 1,
      sym_reference,
  [10088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_exposant,
    ACTIONS(696), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1035), 1,
      aux_sym__m_tranche_token2,
    STATE(612), 1,
      sym__m_tranche,
    STATE(671), 1,
      sym__m_last_tranche,
  [10136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1035), 1,
      aux_sym__m_tranche_token2,
    STATE(605), 1,
      sym__m_last_tranche,
    STATE(612), 1,
      sym__m_tranche,
  [10152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_DOT2,
    STATE(356), 1,
      aux_sym__units_repeat1,
    ACTIONS(716), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1035), 1,
      aux_sym__m_tranche_token2,
    STATE(612), 1,
      sym__m_tranche,
    STATE(667), 1,
      sym__m_last_tranche,
  [10182] = 5,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__key,
    ACTIONS(1042), 1,
      sym_text_line,
    STATE(418), 1,
      aux_sym__text_line_repeat1,
    STATE(419), 1,
      aux_sym_object_repeat1,
  [10198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(166), 1,
      sym__dottedName,
    STATE(328), 1,
      aux_sym_m_contexte_repeat1,
    STATE(606), 1,
      sym_reference,
  [10214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_exposant,
    ACTIONS(696), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1035), 1,
      aux_sym__m_tranche_token2,
    STATE(607), 1,
      sym__m_last_tranche,
    STATE(612), 1,
      sym__m_tranche,
  [10242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_name,
    ACTIONS(1046), 1,
      sym__indent,
    STATE(222), 1,
      sym__dottedName,
    STATE(537), 1,
      sym_reference,
  [10258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DOT2,
    STATE(364), 1,
      aux_sym__units_repeat1,
    ACTIONS(706), 2,
      sym__newline,
      anon_sym_SLASH,
  [10272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DOT2,
    STATE(365), 1,
      aux_sym__units_repeat1,
    ACTIONS(690), 2,
      sym__newline,
      anon_sym_SLASH,
  [10286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_DOT2,
    STATE(365), 1,
      aux_sym__units_repeat1,
    ACTIONS(716), 2,
      sym__newline,
      anon_sym_SLASH,
  [10300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1053), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1055), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1057), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1059), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_depuis,
    ACTIONS(1063), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1065), 1,
      anon_sym_unitu00e9,
    ACTIONS(1067), 1,
      sym__dedent,
  [10368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_DOT2,
    STATE(356), 1,
      aux_sym__units_repeat1,
    ACTIONS(690), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1073), 1,
      aux_sym__variation_sinon_token1,
    STATE(546), 1,
      sym__variation_sinon,
    STATE(561), 1,
      sym__variation_si,
  [10398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_DOT2,
    STATE(371), 1,
      aux_sym__units_repeat1,
    ACTIONS(706), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym__dedent,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
    STATE(440), 1,
      aux_sym_units_repeat1,
  [10434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(536), 1,
      sym_reference,
  [10447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1079), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1081), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_unit_token1,
    STATE(173), 1,
      sym_unit,
    STATE(188), 1,
      sym__units,
  [10540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1099), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1101), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1103), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1107), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1109), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [10685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_unit_token1,
    STATE(173), 1,
      sym_unit,
    STATE(214), 1,
      sym__units,
  [10698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      sym__dedent,
    ACTIONS(1121), 1,
      sym__array_prefix,
    STATE(423), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym__dedent,
    ACTIONS(1125), 1,
      sym__array_prefix,
    STATE(423), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1129), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1131), 1,
      sym__dedent,
  [10764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      aux_sym_unit_token1,
    STATE(373), 1,
      sym_unit,
    STATE(375), 1,
      sym__units,
  [10777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_unit_token1,
    STATE(171), 1,
      sym_unit,
    STATE(208), 1,
      sym__units,
  [10790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [10803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1135), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1137), 1,
      sym__dedent,
  [10816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(797), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [10829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym_unit_token1,
    STATE(363), 1,
      sym_unit,
    STATE(443), 1,
      sym__units,
  [10842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(163), 1,
      sym__units,
  [10864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_unit_token1,
    STATE(153), 1,
      sym_unit,
    STATE(174), 1,
      sym__units,
  [10886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10904] = 4,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_text_line,
    ACTIONS(1139), 1,
      sym__dedent,
    STATE(437), 1,
      aux_sym__text_line_repeat1,
  [10917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym__key,
    ACTIONS(1143), 1,
      sym__dedent,
    STATE(436), 1,
      aux_sym_object_repeat1,
  [10930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym__dedent,
    ACTIONS(1147), 1,
      sym__array_prefix,
    STATE(420), 1,
      aux_sym_m_variations_repeat1,
  [10943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym__dedent,
    ACTIONS(1152), 1,
      sym__array_prefix,
    STATE(423), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_unit_token1,
    STATE(171), 1,
      sym_unit,
    STATE(190), 1,
      sym__units,
  [11005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__array_prefix,
    ACTIONS(1155), 1,
      sym__dedent,
    STATE(46), 1,
      aux_sym_m_array_repeat1,
  [11018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_name,
    STATE(229), 1,
      sym__dottedName,
    STATE(563), 1,
      sym_reference,
  [11040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1157), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11053] = 4,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_text_line,
    ACTIONS(1159), 1,
      sym__dedent,
    STATE(437), 1,
      aux_sym__text_line_repeat1,
  [11066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym__dedent,
    ACTIONS(1163), 1,
      sym__array_prefix,
    STATE(420), 1,
      aux_sym_m_variations_repeat1,
  [11088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__dedent,
    ACTIONS(1165), 1,
      anon_sym_SLASH,
    STATE(435), 1,
      aux_sym_units_repeat1,
  [11110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym__key,
    ACTIONS(1171), 1,
      sym__dedent,
    STATE(436), 1,
      aux_sym_object_repeat1,
  [11123] = 4,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_text_line,
    ACTIONS(1176), 1,
      sym__dedent,
    STATE(437), 1,
      aux_sym__text_line_repeat1,
  [11136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1178), 1,
      aux_sym__m_tranche_token1,
    STATE(612), 1,
      sym__m_tranche,
  [11149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym__dedent,
    ACTIONS(1182), 1,
      sym__array_prefix,
    STATE(423), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__dedent,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
    STATE(435), 1,
      aux_sym_units_repeat1,
  [11175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(1184), 1,
      anon_sym_SLASH,
    STATE(464), 1,
      aux_sym_units_repeat1,
  [11188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__dedent,
    ACTIONS(1188), 1,
      sym__array_prefix,
    STATE(423), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym__newline,
    ACTIONS(1184), 1,
      anon_sym_SLASH,
    STATE(459), 1,
      aux_sym_units_repeat1,
  [11214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__dedent,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
    STATE(435), 1,
      aux_sym_units_repeat1,
  [11227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1190), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1192), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      aux_sym_unit_token1,
    STATE(373), 1,
      sym_unit,
    STATE(475), 1,
      sym__units,
  [11266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1196), 1,
      anon_sym_unitu00e9,
    ACTIONS(1198), 1,
      sym__dedent,
  [11288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__dedent,
    ACTIONS(1077), 1,
      anon_sym_SLASH,
    STATE(444), 1,
      aux_sym_units_repeat1,
  [11301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1200), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1202), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__newline,
    ACTIONS(1204), 1,
      anon_sym_SLASH,
    STATE(455), 1,
      aux_sym_units_repeat1,
  [11358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1207), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1209), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__newline,
    ACTIONS(1184), 1,
      anon_sym_SLASH,
    STATE(455), 1,
      aux_sym_units_repeat1,
  [11410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1213), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1215), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__array_prefix,
    ACTIONS(1217), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_remplace_repeat1,
  [11449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym_unit_token1,
    STATE(363), 1,
      sym_unit,
    STATE(467), 1,
      sym__units,
  [11462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__newline,
    ACTIONS(1184), 1,
      anon_sym_SLASH,
    STATE(455), 1,
      aux_sym_units_repeat1,
  [11475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    ACTIONS(1219), 1,
      sym__dedent,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [11488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym_unit_token1,
    STATE(451), 1,
      sym_unit,
  [11498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym__newline,
      anon_sym_SLASH,
  [11506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1059), 1,
      sym__dedent,
  [11516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(454), 1,
      aux_sym_m_inversion_repeat1,
  [11526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      aux_sym_unit_token1,
    STATE(434), 1,
      sym_unit,
  [11536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 2,
      sym__dedent,
      sym__key,
  [11544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(461), 1,
      aux_sym_m_inversion_repeat1,
  [11554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(368), 1,
      aux_sym_m_inversion_repeat1,
  [11564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(457), 1,
      aux_sym_m_inversion_repeat1,
  [11574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym__dedent,
      anon_sym_SLASH,
  [11582] = 3,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym__dedent,
    ACTIONS(1221), 1,
      sym_text_line,
  [11592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(378), 1,
      aux_sym_m_inversion_repeat1,
  [11602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_unitu00e9,
    ACTIONS(1225), 1,
      sym__dedent,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      aux_sym__variation_si_token1,
    STATE(561), 1,
      sym__variation_si,
  [11622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym__indent,
    ACTIONS(1231), 1,
      sym__newline,
  [11632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(446), 1,
      aux_sym_m_inversion_repeat1,
  [11642] = 3,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_text_line,
    STATE(418), 1,
      aux_sym__text_line_repeat1,
  [11652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1235), 1,
      sym__dedent,
  [11662] = 3,
    ACTIONS(673), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_text_line,
    STATE(431), 1,
      aux_sym__text_line_repeat1,
  [11672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_oui,
      anon_sym_non,
  [11680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym__indent,
    ACTIONS(1241), 1,
      sym__newline,
  [11690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(452), 1,
      aux_sym_m_inversion_repeat1,
  [11700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(465), 1,
      aux_sym_m_inversion_repeat1,
  [11710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__array_prefix,
    STATE(442), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__array_prefix,
    STATE(439), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym_unit_token1,
    STATE(159), 1,
      sym_unit,
  [11740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(366), 1,
      aux_sym_m_inversion_repeat1,
  [11750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__array_prefix,
    STATE(42), 1,
      aux_sym_remplace_repeat1,
  [11760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      aux_sym_m_une_possibilitu00e9_token2,
    ACTIONS(1247), 1,
      aux_sym_m_une_possibilitu00e9_token3,
  [11770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_unitu00e9,
    ACTIONS(1251), 1,
      sym__dedent,
  [11780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 2,
      sym__dedent,
      sym_name,
  [11788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(394), 1,
      aux_sym_m_inversion_repeat1,
  [11798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__array_prefix,
    STATE(433), 1,
      aux_sym_m_variations_repeat1,
  [11808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(47), 1,
      aux_sym_m_inversion_repeat1,
  [11818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(430), 1,
      aux_sym_m_inversion_repeat1,
  [11828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1259), 1,
      sym__dedent,
  [11838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 2,
      sym__dedent,
      sym__array_prefix,
  [11846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym__indent,
    ACTIONS(1265), 1,
      sym__newline,
  [11856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__array_prefix,
    STATE(45), 1,
      aux_sym_m_array_repeat1,
  [11866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym__indent,
    ACTIONS(1269), 1,
      sym__newline,
  [11876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_unit_token1,
    STATE(197), 1,
      sym_unit,
  [11886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__array_prefix,
    STATE(427), 1,
      aux_sym_m_array_repeat1,
  [11896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_unit_token1,
    STATE(178), 1,
      sym_unit,
  [11906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1273), 1,
      sym__dedent,
  [11916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      sym__indent,
    ACTIONS(1277), 1,
      sym__newline,
  [11926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1055), 1,
      sym__dedent,
  [11936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      sym__indent,
    ACTIONS(1281), 1,
      sym__newline,
  [11946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym__indent,
    ACTIONS(1285), 1,
      sym__newline,
  [11956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      sym__dedent,
      sym_name,
  [11964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(646), 1,
      sym__dottedName,
  [11974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      sym__dedent,
      sym_name,
  [11982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 2,
      sym__dedent,
      sym__array_prefix,
  [11990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      sym__dedent,
      sym_name,
  [11998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__array_prefix,
    STATE(402), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      sym__dedent,
      sym_name,
  [12016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__array_prefix,
    STATE(401), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(684), 1,
      sym__dottedName,
  [12036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(391), 1,
      aux_sym_m_inversion_repeat1,
  [12046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__array_prefix,
    STATE(388), 1,
      aux_sym_m_inversion_repeat1,
  [12056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_multiplicateur,
    ACTIONS(1291), 1,
      anon_sym_tranches,
  [12066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym__newline,
  [12073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      sym__newline,
  [12080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__dedent,
  [12087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym__dedent,
  [12094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_COLON,
  [12101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_COLON,
  [12108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_COLON,
  [12115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym__dedent,
  [12122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      aux_sym__variation_si_token2,
  [12129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym__dedent,
  [12136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym__dedent,
  [12143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      sym__newline,
  [12150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      sym__dedent,
  [12157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_COLON,
  [12164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_COLON,
  [12171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      aux_sym_m_une_possibilitu00e9_token3,
  [12178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_COLON,
  [12185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym__newline,
  [12192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym__newline,
  [12199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_COLON,
  [12206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__dedent,
  [12213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_COLON,
  [12220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_COLON,
  [12227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym__dedent,
  [12234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_COLON,
  [12241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym__dedent,
  [12248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_COLON,
  [12255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym__newline,
  [12262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym__newline,
  [12269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym__dedent,
  [12276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__dedent,
  [12283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__dedent,
  [12290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_tranches,
  [12297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_COLON,
  [12304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__dedent,
  [12311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym__dedent,
  [12318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_COLON,
  [12325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym__dedent,
  [12332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      sym__dedent,
  [12339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      sym__newline,
  [12346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_COLON,
  [12353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym__dedent,
  [12360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym__dedent,
  [12367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym__dedent,
  [12374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym__dedent,
  [12381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_COLON,
  [12388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym__dedent,
  [12395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym__dedent,
  [12402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym__dedent,
  [12409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym__dedent,
  [12416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      sym__dedent,
  [12423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym__dedent,
  [12430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym__dedent,
  [12437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      sym__dedent,
  [12444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      sym__dedent,
  [12451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      sym__dedent,
  [12458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      sym__dedent,
  [12465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym__dedent,
  [12472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym__dedent,
  [12479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_COLON,
  [12486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON,
  [12493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_COLON,
  [12500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_COLON,
  [12507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym__dedent,
  [12514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_COLON,
  [12521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym__dedent,
  [12528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym__dedent,
  [12535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym__dedent,
  [12542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym__dedent,
  [12549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__dedent,
  [12556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_COLON,
  [12563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym__newline,
  [12570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym__newline,
  [12577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym__newline,
  [12584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym__dedent,
  [12591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_COLON,
  [12598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym_name,
  [12605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      sym__dedent,
  [12612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym__dedent,
  [12619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      sym__dedent,
  [12626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_COLON,
  [12633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      sym__dedent,
  [12640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_COLON,
  [12647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      sym__dedent,
  [12654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym__dedent,
  [12661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_COLON,
  [12668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      sym__dedent,
  [12675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      sym__newline,
  [12682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym__dedent,
  [12689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_COLON,
  [12696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      sym__dedent,
  [12703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      sym__dedent,
  [12710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_COLON,
  [12717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_COLON,
  [12724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      sym__newline,
  [12731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym__newline,
  [12738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym__newline,
  [12745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      sym__dedent,
  [12752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      sym__dedent,
  [12759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym__newline,
  [12766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      sym_name,
  [12773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      sym__dedent,
  [12780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      sym__newline,
  [12787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      sym_tag,
  [12794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      sym__dedent,
  [12801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_assiette,
  [12808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      sym__newline,
  [12815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      sym__dedent,
  [12822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      sym__newline,
  [12829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      sym__dedent,
  [12836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      sym__newline,
  [12843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_COLON,
  [12850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      sym__dedent,
  [12857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_COLON,
  [12864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      sym__newline,
  [12871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      sym__dedent,
  [12878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      sym__dedent,
  [12885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_COLON,
  [12892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      sym__dedent,
  [12899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      sym__dedent,
  [12906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_COLON,
  [12913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym__dedent,
  [12920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      aux_sym__m_tranche_token1,
  [12927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym__m_tranche_token2,
  [12934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      sym__dedent,
  [12941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      sym__dedent,
  [12948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      sym__newline,
  [12955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      sym__dedent,
  [12962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [12969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym__dedent,
  [12976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      sym_paragraph,
  [12983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_oui,
  [12990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      sym__indent,
  [12997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      sym__indent,
  [13004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      sym__indent,
  [13011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      sym__indent,
  [13018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      sym__indent,
  [13025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      sym__indent,
  [13032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym__dedent,
  [13039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym__dedent,
  [13046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      sym__newline,
  [13053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      sym__dedent,
  [13060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_COLON,
  [13067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_COLON,
  [13074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_COLON,
  [13081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym__dedent,
  [13088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_COLON,
  [13095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_COLON,
  [13102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_COLON,
  [13109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_COLON,
  [13116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_COLON,
  [13123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_COLON,
  [13130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_COLON,
  [13137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_COLON,
  [13144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_COLON,
  [13151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_COLON,
  [13158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_COLON,
  [13165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_COLON,
  [13172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      anon_sym_COLON,
  [13179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_COLON,
  [13186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      sym__newline,
  [13193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__dedent,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      sym_name,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      anon_sym_RBRACK,
  [13214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_COLON,
  [13221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      ts_builtin_sym_end,
  [13228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_RBRACK,
  [13235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 244,
  [SMALL_STATE(5)] = 366,
  [SMALL_STATE(6)] = 488,
  [SMALL_STATE(7)] = 589,
  [SMALL_STATE(8)] = 684,
  [SMALL_STATE(9)] = 779,
  [SMALL_STATE(10)] = 874,
  [SMALL_STATE(11)] = 969,
  [SMALL_STATE(12)] = 1064,
  [SMALL_STATE(13)] = 1143,
  [SMALL_STATE(14)] = 1222,
  [SMALL_STATE(15)] = 1301,
  [SMALL_STATE(16)] = 1362,
  [SMALL_STATE(17)] = 1423,
  [SMALL_STATE(18)] = 1484,
  [SMALL_STATE(19)] = 1545,
  [SMALL_STATE(20)] = 1603,
  [SMALL_STATE(21)] = 1653,
  [SMALL_STATE(22)] = 1703,
  [SMALL_STATE(23)] = 1761,
  [SMALL_STATE(24)] = 1819,
  [SMALL_STATE(25)] = 1877,
  [SMALL_STATE(26)] = 1935,
  [SMALL_STATE(27)] = 1993,
  [SMALL_STATE(28)] = 2051,
  [SMALL_STATE(29)] = 2101,
  [SMALL_STATE(30)] = 2151,
  [SMALL_STATE(31)] = 2209,
  [SMALL_STATE(32)] = 2267,
  [SMALL_STATE(33)] = 2325,
  [SMALL_STATE(34)] = 2383,
  [SMALL_STATE(35)] = 2441,
  [SMALL_STATE(36)] = 2491,
  [SMALL_STATE(37)] = 2549,
  [SMALL_STATE(38)] = 2607,
  [SMALL_STATE(39)] = 2665,
  [SMALL_STATE(40)] = 2715,
  [SMALL_STATE(41)] = 2773,
  [SMALL_STATE(42)] = 2805,
  [SMALL_STATE(43)] = 2836,
  [SMALL_STATE(44)] = 2867,
  [SMALL_STATE(45)] = 2894,
  [SMALL_STATE(46)] = 2925,
  [SMALL_STATE(47)] = 2956,
  [SMALL_STATE(48)] = 2987,
  [SMALL_STATE(49)] = 3033,
  [SMALL_STATE(50)] = 3079,
  [SMALL_STATE(51)] = 3125,
  [SMALL_STATE(52)] = 3171,
  [SMALL_STATE(53)] = 3217,
  [SMALL_STATE(54)] = 3263,
  [SMALL_STATE(55)] = 3309,
  [SMALL_STATE(56)] = 3355,
  [SMALL_STATE(57)] = 3401,
  [SMALL_STATE(58)] = 3445,
  [SMALL_STATE(59)] = 3491,
  [SMALL_STATE(60)] = 3537,
  [SMALL_STATE(61)] = 3583,
  [SMALL_STATE(62)] = 3629,
  [SMALL_STATE(63)] = 3675,
  [SMALL_STATE(64)] = 3721,
  [SMALL_STATE(65)] = 3767,
  [SMALL_STATE(66)] = 3811,
  [SMALL_STATE(67)] = 3857,
  [SMALL_STATE(68)] = 3903,
  [SMALL_STATE(69)] = 3947,
  [SMALL_STATE(70)] = 3993,
  [SMALL_STATE(71)] = 4039,
  [SMALL_STATE(72)] = 4087,
  [SMALL_STATE(73)] = 4133,
  [SMALL_STATE(74)] = 4179,
  [SMALL_STATE(75)] = 4225,
  [SMALL_STATE(76)] = 4271,
  [SMALL_STATE(77)] = 4317,
  [SMALL_STATE(78)] = 4365,
  [SMALL_STATE(79)] = 4411,
  [SMALL_STATE(80)] = 4459,
  [SMALL_STATE(81)] = 4485,
  [SMALL_STATE(82)] = 4531,
  [SMALL_STATE(83)] = 4577,
  [SMALL_STATE(84)] = 4623,
  [SMALL_STATE(85)] = 4669,
  [SMALL_STATE(86)] = 4715,
  [SMALL_STATE(87)] = 4741,
  [SMALL_STATE(88)] = 4787,
  [SMALL_STATE(89)] = 4813,
  [SMALL_STATE(90)] = 4859,
  [SMALL_STATE(91)] = 4905,
  [SMALL_STATE(92)] = 4931,
  [SMALL_STATE(93)] = 4977,
  [SMALL_STATE(94)] = 5002,
  [SMALL_STATE(95)] = 5027,
  [SMALL_STATE(96)] = 5052,
  [SMALL_STATE(97)] = 5077,
  [SMALL_STATE(98)] = 5102,
  [SMALL_STATE(99)] = 5127,
  [SMALL_STATE(100)] = 5152,
  [SMALL_STATE(101)] = 5177,
  [SMALL_STATE(102)] = 5202,
  [SMALL_STATE(103)] = 5227,
  [SMALL_STATE(104)] = 5252,
  [SMALL_STATE(105)] = 5277,
  [SMALL_STATE(106)] = 5302,
  [SMALL_STATE(107)] = 5327,
  [SMALL_STATE(108)] = 5352,
  [SMALL_STATE(109)] = 5377,
  [SMALL_STATE(110)] = 5402,
  [SMALL_STATE(111)] = 5427,
  [SMALL_STATE(112)] = 5452,
  [SMALL_STATE(113)] = 5477,
  [SMALL_STATE(114)] = 5502,
  [SMALL_STATE(115)] = 5527,
  [SMALL_STATE(116)] = 5552,
  [SMALL_STATE(117)] = 5577,
  [SMALL_STATE(118)] = 5602,
  [SMALL_STATE(119)] = 5627,
  [SMALL_STATE(120)] = 5652,
  [SMALL_STATE(121)] = 5677,
  [SMALL_STATE(122)] = 5702,
  [SMALL_STATE(123)] = 5727,
  [SMALL_STATE(124)] = 5752,
  [SMALL_STATE(125)] = 5777,
  [SMALL_STATE(126)] = 5802,
  [SMALL_STATE(127)] = 5827,
  [SMALL_STATE(128)] = 5852,
  [SMALL_STATE(129)] = 5877,
  [SMALL_STATE(130)] = 5902,
  [SMALL_STATE(131)] = 5927,
  [SMALL_STATE(132)] = 5952,
  [SMALL_STATE(133)] = 5977,
  [SMALL_STATE(134)] = 6002,
  [SMALL_STATE(135)] = 6027,
  [SMALL_STATE(136)] = 6052,
  [SMALL_STATE(137)] = 6077,
  [SMALL_STATE(138)] = 6102,
  [SMALL_STATE(139)] = 6127,
  [SMALL_STATE(140)] = 6152,
  [SMALL_STATE(141)] = 6177,
  [SMALL_STATE(142)] = 6202,
  [SMALL_STATE(143)] = 6227,
  [SMALL_STATE(144)] = 6252,
  [SMALL_STATE(145)] = 6277,
  [SMALL_STATE(146)] = 6302,
  [SMALL_STATE(147)] = 6327,
  [SMALL_STATE(148)] = 6359,
  [SMALL_STATE(149)] = 6383,
  [SMALL_STATE(150)] = 6415,
  [SMALL_STATE(151)] = 6441,
  [SMALL_STATE(152)] = 6465,
  [SMALL_STATE(153)] = 6489,
  [SMALL_STATE(154)] = 6515,
  [SMALL_STATE(155)] = 6539,
  [SMALL_STATE(156)] = 6571,
  [SMALL_STATE(157)] = 6597,
  [SMALL_STATE(158)] = 6620,
  [SMALL_STATE(159)] = 6643,
  [SMALL_STATE(160)] = 6664,
  [SMALL_STATE(161)] = 6683,
  [SMALL_STATE(162)] = 6706,
  [SMALL_STATE(163)] = 6727,
  [SMALL_STATE(164)] = 6750,
  [SMALL_STATE(165)] = 6773,
  [SMALL_STATE(166)] = 6795,
  [SMALL_STATE(167)] = 6813,
  [SMALL_STATE(168)] = 6835,
  [SMALL_STATE(169)] = 6859,
  [SMALL_STATE(170)] = 6883,
  [SMALL_STATE(171)] = 6907,
  [SMALL_STATE(172)] = 6931,
  [SMALL_STATE(173)] = 6955,
  [SMALL_STATE(174)] = 6979,
  [SMALL_STATE(175)] = 6999,
  [SMALL_STATE(176)] = 7020,
  [SMALL_STATE(177)] = 7041,
  [SMALL_STATE(178)] = 7060,
  [SMALL_STATE(179)] = 7079,
  [SMALL_STATE(180)] = 7100,
  [SMALL_STATE(181)] = 7121,
  [SMALL_STATE(182)] = 7142,
  [SMALL_STATE(183)] = 7163,
  [SMALL_STATE(184)] = 7180,
  [SMALL_STATE(185)] = 7201,
  [SMALL_STATE(186)] = 7222,
  [SMALL_STATE(187)] = 7239,
  [SMALL_STATE(188)] = 7260,
  [SMALL_STATE(189)] = 7281,
  [SMALL_STATE(190)] = 7298,
  [SMALL_STATE(191)] = 7319,
  [SMALL_STATE(192)] = 7338,
  [SMALL_STATE(193)] = 7359,
  [SMALL_STATE(194)] = 7380,
  [SMALL_STATE(195)] = 7401,
  [SMALL_STATE(196)] = 7422,
  [SMALL_STATE(197)] = 7439,
  [SMALL_STATE(198)] = 7458,
  [SMALL_STATE(199)] = 7479,
  [SMALL_STATE(200)] = 7500,
  [SMALL_STATE(201)] = 7519,
  [SMALL_STATE(202)] = 7538,
  [SMALL_STATE(203)] = 7559,
  [SMALL_STATE(204)] = 7585,
  [SMALL_STATE(205)] = 7601,
  [SMALL_STATE(206)] = 7627,
  [SMALL_STATE(207)] = 7653,
  [SMALL_STATE(208)] = 7679,
  [SMALL_STATE(209)] = 7697,
  [SMALL_STATE(210)] = 7723,
  [SMALL_STATE(211)] = 7749,
  [SMALL_STATE(212)] = 7775,
  [SMALL_STATE(213)] = 7801,
  [SMALL_STATE(214)] = 7827,
  [SMALL_STATE(215)] = 7845,
  [SMALL_STATE(216)] = 7871,
  [SMALL_STATE(217)] = 7897,
  [SMALL_STATE(218)] = 7913,
  [SMALL_STATE(219)] = 7939,
  [SMALL_STATE(220)] = 7954,
  [SMALL_STATE(221)] = 7969,
  [SMALL_STATE(222)] = 7988,
  [SMALL_STATE(223)] = 8003,
  [SMALL_STATE(224)] = 8020,
  [SMALL_STATE(225)] = 8037,
  [SMALL_STATE(226)] = 8054,
  [SMALL_STATE(227)] = 8075,
  [SMALL_STATE(228)] = 8090,
  [SMALL_STATE(229)] = 8109,
  [SMALL_STATE(230)] = 8124,
  [SMALL_STATE(231)] = 8141,
  [SMALL_STATE(232)] = 8158,
  [SMALL_STATE(233)] = 8179,
  [SMALL_STATE(234)] = 8194,
  [SMALL_STATE(235)] = 8209,
  [SMALL_STATE(236)] = 8224,
  [SMALL_STATE(237)] = 8239,
  [SMALL_STATE(238)] = 8256,
  [SMALL_STATE(239)] = 8271,
  [SMALL_STATE(240)] = 8288,
  [SMALL_STATE(241)] = 8305,
  [SMALL_STATE(242)] = 8320,
  [SMALL_STATE(243)] = 8341,
  [SMALL_STATE(244)] = 8356,
  [SMALL_STATE(245)] = 8373,
  [SMALL_STATE(246)] = 8388,
  [SMALL_STATE(247)] = 8412,
  [SMALL_STATE(248)] = 8436,
  [SMALL_STATE(249)] = 8460,
  [SMALL_STATE(250)] = 8475,
  [SMALL_STATE(251)] = 8490,
  [SMALL_STATE(252)] = 8505,
  [SMALL_STATE(253)] = 8518,
  [SMALL_STATE(254)] = 8533,
  [SMALL_STATE(255)] = 8548,
  [SMALL_STATE(256)] = 8563,
  [SMALL_STATE(257)] = 8580,
  [SMALL_STATE(258)] = 8595,
  [SMALL_STATE(259)] = 8610,
  [SMALL_STATE(260)] = 8625,
  [SMALL_STATE(261)] = 8640,
  [SMALL_STATE(262)] = 8655,
  [SMALL_STATE(263)] = 8670,
  [SMALL_STATE(264)] = 8685,
  [SMALL_STATE(265)] = 8700,
  [SMALL_STATE(266)] = 8715,
  [SMALL_STATE(267)] = 8730,
  [SMALL_STATE(268)] = 8745,
  [SMALL_STATE(269)] = 8758,
  [SMALL_STATE(270)] = 8773,
  [SMALL_STATE(271)] = 8788,
  [SMALL_STATE(272)] = 8801,
  [SMALL_STATE(273)] = 8816,
  [SMALL_STATE(274)] = 8831,
  [SMALL_STATE(275)] = 8856,
  [SMALL_STATE(276)] = 8871,
  [SMALL_STATE(277)] = 8884,
  [SMALL_STATE(278)] = 8899,
  [SMALL_STATE(279)] = 8914,
  [SMALL_STATE(280)] = 8929,
  [SMALL_STATE(281)] = 8944,
  [SMALL_STATE(282)] = 8959,
  [SMALL_STATE(283)] = 8974,
  [SMALL_STATE(284)] = 8989,
  [SMALL_STATE(285)] = 9004,
  [SMALL_STATE(286)] = 9019,
  [SMALL_STATE(287)] = 9034,
  [SMALL_STATE(288)] = 9049,
  [SMALL_STATE(289)] = 9064,
  [SMALL_STATE(290)] = 9079,
  [SMALL_STATE(291)] = 9092,
  [SMALL_STATE(292)] = 9107,
  [SMALL_STATE(293)] = 9122,
  [SMALL_STATE(294)] = 9137,
  [SMALL_STATE(295)] = 9154,
  [SMALL_STATE(296)] = 9171,
  [SMALL_STATE(297)] = 9186,
  [SMALL_STATE(298)] = 9201,
  [SMALL_STATE(299)] = 9216,
  [SMALL_STATE(300)] = 9231,
  [SMALL_STATE(301)] = 9248,
  [SMALL_STATE(302)] = 9261,
  [SMALL_STATE(303)] = 9276,
  [SMALL_STATE(304)] = 9291,
  [SMALL_STATE(305)] = 9306,
  [SMALL_STATE(306)] = 9321,
  [SMALL_STATE(307)] = 9336,
  [SMALL_STATE(308)] = 9351,
  [SMALL_STATE(309)] = 9366,
  [SMALL_STATE(310)] = 9381,
  [SMALL_STATE(311)] = 9396,
  [SMALL_STATE(312)] = 9411,
  [SMALL_STATE(313)] = 9426,
  [SMALL_STATE(314)] = 9441,
  [SMALL_STATE(315)] = 9461,
  [SMALL_STATE(316)] = 9475,
  [SMALL_STATE(317)] = 9489,
  [SMALL_STATE(318)] = 9511,
  [SMALL_STATE(319)] = 9523,
  [SMALL_STATE(320)] = 9537,
  [SMALL_STATE(321)] = 9551,
  [SMALL_STATE(322)] = 9571,
  [SMALL_STATE(323)] = 9591,
  [SMALL_STATE(324)] = 9611,
  [SMALL_STATE(325)] = 9622,
  [SMALL_STATE(326)] = 9641,
  [SMALL_STATE(327)] = 9660,
  [SMALL_STATE(328)] = 9671,
  [SMALL_STATE(329)] = 9690,
  [SMALL_STATE(330)] = 9709,
  [SMALL_STATE(331)] = 9726,
  [SMALL_STATE(332)] = 9745,
  [SMALL_STATE(333)] = 9756,
  [SMALL_STATE(334)] = 9775,
  [SMALL_STATE(335)] = 9794,
  [SMALL_STATE(336)] = 9813,
  [SMALL_STATE(337)] = 9832,
  [SMALL_STATE(338)] = 9851,
  [SMALL_STATE(339)] = 9870,
  [SMALL_STATE(340)] = 9889,
  [SMALL_STATE(341)] = 9908,
  [SMALL_STATE(342)] = 9927,
  [SMALL_STATE(343)] = 9946,
  [SMALL_STATE(344)] = 9965,
  [SMALL_STATE(345)] = 9984,
  [SMALL_STATE(346)] = 10003,
  [SMALL_STATE(347)] = 10020,
  [SMALL_STATE(348)] = 10039,
  [SMALL_STATE(349)] = 10058,
  [SMALL_STATE(350)] = 10069,
  [SMALL_STATE(351)] = 10088,
  [SMALL_STATE(352)] = 10098,
  [SMALL_STATE(353)] = 10110,
  [SMALL_STATE(354)] = 10120,
  [SMALL_STATE(355)] = 10136,
  [SMALL_STATE(356)] = 10152,
  [SMALL_STATE(357)] = 10166,
  [SMALL_STATE(358)] = 10182,
  [SMALL_STATE(359)] = 10198,
  [SMALL_STATE(360)] = 10214,
  [SMALL_STATE(361)] = 10226,
  [SMALL_STATE(362)] = 10242,
  [SMALL_STATE(363)] = 10258,
  [SMALL_STATE(364)] = 10272,
  [SMALL_STATE(365)] = 10286,
  [SMALL_STATE(366)] = 10300,
  [SMALL_STATE(367)] = 10316,
  [SMALL_STATE(368)] = 10326,
  [SMALL_STATE(369)] = 10342,
  [SMALL_STATE(370)] = 10352,
  [SMALL_STATE(371)] = 10368,
  [SMALL_STATE(372)] = 10382,
  [SMALL_STATE(373)] = 10398,
  [SMALL_STATE(374)] = 10412,
  [SMALL_STATE(375)] = 10421,
  [SMALL_STATE(376)] = 10434,
  [SMALL_STATE(377)] = 10447,
  [SMALL_STATE(378)] = 10460,
  [SMALL_STATE(379)] = 10473,
  [SMALL_STATE(380)] = 10482,
  [SMALL_STATE(381)] = 10491,
  [SMALL_STATE(382)] = 10500,
  [SMALL_STATE(383)] = 10509,
  [SMALL_STATE(384)] = 10518,
  [SMALL_STATE(385)] = 10527,
  [SMALL_STATE(386)] = 10540,
  [SMALL_STATE(387)] = 10549,
  [SMALL_STATE(388)] = 10558,
  [SMALL_STATE(389)] = 10571,
  [SMALL_STATE(390)] = 10584,
  [SMALL_STATE(391)] = 10597,
  [SMALL_STATE(392)] = 10610,
  [SMALL_STATE(393)] = 10619,
  [SMALL_STATE(394)] = 10632,
  [SMALL_STATE(395)] = 10645,
  [SMALL_STATE(396)] = 10654,
  [SMALL_STATE(397)] = 10663,
  [SMALL_STATE(398)] = 10672,
  [SMALL_STATE(399)] = 10685,
  [SMALL_STATE(400)] = 10698,
  [SMALL_STATE(401)] = 10707,
  [SMALL_STATE(402)] = 10720,
  [SMALL_STATE(403)] = 10733,
  [SMALL_STATE(404)] = 10742,
  [SMALL_STATE(405)] = 10751,
  [SMALL_STATE(406)] = 10764,
  [SMALL_STATE(407)] = 10777,
  [SMALL_STATE(408)] = 10790,
  [SMALL_STATE(409)] = 10803,
  [SMALL_STATE(410)] = 10816,
  [SMALL_STATE(411)] = 10829,
  [SMALL_STATE(412)] = 10842,
  [SMALL_STATE(413)] = 10851,
  [SMALL_STATE(414)] = 10864,
  [SMALL_STATE(415)] = 10873,
  [SMALL_STATE(416)] = 10886,
  [SMALL_STATE(417)] = 10895,
  [SMALL_STATE(418)] = 10904,
  [SMALL_STATE(419)] = 10917,
  [SMALL_STATE(420)] = 10930,
  [SMALL_STATE(421)] = 10943,
  [SMALL_STATE(422)] = 10952,
  [SMALL_STATE(423)] = 10961,
  [SMALL_STATE(424)] = 10974,
  [SMALL_STATE(425)] = 10983,
  [SMALL_STATE(426)] = 10992,
  [SMALL_STATE(427)] = 11005,
  [SMALL_STATE(428)] = 11018,
  [SMALL_STATE(429)] = 11027,
  [SMALL_STATE(430)] = 11040,
  [SMALL_STATE(431)] = 11053,
  [SMALL_STATE(432)] = 11066,
  [SMALL_STATE(433)] = 11075,
  [SMALL_STATE(434)] = 11088,
  [SMALL_STATE(435)] = 11097,
  [SMALL_STATE(436)] = 11110,
  [SMALL_STATE(437)] = 11123,
  [SMALL_STATE(438)] = 11136,
  [SMALL_STATE(439)] = 11149,
  [SMALL_STATE(440)] = 11162,
  [SMALL_STATE(441)] = 11175,
  [SMALL_STATE(442)] = 11188,
  [SMALL_STATE(443)] = 11201,
  [SMALL_STATE(444)] = 11214,
  [SMALL_STATE(445)] = 11227,
  [SMALL_STATE(446)] = 11240,
  [SMALL_STATE(447)] = 11253,
  [SMALL_STATE(448)] = 11266,
  [SMALL_STATE(449)] = 11275,
  [SMALL_STATE(450)] = 11288,
  [SMALL_STATE(451)] = 11301,
  [SMALL_STATE(452)] = 11310,
  [SMALL_STATE(453)] = 11323,
  [SMALL_STATE(454)] = 11332,
  [SMALL_STATE(455)] = 11345,
  [SMALL_STATE(456)] = 11358,
  [SMALL_STATE(457)] = 11371,
  [SMALL_STATE(458)] = 11384,
  [SMALL_STATE(459)] = 11397,
  [SMALL_STATE(460)] = 11410,
  [SMALL_STATE(461)] = 11423,
  [SMALL_STATE(462)] = 11436,
  [SMALL_STATE(463)] = 11449,
  [SMALL_STATE(464)] = 11462,
  [SMALL_STATE(465)] = 11475,
  [SMALL_STATE(466)] = 11488,
  [SMALL_STATE(467)] = 11498,
  [SMALL_STATE(468)] = 11506,
  [SMALL_STATE(469)] = 11516,
  [SMALL_STATE(470)] = 11526,
  [SMALL_STATE(471)] = 11536,
  [SMALL_STATE(472)] = 11544,
  [SMALL_STATE(473)] = 11554,
  [SMALL_STATE(474)] = 11564,
  [SMALL_STATE(475)] = 11574,
  [SMALL_STATE(476)] = 11582,
  [SMALL_STATE(477)] = 11592,
  [SMALL_STATE(478)] = 11602,
  [SMALL_STATE(479)] = 11612,
  [SMALL_STATE(480)] = 11622,
  [SMALL_STATE(481)] = 11632,
  [SMALL_STATE(482)] = 11642,
  [SMALL_STATE(483)] = 11652,
  [SMALL_STATE(484)] = 11662,
  [SMALL_STATE(485)] = 11672,
  [SMALL_STATE(486)] = 11680,
  [SMALL_STATE(487)] = 11690,
  [SMALL_STATE(488)] = 11700,
  [SMALL_STATE(489)] = 11710,
  [SMALL_STATE(490)] = 11720,
  [SMALL_STATE(491)] = 11730,
  [SMALL_STATE(492)] = 11740,
  [SMALL_STATE(493)] = 11750,
  [SMALL_STATE(494)] = 11760,
  [SMALL_STATE(495)] = 11770,
  [SMALL_STATE(496)] = 11780,
  [SMALL_STATE(497)] = 11788,
  [SMALL_STATE(498)] = 11798,
  [SMALL_STATE(499)] = 11808,
  [SMALL_STATE(500)] = 11818,
  [SMALL_STATE(501)] = 11828,
  [SMALL_STATE(502)] = 11838,
  [SMALL_STATE(503)] = 11846,
  [SMALL_STATE(504)] = 11856,
  [SMALL_STATE(505)] = 11866,
  [SMALL_STATE(506)] = 11876,
  [SMALL_STATE(507)] = 11886,
  [SMALL_STATE(508)] = 11896,
  [SMALL_STATE(509)] = 11906,
  [SMALL_STATE(510)] = 11916,
  [SMALL_STATE(511)] = 11926,
  [SMALL_STATE(512)] = 11936,
  [SMALL_STATE(513)] = 11946,
  [SMALL_STATE(514)] = 11956,
  [SMALL_STATE(515)] = 11964,
  [SMALL_STATE(516)] = 11974,
  [SMALL_STATE(517)] = 11982,
  [SMALL_STATE(518)] = 11990,
  [SMALL_STATE(519)] = 11998,
  [SMALL_STATE(520)] = 12008,
  [SMALL_STATE(521)] = 12016,
  [SMALL_STATE(522)] = 12026,
  [SMALL_STATE(523)] = 12036,
  [SMALL_STATE(524)] = 12046,
  [SMALL_STATE(525)] = 12056,
  [SMALL_STATE(526)] = 12066,
  [SMALL_STATE(527)] = 12073,
  [SMALL_STATE(528)] = 12080,
  [SMALL_STATE(529)] = 12087,
  [SMALL_STATE(530)] = 12094,
  [SMALL_STATE(531)] = 12101,
  [SMALL_STATE(532)] = 12108,
  [SMALL_STATE(533)] = 12115,
  [SMALL_STATE(534)] = 12122,
  [SMALL_STATE(535)] = 12129,
  [SMALL_STATE(536)] = 12136,
  [SMALL_STATE(537)] = 12143,
  [SMALL_STATE(538)] = 12150,
  [SMALL_STATE(539)] = 12157,
  [SMALL_STATE(540)] = 12164,
  [SMALL_STATE(541)] = 12171,
  [SMALL_STATE(542)] = 12178,
  [SMALL_STATE(543)] = 12185,
  [SMALL_STATE(544)] = 12192,
  [SMALL_STATE(545)] = 12199,
  [SMALL_STATE(546)] = 12206,
  [SMALL_STATE(547)] = 12213,
  [SMALL_STATE(548)] = 12220,
  [SMALL_STATE(549)] = 12227,
  [SMALL_STATE(550)] = 12234,
  [SMALL_STATE(551)] = 12241,
  [SMALL_STATE(552)] = 12248,
  [SMALL_STATE(553)] = 12255,
  [SMALL_STATE(554)] = 12262,
  [SMALL_STATE(555)] = 12269,
  [SMALL_STATE(556)] = 12276,
  [SMALL_STATE(557)] = 12283,
  [SMALL_STATE(558)] = 12290,
  [SMALL_STATE(559)] = 12297,
  [SMALL_STATE(560)] = 12304,
  [SMALL_STATE(561)] = 12311,
  [SMALL_STATE(562)] = 12318,
  [SMALL_STATE(563)] = 12325,
  [SMALL_STATE(564)] = 12332,
  [SMALL_STATE(565)] = 12339,
  [SMALL_STATE(566)] = 12346,
  [SMALL_STATE(567)] = 12353,
  [SMALL_STATE(568)] = 12360,
  [SMALL_STATE(569)] = 12367,
  [SMALL_STATE(570)] = 12374,
  [SMALL_STATE(571)] = 12381,
  [SMALL_STATE(572)] = 12388,
  [SMALL_STATE(573)] = 12395,
  [SMALL_STATE(574)] = 12402,
  [SMALL_STATE(575)] = 12409,
  [SMALL_STATE(576)] = 12416,
  [SMALL_STATE(577)] = 12423,
  [SMALL_STATE(578)] = 12430,
  [SMALL_STATE(579)] = 12437,
  [SMALL_STATE(580)] = 12444,
  [SMALL_STATE(581)] = 12451,
  [SMALL_STATE(582)] = 12458,
  [SMALL_STATE(583)] = 12465,
  [SMALL_STATE(584)] = 12472,
  [SMALL_STATE(585)] = 12479,
  [SMALL_STATE(586)] = 12486,
  [SMALL_STATE(587)] = 12493,
  [SMALL_STATE(588)] = 12500,
  [SMALL_STATE(589)] = 12507,
  [SMALL_STATE(590)] = 12514,
  [SMALL_STATE(591)] = 12521,
  [SMALL_STATE(592)] = 12528,
  [SMALL_STATE(593)] = 12535,
  [SMALL_STATE(594)] = 12542,
  [SMALL_STATE(595)] = 12549,
  [SMALL_STATE(596)] = 12556,
  [SMALL_STATE(597)] = 12563,
  [SMALL_STATE(598)] = 12570,
  [SMALL_STATE(599)] = 12577,
  [SMALL_STATE(600)] = 12584,
  [SMALL_STATE(601)] = 12591,
  [SMALL_STATE(602)] = 12598,
  [SMALL_STATE(603)] = 12605,
  [SMALL_STATE(604)] = 12612,
  [SMALL_STATE(605)] = 12619,
  [SMALL_STATE(606)] = 12626,
  [SMALL_STATE(607)] = 12633,
  [SMALL_STATE(608)] = 12640,
  [SMALL_STATE(609)] = 12647,
  [SMALL_STATE(610)] = 12654,
  [SMALL_STATE(611)] = 12661,
  [SMALL_STATE(612)] = 12668,
  [SMALL_STATE(613)] = 12675,
  [SMALL_STATE(614)] = 12682,
  [SMALL_STATE(615)] = 12689,
  [SMALL_STATE(616)] = 12696,
  [SMALL_STATE(617)] = 12703,
  [SMALL_STATE(618)] = 12710,
  [SMALL_STATE(619)] = 12717,
  [SMALL_STATE(620)] = 12724,
  [SMALL_STATE(621)] = 12731,
  [SMALL_STATE(622)] = 12738,
  [SMALL_STATE(623)] = 12745,
  [SMALL_STATE(624)] = 12752,
  [SMALL_STATE(625)] = 12759,
  [SMALL_STATE(626)] = 12766,
  [SMALL_STATE(627)] = 12773,
  [SMALL_STATE(628)] = 12780,
  [SMALL_STATE(629)] = 12787,
  [SMALL_STATE(630)] = 12794,
  [SMALL_STATE(631)] = 12801,
  [SMALL_STATE(632)] = 12808,
  [SMALL_STATE(633)] = 12815,
  [SMALL_STATE(634)] = 12822,
  [SMALL_STATE(635)] = 12829,
  [SMALL_STATE(636)] = 12836,
  [SMALL_STATE(637)] = 12843,
  [SMALL_STATE(638)] = 12850,
  [SMALL_STATE(639)] = 12857,
  [SMALL_STATE(640)] = 12864,
  [SMALL_STATE(641)] = 12871,
  [SMALL_STATE(642)] = 12878,
  [SMALL_STATE(643)] = 12885,
  [SMALL_STATE(644)] = 12892,
  [SMALL_STATE(645)] = 12899,
  [SMALL_STATE(646)] = 12906,
  [SMALL_STATE(647)] = 12913,
  [SMALL_STATE(648)] = 12920,
  [SMALL_STATE(649)] = 12927,
  [SMALL_STATE(650)] = 12934,
  [SMALL_STATE(651)] = 12941,
  [SMALL_STATE(652)] = 12948,
  [SMALL_STATE(653)] = 12955,
  [SMALL_STATE(654)] = 12962,
  [SMALL_STATE(655)] = 12969,
  [SMALL_STATE(656)] = 12976,
  [SMALL_STATE(657)] = 12983,
  [SMALL_STATE(658)] = 12990,
  [SMALL_STATE(659)] = 12997,
  [SMALL_STATE(660)] = 13004,
  [SMALL_STATE(661)] = 13011,
  [SMALL_STATE(662)] = 13018,
  [SMALL_STATE(663)] = 13025,
  [SMALL_STATE(664)] = 13032,
  [SMALL_STATE(665)] = 13039,
  [SMALL_STATE(666)] = 13046,
  [SMALL_STATE(667)] = 13053,
  [SMALL_STATE(668)] = 13060,
  [SMALL_STATE(669)] = 13067,
  [SMALL_STATE(670)] = 13074,
  [SMALL_STATE(671)] = 13081,
  [SMALL_STATE(672)] = 13088,
  [SMALL_STATE(673)] = 13095,
  [SMALL_STATE(674)] = 13102,
  [SMALL_STATE(675)] = 13109,
  [SMALL_STATE(676)] = 13116,
  [SMALL_STATE(677)] = 13123,
  [SMALL_STATE(678)] = 13130,
  [SMALL_STATE(679)] = 13137,
  [SMALL_STATE(680)] = 13144,
  [SMALL_STATE(681)] = 13151,
  [SMALL_STATE(682)] = 13158,
  [SMALL_STATE(683)] = 13165,
  [SMALL_STATE(684)] = 13172,
  [SMALL_STATE(685)] = 13179,
  [SMALL_STATE(686)] = 13186,
  [SMALL_STATE(687)] = 13193,
  [SMALL_STATE(688)] = 13200,
  [SMALL_STATE(689)] = 13207,
  [SMALL_STATE(690)] = 13214,
  [SMALL_STATE(691)] = 13221,
  [SMALL_STATE(692)] = 13228,
  [SMALL_STATE(693)] = 13235,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(683),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(682),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(681),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(680),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(679),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(678),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(677),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(676),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(675),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(674),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(673),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(672),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(670),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(669),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(668),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(248),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(682),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(681),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(680),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(679),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(678),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(677),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(676),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(675),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(674),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(429),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18), SHIFT_REPEAT(333),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(7),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 43),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 43),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 26),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 26),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 30),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 30),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 33),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 33),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formule, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 12),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 12),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 8),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 8),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 8),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formule, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 25),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 25),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 42),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 42),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 11),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 11),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_avec, 5),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_avec, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 9),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 9),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 30),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 30),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 45),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 45),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 5),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 53),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 53),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 53),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 53),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 46),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 46),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 45),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 45),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 27),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 27),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 43),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 43),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(688),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(491),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 13),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(415),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 8),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 7),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(506),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(508),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(399),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(602),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(407),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(626),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(693),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(629),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(154),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(470),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(466),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 36),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 31),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 14),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 32),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 10, .production_id = 21),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 19),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 17),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 15),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 12),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 37),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 10),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 9),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(479),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 29),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 29), SHIFT_REPEAT(438),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(447),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(247),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(620),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 12, .production_id = 47),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 54),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(463),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 50),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 51),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_last_tranche, 3, .production_id = 44),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 40),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 38),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 35),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_sinon, 3),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_si, 6),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 15, .production_id = 57),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 56),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 55),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 52),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 49),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 48),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 41),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 39),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1593] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
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
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
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
