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
#define STATE_COUNT 669
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 59

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_SQUOTE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COLON = 6,
  sym_m_unary_name = 7,
  sym_m_array_name = 8,
  anon_sym_jour = 9,
  anon_sym_mois = 10,
  anon_sym_an = 11,
  anon_sym_annu00e9ecivile = 12,
  anon_sym_trimestre = 13,
  anon_sym_trimestrecivil = 14,
  sym_m_baru00e8me_like_name = 15,
  anon_sym_oui = 16,
  sym_tag = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  aux_sym_ar_unary_expression_token1 = 20,
  aux_sym_ar_binary_expression_token1 = 21,
  aux_sym_ar_binary_expression_token2 = 22,
  anon_sym_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_DOT = 29,
  sym_comment = 30,
  anon_sym_non = 31,
  aux_sym_string_token1 = 32,
  aux_sym_string_token2 = 33,
  sym_date = 34,
  aux_sym_number_token1 = 35,
  aux_sym_units_token1 = 36,
  anon_sym_SLASH = 37,
  anon_sym_DOT2 = 38,
  aux_sym_unit_token1 = 39,
  sym_exposant = 40,
  sym_importer = 41,
  sym_depuis = 42,
  sym_nom = 43,
  sym_source = 44,
  sym_url = 45,
  sym_dans = 46,
  sym_les_ru00e8gles = 47,
  sym_formule = 48,
  sym_avec = 49,
  sym_remplace = 50,
  sym_ru00e9fu00e9rences_u00e0 = 51,
  sym_sauf_dans = 52,
  sym_une_possibilitu00e9 = 53,
  sym_choix_obligatoire = 54,
  sym_possibilitu00e9s = 55,
  sym_texte = 56,
  sym_assiette = 57,
  sym_montant = 58,
  sym_multiplicateur = 59,
  sym_tranches = 60,
  sym_plafond = 61,
  sym_taux = 62,
  sym_inversion_numu00e9rique = 63,
  sym_contexte = 64,
  sym_variations = 65,
  sym_si = 66,
  sym_alors = 67,
  sym_sinon = 68,
  sym_duru00e9e = 69,
  sym_jusqu_u00e0 = 70,
  sym_unitu00e9 = 71,
  sym_variable_manquante = 72,
  sym_meta_name = 73,
  aux_sym__paragraph_token1 = 74,
  sym__key = 75,
  sym_text_line = 76,
  sym__indent = 77,
  sym__dedent = 78,
  sym__array_prefix = 79,
  sym__newline = 80,
  sym_paragraph = 81,
  sym_error_recovery_mode = 82,
  sym_source_file = 83,
  sym_import = 84,
  sym_import_from = 85,
  sym__import_name = 86,
  sym__import_source = 87,
  sym__import_url = 88,
  sym__import_into = 89,
  sym_import_rules = 90,
  sym_import_rule = 91,
  sym_rule = 92,
  sym_rule_body = 93,
  sym__statement = 94,
  sym_s_formule = 95,
  sym__valeur = 96,
  sym_mechanism = 97,
  sym_m_unary = 98,
  sym_m_array = 99,
  sym__m_special = 100,
  sym_m_inversion = 101,
  sym_m_contexte = 102,
  sym_m_variations = 103,
  sym_m_variation_si = 104,
  sym_m_variation_sinon = 105,
  sym_m_unitu00e9 = 106,
  sym_m_duru00e9e = 107,
  sym__date_or_ref = 108,
  sym_m_duru00e9e_units = 109,
  sym_m_baru00e8me_like = 110,
  sym_tranche = 111,
  sym__m_taux_or_montant = 112,
  sym_m_texte = 113,
  sym_m_une_possibilitu00e9 = 114,
  sym_m_une_possibilitu00e9_options = 115,
  sym_m_variable_manquante = 116,
  sym_s_avec = 117,
  sym_s_remplace = 118,
  sym__remplace_rule = 119,
  sym_remplace_rule_in = 120,
  sym_remplace_rule_except = 121,
  sym__tags = 122,
  sym__expression = 123,
  sym__ar_expression = 124,
  sym_ar_unary_expression = 125,
  sym_ar_binary_expression = 126,
  sym__bool_expression = 127,
  sym_comparison = 128,
  sym_dotted_name = 129,
  sym_reference = 130,
  sym_boolean = 131,
  sym_string = 132,
  sym_number = 133,
  sym_units = 134,
  sym__units = 135,
  sym_unit = 136,
  sym_meta = 137,
  sym_custom_meta = 138,
  sym_meta_value = 139,
  sym__text_line = 140,
  sym__paragraph = 141,
  sym_object = 142,
  aux_sym_source_file_repeat1 = 143,
  aux_sym_import_rules_repeat1 = 144,
  aux_sym_rule_body_repeat1 = 145,
  aux_sym__valeur_repeat1 = 146,
  aux_sym_m_array_repeat1 = 147,
  aux_sym_m_inversion_repeat1 = 148,
  aux_sym_m_contexte_repeat1 = 149,
  aux_sym_m_variations_repeat1 = 150,
  aux_sym_m_baru00e8me_like_repeat1 = 151,
  aux_sym_s_remplace_repeat1 = 152,
  aux_sym_dotted_name_repeat1 = 153,
  aux_sym_units_repeat1 = 154,
  aux_sym__units_repeat1 = 155,
  aux_sym__text_line_repeat1 = 156,
  aux_sym_object_repeat1 = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_m_unary_name] = "m_unary_name",
  [sym_m_array_name] = "m_array_name",
  [anon_sym_jour] = "jour",
  [anon_sym_mois] = "mois",
  [anon_sym_an] = "an",
  [anon_sym_annu00e9ecivile] = "ann\u00e9e civile",
  [anon_sym_trimestre] = "trimestre",
  [anon_sym_trimestrecivil] = "trimestre civil",
  [sym_m_baru00e8me_like_name] = "m_bar\u00e8me_like_name",
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_date] = "date",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_units_token1] = "units_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT2] = ".",
  [aux_sym_unit_token1] = "unit_token1",
  [sym_exposant] = "exposant",
  [sym_importer] = "importer",
  [sym_depuis] = "depuis",
  [sym_nom] = "nom",
  [sym_source] = "source",
  [sym_url] = "url",
  [sym_dans] = "dans",
  [sym_les_ru00e8gles] = "les_r\u00e8gles",
  [sym_formule] = "formule",
  [sym_avec] = "avec",
  [sym_remplace] = "remplace",
  [sym_ru00e9fu00e9rences_u00e0] = "r\u00e9f\u00e9rences_\u00e0",
  [sym_sauf_dans] = "sauf_dans",
  [sym_une_possibilitu00e9] = "une_possibilit\u00e9",
  [sym_choix_obligatoire] = "choix_obligatoire",
  [sym_possibilitu00e9s] = "possibilit\u00e9s",
  [sym_texte] = "texte",
  [sym_assiette] = "assiette",
  [sym_montant] = "montant",
  [sym_multiplicateur] = "multiplicateur",
  [sym_tranches] = "tranches",
  [sym_plafond] = "plafond",
  [sym_taux] = "taux",
  [sym_inversion_numu00e9rique] = "inversion_num\u00e9rique",
  [sym_contexte] = "contexte",
  [sym_variations] = "variations",
  [sym_si] = "si",
  [sym_alors] = "alors",
  [sym_sinon] = "sinon",
  [sym_duru00e9e] = "dur\u00e9e",
  [sym_jusqu_u00e0] = "jusqu_\u00e0",
  [sym_unitu00e9] = "unit\u00e9",
  [sym_variable_manquante] = "variable_manquante",
  [sym_meta_name] = "meta_name",
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
  [sym_import] = "import",
  [sym_import_from] = "import_from",
  [sym__import_name] = "_import_name",
  [sym__import_source] = "_import_source",
  [sym__import_url] = "_import_url",
  [sym__import_into] = "_import_into",
  [sym_import_rules] = "import_rules",
  [sym_import_rule] = "import_rule",
  [sym_rule] = "rule",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_s_formule] = "s_formule",
  [sym__valeur] = "_valeur",
  [sym_mechanism] = "mechanism",
  [sym_m_unary] = "m_unary",
  [sym_m_array] = "m_array",
  [sym__m_special] = "_m_special",
  [sym_m_inversion] = "m_inversion",
  [sym_m_contexte] = "m_contexte",
  [sym_m_variations] = "m_variations",
  [sym_m_variation_si] = "m_variation_si",
  [sym_m_variation_sinon] = "m_variation_sinon",
  [sym_m_unitu00e9] = "m_unit\u00e9",
  [sym_m_duru00e9e] = "m_dur\u00e9e",
  [sym__date_or_ref] = "_date_or_ref",
  [sym_m_duru00e9e_units] = "m_dur\u00e9e_units",
  [sym_m_baru00e8me_like] = "m_bar\u00e8me_like",
  [sym_tranche] = "tranche",
  [sym__m_taux_or_montant] = "_m_taux_or_montant",
  [sym_m_texte] = "m_texte",
  [sym_m_une_possibilitu00e9] = "m_une_possibilit\u00e9",
  [sym_m_une_possibilitu00e9_options] = "m_une_possibilit\u00e9_options",
  [sym_m_variable_manquante] = "m_variable_manquante",
  [sym_s_avec] = "s_avec",
  [sym_s_remplace] = "s_remplace",
  [sym__remplace_rule] = "_remplace_rule",
  [sym_remplace_rule_in] = "remplace_rule_in",
  [sym_remplace_rule_except] = "remplace_rule_except",
  [sym__tags] = "_tags",
  [sym__expression] = "_expression",
  [sym__ar_expression] = "_ar_expression",
  [sym_ar_unary_expression] = "ar_unary_expression",
  [sym_ar_binary_expression] = "ar_binary_expression",
  [sym__bool_expression] = "_bool_expression",
  [sym_comparison] = "comparison",
  [sym_dotted_name] = "dotted_name",
  [sym_reference] = "reference",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
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
  [aux_sym_import_rules_repeat1] = "import_rules_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym__valeur_repeat1] = "_valeur_repeat1",
  [aux_sym_m_array_repeat1] = "m_array_repeat1",
  [aux_sym_m_inversion_repeat1] = "m_inversion_repeat1",
  [aux_sym_m_contexte_repeat1] = "m_contexte_repeat1",
  [aux_sym_m_variations_repeat1] = "m_variations_repeat1",
  [aux_sym_m_baru00e8me_like_repeat1] = "m_bar\u00e8me_like_repeat1",
  [aux_sym_s_remplace_repeat1] = "s_remplace_repeat1",
  [aux_sym_dotted_name_repeat1] = "dotted_name_repeat1",
  [aux_sym_units_repeat1] = "units_repeat1",
  [aux_sym__units_repeat1] = "_units_repeat1",
  [aux_sym__text_line_repeat1] = "_text_line_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_m_unary_name] = sym_m_unary_name,
  [sym_m_array_name] = sym_m_array_name,
  [anon_sym_jour] = anon_sym_jour,
  [anon_sym_mois] = anon_sym_mois,
  [anon_sym_an] = anon_sym_an,
  [anon_sym_annu00e9ecivile] = anon_sym_annu00e9ecivile,
  [anon_sym_trimestre] = anon_sym_trimestre,
  [anon_sym_trimestrecivil] = anon_sym_trimestrecivil,
  [sym_m_baru00e8me_like_name] = sym_m_baru00e8me_like_name,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_date] = sym_date,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_units_token1] = aux_sym_units_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT2] = anon_sym_DOT2,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [sym_exposant] = sym_exposant,
  [sym_importer] = sym_importer,
  [sym_depuis] = sym_depuis,
  [sym_nom] = sym_nom,
  [sym_source] = sym_source,
  [sym_url] = sym_url,
  [sym_dans] = sym_dans,
  [sym_les_ru00e8gles] = sym_les_ru00e8gles,
  [sym_formule] = sym_formule,
  [sym_avec] = sym_avec,
  [sym_remplace] = sym_remplace,
  [sym_ru00e9fu00e9rences_u00e0] = sym_ru00e9fu00e9rences_u00e0,
  [sym_sauf_dans] = sym_sauf_dans,
  [sym_une_possibilitu00e9] = sym_une_possibilitu00e9,
  [sym_choix_obligatoire] = sym_choix_obligatoire,
  [sym_possibilitu00e9s] = sym_possibilitu00e9s,
  [sym_texte] = sym_texte,
  [sym_assiette] = sym_assiette,
  [sym_montant] = sym_montant,
  [sym_multiplicateur] = sym_multiplicateur,
  [sym_tranches] = sym_tranches,
  [sym_plafond] = sym_plafond,
  [sym_taux] = sym_taux,
  [sym_inversion_numu00e9rique] = sym_inversion_numu00e9rique,
  [sym_contexte] = sym_contexte,
  [sym_variations] = sym_variations,
  [sym_si] = sym_si,
  [sym_alors] = sym_alors,
  [sym_sinon] = sym_sinon,
  [sym_duru00e9e] = sym_duru00e9e,
  [sym_jusqu_u00e0] = sym_jusqu_u00e0,
  [sym_unitu00e9] = sym_unitu00e9,
  [sym_variable_manquante] = sym_variable_manquante,
  [sym_meta_name] = sym_meta_name,
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
  [sym_import] = sym_import,
  [sym_import_from] = sym_import_from,
  [sym__import_name] = sym__import_name,
  [sym__import_source] = sym__import_source,
  [sym__import_url] = sym__import_url,
  [sym__import_into] = sym__import_into,
  [sym_import_rules] = sym_import_rules,
  [sym_import_rule] = sym_import_rule,
  [sym_rule] = sym_rule,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_s_formule] = sym_s_formule,
  [sym__valeur] = sym__valeur,
  [sym_mechanism] = sym_mechanism,
  [sym_m_unary] = sym_m_unary,
  [sym_m_array] = sym_m_array,
  [sym__m_special] = sym__m_special,
  [sym_m_inversion] = sym_m_inversion,
  [sym_m_contexte] = sym_m_contexte,
  [sym_m_variations] = sym_m_variations,
  [sym_m_variation_si] = sym_m_variation_si,
  [sym_m_variation_sinon] = sym_m_variation_sinon,
  [sym_m_unitu00e9] = sym_m_unitu00e9,
  [sym_m_duru00e9e] = sym_m_duru00e9e,
  [sym__date_or_ref] = sym__date_or_ref,
  [sym_m_duru00e9e_units] = sym_m_duru00e9e_units,
  [sym_m_baru00e8me_like] = sym_m_baru00e8me_like,
  [sym_tranche] = sym_tranche,
  [sym__m_taux_or_montant] = sym__m_taux_or_montant,
  [sym_m_texte] = sym_m_texte,
  [sym_m_une_possibilitu00e9] = sym_m_une_possibilitu00e9,
  [sym_m_une_possibilitu00e9_options] = sym_m_une_possibilitu00e9_options,
  [sym_m_variable_manquante] = sym_m_variable_manquante,
  [sym_s_avec] = sym_s_avec,
  [sym_s_remplace] = sym_s_remplace,
  [sym__remplace_rule] = sym__remplace_rule,
  [sym_remplace_rule_in] = sym_remplace_rule_in,
  [sym_remplace_rule_except] = sym_remplace_rule_except,
  [sym__tags] = sym__tags,
  [sym__expression] = sym__expression,
  [sym__ar_expression] = sym__ar_expression,
  [sym_ar_unary_expression] = sym_ar_unary_expression,
  [sym_ar_binary_expression] = sym_ar_binary_expression,
  [sym__bool_expression] = sym__bool_expression,
  [sym_comparison] = sym_comparison,
  [sym_dotted_name] = sym_dotted_name,
  [sym_reference] = sym_reference,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
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
  [aux_sym_import_rules_repeat1] = aux_sym_import_rules_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym__valeur_repeat1] = aux_sym__valeur_repeat1,
  [aux_sym_m_array_repeat1] = aux_sym_m_array_repeat1,
  [aux_sym_m_inversion_repeat1] = aux_sym_m_inversion_repeat1,
  [aux_sym_m_contexte_repeat1] = aux_sym_m_contexte_repeat1,
  [aux_sym_m_variations_repeat1] = aux_sym_m_variations_repeat1,
  [aux_sym_m_baru00e8me_like_repeat1] = aux_sym_m_baru00e8me_like_repeat1,
  [aux_sym_s_remplace_repeat1] = aux_sym_s_remplace_repeat1,
  [aux_sym_dotted_name_repeat1] = aux_sym_dotted_name_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_m_unary_name] = {
    .visible = true,
    .named = true,
  },
  [sym_m_array_name] = {
    .visible = true,
    .named = true,
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
  [sym_m_baru00e8me_like_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_date] = {
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
  [sym_importer] = {
    .visible = true,
    .named = true,
  },
  [sym_depuis] = {
    .visible = true,
    .named = true,
  },
  [sym_nom] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_dans] = {
    .visible = true,
    .named = true,
  },
  [sym_les_ru00e8gles] = {
    .visible = true,
    .named = true,
  },
  [sym_formule] = {
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
  [sym_ru00e9fu00e9rences_u00e0] = {
    .visible = true,
    .named = true,
  },
  [sym_sauf_dans] = {
    .visible = true,
    .named = true,
  },
  [sym_une_possibilitu00e9] = {
    .visible = true,
    .named = true,
  },
  [sym_choix_obligatoire] = {
    .visible = true,
    .named = true,
  },
  [sym_possibilitu00e9s] = {
    .visible = true,
    .named = true,
  },
  [sym_texte] = {
    .visible = true,
    .named = true,
  },
  [sym_assiette] = {
    .visible = true,
    .named = true,
  },
  [sym_montant] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicateur] = {
    .visible = true,
    .named = true,
  },
  [sym_tranches] = {
    .visible = true,
    .named = true,
  },
  [sym_plafond] = {
    .visible = true,
    .named = true,
  },
  [sym_taux] = {
    .visible = true,
    .named = true,
  },
  [sym_inversion_numu00e9rique] = {
    .visible = true,
    .named = true,
  },
  [sym_contexte] = {
    .visible = true,
    .named = true,
  },
  [sym_variations] = {
    .visible = true,
    .named = true,
  },
  [sym_si] = {
    .visible = true,
    .named = true,
  },
  [sym_alors] = {
    .visible = true,
    .named = true,
  },
  [sym_sinon] = {
    .visible = true,
    .named = true,
  },
  [sym_duru00e9e] = {
    .visible = true,
    .named = true,
  },
  [sym_jusqu_u00e0] = {
    .visible = true,
    .named = true,
  },
  [sym_unitu00e9] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_manquante] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_name] = {
    .visible = true,
    .named = true,
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
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_from] = {
    .visible = true,
    .named = true,
  },
  [sym__import_name] = {
    .visible = false,
    .named = true,
  },
  [sym__import_source] = {
    .visible = false,
    .named = true,
  },
  [sym__import_url] = {
    .visible = false,
    .named = true,
  },
  [sym__import_into] = {
    .visible = false,
    .named = true,
  },
  [sym_import_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_import_rule] = {
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
  [sym_s_formule] = {
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
  [sym_m_variation_si] = {
    .visible = true,
    .named = true,
  },
  [sym_m_variation_sinon] = {
    .visible = true,
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
  [sym__date_or_ref] = {
    .visible = false,
    .named = true,
  },
  [sym_m_duru00e9e_units] = {
    .visible = true,
    .named = true,
  },
  [sym_m_baru00e8me_like] = {
    .visible = true,
    .named = true,
  },
  [sym_tranche] = {
    .visible = true,
    .named = true,
  },
  [sym__m_taux_or_montant] = {
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
  [sym_m_une_possibilitu00e9_options] = {
    .visible = true,
    .named = true,
  },
  [sym_m_variable_manquante] = {
    .visible = true,
    .named = true,
  },
  [sym_s_avec] = {
    .visible = true,
    .named = true,
  },
  [sym_s_remplace] = {
    .visible = true,
    .named = true,
  },
  [sym__remplace_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_remplace_rule_in] = {
    .visible = true,
    .named = true,
  },
  [sym_remplace_rule_except] = {
    .visible = true,
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
  [sym_dotted_name] = {
    .visible = true,
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
  [sym_string] = {
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
  [aux_sym_import_rules_repeat1] = {
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
  [aux_sym_s_remplace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_name_repeat1] = {
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
  field_ceiling = 3,
  field_condition = 4,
  field_consequence = 5,
  field_denominators = 6,
  field_except = 7,
  field_from = 8,
  field_in = 9,
  field_into = 10,
  field_m_name = 11,
  field_meta_name = 12,
  field_meta_value = 13,
  field_multiplier = 14,
  field_name = 15,
  field_numerators = 16,
  field_options = 17,
  field_ref = 18,
  field_required = 19,
  field_rule_name = 20,
  field_rules = 21,
  field_source = 22,
  field_to = 23,
  field_unit = 24,
  field_url = 25,
  field_value = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assiette] = "assiette",
  [field_body] = "body",
  [field_ceiling] = "ceiling",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_denominators] = "denominators",
  [field_except] = "except",
  [field_from] = "from",
  [field_in] = "in",
  [field_into] = "into",
  [field_m_name] = "m_name",
  [field_meta_name] = "meta_name",
  [field_meta_value] = "meta_value",
  [field_multiplier] = "multiplier",
  [field_name] = "name",
  [field_numerators] = "numerators",
  [field_options] = "options",
  [field_ref] = "ref",
  [field_required] = "required",
  [field_rule_name] = "rule_name",
  [field_rules] = "rules",
  [field_source] = "source",
  [field_to] = "to",
  [field_unit] = "unit",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 3},
  [16] = {.index = 24, .length = 4},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 3},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 6},
  [25] = {.index = 47, .length = 3},
  [26] = {.index = 50, .length = 3},
  [27] = {.index = 53, .length = 3},
  [28] = {.index = 56, .length = 2},
  [29] = {.index = 58, .length = 2},
  [30] = {.index = 60, .length = 2},
  [31] = {.index = 62, .length = 2},
  [32] = {.index = 64, .length = 3},
  [33] = {.index = 67, .length = 3},
  [34] = {.index = 70, .length = 3},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 3},
  [37] = {.index = 79, .length = 3},
  [38] = {.index = 82, .length = 3},
  [39] = {.index = 85, .length = 2},
  [40] = {.index = 87, .length = 3},
  [41] = {.index = 90, .length = 4},
  [42] = {.index = 94, .length = 2},
  [43] = {.index = 96, .length = 4},
  [44] = {.index = 100, .length = 4},
  [45] = {.index = 104, .length = 4},
  [46] = {.index = 108, .length = 4},
  [47] = {.index = 112, .length = 1},
  [48] = {.index = 113, .length = 4},
  [49] = {.index = 117, .length = 5},
  [50] = {.index = 122, .length = 5},
  [51] = {.index = 127, .length = 3},
  [52] = {.index = 130, .length = 2},
  [53] = {.index = 132, .length = 2},
  [54] = {.index = 134, .length = 5},
  [55] = {.index = 139, .length = 5},
  [56] = {.index = 144, .length = 3},
  [57] = {.index = 147, .length = 6},
  [58] = {.index = 153, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_rule_name, 0},
  [2] =
    {field_from, 2},
  [3] =
    {field_numerators, 0},
  [4] =
    {field_into, 1},
  [5] =
    {field_from, 2},
    {field_into, 3, .inherited = true},
  [7] =
    {field_from, 2},
    {field_rules, 3},
  [9] =
    {field_m_name, 0},
  [10] =
    {field_meta_name, 0},
    {field_meta_value, 1},
  [12] =
    {field_meta_name, 0},
  [13] =
    {field_numerators, 0},
    {field_numerators, 1},
  [15] =
    {field_denominators, 1},
    {field_numerators, 0},
  [17] =
    {field_body, 5},
    {field_rule_name, 3},
  [19] =
    {field_name, 1},
  [20] =
    {field_name, 2, .inherited = true},
  [21] =
    {field_from, 2},
    {field_into, 3, .inherited = true},
    {field_rules, 4},
  [24] =
    {field_except, 2, .inherited = true},
    {field_in, 2, .inherited = true},
    {field_m_name, 0},
    {field_ref, 2, .inherited = true},
  [28] =
    {field_denominators, 2},
    {field_numerators, 0},
    {field_numerators, 1},
  [31] =
    {field_source, 1},
  [32] =
    {field_url, 1},
  [33] =
    {field_name, 2, .inherited = true},
    {field_source, 3, .inherited = true},
  [35] =
    {field_name, 2, .inherited = true},
    {field_url, 3, .inherited = true},
  [37] =
    {field_into, 1},
    {field_into, 2},
    {field_into, 3},
  [40] =
    {field_rule_name, 0},
  [41] =
    {field_except, 0, .inherited = true},
    {field_except, 1, .inherited = true},
    {field_in, 0, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 0, .inherited = true},
    {field_ref, 1, .inherited = true},
  [47] =
    {field_name, 1},
    {field_name, 2},
    {field_name, 3},
  [50] =
    {field_name, 2, .inherited = true},
    {field_source, 3, .inherited = true},
    {field_url, 4, .inherited = true},
  [53] =
    {field_except, 1, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 1, .inherited = true},
  [56] =
    {field_ref, 1},
    {field_ref, 2},
  [58] =
    {field_m_name, 0},
    {field_options, 3},
  [60] =
    {field_from, 3},
    {field_m_name, 0},
  [62] =
    {field_m_name, 0},
    {field_to, 3},
  [64] =
    {field_source, 1},
    {field_source, 2},
    {field_source, 3},
  [67] =
    {field_url, 1},
    {field_url, 2},
    {field_url, 3},
  [70] =
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [73] =
    {field_m_name, 0},
    {field_unit, 3},
    {field_unit, 4},
  [76] =
    {field_in, 4},
    {field_ref, 1},
    {field_ref, 2},
  [79] =
    {field_except, 4},
    {field_ref, 1},
    {field_ref, 2},
  [82] =
    {field_m_name, 0},
    {field_options, 5},
    {field_required, 3},
  [85] =
    {field_condition, 1},
    {field_consequence, 3},
  [87] =
    {field_from, 3},
    {field_m_name, 0},
    {field_to, 5},
  [90] =
    {field_m_name, 0},
    {field_unit, 3},
    {field_unit, 4},
    {field_unit, 5},
  [94] =
    {field_assiette, 3},
    {field_m_name, 0},
  [96] =
    {field_in, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [100] =
    {field_except, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [104] =
    {field_from, 3},
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
  [108] =
    {field_m_name, 0},
    {field_to, 3},
    {field_unit, 5},
    {field_unit, 6},
  [112] =
    {field_value, 1},
  [113] =
    {field_except, 6},
    {field_in, 4},
    {field_ref, 1},
    {field_ref, 2},
  [117] =
    {field_from, 3},
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [122] =
    {field_m_name, 0},
    {field_to, 3},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [127] =
    {field_assiette, 3},
    {field_m_name, 0},
    {field_multiplier, 5},
  [130] =
    {field_ceiling, 1},
    {field_value, 2, .inherited = true},
  [132] =
    {field_ceiling, 2},
    {field_value, 0, .inherited = true},
  [134] =
    {field_except, 7},
    {field_in, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [139] =
    {field_from, 3},
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 7},
    {field_unit, 8},
  [144] =
    {field_assiette, 3},
    {field_m_name, 0},
    {field_value, 8, .inherited = true},
  [147] =
    {field_from, 3},
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 7},
    {field_unit, 8},
    {field_unit, 9},
  [153] =
    {field_assiette, 3},
    {field_m_name, 0},
    {field_multiplier, 5},
    {field_value, 10, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [56] = {
    [8] = sym_tranche,
  },
  [58] = {
    [10] = sym_tranche,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__m_taux_or_montant, 2,
    sym__m_taux_or_montant,
    sym_tranche,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 5,
  [9] = 5,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 19,
  [32] = 32,
  [33] = 33,
  [34] = 17,
  [35] = 19,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 38,
  [45] = 45,
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 37,
  [50] = 50,
  [51] = 36,
  [52] = 40,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 41,
  [57] = 57,
  [58] = 57,
  [59] = 42,
  [60] = 42,
  [61] = 42,
  [62] = 62,
  [63] = 47,
  [64] = 64,
  [65] = 45,
  [66] = 37,
  [67] = 41,
  [68] = 45,
  [69] = 57,
  [70] = 70,
  [71] = 71,
  [72] = 47,
  [73] = 57,
  [74] = 47,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
  [140] = 134,
  [141] = 134,
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
  [152] = 138,
  [153] = 139,
  [154] = 138,
  [155] = 155,
  [156] = 143,
  [157] = 142,
  [158] = 143,
  [159] = 159,
  [160] = 137,
  [161] = 135,
  [162] = 135,
  [163] = 136,
  [164] = 142,
  [165] = 165,
  [166] = 146,
  [167] = 150,
  [168] = 148,
  [169] = 169,
  [170] = 139,
  [171] = 147,
  [172] = 151,
  [173] = 149,
  [174] = 144,
  [175] = 175,
  [176] = 145,
  [177] = 177,
  [178] = 147,
  [179] = 136,
  [180] = 137,
  [181] = 181,
  [182] = 182,
  [183] = 151,
  [184] = 184,
  [185] = 145,
  [186] = 146,
  [187] = 149,
  [188] = 144,
  [189] = 189,
  [190] = 148,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 159,
  [195] = 195,
  [196] = 192,
  [197] = 193,
  [198] = 193,
  [199] = 192,
  [200] = 159,
  [201] = 150,
  [202] = 195,
  [203] = 191,
  [204] = 204,
  [205] = 195,
  [206] = 191,
  [207] = 181,
  [208] = 184,
  [209] = 181,
  [210] = 165,
  [211] = 211,
  [212] = 182,
  [213] = 169,
  [214] = 214,
  [215] = 175,
  [216] = 216,
  [217] = 177,
  [218] = 155,
  [219] = 175,
  [220] = 181,
  [221] = 221,
  [222] = 221,
  [223] = 189,
  [224] = 182,
  [225] = 177,
  [226] = 226,
  [227] = 165,
  [228] = 175,
  [229] = 155,
  [230] = 169,
  [231] = 221,
  [232] = 189,
  [233] = 184,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 204,
  [247] = 247,
  [248] = 216,
  [249] = 249,
  [250] = 250,
  [251] = 214,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 249,
  [256] = 247,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 249,
  [261] = 247,
  [262] = 257,
  [263] = 226,
  [264] = 258,
  [265] = 250,
  [266] = 257,
  [267] = 267,
  [268] = 244,
  [269] = 269,
  [270] = 258,
  [271] = 245,
  [272] = 249,
  [273] = 273,
  [274] = 247,
  [275] = 257,
  [276] = 258,
  [277] = 277,
  [278] = 253,
  [279] = 214,
  [280] = 280,
  [281] = 226,
  [282] = 269,
  [283] = 267,
  [284] = 284,
  [285] = 245,
  [286] = 280,
  [287] = 277,
  [288] = 216,
  [289] = 284,
  [290] = 290,
  [291] = 291,
  [292] = 269,
  [293] = 284,
  [294] = 245,
  [295] = 295,
  [296] = 296,
  [297] = 204,
  [298] = 284,
  [299] = 112,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 300,
  [310] = 310,
  [311] = 122,
  [312] = 312,
  [313] = 313,
  [314] = 120,
  [315] = 315,
  [316] = 111,
  [317] = 317,
  [318] = 318,
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
  [335] = 143,
  [336] = 336,
  [337] = 337,
  [338] = 142,
  [339] = 135,
  [340] = 143,
  [341] = 138,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 64,
  [346] = 346,
  [347] = 347,
  [348] = 138,
  [349] = 349,
  [350] = 350,
  [351] = 135,
  [352] = 352,
  [353] = 142,
  [354] = 352,
  [355] = 355,
  [356] = 79,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 357,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 364,
  [373] = 364,
  [374] = 364,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 364,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 145,
  [388] = 146,
  [389] = 147,
  [390] = 390,
  [391] = 391,
  [392] = 148,
  [393] = 382,
  [394] = 149,
  [395] = 395,
  [396] = 396,
  [397] = 151,
  [398] = 398,
  [399] = 399,
  [400] = 144,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 382,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 145,
  [416] = 146,
  [417] = 147,
  [418] = 378,
  [419] = 369,
  [420] = 420,
  [421] = 148,
  [422] = 382,
  [423] = 149,
  [424] = 151,
  [425] = 414,
  [426] = 426,
  [427] = 377,
  [428] = 144,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 434,
  [436] = 436,
  [437] = 429,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 382,
  [442] = 380,
  [443] = 376,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 359,
  [451] = 451,
  [452] = 367,
  [453] = 414,
  [454] = 383,
  [455] = 455,
  [456] = 120,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 124,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 458,
  [484] = 484,
  [485] = 485,
  [486] = 95,
  [487] = 94,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 131,
  [497] = 497,
  [498] = 491,
  [499] = 132,
  [500] = 500,
  [501] = 92,
  [502] = 502,
  [503] = 481,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 159,
  [510] = 481,
  [511] = 511,
  [512] = 120,
  [513] = 112,
  [514] = 514,
  [515] = 122,
  [516] = 481,
  [517] = 517,
  [518] = 518,
  [519] = 472,
  [520] = 520,
  [521] = 111,
  [522] = 522,
  [523] = 159,
  [524] = 111,
  [525] = 525,
  [526] = 481,
  [527] = 527,
  [528] = 122,
  [529] = 529,
  [530] = 112,
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
  [557] = 504,
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
  [594] = 589,
  [595] = 556,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 532,
  [606] = 580,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 592,
  [612] = 612,
  [613] = 613,
  [614] = 532,
  [615] = 603,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 532,
  [622] = 603,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 602,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 597,
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
  [649] = 603,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 584,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 580,
  [664] = 651,
  [665] = 624,
  [666] = 666,
  [667] = 667,
  [668] = 588,
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

static inline bool sym_name_character_set_3(int32_t c) {
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

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? c == '\t'
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_name_character_set_5(int32_t c) {
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

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 171
    ? (c < '0'
      ? (c < '$'
        ? c == '"'
        : (c <= '%' || (c >= '+' && c <= '-')))
      : (c <= '9' || (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : (c <= '_' || (c >= 'a' && c <= 'z')))))
    : (c <= 171 || (c < 192
      ? (c < 178
        ? c == 176
        : (c <= 178 || c == 187))
      : (c <= 383 || (c < 8364
        ? c == 8217
        : c <= 8364)))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 'q'
    ? (c < 'A'
      ? (c < '\''
        ? (c < '$'
          ? c == '"'
          : c <= '%')
        : (c <= '\'' || (c < '0'
          ? (c >= '+' && c <= '-')
          : c <= '9')))
      : (c <= 'Z' || (c < 'c'
        ? (c < 'a'
          ? c == '_'
          : c <= 'a')
        : (c <= 'k' || (c >= 'm' && c <= 'o')))))
    : (c <= 'q' || (c < 178
      ? (c < 171
        ? (c < 'w'
          ? (c >= 't' && c <= 'u')
          : c <= 'z')
        : (c <= 171 || c == 176))
      : (c <= 178 || (c < 8217
        ? (c < 192
          ? c == 187
          : c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_8(int32_t c) {
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
    : (c <= 'n' || (c < 178
      ? (c < 171
        ? (c < 's'
          ? (c >= 'p' && c <= 'q')
          : c <= 'z')
        : (c <= 171 || c == 176))
      : (c <= 178 || (c < 8217
        ? (c < 192
          ? c == 187
          : c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_9(int32_t c) {
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

static inline bool sym_name_character_set_10(int32_t c) {
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

static inline bool sym_name_character_set_11(int32_t c) {
  return (c < 'p'
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
        : (c <= 'k' || (c >= 'm' && c <= 'n')))))
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

static inline bool sym_name_character_set_12(int32_t c) {
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

static inline bool sym_name_character_set_13(int32_t c) {
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

static inline bool sym_name_character_set_14(int32_t c) {
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
        : (c <= '_' || (c >= 'b' && c <= 'h')))))
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
        : (c <= '_' || (c >= 'a' && c <= 'l')))))
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

static inline bool sym_name_character_set_19(int32_t c) {
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

static inline bool sym_name_character_set_20(int32_t c) {
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

static inline bool sym_name_character_set_21(int32_t c) {
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

static inline bool sym_name_character_set_22(int32_t c) {
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

static inline bool sym_name_character_set_24(int32_t c) {
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

static inline bool sym_name_character_set_25(int32_t c) {
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
        : (c <= '_' || (c >= 'a' && c <= 'l')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_30(int32_t c) {
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

static inline bool sym_name_character_set_31(int32_t c) {
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

static inline bool sym_name_character_set_32(int32_t c) {
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
    : (c <= 'x' || (c < 187
      ? (c < 176
        ? (c < 171
          ? c == 'z'
          : c <= 171)
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_33(int32_t c) {
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

static inline bool sym_name_character_set_34(int32_t c) {
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

static inline bool sym_name_character_set_35(int32_t c) {
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

static inline bool sym_name_character_set_36(int32_t c) {
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

static inline bool sym_name_character_set_37(int32_t c) {
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

static inline bool sym_name_character_set_38(int32_t c) {
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

static inline bool sym_name_character_set_39(int32_t c) {
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

static inline bool sym_name_character_set_40(int32_t c) {
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

static inline bool sym_name_character_set_41(int32_t c) {
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

static inline bool sym_name_character_set_42(int32_t c) {
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

static inline bool sym_name_character_set_43(int32_t c) {
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

static inline bool sym_name_character_set_44(int32_t c) {
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

static inline bool sym_name_character_set_45(int32_t c) {
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

static inline bool sym_name_character_set_46(int32_t c) {
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

static inline bool sym_name_character_set_47(int32_t c) {
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

static inline bool sym_name_character_set_48(int32_t c) {
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

static inline bool sym_name_character_set_49(int32_t c) {
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

static inline bool sym_name_character_set_50(int32_t c) {
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

static inline bool sym_name_character_set_51(int32_t c) {
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

static inline bool sym_name_character_set_52(int32_t c) {
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

static inline bool sym_name_character_set_53(int32_t c) {
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

static inline bool sym_name_character_set_54(int32_t c) {
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

static inline bool sym_name_character_set_55(int32_t c) {
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

static inline bool sym_name_character_set_56(int32_t c) {
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

static inline bool sym_name_character_set_57(int32_t c) {
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
      : (c <= 223 || (c < 8217
        ? (c >= 225 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_58(int32_t c) {
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

static inline bool sym_name_character_set_59(int32_t c) {
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

static inline bool sym_si_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(328);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '>') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'j') ADVANCE(919);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 'q') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == 'v') ADVANCE(966);
      if (lookahead == '|') ADVANCE(1144);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(343);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '0') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(1096);
      if (lookahead == '3') ADVANCE(1093);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'b') ADVANCE(989);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(763);
      if (lookahead == 'g') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == 'q') ADVANCE(938);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(985);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1095);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1076);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(343);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '0') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1094);
      if (lookahead == '2') ADVANCE(1096);
      if (lookahead == '3') ADVANCE(1093);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'b') ADVANCE(989);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(763);
      if (lookahead == 'g') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == 'q') ADVANCE(938);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(985);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1095);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1146);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(1078);
      if (lookahead == ':') ADVANCE(1147);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(1079);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == ':') ADVANCE(1145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(187);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1106);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'j') ADVANCE(919);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 'q') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == 'v') ADVANCE(966);
      if (lookahead == '|') ADVANCE(1144);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '>') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'j') ADVANCE(919);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 'q') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == 'v') ADVANCE(966);
      if (lookahead == '|') ADVANCE(1144);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(354);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(353);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(355);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(662);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(662);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(357);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(1103);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == 65279) ADVANCE(1104);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288) SKIP(21)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1102);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(1103);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == 65279) ADVANCE(1104);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288) SKIP(21)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1102);
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(1108);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1106);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'j') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'j') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(1015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(1015);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(358);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(734);
      if (lookahead == 'd') ADVANCE(923);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(685);
      if (lookahead == 'v') ADVANCE(966);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(734);
      if (lookahead == 'd') ADVANCE(923);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(701);
      if (lookahead == 'v') ADVANCE(966);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == ':') ADVANCE(1148);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(35);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1077);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1077);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(1108);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(1078);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(187);
      if (lookahead == ':') ADVANCE(1150);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\'') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\'') ADVANCE(314);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(49);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(53);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '1') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(319);
      if (lookahead == '1') ADVANCE(46);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == ':') ADVANCE(1145);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == ':') ADVANCE(1145);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == '0') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == ':') ADVANCE(1145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(1135);
      if (lookahead == 'n') ADVANCE(268);
      if (sym_si_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(1135);
      if (sym_si_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(1135);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(1112);
      if (sym_si_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(1112);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(1114);
      if (sym_si_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(1114);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(1118);
      if (sym_si_character_set_1(lookahead)) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(1118);
      if (sym_si_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(1118);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(1118);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(1115);
      if (sym_si_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(1115);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1131);
      if (lookahead == 'p') ADVANCE(802);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(1131);
      if (sym_si_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(1131);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(1136);
      if (sym_si_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(1136);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(1138);
      if (sym_si_character_set_1(lookahead)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(1138);
      if (sym_si_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(1138);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(1138);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(1142);
      if (lookahead == 224) ADVANCE(1054);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(1142);
      if (sym_si_character_set_1(lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(1142);
      if (sym_si_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(1142);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(1142);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(1137);
      if (sym_si_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1137);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(339);
      if (sym_si_character_set_1(lookahead)) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(339);
      if (sym_si_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(339);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(339);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1125);
      if (sym_si_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1125);
      if (sym_si_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1125);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(1125);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(1140);
      if (sym_si_character_set_1(lookahead)) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(1140);
      if (sym_si_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(1140);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(1140);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(340);
      if (sym_si_character_set_1(lookahead)) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(340);
      if (sym_si_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(340);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(340);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(1111);
      if (sym_si_character_set_1(lookahead)) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(1111);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(1113);
      if (sym_si_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(1113);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(338);
      if (sym_si_character_set_1(lookahead)) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(338);
      if (sym_si_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(338);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(338);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(1117);
      if (sym_si_character_set_1(lookahead)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(1117);
      if (sym_si_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(1117);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(1117);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(1139);
      if (sym_si_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(1139);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(1127);
      if (sym_si_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(1127);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(1126);
      if (sym_si_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(1126);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(1133);
      if (sym_si_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(1133);
      if (sym_si_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(1133);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(1133);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(1119);
      if (sym_si_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(1119);
      if (sym_si_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(1119);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(1119);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(1129);
      if (sym_si_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(1129);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(1110);
      if (sym_si_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(1121);
      if (sym_si_character_set_1(lookahead)) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(1121);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(1116);
      if (sym_si_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(1116);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(137);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(1134);
      if (sym_si_character_set_1(lookahead)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(1134);
      if (sym_si_character_set_1(lookahead)) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(1134);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(140);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(1134);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(1124);
      if (sym_si_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(1124);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(1120);
      if (sym_si_character_set_1(lookahead)) ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(1120);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(145);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(1128);
      if (sym_si_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(1128);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(1122);
      if (sym_si_character_set_1(lookahead)) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(1122);
      if (sym_si_character_set_1(lookahead)) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(1122);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(150);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(1122);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(1123);
      if (sym_si_character_set_1(lookahead)) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(1123);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(1141);
      if (sym_si_character_set_1(lookahead)) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(1141);
      if (sym_si_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(1141);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(1141);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(1132);
      if (sym_si_character_set_1(lookahead)) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(1132);
      if (sym_si_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(1132);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(1132);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (sym_si_character_set_1(lookahead)) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(1145);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'n') ADVANCE(767);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'd') ADVANCE(1018);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(782);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(619);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(556);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(771);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(1019);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(535);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'p') ADVANCE(765);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(994);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(427);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(993);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(942);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(829);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1020);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(618);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(1145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(1130);
      if (sym_si_character_set_1(lookahead)) ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'd') ADVANCE(1004);
      if (lookahead == 'n') ADVANCE(748);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1060);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'd') ADVANCE(1004);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1060);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(773);
      if (sym_name_character_set_2(lookahead)) ADVANCE(1060);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(591);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(513);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(752);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1005);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(982);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(491);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(756);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(490);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(976);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(426);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(974);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(925);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(442);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(802);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 275:
      if (lookahead == 'q') ADVANCE(306);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(1000);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(1006);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(592);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 312:
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 313:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 314:
      if (lookahead == 224) ADVANCE(118);
      END_STATE();
    case 315:
      if (lookahead == 224) ADVANCE(1054);
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 316:
      if (lookahead == 232) ADVANCE(227);
      END_STATE();
    case 317:
      if (lookahead == 233) ADVANCE(99);
      END_STATE();
    case 318:
      if (lookahead == 233) ADVANCE(294);
      END_STATE();
    case 319:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1084);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 325:
      if (sym_name_character_set_1(lookahead)) ADVANCE(1060);
      END_STATE();
    case 326:
      if (sym_name_character_set_1(lookahead)) ADVANCE(1108);
      END_STATE();
    case 327:
      if (eof) ADVANCE(328);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == ')') ADVANCE(344);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1089);
      if (lookahead == '3') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(662);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(327)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(1060);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1146);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1163);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(1078);
      if (lookahead == ':') ADVANCE(1147);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1163);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_m_unary_name);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_m_array_name);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_m_baru00e8me_like_name);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(251);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(362);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(251);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(194);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(278);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(201);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(211);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(214);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(74);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1131);
      if (sym_name_character_set_4(lookahead)) ADVANCE(76);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(271);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(208);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(195);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(248);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(261);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(289);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(83);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1142);
      if (sym_name_character_set_4(lookahead)) ADVANCE(86);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(174);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(164);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(166);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(170);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(172);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(177);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(168);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(165);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(173);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(176);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(179);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(178);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(274);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(315);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(253);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(280);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(212);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(209);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(175);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(171);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(169);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(213);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(207);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(167);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(215);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_name_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '!') ADVANCE(134);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'') ADVANCE(999);
      if (sym_name_character_set_6(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_7(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead == 'v') ADVANCE(482);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_8(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == 'i') ADVANCE(882);
      if (lookahead == 'o') ADVANCE(927);
      if (lookahead == 'r') ADVANCE(971);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_9(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'b') ADVANCE(990);
      if (lookahead == 'p') ADVANCE(783);
      if (lookahead == 'r') ADVANCE(837);
      if (lookahead == 'v') ADVANCE(529);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_10(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(904);
      if (lookahead == 'o') ADVANCE(949);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_11(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == 'r') ADVANCE(428);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_12(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(799);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_13(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(930);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == 'o') ADVANCE(927);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_14(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'u') ADVANCE(796);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_15(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(917);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(432);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_16(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'r') ADVANCE(736);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_16(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(986);
      if (lookahead == 'r') ADVANCE(429);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_17(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1028);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 't') ADVANCE(517);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_18(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(644);
      if (lookahead == 't') ADVANCE(588);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_18(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 't') ADVANCE(626);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_19(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(877);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_19(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(877);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_19(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(903);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_20(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'u') ADVANCE(822);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_21(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 233) ADVANCE(423);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_21(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 233) ADVANCE(424);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_22(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(746);
      if (lookahead == 'n') ADVANCE(449);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_22(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(462);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_23(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(1010);
      if (lookahead == 's') ADVANCE(745);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_23(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(1024);
      if (lookahead == 's') ADVANCE(764);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_24(lookahead)) ADVANCE(1060);
      if (lookahead == 'h') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(689);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_25(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(700);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_25(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead == 'i') ADVANCE(726);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_26(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(951);
      if (lookahead == 'o') ADVANCE(474);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_26(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(953);
      if (lookahead == 'o') ADVANCE(476);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_27(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(585);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_27(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == 'r') ADVANCE(616);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_28(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(800);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_29(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(950);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_30(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(633);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_31(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 't') ADVANCE(532);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_32(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == 'y') ADVANCE(485);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_33(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(636);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_34(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(926);
      if (lookahead == 's') ADVANCE(456);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_35(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(876);
      if (lookahead == 'x') ADVANCE(774);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_35(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(901);
      if (lookahead == 'x') ADVANCE(784);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(594);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(642);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(645);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(646);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(599);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'b') ADVANCE(620);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'b') ADVANCE(659);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_36(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'b') ADVANCE(658);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(575);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(1030);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(969);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(933);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(501);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(508);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(504);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(805);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(576);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(980);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(488);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(518);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1060);
      if (lookahead == 'c') ADVANCE(983);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(577);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(1061);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(532);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(988);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(948);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(549);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(825);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(996);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_37(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(552);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(592);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(1042);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(598);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(928);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(811);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(941);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(618);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(1068);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(838);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_38(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'd') ADVANCE(631);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(359);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(450);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(859);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(693);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(847);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1033);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(842);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1034);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(368);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1036);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(929);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(370);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1037);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(816);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(388);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(809);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1039);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(797);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(372);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1041);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1042);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1043);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(396);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(360);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1046);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1047);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1048);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1057);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1058);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1059);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(691);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(850);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(706);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(707);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(669);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(845);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(852);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(705);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(853);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(855);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(959);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(860);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(898);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(935);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(712);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(374);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(463);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(867);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1062);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(865);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1063);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(721);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1064);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(868);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1065);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(944);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(380);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(824);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1067);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(830);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1068);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(382);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(731);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1069);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1070);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(384);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1071);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(720);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1074);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(397);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(1075);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(392);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(722);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(872);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(725);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(679);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(963);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_39(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'e') ADVANCE(874);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(390);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(979);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(1039);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(595);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(1014);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(1016);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(997);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(1067);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(622);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_40(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'f') ADVANCE(1027);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_41(lookahead)) ADVANCE(1060);
      if (lookahead == 'g') ADVANCE(648);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_41(lookahead)) ADVANCE(1060);
      if (lookahead == 'g') ADVANCE(817);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_41(lookahead)) ADVANCE(1060);
      if (lookahead == 'g') ADVANCE(975);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_41(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'g') ADVANCE(834);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_42(lookahead)) ADVANCE(1060);
      if (lookahead == 'h') ADVANCE(497);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_42(lookahead)) ADVANCE(1060);
      if (lookahead == 'h') ADVANCE(520);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_42(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'h') ADVANCE(542);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(441);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(955);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(573);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(635);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(777);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(451);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(563);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(968);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(524);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(458);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(754);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(883);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(881);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(803);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(1042);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(666);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(640);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(699);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(894);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(791);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(900);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(643);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(849);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(812);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(753);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(814);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(749);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(672);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(779);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(445);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(461);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(755);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(652);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(446);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(793);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(786);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(465);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(568);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(987);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(902);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(1068);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(828);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(654);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(675);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(723);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(768);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(836);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(769);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(770);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(469);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(914);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(682);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(772);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_43(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'i') ADVANCE(916);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(1029);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(583);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(638);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(879);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(978);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(498);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(984);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(590);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(503);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(580);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(596);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(496);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(500);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(502);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(587);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(521);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1060);
      if (lookahead == 'l') ADVANCE(608);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(614);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(656);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(991);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(628);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(995);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(541);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(546);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(543);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(548);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(554);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_44(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'l') ADVANCE(627);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(778);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(665);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(931);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(491);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(924);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(498);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(395);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(514);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(776);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(1012);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(519);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(947);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(676);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(940);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(535);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(393);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(541);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(555);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(785);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(1026);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_45(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'm') ADVANCE(557);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1135);
      if (lookahead == 'n') ADVANCE(742);
      if (sym_si_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(950);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(415);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(471);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(363);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(843);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(880);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(472);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(459);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(1034);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(696);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(1035);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(369);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(491);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(889);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(371);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(592);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(593);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(416);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(790);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(473);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(457);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(885);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(888);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(455);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(854);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(895);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(856);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(848);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(460);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(952);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(417);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(792);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(477);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(1063);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(906);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(478);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(470);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(727);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(908);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(618);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(381);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(907);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(621);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(535);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(383);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(480);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(870);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(464);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(866);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_46(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'n') ADVANCE(913);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(689);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(412);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(474);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(964);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(572);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(579);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(686);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(798);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(694);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(815);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(663);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(922);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(690);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(804);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(695);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(698);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(687);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(601);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(703);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(692);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(710);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(711);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(863);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(965);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(435);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(574);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(674);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(718);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(716);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(823);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(939);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(873);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(719);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(724);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(717);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(728);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(730);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(729);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_47(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(732);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(775);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(1011);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(634);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(637);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(886);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(747);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(647);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(649);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(780);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(783);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(651);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(1025);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(653);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(905);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(661);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_48(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'p') ADVANCE(787);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_49(lookahead)) ADVANCE(1060);
      if (lookahead == 'q') ADVANCE(918);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_49(lookahead)) ADVANCE(1060);
      if (lookahead == 'q') ADVANCE(932);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_49(lookahead)) ADVANCE(1060);
      if (lookahead == 'q') ADVANCE(936);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_49(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'q') ADVANCE(945);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_49(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'q') ADVANCE(946);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(581);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(1001);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(1007);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(399);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(664);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(740);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(453);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(364);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(738);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(452);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(893);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(582);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(605);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(489);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(512);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(1042);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(597);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(493);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(509);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(1055);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(483);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(844);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(861);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(523);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(515);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1060);
      if (lookahead == 'r') ADVANCE(526);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(610);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1002);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1022);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(673);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(875);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(613);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(377);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(629);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(466);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(759);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1068);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(533);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(612);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(545);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(560);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(550);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(527);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(762);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_50(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(544);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(876);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(789);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(586);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(373);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1031);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1032);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1034);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(578);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(368);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1036);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1040);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(391);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(584);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(387);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1049);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1050);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1051);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1052);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(1053);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(846);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(886);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(851);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(604);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(607);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1060);
      if (lookahead == 's') ADVANCE(862);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(468);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(1063);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(1064);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(905);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(380);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(611);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(1072);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(615);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(394);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(869);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(871);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 's') ADVANCE(625);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(361);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1008);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(977);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(606);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(522);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1013);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(807);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1036);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(494);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(973);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(602);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(516);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1042);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1045);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(506);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(507);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(751);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(499);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1009);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(510);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(486);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(887);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(890);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(525);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1060);
      if (lookahead == 't') ADVANCE(609);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(375);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(1064);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(1021);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(831);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(623);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(559);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(992);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(1068);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(537);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(536);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(558);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(547);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(551);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(1023);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(911);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_51(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 't') ADVANCE(630);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(561);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(400);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(840);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(954);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(484);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(475);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(796);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(668);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(671);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(600);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(896);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(589);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(809);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(957);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(641);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(981);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(639);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(888);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(813);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(511);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(960);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(530);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(479);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(677);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(617);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(681);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(908);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(830);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(998);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(553);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(657);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(655);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_52(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(910);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_53(lookahead)) ADVANCE(1060);
      if (lookahead == 'v') ADVANCE(495);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_53(lookahead)) ADVANCE(1060);
      if (lookahead == 'v') ADVANCE(1003);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_53(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'v') ADVANCE(540);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_53(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'v') ADVANCE(1017);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(366);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(367);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(593);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(386);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(884);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1060);
      if (lookahead == 'x') ADVANCE(891);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'x') ADVANCE(379);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'x') ADVANCE(621);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'x') ADVANCE(909);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_54(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'x') ADVANCE(912);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_55(lookahead)) ADVANCE(1060);
      if (lookahead == 'y') ADVANCE(485);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_55(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'y') ADVANCE(534);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(430);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(421);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(413);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(443);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(795);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(704);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(897);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(632);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(702);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(892);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(389);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(697);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(454);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(934);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(899);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(709);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(708);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(444);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1060);
      if (lookahead == 'a') ADVANCE(603);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(431);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(422);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(414);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(447);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(821);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(915);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(467);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(650);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(715);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(385);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(624);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(448);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(943);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_56(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 'a') ADVANCE(733);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_57(lookahead)) ADVANCE(1060);
      if (lookahead == 224) ADVANCE(1044);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_58(lookahead)) ADVANCE(1060);
      if (lookahead == 232) ADVANCE(571);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_58(lookahead)) ADVANCE(1060);
      if (lookahead == 232) ADVANCE(667);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_58(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 232) ADVANCE(678);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(564);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(562);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(565);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(487);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(1038);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(1056);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(808);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(806);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(810);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(857);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(818);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(566);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1060);
      if (lookahead == 233) ADVANCE(819);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(341);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(569);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(567);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(570);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(1066);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(531);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(1073);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(833);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(827);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(832);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_59(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == 233) ADVANCE(835);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1112);
      if (sym_si_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1114);
      if (sym_si_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1118);
      if (sym_si_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1115);
      if (sym_si_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1136);
      if (sym_si_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1138);
      if (sym_si_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1142);
      if (sym_si_character_set_1(lookahead)) ADVANCE(86);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1137);
      if (sym_si_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(339);
      if (sym_si_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1125);
      if (sym_si_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1140);
      if (sym_si_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(340);
      if (sym_si_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1111);
      if (sym_si_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1113);
      if (sym_si_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(338);
      if (sym_si_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1117);
      if (sym_si_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1139);
      if (sym_si_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1127);
      if (sym_si_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1126);
      if (sym_si_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1133);
      if (sym_si_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1119);
      if (sym_si_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1129);
      if (sym_si_character_set_1(lookahead)) ADVANCE(133);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1121);
      if (sym_si_character_set_1(lookahead)) ADVANCE(136);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1116);
      if (sym_si_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1134);
      if (sym_si_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1124);
      if (sym_si_character_set_1(lookahead)) ADVANCE(144);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1120);
      if (sym_si_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1128);
      if (sym_si_character_set_1(lookahead)) ADVANCE(148);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1122);
      if (sym_si_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1123);
      if (sym_si_character_set_1(lookahead)) ADVANCE(154);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1141);
      if (sym_si_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (lookahead == ':') ADVANCE(1132);
      if (sym_si_character_set_1(lookahead)) ADVANCE(161);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1060);
      if (sym_si_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1118);
      if (sym_si_character_set_1(lookahead)) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1138);
      if (sym_si_character_set_1(lookahead)) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1142);
      if (sym_si_character_set_1(lookahead)) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(339);
      if (sym_si_character_set_1(lookahead)) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1125);
      if (sym_si_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1140);
      if (sym_si_character_set_1(lookahead)) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(340);
      if (sym_si_character_set_1(lookahead)) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(338);
      if (sym_si_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1117);
      if (sym_si_character_set_1(lookahead)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1133);
      if (sym_si_character_set_1(lookahead)) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1119);
      if (sym_si_character_set_1(lookahead)) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1134);
      if (sym_si_character_set_1(lookahead)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1122);
      if (sym_si_character_set_1(lookahead)) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1141);
      if (sym_si_character_set_1(lookahead)) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1132);
      if (sym_si_character_set_1(lookahead)) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1076);
      if (lookahead == ':') ADVANCE(1145);
      if (sym_si_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1077);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(1078);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1080);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1083);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1090);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1088);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '0') ADVANCE(1092);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1097);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1095);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == ':') ADVANCE(1145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_units_token1);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (lookahead == ' ') ADVANCE(1103);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == 65279) ADVANCE(1104);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1102);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_units_token1);
      if (lookahead == ' ') ADVANCE(1103);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == 65279) ADVANCE(1104);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1102);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(1108);
      if (sym_si_character_set_1(lookahead)) ADVANCE(326);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1109);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_importer);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_depuis);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_nom);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_url);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_dans);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_les_ru00e8gles);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_formule);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_avec);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_remplace);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_ru00e9fu00e9rences_u00e0);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sauf_dans);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_une_possibilitu00e9);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_choix_obligatoire);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_possibilitu00e9s);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_texte);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_assiette);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_montant);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_multiplicateur);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_tranches);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_plafond);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_taux);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_inversion_numu00e9rique);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_contexte);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_variations);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_si);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_alors);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sinon);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_duru00e9e);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_jusqu_u00e0);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_unitu00e9);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_variable_manquante);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_meta_name);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      if (lookahead == '-') ADVANCE(1143);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(1079);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(1161);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1156);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(1161);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(42);
      if (lookahead != 0) ADVANCE(1160);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1154);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1162);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1154);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(1163);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1162);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1162);
      if (lookahead == ':') ADVANCE(1149);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1154);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1163);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1161);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1156);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '>') ADVANCE(1144);
      if (lookahead == '|') ADVANCE(1144);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1163);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(1077);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1163);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(1162);
      if (lookahead == ':') ADVANCE(1151);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(42);
      if (lookahead != 0) ADVANCE(1159);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(1161);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(42);
      if (lookahead != 0) ADVANCE(1160);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1163);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1162);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1163);
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
      if (lookahead == 'j') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 233) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_jour);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_mois);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_trimestre);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_annu00e9ecivile);
      END_STATE();
    case 38:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_trimestrecivil);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 327, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 31, .external_lex_state = 2},
  [5] = {.lex_state = 32, .external_lex_state = 2},
  [6] = {.lex_state = 32, .external_lex_state = 2},
  [7] = {.lex_state = 32, .external_lex_state = 2},
  [8] = {.lex_state = 32, .external_lex_state = 2},
  [9] = {.lex_state = 32, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 327, .external_lex_state = 4},
  [14] = {.lex_state = 327, .external_lex_state = 4},
  [15] = {.lex_state = 327, .external_lex_state = 4},
  [16] = {.lex_state = 327, .external_lex_state = 4},
  [17] = {.lex_state = 327, .external_lex_state = 5},
  [18] = {.lex_state = 327, .external_lex_state = 5},
  [19] = {.lex_state = 2, .external_lex_state = 3},
  [20] = {.lex_state = 327, .external_lex_state = 5},
  [21] = {.lex_state = 327, .external_lex_state = 5},
  [22] = {.lex_state = 2, .external_lex_state = 3},
  [23] = {.lex_state = 327, .external_lex_state = 5},
  [24] = {.lex_state = 327, .external_lex_state = 5},
  [25] = {.lex_state = 327, .external_lex_state = 5},
  [26] = {.lex_state = 327, .external_lex_state = 5},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 327, .external_lex_state = 5},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 327, .external_lex_state = 5},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 327, .external_lex_state = 5},
  [33] = {.lex_state = 327, .external_lex_state = 5},
  [34] = {.lex_state = 327, .external_lex_state = 5},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 36, .external_lex_state = 2},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 36, .external_lex_state = 2},
  [39] = {.lex_state = 36, .external_lex_state = 2},
  [40] = {.lex_state = 36, .external_lex_state = 2},
  [41] = {.lex_state = 36, .external_lex_state = 2},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 36, .external_lex_state = 2},
  [44] = {.lex_state = 36, .external_lex_state = 2},
  [45] = {.lex_state = 36, .external_lex_state = 2},
  [46] = {.lex_state = 36, .external_lex_state = 2},
  [47] = {.lex_state = 36, .external_lex_state = 2},
  [48] = {.lex_state = 2, .external_lex_state = 6},
  [49] = {.lex_state = 36, .external_lex_state = 2},
  [50] = {.lex_state = 2, .external_lex_state = 6},
  [51] = {.lex_state = 36, .external_lex_state = 2},
  [52] = {.lex_state = 36, .external_lex_state = 2},
  [53] = {.lex_state = 36, .external_lex_state = 2},
  [54] = {.lex_state = 36, .external_lex_state = 2},
  [55] = {.lex_state = 36, .external_lex_state = 2},
  [56] = {.lex_state = 36, .external_lex_state = 2},
  [57] = {.lex_state = 36, .external_lex_state = 2},
  [58] = {.lex_state = 36, .external_lex_state = 2},
  [59] = {.lex_state = 36, .external_lex_state = 2},
  [60] = {.lex_state = 36, .external_lex_state = 2},
  [61] = {.lex_state = 36, .external_lex_state = 2},
  [62] = {.lex_state = 2, .external_lex_state = 6},
  [63] = {.lex_state = 36, .external_lex_state = 2},
  [64] = {.lex_state = 2, .external_lex_state = 6},
  [65] = {.lex_state = 36, .external_lex_state = 2},
  [66] = {.lex_state = 36, .external_lex_state = 2},
  [67] = {.lex_state = 36, .external_lex_state = 2},
  [68] = {.lex_state = 36, .external_lex_state = 2},
  [69] = {.lex_state = 36, .external_lex_state = 2},
  [70] = {.lex_state = 2, .external_lex_state = 6},
  [71] = {.lex_state = 2, .external_lex_state = 6},
  [72] = {.lex_state = 36, .external_lex_state = 2},
  [73] = {.lex_state = 36, .external_lex_state = 2},
  [74] = {.lex_state = 36, .external_lex_state = 2},
  [75] = {.lex_state = 2, .external_lex_state = 6},
  [76] = {.lex_state = 2, .external_lex_state = 6},
  [77] = {.lex_state = 2, .external_lex_state = 6},
  [78] = {.lex_state = 2, .external_lex_state = 6},
  [79] = {.lex_state = 2, .external_lex_state = 6},
  [80] = {.lex_state = 2, .external_lex_state = 3},
  [81] = {.lex_state = 2, .external_lex_state = 3},
  [82] = {.lex_state = 2, .external_lex_state = 3},
  [83] = {.lex_state = 2, .external_lex_state = 3},
  [84] = {.lex_state = 2, .external_lex_state = 3},
  [85] = {.lex_state = 2, .external_lex_state = 3},
  [86] = {.lex_state = 2, .external_lex_state = 3},
  [87] = {.lex_state = 2, .external_lex_state = 3},
  [88] = {.lex_state = 2, .external_lex_state = 3},
  [89] = {.lex_state = 2, .external_lex_state = 3},
  [90] = {.lex_state = 2, .external_lex_state = 3},
  [91] = {.lex_state = 2, .external_lex_state = 3},
  [92] = {.lex_state = 2, .external_lex_state = 3},
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
  [134] = {.lex_state = 22, .external_lex_state = 2},
  [135] = {.lex_state = 24, .external_lex_state = 2},
  [136] = {.lex_state = 27, .external_lex_state = 2},
  [137] = {.lex_state = 27, .external_lex_state = 2},
  [138] = {.lex_state = 24, .external_lex_state = 2},
  [139] = {.lex_state = 27, .external_lex_state = 2},
  [140] = {.lex_state = 22, .external_lex_state = 7},
  [141] = {.lex_state = 22, .external_lex_state = 3},
  [142] = {.lex_state = 24, .external_lex_state = 2},
  [143] = {.lex_state = 24, .external_lex_state = 2},
  [144] = {.lex_state = 24, .external_lex_state = 2},
  [145] = {.lex_state = 24, .external_lex_state = 2},
  [146] = {.lex_state = 24, .external_lex_state = 2},
  [147] = {.lex_state = 24, .external_lex_state = 2},
  [148] = {.lex_state = 24, .external_lex_state = 2},
  [149] = {.lex_state = 24, .external_lex_state = 2},
  [150] = {.lex_state = 27, .external_lex_state = 2},
  [151] = {.lex_state = 24, .external_lex_state = 2},
  [152] = {.lex_state = 24, .external_lex_state = 7},
  [153] = {.lex_state = 27, .external_lex_state = 3},
  [154] = {.lex_state = 24, .external_lex_state = 3},
  [155] = {.lex_state = 24, .external_lex_state = 2},
  [156] = {.lex_state = 24, .external_lex_state = 3},
  [157] = {.lex_state = 24, .external_lex_state = 7},
  [158] = {.lex_state = 24, .external_lex_state = 7},
  [159] = {.lex_state = 24, .external_lex_state = 2},
  [160] = {.lex_state = 27, .external_lex_state = 3},
  [161] = {.lex_state = 24, .external_lex_state = 3},
  [162] = {.lex_state = 24, .external_lex_state = 7},
  [163] = {.lex_state = 27, .external_lex_state = 3},
  [164] = {.lex_state = 24, .external_lex_state = 3},
  [165] = {.lex_state = 24, .external_lex_state = 2},
  [166] = {.lex_state = 24, .external_lex_state = 3},
  [167] = {.lex_state = 27, .external_lex_state = 3},
  [168] = {.lex_state = 24, .external_lex_state = 7},
  [169] = {.lex_state = 24, .external_lex_state = 2},
  [170] = {.lex_state = 27, .external_lex_state = 7},
  [171] = {.lex_state = 24, .external_lex_state = 3},
  [172] = {.lex_state = 24, .external_lex_state = 7},
  [173] = {.lex_state = 24, .external_lex_state = 7},
  [174] = {.lex_state = 24, .external_lex_state = 3},
  [175] = {.lex_state = 24, .external_lex_state = 2},
  [176] = {.lex_state = 24, .external_lex_state = 3},
  [177] = {.lex_state = 24, .external_lex_state = 2},
  [178] = {.lex_state = 24, .external_lex_state = 7},
  [179] = {.lex_state = 27, .external_lex_state = 7},
  [180] = {.lex_state = 27, .external_lex_state = 7},
  [181] = {.lex_state = 24, .external_lex_state = 2},
  [182] = {.lex_state = 24, .external_lex_state = 2},
  [183] = {.lex_state = 24, .external_lex_state = 3},
  [184] = {.lex_state = 24, .external_lex_state = 2},
  [185] = {.lex_state = 24, .external_lex_state = 7},
  [186] = {.lex_state = 24, .external_lex_state = 7},
  [187] = {.lex_state = 24, .external_lex_state = 3},
  [188] = {.lex_state = 24, .external_lex_state = 7},
  [189] = {.lex_state = 24, .external_lex_state = 2},
  [190] = {.lex_state = 24, .external_lex_state = 3},
  [191] = {.lex_state = 327, .external_lex_state = 2},
  [192] = {.lex_state = 327, .external_lex_state = 2},
  [193] = {.lex_state = 327, .external_lex_state = 2},
  [194] = {.lex_state = 24, .external_lex_state = 7},
  [195] = {.lex_state = 327, .external_lex_state = 2},
  [196] = {.lex_state = 327, .external_lex_state = 2},
  [197] = {.lex_state = 327, .external_lex_state = 2},
  [198] = {.lex_state = 327, .external_lex_state = 2},
  [199] = {.lex_state = 327, .external_lex_state = 2},
  [200] = {.lex_state = 24, .external_lex_state = 3},
  [201] = {.lex_state = 27, .external_lex_state = 7},
  [202] = {.lex_state = 327, .external_lex_state = 2},
  [203] = {.lex_state = 327, .external_lex_state = 2},
  [204] = {.lex_state = 24, .external_lex_state = 2},
  [205] = {.lex_state = 327, .external_lex_state = 2},
  [206] = {.lex_state = 327, .external_lex_state = 2},
  [207] = {.lex_state = 24, .external_lex_state = 3},
  [208] = {.lex_state = 24, .external_lex_state = 3},
  [209] = {.lex_state = 24, .external_lex_state = 2},
  [210] = {.lex_state = 24, .external_lex_state = 7},
  [211] = {.lex_state = 327, .external_lex_state = 2},
  [212] = {.lex_state = 24, .external_lex_state = 3},
  [213] = {.lex_state = 24, .external_lex_state = 7},
  [214] = {.lex_state = 327, .external_lex_state = 2},
  [215] = {.lex_state = 24, .external_lex_state = 2},
  [216] = {.lex_state = 327, .external_lex_state = 2},
  [217] = {.lex_state = 24, .external_lex_state = 7},
  [218] = {.lex_state = 24, .external_lex_state = 7},
  [219] = {.lex_state = 24, .external_lex_state = 7},
  [220] = {.lex_state = 24, .external_lex_state = 7},
  [221] = {.lex_state = 24, .external_lex_state = 2},
  [222] = {.lex_state = 24, .external_lex_state = 2},
  [223] = {.lex_state = 24, .external_lex_state = 3},
  [224] = {.lex_state = 24, .external_lex_state = 7},
  [225] = {.lex_state = 24, .external_lex_state = 3},
  [226] = {.lex_state = 327, .external_lex_state = 2},
  [227] = {.lex_state = 24, .external_lex_state = 3},
  [228] = {.lex_state = 24, .external_lex_state = 3},
  [229] = {.lex_state = 24, .external_lex_state = 3},
  [230] = {.lex_state = 24, .external_lex_state = 3},
  [231] = {.lex_state = 24, .external_lex_state = 2},
  [232] = {.lex_state = 24, .external_lex_state = 7},
  [233] = {.lex_state = 24, .external_lex_state = 7},
  [234] = {.lex_state = 327, .external_lex_state = 5},
  [235] = {.lex_state = 327, .external_lex_state = 5},
  [236] = {.lex_state = 327, .external_lex_state = 5},
  [237] = {.lex_state = 1157, .external_lex_state = 4},
  [238] = {.lex_state = 1157, .external_lex_state = 4},
  [239] = {.lex_state = 327, .external_lex_state = 5},
  [240] = {.lex_state = 327, .external_lex_state = 5},
  [241] = {.lex_state = 327, .external_lex_state = 5},
  [242] = {.lex_state = 327, .external_lex_state = 5},
  [243] = {.lex_state = 1157, .external_lex_state = 4},
  [244] = {.lex_state = 327, .external_lex_state = 2},
  [245] = {.lex_state = 327, .external_lex_state = 3},
  [246] = {.lex_state = 327, .external_lex_state = 7},
  [247] = {.lex_state = 327, .external_lex_state = 2},
  [248] = {.lex_state = 327, .external_lex_state = 7},
  [249] = {.lex_state = 327, .external_lex_state = 2},
  [250] = {.lex_state = 327, .external_lex_state = 3},
  [251] = {.lex_state = 327, .external_lex_state = 3},
  [252] = {.lex_state = 327, .external_lex_state = 2},
  [253] = {.lex_state = 327, .external_lex_state = 7},
  [254] = {.lex_state = 327, .external_lex_state = 2},
  [255] = {.lex_state = 327, .external_lex_state = 2},
  [256] = {.lex_state = 327, .external_lex_state = 2},
  [257] = {.lex_state = 327, .external_lex_state = 2},
  [258] = {.lex_state = 327, .external_lex_state = 2},
  [259] = {.lex_state = 327, .external_lex_state = 2},
  [260] = {.lex_state = 327, .external_lex_state = 2},
  [261] = {.lex_state = 327, .external_lex_state = 2},
  [262] = {.lex_state = 327, .external_lex_state = 2},
  [263] = {.lex_state = 327, .external_lex_state = 3},
  [264] = {.lex_state = 327, .external_lex_state = 2},
  [265] = {.lex_state = 327, .external_lex_state = 3},
  [266] = {.lex_state = 327, .external_lex_state = 2},
  [267] = {.lex_state = 327, .external_lex_state = 2},
  [268] = {.lex_state = 327, .external_lex_state = 2},
  [269] = {.lex_state = 327, .external_lex_state = 2},
  [270] = {.lex_state = 327, .external_lex_state = 2},
  [271] = {.lex_state = 327, .external_lex_state = 3},
  [272] = {.lex_state = 327, .external_lex_state = 2},
  [273] = {.lex_state = 327, .external_lex_state = 2},
  [274] = {.lex_state = 327, .external_lex_state = 2},
  [275] = {.lex_state = 327, .external_lex_state = 2},
  [276] = {.lex_state = 327, .external_lex_state = 2},
  [277] = {.lex_state = 327, .external_lex_state = 2},
  [278] = {.lex_state = 327, .external_lex_state = 7},
  [279] = {.lex_state = 327, .external_lex_state = 7},
  [280] = {.lex_state = 327, .external_lex_state = 2},
  [281] = {.lex_state = 327, .external_lex_state = 7},
  [282] = {.lex_state = 327, .external_lex_state = 2},
  [283] = {.lex_state = 327, .external_lex_state = 2},
  [284] = {.lex_state = 327, .external_lex_state = 7},
  [285] = {.lex_state = 327, .external_lex_state = 3},
  [286] = {.lex_state = 327, .external_lex_state = 2},
  [287] = {.lex_state = 327, .external_lex_state = 2},
  [288] = {.lex_state = 327, .external_lex_state = 3},
  [289] = {.lex_state = 327, .external_lex_state = 7},
  [290] = {.lex_state = 327, .external_lex_state = 2},
  [291] = {.lex_state = 327, .external_lex_state = 2},
  [292] = {.lex_state = 327, .external_lex_state = 2},
  [293] = {.lex_state = 327, .external_lex_state = 7},
  [294] = {.lex_state = 327, .external_lex_state = 3},
  [295] = {.lex_state = 27, .external_lex_state = 8},
  [296] = {.lex_state = 327, .external_lex_state = 3},
  [297] = {.lex_state = 327, .external_lex_state = 3},
  [298] = {.lex_state = 327, .external_lex_state = 7},
  [299] = {.lex_state = 24, .external_lex_state = 2},
  [300] = {.lex_state = 327, .external_lex_state = 3},
  [301] = {.lex_state = 327, .external_lex_state = 4},
  [302] = {.lex_state = 327, .external_lex_state = 4},
  [303] = {.lex_state = 327, .external_lex_state = 4},
  [304] = {.lex_state = 327, .external_lex_state = 2},
  [305] = {.lex_state = 327, .external_lex_state = 4},
  [306] = {.lex_state = 327, .external_lex_state = 2},
  [307] = {.lex_state = 327, .external_lex_state = 2},
  [308] = {.lex_state = 327, .external_lex_state = 4},
  [309] = {.lex_state = 327, .external_lex_state = 2},
  [310] = {.lex_state = 327, .external_lex_state = 4},
  [311] = {.lex_state = 24, .external_lex_state = 2},
  [312] = {.lex_state = 327, .external_lex_state = 3},
  [313] = {.lex_state = 22, .external_lex_state = 5},
  [314] = {.lex_state = 24, .external_lex_state = 2},
  [315] = {.lex_state = 327, .external_lex_state = 2},
  [316] = {.lex_state = 24, .external_lex_state = 2},
  [317] = {.lex_state = 327, .external_lex_state = 2},
  [318] = {.lex_state = 24, .external_lex_state = 2},
  [319] = {.lex_state = 22, .external_lex_state = 2},
  [320] = {.lex_state = 327, .external_lex_state = 2},
  [321] = {.lex_state = 24, .external_lex_state = 2},
  [322] = {.lex_state = 327, .external_lex_state = 8},
  [323] = {.lex_state = 24, .external_lex_state = 2},
  [324] = {.lex_state = 24, .external_lex_state = 2},
  [325] = {.lex_state = 327, .external_lex_state = 2},
  [326] = {.lex_state = 27, .external_lex_state = 2},
  [327] = {.lex_state = 24, .external_lex_state = 3},
  [328] = {.lex_state = 1157, .external_lex_state = 5},
  [329] = {.lex_state = 327, .external_lex_state = 3},
  [330] = {.lex_state = 327, .external_lex_state = 4},
  [331] = {.lex_state = 24, .external_lex_state = 3},
  [332] = {.lex_state = 327, .external_lex_state = 3},
  [333] = {.lex_state = 327, .external_lex_state = 8},
  [334] = {.lex_state = 24, .external_lex_state = 2},
  [335] = {.lex_state = 327, .external_lex_state = 3},
  [336] = {.lex_state = 327, .external_lex_state = 5},
  [337] = {.lex_state = 24, .external_lex_state = 6},
  [338] = {.lex_state = 327, .external_lex_state = 7},
  [339] = {.lex_state = 327, .external_lex_state = 7},
  [340] = {.lex_state = 327, .external_lex_state = 7},
  [341] = {.lex_state = 327, .external_lex_state = 7},
  [342] = {.lex_state = 327, .external_lex_state = 2},
  [343] = {.lex_state = 327, .external_lex_state = 5},
  [344] = {.lex_state = 24, .external_lex_state = 2},
  [345] = {.lex_state = 24, .external_lex_state = 6},
  [346] = {.lex_state = 327, .external_lex_state = 2},
  [347] = {.lex_state = 327, .external_lex_state = 2},
  [348] = {.lex_state = 327, .external_lex_state = 3},
  [349] = {.lex_state = 327, .external_lex_state = 2},
  [350] = {.lex_state = 327, .external_lex_state = 2},
  [351] = {.lex_state = 327, .external_lex_state = 3},
  [352] = {.lex_state = 1153, .external_lex_state = 2},
  [353] = {.lex_state = 327, .external_lex_state = 3},
  [354] = {.lex_state = 1153, .external_lex_state = 2},
  [355] = {.lex_state = 24, .external_lex_state = 3},
  [356] = {.lex_state = 24, .external_lex_state = 6},
  [357] = {.lex_state = 327, .external_lex_state = 3},
  [358] = {.lex_state = 24, .external_lex_state = 3},
  [359] = {.lex_state = 327, .external_lex_state = 2},
  [360] = {.lex_state = 327, .external_lex_state = 2},
  [361] = {.lex_state = 327, .external_lex_state = 2},
  [362] = {.lex_state = 1155, .external_lex_state = 2},
  [363] = {.lex_state = 24, .external_lex_state = 3},
  [364] = {.lex_state = 39, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 6},
  [366] = {.lex_state = 0, .external_lex_state = 6},
  [367] = {.lex_state = 327, .external_lex_state = 2},
  [368] = {.lex_state = 1155, .external_lex_state = 2},
  [369] = {.lex_state = 327, .external_lex_state = 2},
  [370] = {.lex_state = 327, .external_lex_state = 2},
  [371] = {.lex_state = 327, .external_lex_state = 2},
  [372] = {.lex_state = 39, .external_lex_state = 2},
  [373] = {.lex_state = 39, .external_lex_state = 2},
  [374] = {.lex_state = 39, .external_lex_state = 2},
  [375] = {.lex_state = 24, .external_lex_state = 3},
  [376] = {.lex_state = 1158, .external_lex_state = 3},
  [377] = {.lex_state = 8, .external_lex_state = 3},
  [378] = {.lex_state = 1158, .external_lex_state = 3},
  [379] = {.lex_state = 327, .external_lex_state = 2},
  [380] = {.lex_state = 327, .external_lex_state = 2},
  [381] = {.lex_state = 39, .external_lex_state = 2},
  [382] = {.lex_state = 39, .external_lex_state = 2},
  [383] = {.lex_state = 327, .external_lex_state = 2},
  [384] = {.lex_state = 24, .external_lex_state = 3},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 24, .external_lex_state = 3},
  [387] = {.lex_state = 327, .external_lex_state = 3},
  [388] = {.lex_state = 327, .external_lex_state = 3},
  [389] = {.lex_state = 327, .external_lex_state = 3},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 1155, .external_lex_state = 2},
  [392] = {.lex_state = 327, .external_lex_state = 3},
  [393] = {.lex_state = 39, .external_lex_state = 2},
  [394] = {.lex_state = 327, .external_lex_state = 3},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 327, .external_lex_state = 3},
  [398] = {.lex_state = 24, .external_lex_state = 3},
  [399] = {.lex_state = 1155, .external_lex_state = 2},
  [400] = {.lex_state = 327, .external_lex_state = 3},
  [401] = {.lex_state = 24, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 327, .external_lex_state = 2},
  [405] = {.lex_state = 0, .external_lex_state = 6},
  [406] = {.lex_state = 0, .external_lex_state = 6},
  [407] = {.lex_state = 39, .external_lex_state = 2},
  [408] = {.lex_state = 24, .external_lex_state = 2},
  [409] = {.lex_state = 0, .external_lex_state = 6},
  [410] = {.lex_state = 24, .external_lex_state = 3},
  [411] = {.lex_state = 0, .external_lex_state = 6},
  [412] = {.lex_state = 327, .external_lex_state = 2},
  [413] = {.lex_state = 0, .external_lex_state = 4},
  [414] = {.lex_state = 24, .external_lex_state = 2},
  [415] = {.lex_state = 327, .external_lex_state = 7},
  [416] = {.lex_state = 327, .external_lex_state = 7},
  [417] = {.lex_state = 327, .external_lex_state = 7},
  [418] = {.lex_state = 1158, .external_lex_state = 3},
  [419] = {.lex_state = 327, .external_lex_state = 2},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 327, .external_lex_state = 7},
  [422] = {.lex_state = 39, .external_lex_state = 2},
  [423] = {.lex_state = 327, .external_lex_state = 7},
  [424] = {.lex_state = 327, .external_lex_state = 7},
  [425] = {.lex_state = 24, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 8, .external_lex_state = 3},
  [428] = {.lex_state = 327, .external_lex_state = 7},
  [429] = {.lex_state = 327, .external_lex_state = 2},
  [430] = {.lex_state = 24, .external_lex_state = 3},
  [431] = {.lex_state = 24, .external_lex_state = 3},
  [432] = {.lex_state = 0, .external_lex_state = 6},
  [433] = {.lex_state = 24, .external_lex_state = 3},
  [434] = {.lex_state = 327, .external_lex_state = 2},
  [435] = {.lex_state = 327, .external_lex_state = 3},
  [436] = {.lex_state = 327, .external_lex_state = 2},
  [437] = {.lex_state = 327, .external_lex_state = 3},
  [438] = {.lex_state = 1158, .external_lex_state = 3},
  [439] = {.lex_state = 24, .external_lex_state = 3},
  [440] = {.lex_state = 24, .external_lex_state = 3},
  [441] = {.lex_state = 39, .external_lex_state = 2},
  [442] = {.lex_state = 327, .external_lex_state = 3},
  [443] = {.lex_state = 1158, .external_lex_state = 3},
  [444] = {.lex_state = 24, .external_lex_state = 3},
  [445] = {.lex_state = 8, .external_lex_state = 3},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 4},
  [450] = {.lex_state = 327, .external_lex_state = 3},
  [451] = {.lex_state = 24, .external_lex_state = 3},
  [452] = {.lex_state = 327, .external_lex_state = 3},
  [453] = {.lex_state = 24, .external_lex_state = 2},
  [454] = {.lex_state = 327, .external_lex_state = 3},
  [455] = {.lex_state = 24, .external_lex_state = 3},
  [456] = {.lex_state = 327, .external_lex_state = 3},
  [457] = {.lex_state = 24, .external_lex_state = 2},
  [458] = {.lex_state = 327, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 3},
  [460] = {.lex_state = 24, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 4},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 4},
  [464] = {.lex_state = 327, .external_lex_state = 3},
  [465] = {.lex_state = 0, .external_lex_state = 4},
  [466] = {.lex_state = 0, .external_lex_state = 4},
  [467] = {.lex_state = 0, .external_lex_state = 4},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 0, .external_lex_state = 8},
  [470] = {.lex_state = 24, .external_lex_state = 3},
  [471] = {.lex_state = 0, .external_lex_state = 8},
  [472] = {.lex_state = 1158, .external_lex_state = 2},
  [473] = {.lex_state = 8, .external_lex_state = 3},
  [474] = {.lex_state = 24, .external_lex_state = 3},
  [475] = {.lex_state = 0, .external_lex_state = 8},
  [476] = {.lex_state = 0, .external_lex_state = 3},
  [477] = {.lex_state = 8, .external_lex_state = 3},
  [478] = {.lex_state = 0, .external_lex_state = 8},
  [479] = {.lex_state = 0, .external_lex_state = 8},
  [480] = {.lex_state = 0, .external_lex_state = 8},
  [481] = {.lex_state = 39, .external_lex_state = 2},
  [482] = {.lex_state = 1158, .external_lex_state = 3},
  [483] = {.lex_state = 327, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 8},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 8, .external_lex_state = 3},
  [487] = {.lex_state = 8, .external_lex_state = 3},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 24, .external_lex_state = 2},
  [490] = {.lex_state = 1158, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 0, .external_lex_state = 8},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 24, .external_lex_state = 2},
  [496] = {.lex_state = 8, .external_lex_state = 3},
  [497] = {.lex_state = 0, .external_lex_state = 8},
  [498] = {.lex_state = 0, .external_lex_state = 4},
  [499] = {.lex_state = 8, .external_lex_state = 3},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 8, .external_lex_state = 3},
  [502] = {.lex_state = 24, .external_lex_state = 3},
  [503] = {.lex_state = 39, .external_lex_state = 2},
  [504] = {.lex_state = 24, .external_lex_state = 3},
  [505] = {.lex_state = 0, .external_lex_state = 3},
  [506] = {.lex_state = 0, .external_lex_state = 8},
  [507] = {.lex_state = 24, .external_lex_state = 3},
  [508] = {.lex_state = 24, .external_lex_state = 3},
  [509] = {.lex_state = 327, .external_lex_state = 3},
  [510] = {.lex_state = 39, .external_lex_state = 2},
  [511] = {.lex_state = 24, .external_lex_state = 3},
  [512] = {.lex_state = 24, .external_lex_state = 3},
  [513] = {.lex_state = 24, .external_lex_state = 3},
  [514] = {.lex_state = 24, .external_lex_state = 3},
  [515] = {.lex_state = 24, .external_lex_state = 3},
  [516] = {.lex_state = 39, .external_lex_state = 2},
  [517] = {.lex_state = 0, .external_lex_state = 8},
  [518] = {.lex_state = 24, .external_lex_state = 3},
  [519] = {.lex_state = 1158, .external_lex_state = 2},
  [520] = {.lex_state = 24, .external_lex_state = 3},
  [521] = {.lex_state = 327, .external_lex_state = 3},
  [522] = {.lex_state = 0, .external_lex_state = 6},
  [523] = {.lex_state = 327, .external_lex_state = 7},
  [524] = {.lex_state = 24, .external_lex_state = 3},
  [525] = {.lex_state = 24, .external_lex_state = 2},
  [526] = {.lex_state = 39, .external_lex_state = 2},
  [527] = {.lex_state = 24, .external_lex_state = 3},
  [528] = {.lex_state = 327, .external_lex_state = 3},
  [529] = {.lex_state = 24, .external_lex_state = 3},
  [530] = {.lex_state = 327, .external_lex_state = 3},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 7},
  [533] = {.lex_state = 0, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 3},
  [536] = {.lex_state = 0, .external_lex_state = 3},
  [537] = {.lex_state = 0, .external_lex_state = 3},
  [538] = {.lex_state = 0, .external_lex_state = 3},
  [539] = {.lex_state = 0, .external_lex_state = 3},
  [540] = {.lex_state = 0, .external_lex_state = 3},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 3},
  [543] = {.lex_state = 0, .external_lex_state = 3},
  [544] = {.lex_state = 0, .external_lex_state = 3},
  [545] = {.lex_state = 0, .external_lex_state = 3},
  [546] = {.lex_state = 0, .external_lex_state = 7},
  [547] = {.lex_state = 24, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 3},
  [549] = {.lex_state = 0, .external_lex_state = 3},
  [550] = {.lex_state = 0, .external_lex_state = 3},
  [551] = {.lex_state = 0, .external_lex_state = 3},
  [552] = {.lex_state = 0, .external_lex_state = 3},
  [553] = {.lex_state = 0, .external_lex_state = 3},
  [554] = {.lex_state = 0, .external_lex_state = 3},
  [555] = {.lex_state = 0, .external_lex_state = 3},
  [556] = {.lex_state = 0, .external_lex_state = 3},
  [557] = {.lex_state = 24, .external_lex_state = 2},
  [558] = {.lex_state = 0, .external_lex_state = 3},
  [559] = {.lex_state = 0, .external_lex_state = 3},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 3},
  [563] = {.lex_state = 0, .external_lex_state = 3},
  [564] = {.lex_state = 1158, .external_lex_state = 2},
  [565] = {.lex_state = 1158, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 3},
  [567] = {.lex_state = 0, .external_lex_state = 3},
  [568] = {.lex_state = 0, .external_lex_state = 7},
  [569] = {.lex_state = 0, .external_lex_state = 3},
  [570] = {.lex_state = 0, .external_lex_state = 3},
  [571] = {.lex_state = 0, .external_lex_state = 3},
  [572] = {.lex_state = 1158, .external_lex_state = 2},
  [573] = {.lex_state = 0, .external_lex_state = 3},
  [574] = {.lex_state = 0, .external_lex_state = 3},
  [575] = {.lex_state = 0, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 3},
  [577] = {.lex_state = 0, .external_lex_state = 3},
  [578] = {.lex_state = 0, .external_lex_state = 3},
  [579] = {.lex_state = 0, .external_lex_state = 3},
  [580] = {.lex_state = 327, .external_lex_state = 2},
  [581] = {.lex_state = 0, .external_lex_state = 3},
  [582] = {.lex_state = 1158, .external_lex_state = 2},
  [583] = {.lex_state = 1158, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 3},
  [586] = {.lex_state = 0, .external_lex_state = 3},
  [587] = {.lex_state = 24, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 7},
  [590] = {.lex_state = 0, .external_lex_state = 3},
  [591] = {.lex_state = 0, .external_lex_state = 3},
  [592] = {.lex_state = 0, .external_lex_state = 9},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 3},
  [596] = {.lex_state = 0, .external_lex_state = 7},
  [597] = {.lex_state = 0, .external_lex_state = 3},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 0, .external_lex_state = 3},
  [600] = {.lex_state = 1158, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 3},
  [602] = {.lex_state = 0, .external_lex_state = 3},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 0, .external_lex_state = 7},
  [605] = {.lex_state = 0, .external_lex_state = 7},
  [606] = {.lex_state = 327, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 3},
  [609] = {.lex_state = 0, .external_lex_state = 3},
  [610] = {.lex_state = 0, .external_lex_state = 3},
  [611] = {.lex_state = 0, .external_lex_state = 9},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 7},
  [614] = {.lex_state = 0, .external_lex_state = 7},
  [615] = {.lex_state = 0, .external_lex_state = 3},
  [616] = {.lex_state = 0, .external_lex_state = 7},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 24, .external_lex_state = 2},
  [619] = {.lex_state = 327, .external_lex_state = 2},
  [620] = {.lex_state = 24, .external_lex_state = 2},
  [621] = {.lex_state = 0, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 3},
  [623] = {.lex_state = 0, .external_lex_state = 3},
  [624] = {.lex_state = 0, .external_lex_state = 2},
  [625] = {.lex_state = 0, .external_lex_state = 3},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 0, .external_lex_state = 7},
  [629] = {.lex_state = 0, .external_lex_state = 3},
  [630] = {.lex_state = 0, .external_lex_state = 3},
  [631] = {.lex_state = 0, .external_lex_state = 7},
  [632] = {.lex_state = 0, .external_lex_state = 7},
  [633] = {.lex_state = 0, .external_lex_state = 7},
  [634] = {.lex_state = 1158, .external_lex_state = 2},
  [635] = {.lex_state = 1158, .external_lex_state = 2},
  [636] = {.lex_state = 0, .external_lex_state = 7},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 7},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 2},
  [641] = {.lex_state = 0, .external_lex_state = 5},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 5},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 5},
  [646] = {.lex_state = 0, .external_lex_state = 5},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 5},
  [649] = {.lex_state = 0, .external_lex_state = 3},
  [650] = {.lex_state = 0, .external_lex_state = 3},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 3},
  [653] = {.lex_state = 24, .external_lex_state = 2},
  [654] = {.lex_state = 0, .external_lex_state = 3},
  [655] = {.lex_state = 0, .external_lex_state = 7},
  [656] = {.lex_state = 0, .external_lex_state = 3},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 7},
  [659] = {.lex_state = 0, .external_lex_state = 3},
  [660] = {.lex_state = 0, .external_lex_state = 5},
  [661] = {.lex_state = 0, .external_lex_state = 3},
  [662] = {.lex_state = 0, .external_lex_state = 3},
  [663] = {.lex_state = 327, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 2},
  [666] = {.lex_state = 0, .external_lex_state = 2},
  [667] = {.lex_state = 0, .external_lex_state = 5},
  [668] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_m_unary_name] = ACTIONS(1),
    [sym_m_array_name] = ACTIONS(1),
    [anon_sym_jour] = ACTIONS(1),
    [anon_sym_mois] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(1),
    [anon_sym_annu00e9ecivile] = ACTIONS(1),
    [anon_sym_trimestre] = ACTIONS(1),
    [anon_sym_trimestrecivil] = ACTIONS(1),
    [sym_m_baru00e8me_like_name] = ACTIONS(1),
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
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_exposant] = ACTIONS(1),
    [sym_importer] = ACTIONS(1),
    [sym_depuis] = ACTIONS(1),
    [sym_nom] = ACTIONS(1),
    [sym_source] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [sym_dans] = ACTIONS(1),
    [sym_les_ru00e8gles] = ACTIONS(1),
    [sym_formule] = ACTIONS(1),
    [sym_avec] = ACTIONS(1),
    [sym_remplace] = ACTIONS(1),
    [sym_ru00e9fu00e9rences_u00e0] = ACTIONS(1),
    [sym_sauf_dans] = ACTIONS(1),
    [sym_une_possibilitu00e9] = ACTIONS(1),
    [sym_choix_obligatoire] = ACTIONS(1),
    [sym_possibilitu00e9s] = ACTIONS(1),
    [sym_texte] = ACTIONS(1),
    [sym_assiette] = ACTIONS(1),
    [sym_montant] = ACTIONS(1),
    [sym_multiplicateur] = ACTIONS(1),
    [sym_tranches] = ACTIONS(1),
    [sym_plafond] = ACTIONS(1),
    [sym_taux] = ACTIONS(1),
    [sym_inversion_numu00e9rique] = ACTIONS(1),
    [sym_contexte] = ACTIONS(1),
    [sym_variations] = ACTIONS(1),
    [sym_si] = ACTIONS(1),
    [sym_alors] = ACTIONS(1),
    [sym_sinon] = ACTIONS(1),
    [sym_duru00e9e] = ACTIONS(1),
    [sym_jusqu_u00e0] = ACTIONS(1),
    [sym_unitu00e9] = ACTIONS(1),
    [sym_variable_manquante] = ACTIONS(1),
    [sym_meta_name] = ACTIONS(1),
    [aux_sym__paragraph_token1] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__array_prefix] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_paragraph] = ACTIONS(1),
    [sym_error_recovery_mode] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(666),
    [sym_import] = STATE(306),
    [sym_rule] = STATE(304),
    [sym_dotted_name] = STATE(665),
    [aux_sym_source_file_repeat1] = STATE(304),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_importer] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(27), 1,
      sym_tag,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(35), 1,
      sym_date,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_formule,
    ACTIONS(41), 1,
      sym_avec,
    ACTIONS(43), 1,
      sym_remplace,
    ACTIONS(45), 1,
      sym_une_possibilitu00e9,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(61), 1,
      sym_meta_name,
    ACTIONS(63), 1,
      sym__key,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(11), 10,
      sym__statement,
      sym_s_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_s_avec,
      sym_s_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [130] = 34,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(27), 1,
      sym_tag,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym_formule,
    ACTIONS(41), 1,
      sym_avec,
    ACTIONS(43), 1,
      sym_remplace,
    ACTIONS(45), 1,
      sym_une_possibilitu00e9,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(61), 1,
      sym_meta_name,
    ACTIONS(63), 1,
      sym__key,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(250), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(10), 10,
      sym__statement,
      sym_s_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_s_avec,
      sym_s_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [260] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_une_possibilitu00e9,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(79), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    STATE(555), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(29), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [367] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(79), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(29), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [468] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(19), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [569] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(27), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [670] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [771] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(31), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(294), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [872] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(27), 1,
      sym_tag,
    ACTIONS(39), 1,
      sym_formule,
    ACTIONS(41), 1,
      sym_avec,
    ACTIONS(43), 1,
      sym_remplace,
    ACTIONS(45), 1,
      sym_une_possibilitu00e9,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(61), 1,
      sym_meta_name,
    ACTIONS(63), 1,
      sym__key,
    ACTIONS(105), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_s_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_s_avec,
      sym_s_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [955] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(27), 1,
      sym_tag,
    ACTIONS(39), 1,
      sym_formule,
    ACTIONS(41), 1,
      sym_avec,
    ACTIONS(43), 1,
      sym_remplace,
    ACTIONS(45), 1,
      sym_une_possibilitu00e9,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(61), 1,
      sym_meta_name,
    ACTIONS(63), 1,
      sym__key,
    ACTIONS(107), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_s_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_s_avec,
      sym_s_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [1038] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_m_unary_name,
    ACTIONS(112), 1,
      sym_m_array_name,
    ACTIONS(115), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(118), 1,
      sym_tag,
    ACTIONS(121), 1,
      sym_formule,
    ACTIONS(124), 1,
      sym_avec,
    ACTIONS(127), 1,
      sym_remplace,
    ACTIONS(130), 1,
      sym_une_possibilitu00e9,
    ACTIONS(133), 1,
      sym_texte,
    ACTIONS(136), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(139), 1,
      sym_contexte,
    ACTIONS(142), 1,
      sym_variations,
    ACTIONS(145), 1,
      sym_duru00e9e,
    ACTIONS(148), 1,
      sym_unitu00e9,
    ACTIONS(151), 1,
      sym_variable_manquante,
    ACTIONS(154), 1,
      sym_meta_name,
    ACTIONS(157), 1,
      sym__key,
    ACTIONS(160), 1,
      sym__dedent,
    STATE(12), 10,
      sym__statement,
      sym_s_formule,
      sym_mechanism,
      sym_m_une_possibilitu00e9,
      sym_s_avec,
      sym_s_remplace,
      sym__tags,
      sym_meta,
      sym_custom_meta,
      aux_sym_rule_body_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [1121] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(176), 1,
      sym_date,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(180), 1,
      sym__indent,
    ACTIONS(182), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(357), 1,
      sym_rule_body,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1184] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_date,
    ACTIONS(190), 1,
      sym__indent,
    ACTIONS(192), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(383), 1,
      sym_rule_body,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1247] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(176), 1,
      sym_date,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(180), 1,
      sym__indent,
    ACTIONS(182), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(454), 1,
      sym_rule_body,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1310] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_date,
    ACTIONS(190), 1,
      sym__indent,
    ACTIONS(192), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(360), 1,
      sym_rule_body,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1373] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(200), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(504), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1433] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_date,
    ACTIONS(208), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(653), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1493] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(210), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [1547] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_date,
    ACTIONS(208), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(495), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1607] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(200), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(569), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1667] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_m_unary_name,
    ACTIONS(215), 1,
      sym_m_array_name,
    ACTIONS(218), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(221), 1,
      sym_texte,
    ACTIONS(224), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(227), 1,
      sym_contexte,
    ACTIONS(230), 1,
      sym_variations,
    ACTIONS(233), 1,
      sym_duru00e9e,
    ACTIONS(236), 1,
      sym_unitu00e9,
    ACTIONS(239), 1,
      sym_variable_manquante,
    ACTIONS(242), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [1721] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(200), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(540), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1781] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_date,
    ACTIONS(250), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(464), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(293), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1841] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(252), 1,
      sym__indent,
    STATE(104), 1,
      sym__valeur,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1901] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_date,
    ACTIONS(260), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(504), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(298), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1961] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [2015] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_date,
    ACTIONS(208), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(547), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2075] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(264), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [2129] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(200), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(623), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2189] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(266), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [2243] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_date,
    ACTIONS(200), 1,
      sym__indent,
    STATE(97), 1,
      sym__valeur,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2303] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_date,
    ACTIONS(208), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(408), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2363] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_date,
    ACTIONS(208), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    STATE(557), 1,
      sym__valeur,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2423] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(47), 1,
      sym_texte,
    ACTIONS(49), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(51), 1,
      sym_contexte,
    ACTIONS(53), 1,
      sym_variations,
    ACTIONS(55), 1,
      sym_duru00e9e,
    ACTIONS(57), 1,
      sym_unitu00e9,
    ACTIONS(59), 1,
      sym_variable_manquante,
    ACTIONS(268), 1,
      sym__dedent,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(110), 11,
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
      sym_m_variable_manquante,
  [2477] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(278), 1,
      sym_date,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(244), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2527] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(292), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(317), 2,
      sym__expression,
      sym_string,
    STATE(231), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2579] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2629] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(280), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2679] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(288), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2729] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(290), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2779] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(294), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(228), 1,
      sym_reference,
    STATE(229), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(292), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(230), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2827] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(296), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2877] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(298), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2927] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(300), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(247), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2977] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(302), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(249), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3027] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(304), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym__key,
    ACTIONS(310), 1,
      sym__array_prefix,
    STATE(48), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(306), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [3109] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(269), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(317), 2,
      sym__expression,
      sym_string,
    STATE(221), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__key,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(313), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [3193] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(319), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(268), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3243] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(321), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(267), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3293] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(323), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(274), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3343] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(325), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3393] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(327), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(291), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3443] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3493] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(331), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(276), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3543] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(333), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(264), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3593] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(335), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(209), 1,
      sym_number,
    STATE(215), 1,
      sym_reference,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(214), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3641] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_name,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(178), 1,
      aux_sym_number_token1,
    ACTIONS(339), 1,
      sym_date,
    STATE(218), 1,
      sym_dotted_name,
    STATE(219), 1,
      sym_reference,
    STATE(220), 1,
      sym_number,
    ACTIONS(168), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(337), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3689] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(335), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(214), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__key,
    ACTIONS(345), 1,
      sym__array_prefix,
    STATE(48), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(341), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [3771] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(347), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__key,
    ACTIONS(353), 1,
      sym__array_prefix,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(349), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [3853] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(356), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3903] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(282), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(317), 2,
      sym__expression,
      sym_string,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3955] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(358), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(260), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4005] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(360), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(256), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4055] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(362), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__key,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(364), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__key,
    ACTIONS(374), 1,
      sym__array_prefix,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(370), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4169] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(377), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4219] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(379), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4269] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(280), 1,
      aux_sym_number_token1,
    ACTIONS(381), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(175), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(211), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(169), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__key,
    ACTIONS(383), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__key,
    ACTIONS(387), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__key,
    ACTIONS(391), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__key,
    ACTIONS(395), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__key,
    ACTIONS(399), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__key,
    ACTIONS(403), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__key,
    ACTIONS(407), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__key,
    ACTIONS(411), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__key,
    ACTIONS(415), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__key,
    ACTIONS(419), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__key,
    ACTIONS(423), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__key,
    ACTIONS(427), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__key,
    ACTIONS(431), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__key,
    ACTIONS(435), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__key,
    ACTIONS(439), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__key,
    ACTIONS(443), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__key,
    ACTIONS(447), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__key,
    ACTIONS(451), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__key,
    ACTIONS(455), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__key,
    ACTIONS(459), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__key,
    ACTIONS(463), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__key,
    ACTIONS(467), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__key,
    ACTIONS(471), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__key,
    ACTIONS(475), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__key,
    ACTIONS(479), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__key,
    ACTIONS(483), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__key,
    ACTIONS(487), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__key,
    ACTIONS(491), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__key,
    ACTIONS(495), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__key,
    ACTIONS(499), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__key,
    ACTIONS(503), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__key,
    ACTIONS(507), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__key,
    ACTIONS(511), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__key,
    ACTIONS(515), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__key,
    ACTIONS(519), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__key,
    ACTIONS(523), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__key,
    ACTIONS(527), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__key,
    ACTIONS(531), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__key,
    ACTIONS(535), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__key,
    ACTIONS(539), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__key,
    ACTIONS(543), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__key,
    ACTIONS(547), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__key,
    ACTIONS(551), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__key,
    ACTIONS(555), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__key,
    ACTIONS(559), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__key,
    ACTIONS(563), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__key,
    ACTIONS(567), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__key,
    ACTIONS(571), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__key,
    ACTIONS(547), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__key,
    ACTIONS(575), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__key,
    ACTIONS(579), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__key,
    ACTIONS(583), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__key,
    ACTIONS(587), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__key,
    ACTIONS(591), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__key,
    ACTIONS(595), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__key,
    ACTIONS(599), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__key,
    ACTIONS(603), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__key,
    ACTIONS(607), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__key,
    ACTIONS(611), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_variable_manquante,
      sym_meta_name,
  [5858] = 7,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_units_token1,
    ACTIONS(621), 1,
      aux_sym_unit_token1,
    STATE(143), 1,
      sym_unit,
    STATE(144), 1,
      sym__units,
    STATE(189), 1,
      sym_units,
    ACTIONS(615), 11,
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
  [5890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(627), 1,
      anon_sym_DOT2,
    STATE(142), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 11,
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
  [5916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(629), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [5940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(633), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [5964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH,
    ACTIONS(639), 1,
      sym_exposant,
    ACTIONS(635), 12,
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
  [5988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(641), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6012] = 8,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(646), 1,
      aux_sym_units_token1,
    ACTIONS(648), 1,
      aux_sym_unit_token1,
    ACTIONS(650), 1,
      sym__newline,
    STATE(158), 1,
      sym_unit,
    STATE(188), 1,
      sym__units,
    STATE(232), 1,
      sym_units,
    ACTIONS(615), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6044] = 8,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__dedent,
    ACTIONS(652), 1,
      aux_sym_units_token1,
    ACTIONS(654), 1,
      aux_sym_unit_token1,
    STATE(156), 1,
      sym_unit,
    STATE(174), 1,
      sym__units,
    STATE(223), 1,
      sym_units,
    ACTIONS(615), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(660), 1,
      anon_sym_DOT2,
    STATE(142), 1,
      aux_sym__units_repeat1,
    ACTIONS(656), 11,
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
  [6102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_DOT2,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      aux_sym__units_repeat1,
    ACTIONS(663), 11,
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
  [6128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      aux_sym_units_repeat1,
    ACTIONS(667), 11,
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
  [6151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(656), 12,
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
  [6172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      aux_sym_units_repeat1,
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
  [6195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      aux_sym_units_repeat1,
    ACTIONS(676), 11,
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
  [6218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    STATE(146), 1,
      aux_sym_units_repeat1,
    ACTIONS(678), 11,
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
  [6241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
    ACTIONS(680), 12,
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
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 13,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      aux_sym_units_repeat1,
    ACTIONS(684), 11,
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
  [6304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      sym_exposant,
    ACTIONS(635), 10,
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
  [6326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(641), 10,
      sym__dedent,
      anon_sym_COLON,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH,
    ACTIONS(691), 1,
      sym_exposant,
    ACTIONS(635), 10,
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
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 12,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [6388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    ACTIONS(695), 1,
      anon_sym_DOT2,
    STATE(161), 1,
      aux_sym__units_repeat1,
    ACTIONS(663), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(697), 1,
      anon_sym_DOT2,
    STATE(157), 1,
      aux_sym__units_repeat1,
    ACTIONS(656), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      anon_sym_DOT2,
    STATE(162), 1,
      aux_sym__units_repeat1,
    ACTIONS(663), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
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
  [6480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(633), 10,
      sym__dedent,
      anon_sym_COLON,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(695), 1,
      anon_sym_DOT2,
    STATE(164), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      anon_sym_DOT2,
    STATE(157), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(629), 10,
      sym__dedent,
      anon_sym_COLON,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(706), 1,
      anon_sym_DOT2,
    STATE(164), 1,
      aux_sym__units_repeat1,
    ACTIONS(656), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(709), 10,
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
  [6615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      aux_sym_units_repeat1,
    ACTIONS(671), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 11,
      sym__dedent,
      anon_sym_COLON,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_DOT,
  [6653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      aux_sym_units_repeat1,
    ACTIONS(678), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(641), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      aux_sym_units_repeat1,
    ACTIONS(676), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    STATE(178), 1,
      aux_sym_units_repeat1,
    ACTIONS(684), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
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
      anon_sym_DOT2,
  [6777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(190), 1,
      aux_sym_units_repeat1,
    ACTIONS(667), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(656), 10,
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
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 11,
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
  [6855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      aux_sym_units_repeat1,
    ACTIONS(676), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(629), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(179), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(633), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 11,
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
  [6954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      aux_sym_units_repeat1,
    ACTIONS(684), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 11,
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
  [6992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SLASH,
    ACTIONS(656), 10,
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
  [7011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      aux_sym_units_repeat1,
    ACTIONS(671), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
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
      anon_sym_DOT2,
  [7051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    STATE(168), 1,
      aux_sym_units_repeat1,
    ACTIONS(667), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7072] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      aux_sym_units_repeat1,
    ACTIONS(678), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7110] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(743), 1,
      sym_name,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym_dotted_name,
    STATE(208), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7136] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(743), 1,
      sym_name,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym_dotted_name,
    STATE(227), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      aux_sym_number_token1,
    STATE(218), 1,
      sym_dotted_name,
    STATE(217), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    ACTIONS(671), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(425), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7232] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      aux_sym_number_token1,
    STATE(218), 1,
      sym_dotted_name,
    STATE(210), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7258] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(743), 1,
      sym_name,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      aux_sym_number_token1,
    STATE(229), 1,
      sym_dotted_name,
    STATE(225), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(177), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(165), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    ACTIONS(671), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 10,
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
  [7370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(414), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7396] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(184), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 10,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_possibilitu00e9s,
  [7438] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(453), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7464] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      aux_sym_number_token1,
    STATE(218), 1,
      sym_dotted_name,
    STATE(233), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(709), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(767), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7760] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(709), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(781), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(718), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7909] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym__indent,
    STATE(568), 1,
      sym_m_duru00e9e_units,
    ACTIONS(787), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(785), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7959] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_SQUOTE,
    ACTIONS(795), 1,
      sym_date,
    ACTIONS(797), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(459), 1,
      sym__date_or_ref,
    STATE(632), 1,
      sym_reference,
  [7987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym__indent,
    STATE(658), 1,
      sym_m_duru00e9e_units,
    ACTIONS(787), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(785), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8007] = 7,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym__paragraph_token1,
    ACTIONS(803), 1,
      sym_text_line,
    ACTIONS(805), 1,
      sym__indent,
    ACTIONS(807), 1,
      sym__newline,
    STATE(126), 1,
      sym_meta_value,
    STATE(124), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8031] = 7,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym__paragraph_token1,
    ACTIONS(803), 1,
      sym_text_line,
    ACTIONS(805), 1,
      sym__indent,
    ACTIONS(807), 1,
      sym__newline,
    STATE(125), 1,
      sym_meta_value,
    STATE(124), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym__indent,
    STATE(655), 1,
      sym_m_duru00e9e_units,
    ACTIONS(787), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(785), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__indent,
    STATE(636), 1,
      sym_m_duru00e9e_units,
    ACTIONS(787), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(785), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8095] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_SQUOTE,
    ACTIONS(795), 1,
      sym_date,
    ACTIONS(797), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(476), 1,
      sym__date_or_ref,
    STATE(632), 1,
      sym_reference,
  [8123] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      anon_sym_SQUOTE,
    ACTIONS(795), 1,
      sym_date,
    ACTIONS(797), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(440), 1,
      sym__date_or_ref,
    STATE(632), 1,
      sym_reference,
  [8151] = 7,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(813), 1,
      aux_sym__paragraph_token1,
    ACTIONS(815), 1,
      sym_text_line,
    ACTIONS(817), 1,
      sym__indent,
    ACTIONS(819), 1,
      sym__newline,
    STATE(473), 1,
      sym_meta_value,
    STATE(477), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [8175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(599), 1,
      sym_m_duru00e9e_units,
    ACTIONS(831), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(829), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(610), 1,
      sym_m_duru00e9e_units,
    ACTIONS(831), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(829), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(549), 1,
      sym_m_duru00e9e_units,
    ACTIONS(831), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(829), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(581), 1,
      sym_m_duru00e9e_units,
    ACTIONS(831), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(829), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
    ACTIONS(823), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(718), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8934] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(345), 1,
      sym__array_prefix,
    ACTIONS(873), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(229), 1,
      sym_dotted_name,
    STATE(411), 1,
      aux_sym_s_remplace_repeat1,
    STATE(553), 1,
      sym_reference,
    STATE(554), 1,
      sym__remplace_rule,
  [8959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__dedent,
    ACTIONS(825), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__newline,
    ACTIONS(833), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_name,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(883), 1,
      sym__dedent,
    STATE(624), 1,
      sym_dotted_name,
    STATE(300), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9034] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(885), 1,
      sym__indent,
    ACTIONS(887), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(578), 1,
      sym_remplace_rule_except,
    STATE(628), 1,
      sym_reference,
  [9056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(889), 1,
      sym__indent,
    ACTIONS(891), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(508), 1,
      sym_remplace_rule_in,
    STATE(638), 1,
      sym_reference,
  [9078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(885), 1,
      sym__indent,
    ACTIONS(887), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(551), 1,
      sym_remplace_rule_except,
    STATE(628), 1,
      sym_reference,
  [9100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
    STATE(665), 1,
      sym_dotted_name,
    STATE(309), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(885), 1,
      sym__indent,
    ACTIONS(887), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(628), 1,
      sym_reference,
    STATE(630), 1,
      sym_remplace_rule_except,
  [9142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
    STATE(665), 1,
      sym_dotted_name,
    STATE(307), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
    STATE(665), 1,
      sym_dotted_name,
    STATE(309), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9182] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(889), 1,
      sym__indent,
    ACTIONS(891), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(470), 1,
      sym_remplace_rule_in,
    STATE(638), 1,
      sym_reference,
  [9204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_name,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    STATE(665), 1,
      sym_dotted_name,
    STATE(309), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(885), 1,
      sym__indent,
    ACTIONS(887), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(535), 1,
      sym_remplace_rule_except,
    STATE(628), 1,
      sym_reference,
  [9246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(900), 1,
      anon_sym_LBRACK,
    ACTIONS(902), 1,
      sym__dedent,
    STATE(624), 1,
      sym_dotted_name,
    STATE(300), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9278] = 7,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_units_token1,
    ACTIONS(906), 1,
      aux_sym_unit_token1,
    ACTIONS(908), 1,
      sym__indent,
    STATE(340), 1,
      sym_unit,
    STATE(428), 1,
      sym__units,
    STATE(604), 1,
      sym_units,
  [9300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    ACTIONS(912), 1,
      anon_sym_SQUOTE,
    ACTIONS(914), 1,
      sym_date,
    STATE(229), 1,
      sym_dotted_name,
    STATE(661), 1,
      sym_reference,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_plafond,
    STATE(587), 1,
      sym__m_taux_or_montant,
    STATE(590), 1,
      sym_tranche,
    ACTIONS(918), 2,
      sym_montant,
      sym_taux,
  [9375] = 6,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym_units_token1,
    ACTIONS(924), 1,
      aux_sym_unit_token1,
    STATE(335), 1,
      sym_unit,
    STATE(400), 1,
      sym__units,
    STATE(539), 1,
      sym_units,
  [9394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    ACTIONS(900), 1,
      anon_sym_LBRACK,
    STATE(505), 1,
      sym_dotted_name,
    STATE(586), 2,
      sym_import_rule,
      sym_rule,
  [9411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_plafond,
    STATE(455), 1,
      sym__m_taux_or_montant,
    STATE(590), 1,
      sym_tranche,
    ACTIONS(926), 2,
      sym_montant,
      sym_taux,
  [9428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(395), 1,
      aux_sym_m_inversion_repeat1,
    STATE(571), 1,
      sym_reference,
  [9447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_plafond,
    STATE(502), 1,
      sym__m_taux_or_montant,
    STATE(590), 1,
      sym_tranche,
    ACTIONS(926), 2,
      sym_montant,
      sym_taux,
  [9464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_plafond,
    STATE(520), 1,
      sym__m_taux_or_montant,
    STATE(590), 1,
      sym_tranche,
    ACTIONS(926), 2,
      sym_montant,
      sym_taux,
  [9481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(900), 1,
      anon_sym_LBRACK,
    STATE(624), 1,
      sym_dotted_name,
    STATE(312), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(873), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(229), 1,
      sym_dotted_name,
    STATE(608), 1,
      sym__remplace_rule,
    STATE(609), 1,
      sym_reference,
  [9517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_source,
    ACTIONS(930), 1,
      sym_url,
    ACTIONS(932), 1,
      sym__dedent,
    STATE(401), 1,
      sym__import_source,
    STATE(562), 1,
      sym__import_url,
  [9536] = 5,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(801), 1,
      aux_sym__paragraph_token1,
    ACTIONS(803), 1,
      sym_text_line,
    ACTIONS(934), 1,
      sym__indent,
    STATE(113), 2,
      sym__text_line,
      sym__paragraph,
  [9553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_name,
    ACTIONS(939), 1,
      sym__dedent,
    STATE(155), 1,
      sym_dotted_name,
    STATE(329), 1,
      aux_sym_m_contexte_repeat1,
    STATE(541), 1,
      sym_reference,
  [9572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(941), 1,
      sym__indent,
    ACTIONS(943), 1,
      sym__newline,
    STATE(218), 1,
      sym_dotted_name,
    STATE(616), 1,
      sym_reference,
  [9591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_dans,
    ACTIONS(947), 1,
      sym_les_ru00e8gles,
    ACTIONS(949), 1,
      sym__dedent,
    STATE(363), 1,
      sym__import_into,
    STATE(650), 1,
      sym_import_rules,
  [9610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(951), 1,
      sym__dedent,
    STATE(155), 1,
      sym_dotted_name,
    STATE(329), 1,
      aux_sym_m_contexte_repeat1,
    STATE(541), 1,
      sym_reference,
  [9629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(390), 1,
      aux_sym_m_inversion_repeat1,
    STATE(577), 1,
      sym_reference,
  [9648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_plafond,
    STATE(518), 1,
      sym__m_taux_or_montant,
    STATE(590), 1,
      sym_tranche,
    ACTIONS(926), 2,
      sym_montant,
      sym_taux,
  [9665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DOT2,
    STATE(351), 1,
      aux_sym__units_repeat1,
    ACTIONS(663), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(955), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(613), 1,
      sym_reference,
  [9695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__array_prefix,
    STATE(345), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(957), 2,
      sym__dedent,
      sym_sauf_dans,
  [9709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_DOT2,
    STATE(338), 1,
      aux_sym__units_repeat1,
    ACTIONS(656), 2,
      sym__newline,
      anon_sym_SLASH,
  [9723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_DOT2,
    STATE(338), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 2,
      sym__newline,
      anon_sym_SLASH,
  [9737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_DOT2,
    STATE(339), 1,
      aux_sym__units_repeat1,
    ACTIONS(663), 2,
      sym__newline,
      anon_sym_SLASH,
  [9751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_exposant,
    ACTIONS(635), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    STATE(155), 1,
      sym_dotted_name,
    STATE(332), 1,
      aux_sym_m_contexte_repeat1,
    STATE(541), 1,
      sym_reference,
  [9779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_name,
    ACTIONS(968), 1,
      sym__indent,
    STATE(218), 1,
      sym_dotted_name,
    STATE(596), 1,
      sym_reference,
  [9795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_si,
    ACTIONS(972), 1,
      sym_sinon,
    STATE(552), 1,
      sym_m_variation_si,
    STATE(656), 1,
      sym_m_variation_sinon,
  [9811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym__array_prefix,
    STATE(345), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(349), 2,
      sym__dedent,
      sym_sauf_dans,
  [9825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(977), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(561), 1,
      sym_reference,
  [9841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(979), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(612), 1,
      sym_reference,
  [9857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_exposant,
    ACTIONS(635), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(983), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(593), 1,
      sym_reference,
  [9885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    ACTIONS(985), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(575), 1,
      sym_reference,
  [9901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DOT2,
    STATE(353), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9915] = 5,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__key,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(377), 1,
      aux_sym_object_repeat1,
    STATE(378), 1,
      aux_sym__text_line_repeat1,
  [9931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_DOT2,
    STATE(353), 1,
      aux_sym__units_repeat1,
    ACTIONS(656), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9945] = 5,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__key,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(418), 1,
      aux_sym__text_line_repeat1,
    STATE(427), 1,
      aux_sym_object_repeat1,
  [9961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      sym_depuis,
    ACTIONS(996), 1,
      sym_jusqu_u00e0,
    ACTIONS(998), 1,
      sym_unitu00e9,
    ACTIONS(1000), 1,
      sym__dedent,
  [9977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      sym__dedent,
      sym__array_prefix,
      sym_sauf_dans,
  [9986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [9995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10031] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      anon_sym_SQUOTE,
    ACTIONS(1014), 1,
      sym_text_line,
  [10044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_les_ru00e8gles,
    ACTIONS(1016), 1,
      sym__dedent,
    STATE(629), 1,
      sym_import_rules,
  [10057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      aux_sym_unit_token1,
    STATE(158), 1,
      sym_unit,
    STATE(172), 1,
      sym__units,
  [10070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym__dedent,
    ACTIONS(1020), 1,
      sym__array_prefix,
    STATE(385), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__dedent,
    ACTIONS(1024), 1,
      sym__array_prefix,
    STATE(385), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10105] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
    ACTIONS(1030), 1,
      anon_sym_SQUOTE,
    ACTIONS(1032), 1,
      sym_text_line,
  [10118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(602), 1,
      sym_reference,
  [10131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_unit_token1,
    STATE(335), 1,
      sym_unit,
    STATE(397), 1,
      sym__units,
  [10162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_unit_token1,
    STATE(143), 1,
      sym_unit,
    STATE(151), 1,
      sym__units,
  [10175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_unit_token1,
    STATE(340), 1,
      sym_unit,
    STATE(424), 1,
      sym__units,
  [10188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10197] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    ACTIONS(1040), 1,
      sym__dedent,
    STATE(438), 1,
      aux_sym__text_line_repeat1,
  [10210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__key,
    ACTIONS(1044), 1,
      sym__dedent,
    STATE(445), 1,
      aux_sym_object_repeat1,
  [10223] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    ACTIONS(1046), 1,
      sym__dedent,
    STATE(438), 1,
      aux_sym__text_line_repeat1,
  [10236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(538), 1,
      sym_reference,
  [10249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_unit_token1,
    STATE(156), 1,
      sym_unit,
    STATE(183), 1,
      sym__units,
  [10271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      aux_sym_unit_token1,
    STATE(158), 1,
      sym_unit,
    STATE(194), 1,
      sym__units,
  [10284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [10302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__dedent,
    ACTIONS(1056), 1,
      sym__array_prefix,
    STATE(385), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__dedent,
    ACTIONS(1061), 1,
      anon_sym_SLASH,
    STATE(388), 1,
      aux_sym_units_repeat1,
  [10346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__dedent,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    STATE(388), 1,
      aux_sym_units_repeat1,
  [10359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1066), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [10372] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_SQUOTE,
    ACTIONS(1072), 1,
      sym_text_line,
  [10385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__dedent,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    STATE(388), 1,
      aux_sym_units_repeat1,
  [10398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_unit_token1,
    STATE(335), 1,
      sym_unit,
    STATE(509), 1,
      sym__units,
  [10411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1074), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [10433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1076), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [10446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__dedent,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    STATE(389), 1,
      aux_sym_units_repeat1,
  [10459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10468] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    ACTIONS(1082), 1,
      anon_sym_SQUOTE,
    ACTIONS(1084), 1,
      sym_text_line,
  [10481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__dedent,
    ACTIONS(1064), 1,
      anon_sym_SLASH,
    STATE(392), 1,
      aux_sym_units_repeat1,
  [10494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym_url,
    ACTIONS(1086), 1,
      sym__dedent,
    STATE(579), 1,
      sym__import_url,
  [10507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__dedent,
    ACTIONS(1090), 1,
      sym__array_prefix,
    STATE(432), 1,
      aux_sym_import_rules_repeat1,
  [10520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym__array_prefix,
    ACTIONS(1092), 1,
      sym__dedent,
    STATE(432), 1,
      aux_sym_import_rules_repeat1,
  [10533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__dedent,
    ACTIONS(1098), 1,
      sym__array_prefix,
    STATE(385), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__dedent,
    ACTIONS(1102), 1,
      sym__array_prefix,
    STATE(385), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_unit_token1,
    STATE(143), 1,
      sym_unit,
    STATE(159), 1,
      sym__units,
  [10581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(542), 1,
      sym__m_taux_or_montant,
    ACTIONS(1104), 2,
      sym_montant,
      sym_taux,
  [10592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1106), 1,
      sym__dedent,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
  [10605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_dans,
    ACTIONS(1110), 1,
      sym_sauf_dans,
    ACTIONS(1112), 1,
      sym__dedent,
  [10618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__array_prefix,
    ACTIONS(1114), 1,
      sym__dedent,
    STATE(48), 1,
      aux_sym_s_remplace_repeat1,
  [10631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(618), 1,
      sym_boolean,
    ACTIONS(1116), 2,
      anon_sym_oui,
      anon_sym_non,
  [10642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym__indent,
    ACTIONS(1120), 1,
      sym__newline,
    STATE(626), 1,
      sym_m_une_possibilitu00e9_options,
  [10655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [10668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__newline,
    ACTIONS(1122), 1,
      anon_sym_SLASH,
    STATE(416), 1,
      aux_sym_units_repeat1,
  [10690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__newline,
    ACTIONS(1125), 1,
      anon_sym_SLASH,
    STATE(416), 1,
      aux_sym_units_repeat1,
  [10703] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    ACTIONS(1127), 1,
      sym__dedent,
    STATE(438), 1,
      aux_sym__text_line_repeat1,
  [10716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(627), 1,
      sym_reference,
  [10729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1129), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [10742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__newline,
    ACTIONS(1125), 1,
      anon_sym_SLASH,
    STATE(416), 1,
      aux_sym_units_repeat1,
  [10755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_unit_token1,
    STATE(340), 1,
      sym_unit,
    STATE(523), 1,
      sym__units,
  [10768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__newline,
    ACTIONS(1125), 1,
      anon_sym_SLASH,
    STATE(417), 1,
      aux_sym_units_repeat1,
  [10790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [10803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      sym__dedent,
    ACTIONS(1133), 1,
      sym__array_prefix,
    STATE(446), 1,
      aux_sym_m_variations_repeat1,
  [10816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__key,
    ACTIONS(1135), 1,
      sym__dedent,
    STATE(445), 1,
      aux_sym_object_repeat1,
  [10829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__newline,
    ACTIONS(1125), 1,
      anon_sym_SLASH,
    STATE(421), 1,
      aux_sym_units_repeat1,
  [10842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym__dedent,
    ACTIONS(1145), 1,
      sym__array_prefix,
    STATE(432), 1,
      aux_sym_import_rules_repeat1,
  [10882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_name,
    STATE(229), 1,
      sym_dotted_name,
    STATE(652), 1,
      sym_reference,
  [10922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10931] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_text_line,
    ACTIONS(1155), 1,
      sym__dedent,
    STATE(438), 1,
      aux_sym__text_line_repeat1,
  [10944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym_jusqu_u00e0,
    ACTIONS(1161), 1,
      sym_unitu00e9,
    ACTIONS(1163), 1,
      sym__dedent,
  [10966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_unit_token1,
    STATE(156), 1,
      sym_unit,
    STATE(200), 1,
      sym__units,
  [10979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10988] = 4,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    ACTIONS(1165), 1,
      sym__dedent,
    STATE(438), 1,
      aux_sym__text_line_repeat1,
  [11001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [11010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym__key,
    ACTIONS(1172), 1,
      sym__dedent,
    STATE(445), 1,
      aux_sym_object_repeat1,
  [11023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym__dedent,
    ACTIONS(1176), 1,
      sym__array_prefix,
    STATE(446), 1,
      aux_sym_m_variations_repeat1,
  [11036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1179), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [11049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    ACTIONS(1181), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_m_inversion_repeat1,
  [11062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym__indent,
    ACTIONS(1120), 1,
      sym__newline,
    STATE(558), 1,
      sym_m_une_possibilitu00e9_options,
  [11075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym_dans,
    ACTIONS(1185), 1,
      sym_sauf_dans,
    ACTIONS(1187), 1,
      sym__dedent,
  [11097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(720), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [11119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [11128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_plafond,
    ACTIONS(1191), 1,
      sym__dedent,
  [11138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 2,
      sym__dedent,
      sym_name,
  [11146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      sym_depuis,
    STATE(331), 1,
      sym_import_from,
  [11156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    STATE(657), 1,
      sym_dotted_name,
  [11166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym_unitu00e9,
    ACTIONS(1197), 1,
      sym__dedent,
  [11176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      sym_nom,
    STATE(327), 1,
      sym__import_name,
  [11186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      sym__indent,
    ACTIONS(1203), 1,
      sym__newline,
  [11196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 2,
      sym__dedent,
      sym__array_prefix,
  [11204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      sym__indent,
    ACTIONS(1209), 1,
      sym__newline,
  [11214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 2,
      sym__dedent,
      sym_name,
  [11222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      sym__indent,
    ACTIONS(1215), 1,
      sym__newline,
  [11232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym__indent,
    ACTIONS(1219), 1,
      sym__newline,
  [11242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      sym__indent,
    ACTIONS(1223), 1,
      sym__newline,
  [11252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 2,
      sym__dedent,
      sym__array_prefix,
  [11260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__array_prefix,
    STATE(337), 1,
      aux_sym_m_inversion_repeat1,
  [11270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym_sauf_dans,
    ACTIONS(1229), 1,
      sym__dedent,
  [11280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(396), 1,
      aux_sym_m_inversion_repeat1,
  [11290] = 3,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(376), 1,
      aux_sym__text_line_repeat1,
  [11300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 2,
      sym__dedent,
      sym__key,
  [11308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym__array_prefix,
    STATE(402), 1,
      aux_sym_import_rules_repeat1,
  [11326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_unitu00e9,
    ACTIONS(1235), 1,
      sym__dedent,
  [11336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      sym__dedent,
      sym__key,
  [11344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym__array_prefix,
    STATE(403), 1,
      aux_sym_import_rules_repeat1,
  [11354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(409), 1,
      aux_sym_m_array_repeat1,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(50), 1,
      aux_sym_m_array_repeat1,
  [11374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_unit_token1,
    STATE(176), 1,
      sym_unit,
  [11384] = 3,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym__dedent,
    ACTIONS(1237), 1,
      sym_text_line,
  [11394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_name,
    STATE(584), 1,
      sym_dotted_name,
  [11404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(447), 1,
      aux_sym_m_inversion_repeat1,
  [11414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(448), 1,
      aux_sym_m_inversion_repeat1,
  [11424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      sym__dedent,
      sym__key,
  [11432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      sym__dedent,
      sym__key,
  [11440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__array_prefix,
    STATE(62), 1,
      aux_sym_s_remplace_repeat1,
  [11450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym_choix_obligatoire,
    ACTIONS(1241), 1,
      sym_possibilitu00e9s,
  [11460] = 3,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(418), 1,
      aux_sym__text_line_repeat1,
  [11470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__indent,
    ACTIONS(1245), 1,
      sym__newline,
  [11480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(420), 1,
      aux_sym_m_inversion_repeat1,
  [11490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__array_prefix,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [11500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym__array_prefix,
    STATE(426), 1,
      aux_sym_m_variations_repeat1,
  [11510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym_multiplicateur,
    ACTIONS(1251), 1,
      sym_tranches,
  [11520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      sym__dedent,
      sym__key,
  [11528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym__array_prefix,
    STATE(405), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__indent,
    ACTIONS(1257), 1,
      sym__newline,
  [11548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      sym__dedent,
      sym__key,
  [11556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym__dedent,
      sym__key,
  [11574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_plafond,
    ACTIONS(1259), 1,
      sym__dedent,
  [11584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      aux_sym_unit_token1,
    STATE(185), 1,
      sym_unit,
  [11594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 2,
      sym__dedent,
      sym_plafond,
  [11602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_COLON,
    ACTIONS(1265), 1,
      sym__dedent,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym__array_prefix,
    STATE(365), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      sym_sauf_dans,
    ACTIONS(1271), 1,
      sym__dedent,
  [11640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      sym__dedent,
      anon_sym_SLASH,
  [11648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_unit_token1,
    STATE(387), 1,
      sym_unit,
  [11658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 2,
      sym__dedent,
      sym_sauf_dans,
  [11666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 2,
      sym__dedent,
      sym_plafond,
  [11674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      sym__dedent,
      sym_plafond,
  [11682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 2,
      sym__dedent,
      sym_url,
  [11690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      sym__dedent,
      sym_plafond,
  [11698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_unit_token1,
    STATE(415), 1,
      sym_unit,
  [11708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym__array_prefix,
    STATE(366), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_plafond,
    ACTIONS(1275), 1,
      sym__dedent,
  [11728] = 3,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_text_line,
    STATE(443), 1,
      aux_sym__text_line_repeat1,
  [11738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_plafond,
    ACTIONS(1277), 1,
      sym__dedent,
  [11748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      sym__dedent,
      sym_name,
  [11756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 2,
      sym__dedent,
      sym__array_prefix,
  [11764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      sym__newline,
      anon_sym_SLASH,
  [11772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      sym__dedent,
      sym_plafond,
  [11780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_si,
    STATE(552), 1,
      sym_m_variation_si,
  [11790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_unit_token1,
    STATE(145), 1,
      sym_unit,
  [11800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 2,
      sym__dedent,
      sym_sauf_dans,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      sym__dedent,
      sym_name,
  [11816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 2,
      sym__dedent,
      sym_url,
  [11824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      sym__dedent,
      sym_name,
  [11832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
  [11839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      sym__newline,
  [11846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_SQUOTE,
  [11853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_DQUOTE,
  [11860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__dedent,
  [11867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym__dedent,
  [11874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      sym__dedent,
  [11881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__dedent,
  [11888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym__dedent,
  [11895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      sym__dedent,
  [11902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_COLON,
  [11909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      sym__dedent,
  [11916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym__dedent,
  [11923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym__dedent,
  [11930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym__dedent,
  [11937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym__newline,
  [11944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      sym_tranches,
  [11951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      sym__dedent,
  [11958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym__dedent,
  [11965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      sym__dedent,
  [11972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      sym__dedent,
  [11979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      sym__dedent,
  [11986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym__dedent,
  [11993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym__dedent,
  [12000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__dedent,
  [12007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__dedent,
  [12014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_plafond,
  [12021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      sym__dedent,
  [12028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      sym__dedent,
  [12035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SQUOTE,
  [12042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      anon_sym_DQUOTE,
  [12049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym__dedent,
  [12056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym__dedent,
  [12063] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym_text_line,
  [12070] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym_text_line,
  [12077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym__dedent,
  [12084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym__dedent,
  [12091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__newline,
  [12098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__dedent,
  [12105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym__dedent,
  [12112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym__dedent,
  [12119] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym_text_line,
  [12126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym__dedent,
  [12133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym__dedent,
  [12140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
  [12147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym__dedent,
  [12154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym__dedent,
  [12161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      sym__dedent,
  [12168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      sym__dedent,
  [12175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym_name,
  [12182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym__dedent,
  [12189] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym_text_line,
  [12196] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym_text_line,
  [12203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      anon_sym_COLON,
  [12210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym__dedent,
  [12217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym__dedent,
  [12224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_plafond,
  [12231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym_tag,
  [12238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym__newline,
  [12245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym__dedent,
  [12252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym__dedent,
  [12259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym_paragraph,
  [12266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_SQUOTE,
  [12273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym__newline,
  [12280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym__dedent,
  [12287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym__newline,
  [12294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      sym__dedent,
  [12301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym__dedent,
  [12308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym__dedent,
  [12315] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym_text_line,
  [12322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym__dedent,
  [12329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym__dedent,
  [12336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym__dedent,
  [12343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym__newline,
  [12350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym__newline,
  [12357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym_name,
  [12364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym__dedent,
  [12371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym__dedent,
  [12378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      sym__dedent,
  [12385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym__dedent,
  [12392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      sym_paragraph,
  [12399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      anon_sym_SQUOTE,
  [12406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym__newline,
  [12413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      sym__newline,
  [12420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      sym__dedent,
  [12427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      sym__newline,
  [12434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym__dedent,
  [12441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      sym_possibilitu00e9s,
  [12448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_oui,
  [12455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      sym_assiette,
  [12462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      sym__newline,
  [12469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      sym__dedent,
  [12476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym__dedent,
  [12483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_COLON,
  [12490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      sym__dedent,
  [12497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      sym__dedent,
  [12504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      sym__dedent,
  [12511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      sym__newline,
  [12518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      sym__dedent,
  [12525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      sym__dedent,
  [12532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym__newline,
  [12539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym__newline,
  [12546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      sym__newline,
  [12553] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1469), 1,
      sym_text_line,
  [12560] = 2,
    ACTIONS(617), 1,
      sym_comment,
    ACTIONS(1471), 1,
      sym_text_line,
  [12567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym__newline,
  [12574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
  [12581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      sym__newline,
  [12588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_SQUOTE,
  [12595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_DQUOTE,
  [12602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      sym__indent,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      sym__indent,
  [12616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      sym__indent,
  [12623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_SQUOTE,
  [12630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      sym__indent,
  [12637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      sym__indent,
  [12644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_COLON,
  [12651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      sym__indent,
  [12658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      sym__dedent,
  [12665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      sym__dedent,
  [12672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_RBRACK,
  [12679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      sym__dedent,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      sym_alors,
  [12693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      sym__dedent,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      sym__newline,
  [12707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      sym__dedent,
  [12714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_COLON,
  [12721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      sym__newline,
  [12728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      sym__dedent,
  [12735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      sym__indent,
  [12742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      sym__dedent,
  [12749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      sym__dedent,
  [12756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      sym_name,
  [12763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_RBRACK,
  [12770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [12777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      ts_builtin_sym_end,
  [12784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      sym__indent,
  [12791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 367,
  [SMALL_STATE(6)] = 468,
  [SMALL_STATE(7)] = 569,
  [SMALL_STATE(8)] = 670,
  [SMALL_STATE(9)] = 771,
  [SMALL_STATE(10)] = 872,
  [SMALL_STATE(11)] = 955,
  [SMALL_STATE(12)] = 1038,
  [SMALL_STATE(13)] = 1121,
  [SMALL_STATE(14)] = 1184,
  [SMALL_STATE(15)] = 1247,
  [SMALL_STATE(16)] = 1310,
  [SMALL_STATE(17)] = 1373,
  [SMALL_STATE(18)] = 1433,
  [SMALL_STATE(19)] = 1493,
  [SMALL_STATE(20)] = 1547,
  [SMALL_STATE(21)] = 1607,
  [SMALL_STATE(22)] = 1667,
  [SMALL_STATE(23)] = 1721,
  [SMALL_STATE(24)] = 1781,
  [SMALL_STATE(25)] = 1841,
  [SMALL_STATE(26)] = 1901,
  [SMALL_STATE(27)] = 1961,
  [SMALL_STATE(28)] = 2015,
  [SMALL_STATE(29)] = 2075,
  [SMALL_STATE(30)] = 2129,
  [SMALL_STATE(31)] = 2189,
  [SMALL_STATE(32)] = 2243,
  [SMALL_STATE(33)] = 2303,
  [SMALL_STATE(34)] = 2363,
  [SMALL_STATE(35)] = 2423,
  [SMALL_STATE(36)] = 2477,
  [SMALL_STATE(37)] = 2527,
  [SMALL_STATE(38)] = 2579,
  [SMALL_STATE(39)] = 2629,
  [SMALL_STATE(40)] = 2679,
  [SMALL_STATE(41)] = 2729,
  [SMALL_STATE(42)] = 2779,
  [SMALL_STATE(43)] = 2827,
  [SMALL_STATE(44)] = 2877,
  [SMALL_STATE(45)] = 2927,
  [SMALL_STATE(46)] = 2977,
  [SMALL_STATE(47)] = 3027,
  [SMALL_STATE(48)] = 3077,
  [SMALL_STATE(49)] = 3109,
  [SMALL_STATE(50)] = 3161,
  [SMALL_STATE(51)] = 3193,
  [SMALL_STATE(52)] = 3243,
  [SMALL_STATE(53)] = 3293,
  [SMALL_STATE(54)] = 3343,
  [SMALL_STATE(55)] = 3393,
  [SMALL_STATE(56)] = 3443,
  [SMALL_STATE(57)] = 3493,
  [SMALL_STATE(58)] = 3543,
  [SMALL_STATE(59)] = 3593,
  [SMALL_STATE(60)] = 3641,
  [SMALL_STATE(61)] = 3689,
  [SMALL_STATE(62)] = 3739,
  [SMALL_STATE(63)] = 3771,
  [SMALL_STATE(64)] = 3821,
  [SMALL_STATE(65)] = 3853,
  [SMALL_STATE(66)] = 3903,
  [SMALL_STATE(67)] = 3955,
  [SMALL_STATE(68)] = 4005,
  [SMALL_STATE(69)] = 4055,
  [SMALL_STATE(70)] = 4105,
  [SMALL_STATE(71)] = 4137,
  [SMALL_STATE(72)] = 4169,
  [SMALL_STATE(73)] = 4219,
  [SMALL_STATE(74)] = 4269,
  [SMALL_STATE(75)] = 4319,
  [SMALL_STATE(76)] = 4346,
  [SMALL_STATE(77)] = 4373,
  [SMALL_STATE(78)] = 4400,
  [SMALL_STATE(79)] = 4427,
  [SMALL_STATE(80)] = 4454,
  [SMALL_STATE(81)] = 4480,
  [SMALL_STATE(82)] = 4506,
  [SMALL_STATE(83)] = 4532,
  [SMALL_STATE(84)] = 4558,
  [SMALL_STATE(85)] = 4584,
  [SMALL_STATE(86)] = 4610,
  [SMALL_STATE(87)] = 4636,
  [SMALL_STATE(88)] = 4662,
  [SMALL_STATE(89)] = 4688,
  [SMALL_STATE(90)] = 4714,
  [SMALL_STATE(91)] = 4740,
  [SMALL_STATE(92)] = 4766,
  [SMALL_STATE(93)] = 4792,
  [SMALL_STATE(94)] = 4818,
  [SMALL_STATE(95)] = 4844,
  [SMALL_STATE(96)] = 4870,
  [SMALL_STATE(97)] = 4896,
  [SMALL_STATE(98)] = 4922,
  [SMALL_STATE(99)] = 4948,
  [SMALL_STATE(100)] = 4974,
  [SMALL_STATE(101)] = 5000,
  [SMALL_STATE(102)] = 5026,
  [SMALL_STATE(103)] = 5052,
  [SMALL_STATE(104)] = 5078,
  [SMALL_STATE(105)] = 5104,
  [SMALL_STATE(106)] = 5130,
  [SMALL_STATE(107)] = 5156,
  [SMALL_STATE(108)] = 5182,
  [SMALL_STATE(109)] = 5208,
  [SMALL_STATE(110)] = 5234,
  [SMALL_STATE(111)] = 5260,
  [SMALL_STATE(112)] = 5286,
  [SMALL_STATE(113)] = 5312,
  [SMALL_STATE(114)] = 5338,
  [SMALL_STATE(115)] = 5364,
  [SMALL_STATE(116)] = 5390,
  [SMALL_STATE(117)] = 5416,
  [SMALL_STATE(118)] = 5442,
  [SMALL_STATE(119)] = 5468,
  [SMALL_STATE(120)] = 5494,
  [SMALL_STATE(121)] = 5520,
  [SMALL_STATE(122)] = 5546,
  [SMALL_STATE(123)] = 5572,
  [SMALL_STATE(124)] = 5598,
  [SMALL_STATE(125)] = 5624,
  [SMALL_STATE(126)] = 5650,
  [SMALL_STATE(127)] = 5676,
  [SMALL_STATE(128)] = 5702,
  [SMALL_STATE(129)] = 5728,
  [SMALL_STATE(130)] = 5754,
  [SMALL_STATE(131)] = 5780,
  [SMALL_STATE(132)] = 5806,
  [SMALL_STATE(133)] = 5832,
  [SMALL_STATE(134)] = 5858,
  [SMALL_STATE(135)] = 5890,
  [SMALL_STATE(136)] = 5916,
  [SMALL_STATE(137)] = 5940,
  [SMALL_STATE(138)] = 5964,
  [SMALL_STATE(139)] = 5988,
  [SMALL_STATE(140)] = 6012,
  [SMALL_STATE(141)] = 6044,
  [SMALL_STATE(142)] = 6076,
  [SMALL_STATE(143)] = 6102,
  [SMALL_STATE(144)] = 6128,
  [SMALL_STATE(145)] = 6151,
  [SMALL_STATE(146)] = 6172,
  [SMALL_STATE(147)] = 6195,
  [SMALL_STATE(148)] = 6218,
  [SMALL_STATE(149)] = 6241,
  [SMALL_STATE(150)] = 6262,
  [SMALL_STATE(151)] = 6281,
  [SMALL_STATE(152)] = 6304,
  [SMALL_STATE(153)] = 6326,
  [SMALL_STATE(154)] = 6348,
  [SMALL_STATE(155)] = 6370,
  [SMALL_STATE(156)] = 6388,
  [SMALL_STATE(157)] = 6412,
  [SMALL_STATE(158)] = 6436,
  [SMALL_STATE(159)] = 6460,
  [SMALL_STATE(160)] = 6480,
  [SMALL_STATE(161)] = 6502,
  [SMALL_STATE(162)] = 6526,
  [SMALL_STATE(163)] = 6550,
  [SMALL_STATE(164)] = 6572,
  [SMALL_STATE(165)] = 6596,
  [SMALL_STATE(166)] = 6615,
  [SMALL_STATE(167)] = 6636,
  [SMALL_STATE(168)] = 6653,
  [SMALL_STATE(169)] = 6674,
  [SMALL_STATE(170)] = 6695,
  [SMALL_STATE(171)] = 6716,
  [SMALL_STATE(172)] = 6737,
  [SMALL_STATE(173)] = 6758,
  [SMALL_STATE(174)] = 6777,
  [SMALL_STATE(175)] = 6798,
  [SMALL_STATE(176)] = 6819,
  [SMALL_STATE(177)] = 6838,
  [SMALL_STATE(178)] = 6855,
  [SMALL_STATE(179)] = 6876,
  [SMALL_STATE(180)] = 6897,
  [SMALL_STATE(181)] = 6918,
  [SMALL_STATE(182)] = 6937,
  [SMALL_STATE(183)] = 6954,
  [SMALL_STATE(184)] = 6975,
  [SMALL_STATE(185)] = 6992,
  [SMALL_STATE(186)] = 7011,
  [SMALL_STATE(187)] = 7032,
  [SMALL_STATE(188)] = 7051,
  [SMALL_STATE(189)] = 7072,
  [SMALL_STATE(190)] = 7089,
  [SMALL_STATE(191)] = 7110,
  [SMALL_STATE(192)] = 7136,
  [SMALL_STATE(193)] = 7162,
  [SMALL_STATE(194)] = 7188,
  [SMALL_STATE(195)] = 7206,
  [SMALL_STATE(196)] = 7232,
  [SMALL_STATE(197)] = 7258,
  [SMALL_STATE(198)] = 7284,
  [SMALL_STATE(199)] = 7310,
  [SMALL_STATE(200)] = 7336,
  [SMALL_STATE(201)] = 7354,
  [SMALL_STATE(202)] = 7370,
  [SMALL_STATE(203)] = 7396,
  [SMALL_STATE(204)] = 7422,
  [SMALL_STATE(205)] = 7438,
  [SMALL_STATE(206)] = 7464,
  [SMALL_STATE(207)] = 7490,
  [SMALL_STATE(208)] = 7507,
  [SMALL_STATE(209)] = 7522,
  [SMALL_STATE(210)] = 7539,
  [SMALL_STATE(211)] = 7556,
  [SMALL_STATE(212)] = 7573,
  [SMALL_STATE(213)] = 7588,
  [SMALL_STATE(214)] = 7607,
  [SMALL_STATE(215)] = 7622,
  [SMALL_STATE(216)] = 7639,
  [SMALL_STATE(217)] = 7654,
  [SMALL_STATE(218)] = 7669,
  [SMALL_STATE(219)] = 7684,
  [SMALL_STATE(220)] = 7701,
  [SMALL_STATE(221)] = 7718,
  [SMALL_STATE(222)] = 7739,
  [SMALL_STATE(223)] = 7760,
  [SMALL_STATE(224)] = 7775,
  [SMALL_STATE(225)] = 7790,
  [SMALL_STATE(226)] = 7805,
  [SMALL_STATE(227)] = 7820,
  [SMALL_STATE(228)] = 7837,
  [SMALL_STATE(229)] = 7854,
  [SMALL_STATE(230)] = 7869,
  [SMALL_STATE(231)] = 7888,
  [SMALL_STATE(232)] = 7909,
  [SMALL_STATE(233)] = 7924,
  [SMALL_STATE(234)] = 7939,
  [SMALL_STATE(235)] = 7959,
  [SMALL_STATE(236)] = 7987,
  [SMALL_STATE(237)] = 8007,
  [SMALL_STATE(238)] = 8031,
  [SMALL_STATE(239)] = 8055,
  [SMALL_STATE(240)] = 8075,
  [SMALL_STATE(241)] = 8095,
  [SMALL_STATE(242)] = 8123,
  [SMALL_STATE(243)] = 8151,
  [SMALL_STATE(244)] = 8175,
  [SMALL_STATE(245)] = 8190,
  [SMALL_STATE(246)] = 8205,
  [SMALL_STATE(247)] = 8218,
  [SMALL_STATE(248)] = 8233,
  [SMALL_STATE(249)] = 8246,
  [SMALL_STATE(250)] = 8261,
  [SMALL_STATE(251)] = 8276,
  [SMALL_STATE(252)] = 8289,
  [SMALL_STATE(253)] = 8306,
  [SMALL_STATE(254)] = 8321,
  [SMALL_STATE(255)] = 8338,
  [SMALL_STATE(256)] = 8353,
  [SMALL_STATE(257)] = 8368,
  [SMALL_STATE(258)] = 8383,
  [SMALL_STATE(259)] = 8398,
  [SMALL_STATE(260)] = 8415,
  [SMALL_STATE(261)] = 8430,
  [SMALL_STATE(262)] = 8445,
  [SMALL_STATE(263)] = 8460,
  [SMALL_STATE(264)] = 8473,
  [SMALL_STATE(265)] = 8488,
  [SMALL_STATE(266)] = 8503,
  [SMALL_STATE(267)] = 8518,
  [SMALL_STATE(268)] = 8533,
  [SMALL_STATE(269)] = 8548,
  [SMALL_STATE(270)] = 8563,
  [SMALL_STATE(271)] = 8578,
  [SMALL_STATE(272)] = 8593,
  [SMALL_STATE(273)] = 8608,
  [SMALL_STATE(274)] = 8625,
  [SMALL_STATE(275)] = 8640,
  [SMALL_STATE(276)] = 8655,
  [SMALL_STATE(277)] = 8670,
  [SMALL_STATE(278)] = 8685,
  [SMALL_STATE(279)] = 8700,
  [SMALL_STATE(280)] = 8713,
  [SMALL_STATE(281)] = 8728,
  [SMALL_STATE(282)] = 8741,
  [SMALL_STATE(283)] = 8756,
  [SMALL_STATE(284)] = 8771,
  [SMALL_STATE(285)] = 8786,
  [SMALL_STATE(286)] = 8801,
  [SMALL_STATE(287)] = 8816,
  [SMALL_STATE(288)] = 8831,
  [SMALL_STATE(289)] = 8844,
  [SMALL_STATE(290)] = 8859,
  [SMALL_STATE(291)] = 8874,
  [SMALL_STATE(292)] = 8889,
  [SMALL_STATE(293)] = 8904,
  [SMALL_STATE(294)] = 8919,
  [SMALL_STATE(295)] = 8934,
  [SMALL_STATE(296)] = 8959,
  [SMALL_STATE(297)] = 8974,
  [SMALL_STATE(298)] = 8987,
  [SMALL_STATE(299)] = 9002,
  [SMALL_STATE(300)] = 9014,
  [SMALL_STATE(301)] = 9034,
  [SMALL_STATE(302)] = 9056,
  [SMALL_STATE(303)] = 9078,
  [SMALL_STATE(304)] = 9100,
  [SMALL_STATE(305)] = 9120,
  [SMALL_STATE(306)] = 9142,
  [SMALL_STATE(307)] = 9162,
  [SMALL_STATE(308)] = 9182,
  [SMALL_STATE(309)] = 9204,
  [SMALL_STATE(310)] = 9224,
  [SMALL_STATE(311)] = 9246,
  [SMALL_STATE(312)] = 9258,
  [SMALL_STATE(313)] = 9278,
  [SMALL_STATE(314)] = 9300,
  [SMALL_STATE(315)] = 9312,
  [SMALL_STATE(316)] = 9334,
  [SMALL_STATE(317)] = 9346,
  [SMALL_STATE(318)] = 9358,
  [SMALL_STATE(319)] = 9375,
  [SMALL_STATE(320)] = 9394,
  [SMALL_STATE(321)] = 9411,
  [SMALL_STATE(322)] = 9428,
  [SMALL_STATE(323)] = 9447,
  [SMALL_STATE(324)] = 9464,
  [SMALL_STATE(325)] = 9481,
  [SMALL_STATE(326)] = 9498,
  [SMALL_STATE(327)] = 9517,
  [SMALL_STATE(328)] = 9536,
  [SMALL_STATE(329)] = 9553,
  [SMALL_STATE(330)] = 9572,
  [SMALL_STATE(331)] = 9591,
  [SMALL_STATE(332)] = 9610,
  [SMALL_STATE(333)] = 9629,
  [SMALL_STATE(334)] = 9648,
  [SMALL_STATE(335)] = 9665,
  [SMALL_STATE(336)] = 9679,
  [SMALL_STATE(337)] = 9695,
  [SMALL_STATE(338)] = 9709,
  [SMALL_STATE(339)] = 9723,
  [SMALL_STATE(340)] = 9737,
  [SMALL_STATE(341)] = 9751,
  [SMALL_STATE(342)] = 9763,
  [SMALL_STATE(343)] = 9779,
  [SMALL_STATE(344)] = 9795,
  [SMALL_STATE(345)] = 9811,
  [SMALL_STATE(346)] = 9825,
  [SMALL_STATE(347)] = 9841,
  [SMALL_STATE(348)] = 9857,
  [SMALL_STATE(349)] = 9869,
  [SMALL_STATE(350)] = 9885,
  [SMALL_STATE(351)] = 9901,
  [SMALL_STATE(352)] = 9915,
  [SMALL_STATE(353)] = 9931,
  [SMALL_STATE(354)] = 9945,
  [SMALL_STATE(355)] = 9961,
  [SMALL_STATE(356)] = 9977,
  [SMALL_STATE(357)] = 9986,
  [SMALL_STATE(358)] = 9995,
  [SMALL_STATE(359)] = 10004,
  [SMALL_STATE(360)] = 10013,
  [SMALL_STATE(361)] = 10022,
  [SMALL_STATE(362)] = 10031,
  [SMALL_STATE(363)] = 10044,
  [SMALL_STATE(364)] = 10057,
  [SMALL_STATE(365)] = 10070,
  [SMALL_STATE(366)] = 10083,
  [SMALL_STATE(367)] = 10096,
  [SMALL_STATE(368)] = 10105,
  [SMALL_STATE(369)] = 10118,
  [SMALL_STATE(370)] = 10131,
  [SMALL_STATE(371)] = 10140,
  [SMALL_STATE(372)] = 10149,
  [SMALL_STATE(373)] = 10162,
  [SMALL_STATE(374)] = 10175,
  [SMALL_STATE(375)] = 10188,
  [SMALL_STATE(376)] = 10197,
  [SMALL_STATE(377)] = 10210,
  [SMALL_STATE(378)] = 10223,
  [SMALL_STATE(379)] = 10236,
  [SMALL_STATE(380)] = 10249,
  [SMALL_STATE(381)] = 10258,
  [SMALL_STATE(382)] = 10271,
  [SMALL_STATE(383)] = 10284,
  [SMALL_STATE(384)] = 10293,
  [SMALL_STATE(385)] = 10302,
  [SMALL_STATE(386)] = 10315,
  [SMALL_STATE(387)] = 10324,
  [SMALL_STATE(388)] = 10333,
  [SMALL_STATE(389)] = 10346,
  [SMALL_STATE(390)] = 10359,
  [SMALL_STATE(391)] = 10372,
  [SMALL_STATE(392)] = 10385,
  [SMALL_STATE(393)] = 10398,
  [SMALL_STATE(394)] = 10411,
  [SMALL_STATE(395)] = 10420,
  [SMALL_STATE(396)] = 10433,
  [SMALL_STATE(397)] = 10446,
  [SMALL_STATE(398)] = 10459,
  [SMALL_STATE(399)] = 10468,
  [SMALL_STATE(400)] = 10481,
  [SMALL_STATE(401)] = 10494,
  [SMALL_STATE(402)] = 10507,
  [SMALL_STATE(403)] = 10520,
  [SMALL_STATE(404)] = 10533,
  [SMALL_STATE(405)] = 10542,
  [SMALL_STATE(406)] = 10555,
  [SMALL_STATE(407)] = 10568,
  [SMALL_STATE(408)] = 10581,
  [SMALL_STATE(409)] = 10592,
  [SMALL_STATE(410)] = 10605,
  [SMALL_STATE(411)] = 10618,
  [SMALL_STATE(412)] = 10631,
  [SMALL_STATE(413)] = 10642,
  [SMALL_STATE(414)] = 10655,
  [SMALL_STATE(415)] = 10668,
  [SMALL_STATE(416)] = 10677,
  [SMALL_STATE(417)] = 10690,
  [SMALL_STATE(418)] = 10703,
  [SMALL_STATE(419)] = 10716,
  [SMALL_STATE(420)] = 10729,
  [SMALL_STATE(421)] = 10742,
  [SMALL_STATE(422)] = 10755,
  [SMALL_STATE(423)] = 10768,
  [SMALL_STATE(424)] = 10777,
  [SMALL_STATE(425)] = 10790,
  [SMALL_STATE(426)] = 10803,
  [SMALL_STATE(427)] = 10816,
  [SMALL_STATE(428)] = 10829,
  [SMALL_STATE(429)] = 10842,
  [SMALL_STATE(430)] = 10851,
  [SMALL_STATE(431)] = 10860,
  [SMALL_STATE(432)] = 10869,
  [SMALL_STATE(433)] = 10882,
  [SMALL_STATE(434)] = 10891,
  [SMALL_STATE(435)] = 10900,
  [SMALL_STATE(436)] = 10909,
  [SMALL_STATE(437)] = 10922,
  [SMALL_STATE(438)] = 10931,
  [SMALL_STATE(439)] = 10944,
  [SMALL_STATE(440)] = 10953,
  [SMALL_STATE(441)] = 10966,
  [SMALL_STATE(442)] = 10979,
  [SMALL_STATE(443)] = 10988,
  [SMALL_STATE(444)] = 11001,
  [SMALL_STATE(445)] = 11010,
  [SMALL_STATE(446)] = 11023,
  [SMALL_STATE(447)] = 11036,
  [SMALL_STATE(448)] = 11049,
  [SMALL_STATE(449)] = 11062,
  [SMALL_STATE(450)] = 11075,
  [SMALL_STATE(451)] = 11084,
  [SMALL_STATE(452)] = 11097,
  [SMALL_STATE(453)] = 11106,
  [SMALL_STATE(454)] = 11119,
  [SMALL_STATE(455)] = 11128,
  [SMALL_STATE(456)] = 11138,
  [SMALL_STATE(457)] = 11146,
  [SMALL_STATE(458)] = 11156,
  [SMALL_STATE(459)] = 11166,
  [SMALL_STATE(460)] = 11176,
  [SMALL_STATE(461)] = 11186,
  [SMALL_STATE(462)] = 11196,
  [SMALL_STATE(463)] = 11204,
  [SMALL_STATE(464)] = 11214,
  [SMALL_STATE(465)] = 11222,
  [SMALL_STATE(466)] = 11232,
  [SMALL_STATE(467)] = 11242,
  [SMALL_STATE(468)] = 11252,
  [SMALL_STATE(469)] = 11260,
  [SMALL_STATE(470)] = 11270,
  [SMALL_STATE(471)] = 11280,
  [SMALL_STATE(472)] = 11290,
  [SMALL_STATE(473)] = 11300,
  [SMALL_STATE(474)] = 11308,
  [SMALL_STATE(475)] = 11316,
  [SMALL_STATE(476)] = 11326,
  [SMALL_STATE(477)] = 11336,
  [SMALL_STATE(478)] = 11344,
  [SMALL_STATE(479)] = 11354,
  [SMALL_STATE(480)] = 11364,
  [SMALL_STATE(481)] = 11374,
  [SMALL_STATE(482)] = 11384,
  [SMALL_STATE(483)] = 11394,
  [SMALL_STATE(484)] = 11404,
  [SMALL_STATE(485)] = 11414,
  [SMALL_STATE(486)] = 11424,
  [SMALL_STATE(487)] = 11432,
  [SMALL_STATE(488)] = 11440,
  [SMALL_STATE(489)] = 11450,
  [SMALL_STATE(490)] = 11460,
  [SMALL_STATE(491)] = 11470,
  [SMALL_STATE(492)] = 11480,
  [SMALL_STATE(493)] = 11490,
  [SMALL_STATE(494)] = 11500,
  [SMALL_STATE(495)] = 11510,
  [SMALL_STATE(496)] = 11520,
  [SMALL_STATE(497)] = 11528,
  [SMALL_STATE(498)] = 11538,
  [SMALL_STATE(499)] = 11548,
  [SMALL_STATE(500)] = 11556,
  [SMALL_STATE(501)] = 11566,
  [SMALL_STATE(502)] = 11574,
  [SMALL_STATE(503)] = 11584,
  [SMALL_STATE(504)] = 11594,
  [SMALL_STATE(505)] = 11602,
  [SMALL_STATE(506)] = 11612,
  [SMALL_STATE(507)] = 11622,
  [SMALL_STATE(508)] = 11630,
  [SMALL_STATE(509)] = 11640,
  [SMALL_STATE(510)] = 11648,
  [SMALL_STATE(511)] = 11658,
  [SMALL_STATE(512)] = 11666,
  [SMALL_STATE(513)] = 11674,
  [SMALL_STATE(514)] = 11682,
  [SMALL_STATE(515)] = 11690,
  [SMALL_STATE(516)] = 11698,
  [SMALL_STATE(517)] = 11708,
  [SMALL_STATE(518)] = 11718,
  [SMALL_STATE(519)] = 11728,
  [SMALL_STATE(520)] = 11738,
  [SMALL_STATE(521)] = 11748,
  [SMALL_STATE(522)] = 11756,
  [SMALL_STATE(523)] = 11764,
  [SMALL_STATE(524)] = 11772,
  [SMALL_STATE(525)] = 11780,
  [SMALL_STATE(526)] = 11790,
  [SMALL_STATE(527)] = 11800,
  [SMALL_STATE(528)] = 11808,
  [SMALL_STATE(529)] = 11816,
  [SMALL_STATE(530)] = 11824,
  [SMALL_STATE(531)] = 11832,
  [SMALL_STATE(532)] = 11839,
  [SMALL_STATE(533)] = 11846,
  [SMALL_STATE(534)] = 11853,
  [SMALL_STATE(535)] = 11860,
  [SMALL_STATE(536)] = 11867,
  [SMALL_STATE(537)] = 11874,
  [SMALL_STATE(538)] = 11881,
  [SMALL_STATE(539)] = 11888,
  [SMALL_STATE(540)] = 11895,
  [SMALL_STATE(541)] = 11902,
  [SMALL_STATE(542)] = 11909,
  [SMALL_STATE(543)] = 11916,
  [SMALL_STATE(544)] = 11923,
  [SMALL_STATE(545)] = 11930,
  [SMALL_STATE(546)] = 11937,
  [SMALL_STATE(547)] = 11944,
  [SMALL_STATE(548)] = 11951,
  [SMALL_STATE(549)] = 11958,
  [SMALL_STATE(550)] = 11965,
  [SMALL_STATE(551)] = 11972,
  [SMALL_STATE(552)] = 11979,
  [SMALL_STATE(553)] = 11986,
  [SMALL_STATE(554)] = 11993,
  [SMALL_STATE(555)] = 12000,
  [SMALL_STATE(556)] = 12007,
  [SMALL_STATE(557)] = 12014,
  [SMALL_STATE(558)] = 12021,
  [SMALL_STATE(559)] = 12028,
  [SMALL_STATE(560)] = 12035,
  [SMALL_STATE(561)] = 12042,
  [SMALL_STATE(562)] = 12049,
  [SMALL_STATE(563)] = 12056,
  [SMALL_STATE(564)] = 12063,
  [SMALL_STATE(565)] = 12070,
  [SMALL_STATE(566)] = 12077,
  [SMALL_STATE(567)] = 12084,
  [SMALL_STATE(568)] = 12091,
  [SMALL_STATE(569)] = 12098,
  [SMALL_STATE(570)] = 12105,
  [SMALL_STATE(571)] = 12112,
  [SMALL_STATE(572)] = 12119,
  [SMALL_STATE(573)] = 12126,
  [SMALL_STATE(574)] = 12133,
  [SMALL_STATE(575)] = 12140,
  [SMALL_STATE(576)] = 12147,
  [SMALL_STATE(577)] = 12154,
  [SMALL_STATE(578)] = 12161,
  [SMALL_STATE(579)] = 12168,
  [SMALL_STATE(580)] = 12175,
  [SMALL_STATE(581)] = 12182,
  [SMALL_STATE(582)] = 12189,
  [SMALL_STATE(583)] = 12196,
  [SMALL_STATE(584)] = 12203,
  [SMALL_STATE(585)] = 12210,
  [SMALL_STATE(586)] = 12217,
  [SMALL_STATE(587)] = 12224,
  [SMALL_STATE(588)] = 12231,
  [SMALL_STATE(589)] = 12238,
  [SMALL_STATE(590)] = 12245,
  [SMALL_STATE(591)] = 12252,
  [SMALL_STATE(592)] = 12259,
  [SMALL_STATE(593)] = 12266,
  [SMALL_STATE(594)] = 12273,
  [SMALL_STATE(595)] = 12280,
  [SMALL_STATE(596)] = 12287,
  [SMALL_STATE(597)] = 12294,
  [SMALL_STATE(598)] = 12301,
  [SMALL_STATE(599)] = 12308,
  [SMALL_STATE(600)] = 12315,
  [SMALL_STATE(601)] = 12322,
  [SMALL_STATE(602)] = 12329,
  [SMALL_STATE(603)] = 12336,
  [SMALL_STATE(604)] = 12343,
  [SMALL_STATE(605)] = 12350,
  [SMALL_STATE(606)] = 12357,
  [SMALL_STATE(607)] = 12364,
  [SMALL_STATE(608)] = 12371,
  [SMALL_STATE(609)] = 12378,
  [SMALL_STATE(610)] = 12385,
  [SMALL_STATE(611)] = 12392,
  [SMALL_STATE(612)] = 12399,
  [SMALL_STATE(613)] = 12406,
  [SMALL_STATE(614)] = 12413,
  [SMALL_STATE(615)] = 12420,
  [SMALL_STATE(616)] = 12427,
  [SMALL_STATE(617)] = 12434,
  [SMALL_STATE(618)] = 12441,
  [SMALL_STATE(619)] = 12448,
  [SMALL_STATE(620)] = 12455,
  [SMALL_STATE(621)] = 12462,
  [SMALL_STATE(622)] = 12469,
  [SMALL_STATE(623)] = 12476,
  [SMALL_STATE(624)] = 12483,
  [SMALL_STATE(625)] = 12490,
  [SMALL_STATE(626)] = 12497,
  [SMALL_STATE(627)] = 12504,
  [SMALL_STATE(628)] = 12511,
  [SMALL_STATE(629)] = 12518,
  [SMALL_STATE(630)] = 12525,
  [SMALL_STATE(631)] = 12532,
  [SMALL_STATE(632)] = 12539,
  [SMALL_STATE(633)] = 12546,
  [SMALL_STATE(634)] = 12553,
  [SMALL_STATE(635)] = 12560,
  [SMALL_STATE(636)] = 12567,
  [SMALL_STATE(637)] = 12574,
  [SMALL_STATE(638)] = 12581,
  [SMALL_STATE(639)] = 12588,
  [SMALL_STATE(640)] = 12595,
  [SMALL_STATE(641)] = 12602,
  [SMALL_STATE(642)] = 12609,
  [SMALL_STATE(643)] = 12616,
  [SMALL_STATE(644)] = 12623,
  [SMALL_STATE(645)] = 12630,
  [SMALL_STATE(646)] = 12637,
  [SMALL_STATE(647)] = 12644,
  [SMALL_STATE(648)] = 12651,
  [SMALL_STATE(649)] = 12658,
  [SMALL_STATE(650)] = 12665,
  [SMALL_STATE(651)] = 12672,
  [SMALL_STATE(652)] = 12679,
  [SMALL_STATE(653)] = 12686,
  [SMALL_STATE(654)] = 12693,
  [SMALL_STATE(655)] = 12700,
  [SMALL_STATE(656)] = 12707,
  [SMALL_STATE(657)] = 12714,
  [SMALL_STATE(658)] = 12721,
  [SMALL_STATE(659)] = 12728,
  [SMALL_STATE(660)] = 12735,
  [SMALL_STATE(661)] = 12742,
  [SMALL_STATE(662)] = 12749,
  [SMALL_STATE(663)] = 12756,
  [SMALL_STATE(664)] = 12763,
  [SMALL_STATE(665)] = 12770,
  [SMALL_STATE(666)] = 12777,
  [SMALL_STATE(667)] = 12784,
  [SMALL_STATE(668)] = 12791,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(465),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(648),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(647),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(25),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(646),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(330),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(645),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(328),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(467),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(643),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(642),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(641),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(313),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(343),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(238),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(237),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(32),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(465),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(648),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(328),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(467),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(643),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(642),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(641),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(313),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(343),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24), SHIFT_REPEAT(326),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 3, .production_id = 7),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 3, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 3, .production_id = 16),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 3, .production_id = 16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(419),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 3, .production_id = 7),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 3, .production_id = 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 27),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 27),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 46),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 46),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variable_manquante, 3, .production_id = 7),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variable_manquante, 3, .production_id = 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 3, .production_id = 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 3, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 56),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 56),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 7, .production_id = 7),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 7, .production_id = 7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 3, .production_id = 7),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 3, .production_id = 7),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 57),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 57),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 56),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 56),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 13, .production_id = 58),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 13, .production_id = 58),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 58),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 58),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 5, .production_id = 29),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 5, .production_id = 29),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 38),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 38),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 2, .production_id = 7),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 2, .production_id = 7),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 3, .production_id = 7),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 3, .production_id = 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 51),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 51),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 4, .production_id = 7),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 4, .production_id = 7),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 6, .production_id = 35),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 6, .production_id = 35),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 55),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 55),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 2, .production_id = 7),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 2, .production_id = 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 30),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 30),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 8, .production_id = 42),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 8, .production_id = 42),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 4, .production_id = 7),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 4, .production_id = 7),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_avec, 4, .production_id = 7),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_avec, 4, .production_id = 7),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 31),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 31),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 2, .production_id = 7),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 2, .production_id = 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 4, .production_id = 7),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 4, .production_id = 7),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 40),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 40),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 16),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 16),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 10, .production_id = 51),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 10, .production_id = 51),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 50),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 50),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 49),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 49),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, .production_id = 8),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 9),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 9, .production_id = 42),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 9, .production_id = 42),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 41),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 41),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variable_manquante, 4, .production_id = 7),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variable_manquante, 4, .production_id = 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 45),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 45),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(663),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(526),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(407),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 17),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 11),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 10),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(606),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(503),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(481),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(441),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(580),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(382),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(668),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(588),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(137),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(516),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(369),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(510),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 3),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 5),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 6),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 12),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 2, .production_id = 13),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2), SHIFT_REPEAT(318),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 4, .production_id = 14),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(393),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 5),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 15),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4, .production_id = 34),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(422),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5, .production_id = 20),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5, .production_id = 21),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2), SHIFT_REPEAT(320),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5),
  [1152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(631),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 6, .production_id = 26),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 4, .production_id = 25),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(243),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(525),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 2),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 3, .production_id = 28),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 3),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 36),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 2, .production_id = 4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_taux_or_montant, 2, .production_id = 47),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rule, 1, .production_id = 23),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 4, .production_id = 22),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 6, .production_id = 43),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 2, .production_id = 18),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 3),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 4, .production_id = 32),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 54),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tranche, 3, .production_id = 53),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tranche, 3, .production_id = 52),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 4, .production_id = 33),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 3),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 48),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 3),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_sinon, 2),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 2, .production_id = 19),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 6, .production_id = 44),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 4),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e_units, 1),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_si, 4, .production_id = 39),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 37),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1529] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
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
