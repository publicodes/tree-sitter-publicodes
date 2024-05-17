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
#define STATE_COUNT 750
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
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
  [30] = 20,
  [31] = 20,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 51,
  [58] = 54,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 52,
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 66,
  [74] = 59,
  [75] = 72,
  [76] = 76,
  [77] = 53,
  [78] = 69,
  [79] = 55,
  [80] = 66,
  [81] = 67,
  [82] = 71,
  [83] = 76,
  [84] = 55,
  [85] = 85,
  [86] = 71,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 59,
  [92] = 66,
  [93] = 93,
  [94] = 94,
  [95] = 59,
  [96] = 71,
  [97] = 68,
  [98] = 70,
  [99] = 53,
  [100] = 52,
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
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 160,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 168,
  [179] = 164,
  [180] = 168,
  [181] = 164,
  [182] = 182,
  [183] = 183,
  [184] = 167,
  [185] = 167,
  [186] = 169,
  [187] = 169,
  [188] = 188,
  [189] = 177,
  [190] = 190,
  [191] = 162,
  [192] = 192,
  [193] = 166,
  [194] = 174,
  [195] = 172,
  [196] = 174,
  [197] = 171,
  [198] = 198,
  [199] = 175,
  [200] = 176,
  [201] = 201,
  [202] = 166,
  [203] = 176,
  [204] = 162,
  [205] = 170,
  [206] = 206,
  [207] = 175,
  [208] = 208,
  [209] = 171,
  [210] = 163,
  [211] = 211,
  [212] = 177,
  [213] = 172,
  [214] = 170,
  [215] = 163,
  [216] = 173,
  [217] = 217,
  [218] = 173,
  [219] = 219,
  [220] = 182,
  [221] = 182,
  [222] = 217,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 219,
  [227] = 223,
  [228] = 217,
  [229] = 223,
  [230] = 224,
  [231] = 219,
  [232] = 206,
  [233] = 201,
  [234] = 211,
  [235] = 183,
  [236] = 201,
  [237] = 206,
  [238] = 192,
  [239] = 239,
  [240] = 188,
  [241] = 208,
  [242] = 201,
  [243] = 192,
  [244] = 190,
  [245] = 211,
  [246] = 183,
  [247] = 247,
  [248] = 206,
  [249] = 188,
  [250] = 208,
  [251] = 198,
  [252] = 239,
  [253] = 239,
  [254] = 198,
  [255] = 255,
  [256] = 190,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 255,
  [263] = 263,
  [264] = 264,
  [265] = 257,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 266,
  [274] = 274,
  [275] = 263,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 268,
  [282] = 282,
  [283] = 283,
  [284] = 276,
  [285] = 285,
  [286] = 274,
  [287] = 263,
  [288] = 288,
  [289] = 280,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 294,
  [298] = 288,
  [299] = 269,
  [300] = 274,
  [301] = 280,
  [302] = 255,
  [303] = 263,
  [304] = 296,
  [305] = 268,
  [306] = 288,
  [307] = 269,
  [308] = 258,
  [309] = 296,
  [310] = 288,
  [311] = 296,
  [312] = 295,
  [313] = 278,
  [314] = 314,
  [315] = 315,
  [316] = 279,
  [317] = 283,
  [318] = 318,
  [319] = 319,
  [320] = 268,
  [321] = 285,
  [322] = 258,
  [323] = 269,
  [324] = 315,
  [325] = 257,
  [326] = 314,
  [327] = 291,
  [328] = 290,
  [329] = 274,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 331,
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
  [349] = 349,
  [350] = 121,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 158,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 114,
  [365] = 154,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 168,
  [377] = 121,
  [378] = 158,
  [379] = 169,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 167,
  [386] = 167,
  [387] = 168,
  [388] = 164,
  [389] = 164,
  [390] = 390,
  [391] = 391,
  [392] = 114,
  [393] = 154,
  [394] = 169,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 170,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 418,
  [420] = 417,
  [421] = 415,
  [422] = 398,
  [423] = 423,
  [424] = 424,
  [425] = 413,
  [426] = 410,
  [427] = 427,
  [428] = 428,
  [429] = 409,
  [430] = 430,
  [431] = 406,
  [432] = 411,
  [433] = 404,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 434,
  [438] = 411,
  [439] = 439,
  [440] = 411,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 407,
  [448] = 405,
  [449] = 401,
  [450] = 411,
  [451] = 451,
  [452] = 452,
  [453] = 415,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 174,
  [459] = 172,
  [460] = 460,
  [461] = 461,
  [462] = 171,
  [463] = 398,
  [464] = 177,
  [465] = 465,
  [466] = 398,
  [467] = 467,
  [468] = 468,
  [469] = 176,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 175,
  [474] = 474,
  [475] = 461,
  [476] = 476,
  [477] = 174,
  [478] = 172,
  [479] = 400,
  [480] = 171,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 177,
  [485] = 398,
  [486] = 170,
  [487] = 176,
  [488] = 175,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 182,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 494,
  [504] = 504,
  [505] = 505,
  [506] = 494,
  [507] = 182,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 154,
  [526] = 526,
  [527] = 114,
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
  [538] = 494,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 494,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 547,
  [550] = 158,
  [551] = 551,
  [552] = 121,
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
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
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
  [677] = 622,
  [678] = 621,
  [679] = 609,
  [680] = 606,
  [681] = 681,
  [682] = 658,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 621,
  [691] = 606,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 621,
  [697] = 606,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 672,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 669,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 702,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 658,
  [745] = 745,
  [746] = 699,
  [747] = 747,
  [748] = 745,
  [749] = 685,
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
  [7] = {.lex_state = 27, .external_lex_state = 3},
  [8] = {.lex_state = 27, .external_lex_state = 2},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 27, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 4},
  [14] = {.lex_state = 2, .external_lex_state = 4},
  [15] = {.lex_state = 2, .external_lex_state = 4},
  [16] = {.lex_state = 114, .external_lex_state = 5},
  [17] = {.lex_state = 114, .external_lex_state = 5},
  [18] = {.lex_state = 114, .external_lex_state = 5},
  [19] = {.lex_state = 114, .external_lex_state = 5},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 114, .external_lex_state = 3},
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 114, .external_lex_state = 3},
  [24] = {.lex_state = 114, .external_lex_state = 3},
  [25] = {.lex_state = 114, .external_lex_state = 3},
  [26] = {.lex_state = 114, .external_lex_state = 3},
  [27] = {.lex_state = 2, .external_lex_state = 4},
  [28] = {.lex_state = 114, .external_lex_state = 3},
  [29] = {.lex_state = 114, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 114, .external_lex_state = 3},
  [33] = {.lex_state = 114, .external_lex_state = 3},
  [34] = {.lex_state = 114, .external_lex_state = 3},
  [35] = {.lex_state = 114, .external_lex_state = 3},
  [36] = {.lex_state = 114, .external_lex_state = 3},
  [37] = {.lex_state = 114, .external_lex_state = 3},
  [38] = {.lex_state = 2, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 114, .external_lex_state = 3},
  [41] = {.lex_state = 114, .external_lex_state = 3},
  [42] = {.lex_state = 114, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 6},
  [44] = {.lex_state = 2, .external_lex_state = 6},
  [45] = {.lex_state = 2, .external_lex_state = 6},
  [46] = {.lex_state = 2, .external_lex_state = 6},
  [47] = {.lex_state = 2, .external_lex_state = 6},
  [48] = {.lex_state = 2, .external_lex_state = 6},
  [49] = {.lex_state = 2, .external_lex_state = 6},
  [50] = {.lex_state = 2, .external_lex_state = 6},
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
  [61] = {.lex_state = 2, .external_lex_state = 6},
  [62] = {.lex_state = 2, .external_lex_state = 6},
  [63] = {.lex_state = 2, .external_lex_state = 6},
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
  [80] = {.lex_state = 30, .external_lex_state = 2},
  [81] = {.lex_state = 30, .external_lex_state = 2},
  [82] = {.lex_state = 30, .external_lex_state = 2},
  [83] = {.lex_state = 30, .external_lex_state = 2},
  [84] = {.lex_state = 30, .external_lex_state = 2},
  [85] = {.lex_state = 30, .external_lex_state = 2},
  [86] = {.lex_state = 30, .external_lex_state = 2},
  [87] = {.lex_state = 2, .external_lex_state = 6},
  [88] = {.lex_state = 2, .external_lex_state = 6},
  [89] = {.lex_state = 2, .external_lex_state = 6},
  [90] = {.lex_state = 2, .external_lex_state = 6},
  [91] = {.lex_state = 30, .external_lex_state = 2},
  [92] = {.lex_state = 30, .external_lex_state = 2},
  [93] = {.lex_state = 30, .external_lex_state = 2},
  [94] = {.lex_state = 30, .external_lex_state = 2},
  [95] = {.lex_state = 30, .external_lex_state = 2},
  [96] = {.lex_state = 30, .external_lex_state = 2},
  [97] = {.lex_state = 30, .external_lex_state = 2},
  [98] = {.lex_state = 30, .external_lex_state = 2},
  [99] = {.lex_state = 30, .external_lex_state = 2},
  [100] = {.lex_state = 30, .external_lex_state = 2},
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
  [132] = {.lex_state = 2, .external_lex_state = 4},
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
  [150] = {.lex_state = 2, .external_lex_state = 4},
  [151] = {.lex_state = 2, .external_lex_state = 4},
  [152] = {.lex_state = 2, .external_lex_state = 4},
  [153] = {.lex_state = 2, .external_lex_state = 4},
  [154] = {.lex_state = 2, .external_lex_state = 4},
  [155] = {.lex_state = 2, .external_lex_state = 4},
  [156] = {.lex_state = 2, .external_lex_state = 4},
  [157] = {.lex_state = 2, .external_lex_state = 4},
  [158] = {.lex_state = 2, .external_lex_state = 4},
  [159] = {.lex_state = 2, .external_lex_state = 4},
  [160] = {.lex_state = 20, .external_lex_state = 2},
  [161] = {.lex_state = 20, .external_lex_state = 4},
  [162] = {.lex_state = 22, .external_lex_state = 2},
  [163] = {.lex_state = 22, .external_lex_state = 2},
  [164] = {.lex_state = 25, .external_lex_state = 2},
  [165] = {.lex_state = 20, .external_lex_state = 7},
  [166] = {.lex_state = 22, .external_lex_state = 2},
  [167] = {.lex_state = 25, .external_lex_state = 2},
  [168] = {.lex_state = 25, .external_lex_state = 2},
  [169] = {.lex_state = 25, .external_lex_state = 2},
  [170] = {.lex_state = 22, .external_lex_state = 2},
  [171] = {.lex_state = 22, .external_lex_state = 2},
  [172] = {.lex_state = 22, .external_lex_state = 2},
  [173] = {.lex_state = 22, .external_lex_state = 2},
  [174] = {.lex_state = 25, .external_lex_state = 2},
  [175] = {.lex_state = 22, .external_lex_state = 2},
  [176] = {.lex_state = 25, .external_lex_state = 2},
  [177] = {.lex_state = 22, .external_lex_state = 2},
  [178] = {.lex_state = 25, .external_lex_state = 4},
  [179] = {.lex_state = 25, .external_lex_state = 4},
  [180] = {.lex_state = 25, .external_lex_state = 7},
  [181] = {.lex_state = 25, .external_lex_state = 7},
  [182] = {.lex_state = 22, .external_lex_state = 2},
  [183] = {.lex_state = 22, .external_lex_state = 2},
  [184] = {.lex_state = 25, .external_lex_state = 4},
  [185] = {.lex_state = 25, .external_lex_state = 7},
  [186] = {.lex_state = 25, .external_lex_state = 7},
  [187] = {.lex_state = 25, .external_lex_state = 4},
  [188] = {.lex_state = 22, .external_lex_state = 2},
  [189] = {.lex_state = 22, .external_lex_state = 4},
  [190] = {.lex_state = 22, .external_lex_state = 2},
  [191] = {.lex_state = 22, .external_lex_state = 4},
  [192] = {.lex_state = 22, .external_lex_state = 2},
  [193] = {.lex_state = 22, .external_lex_state = 4},
  [194] = {.lex_state = 25, .external_lex_state = 4},
  [195] = {.lex_state = 22, .external_lex_state = 4},
  [196] = {.lex_state = 25, .external_lex_state = 7},
  [197] = {.lex_state = 22, .external_lex_state = 4},
  [198] = {.lex_state = 22, .external_lex_state = 2},
  [199] = {.lex_state = 22, .external_lex_state = 7},
  [200] = {.lex_state = 25, .external_lex_state = 7},
  [201] = {.lex_state = 22, .external_lex_state = 2},
  [202] = {.lex_state = 22, .external_lex_state = 7},
  [203] = {.lex_state = 25, .external_lex_state = 4},
  [204] = {.lex_state = 22, .external_lex_state = 7},
  [205] = {.lex_state = 22, .external_lex_state = 7},
  [206] = {.lex_state = 22, .external_lex_state = 2},
  [207] = {.lex_state = 22, .external_lex_state = 4},
  [208] = {.lex_state = 22, .external_lex_state = 2},
  [209] = {.lex_state = 22, .external_lex_state = 7},
  [210] = {.lex_state = 22, .external_lex_state = 7},
  [211] = {.lex_state = 22, .external_lex_state = 2},
  [212] = {.lex_state = 22, .external_lex_state = 7},
  [213] = {.lex_state = 22, .external_lex_state = 7},
  [214] = {.lex_state = 22, .external_lex_state = 4},
  [215] = {.lex_state = 22, .external_lex_state = 4},
  [216] = {.lex_state = 22, .external_lex_state = 7},
  [217] = {.lex_state = 114, .external_lex_state = 2},
  [218] = {.lex_state = 22, .external_lex_state = 4},
  [219] = {.lex_state = 114, .external_lex_state = 2},
  [220] = {.lex_state = 22, .external_lex_state = 7},
  [221] = {.lex_state = 22, .external_lex_state = 4},
  [222] = {.lex_state = 114, .external_lex_state = 2},
  [223] = {.lex_state = 114, .external_lex_state = 2},
  [224] = {.lex_state = 114, .external_lex_state = 2},
  [225] = {.lex_state = 114, .external_lex_state = 2},
  [226] = {.lex_state = 114, .external_lex_state = 2},
  [227] = {.lex_state = 114, .external_lex_state = 2},
  [228] = {.lex_state = 114, .external_lex_state = 2},
  [229] = {.lex_state = 114, .external_lex_state = 2},
  [230] = {.lex_state = 114, .external_lex_state = 2},
  [231] = {.lex_state = 114, .external_lex_state = 2},
  [232] = {.lex_state = 22, .external_lex_state = 2},
  [233] = {.lex_state = 22, .external_lex_state = 4},
  [234] = {.lex_state = 22, .external_lex_state = 7},
  [235] = {.lex_state = 22, .external_lex_state = 7},
  [236] = {.lex_state = 22, .external_lex_state = 7},
  [237] = {.lex_state = 22, .external_lex_state = 7},
  [238] = {.lex_state = 22, .external_lex_state = 7},
  [239] = {.lex_state = 22, .external_lex_state = 2},
  [240] = {.lex_state = 22, .external_lex_state = 7},
  [241] = {.lex_state = 22, .external_lex_state = 7},
  [242] = {.lex_state = 22, .external_lex_state = 2},
  [243] = {.lex_state = 22, .external_lex_state = 4},
  [244] = {.lex_state = 22, .external_lex_state = 7},
  [245] = {.lex_state = 22, .external_lex_state = 4},
  [246] = {.lex_state = 22, .external_lex_state = 4},
  [247] = {.lex_state = 114, .external_lex_state = 2},
  [248] = {.lex_state = 22, .external_lex_state = 4},
  [249] = {.lex_state = 22, .external_lex_state = 4},
  [250] = {.lex_state = 22, .external_lex_state = 4},
  [251] = {.lex_state = 22, .external_lex_state = 7},
  [252] = {.lex_state = 22, .external_lex_state = 2},
  [253] = {.lex_state = 22, .external_lex_state = 2},
  [254] = {.lex_state = 22, .external_lex_state = 4},
  [255] = {.lex_state = 114, .external_lex_state = 2},
  [256] = {.lex_state = 22, .external_lex_state = 4},
  [257] = {.lex_state = 114, .external_lex_state = 2},
  [258] = {.lex_state = 114, .external_lex_state = 2},
  [259] = {.lex_state = 738, .external_lex_state = 5},
  [260] = {.lex_state = 738, .external_lex_state = 5},
  [261] = {.lex_state = 738, .external_lex_state = 5},
  [262] = {.lex_state = 114, .external_lex_state = 7},
  [263] = {.lex_state = 114, .external_lex_state = 2},
  [264] = {.lex_state = 114, .external_lex_state = 4},
  [265] = {.lex_state = 114, .external_lex_state = 7},
  [266] = {.lex_state = 114, .external_lex_state = 7},
  [267] = {.lex_state = 114, .external_lex_state = 3},
  [268] = {.lex_state = 114, .external_lex_state = 2},
  [269] = {.lex_state = 114, .external_lex_state = 2},
  [270] = {.lex_state = 114, .external_lex_state = 4},
  [271] = {.lex_state = 114, .external_lex_state = 2},
  [272] = {.lex_state = 114, .external_lex_state = 2},
  [273] = {.lex_state = 114, .external_lex_state = 7},
  [274] = {.lex_state = 114, .external_lex_state = 2},
  [275] = {.lex_state = 114, .external_lex_state = 2},
  [276] = {.lex_state = 114, .external_lex_state = 4},
  [277] = {.lex_state = 114, .external_lex_state = 3},
  [278] = {.lex_state = 114, .external_lex_state = 2},
  [279] = {.lex_state = 114, .external_lex_state = 2},
  [280] = {.lex_state = 114, .external_lex_state = 2},
  [281] = {.lex_state = 114, .external_lex_state = 2},
  [282] = {.lex_state = 114, .external_lex_state = 8},
  [283] = {.lex_state = 114, .external_lex_state = 2},
  [284] = {.lex_state = 114, .external_lex_state = 4},
  [285] = {.lex_state = 114, .external_lex_state = 2},
  [286] = {.lex_state = 114, .external_lex_state = 2},
  [287] = {.lex_state = 114, .external_lex_state = 2},
  [288] = {.lex_state = 114, .external_lex_state = 4},
  [289] = {.lex_state = 114, .external_lex_state = 2},
  [290] = {.lex_state = 114, .external_lex_state = 2},
  [291] = {.lex_state = 114, .external_lex_state = 2},
  [292] = {.lex_state = 114, .external_lex_state = 2},
  [293] = {.lex_state = 114, .external_lex_state = 2},
  [294] = {.lex_state = 114, .external_lex_state = 4},
  [295] = {.lex_state = 114, .external_lex_state = 7},
  [296] = {.lex_state = 114, .external_lex_state = 7},
  [297] = {.lex_state = 114, .external_lex_state = 4},
  [298] = {.lex_state = 114, .external_lex_state = 4},
  [299] = {.lex_state = 114, .external_lex_state = 2},
  [300] = {.lex_state = 114, .external_lex_state = 2},
  [301] = {.lex_state = 114, .external_lex_state = 2},
  [302] = {.lex_state = 114, .external_lex_state = 4},
  [303] = {.lex_state = 114, .external_lex_state = 2},
  [304] = {.lex_state = 114, .external_lex_state = 7},
  [305] = {.lex_state = 114, .external_lex_state = 2},
  [306] = {.lex_state = 114, .external_lex_state = 4},
  [307] = {.lex_state = 114, .external_lex_state = 2},
  [308] = {.lex_state = 114, .external_lex_state = 4},
  [309] = {.lex_state = 114, .external_lex_state = 7},
  [310] = {.lex_state = 114, .external_lex_state = 4},
  [311] = {.lex_state = 114, .external_lex_state = 7},
  [312] = {.lex_state = 114, .external_lex_state = 7},
  [313] = {.lex_state = 114, .external_lex_state = 2},
  [314] = {.lex_state = 114, .external_lex_state = 2},
  [315] = {.lex_state = 114, .external_lex_state = 2},
  [316] = {.lex_state = 114, .external_lex_state = 2},
  [317] = {.lex_state = 114, .external_lex_state = 2},
  [318] = {.lex_state = 114, .external_lex_state = 3},
  [319] = {.lex_state = 114, .external_lex_state = 3},
  [320] = {.lex_state = 114, .external_lex_state = 2},
  [321] = {.lex_state = 114, .external_lex_state = 2},
  [322] = {.lex_state = 114, .external_lex_state = 7},
  [323] = {.lex_state = 114, .external_lex_state = 2},
  [324] = {.lex_state = 114, .external_lex_state = 2},
  [325] = {.lex_state = 114, .external_lex_state = 4},
  [326] = {.lex_state = 114, .external_lex_state = 2},
  [327] = {.lex_state = 114, .external_lex_state = 2},
  [328] = {.lex_state = 114, .external_lex_state = 2},
  [329] = {.lex_state = 114, .external_lex_state = 2},
  [330] = {.lex_state = 114, .external_lex_state = 2},
  [331] = {.lex_state = 114, .external_lex_state = 2},
  [332] = {.lex_state = 114, .external_lex_state = 2},
  [333] = {.lex_state = 114, .external_lex_state = 2},
  [334] = {.lex_state = 114, .external_lex_state = 3},
  [335] = {.lex_state = 114, .external_lex_state = 4},
  [336] = {.lex_state = 114, .external_lex_state = 2},
  [337] = {.lex_state = 20, .external_lex_state = 3},
  [338] = {.lex_state = 114, .external_lex_state = 2},
  [339] = {.lex_state = 114, .external_lex_state = 4},
  [340] = {.lex_state = 114, .external_lex_state = 2},
  [341] = {.lex_state = 114, .external_lex_state = 8},
  [342] = {.lex_state = 114, .external_lex_state = 5},
  [343] = {.lex_state = 114, .external_lex_state = 5},
  [344] = {.lex_state = 114, .external_lex_state = 4},
  [345] = {.lex_state = 738, .external_lex_state = 3},
  [346] = {.lex_state = 20, .external_lex_state = 2},
  [347] = {.lex_state = 114, .external_lex_state = 3},
  [348] = {.lex_state = 114, .external_lex_state = 2},
  [349] = {.lex_state = 114, .external_lex_state = 8},
  [350] = {.lex_state = 22, .external_lex_state = 2},
  [351] = {.lex_state = 114, .external_lex_state = 5},
  [352] = {.lex_state = 114, .external_lex_state = 5},
  [353] = {.lex_state = 114, .external_lex_state = 4},
  [354] = {.lex_state = 114, .external_lex_state = 8},
  [355] = {.lex_state = 22, .external_lex_state = 2},
  [356] = {.lex_state = 114, .external_lex_state = 8},
  [357] = {.lex_state = 114, .external_lex_state = 5},
  [358] = {.lex_state = 114, .external_lex_state = 8},
  [359] = {.lex_state = 114, .external_lex_state = 8},
  [360] = {.lex_state = 22, .external_lex_state = 3},
  [361] = {.lex_state = 22, .external_lex_state = 3},
  [362] = {.lex_state = 114, .external_lex_state = 2},
  [363] = {.lex_state = 114, .external_lex_state = 5},
  [364] = {.lex_state = 22, .external_lex_state = 2},
  [365] = {.lex_state = 22, .external_lex_state = 2},
  [366] = {.lex_state = 114, .external_lex_state = 5},
  [367] = {.lex_state = 114, .external_lex_state = 5},
  [368] = {.lex_state = 114, .external_lex_state = 8},
  [369] = {.lex_state = 114, .external_lex_state = 5},
  [370] = {.lex_state = 22, .external_lex_state = 3},
  [371] = {.lex_state = 114, .external_lex_state = 8},
  [372] = {.lex_state = 22, .external_lex_state = 3},
  [373] = {.lex_state = 22, .external_lex_state = 2},
  [374] = {.lex_state = 114, .external_lex_state = 3},
  [375] = {.lex_state = 114, .external_lex_state = 2},
  [376] = {.lex_state = 114, .external_lex_state = 7},
  [377] = {.lex_state = 25, .external_lex_state = 4},
  [378] = {.lex_state = 25, .external_lex_state = 4},
  [379] = {.lex_state = 114, .external_lex_state = 4},
  [380] = {.lex_state = 22, .external_lex_state = 2},
  [381] = {.lex_state = 114, .external_lex_state = 3},
  [382] = {.lex_state = 114, .external_lex_state = 6},
  [383] = {.lex_state = 22, .external_lex_state = 3},
  [384] = {.lex_state = 22, .external_lex_state = 2},
  [385] = {.lex_state = 114, .external_lex_state = 4},
  [386] = {.lex_state = 114, .external_lex_state = 7},
  [387] = {.lex_state = 114, .external_lex_state = 4},
  [388] = {.lex_state = 114, .external_lex_state = 7},
  [389] = {.lex_state = 114, .external_lex_state = 4},
  [390] = {.lex_state = 22, .external_lex_state = 2},
  [391] = {.lex_state = 114, .external_lex_state = 6},
  [392] = {.lex_state = 25, .external_lex_state = 4},
  [393] = {.lex_state = 25, .external_lex_state = 4},
  [394] = {.lex_state = 114, .external_lex_state = 7},
  [395] = {.lex_state = 32, .external_lex_state = 4},
  [396] = {.lex_state = 114, .external_lex_state = 2},
  [397] = {.lex_state = 735, .external_lex_state = 2},
  [398] = {.lex_state = 34, .external_lex_state = 2},
  [399] = {.lex_state = 114, .external_lex_state = 4},
  [400] = {.lex_state = 114, .external_lex_state = 4},
  [401] = {.lex_state = 114, .external_lex_state = 4},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 114, .external_lex_state = 2},
  [405] = {.lex_state = 114, .external_lex_state = 4},
  [406] = {.lex_state = 114, .external_lex_state = 2},
  [407] = {.lex_state = 114, .external_lex_state = 4},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 114, .external_lex_state = 4},
  [410] = {.lex_state = 114, .external_lex_state = 4},
  [411] = {.lex_state = 34, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 6},
  [413] = {.lex_state = 114, .external_lex_state = 2},
  [414] = {.lex_state = 0, .external_lex_state = 6},
  [415] = {.lex_state = 22, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 6},
  [417] = {.lex_state = 114, .external_lex_state = 4},
  [418] = {.lex_state = 114, .external_lex_state = 4},
  [419] = {.lex_state = 114, .external_lex_state = 2},
  [420] = {.lex_state = 114, .external_lex_state = 2},
  [421] = {.lex_state = 22, .external_lex_state = 2},
  [422] = {.lex_state = 34, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 6},
  [424] = {.lex_state = 114, .external_lex_state = 4},
  [425] = {.lex_state = 114, .external_lex_state = 4},
  [426] = {.lex_state = 114, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 0, .external_lex_state = 6},
  [429] = {.lex_state = 114, .external_lex_state = 2},
  [430] = {.lex_state = 114, .external_lex_state = 4},
  [431] = {.lex_state = 114, .external_lex_state = 4},
  [432] = {.lex_state = 34, .external_lex_state = 2},
  [433] = {.lex_state = 114, .external_lex_state = 4},
  [434] = {.lex_state = 114, .external_lex_state = 4},
  [435] = {.lex_state = 0, .external_lex_state = 6},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 114, .external_lex_state = 2},
  [438] = {.lex_state = 34, .external_lex_state = 2},
  [439] = {.lex_state = 114, .external_lex_state = 2},
  [440] = {.lex_state = 34, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 739, .external_lex_state = 4},
  [444] = {.lex_state = 6, .external_lex_state = 4},
  [445] = {.lex_state = 32, .external_lex_state = 4},
  [446] = {.lex_state = 114, .external_lex_state = 2},
  [447] = {.lex_state = 114, .external_lex_state = 2},
  [448] = {.lex_state = 114, .external_lex_state = 2},
  [449] = {.lex_state = 114, .external_lex_state = 2},
  [450] = {.lex_state = 34, .external_lex_state = 2},
  [451] = {.lex_state = 22, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 6},
  [453] = {.lex_state = 22, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 114, .external_lex_state = 3},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 114, .external_lex_state = 4},
  [459] = {.lex_state = 114, .external_lex_state = 4},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 114, .external_lex_state = 2},
  [462] = {.lex_state = 114, .external_lex_state = 4},
  [463] = {.lex_state = 34, .external_lex_state = 2},
  [464] = {.lex_state = 114, .external_lex_state = 4},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 34, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 6},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 114, .external_lex_state = 4},
  [470] = {.lex_state = 0, .external_lex_state = 6},
  [471] = {.lex_state = 0, .external_lex_state = 6},
  [472] = {.lex_state = 0, .external_lex_state = 6},
  [473] = {.lex_state = 114, .external_lex_state = 4},
  [474] = {.lex_state = 0, .external_lex_state = 6},
  [475] = {.lex_state = 114, .external_lex_state = 4},
  [476] = {.lex_state = 0, .external_lex_state = 6},
  [477] = {.lex_state = 114, .external_lex_state = 7},
  [478] = {.lex_state = 114, .external_lex_state = 7},
  [479] = {.lex_state = 114, .external_lex_state = 2},
  [480] = {.lex_state = 114, .external_lex_state = 7},
  [481] = {.lex_state = 739, .external_lex_state = 4},
  [482] = {.lex_state = 6, .external_lex_state = 4},
  [483] = {.lex_state = 739, .external_lex_state = 4},
  [484] = {.lex_state = 114, .external_lex_state = 7},
  [485] = {.lex_state = 34, .external_lex_state = 2},
  [486] = {.lex_state = 114, .external_lex_state = 7},
  [487] = {.lex_state = 114, .external_lex_state = 7},
  [488] = {.lex_state = 114, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 6},
  [490] = {.lex_state = 0, .external_lex_state = 6},
  [491] = {.lex_state = 739, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 0, .external_lex_state = 8},
  [494] = {.lex_state = 34, .external_lex_state = 2},
  [495] = {.lex_state = 6, .external_lex_state = 4},
  [496] = {.lex_state = 114, .external_lex_state = 7},
  [497] = {.lex_state = 739, .external_lex_state = 2},
  [498] = {.lex_state = 114, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 114, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 8},
  [502] = {.lex_state = 0, .external_lex_state = 5},
  [503] = {.lex_state = 34, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 8},
  [505] = {.lex_state = 0, .external_lex_state = 8},
  [506] = {.lex_state = 34, .external_lex_state = 2},
  [507] = {.lex_state = 114, .external_lex_state = 4},
  [508] = {.lex_state = 31, .external_lex_state = 4},
  [509] = {.lex_state = 0, .external_lex_state = 6},
  [510] = {.lex_state = 0, .external_lex_state = 5},
  [511] = {.lex_state = 739, .external_lex_state = 2},
  [512] = {.lex_state = 114, .external_lex_state = 4},
  [513] = {.lex_state = 0, .external_lex_state = 6},
  [514] = {.lex_state = 114, .external_lex_state = 4},
  [515] = {.lex_state = 31, .external_lex_state = 4},
  [516] = {.lex_state = 0, .external_lex_state = 8},
  [517] = {.lex_state = 114, .external_lex_state = 2},
  [518] = {.lex_state = 0, .external_lex_state = 8},
  [519] = {.lex_state = 114, .external_lex_state = 2},
  [520] = {.lex_state = 0, .external_lex_state = 8},
  [521] = {.lex_state = 0, .external_lex_state = 8},
  [522] = {.lex_state = 0, .external_lex_state = 8},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 0, .external_lex_state = 8},
  [525] = {.lex_state = 114, .external_lex_state = 4},
  [526] = {.lex_state = 0, .external_lex_state = 8},
  [527] = {.lex_state = 114, .external_lex_state = 4},
  [528] = {.lex_state = 0, .external_lex_state = 8},
  [529] = {.lex_state = 0, .external_lex_state = 8},
  [530] = {.lex_state = 31, .external_lex_state = 4},
  [531] = {.lex_state = 0, .external_lex_state = 8},
  [532] = {.lex_state = 0, .external_lex_state = 8},
  [533] = {.lex_state = 114, .external_lex_state = 4},
  [534] = {.lex_state = 0, .external_lex_state = 5},
  [535] = {.lex_state = 0, .external_lex_state = 5},
  [536] = {.lex_state = 0, .external_lex_state = 6},
  [537] = {.lex_state = 114, .external_lex_state = 4},
  [538] = {.lex_state = 34, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 5},
  [540] = {.lex_state = 0, .external_lex_state = 5},
  [541] = {.lex_state = 0, .external_lex_state = 5},
  [542] = {.lex_state = 0, .external_lex_state = 6},
  [543] = {.lex_state = 0, .external_lex_state = 8},
  [544] = {.lex_state = 34, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 8},
  [546] = {.lex_state = 0, .external_lex_state = 8},
  [547] = {.lex_state = 114, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 8},
  [549] = {.lex_state = 114, .external_lex_state = 2},
  [550] = {.lex_state = 114, .external_lex_state = 4},
  [551] = {.lex_state = 114, .external_lex_state = 4},
  [552] = {.lex_state = 114, .external_lex_state = 4},
  [553] = {.lex_state = 0, .external_lex_state = 4},
  [554] = {.lex_state = 0, .external_lex_state = 2},
  [555] = {.lex_state = 0, .external_lex_state = 4},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 4},
  [558] = {.lex_state = 0, .external_lex_state = 4},
  [559] = {.lex_state = 0, .external_lex_state = 7},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 4},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 4},
  [565] = {.lex_state = 0, .external_lex_state = 4},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 4},
  [568] = {.lex_state = 0, .external_lex_state = 4},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 0, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 0, .external_lex_state = 4},
  [574] = {.lex_state = 114, .external_lex_state = 2},
  [575] = {.lex_state = 0, .external_lex_state = 4},
  [576] = {.lex_state = 0, .external_lex_state = 2},
  [577] = {.lex_state = 0, .external_lex_state = 4},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 7},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0, .external_lex_state = 4},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 0, .external_lex_state = 4},
  [585] = {.lex_state = 0, .external_lex_state = 4},
  [586] = {.lex_state = 0, .external_lex_state = 4},
  [587] = {.lex_state = 0, .external_lex_state = 4},
  [588] = {.lex_state = 0, .external_lex_state = 7},
  [589] = {.lex_state = 0, .external_lex_state = 4},
  [590] = {.lex_state = 0, .external_lex_state = 4},
  [591] = {.lex_state = 0, .external_lex_state = 4},
  [592] = {.lex_state = 0, .external_lex_state = 4},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 114, .external_lex_state = 2},
  [595] = {.lex_state = 0, .external_lex_state = 4},
  [596] = {.lex_state = 0, .external_lex_state = 7},
  [597] = {.lex_state = 0, .external_lex_state = 4},
  [598] = {.lex_state = 0, .external_lex_state = 2},
  [599] = {.lex_state = 0, .external_lex_state = 4},
  [600] = {.lex_state = 0, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 4},
  [602] = {.lex_state = 0, .external_lex_state = 4},
  [603] = {.lex_state = 0, .external_lex_state = 4},
  [604] = {.lex_state = 0, .external_lex_state = 4},
  [605] = {.lex_state = 0, .external_lex_state = 4},
  [606] = {.lex_state = 0, .external_lex_state = 4},
  [607] = {.lex_state = 0, .external_lex_state = 4},
  [608] = {.lex_state = 0, .external_lex_state = 4},
  [609] = {.lex_state = 0, .external_lex_state = 4},
  [610] = {.lex_state = 0, .external_lex_state = 4},
  [611] = {.lex_state = 0, .external_lex_state = 4},
  [612] = {.lex_state = 0, .external_lex_state = 4},
  [613] = {.lex_state = 0, .external_lex_state = 4},
  [614] = {.lex_state = 0, .external_lex_state = 7},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 4},
  [617] = {.lex_state = 0, .external_lex_state = 2},
  [618] = {.lex_state = 0, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 4},
  [620] = {.lex_state = 0, .external_lex_state = 4},
  [621] = {.lex_state = 0, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 7},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0, .external_lex_state = 4},
  [626] = {.lex_state = 0, .external_lex_state = 4},
  [627] = {.lex_state = 0, .external_lex_state = 4},
  [628] = {.lex_state = 0, .external_lex_state = 4},
  [629] = {.lex_state = 0, .external_lex_state = 4},
  [630] = {.lex_state = 0, .external_lex_state = 4},
  [631] = {.lex_state = 0, .external_lex_state = 7},
  [632] = {.lex_state = 0, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 7},
  [634] = {.lex_state = 0, .external_lex_state = 4},
  [635] = {.lex_state = 0, .external_lex_state = 4},
  [636] = {.lex_state = 0, .external_lex_state = 4},
  [637] = {.lex_state = 0, .external_lex_state = 4},
  [638] = {.lex_state = 0, .external_lex_state = 4},
  [639] = {.lex_state = 0, .external_lex_state = 4},
  [640] = {.lex_state = 0, .external_lex_state = 4},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 0, .external_lex_state = 2},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0, .external_lex_state = 4},
  [649] = {.lex_state = 0, .external_lex_state = 7},
  [650] = {.lex_state = 0, .external_lex_state = 7},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 114, .external_lex_state = 2},
  [653] = {.lex_state = 0, .external_lex_state = 7},
  [654] = {.lex_state = 0, .external_lex_state = 4},
  [655] = {.lex_state = 0, .external_lex_state = 4},
  [656] = {.lex_state = 0, .external_lex_state = 4},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 114, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 0, .external_lex_state = 4},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 4},
  [665] = {.lex_state = 0, .external_lex_state = 4},
  [666] = {.lex_state = 0, .external_lex_state = 4},
  [667] = {.lex_state = 0, .external_lex_state = 4},
  [668] = {.lex_state = 0, .external_lex_state = 4},
  [669] = {.lex_state = 0, .external_lex_state = 7},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 2},
  [672] = {.lex_state = 0, .external_lex_state = 4},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 2},
  [675] = {.lex_state = 0, .external_lex_state = 4},
  [676] = {.lex_state = 0, .external_lex_state = 7},
  [677] = {.lex_state = 0, .external_lex_state = 7},
  [678] = {.lex_state = 0, .external_lex_state = 7},
  [679] = {.lex_state = 0, .external_lex_state = 4},
  [680] = {.lex_state = 0, .external_lex_state = 4},
  [681] = {.lex_state = 0, .external_lex_state = 7},
  [682] = {.lex_state = 114, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 4},
  [684] = {.lex_state = 0, .external_lex_state = 4},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 114, .external_lex_state = 2},
  [688] = {.lex_state = 0, .external_lex_state = 7},
  [689] = {.lex_state = 0, .external_lex_state = 4},
  [690] = {.lex_state = 0, .external_lex_state = 7},
  [691] = {.lex_state = 0, .external_lex_state = 4},
  [692] = {.lex_state = 114, .external_lex_state = 2},
  [693] = {.lex_state = 31, .external_lex_state = 2},
  [694] = {.lex_state = 0, .external_lex_state = 4},
  [695] = {.lex_state = 0, .external_lex_state = 4},
  [696] = {.lex_state = 0, .external_lex_state = 7},
  [697] = {.lex_state = 0, .external_lex_state = 4},
  [698] = {.lex_state = 0, .external_lex_state = 4},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 0, .external_lex_state = 4},
  [701] = {.lex_state = 0, .external_lex_state = 4},
  [702] = {.lex_state = 0, .external_lex_state = 2},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 4},
  [705] = {.lex_state = 0, .external_lex_state = 4},
  [706] = {.lex_state = 0, .external_lex_state = 4},
  [707] = {.lex_state = 0, .external_lex_state = 4},
  [708] = {.lex_state = 0, .external_lex_state = 7},
  [709] = {.lex_state = 0, .external_lex_state = 4},
  [710] = {.lex_state = 0, .external_lex_state = 4},
  [711] = {.lex_state = 0, .external_lex_state = 4},
  [712] = {.lex_state = 0, .external_lex_state = 9},
  [713] = {.lex_state = 114, .external_lex_state = 2},
  [714] = {.lex_state = 0, .external_lex_state = 3},
  [715] = {.lex_state = 0, .external_lex_state = 3},
  [716] = {.lex_state = 0, .external_lex_state = 3},
  [717] = {.lex_state = 0, .external_lex_state = 3},
  [718] = {.lex_state = 0, .external_lex_state = 3},
  [719] = {.lex_state = 0, .external_lex_state = 3},
  [720] = {.lex_state = 0, .external_lex_state = 4},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 0, .external_lex_state = 4},
  [723] = {.lex_state = 0, .external_lex_state = 7},
  [724] = {.lex_state = 0, .external_lex_state = 2},
  [725] = {.lex_state = 0, .external_lex_state = 2},
  [726] = {.lex_state = 0, .external_lex_state = 2},
  [727] = {.lex_state = 0, .external_lex_state = 4},
  [728] = {.lex_state = 0, .external_lex_state = 2},
  [729] = {.lex_state = 0, .external_lex_state = 2},
  [730] = {.lex_state = 0, .external_lex_state = 2},
  [731] = {.lex_state = 0, .external_lex_state = 2},
  [732] = {.lex_state = 0, .external_lex_state = 2},
  [733] = {.lex_state = 0, .external_lex_state = 2},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 2},
  [736] = {.lex_state = 0, .external_lex_state = 2},
  [737] = {.lex_state = 0, .external_lex_state = 2},
  [738] = {.lex_state = 0, .external_lex_state = 2},
  [739] = {.lex_state = 0, .external_lex_state = 2},
  [740] = {.lex_state = 0, .external_lex_state = 2},
  [741] = {.lex_state = 0, .external_lex_state = 7},
  [742] = {.lex_state = 0, .external_lex_state = 7},
  [743] = {.lex_state = 0, .external_lex_state = 4},
  [744] = {.lex_state = 114, .external_lex_state = 2},
  [745] = {.lex_state = 0, .external_lex_state = 2},
  [746] = {.lex_state = 0, .external_lex_state = 2},
  [747] = {.lex_state = 0, .external_lex_state = 2},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(747),
    [sym_rule] = STATE(333),
    [sym__dottedName] = STATE(746),
    [aux_sym_source_file_repeat1] = STATE(333),
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(51), 2,
      sym_string,
      sym_date,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(294), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(15), 10,
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
    STATE(144), 10,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(63), 2,
      sym_string,
      sym_date,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 4,
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
    STATE(144), 10,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(69), 2,
      sym_string,
      sym_date,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(297), 4,
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
    STATE(144), 10,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(75), 2,
      sym_string,
      sym_date,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(276), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(15), 10,
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
    STATE(144), 10,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    STATE(666), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(39), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [589] = 27,
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
    ACTIONS(97), 1,
      sym__indent,
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(264), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [687] = 26,
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
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_string,
    ACTIONS(105), 1,
      sym_date,
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(38), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [782] = 26,
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
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym_string,
    ACTIONS(113), 1,
      sym_date,
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(20), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(298), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [877] = 26,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(39), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [972] = 26,
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
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      sym_string,
    ACTIONS(121), 1,
      sym_date,
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(31), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(306), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [1067] = 26,
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
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_date,
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(310), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(144), 10,
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
  [1162] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_formule_token1,
    ACTIONS(134), 1,
      aux_sym_m_unary_token1,
    ACTIONS(137), 1,
      aux_sym_m_array_token1,
    ACTIONS(140), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(143), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(146), 1,
      aux_sym_m_variations_token1,
    ACTIONS(149), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(152), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(155), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(158), 1,
      aux_sym_m_texte_token1,
    ACTIONS(161), 1,
      aux_sym_m_une_possibilitu00e9_token1,
    ACTIONS(164), 1,
      aux_sym_avec_token1,
    ACTIONS(167), 1,
      aux_sym_remplace_token1,
    ACTIONS(170), 1,
      sym_tag,
    ACTIONS(173), 1,
      aux_sym_meta_token1,
    ACTIONS(176), 1,
      sym__key,
    ACTIONS(179), 1,
      sym__dedent,
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
    STATE(144), 10,
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
  [1241] = 20,
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
    ACTIONS(181), 1,
      sym__dedent,
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
    STATE(144), 10,
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
  [1320] = 20,
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
    ACTIONS(183), 1,
      sym__dedent,
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
    STATE(144), 10,
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
  [1399] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(197), 1,
      sym_string,
    ACTIONS(199), 1,
      sym_date,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(203), 1,
      sym__indent,
    ACTIONS(205), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(406), 1,
      sym_rule_body,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1460] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_string,
    ACTIONS(213), 1,
      sym_date,
    ACTIONS(215), 1,
      sym__indent,
    ACTIONS(217), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(409), 1,
      sym_rule_body,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1521] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      sym_string,
    ACTIONS(225), 1,
      sym_date,
    ACTIONS(227), 1,
      sym__indent,
    ACTIONS(229), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(429), 1,
      sym_rule_body,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(312), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1582] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      sym_string,
    ACTIONS(237), 1,
      sym_date,
    ACTIONS(239), 1,
      sym__indent,
    ACTIONS(241), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(431), 1,
      sym_rule_body,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(273), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1643] = 13,
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
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [1693] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(253), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(623), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1751] = 13,
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
    ACTIONS(255), 1,
      sym__dedent,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [1801] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(263), 1,
      sym_date,
    ACTIONS(265), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(530), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(304), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1859] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_string,
    ACTIONS(273), 1,
      sym_date,
    ACTIONS(275), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(652), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1917] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_string,
    ACTIONS(273), 1,
      sym_date,
    ACTIONS(275), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(574), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1975] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(263), 1,
      sym_date,
    ACTIONS(265), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(445), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(304), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2033] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_m_unary_token1,
    ACTIONS(280), 1,
      aux_sym_m_array_token1,
    ACTIONS(283), 1,
      aux_sym_m_inversion_token1,
    ACTIONS(286), 1,
      aux_sym_m_contexte_token1,
    ACTIONS(289), 1,
      aux_sym_m_variations_token1,
    ACTIONS(292), 1,
      aux_sym_m_unitu00e9_token1,
    ACTIONS(295), 1,
      aux_sym_m_duru00e9e_token1,
    ACTIONS(298), 1,
      aux_sym_m_baru00e8me_like_token1,
    ACTIONS(301), 1,
      aux_sym_m_texte_token1,
    ACTIONS(304), 1,
      sym__dedent,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [2083] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(263), 1,
      sym_date,
    ACTIONS(265), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(515), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(304), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2141] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(253), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(711), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2199] = 13,
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
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [2249] = 13,
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
    ACTIONS(308), 1,
      sym__dedent,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [2299] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(253), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(567), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2357] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      sym_string,
    ACTIONS(316), 1,
      sym_date,
    ACTIONS(318), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(512), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2415] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_string,
    ACTIONS(273), 1,
      sym_date,
    ACTIONS(275), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(692), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2473] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(253), 1,
      sym__indent,
    STATE(119), 1,
      sym__valeur,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2531] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(320), 1,
      sym__indent,
    STATE(101), 1,
      sym__valeur,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2589] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_string,
    ACTIONS(273), 1,
      sym_date,
    ACTIONS(275), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(517), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2647] = 13,
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
    ACTIONS(322), 1,
      sym__dedent,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [2697] = 13,
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
    ACTIONS(324), 1,
      sym__dedent,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(144), 10,
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
  [2747] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      sym_string,
    ACTIONS(273), 1,
      sym_date,
    ACTIONS(275), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(693), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(309), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2805] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_date,
    ACTIONS(253), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(624), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(311), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2863] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(263), 1,
      sym_date,
    ACTIONS(265), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    STATE(508), 1,
      sym__valeur,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(304), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__key,
    ACTIONS(330), 1,
      sym__array_prefix,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(326), 17,
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
  [2953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__key,
    ACTIONS(337), 1,
      sym__array_prefix,
    STATE(47), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(333), 16,
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
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__key,
    ACTIONS(339), 18,
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
  [3011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__key,
    ACTIONS(347), 1,
      sym__array_prefix,
    STATE(48), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(343), 16,
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
  [3042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__key,
    ACTIONS(353), 1,
      sym__array_prefix,
    STATE(47), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(349), 16,
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
  [3073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__key,
    ACTIONS(360), 1,
      sym__array_prefix,
    STATE(48), 1,
      aux_sym_remplace_repeat1,
    ACTIONS(356), 16,
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
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__key,
    ACTIONS(363), 18,
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
  [3131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__key,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(367), 16,
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
  [3162] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(381), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(316), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3208] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(232), 1,
      sym_number,
    STATE(242), 1,
      sym_reference,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(385), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3252] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    STATE(330), 1,
      sym__expression,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(387), 2,
      sym_string,
      sym_date,
    STATE(280), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(239), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(389), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(313), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3346] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(391), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(268), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3392] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(385), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3438] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(393), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3484] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(395), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3530] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(397), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(300), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3576] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(399), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__key,
    ACTIONS(401), 17,
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
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__key,
    ACTIONS(405), 17,
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
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__key,
    ACTIONS(409), 17,
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
  [3700] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(201), 1,
      aux_sym_number_token1,
    STATE(235), 1,
      sym__dottedName,
    STATE(236), 1,
      sym_reference,
    STATE(237), 1,
      sym_number,
    ACTIONS(191), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(413), 2,
      sym_string,
      sym_date,
    STATE(234), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [3744] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(415), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(320), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3790] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(417), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(323), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3836] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(419), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(321), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3882] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(421), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(327), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3928] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(423), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(326), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3974] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(425), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(328), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4020] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(427), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4066] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(429), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(324), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4112] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(431), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(299), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4158] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(433), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(329), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4204] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(435), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(315), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4250] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(437), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(317), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4296] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    STATE(330), 1,
      sym__expression,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(387), 2,
      sym_string,
      sym_date,
    STATE(301), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(253), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4344] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(439), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(314), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4390] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(441), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4436] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(443), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(307), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4482] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(445), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4528] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(447), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4574] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(449), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4620] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(451), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(305), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4666] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(453), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(292), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4712] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(455), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__key,
    ACTIONS(457), 17,
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
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__key,
    ACTIONS(461), 17,
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
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym__key,
    ACTIONS(465), 17,
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
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__key,
    ACTIONS(469), 17,
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
  [4862] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(473), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(274), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4908] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(475), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [4954] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(477), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(293), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5000] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(479), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5046] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(481), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5092] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(483), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(303), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5138] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(485), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(291), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5184] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(487), 2,
      sym_string,
      sym_date,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [5230] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_name,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(383), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(201), 1,
      sym_reference,
    STATE(206), 1,
      sym_number,
    STATE(247), 1,
      sym_boolean,
    STATE(330), 1,
      sym__expression,
    ACTIONS(375), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(387), 2,
      sym_string,
      sym_date,
    STATE(289), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(252), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [5278] = 12,
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
    STATE(233), 1,
      sym_reference,
    STATE(246), 1,
      sym__dottedName,
    STATE(248), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(489), 2,
      sym_string,
      sym_date,
    STATE(245), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(302), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [5322] = 3,
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
  [5347] = 3,
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
  [5372] = 3,
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
  [5397] = 3,
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
  [5422] = 3,
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
  [5447] = 3,
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
  [5472] = 3,
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
  [5497] = 3,
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
  [5522] = 3,
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
  [5547] = 3,
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
  [5572] = 3,
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
  [5597] = 3,
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
  [5622] = 3,
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
  [5647] = 3,
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
  [5672] = 3,
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
  [5697] = 3,
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
  [5722] = 3,
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
  [5747] = 3,
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
  [5772] = 3,
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
  [5797] = 3,
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
  [5822] = 3,
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
  [5847] = 3,
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
  [5872] = 3,
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
  [5897] = 3,
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
  [5922] = 3,
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
  [5947] = 3,
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
  [5972] = 3,
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
  [5997] = 3,
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
  [6022] = 3,
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
  [6047] = 3,
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
  [6072] = 3,
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
  [6097] = 3,
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
  [6122] = 3,
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
  [6147] = 3,
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
  [6172] = 3,
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
  [6197] = 3,
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
  [6222] = 3,
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
  [6247] = 3,
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
  [6272] = 3,
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
  [6297] = 3,
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
  [6322] = 3,
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
  [6347] = 3,
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
  [6372] = 3,
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
  [6397] = 3,
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
  [6422] = 3,
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
  [6447] = 3,
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
  [6472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym__key,
    ACTIONS(671), 16,
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
  [6497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__key,
    ACTIONS(675), 16,
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
  [6522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym__key,
    ACTIONS(679), 16,
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
  [6547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym__key,
    ACTIONS(683), 16,
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
  [6572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__key,
    ACTIONS(687), 16,
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
  [6597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym__key,
    ACTIONS(691), 16,
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
  [6622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym__key,
    ACTIONS(695), 16,
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
  [6647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__key,
    ACTIONS(699), 16,
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
  [6672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__key,
    ACTIONS(703), 16,
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
  [6697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__key,
    ACTIONS(707), 16,
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
  [6722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym__key,
    ACTIONS(711), 16,
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
  [6747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym__key,
    ACTIONS(715), 16,
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
  [6772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__key,
    ACTIONS(719), 16,
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
  [6797] = 7,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SPACE,
    ACTIONS(729), 1,
      aux_sym_unit_token1,
    STATE(168), 1,
      sym_unit,
    STATE(170), 1,
      sym__units,
    STATE(208), 1,
      sym_units,
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
  [6829] = 8,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SPACE,
    ACTIONS(733), 1,
      aux_sym_unit_token1,
    ACTIONS(735), 1,
      sym__dedent,
    STATE(178), 1,
      sym_unit,
    STATE(214), 1,
      sym__units,
    STATE(250), 1,
      sym_units,
    ACTIONS(723), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(737), 12,
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
  [6885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(741), 12,
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
  [6909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(750), 1,
      anon_sym_DOT2,
    STATE(164), 1,
      aux_sym__units_repeat1,
    ACTIONS(746), 11,
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
  [6935] = 8,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym__newline,
    ACTIONS(753), 1,
      anon_sym_SPACE,
    ACTIONS(755), 1,
      aux_sym_unit_token1,
    STATE(180), 1,
      sym_unit,
    STATE(205), 1,
      sym__units,
    STATE(241), 1,
      sym_units,
    ACTIONS(723), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(757), 12,
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
  [6991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    ACTIONS(763), 1,
      sym_exposant,
    ACTIONS(759), 12,
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
  [7015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SLASH,
    ACTIONS(769), 1,
      anon_sym_DOT2,
    STATE(169), 1,
      aux_sym__units_repeat1,
    ACTIONS(765), 11,
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
  [7041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT2,
    ACTIONS(773), 1,
      anon_sym_SLASH,
    STATE(164), 1,
      aux_sym__units_repeat1,
    ACTIONS(771), 11,
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
  [7067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
    STATE(177), 1,
      aux_sym_units_repeat1,
    ACTIONS(775), 11,
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
  [7090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
    STATE(172), 1,
      aux_sym_units_repeat1,
    ACTIONS(779), 11,
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
  [7113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    STATE(172), 1,
      aux_sym_units_repeat1,
    ACTIONS(781), 11,
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
  [7136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 13,
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
  [7155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(746), 12,
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
  [7176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      aux_sym_units_repeat1,
    ACTIONS(786), 11,
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
  [7199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(788), 12,
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
  [7220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SLASH,
    STATE(172), 1,
      aux_sym_units_repeat1,
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
  [7243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SLASH,
    ACTIONS(794), 1,
      anon_sym_DOT2,
    STATE(187), 1,
      aux_sym__units_repeat1,
    ACTIONS(765), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(796), 1,
      anon_sym_DOT2,
    STATE(179), 1,
      aux_sym__units_repeat1,
    ACTIONS(746), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SLASH,
    ACTIONS(799), 1,
      anon_sym_DOT2,
    STATE(186), 1,
      aux_sym__units_repeat1,
    ACTIONS(765), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(801), 1,
      anon_sym_DOT2,
    STATE(181), 1,
      aux_sym__units_repeat1,
    ACTIONS(746), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(781), 11,
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
  [7359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 12,
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
  [7377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    ACTIONS(808), 1,
      sym_exposant,
    ACTIONS(759), 10,
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
  [7399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      sym_exposant,
    ACTIONS(759), 10,
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
  [7421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SLASH,
    ACTIONS(799), 1,
      anon_sym_DOT2,
    STATE(181), 1,
      aux_sym__units_repeat1,
    ACTIONS(771), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SLASH,
    ACTIONS(794), 1,
      anon_sym_DOT2,
    STATE(179), 1,
      aux_sym__units_repeat1,
    ACTIONS(771), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 11,
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
  [7486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
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
  [7507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 11,
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
  [7524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DOT,
    STATE(215), 1,
      aux_sym__dottedName_repeat1,
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
  [7545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 11,
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
  [7562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DOT,
    STATE(191), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(757), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(746), 10,
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
  [7602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
    ACTIONS(781), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(746), 10,
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
  [7642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    STATE(195), 1,
      aux_sym_units_repeat1,
    ACTIONS(779), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(820), 10,
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
  [7682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SLASH,
    STATE(209), 1,
      aux_sym_units_repeat1,
    ACTIONS(786), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(788), 10,
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
  [7722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym__dottedName_repeat1,
    ACTIONS(757), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(788), 10,
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
  [7783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym__dottedName_repeat1,
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
  [7804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SLASH,
    STATE(212), 1,
      aux_sym_units_repeat1,
    ACTIONS(775), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    STATE(197), 1,
      aux_sym_units_repeat1,
    ACTIONS(786), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 11,
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
  [7882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      aux_sym_units_repeat1,
    ACTIONS(779), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym__dottedName_repeat1,
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
  [7924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
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
  [7945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      aux_sym_units_repeat1,
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
  [7966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      aux_sym_units_repeat1,
    ACTIONS(781), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    STATE(189), 1,
      aux_sym_units_repeat1,
    ACTIONS(775), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_DOT,
    STATE(215), 1,
      aux_sym__dottedName_repeat1,
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
  [8029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 10,
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
  [8045] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      aux_sym_number_token1,
    STATE(235), 1,
      sym__dottedName,
    STATE(240), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 10,
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
  [8087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(192), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(781), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(781), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8149] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(188), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8175] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      aux_sym_number_token1,
    STATE(235), 1,
      sym__dottedName,
    STATE(251), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(415), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8227] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(421), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      aux_sym_number_token1,
    STATE(246), 1,
      sym__dottedName,
    STATE(243), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8279] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      aux_sym_number_token1,
    STATE(246), 1,
      sym__dottedName,
    STATE(254), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      aux_sym_number_token1,
    STATE(246), 1,
      sym__dottedName,
    STATE(249), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(198), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8357] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(379), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      aux_sym_number_token1,
    STATE(183), 1,
      sym__dottedName,
    STATE(453), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8383] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      aux_sym_number_token1,
    STATE(235), 1,
      sym__dottedName,
    STATE(238), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [8409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(869), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(875), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(829), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(820), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(820), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8858] = 7,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__paragraph_token1,
    ACTIONS(891), 1,
      sym_text_line,
    ACTIONS(893), 1,
      sym__indent,
    ACTIONS(895), 1,
      sym__newline,
    STATE(138), 1,
      sym_meta_value,
    STATE(103), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8882] = 7,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__paragraph_token1,
    ACTIONS(891), 1,
      sym_text_line,
    ACTIONS(893), 1,
      sym__indent,
    ACTIONS(895), 1,
      sym__newline,
    STATE(105), 1,
      sym_meta_value,
    STATE(103), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8906] = 7,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__paragraph_token1,
    ACTIONS(891), 1,
      sym_text_line,
    ACTIONS(893), 1,
      sym__indent,
    ACTIONS(895), 1,
      sym__newline,
    STATE(495), 1,
      sym_meta_value,
    STATE(103), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__indent,
    ACTIONS(909), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(907), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9153] = 4,
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
  [9170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9230] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(347), 1,
      sym__array_prefix,
    ACTIONS(933), 1,
      aux_sym__remplace_rule_token1,
    STATE(246), 1,
      sym__dottedName,
    STATE(476), 1,
      aux_sym_remplace_repeat1,
    STATE(640), 1,
      sym_reference,
    STATE(641), 1,
      sym__remplace_rule,
  [9255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__dedent,
    ACTIONS(901), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__newline,
    ACTIONS(903), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__indent,
    ACTIONS(977), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(975), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__indent,
    ACTIONS(983), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(981), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [9810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
    ACTIONS(899), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      ts_builtin_sym_end,
    ACTIONS(997), 1,
      sym_name,
    ACTIONS(1000), 1,
      anon_sym_LBRACK,
    STATE(746), 1,
      sym__dottedName,
    STATE(331), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(1003), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [10002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(1007), 1,
      ts_builtin_sym_end,
    STATE(746), 1,
      sym__dottedName,
    STATE(331), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [10022] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(933), 1,
      aux_sym__remplace_rule_token1,
    ACTIONS(1009), 1,
      sym__indent,
    STATE(246), 1,
      sym__dottedName,
    STATE(611), 1,
      sym_reference,
    STATE(612), 1,
      sym__remplace_rule,
  [10044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__dedent,
    ACTIONS(997), 1,
      sym_name,
    ACTIONS(1011), 1,
      anon_sym_LBRACK,
    STATE(699), 1,
      sym__dottedName,
    STATE(335), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [10064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(1014), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [10078] = 7,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_SPACE,
    ACTIONS(1020), 1,
      aux_sym_unit_token1,
    ACTIONS(1022), 1,
      sym__indent,
    STATE(376), 1,
      sym_unit,
    STATE(486), 1,
      sym__units,
    STATE(688), 1,
      sym_units,
  [10100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(1024), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [10114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(1028), 1,
      anon_sym_LBRACK,
    ACTIONS(1030), 1,
      sym__dedent,
    STATE(699), 1,
      sym__dottedName,
    STATE(335), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [10134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(1032), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [10148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(489), 1,
      aux_sym_m_inversion_repeat1,
    STATE(630), 1,
      sym_reference,
  [10167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1036), 1,
      sym__indent,
    ACTIONS(1038), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(633), 1,
      sym_reference,
  [10186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1040), 1,
      sym__indent,
    ACTIONS(1042), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(681), 1,
      sym_reference,
  [10205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_name,
    ACTIONS(1047), 1,
      sym__dedent,
    STATE(183), 1,
      sym__dottedName,
    STATE(344), 1,
      aux_sym_m_contexte_repeat1,
    STATE(663), 1,
      sym_reference,
  [10224] = 5,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__paragraph_token1,
    ACTIONS(891), 1,
      sym_text_line,
    ACTIONS(1049), 1,
      sym__indent,
    STATE(131), 2,
      sym__text_line,
      sym__paragraph,
  [10241] = 6,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SPACE,
    ACTIONS(1053), 1,
      aux_sym_unit_token1,
    STATE(387), 1,
      sym_unit,
    STATE(399), 1,
      sym__units,
    STATE(660), 1,
      sym_units,
  [10260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1057), 1,
      aux_sym__variation_sinon_token1,
    ACTIONS(1059), 1,
      sym__indent,
    STATE(599), 1,
      sym__variation_sinon,
    STATE(616), 1,
      sym__variation_si,
  [10279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(1028), 1,
      anon_sym_LBRACK,
    STATE(699), 1,
      sym__dottedName,
    STATE(339), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [10296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(442), 1,
      aux_sym_m_inversion_repeat1,
    STATE(597), 1,
      sym_reference,
  [10315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1061), 1,
      sym__indent,
    ACTIONS(1063), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(650), 1,
      sym_reference,
  [10345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1065), 1,
      sym__indent,
    ACTIONS(1067), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(653), 1,
      sym_reference,
  [10364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(1069), 1,
      sym__dedent,
    STATE(183), 1,
      sym__dottedName,
    STATE(344), 1,
      aux_sym_m_contexte_repeat1,
    STATE(663), 1,
      sym_reference,
  [10383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(460), 1,
      aux_sym_m_inversion_repeat1,
    STATE(608), 1,
      sym_reference,
  [10402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(467), 1,
      aux_sym_m_inversion_repeat1,
    STATE(613), 1,
      sym_reference,
  [10432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1071), 1,
      sym__indent,
    ACTIONS(1073), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(614), 1,
      sym_reference,
  [10451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(427), 1,
      aux_sym_m_inversion_repeat1,
    STATE(705), 1,
      sym_reference,
  [10470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(423), 1,
      aux_sym_m_inversion_repeat1,
    STATE(707), 1,
      sym_reference,
  [10489] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1079), 1,
      sym__indent,
    STATE(706), 1,
      sym__m_tranche,
    STATE(710), 1,
      sym__m_last_tranche,
  [10508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1081), 1,
      sym__indent,
    STATE(706), 1,
      sym__m_tranche,
    STATE(720), 1,
      sym__m_last_tranche,
  [10527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(933), 1,
      aux_sym__remplace_rule_token1,
    STATE(246), 1,
      sym__dottedName,
    STATE(590), 1,
      sym_reference,
    STATE(591), 1,
      sym__remplace_rule,
  [10546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1083), 1,
      sym__indent,
    ACTIONS(1085), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(649), 1,
      sym_reference,
  [10565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 5,
      aux_sym__variation_si_token2,
      anon_sym_multiplicateur,
      anon_sym_tranches,
      aux_sym__m_tranche_token1,
      aux_sym__m_tranche_token2,
  [10587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1087), 1,
      sym__indent,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(741), 1,
      sym_reference,
  [10606] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1091), 1,
      sym__indent,
    ACTIONS(1093), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(723), 1,
      sym_reference,
  [10625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(416), 1,
      aux_sym_m_inversion_repeat1,
    STATE(722), 1,
      sym_reference,
  [10644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1095), 1,
      sym__indent,
    ACTIONS(1097), 1,
      sym__newline,
    STATE(235), 1,
      sym__dottedName,
    STATE(631), 1,
      sym_reference,
  [10663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1099), 1,
      sym__indent,
    STATE(648), 1,
      sym__m_last_tranche,
    STATE(706), 1,
      sym__m_tranche,
  [10682] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(402), 1,
      aux_sym_m_inversion_repeat1,
    STATE(618), 1,
      sym_reference,
  [10701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1101), 1,
      sym__indent,
    STATE(647), 1,
      sym__m_last_tranche,
    STATE(706), 1,
      sym__m_tranche,
  [10720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    STATE(626), 1,
      sym__m_last_tranche,
    STATE(727), 1,
      sym__m_tranche,
  [10736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(1103), 1,
      sym__indent,
    STATE(246), 1,
      sym__dottedName,
    STATE(619), 1,
      sym_reference,
  [10752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1057), 1,
      aux_sym__variation_sinon_token1,
    STATE(553), 1,
      sym__variation_sinon,
    STATE(602), 1,
      sym__variation_si,
  [10768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_DOT2,
    STATE(394), 1,
      aux_sym__units_repeat1,
    ACTIONS(765), 2,
      sym__newline,
      anon_sym_SLASH,
  [10782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [10802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_DOT2,
    STATE(389), 1,
      aux_sym__units_repeat1,
    ACTIONS(771), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    STATE(628), 1,
      sym__m_last_tranche,
    STATE(727), 1,
      sym__m_tranche,
  [10832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(1109), 1,
      sym__indent,
    STATE(235), 1,
      sym__dottedName,
    STATE(588), 1,
      sym_reference,
  [10848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1111), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1113), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [10864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1115), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1117), 1,
      sym__indent,
    STATE(706), 1,
      sym__m_tranche,
  [10880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    STATE(683), 1,
      sym__m_last_tranche,
    STATE(727), 1,
      sym__m_tranche,
  [10896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      sym_exposant,
    ACTIONS(759), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym_exposant,
    ACTIONS(759), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_DOT2,
    STATE(379), 1,
      aux_sym__units_repeat1,
    ACTIONS(765), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_DOT2,
    STATE(388), 1,
      aux_sym__units_repeat1,
    ACTIONS(746), 2,
      sym__newline,
      anon_sym_SLASH,
  [10948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_DOT2,
    STATE(389), 1,
      aux_sym__units_repeat1,
    ACTIONS(746), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__m_tranche_token1,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    STATE(689), 1,
      sym__m_last_tranche,
    STATE(727), 1,
      sym__m_tranche,
  [10978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1129), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1131), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [10994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [11004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 4,
      sym__dedent,
      anon_sym_jusqu_SQUOTEu00e0,
      anon_sym_unitu00e9,
      aux_sym__m_tranche_token2,
  [11014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_DOT2,
    STATE(388), 1,
      aux_sym__units_repeat1,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_SLASH,
  [11028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_depuis,
    ACTIONS(1135), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1137), 1,
      anon_sym_unitu00e9,
    ACTIONS(1139), 1,
      sym__dedent,
  [11044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(183), 1,
      sym__dottedName,
    STATE(353), 1,
      aux_sym_m_contexte_repeat1,
    STATE(663), 1,
      sym_reference,
  [11060] = 5,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym__key,
    ACTIONS(1143), 1,
      sym_text_line,
    STATE(443), 1,
      aux_sym__text_line_repeat1,
    STATE(444), 1,
      aux_sym_object_repeat1,
  [11076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_unit_token1,
    STATE(178), 1,
      sym_unit,
    STATE(221), 1,
      sym__units,
  [11089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__dedent,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    STATE(464), 1,
      aux_sym_units_repeat1,
  [11102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1151), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1153), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      sym__dedent,
    ACTIONS(1165), 1,
      sym__array_prefix,
    STATE(408), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_unit_token1,
    STATE(180), 1,
      sym_unit,
    STATE(199), 1,
      sym__units,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1172), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1176), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [11274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1178), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [11336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_unit_token1,
    STATE(180), 1,
      sym_unit,
    STATE(220), 1,
      sym__units,
  [11349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1184), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1188), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1190), 1,
      sym__dedent,
  [11375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1192), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1194), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      aux_sym__remplace_rule_token2,
    ACTIONS(1198), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1200), 1,
      sym__dedent,
  [11441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_unit_token1,
    STATE(387), 1,
      sym_unit,
    STATE(473), 1,
      sym__units,
  [11463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym__dedent,
    ACTIONS(1206), 1,
      sym__array_prefix,
    STATE(408), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym__dedent,
    ACTIONS(1210), 1,
      sym__array_prefix,
    STATE(408), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_unit_token1,
    STATE(376), 1,
      sym_unit,
    STATE(488), 1,
      sym__units,
  [11529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(579), 1,
      sym_reference,
  [11542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_unit_token1,
    STATE(168), 1,
      sym_unit,
    STATE(175), 1,
      sym__units,
  [11555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1212), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1214), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11581] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_text_line,
    ACTIONS(1216), 1,
      sym__dedent,
    STATE(483), 1,
      aux_sym__text_line_repeat1,
  [11594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym__key,
    ACTIONS(1220), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym_object_repeat1,
  [11607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_jusqu_SQUOTEu00e0,
    ACTIONS(1224), 1,
      anon_sym_unitu00e9,
    ACTIONS(1226), 1,
      sym__dedent,
  [11620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym_name,
    STATE(246), 1,
      sym__dottedName,
    STATE(581), 1,
      sym_reference,
  [11633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_unit_token1,
    STATE(178), 1,
      sym_unit,
    STATE(207), 1,
      sym__units,
  [11673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1115), 1,
      aux_sym__m_tranche_token1,
    STATE(727), 1,
      sym__m_tranche,
  [11686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__array_prefix,
    ACTIONS(1228), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_m_array_repeat1,
  [11699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(843), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [11712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1230), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      aux_sym__variation_si_token1,
    ACTIONS(1234), 1,
      sym__indent,
    STATE(616), 1,
      sym__variation_si,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1236), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym__dedent,
    ACTIONS(1240), 1,
      sym__array_prefix,
    STATE(468), 1,
      aux_sym_m_variations_repeat1,
  [11764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__dedent,
    ACTIONS(1242), 1,
      anon_sym_SLASH,
    STATE(459), 1,
      aux_sym_units_repeat1,
  [11786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1245), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [11808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym__dedent,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    STATE(459), 1,
      aux_sym_units_repeat1,
  [11821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_unit_token1,
    STATE(168), 1,
      sym_unit,
    STATE(182), 1,
      sym__units,
  [11834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__dedent,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    STATE(459), 1,
      aux_sym_units_repeat1,
  [11847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1249), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_unit_token1,
    STATE(387), 1,
      sym_unit,
    STATE(507), 1,
      sym__units,
  [11873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1251), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym__dedent,
    ACTIONS(1255), 1,
      sym__array_prefix,
    STATE(468), 1,
      aux_sym_m_variations_repeat1,
  [11899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [11908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1260), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [11934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym__dedent,
    ACTIONS(1264), 1,
      sym__array_prefix,
    STATE(408), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__dedent,
    ACTIONS(1145), 1,
      anon_sym_SLASH,
    STATE(462), 1,
      aux_sym_units_repeat1,
  [11960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym__dedent,
    ACTIONS(1268), 1,
      sym__array_prefix,
    STATE(408), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__array_prefix,
    ACTIONS(1270), 1,
      sym__dedent,
    STATE(48), 1,
      aux_sym_remplace_repeat1,
  [11995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [12004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__newline,
    ACTIONS(1272), 1,
      anon_sym_SLASH,
    STATE(478), 1,
      aux_sym_units_repeat1,
  [12017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [12026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym__newline,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    STATE(478), 1,
      aux_sym_units_repeat1,
  [12039] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_text_line,
    ACTIONS(1277), 1,
      sym__dedent,
    STATE(483), 1,
      aux_sym__text_line_repeat1,
  [12052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      sym__key,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(482), 1,
      aux_sym_object_repeat1,
  [12065] = 4,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_text_line,
    ACTIONS(1287), 1,
      sym__dedent,
    STATE(483), 1,
      aux_sym__text_line_repeat1,
  [12078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__newline,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    STATE(478), 1,
      aux_sym_units_repeat1,
  [12091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_unit_token1,
    STATE(376), 1,
      sym_unit,
    STATE(496), 1,
      sym__units,
  [12104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__newline,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    STATE(484), 1,
      aux_sym_units_repeat1,
  [12117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [12126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__newline,
    ACTIONS(1275), 1,
      anon_sym_SLASH,
    STATE(480), 1,
      aux_sym_units_repeat1,
  [12139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1289), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [12152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    ACTIONS(1291), 1,
      sym__dedent,
    STATE(43), 1,
      aux_sym_m_inversion_repeat1,
  [12165] = 3,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1287), 1,
      sym__dedent,
    ACTIONS(1293), 1,
      sym_text_line,
  [12175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(456), 1,
      aux_sym_m_inversion_repeat1,
  [12185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(465), 1,
      aux_sym_m_inversion_repeat1,
  [12195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_unit_token1,
    STATE(477), 1,
      sym_unit,
  [12205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 2,
      sym__dedent,
      sym__key,
  [12213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      sym__newline,
      anon_sym_SLASH,
  [12221] = 3,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_text_line,
    STATE(443), 1,
      aux_sym__text_line_repeat1,
  [12231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      aux_sym__variation_si_token1,
    STATE(602), 1,
      sym__variation_si,
  [12241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(490), 1,
      aux_sym_m_inversion_repeat1,
  [12251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 2,
      anon_sym_oui,
      anon_sym_non,
  [12259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(441), 1,
      aux_sym_m_inversion_repeat1,
  [12269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__indent,
    ACTIONS(1299), 1,
      sym__newline,
  [12279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_unit_token1,
    STATE(174), 1,
      sym_unit,
  [12289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(391), 1,
      aux_sym_m_inversion_repeat1,
  [12299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(403), 1,
      aux_sym_m_inversion_repeat1,
  [12309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym_unit_token1,
    STATE(458), 1,
      sym_unit,
  [12319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      sym__dedent,
      anon_sym_SLASH,
  [12327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym__m_tranche_token2,
    ACTIONS(1303), 1,
      sym__dedent,
  [12337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 2,
      sym__dedent,
      sym__array_prefix,
  [12345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym__indent,
    ACTIONS(1309), 1,
      sym__newline,
  [12355] = 3,
    ACTIONS(725), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_text_line,
    STATE(481), 1,
      aux_sym__text_line_repeat1,
  [12365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 2,
      sym__dedent,
      sym_name,
  [12373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 2,
      sym__dedent,
      sym__array_prefix,
  [12381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1317), 1,
      sym__dedent,
  [12391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_unitu00e9,
    ACTIONS(1321), 1,
      sym__dedent,
  [12401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(470), 1,
      aux_sym_m_inversion_repeat1,
  [12411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_multiplicateur,
    ACTIONS(1325), 1,
      anon_sym_tranches,
  [12421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__array_prefix,
    STATE(46), 1,
      aux_sym_remplace_repeat1,
  [12431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      aux_sym_m_une_possibilitu00e9_token2,
    ACTIONS(1329), 1,
      aux_sym_m_une_possibilitu00e9_token3,
  [12441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(412), 1,
      aux_sym_m_inversion_repeat1,
  [12451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(414), 1,
      aux_sym_m_inversion_repeat1,
  [12461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__array_prefix,
    STATE(457), 1,
      aux_sym_m_variations_repeat1,
  [12471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(50), 1,
      aux_sym_m_inversion_repeat1,
  [12481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(471), 1,
      aux_sym_m_inversion_repeat1,
  [12491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 2,
      sym__dedent,
      sym_name,
  [12499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(454), 1,
      aux_sym_m_inversion_repeat1,
  [12509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym__dedent,
      sym_name,
  [12517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__array_prefix,
    STATE(472), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__array_prefix,
    STATE(474), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_unitu00e9,
    ACTIONS(1337), 1,
      sym__dedent,
  [12547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__array_prefix,
    STATE(44), 1,
      aux_sym_m_array_repeat1,
  [12557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__array_prefix,
    STATE(452), 1,
      aux_sym_m_array_repeat1,
  [12567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1341), 1,
      sym__dedent,
  [12577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym__indent,
    ACTIONS(1345), 1,
      sym__newline,
  [12587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym__indent,
    ACTIONS(1349), 1,
      sym__newline,
  [12597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 2,
      sym__dedent,
      sym__array_prefix,
  [12605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1113), 1,
      sym__dedent,
  [12615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_unit_token1,
    STATE(196), 1,
      sym_unit,
  [12625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__indent,
    ACTIONS(1355), 1,
      sym__newline,
  [12635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym__indent,
    ACTIONS(1359), 1,
      sym__newline,
  [12645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym__indent,
    ACTIONS(1363), 1,
      sym__newline,
  [12655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 2,
      sym__dedent,
      sym__array_prefix,
  [12663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(428), 1,
      aux_sym_m_inversion_repeat1,
  [12673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_unit_token1,
    STATE(194), 1,
      sym_unit,
  [12683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__array_prefix,
    STATE(436), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__array_prefix,
    STATE(435), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [12703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(702), 1,
      sym__dottedName,
  [12713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__array_prefix,
    STATE(382), 1,
      aux_sym_m_inversion_repeat1,
  [12723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    STATE(740), 1,
      sym__dottedName,
  [12733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      sym__dedent,
      sym_name,
  [12741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      aux_sym__remplace_rule_token3,
    ACTIONS(1131), 1,
      sym__dedent,
  [12751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      sym__dedent,
      sym_name,
  [12759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      sym__dedent,
  [12766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_COLON,
  [12773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym__dedent,
  [12780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym__dedent,
  [12787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym__dedent,
  [12794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym__dedent,
  [12801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym__newline,
  [12808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_COLON,
  [12815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_COLON,
  [12822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym__dedent,
  [12829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_COLON,
  [12836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym__dedent,
  [12843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym__dedent,
  [12850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_COLON,
  [12857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym__dedent,
  [12864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym__dedent,
  [12871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON,
  [12878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_COLON,
  [12885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_COLON,
  [12892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym__dedent,
  [12899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym__dedent,
  [12906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      aux_sym__variation_si_token2,
  [12913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym__dedent,
  [12920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_COLON,
  [12927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym__dedent,
  [12934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_COLON,
  [12941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym__dedent,
  [12948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym__newline,
  [12955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym__dedent,
  [12962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      sym__dedent,
  [12969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym__dedent,
  [12976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      sym__dedent,
  [12983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym__dedent,
  [12990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      sym__dedent,
  [12997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      sym__dedent,
  [13004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      sym__newline,
  [13011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym__dedent,
  [13018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      sym__dedent,
  [13025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym__dedent,
  [13032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      sym__dedent,
  [13039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      sym__dedent,
  [13046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      aux_sym_m_une_possibilitu00e9_token3,
  [13053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym__dedent,
  [13060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym__newline,
  [13067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym__dedent,
  [13074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_COLON,
  [13081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      sym__dedent,
  [13088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_COLON,
  [13095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      sym__dedent,
  [13102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      sym__dedent,
  [13109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      sym__dedent,
  [13116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym__dedent,
  [13123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym__dedent,
  [13130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      sym__dedent,
  [13137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym__dedent,
  [13144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym__dedent,
  [13151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      sym__dedent,
  [13158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym__dedent,
  [13165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym__dedent,
  [13172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      sym__dedent,
  [13179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym__dedent,
  [13186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      sym__newline,
  [13193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_COLON,
  [13200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      sym__dedent,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_COLON,
  [13214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym__dedent,
  [13221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      sym__dedent,
  [13228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      sym__dedent,
  [13235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      sym__newline,
  [13242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      sym__newline,
  [13249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      sym__dedent,
  [13256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      sym__dedent,
  [13263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      sym__dedent,
  [13270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      sym__dedent,
  [13277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      sym__dedent,
  [13284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      sym__dedent,
  [13291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__dedent,
  [13298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      sym__dedent,
  [13305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      sym__newline,
  [13312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_COLON,
  [13319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      sym__newline,
  [13326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      sym__dedent,
  [13333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      sym__dedent,
  [13340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      sym__dedent,
  [13347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      sym__dedent,
  [13354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      sym__dedent,
  [13361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      sym__dedent,
  [13368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      sym__dedent,
  [13375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      sym__dedent,
  [13382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [13389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_COLON,
  [13396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_COLON,
  [13403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_COLON,
  [13410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_COLON,
  [13417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      sym__dedent,
  [13424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      sym__dedent,
  [13431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      sym__newline,
  [13438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      sym__newline,
  [13445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      anon_sym_COLON,
  [13452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_tranches,
  [13459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      sym__newline,
  [13466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      sym__dedent,
  [13473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      sym__dedent,
  [13480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym__dedent,
  [13487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_COLON,
  [13494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      sym_name,
  [13501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_COLON,
  [13508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      sym__dedent,
  [13515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_COLON,
  [13522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_COLON,
  [13529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_COLON,
  [13536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      sym__dedent,
  [13543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      sym__dedent,
  [13550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      sym__dedent,
  [13557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      sym__dedent,
  [13564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      sym__dedent,
  [13571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      sym__newline,
  [13578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_COLON,
  [13585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      anon_sym_COLON,
  [13592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      sym__dedent,
  [13599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      sym__dedent,
  [13606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_COLON,
  [13613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      sym__dedent,
  [13620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      sym__newline,
  [13627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      sym__newline,
  [13634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      sym__newline,
  [13641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      sym__dedent,
  [13648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      sym__dedent,
  [13655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      sym__newline,
  [13662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      sym_name,
  [13669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      sym__dedent,
  [13676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      sym__dedent,
  [13683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      sym_tag,
  [13690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_COLON,
  [13697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_assiette,
  [13704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      sym__newline,
  [13711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      sym__dedent,
  [13718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      sym__newline,
  [13725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      sym__dedent,
  [13732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      aux_sym__m_tranche_token1,
  [13739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym__m_tranche_token2,
  [13746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      sym__dedent,
  [13753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      sym__dedent,
  [13760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 1,
      sym__newline,
  [13767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      sym__dedent,
  [13774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      sym__dedent,
  [13781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      anon_sym_COLON,
  [13788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      sym__dedent,
  [13795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      sym__dedent,
  [13802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_COLON,
  [13809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_COLON,
  [13816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym__dedent,
  [13823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym__dedent,
  [13830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      sym__dedent,
  [13837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym__dedent,
  [13844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      sym__newline,
  [13851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      sym__dedent,
  [13858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      sym__dedent,
  [13865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      sym__dedent,
  [13872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      sym_paragraph,
  [13879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_oui,
  [13886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      sym__indent,
  [13893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      sym__indent,
  [13900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__indent,
  [13907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      sym__indent,
  [13914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      sym__indent,
  [13921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      sym__indent,
  [13928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      sym__dedent,
  [13935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_COLON,
  [13942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym__dedent,
  [13949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      sym__newline,
  [13956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_COLON,
  [13963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_COLON,
  [13970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COLON,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      sym__dedent,
  [13984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_COLON,
  [13991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_COLON,
  [13998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_COLON,
  [14005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_COLON,
  [14012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_COLON,
  [14019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_COLON,
  [14026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_COLON,
  [14033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_COLON,
  [14040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_COLON,
  [14047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_COLON,
  [14054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_COLON,
  [14061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_COLON,
  [14068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_COLON,
  [14075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      sym__newline,
  [14082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      sym__newline,
  [14089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      sym__dedent,
  [14096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      sym_name,
  [14103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_RBRACK,
  [14110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_COLON,
  [14117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      ts_builtin_sym_end,
  [14124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_RBRACK,
  [14131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 244,
  [SMALL_STATE(5)] = 366,
  [SMALL_STATE(6)] = 488,
  [SMALL_STATE(7)] = 589,
  [SMALL_STATE(8)] = 687,
  [SMALL_STATE(9)] = 782,
  [SMALL_STATE(10)] = 877,
  [SMALL_STATE(11)] = 972,
  [SMALL_STATE(12)] = 1067,
  [SMALL_STATE(13)] = 1162,
  [SMALL_STATE(14)] = 1241,
  [SMALL_STATE(15)] = 1320,
  [SMALL_STATE(16)] = 1399,
  [SMALL_STATE(17)] = 1460,
  [SMALL_STATE(18)] = 1521,
  [SMALL_STATE(19)] = 1582,
  [SMALL_STATE(20)] = 1643,
  [SMALL_STATE(21)] = 1693,
  [SMALL_STATE(22)] = 1751,
  [SMALL_STATE(23)] = 1801,
  [SMALL_STATE(24)] = 1859,
  [SMALL_STATE(25)] = 1917,
  [SMALL_STATE(26)] = 1975,
  [SMALL_STATE(27)] = 2033,
  [SMALL_STATE(28)] = 2083,
  [SMALL_STATE(29)] = 2141,
  [SMALL_STATE(30)] = 2199,
  [SMALL_STATE(31)] = 2249,
  [SMALL_STATE(32)] = 2299,
  [SMALL_STATE(33)] = 2357,
  [SMALL_STATE(34)] = 2415,
  [SMALL_STATE(35)] = 2473,
  [SMALL_STATE(36)] = 2531,
  [SMALL_STATE(37)] = 2589,
  [SMALL_STATE(38)] = 2647,
  [SMALL_STATE(39)] = 2697,
  [SMALL_STATE(40)] = 2747,
  [SMALL_STATE(41)] = 2805,
  [SMALL_STATE(42)] = 2863,
  [SMALL_STATE(43)] = 2921,
  [SMALL_STATE(44)] = 2953,
  [SMALL_STATE(45)] = 2984,
  [SMALL_STATE(46)] = 3011,
  [SMALL_STATE(47)] = 3042,
  [SMALL_STATE(48)] = 3073,
  [SMALL_STATE(49)] = 3104,
  [SMALL_STATE(50)] = 3131,
  [SMALL_STATE(51)] = 3162,
  [SMALL_STATE(52)] = 3208,
  [SMALL_STATE(53)] = 3252,
  [SMALL_STATE(54)] = 3300,
  [SMALL_STATE(55)] = 3346,
  [SMALL_STATE(56)] = 3392,
  [SMALL_STATE(57)] = 3438,
  [SMALL_STATE(58)] = 3484,
  [SMALL_STATE(59)] = 3530,
  [SMALL_STATE(60)] = 3576,
  [SMALL_STATE(61)] = 3622,
  [SMALL_STATE(62)] = 3648,
  [SMALL_STATE(63)] = 3674,
  [SMALL_STATE(64)] = 3700,
  [SMALL_STATE(65)] = 3744,
  [SMALL_STATE(66)] = 3790,
  [SMALL_STATE(67)] = 3836,
  [SMALL_STATE(68)] = 3882,
  [SMALL_STATE(69)] = 3928,
  [SMALL_STATE(70)] = 3974,
  [SMALL_STATE(71)] = 4020,
  [SMALL_STATE(72)] = 4066,
  [SMALL_STATE(73)] = 4112,
  [SMALL_STATE(74)] = 4158,
  [SMALL_STATE(75)] = 4204,
  [SMALL_STATE(76)] = 4250,
  [SMALL_STATE(77)] = 4296,
  [SMALL_STATE(78)] = 4344,
  [SMALL_STATE(79)] = 4390,
  [SMALL_STATE(80)] = 4436,
  [SMALL_STATE(81)] = 4482,
  [SMALL_STATE(82)] = 4528,
  [SMALL_STATE(83)] = 4574,
  [SMALL_STATE(84)] = 4620,
  [SMALL_STATE(85)] = 4666,
  [SMALL_STATE(86)] = 4712,
  [SMALL_STATE(87)] = 4758,
  [SMALL_STATE(88)] = 4784,
  [SMALL_STATE(89)] = 4810,
  [SMALL_STATE(90)] = 4836,
  [SMALL_STATE(91)] = 4862,
  [SMALL_STATE(92)] = 4908,
  [SMALL_STATE(93)] = 4954,
  [SMALL_STATE(94)] = 5000,
  [SMALL_STATE(95)] = 5046,
  [SMALL_STATE(96)] = 5092,
  [SMALL_STATE(97)] = 5138,
  [SMALL_STATE(98)] = 5184,
  [SMALL_STATE(99)] = 5230,
  [SMALL_STATE(100)] = 5278,
  [SMALL_STATE(101)] = 5322,
  [SMALL_STATE(102)] = 5347,
  [SMALL_STATE(103)] = 5372,
  [SMALL_STATE(104)] = 5397,
  [SMALL_STATE(105)] = 5422,
  [SMALL_STATE(106)] = 5447,
  [SMALL_STATE(107)] = 5472,
  [SMALL_STATE(108)] = 5497,
  [SMALL_STATE(109)] = 5522,
  [SMALL_STATE(110)] = 5547,
  [SMALL_STATE(111)] = 5572,
  [SMALL_STATE(112)] = 5597,
  [SMALL_STATE(113)] = 5622,
  [SMALL_STATE(114)] = 5647,
  [SMALL_STATE(115)] = 5672,
  [SMALL_STATE(116)] = 5697,
  [SMALL_STATE(117)] = 5722,
  [SMALL_STATE(118)] = 5747,
  [SMALL_STATE(119)] = 5772,
  [SMALL_STATE(120)] = 5797,
  [SMALL_STATE(121)] = 5822,
  [SMALL_STATE(122)] = 5847,
  [SMALL_STATE(123)] = 5872,
  [SMALL_STATE(124)] = 5897,
  [SMALL_STATE(125)] = 5922,
  [SMALL_STATE(126)] = 5947,
  [SMALL_STATE(127)] = 5972,
  [SMALL_STATE(128)] = 5997,
  [SMALL_STATE(129)] = 6022,
  [SMALL_STATE(130)] = 6047,
  [SMALL_STATE(131)] = 6072,
  [SMALL_STATE(132)] = 6097,
  [SMALL_STATE(133)] = 6122,
  [SMALL_STATE(134)] = 6147,
  [SMALL_STATE(135)] = 6172,
  [SMALL_STATE(136)] = 6197,
  [SMALL_STATE(137)] = 6222,
  [SMALL_STATE(138)] = 6247,
  [SMALL_STATE(139)] = 6272,
  [SMALL_STATE(140)] = 6297,
  [SMALL_STATE(141)] = 6322,
  [SMALL_STATE(142)] = 6347,
  [SMALL_STATE(143)] = 6372,
  [SMALL_STATE(144)] = 6397,
  [SMALL_STATE(145)] = 6422,
  [SMALL_STATE(146)] = 6447,
  [SMALL_STATE(147)] = 6472,
  [SMALL_STATE(148)] = 6497,
  [SMALL_STATE(149)] = 6522,
  [SMALL_STATE(150)] = 6547,
  [SMALL_STATE(151)] = 6572,
  [SMALL_STATE(152)] = 6597,
  [SMALL_STATE(153)] = 6622,
  [SMALL_STATE(154)] = 6647,
  [SMALL_STATE(155)] = 6672,
  [SMALL_STATE(156)] = 6697,
  [SMALL_STATE(157)] = 6722,
  [SMALL_STATE(158)] = 6747,
  [SMALL_STATE(159)] = 6772,
  [SMALL_STATE(160)] = 6797,
  [SMALL_STATE(161)] = 6829,
  [SMALL_STATE(162)] = 6861,
  [SMALL_STATE(163)] = 6885,
  [SMALL_STATE(164)] = 6909,
  [SMALL_STATE(165)] = 6935,
  [SMALL_STATE(166)] = 6967,
  [SMALL_STATE(167)] = 6991,
  [SMALL_STATE(168)] = 7015,
  [SMALL_STATE(169)] = 7041,
  [SMALL_STATE(170)] = 7067,
  [SMALL_STATE(171)] = 7090,
  [SMALL_STATE(172)] = 7113,
  [SMALL_STATE(173)] = 7136,
  [SMALL_STATE(174)] = 7155,
  [SMALL_STATE(175)] = 7176,
  [SMALL_STATE(176)] = 7199,
  [SMALL_STATE(177)] = 7220,
  [SMALL_STATE(178)] = 7243,
  [SMALL_STATE(179)] = 7267,
  [SMALL_STATE(180)] = 7291,
  [SMALL_STATE(181)] = 7315,
  [SMALL_STATE(182)] = 7339,
  [SMALL_STATE(183)] = 7359,
  [SMALL_STATE(184)] = 7377,
  [SMALL_STATE(185)] = 7399,
  [SMALL_STATE(186)] = 7421,
  [SMALL_STATE(187)] = 7445,
  [SMALL_STATE(188)] = 7469,
  [SMALL_STATE(189)] = 7486,
  [SMALL_STATE(190)] = 7507,
  [SMALL_STATE(191)] = 7524,
  [SMALL_STATE(192)] = 7545,
  [SMALL_STATE(193)] = 7562,
  [SMALL_STATE(194)] = 7583,
  [SMALL_STATE(195)] = 7602,
  [SMALL_STATE(196)] = 7623,
  [SMALL_STATE(197)] = 7642,
  [SMALL_STATE(198)] = 7663,
  [SMALL_STATE(199)] = 7682,
  [SMALL_STATE(200)] = 7703,
  [SMALL_STATE(201)] = 7722,
  [SMALL_STATE(202)] = 7743,
  [SMALL_STATE(203)] = 7764,
  [SMALL_STATE(204)] = 7783,
  [SMALL_STATE(205)] = 7804,
  [SMALL_STATE(206)] = 7825,
  [SMALL_STATE(207)] = 7844,
  [SMALL_STATE(208)] = 7865,
  [SMALL_STATE(209)] = 7882,
  [SMALL_STATE(210)] = 7903,
  [SMALL_STATE(211)] = 7924,
  [SMALL_STATE(212)] = 7945,
  [SMALL_STATE(213)] = 7966,
  [SMALL_STATE(214)] = 7987,
  [SMALL_STATE(215)] = 8008,
  [SMALL_STATE(216)] = 8029,
  [SMALL_STATE(217)] = 8045,
  [SMALL_STATE(218)] = 8071,
  [SMALL_STATE(219)] = 8087,
  [SMALL_STATE(220)] = 8113,
  [SMALL_STATE(221)] = 8131,
  [SMALL_STATE(222)] = 8149,
  [SMALL_STATE(223)] = 8175,
  [SMALL_STATE(224)] = 8201,
  [SMALL_STATE(225)] = 8227,
  [SMALL_STATE(226)] = 8253,
  [SMALL_STATE(227)] = 8279,
  [SMALL_STATE(228)] = 8305,
  [SMALL_STATE(229)] = 8331,
  [SMALL_STATE(230)] = 8357,
  [SMALL_STATE(231)] = 8383,
  [SMALL_STATE(232)] = 8409,
  [SMALL_STATE(233)] = 8426,
  [SMALL_STATE(234)] = 8443,
  [SMALL_STATE(235)] = 8462,
  [SMALL_STATE(236)] = 8477,
  [SMALL_STATE(237)] = 8494,
  [SMALL_STATE(238)] = 8511,
  [SMALL_STATE(239)] = 8526,
  [SMALL_STATE(240)] = 8547,
  [SMALL_STATE(241)] = 8562,
  [SMALL_STATE(242)] = 8577,
  [SMALL_STATE(243)] = 8594,
  [SMALL_STATE(244)] = 8609,
  [SMALL_STATE(245)] = 8624,
  [SMALL_STATE(246)] = 8643,
  [SMALL_STATE(247)] = 8658,
  [SMALL_STATE(248)] = 8675,
  [SMALL_STATE(249)] = 8692,
  [SMALL_STATE(250)] = 8707,
  [SMALL_STATE(251)] = 8722,
  [SMALL_STATE(252)] = 8739,
  [SMALL_STATE(253)] = 8760,
  [SMALL_STATE(254)] = 8781,
  [SMALL_STATE(255)] = 8798,
  [SMALL_STATE(256)] = 8813,
  [SMALL_STATE(257)] = 8828,
  [SMALL_STATE(258)] = 8843,
  [SMALL_STATE(259)] = 8858,
  [SMALL_STATE(260)] = 8882,
  [SMALL_STATE(261)] = 8906,
  [SMALL_STATE(262)] = 8930,
  [SMALL_STATE(263)] = 8943,
  [SMALL_STATE(264)] = 8958,
  [SMALL_STATE(265)] = 8973,
  [SMALL_STATE(266)] = 8986,
  [SMALL_STATE(267)] = 9001,
  [SMALL_STATE(268)] = 9018,
  [SMALL_STATE(269)] = 9033,
  [SMALL_STATE(270)] = 9048,
  [SMALL_STATE(271)] = 9063,
  [SMALL_STATE(272)] = 9078,
  [SMALL_STATE(273)] = 9093,
  [SMALL_STATE(274)] = 9108,
  [SMALL_STATE(275)] = 9123,
  [SMALL_STATE(276)] = 9138,
  [SMALL_STATE(277)] = 9153,
  [SMALL_STATE(278)] = 9170,
  [SMALL_STATE(279)] = 9185,
  [SMALL_STATE(280)] = 9200,
  [SMALL_STATE(281)] = 9215,
  [SMALL_STATE(282)] = 9230,
  [SMALL_STATE(283)] = 9255,
  [SMALL_STATE(284)] = 9270,
  [SMALL_STATE(285)] = 9285,
  [SMALL_STATE(286)] = 9300,
  [SMALL_STATE(287)] = 9315,
  [SMALL_STATE(288)] = 9330,
  [SMALL_STATE(289)] = 9345,
  [SMALL_STATE(290)] = 9360,
  [SMALL_STATE(291)] = 9375,
  [SMALL_STATE(292)] = 9390,
  [SMALL_STATE(293)] = 9405,
  [SMALL_STATE(294)] = 9420,
  [SMALL_STATE(295)] = 9435,
  [SMALL_STATE(296)] = 9450,
  [SMALL_STATE(297)] = 9465,
  [SMALL_STATE(298)] = 9480,
  [SMALL_STATE(299)] = 9495,
  [SMALL_STATE(300)] = 9510,
  [SMALL_STATE(301)] = 9525,
  [SMALL_STATE(302)] = 9540,
  [SMALL_STATE(303)] = 9553,
  [SMALL_STATE(304)] = 9568,
  [SMALL_STATE(305)] = 9583,
  [SMALL_STATE(306)] = 9598,
  [SMALL_STATE(307)] = 9613,
  [SMALL_STATE(308)] = 9628,
  [SMALL_STATE(309)] = 9641,
  [SMALL_STATE(310)] = 9656,
  [SMALL_STATE(311)] = 9671,
  [SMALL_STATE(312)] = 9686,
  [SMALL_STATE(313)] = 9701,
  [SMALL_STATE(314)] = 9716,
  [SMALL_STATE(315)] = 9731,
  [SMALL_STATE(316)] = 9746,
  [SMALL_STATE(317)] = 9761,
  [SMALL_STATE(318)] = 9776,
  [SMALL_STATE(319)] = 9793,
  [SMALL_STATE(320)] = 9810,
  [SMALL_STATE(321)] = 9825,
  [SMALL_STATE(322)] = 9840,
  [SMALL_STATE(323)] = 9853,
  [SMALL_STATE(324)] = 9868,
  [SMALL_STATE(325)] = 9883,
  [SMALL_STATE(326)] = 9896,
  [SMALL_STATE(327)] = 9911,
  [SMALL_STATE(328)] = 9926,
  [SMALL_STATE(329)] = 9941,
  [SMALL_STATE(330)] = 9956,
  [SMALL_STATE(331)] = 9968,
  [SMALL_STATE(332)] = 9988,
  [SMALL_STATE(333)] = 10002,
  [SMALL_STATE(334)] = 10022,
  [SMALL_STATE(335)] = 10044,
  [SMALL_STATE(336)] = 10064,
  [SMALL_STATE(337)] = 10078,
  [SMALL_STATE(338)] = 10100,
  [SMALL_STATE(339)] = 10114,
  [SMALL_STATE(340)] = 10134,
  [SMALL_STATE(341)] = 10148,
  [SMALL_STATE(342)] = 10167,
  [SMALL_STATE(343)] = 10186,
  [SMALL_STATE(344)] = 10205,
  [SMALL_STATE(345)] = 10224,
  [SMALL_STATE(346)] = 10241,
  [SMALL_STATE(347)] = 10260,
  [SMALL_STATE(348)] = 10279,
  [SMALL_STATE(349)] = 10296,
  [SMALL_STATE(350)] = 10315,
  [SMALL_STATE(351)] = 10326,
  [SMALL_STATE(352)] = 10345,
  [SMALL_STATE(353)] = 10364,
  [SMALL_STATE(354)] = 10383,
  [SMALL_STATE(355)] = 10402,
  [SMALL_STATE(356)] = 10413,
  [SMALL_STATE(357)] = 10432,
  [SMALL_STATE(358)] = 10451,
  [SMALL_STATE(359)] = 10470,
  [SMALL_STATE(360)] = 10489,
  [SMALL_STATE(361)] = 10508,
  [SMALL_STATE(362)] = 10527,
  [SMALL_STATE(363)] = 10546,
  [SMALL_STATE(364)] = 10565,
  [SMALL_STATE(365)] = 10576,
  [SMALL_STATE(366)] = 10587,
  [SMALL_STATE(367)] = 10606,
  [SMALL_STATE(368)] = 10625,
  [SMALL_STATE(369)] = 10644,
  [SMALL_STATE(370)] = 10663,
  [SMALL_STATE(371)] = 10682,
  [SMALL_STATE(372)] = 10701,
  [SMALL_STATE(373)] = 10720,
  [SMALL_STATE(374)] = 10736,
  [SMALL_STATE(375)] = 10752,
  [SMALL_STATE(376)] = 10768,
  [SMALL_STATE(377)] = 10782,
  [SMALL_STATE(378)] = 10792,
  [SMALL_STATE(379)] = 10802,
  [SMALL_STATE(380)] = 10816,
  [SMALL_STATE(381)] = 10832,
  [SMALL_STATE(382)] = 10848,
  [SMALL_STATE(383)] = 10864,
  [SMALL_STATE(384)] = 10880,
  [SMALL_STATE(385)] = 10896,
  [SMALL_STATE(386)] = 10908,
  [SMALL_STATE(387)] = 10920,
  [SMALL_STATE(388)] = 10934,
  [SMALL_STATE(389)] = 10948,
  [SMALL_STATE(390)] = 10962,
  [SMALL_STATE(391)] = 10978,
  [SMALL_STATE(392)] = 10994,
  [SMALL_STATE(393)] = 11004,
  [SMALL_STATE(394)] = 11014,
  [SMALL_STATE(395)] = 11028,
  [SMALL_STATE(396)] = 11044,
  [SMALL_STATE(397)] = 11060,
  [SMALL_STATE(398)] = 11076,
  [SMALL_STATE(399)] = 11089,
  [SMALL_STATE(400)] = 11102,
  [SMALL_STATE(401)] = 11111,
  [SMALL_STATE(402)] = 11120,
  [SMALL_STATE(403)] = 11133,
  [SMALL_STATE(404)] = 11146,
  [SMALL_STATE(405)] = 11155,
  [SMALL_STATE(406)] = 11164,
  [SMALL_STATE(407)] = 11173,
  [SMALL_STATE(408)] = 11182,
  [SMALL_STATE(409)] = 11195,
  [SMALL_STATE(410)] = 11204,
  [SMALL_STATE(411)] = 11213,
  [SMALL_STATE(412)] = 11226,
  [SMALL_STATE(413)] = 11239,
  [SMALL_STATE(414)] = 11248,
  [SMALL_STATE(415)] = 11261,
  [SMALL_STATE(416)] = 11274,
  [SMALL_STATE(417)] = 11287,
  [SMALL_STATE(418)] = 11296,
  [SMALL_STATE(419)] = 11305,
  [SMALL_STATE(420)] = 11314,
  [SMALL_STATE(421)] = 11323,
  [SMALL_STATE(422)] = 11336,
  [SMALL_STATE(423)] = 11349,
  [SMALL_STATE(424)] = 11362,
  [SMALL_STATE(425)] = 11375,
  [SMALL_STATE(426)] = 11384,
  [SMALL_STATE(427)] = 11393,
  [SMALL_STATE(428)] = 11406,
  [SMALL_STATE(429)] = 11419,
  [SMALL_STATE(430)] = 11428,
  [SMALL_STATE(431)] = 11441,
  [SMALL_STATE(432)] = 11450,
  [SMALL_STATE(433)] = 11463,
  [SMALL_STATE(434)] = 11472,
  [SMALL_STATE(435)] = 11481,
  [SMALL_STATE(436)] = 11494,
  [SMALL_STATE(437)] = 11507,
  [SMALL_STATE(438)] = 11516,
  [SMALL_STATE(439)] = 11529,
  [SMALL_STATE(440)] = 11542,
  [SMALL_STATE(441)] = 11555,
  [SMALL_STATE(442)] = 11568,
  [SMALL_STATE(443)] = 11581,
  [SMALL_STATE(444)] = 11594,
  [SMALL_STATE(445)] = 11607,
  [SMALL_STATE(446)] = 11620,
  [SMALL_STATE(447)] = 11633,
  [SMALL_STATE(448)] = 11642,
  [SMALL_STATE(449)] = 11651,
  [SMALL_STATE(450)] = 11660,
  [SMALL_STATE(451)] = 11673,
  [SMALL_STATE(452)] = 11686,
  [SMALL_STATE(453)] = 11699,
  [SMALL_STATE(454)] = 11712,
  [SMALL_STATE(455)] = 11725,
  [SMALL_STATE(456)] = 11738,
  [SMALL_STATE(457)] = 11751,
  [SMALL_STATE(458)] = 11764,
  [SMALL_STATE(459)] = 11773,
  [SMALL_STATE(460)] = 11786,
  [SMALL_STATE(461)] = 11799,
  [SMALL_STATE(462)] = 11808,
  [SMALL_STATE(463)] = 11821,
  [SMALL_STATE(464)] = 11834,
  [SMALL_STATE(465)] = 11847,
  [SMALL_STATE(466)] = 11860,
  [SMALL_STATE(467)] = 11873,
  [SMALL_STATE(468)] = 11886,
  [SMALL_STATE(469)] = 11899,
  [SMALL_STATE(470)] = 11908,
  [SMALL_STATE(471)] = 11921,
  [SMALL_STATE(472)] = 11934,
  [SMALL_STATE(473)] = 11947,
  [SMALL_STATE(474)] = 11960,
  [SMALL_STATE(475)] = 11973,
  [SMALL_STATE(476)] = 11982,
  [SMALL_STATE(477)] = 11995,
  [SMALL_STATE(478)] = 12004,
  [SMALL_STATE(479)] = 12017,
  [SMALL_STATE(480)] = 12026,
  [SMALL_STATE(481)] = 12039,
  [SMALL_STATE(482)] = 12052,
  [SMALL_STATE(483)] = 12065,
  [SMALL_STATE(484)] = 12078,
  [SMALL_STATE(485)] = 12091,
  [SMALL_STATE(486)] = 12104,
  [SMALL_STATE(487)] = 12117,
  [SMALL_STATE(488)] = 12126,
  [SMALL_STATE(489)] = 12139,
  [SMALL_STATE(490)] = 12152,
  [SMALL_STATE(491)] = 12165,
  [SMALL_STATE(492)] = 12175,
  [SMALL_STATE(493)] = 12185,
  [SMALL_STATE(494)] = 12195,
  [SMALL_STATE(495)] = 12205,
  [SMALL_STATE(496)] = 12213,
  [SMALL_STATE(497)] = 12221,
  [SMALL_STATE(498)] = 12231,
  [SMALL_STATE(499)] = 12241,
  [SMALL_STATE(500)] = 12251,
  [SMALL_STATE(501)] = 12259,
  [SMALL_STATE(502)] = 12269,
  [SMALL_STATE(503)] = 12279,
  [SMALL_STATE(504)] = 12289,
  [SMALL_STATE(505)] = 12299,
  [SMALL_STATE(506)] = 12309,
  [SMALL_STATE(507)] = 12319,
  [SMALL_STATE(508)] = 12327,
  [SMALL_STATE(509)] = 12337,
  [SMALL_STATE(510)] = 12345,
  [SMALL_STATE(511)] = 12355,
  [SMALL_STATE(512)] = 12365,
  [SMALL_STATE(513)] = 12373,
  [SMALL_STATE(514)] = 12381,
  [SMALL_STATE(515)] = 12391,
  [SMALL_STATE(516)] = 12401,
  [SMALL_STATE(517)] = 12411,
  [SMALL_STATE(518)] = 12421,
  [SMALL_STATE(519)] = 12431,
  [SMALL_STATE(520)] = 12441,
  [SMALL_STATE(521)] = 12451,
  [SMALL_STATE(522)] = 12461,
  [SMALL_STATE(523)] = 12471,
  [SMALL_STATE(524)] = 12481,
  [SMALL_STATE(525)] = 12491,
  [SMALL_STATE(526)] = 12499,
  [SMALL_STATE(527)] = 12509,
  [SMALL_STATE(528)] = 12517,
  [SMALL_STATE(529)] = 12527,
  [SMALL_STATE(530)] = 12537,
  [SMALL_STATE(531)] = 12547,
  [SMALL_STATE(532)] = 12557,
  [SMALL_STATE(533)] = 12567,
  [SMALL_STATE(534)] = 12577,
  [SMALL_STATE(535)] = 12587,
  [SMALL_STATE(536)] = 12597,
  [SMALL_STATE(537)] = 12605,
  [SMALL_STATE(538)] = 12615,
  [SMALL_STATE(539)] = 12625,
  [SMALL_STATE(540)] = 12635,
  [SMALL_STATE(541)] = 12645,
  [SMALL_STATE(542)] = 12655,
  [SMALL_STATE(543)] = 12663,
  [SMALL_STATE(544)] = 12673,
  [SMALL_STATE(545)] = 12683,
  [SMALL_STATE(546)] = 12693,
  [SMALL_STATE(547)] = 12703,
  [SMALL_STATE(548)] = 12713,
  [SMALL_STATE(549)] = 12723,
  [SMALL_STATE(550)] = 12733,
  [SMALL_STATE(551)] = 12741,
  [SMALL_STATE(552)] = 12751,
  [SMALL_STATE(553)] = 12759,
  [SMALL_STATE(554)] = 12766,
  [SMALL_STATE(555)] = 12773,
  [SMALL_STATE(556)] = 12780,
  [SMALL_STATE(557)] = 12787,
  [SMALL_STATE(558)] = 12794,
  [SMALL_STATE(559)] = 12801,
  [SMALL_STATE(560)] = 12808,
  [SMALL_STATE(561)] = 12815,
  [SMALL_STATE(562)] = 12822,
  [SMALL_STATE(563)] = 12829,
  [SMALL_STATE(564)] = 12836,
  [SMALL_STATE(565)] = 12843,
  [SMALL_STATE(566)] = 12850,
  [SMALL_STATE(567)] = 12857,
  [SMALL_STATE(568)] = 12864,
  [SMALL_STATE(569)] = 12871,
  [SMALL_STATE(570)] = 12878,
  [SMALL_STATE(571)] = 12885,
  [SMALL_STATE(572)] = 12892,
  [SMALL_STATE(573)] = 12899,
  [SMALL_STATE(574)] = 12906,
  [SMALL_STATE(575)] = 12913,
  [SMALL_STATE(576)] = 12920,
  [SMALL_STATE(577)] = 12927,
  [SMALL_STATE(578)] = 12934,
  [SMALL_STATE(579)] = 12941,
  [SMALL_STATE(580)] = 12948,
  [SMALL_STATE(581)] = 12955,
  [SMALL_STATE(582)] = 12962,
  [SMALL_STATE(583)] = 12969,
  [SMALL_STATE(584)] = 12976,
  [SMALL_STATE(585)] = 12983,
  [SMALL_STATE(586)] = 12990,
  [SMALL_STATE(587)] = 12997,
  [SMALL_STATE(588)] = 13004,
  [SMALL_STATE(589)] = 13011,
  [SMALL_STATE(590)] = 13018,
  [SMALL_STATE(591)] = 13025,
  [SMALL_STATE(592)] = 13032,
  [SMALL_STATE(593)] = 13039,
  [SMALL_STATE(594)] = 13046,
  [SMALL_STATE(595)] = 13053,
  [SMALL_STATE(596)] = 13060,
  [SMALL_STATE(597)] = 13067,
  [SMALL_STATE(598)] = 13074,
  [SMALL_STATE(599)] = 13081,
  [SMALL_STATE(600)] = 13088,
  [SMALL_STATE(601)] = 13095,
  [SMALL_STATE(602)] = 13102,
  [SMALL_STATE(603)] = 13109,
  [SMALL_STATE(604)] = 13116,
  [SMALL_STATE(605)] = 13123,
  [SMALL_STATE(606)] = 13130,
  [SMALL_STATE(607)] = 13137,
  [SMALL_STATE(608)] = 13144,
  [SMALL_STATE(609)] = 13151,
  [SMALL_STATE(610)] = 13158,
  [SMALL_STATE(611)] = 13165,
  [SMALL_STATE(612)] = 13172,
  [SMALL_STATE(613)] = 13179,
  [SMALL_STATE(614)] = 13186,
  [SMALL_STATE(615)] = 13193,
  [SMALL_STATE(616)] = 13200,
  [SMALL_STATE(617)] = 13207,
  [SMALL_STATE(618)] = 13214,
  [SMALL_STATE(619)] = 13221,
  [SMALL_STATE(620)] = 13228,
  [SMALL_STATE(621)] = 13235,
  [SMALL_STATE(622)] = 13242,
  [SMALL_STATE(623)] = 13249,
  [SMALL_STATE(624)] = 13256,
  [SMALL_STATE(625)] = 13263,
  [SMALL_STATE(626)] = 13270,
  [SMALL_STATE(627)] = 13277,
  [SMALL_STATE(628)] = 13284,
  [SMALL_STATE(629)] = 13291,
  [SMALL_STATE(630)] = 13298,
  [SMALL_STATE(631)] = 13305,
  [SMALL_STATE(632)] = 13312,
  [SMALL_STATE(633)] = 13319,
  [SMALL_STATE(634)] = 13326,
  [SMALL_STATE(635)] = 13333,
  [SMALL_STATE(636)] = 13340,
  [SMALL_STATE(637)] = 13347,
  [SMALL_STATE(638)] = 13354,
  [SMALL_STATE(639)] = 13361,
  [SMALL_STATE(640)] = 13368,
  [SMALL_STATE(641)] = 13375,
  [SMALL_STATE(642)] = 13382,
  [SMALL_STATE(643)] = 13389,
  [SMALL_STATE(644)] = 13396,
  [SMALL_STATE(645)] = 13403,
  [SMALL_STATE(646)] = 13410,
  [SMALL_STATE(647)] = 13417,
  [SMALL_STATE(648)] = 13424,
  [SMALL_STATE(649)] = 13431,
  [SMALL_STATE(650)] = 13438,
  [SMALL_STATE(651)] = 13445,
  [SMALL_STATE(652)] = 13452,
  [SMALL_STATE(653)] = 13459,
  [SMALL_STATE(654)] = 13466,
  [SMALL_STATE(655)] = 13473,
  [SMALL_STATE(656)] = 13480,
  [SMALL_STATE(657)] = 13487,
  [SMALL_STATE(658)] = 13494,
  [SMALL_STATE(659)] = 13501,
  [SMALL_STATE(660)] = 13508,
  [SMALL_STATE(661)] = 13515,
  [SMALL_STATE(662)] = 13522,
  [SMALL_STATE(663)] = 13529,
  [SMALL_STATE(664)] = 13536,
  [SMALL_STATE(665)] = 13543,
  [SMALL_STATE(666)] = 13550,
  [SMALL_STATE(667)] = 13557,
  [SMALL_STATE(668)] = 13564,
  [SMALL_STATE(669)] = 13571,
  [SMALL_STATE(670)] = 13578,
  [SMALL_STATE(671)] = 13585,
  [SMALL_STATE(672)] = 13592,
  [SMALL_STATE(673)] = 13599,
  [SMALL_STATE(674)] = 13606,
  [SMALL_STATE(675)] = 13613,
  [SMALL_STATE(676)] = 13620,
  [SMALL_STATE(677)] = 13627,
  [SMALL_STATE(678)] = 13634,
  [SMALL_STATE(679)] = 13641,
  [SMALL_STATE(680)] = 13648,
  [SMALL_STATE(681)] = 13655,
  [SMALL_STATE(682)] = 13662,
  [SMALL_STATE(683)] = 13669,
  [SMALL_STATE(684)] = 13676,
  [SMALL_STATE(685)] = 13683,
  [SMALL_STATE(686)] = 13690,
  [SMALL_STATE(687)] = 13697,
  [SMALL_STATE(688)] = 13704,
  [SMALL_STATE(689)] = 13711,
  [SMALL_STATE(690)] = 13718,
  [SMALL_STATE(691)] = 13725,
  [SMALL_STATE(692)] = 13732,
  [SMALL_STATE(693)] = 13739,
  [SMALL_STATE(694)] = 13746,
  [SMALL_STATE(695)] = 13753,
  [SMALL_STATE(696)] = 13760,
  [SMALL_STATE(697)] = 13767,
  [SMALL_STATE(698)] = 13774,
  [SMALL_STATE(699)] = 13781,
  [SMALL_STATE(700)] = 13788,
  [SMALL_STATE(701)] = 13795,
  [SMALL_STATE(702)] = 13802,
  [SMALL_STATE(703)] = 13809,
  [SMALL_STATE(704)] = 13816,
  [SMALL_STATE(705)] = 13823,
  [SMALL_STATE(706)] = 13830,
  [SMALL_STATE(707)] = 13837,
  [SMALL_STATE(708)] = 13844,
  [SMALL_STATE(709)] = 13851,
  [SMALL_STATE(710)] = 13858,
  [SMALL_STATE(711)] = 13865,
  [SMALL_STATE(712)] = 13872,
  [SMALL_STATE(713)] = 13879,
  [SMALL_STATE(714)] = 13886,
  [SMALL_STATE(715)] = 13893,
  [SMALL_STATE(716)] = 13900,
  [SMALL_STATE(717)] = 13907,
  [SMALL_STATE(718)] = 13914,
  [SMALL_STATE(719)] = 13921,
  [SMALL_STATE(720)] = 13928,
  [SMALL_STATE(721)] = 13935,
  [SMALL_STATE(722)] = 13942,
  [SMALL_STATE(723)] = 13949,
  [SMALL_STATE(724)] = 13956,
  [SMALL_STATE(725)] = 13963,
  [SMALL_STATE(726)] = 13970,
  [SMALL_STATE(727)] = 13977,
  [SMALL_STATE(728)] = 13984,
  [SMALL_STATE(729)] = 13991,
  [SMALL_STATE(730)] = 13998,
  [SMALL_STATE(731)] = 14005,
  [SMALL_STATE(732)] = 14012,
  [SMALL_STATE(733)] = 14019,
  [SMALL_STATE(734)] = 14026,
  [SMALL_STATE(735)] = 14033,
  [SMALL_STATE(736)] = 14040,
  [SMALL_STATE(737)] = 14047,
  [SMALL_STATE(738)] = 14054,
  [SMALL_STATE(739)] = 14061,
  [SMALL_STATE(740)] = 14068,
  [SMALL_STATE(741)] = 14075,
  [SMALL_STATE(742)] = 14082,
  [SMALL_STATE(743)] = 14089,
  [SMALL_STATE(744)] = 14096,
  [SMALL_STATE(745)] = 14103,
  [SMALL_STATE(746)] = 14110,
  [SMALL_STATE(747)] = 14117,
  [SMALL_STATE(748)] = 14124,
  [SMALL_STATE(749)] = 14131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(739),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(738),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(737),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(736),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(735),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(734),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(733),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(732),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(731),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(730),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(729),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(728),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(726),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(725),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(724),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(260),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(738),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(737),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(736),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(735),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(734),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(733),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(732),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(731),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(730),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(374),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 11),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4, .production_id = 16),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 2, .production_id = 18), SHIFT_REPEAT(334),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3, .production_id = 20),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 7),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 7),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remplace_repeat1, 5, .production_id = 25),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remplace_repeat1, 5, .production_id = 25),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formule, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 10),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 8),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 8),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 24),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 31),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 31),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 8),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 5, .production_id = 11),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 35),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 35),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 34),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 11),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 11),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 31),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 31),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 3, .production_id = 11),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 12),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 12),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formule, 5),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formule, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 43),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 43),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5, .production_id = 16),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 5),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 23),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 22),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 26),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 26),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 20, .production_id = 61),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 20, .production_id = 61),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 19, .production_id = 61),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 19, .production_id = 61),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 5),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remplace, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 28),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_avec, 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_avec, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 44),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 44),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 56),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 56),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 47),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 47),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 48),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 48),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 44),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 44),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 56),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 56),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 47),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 47),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 27),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 27),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 9),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 9),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 16, .production_id = 52),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 16, .production_id = 52),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(744),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(503),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dottedName, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 13),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(463),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 7),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 8),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(544),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(538),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(398),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(658),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(422),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dottedName_repeat1, 2), SHIFT_REPEAT(682),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(685),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(749),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(166),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 37),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(494),
  [1126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(506),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 32),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 8, .production_id = 17),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 15),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 33),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 7, .production_id = 14),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 12),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 30),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 30), SHIFT_REPEAT(383),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 10),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 9),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 38),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 10, .production_id = 21),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 57),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 54),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(466),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 9, .production_id = 19),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 53),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(455),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(485),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(261),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(676),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 12, .production_id = 49),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_last_tranche, 3, .production_id = 46),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 5, .production_id = 45),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 41),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 39),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 5),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 36),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_sinon, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 15, .production_id = 60),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 59),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 14, .production_id = 58),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 13, .production_id = 55),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 51),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 6, .production_id = 50),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 42),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 9, .production_id = 40),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_si, 6),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1725] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
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
