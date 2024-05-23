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
#define STATE_COUNT 691
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 18
#define PRODUCTION_ID_COUNT 41

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_COLON = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_SQUOTE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
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
  sym_string = 32,
  sym_date = 33,
  aux_sym_number_token1 = 34,
  anon_sym_SPACE = 35,
  anon_sym_SLASH = 36,
  anon_sym_DOT2 = 37,
  aux_sym_unit_token1 = 38,
  sym_exposant = 39,
  sym_importer = 40,
  sym_depuis = 41,
  sym_nom = 42,
  sym_source = 43,
  sym_url = 44,
  sym_dans = 45,
  sym_les_ru00e8gles = 46,
  sym_formule = 47,
  sym_avec = 48,
  sym_remplace = 49,
  sym_ru00e9fu00e9rences_u00e0 = 50,
  sym_sauf_dans = 51,
  sym_une_possibilitu00e9 = 52,
  sym_choix_obligatoire = 53,
  sym_possibilitu00e9s = 54,
  sym_texte = 55,
  sym_assiette = 56,
  sym_montant = 57,
  sym_multiplicateur = 58,
  sym_tranches = 59,
  sym_plafond = 60,
  sym_taux = 61,
  sym_inversion_numu00e9rique = 62,
  sym_contexte = 63,
  sym_variations = 64,
  sym_si = 65,
  sym_alors = 66,
  sym_sinon = 67,
  sym_duru00e9e = 68,
  sym_jusqu_u00e0 = 69,
  sym_unitu00e9 = 70,
  sym_meta_name = 71,
  aux_sym__paragraph_token1 = 72,
  sym__key = 73,
  sym_text_line = 74,
  sym__indent = 75,
  sym__dedent = 76,
  sym__array_prefix = 77,
  sym__newline = 78,
  sym_paragraph = 79,
  sym_error_recovery_mode = 80,
  sym_source_file = 81,
  sym_import = 82,
  sym_import_from = 83,
  sym_import_name = 84,
  sym_import_source = 85,
  sym_import_url = 86,
  sym_import_into = 87,
  sym_import_rules = 88,
  sym_import_rule = 89,
  sym_rule = 90,
  sym_rule_body = 91,
  sym__statement = 92,
  sym_s_formule = 93,
  sym__valeur = 94,
  sym_mechanism = 95,
  sym_m_unary = 96,
  sym_m_array = 97,
  sym__m_special = 98,
  sym_m_inversion = 99,
  sym_m_contexte = 100,
  sym_m_variations = 101,
  sym_m_variation_si = 102,
  sym_m_variation_sinon = 103,
  sym_m_unitu00e9 = 104,
  sym_m_duru00e9e = 105,
  sym__date_or_ref = 106,
  sym_m_duru00e9e_units = 107,
  sym_m_baru00e8me_like = 108,
  sym__m_tranche = 109,
  sym__m_taux_or_montant = 110,
  sym_m_texte = 111,
  sym_m_une_possibilitu00e9 = 112,
  sym_m_une_possibilitu00e9_options = 113,
  sym_s_avec = 114,
  sym_s_remplace = 115,
  sym__remplace_rule = 116,
  sym_remplace_rule_in = 117,
  sym_remplace_rule_except = 118,
  sym__tags = 119,
  sym__expression = 120,
  sym__ar_expression = 121,
  sym_ar_unary_expression = 122,
  sym_ar_binary_expression = 123,
  sym__bool_expression = 124,
  sym_comparison = 125,
  sym_dotted_name = 126,
  sym_reference = 127,
  sym_boolean = 128,
  sym_number = 129,
  sym_units = 130,
  sym__units = 131,
  sym_unit = 132,
  sym_meta = 133,
  sym_custom_meta = 134,
  sym_meta_value = 135,
  sym__text_line = 136,
  sym__paragraph = 137,
  sym_object = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_import_rules_repeat1 = 140,
  aux_sym_rule_body_repeat1 = 141,
  aux_sym__valeur_repeat1 = 142,
  aux_sym_m_array_repeat1 = 143,
  aux_sym_m_inversion_repeat1 = 144,
  aux_sym_m_contexte_repeat1 = 145,
  aux_sym_m_variations_repeat1 = 146,
  aux_sym_m_baru00e8me_like_repeat1 = 147,
  aux_sym_s_remplace_repeat1 = 148,
  aux_sym_dotted_name_repeat1 = 149,
  aux_sym_units_repeat1 = 150,
  aux_sym__units_repeat1 = 151,
  aux_sym__text_line_repeat1 = 152,
  aux_sym_object_repeat1 = 153,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_string] = "string",
  [sym_date] = "date",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_SPACE] = " ",
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
  [sym_import_name] = "import_name",
  [sym_import_source] = "import_source",
  [sym_import_url] = "import_url",
  [sym_import_into] = "import_into",
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
  [sym__m_tranche] = "_m_tranche",
  [sym__m_taux_or_montant] = "_m_taux_or_montant",
  [sym_m_texte] = "m_texte",
  [sym_m_une_possibilitu00e9] = "m_une_possibilit\u00e9",
  [sym_m_une_possibilitu00e9_options] = "m_une_possibilit\u00e9_options",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_string] = sym_string,
  [sym_date] = sym_date,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
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
  [sym_import_name] = sym_import_name,
  [sym_import_source] = sym_import_source,
  [sym_import_url] = sym_import_url,
  [sym_import_into] = sym_import_into,
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
  [sym__m_tranche] = sym__m_tranche,
  [sym__m_taux_or_montant] = sym__m_taux_or_montant,
  [sym_m_texte] = sym_m_texte,
  [sym_m_une_possibilitu00e9] = sym_m_une_possibilitu00e9,
  [sym_m_une_possibilitu00e9_options] = sym_m_une_possibilitu00e9_options,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_import_name] = {
    .visible = true,
    .named = true,
  },
  [sym_import_source] = {
    .visible = true,
    .named = true,
  },
  [sym_import_url] = {
    .visible = true,
    .named = true,
  },
  [sym_import_into] = {
    .visible = true,
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
  [sym__m_tranche] = {
    .visible = false,
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
  field_condition = 3,
  field_consequence = 4,
  field_denominators = 5,
  field_except = 6,
  field_from = 7,
  field_in = 8,
  field_m_name = 9,
  field_meta_name = 10,
  field_meta_value = 11,
  field_multiplicateur = 12,
  field_numerators = 13,
  field_options = 14,
  field_plafond = 15,
  field_ref = 16,
  field_required = 17,
  field_rule_name = 18,
  field_to = 19,
  field_unit = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assiette] = "assiette",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_denominators] = "denominators",
  [field_except] = "except",
  [field_from] = "from",
  [field_in] = "in",
  [field_m_name] = "m_name",
  [field_meta_name] = "meta_name",
  [field_meta_value] = "meta_value",
  [field_multiplicateur] = "multiplicateur",
  [field_numerators] = "numerators",
  [field_options] = "options",
  [field_plafond] = "plafond",
  [field_ref] = "ref",
  [field_required] = "required",
  [field_rule_name] = "rule_name",
  [field_to] = "to",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 4},
  [11] = {.index = 20, .length = 6},
  [12] = {.index = 26, .length = 3},
  [13] = {.index = 29, .length = 2},
  [14] = {.index = 31, .length = 2},
  [15] = {.index = 33, .length = 2},
  [16] = {.index = 35, .length = 2},
  [17] = {.index = 37, .length = 3},
  [18] = {.index = 40, .length = 3},
  [19] = {.index = 43, .length = 4},
  [20] = {.index = 47, .length = 3},
  [21] = {.index = 50, .length = 3},
  [22] = {.index = 53, .length = 3},
  [23] = {.index = 56, .length = 2},
  [24] = {.index = 58, .length = 3},
  [25] = {.index = 61, .length = 2},
  [26] = {.index = 63, .length = 3},
  [27] = {.index = 66, .length = 4},
  [28] = {.index = 70, .length = 4},
  [29] = {.index = 74, .length = 4},
  [30] = {.index = 78, .length = 4},
  [31] = {.index = 82, .length = 1},
  [32] = {.index = 83, .length = 5},
  [33] = {.index = 88, .length = 5},
  [34] = {.index = 93, .length = 4},
  [35] = {.index = 97, .length = 4},
  [36] = {.index = 101, .length = 1},
  [37] = {.index = 102, .length = 1},
  [38] = {.index = 103, .length = 5},
  [39] = {.index = 108, .length = 5},
  [40] = {.index = 113, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_rule_name, 0},
  [2] =
    {field_numerators, 0},
  [3] =
    {field_meta_name, 0},
  [4] =
    {field_numerators, 0},
    {field_numerators, 1},
  [6] =
    {field_denominators, 1},
    {field_numerators, 0},
  [8] =
    {field_body, 5},
    {field_rule_name, 3},
  [10] =
    {field_m_name, 0},
  [11] =
    {field_meta_name, 0},
    {field_meta_value, 2},
  [13] =
    {field_denominators, 2},
    {field_numerators, 0},
    {field_numerators, 1},
  [16] =
    {field_except, 3, .inherited = true},
    {field_in, 3, .inherited = true},
    {field_m_name, 0},
    {field_ref, 3, .inherited = true},
  [20] =
    {field_except, 0, .inherited = true},
    {field_except, 1, .inherited = true},
    {field_in, 0, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 0, .inherited = true},
    {field_ref, 1, .inherited = true},
  [26] =
    {field_except, 1, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 1, .inherited = true},
  [29] =
    {field_ref, 2},
    {field_ref, 3},
  [31] =
    {field_m_name, 0},
    {field_options, 5},
  [33] =
    {field_from, 5},
    {field_m_name, 0},
  [35] =
    {field_m_name, 0},
    {field_to, 5},
  [37] =
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [40] =
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
  [43] =
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [47] =
    {field_in, 6},
    {field_ref, 2},
    {field_ref, 3},
  [50] =
    {field_except, 6},
    {field_ref, 2},
    {field_ref, 3},
  [53] =
    {field_m_name, 0},
    {field_options, 8},
    {field_required, 5},
  [56] =
    {field_condition, 2},
    {field_consequence, 5},
  [58] =
    {field_from, 5},
    {field_m_name, 0},
    {field_to, 8},
  [61] =
    {field_plafond, 0, .inherited = true},
    {field_plafond, 1, .inherited = true},
  [63] =
    {field_assiette, 5},
    {field_m_name, 0},
    {field_plafond, 9, .inherited = true},
  [66] =
    {field_in, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [70] =
    {field_except, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [74] =
    {field_from, 5},
    {field_m_name, 0},
    {field_unit, 8},
    {field_unit, 9},
  [78] =
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 8},
    {field_unit, 9},
  [82] =
    {field_plafond, 1, .inherited = true},
  [83] =
    {field_from, 5},
    {field_m_name, 0},
    {field_unit, 8},
    {field_unit, 9},
    {field_unit, 10},
  [88] =
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 8},
    {field_unit, 9},
    {field_unit, 10},
  [93] =
    {field_except, 9},
    {field_in, 6},
    {field_ref, 2},
    {field_ref, 3},
  [97] =
    {field_assiette, 5},
    {field_m_name, 0},
    {field_multiplicateur, 8},
    {field_plafond, 12, .inherited = true},
  [101] =
    {field_plafond, 2},
  [102] =
    {field_plafond, 3},
  [103] =
    {field_except, 10},
    {field_in, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [108] =
    {field_from, 5},
    {field_m_name, 0},
    {field_to, 8},
    {field_unit, 11},
    {field_unit, 12},
  [113] =
    {field_from, 5},
    {field_m_name, 0},
    {field_to, 8},
    {field_unit, 11},
    {field_unit, 12},
    {field_unit, 13},
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
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 5,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 26,
  [35] = 22,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 53,
  [56] = 52,
  [57] = 49,
  [58] = 58,
  [59] = 47,
  [60] = 47,
  [61] = 43,
  [62] = 62,
  [63] = 63,
  [64] = 50,
  [65] = 65,
  [66] = 58,
  [67] = 50,
  [68] = 65,
  [69] = 65,
  [70] = 65,
  [71] = 47,
  [72] = 72,
  [73] = 50,
  [74] = 74,
  [75] = 75,
  [76] = 48,
  [77] = 48,
  [78] = 48,
  [79] = 58,
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
  [140] = 132,
  [141] = 132,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 137,
  [151] = 138,
  [152] = 136,
  [153] = 133,
  [154] = 138,
  [155] = 155,
  [156] = 135,
  [157] = 139,
  [158] = 158,
  [159] = 135,
  [160] = 134,
  [161] = 133,
  [162] = 139,
  [163] = 163,
  [164] = 144,
  [165] = 147,
  [166] = 145,
  [167] = 167,
  [168] = 147,
  [169] = 149,
  [170] = 142,
  [171] = 144,
  [172] = 143,
  [173] = 146,
  [174] = 148,
  [175] = 134,
  [176] = 146,
  [177] = 177,
  [178] = 143,
  [179] = 179,
  [180] = 145,
  [181] = 149,
  [182] = 136,
  [183] = 183,
  [184] = 137,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 142,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 192,
  [193] = 189,
  [194] = 191,
  [195] = 158,
  [196] = 191,
  [197] = 197,
  [198] = 148,
  [199] = 192,
  [200] = 200,
  [201] = 200,
  [202] = 158,
  [203] = 192,
  [204] = 200,
  [205] = 167,
  [206] = 206,
  [207] = 177,
  [208] = 155,
  [209] = 209,
  [210] = 183,
  [211] = 185,
  [212] = 179,
  [213] = 177,
  [214] = 187,
  [215] = 155,
  [216] = 206,
  [217] = 217,
  [218] = 206,
  [219] = 219,
  [220] = 186,
  [221] = 187,
  [222] = 183,
  [223] = 163,
  [224] = 167,
  [225] = 163,
  [226] = 186,
  [227] = 185,
  [228] = 185,
  [229] = 183,
  [230] = 179,
  [231] = 231,
  [232] = 232,
  [233] = 233,
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
  [245] = 219,
  [246] = 197,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 244,
  [251] = 243,
  [252] = 252,
  [253] = 242,
  [254] = 249,
  [255] = 244,
  [256] = 243,
  [257] = 242,
  [258] = 249,
  [259] = 259,
  [260] = 244,
  [261] = 261,
  [262] = 242,
  [263] = 263,
  [264] = 217,
  [265] = 265,
  [266] = 261,
  [267] = 267,
  [268] = 268,
  [269] = 263,
  [270] = 270,
  [271] = 219,
  [272] = 272,
  [273] = 217,
  [274] = 267,
  [275] = 265,
  [276] = 267,
  [277] = 263,
  [278] = 272,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 197,
  [283] = 263,
  [284] = 243,
  [285] = 272,
  [286] = 286,
  [287] = 272,
  [288] = 288,
  [289] = 241,
  [290] = 270,
  [291] = 288,
  [292] = 286,
  [293] = 249,
  [294] = 294,
  [295] = 295,
  [296] = 294,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 115,
  [302] = 100,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 99,
  [311] = 311,
  [312] = 107,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
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
  [334] = 135,
  [335] = 138,
  [336] = 336,
  [337] = 133,
  [338] = 338,
  [339] = 139,
  [340] = 139,
  [341] = 341,
  [342] = 342,
  [343] = 138,
  [344] = 344,
  [345] = 135,
  [346] = 346,
  [347] = 133,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 352,
  [358] = 352,
  [359] = 352,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 352,
  [367] = 367,
  [368] = 368,
  [369] = 147,
  [370] = 370,
  [371] = 145,
  [372] = 372,
  [373] = 143,
  [374] = 144,
  [375] = 363,
  [376] = 149,
  [377] = 142,
  [378] = 146,
  [379] = 147,
  [380] = 145,
  [381] = 143,
  [382] = 382,
  [383] = 144,
  [384] = 363,
  [385] = 149,
  [386] = 142,
  [387] = 146,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 363,
  [395] = 395,
  [396] = 362,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 393,
  [409] = 409,
  [410] = 410,
  [411] = 392,
  [412] = 365,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 363,
  [418] = 418,
  [419] = 419,
  [420] = 362,
  [421] = 360,
  [422] = 422,
  [423] = 423,
  [424] = 353,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 351,
  [432] = 432,
  [433] = 350,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 158,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 444,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 455,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 115,
  [467] = 100,
  [468] = 107,
  [469] = 99,
  [470] = 470,
  [471] = 471,
  [472] = 158,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 455,
  [478] = 478,
  [479] = 115,
  [480] = 100,
  [481] = 107,
  [482] = 482,
  [483] = 483,
  [484] = 99,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 455,
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
  [504] = 455,
  [505] = 505,
  [506] = 506,
  [507] = 507,
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
  [594] = 540,
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
  [621] = 614,
  [622] = 622,
  [623] = 623,
  [624] = 502,
  [625] = 528,
  [626] = 598,
  [627] = 627,
  [628] = 628,
  [629] = 609,
  [630] = 620,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 528,
  [638] = 598,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 528,
  [645] = 598,
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
  [660] = 536,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 536,
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
  [679] = 613,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 609,
  [686] = 673,
  [687] = 647,
  [688] = 688,
  [689] = 689,
  [690] = 612,
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
        : (c <= '_' || (c >= 'a' && c <= 'l')))))
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_18(int32_t c) {
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

static inline bool sym_name_character_set_19(int32_t c) {
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

static inline bool sym_name_character_set_20(int32_t c) {
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

static inline bool sym_name_character_set_21(int32_t c) {
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

static inline bool sym_name_character_set_22(int32_t c) {
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

static inline bool sym_name_character_set_23(int32_t c) {
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

static inline bool sym_name_character_set_24(int32_t c) {
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

static inline bool sym_name_character_set_25(int32_t c) {
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

static inline bool sym_name_character_set_26(int32_t c) {
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

static inline bool sym_name_character_set_27(int32_t c) {
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

static inline bool sym_name_character_set_28(int32_t c) {
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

static inline bool sym_name_character_set_29(int32_t c) {
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
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_31(int32_t c) {
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

static inline bool sym_name_character_set_32(int32_t c) {
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

static inline bool sym_name_character_set_33(int32_t c) {
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

static inline bool sym_name_character_set_34(int32_t c) {
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
    : (c <= 'z' || (c < 187
      ? (c < 176
        ? c == 171
        : (c <= 176 || c == 178))
      : (c <= 187 || (c < 8217
        ? (c >= 192 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_36(int32_t c) {
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

static inline bool sym_name_character_set_37(int32_t c) {
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

static inline bool sym_name_character_set_38(int32_t c) {
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

static inline bool sym_name_character_set_39(int32_t c) {
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

static inline bool sym_name_character_set_40(int32_t c) {
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

static inline bool sym_name_character_set_41(int32_t c) {
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
      : (c <= 231 || (c < 8217
        ? (c >= 233 && c <= 383)
        : (c <= 8217 || c == 8364))))));
}

static inline bool sym_name_character_set_43(int32_t c) {
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

static inline bool sym_name_character_set_44(int32_t c) {
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
      if (eof) ADVANCE(110);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(730);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'q') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(387);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'm') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 'q') ADVANCE(626);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead == 'v') ADVANCE(644);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(668);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'm') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 'q') ADVANCE(626);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead == 'v') ADVANCE(644);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(690);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(691);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ':') ADVANCE(731);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(5);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(713);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'q') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(387);
      if (lookahead == '|') ADVANCE(730);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(730);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead == 'q') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(387);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(254);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(254);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(711);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(711);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(715);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(713);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'v') ADVANCE(387);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == 'v') ADVANCE(387);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == ':') ADVANCE(733);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(689);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(689);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(715);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(690);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == ':') ADVANCE(735);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(42);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(46);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == ':') ADVANCE(731);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == ':') ADVANCE(731);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(731);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(731);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'd') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(564);
      if (sym_name_character_set_1(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'd') ADVANCE(660);
      if (sym_name_character_set_1(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(570);
      if (sym_name_character_set_1(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(500);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(481);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(568);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(661);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(457);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'p') ADVANCE(562);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(651);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(432);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(630);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(588);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(662);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(492);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(731);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(731);
      if (sym_name_character_set_2(lookahead)) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(298);
      if (sym_name_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(403);
      if (sym_name_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(307);
      if (sym_name_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(229);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(207);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(305);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(405);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(182);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(296);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(196);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(394);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(154);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(374);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(327);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(406);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(218);
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 101:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 107:
      if (sym_name_character_set_2(lookahead)) ADVANCE(412);
      END_STATE();
    case 108:
      if (sym_name_character_set_2(lookahead)) ADVANCE(715);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == '/') ADVANCE(712);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(254);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(109)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(412);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == ':') ADVANCE(733);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(748);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(690);
      if (lookahead == ':') ADVANCE(732);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(748);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_m_unary_name);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_m_array_name);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_m_baru00e8me_like_name);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '!') ADVANCE(717);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_4(lookahead)) ADVANCE(412);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_5(lookahead)) ADVANCE(412);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_6(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_7(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_8(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_8(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_9(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_9(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_10(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_11(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 233) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_12(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_13(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_14(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_15(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_16(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_17(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_18(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_19(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead == 'x') ADVANCE(310);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_20(lookahead)) ADVANCE(412);
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_20(lookahead)) ADVANCE(412);
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_20(lookahead)) ADVANCE(412);
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_21(lookahead)) ADVANCE(412);
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_22(lookahead)) ADVANCE(412);
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_23(lookahead)) ADVANCE(412);
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_24(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_24(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(398);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_24(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_24(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_24(lookahead)) ADVANCE(412);
      if (lookahead == 'f') ADVANCE(411);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_25(lookahead)) ADVANCE(412);
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_26(lookahead)) ADVANCE(412);
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_27(lookahead)) ADVANCE(412);
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_28(lookahead)) ADVANCE(412);
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(373);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(682);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_29(lookahead)) ADVANCE(412);
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_30(lookahead)) ADVANCE(412);
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_31(lookahead)) ADVANCE(412);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_32(lookahead)) ADVANCE(412);
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_33(lookahead)) ADVANCE(412);
      if (lookahead == 'q') ADVANCE(377);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_34(lookahead)) ADVANCE(412);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_35(lookahead)) ADVANCE(412);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_36(lookahead)) ADVANCE(412);
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_37(lookahead)) ADVANCE(412);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_38(lookahead)) ADVANCE(412);
      if (lookahead == 'v') ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_38(lookahead)) ADVANCE(412);
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_39(lookahead)) ADVANCE(412);
      if (lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_39(lookahead)) ADVANCE(412);
      if (lookahead == 'x') ADVANCE(681);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_39(lookahead)) ADVANCE(412);
      if (lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_39(lookahead)) ADVANCE(412);
      if (lookahead == 'x') ADVANCE(362);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_40(lookahead)) ADVANCE(412);
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_41(lookahead)) ADVANCE(412);
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_42(lookahead)) ADVANCE(412);
      if (lookahead == 232) ADVANCE(260);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(123);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(728);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(213);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(721);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(212);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(215);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(323);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(179);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(329);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(330);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_43(lookahead)) ADVANCE(412);
      if (lookahead == 233) ADVANCE(332);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(94);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(82);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(87);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(89);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(84);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(81);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(93);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(96);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(100);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(99);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_4(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead == 'v') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_44(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_8(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_9(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_10(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'u') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_11(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 233) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_12(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_13(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_14(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_15(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_16(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_18(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_19(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 'x') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_20(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_20(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_20(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_21(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_22(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_22(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_22(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_22(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_22(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_23(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_24(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_24(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_24(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_24(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_25(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_26(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_27(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_28(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_29(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_30(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_31(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_32(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_33(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'q') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_34(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_35(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_36(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_37(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_38(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'v') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_38(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'v') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_39(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'x') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_39(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_39(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'x') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_39(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'x') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_40(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'y') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_41(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_42(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 232) ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_43(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == 233) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(76);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(65);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(55);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(57);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(63);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(67);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(59);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(56);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(64);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(66);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(69);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(68);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(98);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(85);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(60);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(90);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(83);
      if (sym_name_character_set_3(lookahead)) ADVANCE(412);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(58);
      if (sym_name_character_set_3(lookahead)) ADVANCE(668);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(690);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(692);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(697);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(699);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '0') ADVANCE(701);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(706);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(704);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(708);
      if (lookahead == ':') ADVANCE(731);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(711);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(108);
      if (sym_name_character_set_3(lookahead)) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_importer);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_formule);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_avec);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_remplace);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_une_possibilitu00e9);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_texte);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_plafond);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_inversion_numu00e9rique);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_contexte);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_variations);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_duru00e9e);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_unitu00e9);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_meta_name);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(691);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(746);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(746);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(745);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(744);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(744);
      if (lookahead == ':') ADVANCE(748);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(747);
      if (lookahead == ':') ADVANCE(734);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(748);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(746);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(730);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(748);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(689);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(748);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(747);
      if (lookahead == ':') ADVANCE(736);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(746);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(748);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(748);
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
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 233) ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_si);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 233) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'q') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_nom);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 233) ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_url);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_dans);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_jour);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_mois);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_taux);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_alors);
      END_STATE();
    case 80:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == '\'') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 232) ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sinon);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_depuis);
      END_STATE();
    case 99:
      if (lookahead == 224) ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_jusqu_u00e0);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_montant);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_assiette);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tranches);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_sauf_dans);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_trimestre);
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_les_ru00e8gles);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 143:
      if (lookahead == 233) ADVANCE(149);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 224) ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_annu00e9ecivile);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_possibilitu00e9s);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ru00e9fu00e9rences_u00e0);
      END_STATE();
    case 157:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_multiplicateur);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_trimestrecivil);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_choix_obligatoire);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 109, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 26, .external_lex_state = 2},
  [5] = {.lex_state = 27, .external_lex_state = 2},
  [6] = {.lex_state = 27, .external_lex_state = 2},
  [7] = {.lex_state = 27, .external_lex_state = 2},
  [8] = {.lex_state = 27, .external_lex_state = 2},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 109, .external_lex_state = 4},
  [14] = {.lex_state = 109, .external_lex_state = 4},
  [15] = {.lex_state = 109, .external_lex_state = 4},
  [16] = {.lex_state = 109, .external_lex_state = 4},
  [17] = {.lex_state = 109, .external_lex_state = 5},
  [18] = {.lex_state = 109, .external_lex_state = 5},
  [19] = {.lex_state = 109, .external_lex_state = 5},
  [20] = {.lex_state = 109, .external_lex_state = 5},
  [21] = {.lex_state = 109, .external_lex_state = 5},
  [22] = {.lex_state = 2, .external_lex_state = 3},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 109, .external_lex_state = 5},
  [25] = {.lex_state = 109, .external_lex_state = 5},
  [26] = {.lex_state = 109, .external_lex_state = 5},
  [27] = {.lex_state = 109, .external_lex_state = 5},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 109, .external_lex_state = 5},
  [32] = {.lex_state = 109, .external_lex_state = 5},
  [33] = {.lex_state = 109, .external_lex_state = 5},
  [34] = {.lex_state = 109, .external_lex_state = 5},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 2, .external_lex_state = 6},
  [37] = {.lex_state = 2, .external_lex_state = 6},
  [38] = {.lex_state = 2, .external_lex_state = 6},
  [39] = {.lex_state = 2, .external_lex_state = 6},
  [40] = {.lex_state = 2, .external_lex_state = 6},
  [41] = {.lex_state = 2, .external_lex_state = 6},
  [42] = {.lex_state = 2, .external_lex_state = 6},
  [43] = {.lex_state = 30, .external_lex_state = 2},
  [44] = {.lex_state = 30, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 6},
  [46] = {.lex_state = 30, .external_lex_state = 2},
  [47] = {.lex_state = 30, .external_lex_state = 2},
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
  [72] = {.lex_state = 2, .external_lex_state = 6},
  [73] = {.lex_state = 30, .external_lex_state = 2},
  [74] = {.lex_state = 2, .external_lex_state = 6},
  [75] = {.lex_state = 2, .external_lex_state = 6},
  [76] = {.lex_state = 30, .external_lex_state = 2},
  [77] = {.lex_state = 30, .external_lex_state = 2},
  [78] = {.lex_state = 30, .external_lex_state = 2},
  [79] = {.lex_state = 30, .external_lex_state = 2},
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
  [132] = {.lex_state = 20, .external_lex_state = 2},
  [133] = {.lex_state = 22, .external_lex_state = 2},
  [134] = {.lex_state = 24, .external_lex_state = 2},
  [135] = {.lex_state = 22, .external_lex_state = 2},
  [136] = {.lex_state = 24, .external_lex_state = 2},
  [137] = {.lex_state = 24, .external_lex_state = 2},
  [138] = {.lex_state = 22, .external_lex_state = 2},
  [139] = {.lex_state = 22, .external_lex_state = 2},
  [140] = {.lex_state = 20, .external_lex_state = 7},
  [141] = {.lex_state = 20, .external_lex_state = 3},
  [142] = {.lex_state = 22, .external_lex_state = 2},
  [143] = {.lex_state = 22, .external_lex_state = 2},
  [144] = {.lex_state = 22, .external_lex_state = 2},
  [145] = {.lex_state = 22, .external_lex_state = 2},
  [146] = {.lex_state = 22, .external_lex_state = 2},
  [147] = {.lex_state = 22, .external_lex_state = 2},
  [148] = {.lex_state = 24, .external_lex_state = 2},
  [149] = {.lex_state = 22, .external_lex_state = 2},
  [150] = {.lex_state = 24, .external_lex_state = 3},
  [151] = {.lex_state = 22, .external_lex_state = 3},
  [152] = {.lex_state = 24, .external_lex_state = 3},
  [153] = {.lex_state = 22, .external_lex_state = 7},
  [154] = {.lex_state = 22, .external_lex_state = 7},
  [155] = {.lex_state = 22, .external_lex_state = 2},
  [156] = {.lex_state = 22, .external_lex_state = 7},
  [157] = {.lex_state = 22, .external_lex_state = 3},
  [158] = {.lex_state = 22, .external_lex_state = 2},
  [159] = {.lex_state = 22, .external_lex_state = 3},
  [160] = {.lex_state = 24, .external_lex_state = 3},
  [161] = {.lex_state = 22, .external_lex_state = 3},
  [162] = {.lex_state = 22, .external_lex_state = 7},
  [163] = {.lex_state = 22, .external_lex_state = 2},
  [164] = {.lex_state = 22, .external_lex_state = 7},
  [165] = {.lex_state = 22, .external_lex_state = 7},
  [166] = {.lex_state = 22, .external_lex_state = 3},
  [167] = {.lex_state = 22, .external_lex_state = 2},
  [168] = {.lex_state = 22, .external_lex_state = 3},
  [169] = {.lex_state = 22, .external_lex_state = 3},
  [170] = {.lex_state = 22, .external_lex_state = 3},
  [171] = {.lex_state = 22, .external_lex_state = 3},
  [172] = {.lex_state = 22, .external_lex_state = 7},
  [173] = {.lex_state = 22, .external_lex_state = 3},
  [174] = {.lex_state = 24, .external_lex_state = 3},
  [175] = {.lex_state = 24, .external_lex_state = 7},
  [176] = {.lex_state = 22, .external_lex_state = 7},
  [177] = {.lex_state = 22, .external_lex_state = 2},
  [178] = {.lex_state = 22, .external_lex_state = 3},
  [179] = {.lex_state = 22, .external_lex_state = 2},
  [180] = {.lex_state = 22, .external_lex_state = 7},
  [181] = {.lex_state = 22, .external_lex_state = 7},
  [182] = {.lex_state = 24, .external_lex_state = 7},
  [183] = {.lex_state = 22, .external_lex_state = 2},
  [184] = {.lex_state = 24, .external_lex_state = 7},
  [185] = {.lex_state = 22, .external_lex_state = 2},
  [186] = {.lex_state = 22, .external_lex_state = 2},
  [187] = {.lex_state = 22, .external_lex_state = 2},
  [188] = {.lex_state = 22, .external_lex_state = 7},
  [189] = {.lex_state = 109, .external_lex_state = 2},
  [190] = {.lex_state = 109, .external_lex_state = 2},
  [191] = {.lex_state = 109, .external_lex_state = 2},
  [192] = {.lex_state = 109, .external_lex_state = 2},
  [193] = {.lex_state = 109, .external_lex_state = 2},
  [194] = {.lex_state = 109, .external_lex_state = 2},
  [195] = {.lex_state = 22, .external_lex_state = 3},
  [196] = {.lex_state = 109, .external_lex_state = 2},
  [197] = {.lex_state = 109, .external_lex_state = 2},
  [198] = {.lex_state = 24, .external_lex_state = 7},
  [199] = {.lex_state = 109, .external_lex_state = 2},
  [200] = {.lex_state = 109, .external_lex_state = 2},
  [201] = {.lex_state = 109, .external_lex_state = 2},
  [202] = {.lex_state = 22, .external_lex_state = 7},
  [203] = {.lex_state = 109, .external_lex_state = 2},
  [204] = {.lex_state = 109, .external_lex_state = 2},
  [205] = {.lex_state = 22, .external_lex_state = 7},
  [206] = {.lex_state = 22, .external_lex_state = 2},
  [207] = {.lex_state = 22, .external_lex_state = 7},
  [208] = {.lex_state = 22, .external_lex_state = 7},
  [209] = {.lex_state = 109, .external_lex_state = 2},
  [210] = {.lex_state = 22, .external_lex_state = 7},
  [211] = {.lex_state = 22, .external_lex_state = 7},
  [212] = {.lex_state = 22, .external_lex_state = 3},
  [213] = {.lex_state = 22, .external_lex_state = 3},
  [214] = {.lex_state = 22, .external_lex_state = 3},
  [215] = {.lex_state = 22, .external_lex_state = 3},
  [216] = {.lex_state = 22, .external_lex_state = 2},
  [217] = {.lex_state = 109, .external_lex_state = 2},
  [218] = {.lex_state = 22, .external_lex_state = 2},
  [219] = {.lex_state = 109, .external_lex_state = 2},
  [220] = {.lex_state = 22, .external_lex_state = 7},
  [221] = {.lex_state = 22, .external_lex_state = 7},
  [222] = {.lex_state = 22, .external_lex_state = 2},
  [223] = {.lex_state = 22, .external_lex_state = 7},
  [224] = {.lex_state = 22, .external_lex_state = 3},
  [225] = {.lex_state = 22, .external_lex_state = 3},
  [226] = {.lex_state = 22, .external_lex_state = 3},
  [227] = {.lex_state = 22, .external_lex_state = 2},
  [228] = {.lex_state = 22, .external_lex_state = 3},
  [229] = {.lex_state = 22, .external_lex_state = 3},
  [230] = {.lex_state = 22, .external_lex_state = 7},
  [231] = {.lex_state = 109, .external_lex_state = 5},
  [232] = {.lex_state = 109, .external_lex_state = 5},
  [233] = {.lex_state = 742, .external_lex_state = 4},
  [234] = {.lex_state = 742, .external_lex_state = 4},
  [235] = {.lex_state = 109, .external_lex_state = 5},
  [236] = {.lex_state = 109, .external_lex_state = 5},
  [237] = {.lex_state = 109, .external_lex_state = 5},
  [238] = {.lex_state = 742, .external_lex_state = 4},
  [239] = {.lex_state = 109, .external_lex_state = 5},
  [240] = {.lex_state = 109, .external_lex_state = 5},
  [241] = {.lex_state = 109, .external_lex_state = 2},
  [242] = {.lex_state = 109, .external_lex_state = 2},
  [243] = {.lex_state = 109, .external_lex_state = 2},
  [244] = {.lex_state = 109, .external_lex_state = 2},
  [245] = {.lex_state = 109, .external_lex_state = 3},
  [246] = {.lex_state = 109, .external_lex_state = 7},
  [247] = {.lex_state = 109, .external_lex_state = 2},
  [248] = {.lex_state = 109, .external_lex_state = 3},
  [249] = {.lex_state = 109, .external_lex_state = 2},
  [250] = {.lex_state = 109, .external_lex_state = 2},
  [251] = {.lex_state = 109, .external_lex_state = 2},
  [252] = {.lex_state = 109, .external_lex_state = 2},
  [253] = {.lex_state = 109, .external_lex_state = 2},
  [254] = {.lex_state = 109, .external_lex_state = 2},
  [255] = {.lex_state = 109, .external_lex_state = 2},
  [256] = {.lex_state = 109, .external_lex_state = 2},
  [257] = {.lex_state = 109, .external_lex_state = 2},
  [258] = {.lex_state = 109, .external_lex_state = 2},
  [259] = {.lex_state = 109, .external_lex_state = 8},
  [260] = {.lex_state = 109, .external_lex_state = 2},
  [261] = {.lex_state = 109, .external_lex_state = 3},
  [262] = {.lex_state = 109, .external_lex_state = 2},
  [263] = {.lex_state = 109, .external_lex_state = 7},
  [264] = {.lex_state = 109, .external_lex_state = 3},
  [265] = {.lex_state = 109, .external_lex_state = 7},
  [266] = {.lex_state = 109, .external_lex_state = 3},
  [267] = {.lex_state = 109, .external_lex_state = 2},
  [268] = {.lex_state = 109, .external_lex_state = 2},
  [269] = {.lex_state = 109, .external_lex_state = 7},
  [270] = {.lex_state = 109, .external_lex_state = 2},
  [271] = {.lex_state = 109, .external_lex_state = 7},
  [272] = {.lex_state = 109, .external_lex_state = 3},
  [273] = {.lex_state = 109, .external_lex_state = 7},
  [274] = {.lex_state = 109, .external_lex_state = 2},
  [275] = {.lex_state = 109, .external_lex_state = 7},
  [276] = {.lex_state = 109, .external_lex_state = 2},
  [277] = {.lex_state = 109, .external_lex_state = 7},
  [278] = {.lex_state = 109, .external_lex_state = 3},
  [279] = {.lex_state = 109, .external_lex_state = 2},
  [280] = {.lex_state = 109, .external_lex_state = 2},
  [281] = {.lex_state = 109, .external_lex_state = 2},
  [282] = {.lex_state = 109, .external_lex_state = 3},
  [283] = {.lex_state = 109, .external_lex_state = 7},
  [284] = {.lex_state = 109, .external_lex_state = 2},
  [285] = {.lex_state = 109, .external_lex_state = 3},
  [286] = {.lex_state = 109, .external_lex_state = 2},
  [287] = {.lex_state = 109, .external_lex_state = 3},
  [288] = {.lex_state = 109, .external_lex_state = 2},
  [289] = {.lex_state = 109, .external_lex_state = 2},
  [290] = {.lex_state = 109, .external_lex_state = 2},
  [291] = {.lex_state = 109, .external_lex_state = 2},
  [292] = {.lex_state = 109, .external_lex_state = 2},
  [293] = {.lex_state = 109, .external_lex_state = 2},
  [294] = {.lex_state = 109, .external_lex_state = 2},
  [295] = {.lex_state = 109, .external_lex_state = 2},
  [296] = {.lex_state = 109, .external_lex_state = 3},
  [297] = {.lex_state = 109, .external_lex_state = 2},
  [298] = {.lex_state = 109, .external_lex_state = 4},
  [299] = {.lex_state = 109, .external_lex_state = 4},
  [300] = {.lex_state = 109, .external_lex_state = 3},
  [301] = {.lex_state = 22, .external_lex_state = 2},
  [302] = {.lex_state = 22, .external_lex_state = 2},
  [303] = {.lex_state = 109, .external_lex_state = 2},
  [304] = {.lex_state = 20, .external_lex_state = 5},
  [305] = {.lex_state = 109, .external_lex_state = 4},
  [306] = {.lex_state = 109, .external_lex_state = 4},
  [307] = {.lex_state = 109, .external_lex_state = 4},
  [308] = {.lex_state = 109, .external_lex_state = 2},
  [309] = {.lex_state = 109, .external_lex_state = 2},
  [310] = {.lex_state = 22, .external_lex_state = 2},
  [311] = {.lex_state = 109, .external_lex_state = 4},
  [312] = {.lex_state = 22, .external_lex_state = 2},
  [313] = {.lex_state = 22, .external_lex_state = 2},
  [314] = {.lex_state = 109, .external_lex_state = 3},
  [315] = {.lex_state = 109, .external_lex_state = 3},
  [316] = {.lex_state = 109, .external_lex_state = 3},
  [317] = {.lex_state = 109, .external_lex_state = 2},
  [318] = {.lex_state = 109, .external_lex_state = 4},
  [319] = {.lex_state = 109, .external_lex_state = 3},
  [320] = {.lex_state = 109, .external_lex_state = 2},
  [321] = {.lex_state = 20, .external_lex_state = 2},
  [322] = {.lex_state = 742, .external_lex_state = 5},
  [323] = {.lex_state = 109, .external_lex_state = 2},
  [324] = {.lex_state = 22, .external_lex_state = 2},
  [325] = {.lex_state = 22, .external_lex_state = 2},
  [326] = {.lex_state = 109, .external_lex_state = 8},
  [327] = {.lex_state = 22, .external_lex_state = 2},
  [328] = {.lex_state = 109, .external_lex_state = 8},
  [329] = {.lex_state = 22, .external_lex_state = 2},
  [330] = {.lex_state = 109, .external_lex_state = 2},
  [331] = {.lex_state = 109, .external_lex_state = 2},
  [332] = {.lex_state = 738, .external_lex_state = 2},
  [333] = {.lex_state = 109, .external_lex_state = 2},
  [334] = {.lex_state = 109, .external_lex_state = 7},
  [335] = {.lex_state = 109, .external_lex_state = 7},
  [336] = {.lex_state = 109, .external_lex_state = 2},
  [337] = {.lex_state = 109, .external_lex_state = 7},
  [338] = {.lex_state = 109, .external_lex_state = 2},
  [339] = {.lex_state = 109, .external_lex_state = 3},
  [340] = {.lex_state = 109, .external_lex_state = 7},
  [341] = {.lex_state = 24, .external_lex_state = 3},
  [342] = {.lex_state = 109, .external_lex_state = 5},
  [343] = {.lex_state = 109, .external_lex_state = 3},
  [344] = {.lex_state = 109, .external_lex_state = 6},
  [345] = {.lex_state = 109, .external_lex_state = 3},
  [346] = {.lex_state = 109, .external_lex_state = 2},
  [347] = {.lex_state = 109, .external_lex_state = 3},
  [348] = {.lex_state = 109, .external_lex_state = 2},
  [349] = {.lex_state = 109, .external_lex_state = 2},
  [350] = {.lex_state = 109, .external_lex_state = 2},
  [351] = {.lex_state = 109, .external_lex_state = 2},
  [352] = {.lex_state = 33, .external_lex_state = 2},
  [353] = {.lex_state = 109, .external_lex_state = 2},
  [354] = {.lex_state = 109, .external_lex_state = 2},
  [355] = {.lex_state = 109, .external_lex_state = 3},
  [356] = {.lex_state = 109, .external_lex_state = 3},
  [357] = {.lex_state = 33, .external_lex_state = 2},
  [358] = {.lex_state = 33, .external_lex_state = 2},
  [359] = {.lex_state = 33, .external_lex_state = 2},
  [360] = {.lex_state = 109, .external_lex_state = 2},
  [361] = {.lex_state = 109, .external_lex_state = 3},
  [362] = {.lex_state = 22, .external_lex_state = 2},
  [363] = {.lex_state = 33, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 4},
  [365] = {.lex_state = 109, .external_lex_state = 2},
  [366] = {.lex_state = 33, .external_lex_state = 2},
  [367] = {.lex_state = 740, .external_lex_state = 2},
  [368] = {.lex_state = 109, .external_lex_state = 2},
  [369] = {.lex_state = 109, .external_lex_state = 3},
  [370] = {.lex_state = 24, .external_lex_state = 3},
  [371] = {.lex_state = 109, .external_lex_state = 3},
  [372] = {.lex_state = 24, .external_lex_state = 3},
  [373] = {.lex_state = 109, .external_lex_state = 3},
  [374] = {.lex_state = 109, .external_lex_state = 3},
  [375] = {.lex_state = 33, .external_lex_state = 2},
  [376] = {.lex_state = 109, .external_lex_state = 3},
  [377] = {.lex_state = 109, .external_lex_state = 3},
  [378] = {.lex_state = 109, .external_lex_state = 3},
  [379] = {.lex_state = 109, .external_lex_state = 7},
  [380] = {.lex_state = 109, .external_lex_state = 7},
  [381] = {.lex_state = 109, .external_lex_state = 7},
  [382] = {.lex_state = 24, .external_lex_state = 3},
  [383] = {.lex_state = 109, .external_lex_state = 7},
  [384] = {.lex_state = 33, .external_lex_state = 2},
  [385] = {.lex_state = 109, .external_lex_state = 7},
  [386] = {.lex_state = 109, .external_lex_state = 7},
  [387] = {.lex_state = 109, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 743, .external_lex_state = 3},
  [391] = {.lex_state = 6, .external_lex_state = 3},
  [392] = {.lex_state = 109, .external_lex_state = 2},
  [393] = {.lex_state = 109, .external_lex_state = 2},
  [394] = {.lex_state = 33, .external_lex_state = 2},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 22, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 109, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 743, .external_lex_state = 3},
  [402] = {.lex_state = 24, .external_lex_state = 3},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 6, .external_lex_state = 3},
  [405] = {.lex_state = 743, .external_lex_state = 3},
  [406] = {.lex_state = 740, .external_lex_state = 2},
  [407] = {.lex_state = 109, .external_lex_state = 3},
  [408] = {.lex_state = 109, .external_lex_state = 3},
  [409] = {.lex_state = 109, .external_lex_state = 3},
  [410] = {.lex_state = 0, .external_lex_state = 6},
  [411] = {.lex_state = 109, .external_lex_state = 3},
  [412] = {.lex_state = 109, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 6},
  [414] = {.lex_state = 109, .external_lex_state = 2},
  [415] = {.lex_state = 0, .external_lex_state = 6},
  [416] = {.lex_state = 0, .external_lex_state = 6},
  [417] = {.lex_state = 33, .external_lex_state = 2},
  [418] = {.lex_state = 109, .external_lex_state = 3},
  [419] = {.lex_state = 0, .external_lex_state = 4},
  [420] = {.lex_state = 22, .external_lex_state = 2},
  [421] = {.lex_state = 109, .external_lex_state = 3},
  [422] = {.lex_state = 0, .external_lex_state = 6},
  [423] = {.lex_state = 109, .external_lex_state = 3},
  [424] = {.lex_state = 109, .external_lex_state = 3},
  [425] = {.lex_state = 740, .external_lex_state = 2},
  [426] = {.lex_state = 740, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 0, .external_lex_state = 6},
  [429] = {.lex_state = 109, .external_lex_state = 3},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 109, .external_lex_state = 3},
  [432] = {.lex_state = 109, .external_lex_state = 2},
  [433] = {.lex_state = 109, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 6},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 24, .external_lex_state = 3},
  [438] = {.lex_state = 109, .external_lex_state = 3},
  [439] = {.lex_state = 109, .external_lex_state = 3},
  [440] = {.lex_state = 0, .external_lex_state = 8},
  [441] = {.lex_state = 0, .external_lex_state = 8},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 0, .external_lex_state = 6},
  [444] = {.lex_state = 109, .external_lex_state = 2},
  [445] = {.lex_state = 109, .external_lex_state = 2},
  [446] = {.lex_state = 31, .external_lex_state = 3},
  [447] = {.lex_state = 31, .external_lex_state = 3},
  [448] = {.lex_state = 0, .external_lex_state = 4},
  [449] = {.lex_state = 109, .external_lex_state = 3},
  [450] = {.lex_state = 109, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 4},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 0, .external_lex_state = 4},
  [454] = {.lex_state = 109, .external_lex_state = 3},
  [455] = {.lex_state = 33, .external_lex_state = 2},
  [456] = {.lex_state = 109, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 4},
  [458] = {.lex_state = 0, .external_lex_state = 8},
  [459] = {.lex_state = 0, .external_lex_state = 8},
  [460] = {.lex_state = 109, .external_lex_state = 3},
  [461] = {.lex_state = 33, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 8},
  [463] = {.lex_state = 0, .external_lex_state = 8},
  [464] = {.lex_state = 109, .external_lex_state = 2},
  [465] = {.lex_state = 743, .external_lex_state = 2},
  [466] = {.lex_state = 31, .external_lex_state = 3},
  [467] = {.lex_state = 31, .external_lex_state = 3},
  [468] = {.lex_state = 31, .external_lex_state = 3},
  [469] = {.lex_state = 31, .external_lex_state = 3},
  [470] = {.lex_state = 0, .external_lex_state = 8},
  [471] = {.lex_state = 0, .external_lex_state = 3},
  [472] = {.lex_state = 109, .external_lex_state = 7},
  [473] = {.lex_state = 0, .external_lex_state = 3},
  [474] = {.lex_state = 0, .external_lex_state = 8},
  [475] = {.lex_state = 31, .external_lex_state = 3},
  [476] = {.lex_state = 31, .external_lex_state = 3},
  [477] = {.lex_state = 33, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 8},
  [479] = {.lex_state = 109, .external_lex_state = 3},
  [480] = {.lex_state = 109, .external_lex_state = 3},
  [481] = {.lex_state = 109, .external_lex_state = 3},
  [482] = {.lex_state = 0, .external_lex_state = 6},
  [483] = {.lex_state = 109, .external_lex_state = 3},
  [484] = {.lex_state = 109, .external_lex_state = 3},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 0, .external_lex_state = 8},
  [487] = {.lex_state = 743, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 109, .external_lex_state = 3},
  [491] = {.lex_state = 109, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 4},
  [493] = {.lex_state = 33, .external_lex_state = 2},
  [494] = {.lex_state = 743, .external_lex_state = 3},
  [495] = {.lex_state = 6, .external_lex_state = 3},
  [496] = {.lex_state = 0, .external_lex_state = 3},
  [497] = {.lex_state = 109, .external_lex_state = 2},
  [498] = {.lex_state = 109, .external_lex_state = 3},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 109, .external_lex_state = 3},
  [501] = {.lex_state = 0, .external_lex_state = 8},
  [502] = {.lex_state = 31, .external_lex_state = 3},
  [503] = {.lex_state = 109, .external_lex_state = 3},
  [504] = {.lex_state = 33, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 8},
  [506] = {.lex_state = 109, .external_lex_state = 3},
  [507] = {.lex_state = 0, .external_lex_state = 3},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 3},
  [511] = {.lex_state = 0, .external_lex_state = 3},
  [512] = {.lex_state = 0, .external_lex_state = 3},
  [513] = {.lex_state = 0, .external_lex_state = 3},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 0, .external_lex_state = 3},
  [516] = {.lex_state = 0, .external_lex_state = 2},
  [517] = {.lex_state = 743, .external_lex_state = 2},
  [518] = {.lex_state = 743, .external_lex_state = 2},
  [519] = {.lex_state = 0, .external_lex_state = 3},
  [520] = {.lex_state = 0, .external_lex_state = 3},
  [521] = {.lex_state = 0, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 3},
  [523] = {.lex_state = 0, .external_lex_state = 3},
  [524] = {.lex_state = 0, .external_lex_state = 3},
  [525] = {.lex_state = 0, .external_lex_state = 2},
  [526] = {.lex_state = 0, .external_lex_state = 3},
  [527] = {.lex_state = 0, .external_lex_state = 3},
  [528] = {.lex_state = 0, .external_lex_state = 7},
  [529] = {.lex_state = 0, .external_lex_state = 3},
  [530] = {.lex_state = 31, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 3},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 3},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 3},
  [540] = {.lex_state = 0, .external_lex_state = 3},
  [541] = {.lex_state = 0, .external_lex_state = 3},
  [542] = {.lex_state = 0, .external_lex_state = 3},
  [543] = {.lex_state = 0, .external_lex_state = 3},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 3},
  [546] = {.lex_state = 0, .external_lex_state = 2},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 3},
  [550] = {.lex_state = 0, .external_lex_state = 2},
  [551] = {.lex_state = 109, .external_lex_state = 2},
  [552] = {.lex_state = 0, .external_lex_state = 7},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 0, .external_lex_state = 2},
  [555] = {.lex_state = 0, .external_lex_state = 3},
  [556] = {.lex_state = 0, .external_lex_state = 3},
  [557] = {.lex_state = 0, .external_lex_state = 3},
  [558] = {.lex_state = 0, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 3},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 3},
  [563] = {.lex_state = 0, .external_lex_state = 7},
  [564] = {.lex_state = 0, .external_lex_state = 2},
  [565] = {.lex_state = 743, .external_lex_state = 2},
  [566] = {.lex_state = 743, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 2},
  [568] = {.lex_state = 0, .external_lex_state = 3},
  [569] = {.lex_state = 0, .external_lex_state = 7},
  [570] = {.lex_state = 0, .external_lex_state = 3},
  [571] = {.lex_state = 109, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 3},
  [573] = {.lex_state = 0, .external_lex_state = 3},
  [574] = {.lex_state = 0, .external_lex_state = 3},
  [575] = {.lex_state = 0, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 7},
  [577] = {.lex_state = 0, .external_lex_state = 7},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 3},
  [580] = {.lex_state = 0, .external_lex_state = 3},
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 0, .external_lex_state = 7},
  [583] = {.lex_state = 0, .external_lex_state = 7},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 3},
  [586] = {.lex_state = 0, .external_lex_state = 7},
  [587] = {.lex_state = 0, .external_lex_state = 3},
  [588] = {.lex_state = 0, .external_lex_state = 3},
  [589] = {.lex_state = 0, .external_lex_state = 3},
  [590] = {.lex_state = 0, .external_lex_state = 3},
  [591] = {.lex_state = 0, .external_lex_state = 3},
  [592] = {.lex_state = 0, .external_lex_state = 3},
  [593] = {.lex_state = 0, .external_lex_state = 3},
  [594] = {.lex_state = 0, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 7},
  [596] = {.lex_state = 0, .external_lex_state = 2},
  [597] = {.lex_state = 0, .external_lex_state = 2},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 0, .external_lex_state = 3},
  [600] = {.lex_state = 0, .external_lex_state = 3},
  [601] = {.lex_state = 109, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 3},
  [603] = {.lex_state = 0, .external_lex_state = 7},
  [604] = {.lex_state = 0, .external_lex_state = 3},
  [605] = {.lex_state = 0, .external_lex_state = 3},
  [606] = {.lex_state = 0, .external_lex_state = 3},
  [607] = {.lex_state = 0, .external_lex_state = 7},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 109, .external_lex_state = 2},
  [610] = {.lex_state = 109, .external_lex_state = 2},
  [611] = {.lex_state = 0, .external_lex_state = 3},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 0, .external_lex_state = 3},
  [615] = {.lex_state = 0, .external_lex_state = 3},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 3},
  [620] = {.lex_state = 0, .external_lex_state = 7},
  [621] = {.lex_state = 0, .external_lex_state = 3},
  [622] = {.lex_state = 743, .external_lex_state = 2},
  [623] = {.lex_state = 0, .external_lex_state = 2},
  [624] = {.lex_state = 31, .external_lex_state = 2},
  [625] = {.lex_state = 0, .external_lex_state = 7},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 0, .external_lex_state = 2},
  [629] = {.lex_state = 109, .external_lex_state = 2},
  [630] = {.lex_state = 0, .external_lex_state = 7},
  [631] = {.lex_state = 0, .external_lex_state = 2},
  [632] = {.lex_state = 743, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 7},
  [634] = {.lex_state = 0, .external_lex_state = 9},
  [635] = {.lex_state = 0, .external_lex_state = 5},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 7},
  [638] = {.lex_state = 0, .external_lex_state = 3},
  [639] = {.lex_state = 0, .external_lex_state = 5},
  [640] = {.lex_state = 0, .external_lex_state = 2},
  [641] = {.lex_state = 743, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 5},
  [644] = {.lex_state = 0, .external_lex_state = 7},
  [645] = {.lex_state = 0, .external_lex_state = 3},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 3},
  [649] = {.lex_state = 109, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 5},
  [651] = {.lex_state = 743, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 3},
  [653] = {.lex_state = 0, .external_lex_state = 2},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 0, .external_lex_state = 2},
  [656] = {.lex_state = 0, .external_lex_state = 2},
  [657] = {.lex_state = 0, .external_lex_state = 5},
  [658] = {.lex_state = 0, .external_lex_state = 3},
  [659] = {.lex_state = 0, .external_lex_state = 3},
  [660] = {.lex_state = 0, .external_lex_state = 2},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 2},
  [666] = {.lex_state = 0, .external_lex_state = 2},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 2},
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
  [683] = {.lex_state = 0, .external_lex_state = 3},
  [684] = {.lex_state = 0, .external_lex_state = 5},
  [685] = {.lex_state = 109, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 0, .external_lex_state = 2},
  [688] = {.lex_state = 0, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 2},
  [690] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_m_unary_name] = ACTIONS(1),
    [sym_m_array_name] = ACTIONS(1),
    [anon_sym_jour] = ACTIONS(1),
    [anon_sym_mois] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(1),
    [anon_sym_annu00e9ecivile] = ACTIONS(1),
    [anon_sym_trimestre] = ACTIONS(1),
    [anon_sym_trimestrecivil] = ACTIONS(1),
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
    [sym_source_file] = STATE(688),
    [sym_import] = STATE(295),
    [sym_rule] = STATE(303),
    [sym_dotted_name] = STATE(687),
    [aux_sym_source_file_repeat1] = STATE(303),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_importer] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
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
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_formule,
    ACTIONS(39), 1,
      sym_avec,
    ACTIONS(41), 1,
      sym_remplace,
    ACTIONS(43), 1,
      sym_une_possibilitu00e9,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(57), 1,
      sym_meta_name,
    ACTIONS(59), 1,
      sym__key,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      sym_string,
      sym_date,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
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
    STATE(126), 10,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      sym_formule,
    ACTIONS(39), 1,
      sym_avec,
    ACTIONS(41), 1,
      sym_remplace,
    ACTIONS(43), 1,
      sym_une_possibilitu00e9,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(57), 1,
      sym_meta_name,
    ACTIONS(59), 1,
      sym__key,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(65), 2,
      sym_string,
      sym_date,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
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
    STATE(126), 10,
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
  [244] = 28,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(43), 1,
      sym_une_possibilitu00e9,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(77), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    STATE(559), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(23), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [345] = 26,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(28), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [440] = 26,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym_string,
    ACTIONS(93), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(29), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(248), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [535] = 26,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym_string,
    ACTIONS(101), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(22), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [630] = 26,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(75), 1,
      sym_string,
    ACTIONS(77), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(23), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [725] = 26,
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
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_string,
    ACTIONS(109), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
    STATE(126), 10,
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
  [820] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_m_unary_name,
    ACTIONS(114), 1,
      sym_m_array_name,
    ACTIONS(117), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(120), 1,
      sym_tag,
    ACTIONS(123), 1,
      sym_formule,
    ACTIONS(126), 1,
      sym_avec,
    ACTIONS(129), 1,
      sym_remplace,
    ACTIONS(132), 1,
      sym_une_possibilitu00e9,
    ACTIONS(135), 1,
      sym_texte,
    ACTIONS(138), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(141), 1,
      sym_contexte,
    ACTIONS(144), 1,
      sym_variations,
    ACTIONS(147), 1,
      sym_duru00e9e,
    ACTIONS(150), 1,
      sym_unitu00e9,
    ACTIONS(153), 1,
      sym_meta_name,
    ACTIONS(156), 1,
      sym__key,
    ACTIONS(159), 1,
      sym__dedent,
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
    STATE(126), 10,
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
  [899] = 20,
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
    ACTIONS(37), 1,
      sym_formule,
    ACTIONS(39), 1,
      sym_avec,
    ACTIONS(41), 1,
      sym_remplace,
    ACTIONS(43), 1,
      sym_une_possibilitu00e9,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(57), 1,
      sym_meta_name,
    ACTIONS(59), 1,
      sym__key,
    ACTIONS(161), 1,
      sym__dedent,
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
    STATE(126), 10,
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
  [978] = 20,
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
    ACTIONS(37), 1,
      sym_formule,
    ACTIONS(39), 1,
      sym_avec,
    ACTIONS(41), 1,
      sym_remplace,
    ACTIONS(43), 1,
      sym_une_possibilitu00e9,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(57), 1,
      sym_meta_name,
    ACTIONS(59), 1,
      sym__key,
    ACTIONS(163), 1,
      sym__dedent,
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
    STATE(126), 10,
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
  [1057] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(177), 1,
      sym_string,
    ACTIONS(179), 1,
      sym_date,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(185), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(412), 1,
      sym_rule_body,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1118] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      sym_string,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    ACTIONS(197), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(351), 1,
      sym_rule_body,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1179] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      sym_string,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    ACTIONS(197), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(365), 1,
      sym_rule_body,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1240] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(177), 1,
      sym_string,
    ACTIONS(179), 1,
      sym_date,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(183), 1,
      sym__indent,
    ACTIONS(185), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(431), 1,
      sym_rule_body,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1301] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_date,
    ACTIONS(207), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(601), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1359] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(619), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1417] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(483), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1475] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(128), 1,
      sym__valeur,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1533] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(549), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1591] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [1641] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [1691] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(592), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1749] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_date,
    ACTIONS(207), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(349), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1807] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_date,
    ACTIONS(207), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(624), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1865] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_date,
    ACTIONS(207), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(551), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [1923] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(233), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [1973] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(235), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [2023] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_m_unary_name,
    ACTIONS(240), 1,
      sym_m_array_name,
    ACTIONS(243), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(246), 1,
      sym_texte,
    ACTIONS(249), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(252), 1,
      sym_contexte,
    ACTIONS(255), 1,
      sym_variations,
    ACTIONS(258), 1,
      sym_duru00e9e,
    ACTIONS(261), 1,
      sym_unitu00e9,
    ACTIONS(264), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [2073] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      sym_string,
    ACTIONS(215), 1,
      sym_date,
    ACTIONS(266), 1,
      sym__indent,
    STATE(129), 1,
      sym__valeur,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2131] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
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
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(502), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2189] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_date,
    ACTIONS(207), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(491), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2247] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(274), 1,
      sym_date,
    ACTIONS(276), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    STATE(502), 1,
      sym__valeur,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [2305] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_m_unary_name,
    ACTIONS(21), 1,
      sym_m_array_name,
    ACTIONS(23), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(45), 1,
      sym_texte,
    ACTIONS(47), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(49), 1,
      sym_contexte,
    ACTIONS(51), 1,
      sym_variations,
    ACTIONS(53), 1,
      sym_duru00e9e,
    ACTIONS(55), 1,
      sym_unitu00e9,
    ACTIONS(278), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(126), 10,
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
  [2355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__key,
    ACTIONS(284), 1,
      sym__array_prefix,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(280), 17,
      sym__dedent,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_sauf_dans,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_meta_name,
  [2387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__key,
    ACTIONS(291), 1,
      sym__array_prefix,
    STATE(37), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(287), 16,
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
      sym_meta_name,
  [2418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__key,
    ACTIONS(298), 1,
      sym__array_prefix,
    STATE(38), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(294), 16,
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
      sym_meta_name,
  [2449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__key,
    ACTIONS(305), 1,
      sym__array_prefix,
    STATE(38), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(301), 16,
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
      sym_meta_name,
  [2480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__key,
    ACTIONS(311), 1,
      sym__array_prefix,
    STATE(37), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(307), 16,
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
      sym_meta_name,
  [2511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__key,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(313), 16,
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
      sym_meta_name,
  [2542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__key,
    ACTIONS(319), 18,
      sym__dedent,
      sym__array_prefix,
      sym_m_unary_name,
      sym_m_array_name,
      sym_m_baru00e8me_like_name,
      sym_tag,
      sym_formule,
      sym_avec,
      sym_remplace,
      sym_sauf_dans,
      sym_une_possibilitu00e9,
      sym_texte,
      sym_inversion_numu00e9rique,
      sym_contexte,
      sym_variations,
      sym_duru00e9e,
      sym_unitu00e9,
      sym_meta_name,
  [2569] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(329), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(244), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2615] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(333), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__key,
    ACTIONS(335), 17,
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
      sym_meta_name,
  [2687] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(339), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(260), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2733] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(341), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2779] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(343), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2825] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(345), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(241), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2871] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(347), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(293), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2917] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(349), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(292), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [2963] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(351), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3009] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(353), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3055] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(355), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3101] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(357), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(291), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3147] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(359), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3193] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(361), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(289), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3239] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    STATE(308), 1,
      sym__expression,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(363), 2,
      sym_string,
      sym_date,
    STATE(276), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(206), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3287] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(365), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3333] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(367), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(243), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(369), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(250), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3425] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(371), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3471] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(373), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(280), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3517] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(375), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3563] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(377), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3609] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    STATE(308), 1,
      sym__expression,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(363), 2,
      sym_string,
      sym_date,
    STATE(274), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [3657] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(379), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(249), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3703] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(381), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3749] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(383), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3795] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(385), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(242), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3841] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(387), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(256), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__key,
    ACTIONS(389), 17,
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
      sym_meta_name,
  [3913] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(393), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(254), 3,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__key,
    ACTIONS(395), 17,
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
      sym_meta_name,
  [3985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__key,
    ACTIONS(399), 17,
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
      sym_meta_name,
  [4011] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(181), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(210), 1,
      sym_reference,
    STATE(211), 1,
      sym_number,
    ACTIONS(171), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(403), 2,
      sym_string,
      sym_date,
    STATE(207), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [4055] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    STATE(215), 1,
      sym_dotted_name,
    STATE(228), 1,
      sym_number,
    STATE(229), 1,
      sym_reference,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(405), 2,
      sym_string,
      sym_date,
    STATE(213), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [4099] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(222), 1,
      sym_reference,
    STATE(227), 1,
      sym_number,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(343), 2,
      sym_string,
      sym_date,
    STATE(177), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
  [4143] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(331), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(183), 1,
      sym_reference,
    STATE(185), 1,
      sym_number,
    STATE(209), 1,
      sym_boolean,
    STATE(308), 1,
      sym__expression,
    ACTIONS(323), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(363), 2,
      sym_string,
      sym_date,
    STATE(267), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(216), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__key,
    ACTIONS(407), 16,
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
      sym_meta_name,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__key,
    ACTIONS(411), 16,
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
      sym_meta_name,
  [4241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__key,
    ACTIONS(415), 16,
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
      sym_meta_name,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__key,
    ACTIONS(419), 16,
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
      sym_meta_name,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__key,
    ACTIONS(423), 16,
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
      sym_meta_name,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__key,
    ACTIONS(427), 16,
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
      sym_meta_name,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__key,
    ACTIONS(431), 16,
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
      sym_meta_name,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__key,
    ACTIONS(435), 16,
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
      sym_meta_name,
  [4391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__key,
    ACTIONS(439), 16,
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
      sym_meta_name,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__key,
    ACTIONS(443), 16,
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
      sym_meta_name,
  [4441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__key,
    ACTIONS(447), 16,
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
      sym_meta_name,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__key,
    ACTIONS(451), 16,
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
      sym_meta_name,
  [4491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__key,
    ACTIONS(455), 16,
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
      sym_meta_name,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__key,
    ACTIONS(459), 16,
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
      sym_meta_name,
  [4541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__key,
    ACTIONS(463), 16,
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
      sym_meta_name,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__key,
    ACTIONS(467), 16,
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
      sym_meta_name,
  [4591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__key,
    ACTIONS(471), 16,
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
      sym_meta_name,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__key,
    ACTIONS(475), 16,
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
      sym_meta_name,
  [4641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__key,
    ACTIONS(479), 16,
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
      sym_meta_name,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__key,
    ACTIONS(483), 16,
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
      sym_meta_name,
  [4691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__key,
    ACTIONS(487), 16,
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
      sym_meta_name,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__key,
    ACTIONS(491), 16,
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
      sym_meta_name,
  [4741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__key,
    ACTIONS(495), 16,
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
      sym_meta_name,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__key,
    ACTIONS(499), 16,
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
      sym_meta_name,
  [4791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__key,
    ACTIONS(503), 16,
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
      sym_meta_name,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__key,
    ACTIONS(507), 16,
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
      sym_meta_name,
  [4841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__key,
    ACTIONS(511), 16,
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
      sym_meta_name,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__key,
    ACTIONS(515), 16,
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
      sym_meta_name,
  [4891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__key,
    ACTIONS(519), 16,
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
      sym_meta_name,
  [4916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__key,
    ACTIONS(523), 16,
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
      sym_meta_name,
  [4941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__key,
    ACTIONS(527), 16,
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
      sym_meta_name,
  [4966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__key,
    ACTIONS(531), 16,
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
      sym_meta_name,
  [4991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__key,
    ACTIONS(535), 16,
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
      sym_meta_name,
  [5016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__key,
    ACTIONS(539), 16,
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
      sym_meta_name,
  [5041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__key,
    ACTIONS(543), 16,
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
      sym_meta_name,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__key,
    ACTIONS(547), 16,
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
      sym_meta_name,
  [5091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__key,
    ACTIONS(551), 16,
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
      sym_meta_name,
  [5116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__key,
    ACTIONS(555), 16,
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
      sym_meta_name,
  [5141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__key,
    ACTIONS(559), 16,
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
      sym_meta_name,
  [5166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__key,
    ACTIONS(563), 16,
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
      sym_meta_name,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__key,
    ACTIONS(567), 16,
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
      sym_meta_name,
  [5216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__key,
    ACTIONS(571), 16,
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
      sym_meta_name,
  [5241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__key,
    ACTIONS(575), 16,
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
      sym_meta_name,
  [5266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__key,
    ACTIONS(579), 16,
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
      sym_meta_name,
  [5291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__key,
    ACTIONS(583), 16,
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
      sym_meta_name,
  [5316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__key,
    ACTIONS(587), 16,
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
      sym_meta_name,
  [5341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__key,
    ACTIONS(591), 16,
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
      sym_meta_name,
  [5366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__key,
    ACTIONS(595), 16,
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
      sym_meta_name,
  [5391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__key,
    ACTIONS(599), 16,
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
      sym_meta_name,
  [5416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__key,
    ACTIONS(603), 16,
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
      sym_meta_name,
  [5441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__key,
    ACTIONS(607), 16,
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
      sym_meta_name,
  [5466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__key,
    ACTIONS(583), 16,
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
      sym_meta_name,
  [5491] = 7,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SPACE,
    ACTIONS(617), 1,
      aux_sym_unit_token1,
    STATE(138), 1,
      sym_unit,
    STATE(146), 1,
      sym__units,
    STATE(187), 1,
      sym_units,
    ACTIONS(611), 11,
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
  [5523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(623), 1,
      anon_sym_DOT2,
    STATE(133), 1,
      aux_sym__units_repeat1,
    ACTIONS(619), 11,
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
  [5549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(626), 12,
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
  [5573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH,
    ACTIONS(635), 1,
      anon_sym_DOT2,
    STATE(133), 1,
      aux_sym__units_repeat1,
    ACTIONS(631), 11,
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
  [5599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(637), 12,
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
  [5623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(641), 12,
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
  [5647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_DOT2,
    ACTIONS(645), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      aux_sym__units_repeat1,
    ACTIONS(643), 11,
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
  [5673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(651), 1,
      sym_exposant,
    ACTIONS(647), 12,
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
  [5697] = 8,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SPACE,
    ACTIONS(655), 1,
      aux_sym_unit_token1,
    ACTIONS(657), 1,
      sym__newline,
    STATE(154), 1,
      sym_unit,
    STATE(176), 1,
      sym__units,
    STATE(221), 1,
      sym_units,
    ACTIONS(611), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5729] = 8,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__dedent,
    ACTIONS(659), 1,
      anon_sym_SPACE,
    ACTIONS(661), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(173), 1,
      sym__units,
    STATE(214), 1,
      sym_units,
    ACTIONS(611), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      aux_sym_units_repeat1,
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
  [5784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(145), 1,
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
  [5807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      aux_sym_units_repeat1,
    ACTIONS(669), 11,
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
  [5830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SLASH,
    STATE(145), 1,
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
  [5853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(144), 1,
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
  [5876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(619), 12,
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
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 13,
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
  [5916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SLASH,
    ACTIONS(678), 12,
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
  [5937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_DOT,
    STATE(152), 1,
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
  [5959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SLASH,
    ACTIONS(684), 1,
      anon_sym_DOT2,
    STATE(159), 1,
      aux_sym__units_repeat1,
    ACTIONS(643), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(637), 10,
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
  [6005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      anon_sym_DOT2,
    STATE(153), 1,
      aux_sym__units_repeat1,
    ACTIONS(619), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SLASH,
    ACTIONS(689), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(643), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 12,
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
  [6071] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH,
    ACTIONS(689), 1,
      anon_sym_DOT2,
    STATE(153), 1,
      aux_sym__units_repeat1,
    ACTIONS(631), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(693), 1,
      sym_exposant,
    ACTIONS(647), 10,
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
  [6117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
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
  [6137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH,
    ACTIONS(684), 1,
      anon_sym_DOT2,
    STATE(161), 1,
      aux_sym__units_repeat1,
    ACTIONS(631), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(626), 10,
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
  [6183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(700), 1,
      anon_sym_DOT2,
    STATE(161), 1,
      aux_sym__units_repeat1,
    ACTIONS(619), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SLASH,
    ACTIONS(703), 1,
      sym_exposant,
    ACTIONS(647), 10,
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
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 11,
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
  [6246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    STATE(180), 1,
      aux_sym_units_repeat1,
    ACTIONS(669), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(619), 10,
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
  [6286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
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
  [6307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(705), 10,
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
  [6326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(619), 10,
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
  [6345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SLASH,
    ACTIONS(678), 10,
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
  [6364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(178), 1,
      aux_sym_units_repeat1,
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
  [6385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      aux_sym_units_repeat1,
    ACTIONS(669), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    STATE(180), 1,
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
  [6427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(171), 1,
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
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 11,
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
  [6465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DOT,
    STATE(175), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(626), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    STATE(164), 1,
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
  [6507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SLASH,
    STATE(166), 1,
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
  [6549] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [6566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(180), 1,
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
  [6587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SLASH,
    ACTIONS(678), 10,
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
  [6606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DOT,
    STATE(175), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(637), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_DOT,
    STATE(182), 1,
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
  [6669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 11,
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
  [6705] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [6722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SLASH,
    STATE(172), 1,
      aux_sym_units_repeat1,
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
  [6743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(215), 1,
      sym_dotted_name,
    STATE(225), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6769] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(205), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(396), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(163), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(167), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
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
  [6917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(215), 1,
      sym_dotted_name,
    STATE(224), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 10,
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
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 10,
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
  [6975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(420), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(186), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7027] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(220), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
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
  [7071] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      aux_sym_number_token1,
    STATE(155), 1,
      sym_dotted_name,
    STATE(362), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(215), 1,
      sym_dotted_name,
    STATE(226), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(705), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(763), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7180] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7246] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(769), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7280] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7367] = 2,
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
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7397] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7429] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(705), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7461] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(719), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7542] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7557] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    ACTIONS(783), 1,
      sym_date,
    ACTIONS(785), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(473), 1,
      sym__date_or_ref,
    STATE(586), 1,
      sym_reference,
  [7585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__indent,
    STATE(595), 1,
      sym_m_duru00e9e_units,
    ACTIONS(789), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(787), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7605] = 7,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym__paragraph_token1,
    ACTIONS(795), 1,
      sym_text_line,
    ACTIONS(797), 1,
      sym__indent,
    ACTIONS(799), 1,
      sym__newline,
    STATE(495), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7629] = 7,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym__paragraph_token1,
    ACTIONS(795), 1,
      sym_text_line,
    ACTIONS(797), 1,
      sym__indent,
    ACTIONS(799), 1,
      sym__newline,
    STATE(105), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7653] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    ACTIONS(783), 1,
      sym_date,
    ACTIONS(785), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(437), 1,
      sym__date_or_ref,
    STATE(586), 1,
      sym_reference,
  [7681] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      anon_sym_SQUOTE,
    ACTIONS(783), 1,
      sym_date,
    ACTIONS(785), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(471), 1,
      sym__date_or_ref,
    STATE(586), 1,
      sym_reference,
  [7709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__indent,
    STATE(582), 1,
      sym_m_duru00e9e_units,
    ACTIONS(789), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(787), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7729] = 7,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym__paragraph_token1,
    ACTIONS(795), 1,
      sym_text_line,
    ACTIONS(797), 1,
      sym__indent,
    ACTIONS(799), 1,
      sym__newline,
    STATE(108), 1,
      sym_meta_value,
    STATE(106), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__indent,
    STATE(633), 1,
      sym_m_duru00e9e_units,
    ACTIONS(789), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(787), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym__indent,
    STATE(583), 1,
      sym_m_duru00e9e_units,
    ACTIONS(789), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(787), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7853] = 2,
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
  [7866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(543), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(541), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8063] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(311), 1,
      sym__array_prefix,
    ACTIONS(831), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(215), 1,
      sym_dotted_name,
    STATE(397), 1,
      aux_sym_s_remplace_repeat1,
    STATE(556), 1,
      sym_reference,
    STATE(557), 1,
      sym__remplace_rule,
  [8088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(602), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8253] = 2,
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
  [8266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(659), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__newline,
    ACTIONS(835), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__dedent,
    ACTIONS(819), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    ACTIONS(865), 1,
      sym_name,
    ACTIONS(868), 1,
      anon_sym_LBRACK,
    STATE(687), 1,
      sym_dotted_name,
    STATE(294), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
    STATE(687), 1,
      sym_dotted_name,
    STATE(309), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__dedent,
    ACTIONS(865), 1,
      sym_name,
    ACTIONS(873), 1,
      anon_sym_LBRACK,
    STATE(647), 1,
      sym_dotted_name,
    STATE(296), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8654] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    ACTIONS(878), 1,
      anon_sym_SQUOTE,
    ACTIONS(880), 1,
      sym_date,
    STATE(215), 1,
      sym_dotted_name,
    STATE(570), 1,
      sym_reference,
  [8676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(882), 1,
      sym__indent,
    ACTIONS(884), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(552), 1,
      sym_reference,
    STATE(555), 1,
      sym_remplace_rule_except,
  [8698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(886), 1,
      sym__indent,
    ACTIONS(888), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(506), 1,
      sym_remplace_rule_in,
    STATE(563), 1,
      sym_reference,
  [8720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(890), 1,
      anon_sym_LBRACK,
    ACTIONS(892), 1,
      sym__dedent,
    STATE(647), 1,
      sym_dotted_name,
    STATE(296), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
    STATE(687), 1,
      sym_dotted_name,
    STATE(294), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8784] = 7,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SPACE,
    ACTIONS(896), 1,
      aux_sym_unit_token1,
    ACTIONS(898), 1,
      sym__indent,
    STATE(335), 1,
      sym_unit,
    STATE(387), 1,
      sym__units,
    STATE(577), 1,
      sym_units,
  [8806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(886), 1,
      sym__indent,
    ACTIONS(888), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(500), 1,
      sym_remplace_rule_in,
    STATE(563), 1,
      sym_reference,
  [8828] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(882), 1,
      sym__indent,
    ACTIONS(884), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(552), 1,
      sym_reference,
    STATE(590), 1,
      sym_remplace_rule_except,
  [8850] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(882), 1,
      sym__indent,
    ACTIONS(884), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(524), 1,
      sym_remplace_rule_except,
    STATE(552), 1,
      sym_reference,
  [8872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
    STATE(687), 1,
      sym_dotted_name,
    STATE(294), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8916] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(882), 1,
      sym__indent,
    ACTIONS(884), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(552), 1,
      sym_reference,
    STATE(605), 1,
      sym_remplace_rule_except,
  [8938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_plafond,
    STATE(530), 1,
      sym__m_taux_or_montant,
    STATE(531), 1,
      sym__m_tranche,
    ACTIONS(904), 2,
      sym_montant,
      sym_taux,
  [8967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_dans,
    ACTIONS(910), 1,
      sym_les_ru00e8gles,
    ACTIONS(912), 1,
      sym__dedent,
    STATE(356), 1,
      sym_import_into,
    STATE(652), 1,
      sym_import_rules,
  [8986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_name,
    ACTIONS(917), 1,
      sym__dedent,
    STATE(155), 1,
      sym_dotted_name,
    STATE(315), 1,
      aux_sym_m_contexte_repeat1,
    STATE(550), 1,
      sym_reference,
  [9005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(919), 1,
      sym__dedent,
    STATE(155), 1,
      sym_dotted_name,
    STATE(315), 1,
      aux_sym_m_contexte_repeat1,
    STATE(550), 1,
      sym_reference,
  [9024] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(890), 1,
      anon_sym_LBRACK,
    STATE(647), 1,
      sym_dotted_name,
    STATE(300), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(921), 1,
      sym__indent,
    ACTIONS(923), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(603), 1,
      sym_reference,
  [9060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_source,
    ACTIONS(927), 1,
      sym_url,
    ACTIONS(929), 1,
      sym__dedent,
    STATE(409), 1,
      sym_import_source,
    STATE(535), 1,
      sym_import_url,
  [9079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(890), 1,
      anon_sym_LBRACK,
    STATE(496), 1,
      sym_dotted_name,
    STATE(512), 2,
      sym_import_rule,
      sym_rule,
  [9096] = 6,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    ACTIONS(933), 1,
      aux_sym_unit_token1,
    STATE(343), 1,
      sym_unit,
    STATE(378), 1,
      sym__units,
    STATE(545), 1,
      sym_units,
  [9115] = 5,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym__paragraph_token1,
    ACTIONS(795), 1,
      sym_text_line,
    ACTIONS(935), 1,
      sym__indent,
    STATE(116), 2,
      sym__text_line,
      sym__paragraph,
  [9132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(831), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(215), 1,
      sym_dotted_name,
    STATE(526), 1,
      sym_reference,
    STATE(527), 1,
      sym__remplace_rule,
  [9151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_plafond,
    STATE(476), 1,
      sym__m_taux_or_montant,
    STATE(531), 1,
      sym__m_tranche,
    ACTIONS(937), 2,
      sym_montant,
      sym_taux,
  [9168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_plafond,
    STATE(446), 1,
      sym__m_taux_or_montant,
    STATE(531), 1,
      sym__m_tranche,
    ACTIONS(937), 2,
      sym_montant,
      sym_taux,
  [9185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(739), 1,
      sym_name,
    STATE(215), 1,
      sym_dotted_name,
    STATE(427), 1,
      aux_sym_m_inversion_repeat1,
    STATE(515), 1,
      sym_reference,
  [9204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_plafond,
    STATE(475), 1,
      sym__m_taux_or_montant,
    STATE(531), 1,
      sym__m_tranche,
    ACTIONS(937), 2,
      sym_montant,
      sym_taux,
  [9221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(739), 1,
      sym_name,
    STATE(215), 1,
      sym_dotted_name,
    STATE(422), 1,
      aux_sym_m_inversion_repeat1,
    STATE(522), 1,
      sym_reference,
  [9240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_plafond,
    STATE(447), 1,
      sym__m_taux_or_montant,
    STATE(531), 1,
      sym__m_tranche,
    ACTIONS(937), 2,
      sym_montant,
      sym_taux,
  [9257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(939), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(616), 1,
      sym_reference,
  [9273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(941), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(575), 1,
      sym_reference,
  [9289] = 5,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__key,
    ACTIONS(945), 1,
      sym_text_line,
    STATE(390), 1,
      aux_sym__text_line_repeat1,
    STATE(391), 1,
      aux_sym_object_repeat1,
  [9305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(947), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(618), 1,
      sym_reference,
  [9321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DOT2,
    STATE(337), 1,
      aux_sym__units_repeat1,
    ACTIONS(631), 2,
      sym__newline,
      anon_sym_SLASH,
  [9335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DOT2,
    STATE(334), 1,
      aux_sym__units_repeat1,
    ACTIONS(643), 2,
      sym__newline,
      anon_sym_SLASH,
  [9349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    STATE(155), 1,
      sym_dotted_name,
    STATE(316), 1,
      aux_sym_m_contexte_repeat1,
    STATE(550), 1,
      sym_reference,
  [9365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_DOT2,
    STATE(337), 1,
      aux_sym__units_repeat1,
    ACTIONS(619), 2,
      sym__newline,
      anon_sym_SLASH,
  [9379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_si,
    ACTIONS(956), 1,
      sym_sinon,
    STATE(520), 1,
      sym_m_variation_si,
    STATE(585), 1,
      sym_m_variation_sinon,
  [9395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_exposant,
    ACTIONS(647), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_exposant,
    ACTIONS(647), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_depuis,
    ACTIONS(964), 1,
      sym_jusqu_u00e0,
    ACTIONS(966), 1,
      sym_unitu00e9,
    ACTIONS(968), 1,
      sym__dedent,
  [9435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_name,
    ACTIONS(970), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(569), 1,
      sym_reference,
  [9451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_DOT2,
    STATE(345), 1,
      aux_sym__units_repeat1,
    ACTIONS(643), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(974), 2,
      sym__dedent,
      sym_sauf_dans,
  [9479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_DOT2,
    STATE(347), 1,
      aux_sym__units_repeat1,
    ACTIONS(631), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    ACTIONS(976), 1,
      sym_date,
    STATE(155), 1,
      sym_dotted_name,
    STATE(578), 1,
      sym_reference,
  [9509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_DOT2,
    STATE(347), 1,
      aux_sym__units_repeat1,
    ACTIONS(619), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(593), 1,
      sym__m_taux_or_montant,
    ACTIONS(983), 2,
      sym_montant,
      sym_taux,
  [9543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_unit_token1,
    STATE(154), 1,
      sym_unit,
    STATE(188), 1,
      sym__units,
  [9574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [9601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_les_ru00e8gles,
    ACTIONS(995), 1,
      sym__dedent,
    STATE(615), 1,
      sym_import_rules,
  [9614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym_unit_token1,
    STATE(343), 1,
      sym_unit,
    STATE(377), 1,
      sym__units,
  [9627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_unit_token1,
    STATE(335), 1,
      sym_unit,
    STATE(386), 1,
      sym__units,
  [9640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_unit_token1,
    STATE(138), 1,
      sym_unit,
    STATE(142), 1,
      sym__units,
  [9653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_dans,
    ACTIONS(1001), 1,
      sym_sauf_dans,
    ACTIONS(1003), 1,
      sym__dedent,
  [9675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [9688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_unit_token1,
    STATE(154), 1,
      sym_unit,
    STATE(202), 1,
      sym__units,
  [9701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__indent,
    ACTIONS(1007), 1,
      sym__newline,
    STATE(589), 1,
      sym_m_une_possibilitu00e9_options,
  [9714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(170), 1,
      sym__units,
  [9736] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
    ACTIONS(1013), 1,
      anon_sym_SQUOTE,
    ACTIONS(1015), 1,
      sym_text_line,
  [9749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [9776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__dedent,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    STATE(371), 1,
      aux_sym_units_repeat1,
  [9789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [9798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__dedent,
    ACTIONS(1026), 1,
      anon_sym_SLASH,
    STATE(371), 1,
      aux_sym_units_repeat1,
  [9811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym__dedent,
    ACTIONS(1026), 1,
      anon_sym_SLASH,
    STATE(371), 1,
      aux_sym_units_repeat1,
  [9824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym_unit_token1,
    STATE(343), 1,
      sym_unit,
    STATE(439), 1,
      sym__units,
  [9837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__dedent,
    ACTIONS(1026), 1,
      anon_sym_SLASH,
    STATE(373), 1,
      aux_sym_units_repeat1,
  [9859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__dedent,
    ACTIONS(1026), 1,
      anon_sym_SLASH,
    STATE(374), 1,
      aux_sym_units_repeat1,
  [9872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__newline,
    ACTIONS(1028), 1,
      anon_sym_SLASH,
    STATE(380), 1,
      aux_sym_units_repeat1,
  [9894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__newline,
    ACTIONS(1031), 1,
      anon_sym_SLASH,
    STATE(380), 1,
      aux_sym_units_repeat1,
  [9907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [9916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym__newline,
    ACTIONS(1031), 1,
      anon_sym_SLASH,
    STATE(380), 1,
      aux_sym_units_repeat1,
  [9929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_unit_token1,
    STATE(335), 1,
      sym_unit,
    STATE(472), 1,
      sym__units,
  [9942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__newline,
    ACTIONS(1031), 1,
      anon_sym_SLASH,
    STATE(381), 1,
      aux_sym_units_repeat1,
  [9964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__newline,
    ACTIONS(1031), 1,
      anon_sym_SLASH,
    STATE(383), 1,
      aux_sym_units_repeat1,
  [9977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__dedent,
    ACTIONS(1037), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [9990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym__dedent,
    ACTIONS(1041), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10003] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_text_line,
    ACTIONS(1043), 1,
      sym__dedent,
    STATE(401), 1,
      aux_sym__text_line_repeat1,
  [10016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym__key,
    ACTIONS(1047), 1,
      sym__dedent,
    STATE(404), 1,
      aux_sym_object_repeat1,
  [10029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_unit_token1,
    STATE(138), 1,
      sym_unit,
    STATE(158), 1,
      sym__units,
  [10060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__array_prefix,
    ACTIONS(1053), 1,
      sym__dedent,
    STATE(38), 1,
      aux_sym_m_array_repeat1,
  [10073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [10086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__array_prefix,
    ACTIONS(1055), 1,
      sym__dedent,
    STATE(37), 1,
      aux_sym_s_remplace_repeat1,
  [10099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    STATE(215), 1,
      sym_dotted_name,
    STATE(523), 1,
      sym_reference,
  [10112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1057), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym__dedent,
    ACTIONS(1061), 1,
      sym__array_prefix,
    STATE(434), 1,
      aux_sym_m_variations_repeat1,
  [10138] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_text_line,
    ACTIONS(1066), 1,
      sym__dedent,
    STATE(401), 1,
      aux_sym__text_line_repeat1,
  [10151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1070), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__key,
    ACTIONS(1075), 1,
      sym__dedent,
    STATE(404), 1,
      aux_sym_object_repeat1,
  [10186] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_text_line,
    ACTIONS(1077), 1,
      sym__dedent,
    STATE(401), 1,
      aux_sym__text_line_repeat1,
  [10199] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_DQUOTE,
    ACTIONS(1081), 1,
      anon_sym_SQUOTE,
    ACTIONS(1083), 1,
      sym_text_line,
  [10212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_url,
    ACTIONS(1087), 1,
      sym__dedent,
    STATE(513), 1,
      sym_import_url,
  [10243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym__dedent,
    ACTIONS(1091), 1,
      sym__array_prefix,
    STATE(430), 1,
      aux_sym_import_rules_repeat1,
  [10256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__array_prefix,
    ACTIONS(1093), 1,
      sym__dedent,
    STATE(430), 1,
      aux_sym_import_rules_repeat1,
  [10287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(571), 1,
      sym_boolean,
    ACTIONS(1095), 2,
      anon_sym_oui,
      anon_sym_non,
  [10298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym__dedent,
    ACTIONS(1101), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(195), 1,
      sym__units,
  [10337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_dans,
    ACTIONS(1106), 1,
      sym_sauf_dans,
    ACTIONS(1108), 1,
      sym__dedent,
  [10350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__indent,
    ACTIONS(1007), 1,
      sym__newline,
    STATE(572), 1,
      sym_m_une_possibilitu00e9_options,
  [10363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(721), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [10376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1110), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [10407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10416] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_DQUOTE,
    ACTIONS(1116), 1,
      anon_sym_SQUOTE,
    ACTIONS(1118), 1,
      sym_text_line,
  [10429] = 4,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
    ACTIONS(1122), 1,
      anon_sym_SQUOTE,
    ACTIONS(1124), 1,
      sym_text_line,
  [10442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1126), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    ACTIONS(1128), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_m_inversion_repeat1,
  [10468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__dedent,
    ACTIONS(1134), 1,
      sym__array_prefix,
    STATE(430), 1,
      aux_sym_import_rules_repeat1,
  [10490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    STATE(215), 1,
      sym_dotted_name,
    STATE(519), 1,
      sym_reference,
  [10512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      sym__dedent,
    ACTIONS(1139), 1,
      sym__array_prefix,
    STATE(434), 1,
      aux_sym_m_variations_repeat1,
  [10534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym__dedent,
    ACTIONS(1144), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym__dedent,
    ACTIONS(1148), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_jusqu_u00e0,
    ACTIONS(1152), 1,
      sym_unitu00e9,
    ACTIONS(1154), 1,
      sym__dedent,
  [10573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__array_prefix,
    STATE(413), 1,
      aux_sym_import_rules_repeat1,
  [10600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__array_prefix,
    STATE(436), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      sym__dedent,
      sym__array_prefix,
  [10618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      sym__dedent,
      sym__array_prefix,
  [10626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    STATE(679), 1,
      sym_dotted_name,
  [10636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym_depuis,
    STATE(314), 1,
      sym_import_from,
  [10646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_plafond,
    ACTIONS(1168), 1,
      sym__dedent,
  [10656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_plafond,
    ACTIONS(1170), 1,
      sym__dedent,
  [10666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym__indent,
    ACTIONS(1174), 1,
      sym__newline,
  [10676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 2,
      sym__dedent,
      sym_sauf_dans,
  [10684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_name,
    STATE(613), 1,
      sym_dotted_name,
  [10694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym__indent,
    ACTIONS(1180), 1,
      sym__newline,
  [10704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym__indent,
    ACTIONS(1184), 1,
      sym__newline,
  [10714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__indent,
    ACTIONS(1188), 1,
      sym__newline,
  [10724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 2,
      sym__dedent,
      sym_url,
  [10732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_unit_token1,
    STATE(165), 1,
      sym_unit,
  [10742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_nom,
    STATE(319), 1,
      sym_import_name,
  [10752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym__indent,
    ACTIONS(1196), 1,
      sym__newline,
  [10762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__array_prefix,
    STATE(39), 1,
      aux_sym_m_array_repeat1,
  [10772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__array_prefix,
    STATE(40), 1,
      aux_sym_s_remplace_repeat1,
  [10782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 2,
      sym__dedent,
      sym_url,
  [10790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym_unit_token1,
    STATE(369), 1,
      sym_unit,
  [10800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__array_prefix,
    STATE(388), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__array_prefix,
    STATE(389), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_choix_obligatoire,
    ACTIONS(1202), 1,
      sym_possibilitu00e9s,
  [10830] = 3,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_text_line,
    STATE(390), 1,
      aux_sym__text_line_repeat1,
  [10840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym__dedent,
      sym_plafond,
  [10848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym__dedent,
      sym_plafond,
  [10856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      sym__dedent,
      sym_plafond,
  [10864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      sym__dedent,
      sym_plafond,
  [10872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(399), 1,
      aux_sym_m_inversion_repeat1,
  [10882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_unitu00e9,
    ACTIONS(1206), 1,
      sym__dedent,
  [10892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      sym__newline,
      anon_sym_SLASH,
  [10900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      sym_unitu00e9,
    ACTIONS(1210), 1,
      sym__dedent,
  [10910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(41), 1,
      aux_sym_m_inversion_repeat1,
  [10920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_plafond,
    ACTIONS(1212), 1,
      sym__dedent,
  [10930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_plafond,
    ACTIONS(1214), 1,
      sym__dedent,
  [10940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym_unit_token1,
    STATE(379), 1,
      sym_unit,
  [10950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym__array_prefix,
    STATE(400), 1,
      aux_sym_m_variations_repeat1,
  [10960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym__dedent,
      sym_name,
  [10968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym__dedent,
      sym_name,
  [10976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      sym__dedent,
      sym_name,
  [10984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 2,
      sym__dedent,
      sym__array_prefix,
  [10992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 2,
      sym__dedent,
      sym_name,
  [11000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      sym__dedent,
      sym_name,
  [11008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(403), 1,
      aux_sym_m_inversion_repeat1,
  [11018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(415), 1,
      aux_sym_m_inversion_repeat1,
  [11028] = 3,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_text_line,
    STATE(405), 1,
      aux_sym__text_line_repeat1,
  [11038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(344), 1,
      aux_sym_m_inversion_repeat1,
  [11048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__array_prefix,
    STATE(428), 1,
      aux_sym_m_inversion_repeat1,
  [11058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      sym_multiplicateur,
    ACTIONS(1226), 1,
      sym_tranches,
  [11076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym__indent,
    ACTIONS(1230), 1,
      sym__newline,
  [11086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym_unit_token1,
    STATE(147), 1,
      sym_unit,
  [11096] = 3,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym__dedent,
    ACTIONS(1232), 1,
      sym_text_line,
  [11106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 2,
      sym__dedent,
      sym__key,
  [11114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    ACTIONS(1236), 1,
      sym__dedent,
  [11124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      sym_si,
    STATE(520), 1,
      sym_m_variation_si,
  [11134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__array_prefix,
    STATE(395), 1,
      aux_sym_m_array_repeat1,
  [11152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_sauf_dans,
    ACTIONS(1244), 1,
      sym__dedent,
  [11162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__array_prefix,
    STATE(435), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 2,
      sym__dedent,
      sym_plafond,
  [11180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      sym__dedent,
      sym_sauf_dans,
  [11188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      aux_sym_unit_token1,
    STATE(168), 1,
      sym_unit,
  [11198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__array_prefix,
    STATE(410), 1,
      aux_sym_import_rules_repeat1,
  [11208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_sauf_dans,
    ACTIONS(1250), 1,
      sym__dedent,
  [11218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym__dedent,
  [11225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_COLON,
  [11232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_COLON,
  [11239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym__dedent,
  [11246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym__dedent,
  [11253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym__dedent,
  [11260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym__dedent,
  [11267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_COLON,
  [11274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym__dedent,
  [11281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_COLON,
  [11288] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym_text_line,
  [11295] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_text_line,
  [11302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      sym__dedent,
  [11309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym__dedent,
  [11316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_COLON,
  [11323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym__dedent,
  [11330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym__dedent,
  [11337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym__dedent,
  [11344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_COLON,
  [11351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym__dedent,
  [11358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym__dedent,
  [11365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym__newline,
  [11372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      sym__dedent,
  [11379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_plafond,
  [11386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      sym__dedent,
  [11393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_COLON,
  [11400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_SQUOTE,
  [11407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_DQUOTE,
  [11414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      sym__dedent,
  [11421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_COLON,
  [11428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_COLON,
  [11435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_COLON,
  [11442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym__dedent,
  [11449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym__dedent,
  [11456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym__dedent,
  [11463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      sym__dedent,
  [11470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym__dedent,
  [11477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_COLON,
  [11484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym__dedent,
  [11491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_COLON,
  [11498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_COLON,
  [11505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_COLON,
  [11512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym__dedent,
  [11519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_COLON,
  [11526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_alors,
  [11533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym__newline,
  [11540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_COLON,
  [11547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_COLON,
  [11554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym__dedent,
  [11561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym__dedent,
  [11568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym__dedent,
  [11575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_COLON,
  [11582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym__dedent,
  [11589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_COLON,
  [11596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COLON,
  [11603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      sym__dedent,
  [11610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym__newline,
  [11617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_COLON,
  [11624] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1356), 1,
      sym_text_line,
  [11631] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1358), 1,
      sym_text_line,
  [11638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_COLON,
  [11645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__dedent,
  [11652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      sym__newline,
  [11659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      sym__dedent,
  [11666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      sym_possibilitu00e9s,
  [11673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      sym__dedent,
  [11680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      sym__dedent,
  [11687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      sym__dedent,
  [11694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
  [11701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym__newline,
  [11708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      sym__newline,
  [11715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_SQUOTE,
  [11722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym__dedent,
  [11729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      sym__dedent,
  [11736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_COLON,
  [11743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      sym__newline,
  [11750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      sym__newline,
  [11757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_COLON,
  [11764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      sym__dedent,
  [11771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      sym__newline,
  [11778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      sym__dedent,
  [11785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      sym__dedent,
  [11792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      sym__dedent,
  [11799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      sym__dedent,
  [11806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      sym__dedent,
  [11813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      sym__dedent,
  [11820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      sym__dedent,
  [11827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym__newline,
  [11834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      sym__newline,
  [11841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_COLON,
  [11848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
  [11855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      sym__dedent,
  [11862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      sym__dedent,
  [11869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      sym__dedent,
  [11876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      sym_tranches,
  [11883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      sym__dedent,
  [11890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      sym__newline,
  [11897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      sym__dedent,
  [11904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      sym__dedent,
  [11911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      sym__dedent,
  [11918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      sym__newline,
  [11925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_SQUOTE,
  [11932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      sym_name,
  [11939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      sym_assiette,
  [11946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      sym__dedent,
  [11953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      sym_tag,
  [11960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_COLON,
  [11967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym__dedent,
  [11974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      sym__dedent,
  [11981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_SQUOTE,
  [11988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      sym__dedent,
  [11995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_DQUOTE,
  [12002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      sym__dedent,
  [12009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      sym__newline,
  [12016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      sym__dedent,
  [12023] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1462), 1,
      sym_text_line,
  [12030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_COLON,
  [12037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_plafond,
  [12044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      sym__newline,
  [12051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      sym__dedent,
  [12058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      sym__dedent,
  [12065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_COLON,
  [12072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      sym_name,
  [12079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      sym__newline,
  [12086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COLON,
  [12093] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1480), 1,
      sym_text_line,
  [12100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      sym__newline,
  [12107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      sym_paragraph,
  [12114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      sym__indent,
  [12121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym__indent,
  [12128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      sym__newline,
  [12135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      sym__dedent,
  [12142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      sym__indent,
  [12149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_SQUOTE,
  [12156] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1498), 1,
      sym_text_line,
  [12163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      sym__indent,
  [12170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      sym__indent,
  [12177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      sym__newline,
  [12184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      sym__dedent,
  [12191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
  [12198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_COLON,
  [12205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      sym__dedent,
  [12212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_oui,
  [12219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      sym__indent,
  [12226] = 2,
    ACTIONS(613), 1,
      sym_comment,
    ACTIONS(1514), 1,
      sym_text_line,
  [12233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__dedent,
  [12240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_SQUOTE,
  [12247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_COLON,
  [12254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_COLON,
  [12261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_DQUOTE,
  [12268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      sym__indent,
  [12275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      sym__dedent,
  [12282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      sym__dedent,
  [12289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COLON,
  [12296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_COLON,
  [12303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_COLON,
  [12310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_COLON,
  [12317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_COLON,
  [12324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
  [12331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_COLON,
  [12338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_COLON,
  [12345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_COLON,
  [12352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_COLON,
  [12359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_COLON,
  [12366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_COLON,
  [12373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_COLON,
  [12380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_RBRACK,
  [12387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_COLON,
  [12394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_COLON,
  [12401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_COLON,
  [12408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_COLON,
  [12415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_COLON,
  [12422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_COLON,
  [12429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_COLON,
  [12436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_COLON,
  [12443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_COLON,
  [12450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym__dedent,
  [12457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      sym__indent,
  [12464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      sym_name,
  [12471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_RBRACK,
  [12478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_COLON,
  [12485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      ts_builtin_sym_end,
  [12492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_COLON,
  [12499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 244,
  [SMALL_STATE(5)] = 345,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 535,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 725,
  [SMALL_STATE(10)] = 820,
  [SMALL_STATE(11)] = 899,
  [SMALL_STATE(12)] = 978,
  [SMALL_STATE(13)] = 1057,
  [SMALL_STATE(14)] = 1118,
  [SMALL_STATE(15)] = 1179,
  [SMALL_STATE(16)] = 1240,
  [SMALL_STATE(17)] = 1301,
  [SMALL_STATE(18)] = 1359,
  [SMALL_STATE(19)] = 1417,
  [SMALL_STATE(20)] = 1475,
  [SMALL_STATE(21)] = 1533,
  [SMALL_STATE(22)] = 1591,
  [SMALL_STATE(23)] = 1641,
  [SMALL_STATE(24)] = 1691,
  [SMALL_STATE(25)] = 1749,
  [SMALL_STATE(26)] = 1807,
  [SMALL_STATE(27)] = 1865,
  [SMALL_STATE(28)] = 1923,
  [SMALL_STATE(29)] = 1973,
  [SMALL_STATE(30)] = 2023,
  [SMALL_STATE(31)] = 2073,
  [SMALL_STATE(32)] = 2131,
  [SMALL_STATE(33)] = 2189,
  [SMALL_STATE(34)] = 2247,
  [SMALL_STATE(35)] = 2305,
  [SMALL_STATE(36)] = 2355,
  [SMALL_STATE(37)] = 2387,
  [SMALL_STATE(38)] = 2418,
  [SMALL_STATE(39)] = 2449,
  [SMALL_STATE(40)] = 2480,
  [SMALL_STATE(41)] = 2511,
  [SMALL_STATE(42)] = 2542,
  [SMALL_STATE(43)] = 2569,
  [SMALL_STATE(44)] = 2615,
  [SMALL_STATE(45)] = 2661,
  [SMALL_STATE(46)] = 2687,
  [SMALL_STATE(47)] = 2733,
  [SMALL_STATE(48)] = 2779,
  [SMALL_STATE(49)] = 2825,
  [SMALL_STATE(50)] = 2871,
  [SMALL_STATE(51)] = 2917,
  [SMALL_STATE(52)] = 2963,
  [SMALL_STATE(53)] = 3009,
  [SMALL_STATE(54)] = 3055,
  [SMALL_STATE(55)] = 3101,
  [SMALL_STATE(56)] = 3147,
  [SMALL_STATE(57)] = 3193,
  [SMALL_STATE(58)] = 3239,
  [SMALL_STATE(59)] = 3287,
  [SMALL_STATE(60)] = 3333,
  [SMALL_STATE(61)] = 3379,
  [SMALL_STATE(62)] = 3425,
  [SMALL_STATE(63)] = 3471,
  [SMALL_STATE(64)] = 3517,
  [SMALL_STATE(65)] = 3563,
  [SMALL_STATE(66)] = 3609,
  [SMALL_STATE(67)] = 3657,
  [SMALL_STATE(68)] = 3703,
  [SMALL_STATE(69)] = 3749,
  [SMALL_STATE(70)] = 3795,
  [SMALL_STATE(71)] = 3841,
  [SMALL_STATE(72)] = 3887,
  [SMALL_STATE(73)] = 3913,
  [SMALL_STATE(74)] = 3959,
  [SMALL_STATE(75)] = 3985,
  [SMALL_STATE(76)] = 4011,
  [SMALL_STATE(77)] = 4055,
  [SMALL_STATE(78)] = 4099,
  [SMALL_STATE(79)] = 4143,
  [SMALL_STATE(80)] = 4191,
  [SMALL_STATE(81)] = 4216,
  [SMALL_STATE(82)] = 4241,
  [SMALL_STATE(83)] = 4266,
  [SMALL_STATE(84)] = 4291,
  [SMALL_STATE(85)] = 4316,
  [SMALL_STATE(86)] = 4341,
  [SMALL_STATE(87)] = 4366,
  [SMALL_STATE(88)] = 4391,
  [SMALL_STATE(89)] = 4416,
  [SMALL_STATE(90)] = 4441,
  [SMALL_STATE(91)] = 4466,
  [SMALL_STATE(92)] = 4491,
  [SMALL_STATE(93)] = 4516,
  [SMALL_STATE(94)] = 4541,
  [SMALL_STATE(95)] = 4566,
  [SMALL_STATE(96)] = 4591,
  [SMALL_STATE(97)] = 4616,
  [SMALL_STATE(98)] = 4641,
  [SMALL_STATE(99)] = 4666,
  [SMALL_STATE(100)] = 4691,
  [SMALL_STATE(101)] = 4716,
  [SMALL_STATE(102)] = 4741,
  [SMALL_STATE(103)] = 4766,
  [SMALL_STATE(104)] = 4791,
  [SMALL_STATE(105)] = 4816,
  [SMALL_STATE(106)] = 4841,
  [SMALL_STATE(107)] = 4866,
  [SMALL_STATE(108)] = 4891,
  [SMALL_STATE(109)] = 4916,
  [SMALL_STATE(110)] = 4941,
  [SMALL_STATE(111)] = 4966,
  [SMALL_STATE(112)] = 4991,
  [SMALL_STATE(113)] = 5016,
  [SMALL_STATE(114)] = 5041,
  [SMALL_STATE(115)] = 5066,
  [SMALL_STATE(116)] = 5091,
  [SMALL_STATE(117)] = 5116,
  [SMALL_STATE(118)] = 5141,
  [SMALL_STATE(119)] = 5166,
  [SMALL_STATE(120)] = 5191,
  [SMALL_STATE(121)] = 5216,
  [SMALL_STATE(122)] = 5241,
  [SMALL_STATE(123)] = 5266,
  [SMALL_STATE(124)] = 5291,
  [SMALL_STATE(125)] = 5316,
  [SMALL_STATE(126)] = 5341,
  [SMALL_STATE(127)] = 5366,
  [SMALL_STATE(128)] = 5391,
  [SMALL_STATE(129)] = 5416,
  [SMALL_STATE(130)] = 5441,
  [SMALL_STATE(131)] = 5466,
  [SMALL_STATE(132)] = 5491,
  [SMALL_STATE(133)] = 5523,
  [SMALL_STATE(134)] = 5549,
  [SMALL_STATE(135)] = 5573,
  [SMALL_STATE(136)] = 5599,
  [SMALL_STATE(137)] = 5623,
  [SMALL_STATE(138)] = 5647,
  [SMALL_STATE(139)] = 5673,
  [SMALL_STATE(140)] = 5697,
  [SMALL_STATE(141)] = 5729,
  [SMALL_STATE(142)] = 5761,
  [SMALL_STATE(143)] = 5784,
  [SMALL_STATE(144)] = 5807,
  [SMALL_STATE(145)] = 5830,
  [SMALL_STATE(146)] = 5853,
  [SMALL_STATE(147)] = 5876,
  [SMALL_STATE(148)] = 5897,
  [SMALL_STATE(149)] = 5916,
  [SMALL_STATE(150)] = 5937,
  [SMALL_STATE(151)] = 5959,
  [SMALL_STATE(152)] = 5983,
  [SMALL_STATE(153)] = 6005,
  [SMALL_STATE(154)] = 6029,
  [SMALL_STATE(155)] = 6053,
  [SMALL_STATE(156)] = 6071,
  [SMALL_STATE(157)] = 6095,
  [SMALL_STATE(158)] = 6117,
  [SMALL_STATE(159)] = 6137,
  [SMALL_STATE(160)] = 6161,
  [SMALL_STATE(161)] = 6183,
  [SMALL_STATE(162)] = 6207,
  [SMALL_STATE(163)] = 6229,
  [SMALL_STATE(164)] = 6246,
  [SMALL_STATE(165)] = 6267,
  [SMALL_STATE(166)] = 6286,
  [SMALL_STATE(167)] = 6307,
  [SMALL_STATE(168)] = 6326,
  [SMALL_STATE(169)] = 6345,
  [SMALL_STATE(170)] = 6364,
  [SMALL_STATE(171)] = 6385,
  [SMALL_STATE(172)] = 6406,
  [SMALL_STATE(173)] = 6427,
  [SMALL_STATE(174)] = 6448,
  [SMALL_STATE(175)] = 6465,
  [SMALL_STATE(176)] = 6486,
  [SMALL_STATE(177)] = 6507,
  [SMALL_STATE(178)] = 6528,
  [SMALL_STATE(179)] = 6549,
  [SMALL_STATE(180)] = 6566,
  [SMALL_STATE(181)] = 6587,
  [SMALL_STATE(182)] = 6606,
  [SMALL_STATE(183)] = 6627,
  [SMALL_STATE(184)] = 6648,
  [SMALL_STATE(185)] = 6669,
  [SMALL_STATE(186)] = 6688,
  [SMALL_STATE(187)] = 6705,
  [SMALL_STATE(188)] = 6722,
  [SMALL_STATE(189)] = 6743,
  [SMALL_STATE(190)] = 6769,
  [SMALL_STATE(191)] = 6795,
  [SMALL_STATE(192)] = 6821,
  [SMALL_STATE(193)] = 6847,
  [SMALL_STATE(194)] = 6873,
  [SMALL_STATE(195)] = 6899,
  [SMALL_STATE(196)] = 6917,
  [SMALL_STATE(197)] = 6943,
  [SMALL_STATE(198)] = 6959,
  [SMALL_STATE(199)] = 6975,
  [SMALL_STATE(200)] = 7001,
  [SMALL_STATE(201)] = 7027,
  [SMALL_STATE(202)] = 7053,
  [SMALL_STATE(203)] = 7071,
  [SMALL_STATE(204)] = 7097,
  [SMALL_STATE(205)] = 7123,
  [SMALL_STATE(206)] = 7140,
  [SMALL_STATE(207)] = 7161,
  [SMALL_STATE(208)] = 7180,
  [SMALL_STATE(209)] = 7195,
  [SMALL_STATE(210)] = 7212,
  [SMALL_STATE(211)] = 7229,
  [SMALL_STATE(212)] = 7246,
  [SMALL_STATE(213)] = 7261,
  [SMALL_STATE(214)] = 7280,
  [SMALL_STATE(215)] = 7295,
  [SMALL_STATE(216)] = 7310,
  [SMALL_STATE(217)] = 7331,
  [SMALL_STATE(218)] = 7346,
  [SMALL_STATE(219)] = 7367,
  [SMALL_STATE(220)] = 7382,
  [SMALL_STATE(221)] = 7397,
  [SMALL_STATE(222)] = 7412,
  [SMALL_STATE(223)] = 7429,
  [SMALL_STATE(224)] = 7444,
  [SMALL_STATE(225)] = 7461,
  [SMALL_STATE(226)] = 7476,
  [SMALL_STATE(227)] = 7491,
  [SMALL_STATE(228)] = 7508,
  [SMALL_STATE(229)] = 7525,
  [SMALL_STATE(230)] = 7542,
  [SMALL_STATE(231)] = 7557,
  [SMALL_STATE(232)] = 7585,
  [SMALL_STATE(233)] = 7605,
  [SMALL_STATE(234)] = 7629,
  [SMALL_STATE(235)] = 7653,
  [SMALL_STATE(236)] = 7681,
  [SMALL_STATE(237)] = 7709,
  [SMALL_STATE(238)] = 7729,
  [SMALL_STATE(239)] = 7753,
  [SMALL_STATE(240)] = 7773,
  [SMALL_STATE(241)] = 7793,
  [SMALL_STATE(242)] = 7808,
  [SMALL_STATE(243)] = 7823,
  [SMALL_STATE(244)] = 7838,
  [SMALL_STATE(245)] = 7853,
  [SMALL_STATE(246)] = 7866,
  [SMALL_STATE(247)] = 7879,
  [SMALL_STATE(248)] = 7896,
  [SMALL_STATE(249)] = 7911,
  [SMALL_STATE(250)] = 7926,
  [SMALL_STATE(251)] = 7941,
  [SMALL_STATE(252)] = 7956,
  [SMALL_STATE(253)] = 7973,
  [SMALL_STATE(254)] = 7988,
  [SMALL_STATE(255)] = 8003,
  [SMALL_STATE(256)] = 8018,
  [SMALL_STATE(257)] = 8033,
  [SMALL_STATE(258)] = 8048,
  [SMALL_STATE(259)] = 8063,
  [SMALL_STATE(260)] = 8088,
  [SMALL_STATE(261)] = 8103,
  [SMALL_STATE(262)] = 8118,
  [SMALL_STATE(263)] = 8133,
  [SMALL_STATE(264)] = 8148,
  [SMALL_STATE(265)] = 8161,
  [SMALL_STATE(266)] = 8176,
  [SMALL_STATE(267)] = 8191,
  [SMALL_STATE(268)] = 8206,
  [SMALL_STATE(269)] = 8223,
  [SMALL_STATE(270)] = 8238,
  [SMALL_STATE(271)] = 8253,
  [SMALL_STATE(272)] = 8266,
  [SMALL_STATE(273)] = 8281,
  [SMALL_STATE(274)] = 8294,
  [SMALL_STATE(275)] = 8309,
  [SMALL_STATE(276)] = 8324,
  [SMALL_STATE(277)] = 8339,
  [SMALL_STATE(278)] = 8354,
  [SMALL_STATE(279)] = 8369,
  [SMALL_STATE(280)] = 8384,
  [SMALL_STATE(281)] = 8399,
  [SMALL_STATE(282)] = 8416,
  [SMALL_STATE(283)] = 8429,
  [SMALL_STATE(284)] = 8444,
  [SMALL_STATE(285)] = 8459,
  [SMALL_STATE(286)] = 8474,
  [SMALL_STATE(287)] = 8489,
  [SMALL_STATE(288)] = 8504,
  [SMALL_STATE(289)] = 8519,
  [SMALL_STATE(290)] = 8534,
  [SMALL_STATE(291)] = 8549,
  [SMALL_STATE(292)] = 8564,
  [SMALL_STATE(293)] = 8579,
  [SMALL_STATE(294)] = 8594,
  [SMALL_STATE(295)] = 8614,
  [SMALL_STATE(296)] = 8634,
  [SMALL_STATE(297)] = 8654,
  [SMALL_STATE(298)] = 8676,
  [SMALL_STATE(299)] = 8698,
  [SMALL_STATE(300)] = 8720,
  [SMALL_STATE(301)] = 8740,
  [SMALL_STATE(302)] = 8752,
  [SMALL_STATE(303)] = 8764,
  [SMALL_STATE(304)] = 8784,
  [SMALL_STATE(305)] = 8806,
  [SMALL_STATE(306)] = 8828,
  [SMALL_STATE(307)] = 8850,
  [SMALL_STATE(308)] = 8872,
  [SMALL_STATE(309)] = 8884,
  [SMALL_STATE(310)] = 8904,
  [SMALL_STATE(311)] = 8916,
  [SMALL_STATE(312)] = 8938,
  [SMALL_STATE(313)] = 8950,
  [SMALL_STATE(314)] = 8967,
  [SMALL_STATE(315)] = 8986,
  [SMALL_STATE(316)] = 9005,
  [SMALL_STATE(317)] = 9024,
  [SMALL_STATE(318)] = 9041,
  [SMALL_STATE(319)] = 9060,
  [SMALL_STATE(320)] = 9079,
  [SMALL_STATE(321)] = 9096,
  [SMALL_STATE(322)] = 9115,
  [SMALL_STATE(323)] = 9132,
  [SMALL_STATE(324)] = 9151,
  [SMALL_STATE(325)] = 9168,
  [SMALL_STATE(326)] = 9185,
  [SMALL_STATE(327)] = 9204,
  [SMALL_STATE(328)] = 9221,
  [SMALL_STATE(329)] = 9240,
  [SMALL_STATE(330)] = 9257,
  [SMALL_STATE(331)] = 9273,
  [SMALL_STATE(332)] = 9289,
  [SMALL_STATE(333)] = 9305,
  [SMALL_STATE(334)] = 9321,
  [SMALL_STATE(335)] = 9335,
  [SMALL_STATE(336)] = 9349,
  [SMALL_STATE(337)] = 9365,
  [SMALL_STATE(338)] = 9379,
  [SMALL_STATE(339)] = 9395,
  [SMALL_STATE(340)] = 9407,
  [SMALL_STATE(341)] = 9419,
  [SMALL_STATE(342)] = 9435,
  [SMALL_STATE(343)] = 9451,
  [SMALL_STATE(344)] = 9465,
  [SMALL_STATE(345)] = 9479,
  [SMALL_STATE(346)] = 9493,
  [SMALL_STATE(347)] = 9509,
  [SMALL_STATE(348)] = 9523,
  [SMALL_STATE(349)] = 9532,
  [SMALL_STATE(350)] = 9543,
  [SMALL_STATE(351)] = 9552,
  [SMALL_STATE(352)] = 9561,
  [SMALL_STATE(353)] = 9574,
  [SMALL_STATE(354)] = 9583,
  [SMALL_STATE(355)] = 9592,
  [SMALL_STATE(356)] = 9601,
  [SMALL_STATE(357)] = 9614,
  [SMALL_STATE(358)] = 9627,
  [SMALL_STATE(359)] = 9640,
  [SMALL_STATE(360)] = 9653,
  [SMALL_STATE(361)] = 9662,
  [SMALL_STATE(362)] = 9675,
  [SMALL_STATE(363)] = 9688,
  [SMALL_STATE(364)] = 9701,
  [SMALL_STATE(365)] = 9714,
  [SMALL_STATE(366)] = 9723,
  [SMALL_STATE(367)] = 9736,
  [SMALL_STATE(368)] = 9749,
  [SMALL_STATE(369)] = 9758,
  [SMALL_STATE(370)] = 9767,
  [SMALL_STATE(371)] = 9776,
  [SMALL_STATE(372)] = 9789,
  [SMALL_STATE(373)] = 9798,
  [SMALL_STATE(374)] = 9811,
  [SMALL_STATE(375)] = 9824,
  [SMALL_STATE(376)] = 9837,
  [SMALL_STATE(377)] = 9846,
  [SMALL_STATE(378)] = 9859,
  [SMALL_STATE(379)] = 9872,
  [SMALL_STATE(380)] = 9881,
  [SMALL_STATE(381)] = 9894,
  [SMALL_STATE(382)] = 9907,
  [SMALL_STATE(383)] = 9916,
  [SMALL_STATE(384)] = 9929,
  [SMALL_STATE(385)] = 9942,
  [SMALL_STATE(386)] = 9951,
  [SMALL_STATE(387)] = 9964,
  [SMALL_STATE(388)] = 9977,
  [SMALL_STATE(389)] = 9990,
  [SMALL_STATE(390)] = 10003,
  [SMALL_STATE(391)] = 10016,
  [SMALL_STATE(392)] = 10029,
  [SMALL_STATE(393)] = 10038,
  [SMALL_STATE(394)] = 10047,
  [SMALL_STATE(395)] = 10060,
  [SMALL_STATE(396)] = 10073,
  [SMALL_STATE(397)] = 10086,
  [SMALL_STATE(398)] = 10099,
  [SMALL_STATE(399)] = 10112,
  [SMALL_STATE(400)] = 10125,
  [SMALL_STATE(401)] = 10138,
  [SMALL_STATE(402)] = 10151,
  [SMALL_STATE(403)] = 10160,
  [SMALL_STATE(404)] = 10173,
  [SMALL_STATE(405)] = 10186,
  [SMALL_STATE(406)] = 10199,
  [SMALL_STATE(407)] = 10212,
  [SMALL_STATE(408)] = 10221,
  [SMALL_STATE(409)] = 10230,
  [SMALL_STATE(410)] = 10243,
  [SMALL_STATE(411)] = 10256,
  [SMALL_STATE(412)] = 10265,
  [SMALL_STATE(413)] = 10274,
  [SMALL_STATE(414)] = 10287,
  [SMALL_STATE(415)] = 10298,
  [SMALL_STATE(416)] = 10311,
  [SMALL_STATE(417)] = 10324,
  [SMALL_STATE(418)] = 10337,
  [SMALL_STATE(419)] = 10350,
  [SMALL_STATE(420)] = 10363,
  [SMALL_STATE(421)] = 10376,
  [SMALL_STATE(422)] = 10385,
  [SMALL_STATE(423)] = 10398,
  [SMALL_STATE(424)] = 10407,
  [SMALL_STATE(425)] = 10416,
  [SMALL_STATE(426)] = 10429,
  [SMALL_STATE(427)] = 10442,
  [SMALL_STATE(428)] = 10455,
  [SMALL_STATE(429)] = 10468,
  [SMALL_STATE(430)] = 10477,
  [SMALL_STATE(431)] = 10490,
  [SMALL_STATE(432)] = 10499,
  [SMALL_STATE(433)] = 10512,
  [SMALL_STATE(434)] = 10521,
  [SMALL_STATE(435)] = 10534,
  [SMALL_STATE(436)] = 10547,
  [SMALL_STATE(437)] = 10560,
  [SMALL_STATE(438)] = 10573,
  [SMALL_STATE(439)] = 10582,
  [SMALL_STATE(440)] = 10590,
  [SMALL_STATE(441)] = 10600,
  [SMALL_STATE(442)] = 10610,
  [SMALL_STATE(443)] = 10618,
  [SMALL_STATE(444)] = 10626,
  [SMALL_STATE(445)] = 10636,
  [SMALL_STATE(446)] = 10646,
  [SMALL_STATE(447)] = 10656,
  [SMALL_STATE(448)] = 10666,
  [SMALL_STATE(449)] = 10676,
  [SMALL_STATE(450)] = 10684,
  [SMALL_STATE(451)] = 10694,
  [SMALL_STATE(452)] = 10704,
  [SMALL_STATE(453)] = 10714,
  [SMALL_STATE(454)] = 10724,
  [SMALL_STATE(455)] = 10732,
  [SMALL_STATE(456)] = 10742,
  [SMALL_STATE(457)] = 10752,
  [SMALL_STATE(458)] = 10762,
  [SMALL_STATE(459)] = 10772,
  [SMALL_STATE(460)] = 10782,
  [SMALL_STATE(461)] = 10790,
  [SMALL_STATE(462)] = 10800,
  [SMALL_STATE(463)] = 10810,
  [SMALL_STATE(464)] = 10820,
  [SMALL_STATE(465)] = 10830,
  [SMALL_STATE(466)] = 10840,
  [SMALL_STATE(467)] = 10848,
  [SMALL_STATE(468)] = 10856,
  [SMALL_STATE(469)] = 10864,
  [SMALL_STATE(470)] = 10872,
  [SMALL_STATE(471)] = 10882,
  [SMALL_STATE(472)] = 10892,
  [SMALL_STATE(473)] = 10900,
  [SMALL_STATE(474)] = 10910,
  [SMALL_STATE(475)] = 10920,
  [SMALL_STATE(476)] = 10930,
  [SMALL_STATE(477)] = 10940,
  [SMALL_STATE(478)] = 10950,
  [SMALL_STATE(479)] = 10960,
  [SMALL_STATE(480)] = 10968,
  [SMALL_STATE(481)] = 10976,
  [SMALL_STATE(482)] = 10984,
  [SMALL_STATE(483)] = 10992,
  [SMALL_STATE(484)] = 11000,
  [SMALL_STATE(485)] = 11008,
  [SMALL_STATE(486)] = 11018,
  [SMALL_STATE(487)] = 11028,
  [SMALL_STATE(488)] = 11038,
  [SMALL_STATE(489)] = 11048,
  [SMALL_STATE(490)] = 11058,
  [SMALL_STATE(491)] = 11066,
  [SMALL_STATE(492)] = 11076,
  [SMALL_STATE(493)] = 11086,
  [SMALL_STATE(494)] = 11096,
  [SMALL_STATE(495)] = 11106,
  [SMALL_STATE(496)] = 11114,
  [SMALL_STATE(497)] = 11124,
  [SMALL_STATE(498)] = 11134,
  [SMALL_STATE(499)] = 11142,
  [SMALL_STATE(500)] = 11152,
  [SMALL_STATE(501)] = 11162,
  [SMALL_STATE(502)] = 11172,
  [SMALL_STATE(503)] = 11180,
  [SMALL_STATE(504)] = 11188,
  [SMALL_STATE(505)] = 11198,
  [SMALL_STATE(506)] = 11208,
  [SMALL_STATE(507)] = 11218,
  [SMALL_STATE(508)] = 11225,
  [SMALL_STATE(509)] = 11232,
  [SMALL_STATE(510)] = 11239,
  [SMALL_STATE(511)] = 11246,
  [SMALL_STATE(512)] = 11253,
  [SMALL_STATE(513)] = 11260,
  [SMALL_STATE(514)] = 11267,
  [SMALL_STATE(515)] = 11274,
  [SMALL_STATE(516)] = 11281,
  [SMALL_STATE(517)] = 11288,
  [SMALL_STATE(518)] = 11295,
  [SMALL_STATE(519)] = 11302,
  [SMALL_STATE(520)] = 11309,
  [SMALL_STATE(521)] = 11316,
  [SMALL_STATE(522)] = 11323,
  [SMALL_STATE(523)] = 11330,
  [SMALL_STATE(524)] = 11337,
  [SMALL_STATE(525)] = 11344,
  [SMALL_STATE(526)] = 11351,
  [SMALL_STATE(527)] = 11358,
  [SMALL_STATE(528)] = 11365,
  [SMALL_STATE(529)] = 11372,
  [SMALL_STATE(530)] = 11379,
  [SMALL_STATE(531)] = 11386,
  [SMALL_STATE(532)] = 11393,
  [SMALL_STATE(533)] = 11400,
  [SMALL_STATE(534)] = 11407,
  [SMALL_STATE(535)] = 11414,
  [SMALL_STATE(536)] = 11421,
  [SMALL_STATE(537)] = 11428,
  [SMALL_STATE(538)] = 11435,
  [SMALL_STATE(539)] = 11442,
  [SMALL_STATE(540)] = 11449,
  [SMALL_STATE(541)] = 11456,
  [SMALL_STATE(542)] = 11463,
  [SMALL_STATE(543)] = 11470,
  [SMALL_STATE(544)] = 11477,
  [SMALL_STATE(545)] = 11484,
  [SMALL_STATE(546)] = 11491,
  [SMALL_STATE(547)] = 11498,
  [SMALL_STATE(548)] = 11505,
  [SMALL_STATE(549)] = 11512,
  [SMALL_STATE(550)] = 11519,
  [SMALL_STATE(551)] = 11526,
  [SMALL_STATE(552)] = 11533,
  [SMALL_STATE(553)] = 11540,
  [SMALL_STATE(554)] = 11547,
  [SMALL_STATE(555)] = 11554,
  [SMALL_STATE(556)] = 11561,
  [SMALL_STATE(557)] = 11568,
  [SMALL_STATE(558)] = 11575,
  [SMALL_STATE(559)] = 11582,
  [SMALL_STATE(560)] = 11589,
  [SMALL_STATE(561)] = 11596,
  [SMALL_STATE(562)] = 11603,
  [SMALL_STATE(563)] = 11610,
  [SMALL_STATE(564)] = 11617,
  [SMALL_STATE(565)] = 11624,
  [SMALL_STATE(566)] = 11631,
  [SMALL_STATE(567)] = 11638,
  [SMALL_STATE(568)] = 11645,
  [SMALL_STATE(569)] = 11652,
  [SMALL_STATE(570)] = 11659,
  [SMALL_STATE(571)] = 11666,
  [SMALL_STATE(572)] = 11673,
  [SMALL_STATE(573)] = 11680,
  [SMALL_STATE(574)] = 11687,
  [SMALL_STATE(575)] = 11694,
  [SMALL_STATE(576)] = 11701,
  [SMALL_STATE(577)] = 11708,
  [SMALL_STATE(578)] = 11715,
  [SMALL_STATE(579)] = 11722,
  [SMALL_STATE(580)] = 11729,
  [SMALL_STATE(581)] = 11736,
  [SMALL_STATE(582)] = 11743,
  [SMALL_STATE(583)] = 11750,
  [SMALL_STATE(584)] = 11757,
  [SMALL_STATE(585)] = 11764,
  [SMALL_STATE(586)] = 11771,
  [SMALL_STATE(587)] = 11778,
  [SMALL_STATE(588)] = 11785,
  [SMALL_STATE(589)] = 11792,
  [SMALL_STATE(590)] = 11799,
  [SMALL_STATE(591)] = 11806,
  [SMALL_STATE(592)] = 11813,
  [SMALL_STATE(593)] = 11820,
  [SMALL_STATE(594)] = 11827,
  [SMALL_STATE(595)] = 11834,
  [SMALL_STATE(596)] = 11841,
  [SMALL_STATE(597)] = 11848,
  [SMALL_STATE(598)] = 11855,
  [SMALL_STATE(599)] = 11862,
  [SMALL_STATE(600)] = 11869,
  [SMALL_STATE(601)] = 11876,
  [SMALL_STATE(602)] = 11883,
  [SMALL_STATE(603)] = 11890,
  [SMALL_STATE(604)] = 11897,
  [SMALL_STATE(605)] = 11904,
  [SMALL_STATE(606)] = 11911,
  [SMALL_STATE(607)] = 11918,
  [SMALL_STATE(608)] = 11925,
  [SMALL_STATE(609)] = 11932,
  [SMALL_STATE(610)] = 11939,
  [SMALL_STATE(611)] = 11946,
  [SMALL_STATE(612)] = 11953,
  [SMALL_STATE(613)] = 11960,
  [SMALL_STATE(614)] = 11967,
  [SMALL_STATE(615)] = 11974,
  [SMALL_STATE(616)] = 11981,
  [SMALL_STATE(617)] = 11988,
  [SMALL_STATE(618)] = 11995,
  [SMALL_STATE(619)] = 12002,
  [SMALL_STATE(620)] = 12009,
  [SMALL_STATE(621)] = 12016,
  [SMALL_STATE(622)] = 12023,
  [SMALL_STATE(623)] = 12030,
  [SMALL_STATE(624)] = 12037,
  [SMALL_STATE(625)] = 12044,
  [SMALL_STATE(626)] = 12051,
  [SMALL_STATE(627)] = 12058,
  [SMALL_STATE(628)] = 12065,
  [SMALL_STATE(629)] = 12072,
  [SMALL_STATE(630)] = 12079,
  [SMALL_STATE(631)] = 12086,
  [SMALL_STATE(632)] = 12093,
  [SMALL_STATE(633)] = 12100,
  [SMALL_STATE(634)] = 12107,
  [SMALL_STATE(635)] = 12114,
  [SMALL_STATE(636)] = 12121,
  [SMALL_STATE(637)] = 12128,
  [SMALL_STATE(638)] = 12135,
  [SMALL_STATE(639)] = 12142,
  [SMALL_STATE(640)] = 12149,
  [SMALL_STATE(641)] = 12156,
  [SMALL_STATE(642)] = 12163,
  [SMALL_STATE(643)] = 12170,
  [SMALL_STATE(644)] = 12177,
  [SMALL_STATE(645)] = 12184,
  [SMALL_STATE(646)] = 12191,
  [SMALL_STATE(647)] = 12198,
  [SMALL_STATE(648)] = 12205,
  [SMALL_STATE(649)] = 12212,
  [SMALL_STATE(650)] = 12219,
  [SMALL_STATE(651)] = 12226,
  [SMALL_STATE(652)] = 12233,
  [SMALL_STATE(653)] = 12240,
  [SMALL_STATE(654)] = 12247,
  [SMALL_STATE(655)] = 12254,
  [SMALL_STATE(656)] = 12261,
  [SMALL_STATE(657)] = 12268,
  [SMALL_STATE(658)] = 12275,
  [SMALL_STATE(659)] = 12282,
  [SMALL_STATE(660)] = 12289,
  [SMALL_STATE(661)] = 12296,
  [SMALL_STATE(662)] = 12303,
  [SMALL_STATE(663)] = 12310,
  [SMALL_STATE(664)] = 12317,
  [SMALL_STATE(665)] = 12324,
  [SMALL_STATE(666)] = 12331,
  [SMALL_STATE(667)] = 12338,
  [SMALL_STATE(668)] = 12345,
  [SMALL_STATE(669)] = 12352,
  [SMALL_STATE(670)] = 12359,
  [SMALL_STATE(671)] = 12366,
  [SMALL_STATE(672)] = 12373,
  [SMALL_STATE(673)] = 12380,
  [SMALL_STATE(674)] = 12387,
  [SMALL_STATE(675)] = 12394,
  [SMALL_STATE(676)] = 12401,
  [SMALL_STATE(677)] = 12408,
  [SMALL_STATE(678)] = 12415,
  [SMALL_STATE(679)] = 12422,
  [SMALL_STATE(680)] = 12429,
  [SMALL_STATE(681)] = 12436,
  [SMALL_STATE(682)] = 12443,
  [SMALL_STATE(683)] = 12450,
  [SMALL_STATE(684)] = 12457,
  [SMALL_STATE(685)] = 12464,
  [SMALL_STATE(686)] = 12471,
  [SMALL_STATE(687)] = 12478,
  [SMALL_STATE(688)] = 12485,
  [SMALL_STATE(689)] = 12492,
  [SMALL_STATE(690)] = 12499,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(677),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(676),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(675),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(674),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(672),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(671),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(670),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(669),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(668),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(666),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(665),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(664),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(663),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(662),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(661),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(238),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(677),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(676),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(675),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(668),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(666),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(665),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(664),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(663),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(662),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(398),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 11),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 11),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 11), SHIFT_REPEAT(323),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 12),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 5, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 14),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 35),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 35),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 26),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 26),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 39),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 39),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 35),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 35),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 26),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 26),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 4, .production_id = 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 4, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 40),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 40),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 19),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 19),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 35),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 35),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 35),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 35),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 18),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 18),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 16),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 16),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 15),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 15),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 33),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 33),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 10, .production_id = 22),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 10, .production_id = 22),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 8),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 24),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 24),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 5, .production_id = 7),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 5, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 26),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 26),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 29),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 7),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 5, .production_id = 7),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 3, .production_id = 7),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 3, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 5, .production_id = 7),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 5, .production_id = 7),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 8, .production_id = 7),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 8, .production_id = 7),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 32),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 32),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5, .production_id = 7),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 5, .production_id = 7),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 5),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_avec, 5, .production_id = 7),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_avec, 5, .production_id = 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 26),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 26),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 5, .production_id = 10),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 5, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 5, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 5, .production_id = 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 30),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 30),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 7),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 3, .production_id = 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(493),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(685),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 9),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(394),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(455),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(629),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(504),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(417),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(609),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(363),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(612),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(690),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(137),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(477),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(461),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 5),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 17),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 3),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(375),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(384),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 4),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(576),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 5),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 2),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(233),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 4),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 25),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 25), SHIFT_REPEAT(313),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4, .production_id = 13),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_name, 3),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 6),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2), SHIFT_REPEAT(320),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(497),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 7),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 3),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 31),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_source, 3),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_source, 5),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_into, 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rule, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_into, 5),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 27),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_taux_or_montant, 3),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 20),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 5),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 28),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e_units, 1),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_si, 6, .production_id = 23),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 21),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 11, .production_id = 38),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 4, .production_id = 37),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 4, .production_id = 36),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_url, 5),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 34),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_sinon, 3),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 3),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 3),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_url, 3),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
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
