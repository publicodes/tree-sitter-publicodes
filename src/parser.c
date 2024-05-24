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
#define STATE_COUNT 696
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 18
#define PRODUCTION_ID_COUNT 58

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
  aux_sym_string_token1 = 32,
  aux_sym_string_token2 = 33,
  sym_date = 34,
  aux_sym_number_token1 = 35,
  anon_sym_SPACE = 36,
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
  sym_meta_name = 72,
  aux_sym__paragraph_token1 = 73,
  sym__key = 74,
  sym_text_line = 75,
  sym__indent = 76,
  sym__dedent = 77,
  sym__array_prefix = 78,
  sym__newline = 79,
  sym_paragraph = 80,
  sym_error_recovery_mode = 81,
  sym_source_file = 82,
  sym_import = 83,
  sym_import_from = 84,
  sym__import_name = 85,
  sym__import_source = 86,
  sym__import_url = 87,
  sym__import_into = 88,
  sym_import_rules = 89,
  sym_import_rule = 90,
  sym_rule = 91,
  sym_rule_body = 92,
  sym__statement = 93,
  sym_s_formule = 94,
  sym__valeur = 95,
  sym_mechanism = 96,
  sym_m_unary = 97,
  sym_m_array = 98,
  sym__m_special = 99,
  sym_m_inversion = 100,
  sym_m_contexte = 101,
  sym_m_variations = 102,
  sym_m_variation_si = 103,
  sym_m_variation_sinon = 104,
  sym_m_unitu00e9 = 105,
  sym_m_duru00e9e = 106,
  sym__date_or_ref = 107,
  sym_m_duru00e9e_units = 108,
  sym_m_baru00e8me_like = 109,
  sym__m_tranche = 110,
  sym__m_taux_or_montant = 111,
  sym_m_texte = 112,
  sym_m_une_possibilitu00e9 = 113,
  sym_m_une_possibilitu00e9_options = 114,
  sym_s_avec = 115,
  sym_s_remplace = 116,
  sym__remplace_rule = 117,
  sym_remplace_rule_in = 118,
  sym_remplace_rule_except = 119,
  sym__tags = 120,
  sym__expression = 121,
  sym__ar_expression = 122,
  sym_ar_unary_expression = 123,
  sym_ar_binary_expression = 124,
  sym__bool_expression = 125,
  sym_comparison = 126,
  sym_dotted_name = 127,
  sym_reference = 128,
  sym_boolean = 129,
  sym_string = 130,
  sym_number = 131,
  sym_units = 132,
  sym__units = 133,
  sym_unit = 134,
  sym_meta = 135,
  sym_custom_meta = 136,
  sym_meta_value = 137,
  sym__text_line = 138,
  sym__paragraph = 139,
  sym_object = 140,
  aux_sym_source_file_repeat1 = 141,
  aux_sym_import_rules_repeat1 = 142,
  aux_sym_rule_body_repeat1 = 143,
  aux_sym__valeur_repeat1 = 144,
  aux_sym_m_array_repeat1 = 145,
  aux_sym_m_inversion_repeat1 = 146,
  aux_sym_m_contexte_repeat1 = 147,
  aux_sym_m_variations_repeat1 = 148,
  aux_sym_m_baru00e8me_like_repeat1 = 149,
  aux_sym_s_remplace_repeat1 = 150,
  aux_sym_dotted_name_repeat1 = 151,
  aux_sym_units_repeat1 = 152,
  aux_sym__units_repeat1 = 153,
  aux_sym__text_line_repeat1 = 154,
  aux_sym_object_repeat1 = 155,
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 4},
  [16] = {.index = 29, .length = 1},
  [17] = {.index = 30, .length = 6},
  [18] = {.index = 36, .length = 1},
  [19] = {.index = 37, .length = 2},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 3},
  [22] = {.index = 44, .length = 1},
  [23] = {.index = 45, .length = 3},
  [24] = {.index = 48, .length = 1},
  [25] = {.index = 49, .length = 1},
  [26] = {.index = 50, .length = 3},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 2},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 2},
  [31] = {.index = 61, .length = 3},
  [32] = {.index = 64, .length = 3},
  [33] = {.index = 67, .length = 3},
  [34] = {.index = 70, .length = 3},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 4},
  [37] = {.index = 80, .length = 3},
  [38] = {.index = 83, .length = 3},
  [39] = {.index = 86, .length = 3},
  [40] = {.index = 89, .length = 2},
  [41] = {.index = 91, .length = 3},
  [42] = {.index = 94, .length = 2},
  [43] = {.index = 96, .length = 3},
  [44] = {.index = 99, .length = 4},
  [45] = {.index = 103, .length = 4},
  [46] = {.index = 107, .length = 4},
  [47] = {.index = 111, .length = 4},
  [48] = {.index = 115, .length = 1},
  [49] = {.index = 116, .length = 5},
  [50] = {.index = 121, .length = 5},
  [51] = {.index = 126, .length = 4},
  [52] = {.index = 130, .length = 4},
  [53] = {.index = 134, .length = 1},
  [54] = {.index = 135, .length = 1},
  [55] = {.index = 136, .length = 5},
  [56] = {.index = 141, .length = 5},
  [57] = {.index = 146, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_rule_name, 0},
  [2] =
    {field_numerators, 0},
  [3] =
    {field_from, 3},
  [4] =
    {field_meta_name, 0},
  [5] =
    {field_numerators, 0},
    {field_numerators, 1},
  [7] =
    {field_denominators, 1},
    {field_numerators, 0},
  [9] =
    {field_body, 5},
    {field_rule_name, 3},
  [11] =
    {field_from, 3},
    {field_into, 4, .inherited = true},
  [13] =
    {field_from, 3},
    {field_rules, 4},
  [15] =
    {field_m_name, 0},
  [16] =
    {field_meta_name, 0},
    {field_meta_value, 2},
  [18] =
    {field_denominators, 2},
    {field_numerators, 0},
    {field_numerators, 1},
  [21] =
    {field_into, 2},
  [22] =
    {field_from, 3},
    {field_into, 4, .inherited = true},
    {field_rules, 5},
  [25] =
    {field_except, 3, .inherited = true},
    {field_in, 3, .inherited = true},
    {field_m_name, 0},
    {field_ref, 3, .inherited = true},
  [29] =
    {field_name, 3, .inherited = true},
  [30] =
    {field_except, 0, .inherited = true},
    {field_except, 1, .inherited = true},
    {field_in, 0, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 0, .inherited = true},
    {field_ref, 1, .inherited = true},
  [36] =
    {field_name, 2},
  [37] =
    {field_name, 3, .inherited = true},
    {field_source, 4, .inherited = true},
  [39] =
    {field_name, 3, .inherited = true},
    {field_url, 4, .inherited = true},
  [41] =
    {field_into, 2},
    {field_into, 3},
    {field_into, 4},
  [44] =
    {field_rule_name, 0},
  [45] =
    {field_except, 1, .inherited = true},
    {field_in, 1, .inherited = true},
    {field_ref, 1, .inherited = true},
  [48] =
    {field_source, 2},
  [49] =
    {field_url, 2},
  [50] =
    {field_name, 3, .inherited = true},
    {field_source, 4, .inherited = true},
    {field_url, 5, .inherited = true},
  [53] =
    {field_ref, 2},
    {field_ref, 3},
  [55] =
    {field_m_name, 0},
    {field_options, 5},
  [57] =
    {field_from, 5},
    {field_m_name, 0},
  [59] =
    {field_m_name, 0},
    {field_to, 5},
  [61] =
    {field_name, 2},
    {field_name, 3},
    {field_name, 4},
  [64] =
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [67] =
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
  [70] =
    {field_source, 2},
    {field_source, 3},
    {field_source, 4},
  [73] =
    {field_url, 2},
    {field_url, 3},
    {field_url, 4},
  [76] =
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [80] =
    {field_in, 6},
    {field_ref, 2},
    {field_ref, 3},
  [83] =
    {field_except, 6},
    {field_ref, 2},
    {field_ref, 3},
  [86] =
    {field_m_name, 0},
    {field_options, 8},
    {field_required, 5},
  [89] =
    {field_condition, 2},
    {field_consequence, 5},
  [91] =
    {field_from, 5},
    {field_m_name, 0},
    {field_to, 8},
  [94] =
    {field_ceiling, 0, .inherited = true},
    {field_ceiling, 1, .inherited = true},
  [96] =
    {field_assiette, 5},
    {field_ceiling, 9, .inherited = true},
    {field_m_name, 0},
  [99] =
    {field_in, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [103] =
    {field_except, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [107] =
    {field_from, 5},
    {field_m_name, 0},
    {field_unit, 8},
    {field_unit, 9},
  [111] =
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 8},
    {field_unit, 9},
  [115] =
    {field_ceiling, 1, .inherited = true},
  [116] =
    {field_from, 5},
    {field_m_name, 0},
    {field_unit, 8},
    {field_unit, 9},
    {field_unit, 10},
  [121] =
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 8},
    {field_unit, 9},
    {field_unit, 10},
  [126] =
    {field_except, 9},
    {field_in, 6},
    {field_ref, 2},
    {field_ref, 3},
  [130] =
    {field_assiette, 5},
    {field_ceiling, 12, .inherited = true},
    {field_m_name, 0},
    {field_multiplier, 8},
  [134] =
    {field_ceiling, 2},
  [135] =
    {field_ceiling, 3},
  [136] =
    {field_except, 10},
    {field_in, 7},
    {field_ref, 2},
    {field_ref, 3},
    {field_ref, 4},
  [141] =
    {field_from, 5},
    {field_m_name, 0},
    {field_to, 8},
    {field_unit, 11},
    {field_unit, 12},
  [146] =
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
  [7] = 6,
  [8] = 6,
  [9] = 6,
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
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 30,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 41,
  [47] = 40,
  [48] = 42,
  [49] = 42,
  [50] = 36,
  [51] = 44,
  [52] = 52,
  [53] = 45,
  [54] = 54,
  [55] = 52,
  [56] = 54,
  [57] = 36,
  [58] = 38,
  [59] = 44,
  [60] = 42,
  [61] = 61,
  [62] = 62,
  [63] = 45,
  [64] = 44,
  [65] = 45,
  [66] = 40,
  [67] = 41,
  [68] = 36,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [133] = 132,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 132,
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
  [150] = 135,
  [151] = 140,
  [152] = 139,
  [153] = 138,
  [154] = 154,
  [155] = 141,
  [156] = 135,
  [157] = 136,
  [158] = 140,
  [159] = 159,
  [160] = 139,
  [161] = 134,
  [162] = 136,
  [163] = 144,
  [164] = 148,
  [165] = 143,
  [166] = 166,
  [167] = 147,
  [168] = 168,
  [169] = 147,
  [170] = 145,
  [171] = 149,
  [172] = 142,
  [173] = 145,
  [174] = 142,
  [175] = 149,
  [176] = 143,
  [177] = 146,
  [178] = 178,
  [179] = 179,
  [180] = 138,
  [181] = 181,
  [182] = 182,
  [183] = 141,
  [184] = 184,
  [185] = 185,
  [186] = 134,
  [187] = 144,
  [188] = 148,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 191,
  [193] = 159,
  [194] = 194,
  [195] = 191,
  [196] = 194,
  [197] = 159,
  [198] = 189,
  [199] = 146,
  [200] = 190,
  [201] = 190,
  [202] = 202,
  [203] = 189,
  [204] = 194,
  [205] = 205,
  [206] = 166,
  [207] = 179,
  [208] = 154,
  [209] = 178,
  [210] = 210,
  [211] = 178,
  [212] = 154,
  [213] = 184,
  [214] = 179,
  [215] = 181,
  [216] = 182,
  [217] = 184,
  [218] = 182,
  [219] = 219,
  [220] = 205,
  [221] = 181,
  [222] = 185,
  [223] = 181,
  [224] = 179,
  [225] = 225,
  [226] = 166,
  [227] = 168,
  [228] = 168,
  [229] = 229,
  [230] = 185,
  [231] = 205,
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
  [243] = 210,
  [244] = 202,
  [245] = 245,
  [246] = 219,
  [247] = 247,
  [248] = 219,
  [249] = 242,
  [250] = 225,
  [251] = 210,
  [252] = 252,
  [253] = 253,
  [254] = 225,
  [255] = 255,
  [256] = 245,
  [257] = 242,
  [258] = 258,
  [259] = 245,
  [260] = 260,
  [261] = 261,
  [262] = 255,
  [263] = 263,
  [264] = 252,
  [265] = 261,
  [266] = 242,
  [267] = 263,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 253,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 274,
  [276] = 258,
  [277] = 245,
  [278] = 269,
  [279] = 253,
  [280] = 270,
  [281] = 268,
  [282] = 282,
  [283] = 283,
  [284] = 263,
  [285] = 285,
  [286] = 272,
  [287] = 261,
  [288] = 288,
  [289] = 252,
  [290] = 263,
  [291] = 291,
  [292] = 253,
  [293] = 202,
  [294] = 255,
  [295] = 255,
  [296] = 261,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 298,
  [304] = 304,
  [305] = 305,
  [306] = 118,
  [307] = 307,
  [308] = 90,
  [309] = 309,
  [310] = 81,
  [311] = 311,
  [312] = 109,
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
  [334] = 140,
  [335] = 335,
  [336] = 139,
  [337] = 139,
  [338] = 140,
  [339] = 135,
  [340] = 136,
  [341] = 136,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 135,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 148,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 355,
  [361] = 355,
  [362] = 362,
  [363] = 355,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 355,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 143,
  [375] = 149,
  [376] = 142,
  [377] = 367,
  [378] = 145,
  [379] = 147,
  [380] = 144,
  [381] = 143,
  [382] = 148,
  [383] = 383,
  [384] = 149,
  [385] = 142,
  [386] = 367,
  [387] = 145,
  [388] = 147,
  [389] = 144,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 367,
  [397] = 397,
  [398] = 398,
  [399] = 366,
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
  [411] = 397,
  [412] = 412,
  [413] = 413,
  [414] = 395,
  [415] = 368,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 367,
  [421] = 421,
  [422] = 422,
  [423] = 366,
  [424] = 364,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 357,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 354,
  [436] = 436,
  [437] = 437,
  [438] = 353,
  [439] = 439,
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
  [450] = 450,
  [451] = 447,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 159,
  [463] = 463,
  [464] = 457,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 118,
  [469] = 90,
  [470] = 81,
  [471] = 109,
  [472] = 472,
  [473] = 473,
  [474] = 159,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 457,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 118,
  [485] = 485,
  [486] = 486,
  [487] = 90,
  [488] = 488,
  [489] = 489,
  [490] = 81,
  [491] = 109,
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
  [503] = 457,
  [504] = 504,
  [505] = 457,
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
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 546,
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
  [626] = 617,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 534,
  [631] = 573,
  [632] = 632,
  [633] = 633,
  [634] = 614,
  [635] = 625,
  [636] = 636,
  [637] = 497,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 534,
  [643] = 573,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 534,
  [650] = 573,
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
  [665] = 538,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 538,
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
  [684] = 618,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 614,
  [691] = 678,
  [692] = 652,
  [693] = 693,
  [694] = 694,
  [695] = 616,
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
      if (eof) ADVANCE(114);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == '|') ADVANCE(738);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '0') ADVANCE(714);
      if (lookahead == '1') ADVANCE(710);
      if (lookahead == '2') ADVANCE(712);
      if (lookahead == '3') ADVANCE(709);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'b') ADVANCE(651);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'g') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'q') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(541);
      if (lookahead == 'v') ADVANCE(648);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(672);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '0') ADVANCE(714);
      if (lookahead == '1') ADVANCE(710);
      if (lookahead == '2') ADVANCE(712);
      if (lookahead == '3') ADVANCE(709);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'b') ADVANCE(651);
      if (lookahead == 'c') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'g') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'q') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(541);
      if (lookahead == 'v') ADVANCE(648);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(697);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(740);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(698);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(694);
      if (lookahead == ':') ADVANCE(741);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(695);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ':') ADVANCE(739);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == '|') ADVANCE(738);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(372);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == '|') ADVANCE(738);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(258);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(258);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(718);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(718);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(722);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == 'u') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(391);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(391);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == ':') ADVANCE(742);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(697);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(693);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(693);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(722);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(694);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == ':') ADVANCE(744);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\'') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(46);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(50);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '1') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(43);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == ':') ADVANCE(739);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ':') ADVANCE(739);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == ':') ADVANCE(739);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(739);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(568);
      if (sym_name_character_set_1(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(664);
      if (sym_name_character_set_1(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(574);
      if (sym_name_character_set_1(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(504);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(485);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(572);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(665);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(461);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'p') ADVANCE(566);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(655);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(436);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(634);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(592);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(666);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(496);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(739);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(739);
      if (sym_name_character_set_2(lookahead)) ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(302);
      if (sym_name_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(407);
      if (sym_name_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(311);
      if (sym_name_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(233);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(211);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(309);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(409);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(186);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(300);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(200);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(398);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(158);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(378);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(331);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(410);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(222);
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 105:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
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
      if (sym_name_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 112:
      if (sym_name_character_set_2(lookahead)) ADVANCE(722);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(721);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '2') ADVANCE(705);
      if (lookahead == '3') ADVANCE(702);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(258);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(416);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(697);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(740);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(757);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(694);
      if (lookahead == ':') ADVANCE(741);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(757);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_m_unary_name);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_m_array_name);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_m_baru00e8me_like_name);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(724);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_4(lookahead)) ADVANCE(416);
      if (lookahead == 'b') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_5(lookahead)) ADVANCE(416);
      if (lookahead == 'b') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_6(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_7(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_8(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_8(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_9(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_9(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_10(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_11(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 233) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_12(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_13(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(414);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_14(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_15(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_16(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_17(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_18(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_19(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 'x') ADVANCE(314);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(416);
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(416);
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_20(lookahead)) ADVANCE(416);
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_21(lookahead)) ADVANCE(416);
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_22(lookahead)) ADVANCE(416);
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_23(lookahead)) ADVANCE(416);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(308);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_24(lookahead)) ADVANCE(416);
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_25(lookahead)) ADVANCE(416);
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_26(lookahead)) ADVANCE(416);
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_27(lookahead)) ADVANCE(416);
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_28(lookahead)) ADVANCE(416);
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(686);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_29(lookahead)) ADVANCE(416);
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_30(lookahead)) ADVANCE(416);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_31(lookahead)) ADVANCE(416);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(359);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_32(lookahead)) ADVANCE(416);
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_33(lookahead)) ADVANCE(416);
      if (lookahead == 'q') ADVANCE(381);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_34(lookahead)) ADVANCE(416);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_35(lookahead)) ADVANCE(416);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_36(lookahead)) ADVANCE(416);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_37(lookahead)) ADVANCE(416);
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(416);
      if (lookahead == 'v') ADVANCE(405);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_38(lookahead)) ADVANCE(416);
      if (lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_39(lookahead)) ADVANCE(416);
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_39(lookahead)) ADVANCE(416);
      if (lookahead == 'x') ADVANCE(685);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_39(lookahead)) ADVANCE(416);
      if (lookahead == 'x') ADVANCE(363);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_39(lookahead)) ADVANCE(416);
      if (lookahead == 'x') ADVANCE(366);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_40(lookahead)) ADVANCE(416);
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_41(lookahead)) ADVANCE(416);
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_42(lookahead)) ADVANCE(416);
      if (lookahead == 232) ADVANCE(264);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(127);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(735);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(217);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(728);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(216);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(219);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(327);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(183);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(333);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(334);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_43(lookahead)) ADVANCE(416);
      if (lookahead == 233) ADVANCE(336);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(98);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(84);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(86);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(91);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(93);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(88);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(85);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(97);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(100);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(104);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(103);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_4(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'b') ADVANCE(652);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 'v') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_44(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(617);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_8(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_9(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_10(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_11(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 233) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_12(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_13(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_14(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_15(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_16(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_18(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_19(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 'x') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_20(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'b') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_20(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_20(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_21(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_22(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_22(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_22(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_22(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_22(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_23(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_24(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_24(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_24(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_24(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_25(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_26(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_27(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_28(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_29(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'm') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_30(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_31(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_32(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_33(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'q') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_34(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_35(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_36(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_37(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_38(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'v') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_38(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'v') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_39(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'x') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_39(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'x') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_39(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'x') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_39(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'x') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_40(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_41(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_42(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 232) ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_43(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == 233) ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(80);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(69);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(59);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(61);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(65);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(67);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(71);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(63);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(60);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(68);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(70);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(73);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(72);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(102);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(92);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(89);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(66);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(64);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(94);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(87);
      if (sym_name_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(62);
      if (sym_name_character_set_3(lookahead)) ADVANCE(672);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(694);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(696);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(697);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(699);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(706);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(704);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(708);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(713);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(711);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(715);
      if (lookahead == ':') ADVANCE(739);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(81);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(718);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_3(lookahead)) ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_importer);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_formule);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_avec);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_remplace);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_une_possibilitu00e9);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_texte);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_plafond);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_inversion_numu00e9rique);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_contexte);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_variations);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_duru00e9e);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_unitu00e9);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_meta_name);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      if (lookahead == '-') ADVANCE(737);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(698);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(695);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(40);
      if (lookahead != 0) ADVANCE(754);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(753);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(753);
      if (lookahead == ':') ADVANCE(757);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == ':') ADVANCE(743);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(748);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '|') ADVANCE(738);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(756);
      if (lookahead == ':') ADVANCE(745);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(40);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(40);
      if (lookahead != 0) ADVANCE(754);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(757);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(757);
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
  [1] = {.lex_state = 113, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 28, .external_lex_state = 2},
  [5] = {.lex_state = 29, .external_lex_state = 2},
  [6] = {.lex_state = 29, .external_lex_state = 2},
  [7] = {.lex_state = 29, .external_lex_state = 2},
  [8] = {.lex_state = 29, .external_lex_state = 2},
  [9] = {.lex_state = 29, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 113, .external_lex_state = 4},
  [14] = {.lex_state = 113, .external_lex_state = 4},
  [15] = {.lex_state = 113, .external_lex_state = 4},
  [16] = {.lex_state = 113, .external_lex_state = 4},
  [17] = {.lex_state = 113, .external_lex_state = 5},
  [18] = {.lex_state = 113, .external_lex_state = 5},
  [19] = {.lex_state = 113, .external_lex_state = 5},
  [20] = {.lex_state = 113, .external_lex_state = 5},
  [21] = {.lex_state = 113, .external_lex_state = 5},
  [22] = {.lex_state = 113, .external_lex_state = 5},
  [23] = {.lex_state = 113, .external_lex_state = 5},
  [24] = {.lex_state = 113, .external_lex_state = 5},
  [25] = {.lex_state = 113, .external_lex_state = 5},
  [26] = {.lex_state = 113, .external_lex_state = 5},
  [27] = {.lex_state = 113, .external_lex_state = 5},
  [28] = {.lex_state = 113, .external_lex_state = 5},
  [29] = {.lex_state = 113, .external_lex_state = 5},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 2, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 3},
  [34] = {.lex_state = 2, .external_lex_state = 3},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 33, .external_lex_state = 2},
  [37] = {.lex_state = 33, .external_lex_state = 2},
  [38] = {.lex_state = 33, .external_lex_state = 2},
  [39] = {.lex_state = 33, .external_lex_state = 2},
  [40] = {.lex_state = 33, .external_lex_state = 2},
  [41] = {.lex_state = 33, .external_lex_state = 2},
  [42] = {.lex_state = 33, .external_lex_state = 2},
  [43] = {.lex_state = 33, .external_lex_state = 2},
  [44] = {.lex_state = 33, .external_lex_state = 2},
  [45] = {.lex_state = 33, .external_lex_state = 2},
  [46] = {.lex_state = 33, .external_lex_state = 2},
  [47] = {.lex_state = 33, .external_lex_state = 2},
  [48] = {.lex_state = 33, .external_lex_state = 2},
  [49] = {.lex_state = 33, .external_lex_state = 2},
  [50] = {.lex_state = 33, .external_lex_state = 2},
  [51] = {.lex_state = 33, .external_lex_state = 2},
  [52] = {.lex_state = 33, .external_lex_state = 2},
  [53] = {.lex_state = 33, .external_lex_state = 2},
  [54] = {.lex_state = 33, .external_lex_state = 2},
  [55] = {.lex_state = 33, .external_lex_state = 2},
  [56] = {.lex_state = 33, .external_lex_state = 2},
  [57] = {.lex_state = 33, .external_lex_state = 2},
  [58] = {.lex_state = 33, .external_lex_state = 2},
  [59] = {.lex_state = 33, .external_lex_state = 2},
  [60] = {.lex_state = 33, .external_lex_state = 2},
  [61] = {.lex_state = 33, .external_lex_state = 2},
  [62] = {.lex_state = 33, .external_lex_state = 2},
  [63] = {.lex_state = 33, .external_lex_state = 2},
  [64] = {.lex_state = 33, .external_lex_state = 2},
  [65] = {.lex_state = 33, .external_lex_state = 2},
  [66] = {.lex_state = 33, .external_lex_state = 2},
  [67] = {.lex_state = 33, .external_lex_state = 2},
  [68] = {.lex_state = 33, .external_lex_state = 2},
  [69] = {.lex_state = 2, .external_lex_state = 6},
  [70] = {.lex_state = 2, .external_lex_state = 6},
  [71] = {.lex_state = 2, .external_lex_state = 6},
  [72] = {.lex_state = 2, .external_lex_state = 6},
  [73] = {.lex_state = 2, .external_lex_state = 6},
  [74] = {.lex_state = 2, .external_lex_state = 6},
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
  [132] = {.lex_state = 22, .external_lex_state = 2},
  [133] = {.lex_state = 22, .external_lex_state = 7},
  [134] = {.lex_state = 24, .external_lex_state = 2},
  [135] = {.lex_state = 27, .external_lex_state = 2},
  [136] = {.lex_state = 27, .external_lex_state = 2},
  [137] = {.lex_state = 22, .external_lex_state = 3},
  [138] = {.lex_state = 24, .external_lex_state = 2},
  [139] = {.lex_state = 27, .external_lex_state = 2},
  [140] = {.lex_state = 27, .external_lex_state = 2},
  [141] = {.lex_state = 24, .external_lex_state = 2},
  [142] = {.lex_state = 24, .external_lex_state = 2},
  [143] = {.lex_state = 27, .external_lex_state = 2},
  [144] = {.lex_state = 24, .external_lex_state = 2},
  [145] = {.lex_state = 27, .external_lex_state = 2},
  [146] = {.lex_state = 24, .external_lex_state = 2},
  [147] = {.lex_state = 24, .external_lex_state = 2},
  [148] = {.lex_state = 24, .external_lex_state = 2},
  [149] = {.lex_state = 24, .external_lex_state = 2},
  [150] = {.lex_state = 27, .external_lex_state = 3},
  [151] = {.lex_state = 27, .external_lex_state = 3},
  [152] = {.lex_state = 27, .external_lex_state = 3},
  [153] = {.lex_state = 24, .external_lex_state = 3},
  [154] = {.lex_state = 24, .external_lex_state = 2},
  [155] = {.lex_state = 24, .external_lex_state = 3},
  [156] = {.lex_state = 27, .external_lex_state = 7},
  [157] = {.lex_state = 27, .external_lex_state = 3},
  [158] = {.lex_state = 27, .external_lex_state = 7},
  [159] = {.lex_state = 24, .external_lex_state = 2},
  [160] = {.lex_state = 27, .external_lex_state = 7},
  [161] = {.lex_state = 24, .external_lex_state = 3},
  [162] = {.lex_state = 27, .external_lex_state = 7},
  [163] = {.lex_state = 24, .external_lex_state = 3},
  [164] = {.lex_state = 24, .external_lex_state = 3},
  [165] = {.lex_state = 27, .external_lex_state = 7},
  [166] = {.lex_state = 24, .external_lex_state = 2},
  [167] = {.lex_state = 24, .external_lex_state = 3},
  [168] = {.lex_state = 24, .external_lex_state = 2},
  [169] = {.lex_state = 24, .external_lex_state = 7},
  [170] = {.lex_state = 27, .external_lex_state = 7},
  [171] = {.lex_state = 24, .external_lex_state = 7},
  [172] = {.lex_state = 24, .external_lex_state = 7},
  [173] = {.lex_state = 27, .external_lex_state = 3},
  [174] = {.lex_state = 24, .external_lex_state = 3},
  [175] = {.lex_state = 24, .external_lex_state = 3},
  [176] = {.lex_state = 27, .external_lex_state = 3},
  [177] = {.lex_state = 24, .external_lex_state = 3},
  [178] = {.lex_state = 24, .external_lex_state = 2},
  [179] = {.lex_state = 24, .external_lex_state = 2},
  [180] = {.lex_state = 24, .external_lex_state = 7},
  [181] = {.lex_state = 24, .external_lex_state = 2},
  [182] = {.lex_state = 24, .external_lex_state = 2},
  [183] = {.lex_state = 24, .external_lex_state = 7},
  [184] = {.lex_state = 24, .external_lex_state = 2},
  [185] = {.lex_state = 24, .external_lex_state = 2},
  [186] = {.lex_state = 24, .external_lex_state = 7},
  [187] = {.lex_state = 24, .external_lex_state = 7},
  [188] = {.lex_state = 24, .external_lex_state = 7},
  [189] = {.lex_state = 113, .external_lex_state = 2},
  [190] = {.lex_state = 113, .external_lex_state = 2},
  [191] = {.lex_state = 113, .external_lex_state = 2},
  [192] = {.lex_state = 113, .external_lex_state = 2},
  [193] = {.lex_state = 24, .external_lex_state = 7},
  [194] = {.lex_state = 113, .external_lex_state = 2},
  [195] = {.lex_state = 113, .external_lex_state = 2},
  [196] = {.lex_state = 113, .external_lex_state = 2},
  [197] = {.lex_state = 24, .external_lex_state = 3},
  [198] = {.lex_state = 113, .external_lex_state = 2},
  [199] = {.lex_state = 24, .external_lex_state = 7},
  [200] = {.lex_state = 113, .external_lex_state = 2},
  [201] = {.lex_state = 113, .external_lex_state = 2},
  [202] = {.lex_state = 113, .external_lex_state = 2},
  [203] = {.lex_state = 113, .external_lex_state = 2},
  [204] = {.lex_state = 113, .external_lex_state = 2},
  [205] = {.lex_state = 24, .external_lex_state = 2},
  [206] = {.lex_state = 24, .external_lex_state = 7},
  [207] = {.lex_state = 24, .external_lex_state = 7},
  [208] = {.lex_state = 24, .external_lex_state = 7},
  [209] = {.lex_state = 24, .external_lex_state = 7},
  [210] = {.lex_state = 113, .external_lex_state = 2},
  [211] = {.lex_state = 24, .external_lex_state = 3},
  [212] = {.lex_state = 24, .external_lex_state = 3},
  [213] = {.lex_state = 24, .external_lex_state = 7},
  [214] = {.lex_state = 24, .external_lex_state = 3},
  [215] = {.lex_state = 24, .external_lex_state = 3},
  [216] = {.lex_state = 24, .external_lex_state = 3},
  [217] = {.lex_state = 24, .external_lex_state = 3},
  [218] = {.lex_state = 24, .external_lex_state = 7},
  [219] = {.lex_state = 113, .external_lex_state = 2},
  [220] = {.lex_state = 24, .external_lex_state = 2},
  [221] = {.lex_state = 24, .external_lex_state = 2},
  [222] = {.lex_state = 24, .external_lex_state = 7},
  [223] = {.lex_state = 24, .external_lex_state = 7},
  [224] = {.lex_state = 24, .external_lex_state = 2},
  [225] = {.lex_state = 113, .external_lex_state = 2},
  [226] = {.lex_state = 24, .external_lex_state = 3},
  [227] = {.lex_state = 24, .external_lex_state = 3},
  [228] = {.lex_state = 24, .external_lex_state = 7},
  [229] = {.lex_state = 113, .external_lex_state = 2},
  [230] = {.lex_state = 24, .external_lex_state = 3},
  [231] = {.lex_state = 24, .external_lex_state = 2},
  [232] = {.lex_state = 751, .external_lex_state = 4},
  [233] = {.lex_state = 113, .external_lex_state = 5},
  [234] = {.lex_state = 113, .external_lex_state = 5},
  [235] = {.lex_state = 113, .external_lex_state = 5},
  [236] = {.lex_state = 751, .external_lex_state = 4},
  [237] = {.lex_state = 113, .external_lex_state = 5},
  [238] = {.lex_state = 751, .external_lex_state = 4},
  [239] = {.lex_state = 113, .external_lex_state = 5},
  [240] = {.lex_state = 113, .external_lex_state = 5},
  [241] = {.lex_state = 113, .external_lex_state = 5},
  [242] = {.lex_state = 113, .external_lex_state = 3},
  [243] = {.lex_state = 113, .external_lex_state = 3},
  [244] = {.lex_state = 113, .external_lex_state = 7},
  [245] = {.lex_state = 113, .external_lex_state = 7},
  [246] = {.lex_state = 113, .external_lex_state = 3},
  [247] = {.lex_state = 113, .external_lex_state = 3},
  [248] = {.lex_state = 113, .external_lex_state = 7},
  [249] = {.lex_state = 113, .external_lex_state = 3},
  [250] = {.lex_state = 113, .external_lex_state = 7},
  [251] = {.lex_state = 113, .external_lex_state = 7},
  [252] = {.lex_state = 113, .external_lex_state = 2},
  [253] = {.lex_state = 113, .external_lex_state = 2},
  [254] = {.lex_state = 113, .external_lex_state = 3},
  [255] = {.lex_state = 113, .external_lex_state = 2},
  [256] = {.lex_state = 113, .external_lex_state = 7},
  [257] = {.lex_state = 113, .external_lex_state = 3},
  [258] = {.lex_state = 113, .external_lex_state = 7},
  [259] = {.lex_state = 113, .external_lex_state = 7},
  [260] = {.lex_state = 113, .external_lex_state = 2},
  [261] = {.lex_state = 113, .external_lex_state = 2},
  [262] = {.lex_state = 113, .external_lex_state = 2},
  [263] = {.lex_state = 113, .external_lex_state = 2},
  [264] = {.lex_state = 113, .external_lex_state = 2},
  [265] = {.lex_state = 113, .external_lex_state = 2},
  [266] = {.lex_state = 113, .external_lex_state = 3},
  [267] = {.lex_state = 113, .external_lex_state = 2},
  [268] = {.lex_state = 113, .external_lex_state = 2},
  [269] = {.lex_state = 113, .external_lex_state = 2},
  [270] = {.lex_state = 113, .external_lex_state = 2},
  [271] = {.lex_state = 113, .external_lex_state = 2},
  [272] = {.lex_state = 113, .external_lex_state = 2},
  [273] = {.lex_state = 113, .external_lex_state = 2},
  [274] = {.lex_state = 113, .external_lex_state = 3},
  [275] = {.lex_state = 113, .external_lex_state = 3},
  [276] = {.lex_state = 113, .external_lex_state = 7},
  [277] = {.lex_state = 113, .external_lex_state = 7},
  [278] = {.lex_state = 113, .external_lex_state = 2},
  [279] = {.lex_state = 113, .external_lex_state = 2},
  [280] = {.lex_state = 113, .external_lex_state = 2},
  [281] = {.lex_state = 113, .external_lex_state = 2},
  [282] = {.lex_state = 113, .external_lex_state = 2},
  [283] = {.lex_state = 113, .external_lex_state = 2},
  [284] = {.lex_state = 113, .external_lex_state = 2},
  [285] = {.lex_state = 113, .external_lex_state = 2},
  [286] = {.lex_state = 113, .external_lex_state = 2},
  [287] = {.lex_state = 113, .external_lex_state = 2},
  [288] = {.lex_state = 113, .external_lex_state = 2},
  [289] = {.lex_state = 113, .external_lex_state = 2},
  [290] = {.lex_state = 113, .external_lex_state = 2},
  [291] = {.lex_state = 113, .external_lex_state = 8},
  [292] = {.lex_state = 113, .external_lex_state = 2},
  [293] = {.lex_state = 113, .external_lex_state = 3},
  [294] = {.lex_state = 113, .external_lex_state = 2},
  [295] = {.lex_state = 113, .external_lex_state = 2},
  [296] = {.lex_state = 113, .external_lex_state = 2},
  [297] = {.lex_state = 113, .external_lex_state = 2},
  [298] = {.lex_state = 113, .external_lex_state = 3},
  [299] = {.lex_state = 113, .external_lex_state = 4},
  [300] = {.lex_state = 113, .external_lex_state = 2},
  [301] = {.lex_state = 113, .external_lex_state = 2},
  [302] = {.lex_state = 113, .external_lex_state = 4},
  [303] = {.lex_state = 113, .external_lex_state = 2},
  [304] = {.lex_state = 113, .external_lex_state = 4},
  [305] = {.lex_state = 113, .external_lex_state = 2},
  [306] = {.lex_state = 24, .external_lex_state = 2},
  [307] = {.lex_state = 113, .external_lex_state = 3},
  [308] = {.lex_state = 24, .external_lex_state = 2},
  [309] = {.lex_state = 113, .external_lex_state = 4},
  [310] = {.lex_state = 24, .external_lex_state = 2},
  [311] = {.lex_state = 113, .external_lex_state = 2},
  [312] = {.lex_state = 24, .external_lex_state = 2},
  [313] = {.lex_state = 113, .external_lex_state = 4},
  [314] = {.lex_state = 22, .external_lex_state = 5},
  [315] = {.lex_state = 113, .external_lex_state = 4},
  [316] = {.lex_state = 24, .external_lex_state = 2},
  [317] = {.lex_state = 113, .external_lex_state = 4},
  [318] = {.lex_state = 24, .external_lex_state = 2},
  [319] = {.lex_state = 22, .external_lex_state = 2},
  [320] = {.lex_state = 24, .external_lex_state = 2},
  [321] = {.lex_state = 113, .external_lex_state = 3},
  [322] = {.lex_state = 751, .external_lex_state = 5},
  [323] = {.lex_state = 113, .external_lex_state = 3},
  [324] = {.lex_state = 113, .external_lex_state = 2},
  [325] = {.lex_state = 24, .external_lex_state = 2},
  [326] = {.lex_state = 113, .external_lex_state = 2},
  [327] = {.lex_state = 113, .external_lex_state = 2},
  [328] = {.lex_state = 24, .external_lex_state = 2},
  [329] = {.lex_state = 113, .external_lex_state = 8},
  [330] = {.lex_state = 113, .external_lex_state = 3},
  [331] = {.lex_state = 113, .external_lex_state = 8},
  [332] = {.lex_state = 113, .external_lex_state = 3},
  [333] = {.lex_state = 113, .external_lex_state = 2},
  [334] = {.lex_state = 113, .external_lex_state = 3},
  [335] = {.lex_state = 113, .external_lex_state = 2},
  [336] = {.lex_state = 113, .external_lex_state = 7},
  [337] = {.lex_state = 113, .external_lex_state = 3},
  [338] = {.lex_state = 113, .external_lex_state = 7},
  [339] = {.lex_state = 113, .external_lex_state = 3},
  [340] = {.lex_state = 113, .external_lex_state = 3},
  [341] = {.lex_state = 113, .external_lex_state = 7},
  [342] = {.lex_state = 113, .external_lex_state = 5},
  [343] = {.lex_state = 113, .external_lex_state = 2},
  [344] = {.lex_state = 113, .external_lex_state = 2},
  [345] = {.lex_state = 113, .external_lex_state = 2},
  [346] = {.lex_state = 113, .external_lex_state = 6},
  [347] = {.lex_state = 27, .external_lex_state = 3},
  [348] = {.lex_state = 113, .external_lex_state = 7},
  [349] = {.lex_state = 747, .external_lex_state = 2},
  [350] = {.lex_state = 113, .external_lex_state = 2},
  [351] = {.lex_state = 113, .external_lex_state = 2},
  [352] = {.lex_state = 113, .external_lex_state = 3},
  [353] = {.lex_state = 113, .external_lex_state = 2},
  [354] = {.lex_state = 113, .external_lex_state = 2},
  [355] = {.lex_state = 37, .external_lex_state = 2},
  [356] = {.lex_state = 113, .external_lex_state = 3},
  [357] = {.lex_state = 113, .external_lex_state = 2},
  [358] = {.lex_state = 113, .external_lex_state = 2},
  [359] = {.lex_state = 113, .external_lex_state = 3},
  [360] = {.lex_state = 37, .external_lex_state = 2},
  [361] = {.lex_state = 37, .external_lex_state = 2},
  [362] = {.lex_state = 113, .external_lex_state = 3},
  [363] = {.lex_state = 37, .external_lex_state = 2},
  [364] = {.lex_state = 113, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 4},
  [366] = {.lex_state = 24, .external_lex_state = 2},
  [367] = {.lex_state = 37, .external_lex_state = 2},
  [368] = {.lex_state = 113, .external_lex_state = 2},
  [369] = {.lex_state = 37, .external_lex_state = 2},
  [370] = {.lex_state = 749, .external_lex_state = 2},
  [371] = {.lex_state = 27, .external_lex_state = 3},
  [372] = {.lex_state = 113, .external_lex_state = 2},
  [373] = {.lex_state = 113, .external_lex_state = 2},
  [374] = {.lex_state = 113, .external_lex_state = 3},
  [375] = {.lex_state = 113, .external_lex_state = 3},
  [376] = {.lex_state = 113, .external_lex_state = 3},
  [377] = {.lex_state = 37, .external_lex_state = 2},
  [378] = {.lex_state = 113, .external_lex_state = 3},
  [379] = {.lex_state = 113, .external_lex_state = 3},
  [380] = {.lex_state = 113, .external_lex_state = 3},
  [381] = {.lex_state = 113, .external_lex_state = 7},
  [382] = {.lex_state = 113, .external_lex_state = 7},
  [383] = {.lex_state = 27, .external_lex_state = 3},
  [384] = {.lex_state = 113, .external_lex_state = 7},
  [385] = {.lex_state = 113, .external_lex_state = 7},
  [386] = {.lex_state = 37, .external_lex_state = 2},
  [387] = {.lex_state = 113, .external_lex_state = 7},
  [388] = {.lex_state = 113, .external_lex_state = 7},
  [389] = {.lex_state = 113, .external_lex_state = 7},
  [390] = {.lex_state = 27, .external_lex_state = 3},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 752, .external_lex_state = 3},
  [394] = {.lex_state = 8, .external_lex_state = 3},
  [395] = {.lex_state = 113, .external_lex_state = 2},
  [396] = {.lex_state = 37, .external_lex_state = 2},
  [397] = {.lex_state = 113, .external_lex_state = 2},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 24, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 113, .external_lex_state = 2},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 752, .external_lex_state = 3},
  [405] = {.lex_state = 27, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 6},
  [407] = {.lex_state = 8, .external_lex_state = 3},
  [408] = {.lex_state = 752, .external_lex_state = 3},
  [409] = {.lex_state = 749, .external_lex_state = 2},
  [410] = {.lex_state = 113, .external_lex_state = 3},
  [411] = {.lex_state = 113, .external_lex_state = 3},
  [412] = {.lex_state = 113, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 6},
  [414] = {.lex_state = 113, .external_lex_state = 3},
  [415] = {.lex_state = 113, .external_lex_state = 3},
  [416] = {.lex_state = 0, .external_lex_state = 6},
  [417] = {.lex_state = 113, .external_lex_state = 2},
  [418] = {.lex_state = 0, .external_lex_state = 6},
  [419] = {.lex_state = 0, .external_lex_state = 6},
  [420] = {.lex_state = 37, .external_lex_state = 2},
  [421] = {.lex_state = 113, .external_lex_state = 3},
  [422] = {.lex_state = 0, .external_lex_state = 4},
  [423] = {.lex_state = 24, .external_lex_state = 2},
  [424] = {.lex_state = 113, .external_lex_state = 3},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 113, .external_lex_state = 3},
  [428] = {.lex_state = 113, .external_lex_state = 3},
  [429] = {.lex_state = 749, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 0, .external_lex_state = 6},
  [432] = {.lex_state = 749, .external_lex_state = 2},
  [433] = {.lex_state = 113, .external_lex_state = 3},
  [434] = {.lex_state = 113, .external_lex_state = 3},
  [435] = {.lex_state = 113, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 113, .external_lex_state = 2},
  [438] = {.lex_state = 113, .external_lex_state = 3},
  [439] = {.lex_state = 27, .external_lex_state = 3},
  [440] = {.lex_state = 113, .external_lex_state = 2},
  [441] = {.lex_state = 113, .external_lex_state = 3},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 0, .external_lex_state = 6},
  [444] = {.lex_state = 0, .external_lex_state = 8},
  [445] = {.lex_state = 35, .external_lex_state = 3},
  [446] = {.lex_state = 35, .external_lex_state = 3},
  [447] = {.lex_state = 113, .external_lex_state = 2},
  [448] = {.lex_state = 113, .external_lex_state = 3},
  [449] = {.lex_state = 113, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 4},
  [451] = {.lex_state = 113, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 113, .external_lex_state = 3},
  [454] = {.lex_state = 0, .external_lex_state = 4},
  [455] = {.lex_state = 0, .external_lex_state = 4},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 37, .external_lex_state = 2},
  [458] = {.lex_state = 113, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 4},
  [460] = {.lex_state = 0, .external_lex_state = 8},
  [461] = {.lex_state = 113, .external_lex_state = 3},
  [462] = {.lex_state = 113, .external_lex_state = 3},
  [463] = {.lex_state = 0, .external_lex_state = 8},
  [464] = {.lex_state = 37, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 8},
  [466] = {.lex_state = 0, .external_lex_state = 8},
  [467] = {.lex_state = 113, .external_lex_state = 2},
  [468] = {.lex_state = 35, .external_lex_state = 3},
  [469] = {.lex_state = 35, .external_lex_state = 3},
  [470] = {.lex_state = 35, .external_lex_state = 3},
  [471] = {.lex_state = 35, .external_lex_state = 3},
  [472] = {.lex_state = 752, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 3},
  [474] = {.lex_state = 113, .external_lex_state = 7},
  [475] = {.lex_state = 0, .external_lex_state = 3},
  [476] = {.lex_state = 0, .external_lex_state = 8},
  [477] = {.lex_state = 0, .external_lex_state = 8},
  [478] = {.lex_state = 35, .external_lex_state = 3},
  [479] = {.lex_state = 35, .external_lex_state = 3},
  [480] = {.lex_state = 37, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 6},
  [482] = {.lex_state = 0, .external_lex_state = 8},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 113, .external_lex_state = 3},
  [485] = {.lex_state = 0, .external_lex_state = 6},
  [486] = {.lex_state = 113, .external_lex_state = 3},
  [487] = {.lex_state = 113, .external_lex_state = 3},
  [488] = {.lex_state = 0, .external_lex_state = 8},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 113, .external_lex_state = 3},
  [491] = {.lex_state = 113, .external_lex_state = 3},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 752, .external_lex_state = 2},
  [494] = {.lex_state = 113, .external_lex_state = 2},
  [495] = {.lex_state = 113, .external_lex_state = 3},
  [496] = {.lex_state = 0, .external_lex_state = 8},
  [497] = {.lex_state = 35, .external_lex_state = 3},
  [498] = {.lex_state = 0, .external_lex_state = 8},
  [499] = {.lex_state = 0, .external_lex_state = 3},
  [500] = {.lex_state = 113, .external_lex_state = 2},
  [501] = {.lex_state = 113, .external_lex_state = 3},
  [502] = {.lex_state = 113, .external_lex_state = 3},
  [503] = {.lex_state = 37, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 4},
  [505] = {.lex_state = 37, .external_lex_state = 2},
  [506] = {.lex_state = 752, .external_lex_state = 3},
  [507] = {.lex_state = 113, .external_lex_state = 3},
  [508] = {.lex_state = 8, .external_lex_state = 3},
  [509] = {.lex_state = 0, .external_lex_state = 8},
  [510] = {.lex_state = 113, .external_lex_state = 3},
  [511] = {.lex_state = 0, .external_lex_state = 8},
  [512] = {.lex_state = 752, .external_lex_state = 2},
  [513] = {.lex_state = 0, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 0, .external_lex_state = 3},
  [516] = {.lex_state = 0, .external_lex_state = 3},
  [517] = {.lex_state = 0, .external_lex_state = 3},
  [518] = {.lex_state = 0, .external_lex_state = 3},
  [519] = {.lex_state = 0, .external_lex_state = 2},
  [520] = {.lex_state = 0, .external_lex_state = 3},
  [521] = {.lex_state = 0, .external_lex_state = 3},
  [522] = {.lex_state = 0, .external_lex_state = 2},
  [523] = {.lex_state = 752, .external_lex_state = 2},
  [524] = {.lex_state = 752, .external_lex_state = 2},
  [525] = {.lex_state = 0, .external_lex_state = 3},
  [526] = {.lex_state = 0, .external_lex_state = 3},
  [527] = {.lex_state = 0, .external_lex_state = 2},
  [528] = {.lex_state = 0, .external_lex_state = 3},
  [529] = {.lex_state = 0, .external_lex_state = 3},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 3},
  [532] = {.lex_state = 0, .external_lex_state = 3},
  [533] = {.lex_state = 0, .external_lex_state = 3},
  [534] = {.lex_state = 0, .external_lex_state = 7},
  [535] = {.lex_state = 35, .external_lex_state = 2},
  [536] = {.lex_state = 0, .external_lex_state = 3},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 0, .external_lex_state = 3},
  [542] = {.lex_state = 0, .external_lex_state = 3},
  [543] = {.lex_state = 0, .external_lex_state = 2},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 3},
  [546] = {.lex_state = 0, .external_lex_state = 3},
  [547] = {.lex_state = 0, .external_lex_state = 3},
  [548] = {.lex_state = 0, .external_lex_state = 3},
  [549] = {.lex_state = 0, .external_lex_state = 2},
  [550] = {.lex_state = 0, .external_lex_state = 3},
  [551] = {.lex_state = 0, .external_lex_state = 3},
  [552] = {.lex_state = 0, .external_lex_state = 2},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 0, .external_lex_state = 2},
  [555] = {.lex_state = 113, .external_lex_state = 2},
  [556] = {.lex_state = 0, .external_lex_state = 2},
  [557] = {.lex_state = 0, .external_lex_state = 7},
  [558] = {.lex_state = 0, .external_lex_state = 3},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 3},
  [562] = {.lex_state = 0, .external_lex_state = 3},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 3},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 3},
  [567] = {.lex_state = 0, .external_lex_state = 7},
  [568] = {.lex_state = 0, .external_lex_state = 2},
  [569] = {.lex_state = 752, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 3},
  [571] = {.lex_state = 0, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 3},
  [573] = {.lex_state = 0, .external_lex_state = 3},
  [574] = {.lex_state = 0, .external_lex_state = 2},
  [575] = {.lex_state = 0, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 3},
  [577] = {.lex_state = 0, .external_lex_state = 7},
  [578] = {.lex_state = 113, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 3},
  [580] = {.lex_state = 0, .external_lex_state = 7},
  [581] = {.lex_state = 0, .external_lex_state = 7},
  [582] = {.lex_state = 0, .external_lex_state = 3},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 3},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 7},
  [587] = {.lex_state = 0, .external_lex_state = 3},
  [588] = {.lex_state = 0, .external_lex_state = 7},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 3},
  [591] = {.lex_state = 0, .external_lex_state = 7},
  [592] = {.lex_state = 0, .external_lex_state = 3},
  [593] = {.lex_state = 0, .external_lex_state = 3},
  [594] = {.lex_state = 0, .external_lex_state = 3},
  [595] = {.lex_state = 0, .external_lex_state = 3},
  [596] = {.lex_state = 0, .external_lex_state = 3},
  [597] = {.lex_state = 0, .external_lex_state = 3},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 0, .external_lex_state = 7},
  [600] = {.lex_state = 0, .external_lex_state = 7},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 7},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 0, .external_lex_state = 3},
  [606] = {.lex_state = 113, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 3},
  [609] = {.lex_state = 0, .external_lex_state = 3},
  [610] = {.lex_state = 0, .external_lex_state = 3},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 113, .external_lex_state = 2},
  [614] = {.lex_state = 113, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 3},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 3},
  [620] = {.lex_state = 0, .external_lex_state = 3},
  [621] = {.lex_state = 0, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 3},
  [623] = {.lex_state = 0, .external_lex_state = 2},
  [624] = {.lex_state = 0, .external_lex_state = 2},
  [625] = {.lex_state = 0, .external_lex_state = 7},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 752, .external_lex_state = 2},
  [628] = {.lex_state = 0, .external_lex_state = 3},
  [629] = {.lex_state = 0, .external_lex_state = 3},
  [630] = {.lex_state = 0, .external_lex_state = 7},
  [631] = {.lex_state = 0, .external_lex_state = 3},
  [632] = {.lex_state = 0, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 3},
  [634] = {.lex_state = 113, .external_lex_state = 2},
  [635] = {.lex_state = 0, .external_lex_state = 7},
  [636] = {.lex_state = 0, .external_lex_state = 2},
  [637] = {.lex_state = 35, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 2},
  [639] = {.lex_state = 0, .external_lex_state = 9},
  [640] = {.lex_state = 0, .external_lex_state = 5},
  [641] = {.lex_state = 0, .external_lex_state = 5},
  [642] = {.lex_state = 0, .external_lex_state = 7},
  [643] = {.lex_state = 0, .external_lex_state = 3},
  [644] = {.lex_state = 0, .external_lex_state = 5},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 752, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 5},
  [648] = {.lex_state = 0, .external_lex_state = 5},
  [649] = {.lex_state = 0, .external_lex_state = 7},
  [650] = {.lex_state = 0, .external_lex_state = 3},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 2},
  [653] = {.lex_state = 0, .external_lex_state = 7},
  [654] = {.lex_state = 113, .external_lex_state = 2},
  [655] = {.lex_state = 0, .external_lex_state = 5},
  [656] = {.lex_state = 752, .external_lex_state = 2},
  [657] = {.lex_state = 0, .external_lex_state = 3},
  [658] = {.lex_state = 0, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 0, .external_lex_state = 2},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 5},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 3},
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
  [683] = {.lex_state = 0, .external_lex_state = 2},
  [684] = {.lex_state = 0, .external_lex_state = 2},
  [685] = {.lex_state = 0, .external_lex_state = 3},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 0, .external_lex_state = 3},
  [688] = {.lex_state = 752, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 5},
  [690] = {.lex_state = 113, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 2},
  [693] = {.lex_state = 0, .external_lex_state = 2},
  [694] = {.lex_state = 0, .external_lex_state = 2},
  [695] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(693),
    [sym_import] = STATE(311),
    [sym_rule] = STATE(297),
    [sym_dotted_name] = STATE(692),
    [aux_sym_source_file_repeat1] = STATE(297),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_importer] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
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
      sym_meta_name,
    ACTIONS(61), 1,
      sym__key,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 5,
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
    STATE(101), 10,
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
  [126] = 33,
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
      sym_meta_name,
    ACTIONS(61), 1,
      sym__key,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(274), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
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
    STATE(101), 10,
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
  [252] = 28,
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
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(77), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    STATE(564), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [355] = 26,
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
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(32), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(247), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [452] = 26,
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
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(77), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [549] = 26,
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
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(34), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(249), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [646] = 26,
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
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(31), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(266), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [743] = 26,
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
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(33), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(242), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(101), 10,
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
  [840] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_m_unary_name,
    ACTIONS(106), 1,
      sym_m_array_name,
    ACTIONS(109), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(112), 1,
      sym_tag,
    ACTIONS(115), 1,
      sym_formule,
    ACTIONS(118), 1,
      sym_avec,
    ACTIONS(121), 1,
      sym_remplace,
    ACTIONS(124), 1,
      sym_une_possibilitu00e9,
    ACTIONS(127), 1,
      sym_texte,
    ACTIONS(130), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(133), 1,
      sym_contexte,
    ACTIONS(136), 1,
      sym_variations,
    ACTIONS(139), 1,
      sym_duru00e9e,
    ACTIONS(142), 1,
      sym_unitu00e9,
    ACTIONS(145), 1,
      sym_meta_name,
    ACTIONS(148), 1,
      sym__key,
    ACTIONS(151), 1,
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
    STATE(101), 10,
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
  [919] = 20,
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
      sym_meta_name,
    ACTIONS(61), 1,
      sym__key,
    ACTIONS(153), 1,
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
    STATE(101), 10,
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
  [998] = 20,
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
      sym_meta_name,
    ACTIONS(61), 1,
      sym__key,
    ACTIONS(155), 1,
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
    STATE(101), 10,
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
  [1077] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(171), 1,
      sym_date,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      sym__indent,
    ACTIONS(177), 1,
      sym__newline,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(354), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1140] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      sym_date,
    ACTIONS(185), 1,
      sym__indent,
    ACTIONS(187), 1,
      sym__newline,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(415), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(276), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1203] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      sym_date,
    ACTIONS(185), 1,
      sym__indent,
    ACTIONS(187), 1,
      sym__newline,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(435), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(276), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1266] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(171), 1,
      sym_date,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      sym__indent,
    ACTIONS(177), 1,
      sym__newline,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(368), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1329] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(440), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1389] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_date,
    ACTIONS(203), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(486), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(256), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1449] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(494), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1509] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(628), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1569] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(606), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1629] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(550), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1689] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(637), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1749] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(497), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(259), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1809] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(497), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1869] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(221), 1,
      sym__indent,
    STATE(122), 1,
      sym__valeur,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1929] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(130), 1,
      sym__valeur,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [1989] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_date,
    ACTIONS(195), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(555), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2049] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    STATE(597), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2109] = 13,
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
    ACTIONS(223), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2159] = 13,
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
    ACTIONS(225), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2209] = 13,
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
    ACTIONS(227), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2259] = 13,
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
    ACTIONS(229), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2309] = 13,
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
    ACTIONS(231), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2359] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_m_unary_name,
    ACTIONS(236), 1,
      sym_m_array_name,
    ACTIONS(239), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(242), 1,
      sym_texte,
    ACTIONS(245), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(248), 1,
      sym_contexte,
    ACTIONS(251), 1,
      sym_variations,
    ACTIONS(254), 1,
      sym_duru00e9e,
    ACTIONS(257), 1,
      sym_unitu00e9,
    ACTIONS(260), 1,
      sym__dedent,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(101), 10,
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
  [2409] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(270), 1,
      sym_date,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2459] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(274), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(276), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(280), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2559] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(278), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2609] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_name,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(282), 1,
      sym_date,
    STATE(207), 1,
      sym_reference,
    STATE(208), 1,
      sym_dotted_name,
    STATE(223), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(280), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(209), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(248), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2657] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(289), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(301), 2,
      sym__expression,
      sym_string,
    STATE(220), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2709] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(286), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(279), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2759] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(37), 1,
      aux_sym_number_token1,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(290), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(214), 1,
      sym_reference,
    STATE(215), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(288), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(211), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(246), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2807] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(292), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(267), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2857] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(264), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(301), 2,
      sym__expression,
      sym_string,
    STATE(205), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [2959] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(296), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3009] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(298), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3059] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(300), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(271), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3109] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(302), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(294), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3159] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(304), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3209] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(306), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(308), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3309] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(310), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3359] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(312), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(268), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3409] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(314), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3459] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(316), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(318), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3559] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(320), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3609] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(322), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(292), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3659] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(324), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(282), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3709] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(326), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3759] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(328), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3809] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(330), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3859] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(332), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3909] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(296), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(221), 1,
      sym_number,
    STATE(224), 1,
      sym_reference,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(284), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(252), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(301), 2,
      sym__expression,
      sym_string,
    STATE(231), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4009] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(272), 1,
      aux_sym_number_token1,
    ACTIONS(334), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(179), 1,
      sym_reference,
    STATE(181), 1,
      sym_number,
    STATE(229), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(178), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__key,
    ACTIONS(340), 1,
      sym__array_prefix,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(336), 17,
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
  [4091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__key,
    ACTIONS(347), 1,
      sym__array_prefix,
    STATE(70), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(343), 16,
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
  [4122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__key,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(350), 16,
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
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__key,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(357), 16,
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
  [4184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__key,
    ACTIONS(367), 1,
      sym__array_prefix,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(363), 16,
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
  [4215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__key,
    ACTIONS(373), 1,
      sym__array_prefix,
    STATE(70), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(369), 16,
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
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__key,
    ACTIONS(375), 18,
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
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__key,
    ACTIONS(379), 17,
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
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__key,
    ACTIONS(383), 17,
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
  [4325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__key,
    ACTIONS(387), 17,
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
  [4351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__key,
    ACTIONS(391), 17,
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
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__key,
    ACTIONS(395), 16,
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
  [4402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__key,
    ACTIONS(399), 16,
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
  [4427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__key,
    ACTIONS(403), 16,
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
  [4452] = 3,
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
  [4477] = 3,
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
  [4502] = 3,
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
  [4527] = 3,
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
  [4552] = 3,
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
  [4577] = 3,
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
  [4602] = 3,
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
  [4627] = 3,
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
  [4652] = 3,
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
  [4677] = 3,
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
  [4702] = 3,
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
  [4727] = 3,
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
  [4752] = 3,
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
  [4777] = 3,
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
  [4802] = 3,
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
  [4827] = 3,
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
  [4852] = 3,
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
  [4877] = 3,
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
  [4902] = 3,
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
  [4927] = 3,
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
  [4952] = 3,
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
  [4977] = 3,
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
  [5002] = 3,
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
  [5027] = 3,
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
  [5052] = 3,
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
  [5077] = 3,
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
  [5102] = 3,
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
  [5127] = 3,
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
  [5152] = 3,
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
  [5177] = 3,
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
  [5202] = 3,
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
  [5227] = 3,
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
  [5252] = 3,
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
  [5277] = 3,
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
  [5302] = 3,
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
  [5327] = 3,
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
  [5352] = 3,
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
  [5377] = 3,
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
  [5402] = 3,
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
  [5427] = 3,
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
  [5452] = 3,
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
  [5477] = 3,
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
  [5502] = 3,
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
  [5527] = 3,
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
  [5552] = 3,
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
  [5577] = 3,
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
  [5602] = 3,
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
  [5627] = 3,
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
  [5652] = 3,
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
  [5677] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SPACE,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(140), 1,
      sym_unit,
    STATE(144), 1,
      sym__units,
    STATE(184), 1,
      sym_units,
    ACTIONS(599), 11,
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
  [5709] = 8,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SPACE,
    ACTIONS(609), 1,
      aux_sym_unit_token1,
    ACTIONS(611), 1,
      sym__newline,
    STATE(158), 1,
      sym_unit,
    STATE(187), 1,
      sym__units,
    STATE(213), 1,
      sym_units,
    ACTIONS(599), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(613), 12,
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
  [5765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH,
    ACTIONS(621), 1,
      anon_sym_DOT2,
    STATE(136), 1,
      aux_sym__units_repeat1,
    ACTIONS(617), 11,
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
  [5791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(627), 1,
      anon_sym_DOT2,
    STATE(136), 1,
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
  [5817] = 8,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__dedent,
    ACTIONS(630), 1,
      anon_sym_SPACE,
    ACTIONS(632), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(163), 1,
      sym__units,
    STATE(217), 1,
      sym_units,
    ACTIONS(599), 8,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(634), 12,
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
  [5873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH,
    ACTIONS(643), 1,
      sym_exposant,
    ACTIONS(639), 12,
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
  [5897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT2,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      aux_sym__units_repeat1,
    ACTIONS(645), 11,
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
  [5923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(649), 12,
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
  [5947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      aux_sym_units_repeat1,
    ACTIONS(651), 11,
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
  [5970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(623), 12,
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
  [5991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(142), 1,
      aux_sym_units_repeat1,
    ACTIONS(655), 11,
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
  [6014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    ACTIONS(657), 12,
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
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 13,
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
  [6054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      aux_sym_units_repeat1,
    ACTIONS(661), 11,
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
  [6077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SLASH,
    STATE(148), 1,
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
  [6100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      aux_sym_units_repeat1,
    ACTIONS(668), 11,
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
  [6123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_DOT2,
    STATE(157), 1,
      aux_sym__units_repeat1,
    ACTIONS(617), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_DOT2,
    STATE(150), 1,
      aux_sym__units_repeat1,
    ACTIONS(645), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH,
    ACTIONS(672), 1,
      sym_exposant,
    ACTIONS(639), 10,
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
  [6193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(634), 10,
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
  [6215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 12,
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
  [6233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(649), 10,
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
  [6255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH,
    ACTIONS(681), 1,
      anon_sym_DOT2,
    STATE(162), 1,
      aux_sym__units_repeat1,
    ACTIONS(617), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(683), 1,
      anon_sym_DOT2,
    STATE(157), 1,
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
  [6303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(681), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(645), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SLASH,
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
  [6347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH,
    ACTIONS(688), 1,
      sym_exposant,
    ACTIONS(639), 10,
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
  [6369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(613), 10,
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
  [6391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      anon_sym_DOT2,
    STATE(162), 1,
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
  [6415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      aux_sym_units_repeat1,
    ACTIONS(655), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SLASH,
    STATE(164), 1,
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
  [6457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(623), 10,
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
  [6476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(698), 10,
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
  [6495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(175), 1,
      aux_sym_units_repeat1,
    ACTIONS(661), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 11,
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
  [6533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      aux_sym_units_repeat1,
    ACTIONS(661), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    ACTIONS(657), 10,
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
  [6573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    STATE(188), 1,
      aux_sym_units_repeat1,
    ACTIONS(668), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    STATE(188), 1,
      aux_sym_units_repeat1,
    ACTIONS(651), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    ACTIONS(657), 10,
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
  [6634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(164), 1,
      aux_sym_units_repeat1,
    ACTIONS(651), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(164), 1,
      aux_sym_units_repeat1,
    ACTIONS(668), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH,
    ACTIONS(623), 10,
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
  [6695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 11,
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
  [6712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(634), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [6811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(649), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 11,
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
  [6849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 11,
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
  [6866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(613), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SLASH,
    STATE(172), 1,
      aux_sym_units_repeat1,
    ACTIONS(655), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SLASH,
    STATE(188), 1,
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
  [6929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(168), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(218), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(423), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(366), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SLASH,
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
  [7051] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(166), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(399), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7103] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(212), 1,
      sym_dotted_name,
    STATE(226), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SLASH,
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
  [7147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(212), 1,
      sym_dotted_name,
    STATE(227), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 10,
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
  [7189] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    ACTIONS(731), 1,
      aux_sym_number_token1,
    STATE(154), 1,
      sym_dotted_name,
    STATE(182), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      aux_sym_number_token1,
    STATE(212), 1,
      sym_dotted_name,
    STATE(216), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 10,
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
  [7257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(228), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7283] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      aux_sym_number_token1,
    STATE(208), 1,
      sym_dotted_name,
    STATE(206), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(698), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(751), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(757), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7496] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7526] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(704), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7643] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(698), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7758] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym__paragraph_token1,
    ACTIONS(771), 1,
      sym_text_line,
    ACTIONS(773), 1,
      sym__indent,
    ACTIONS(775), 1,
      sym__newline,
    STATE(91), 1,
      sym_meta_value,
    STATE(105), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__indent,
    STATE(586), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__indent,
    STATE(653), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7822] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    ACTIONS(787), 1,
      anon_sym_SQUOTE,
    ACTIONS(789), 1,
      sym_date,
    ACTIONS(791), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(439), 1,
      sym__date_or_ref,
    STATE(591), 1,
      sym_reference,
  [7850] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym__paragraph_token1,
    ACTIONS(771), 1,
      sym_text_line,
    ACTIONS(773), 1,
      sym__indent,
    ACTIONS(775), 1,
      sym__newline,
    STATE(108), 1,
      sym_meta_value,
    STATE(105), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__indent,
    STATE(588), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7894] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym__paragraph_token1,
    ACTIONS(771), 1,
      sym_text_line,
    ACTIONS(773), 1,
      sym__indent,
    ACTIONS(775), 1,
      sym__newline,
    STATE(508), 1,
      sym_meta_value,
    STATE(105), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7918] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    ACTIONS(787), 1,
      anon_sym_SQUOTE,
    ACTIONS(789), 1,
      sym_date,
    ACTIONS(791), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(473), 1,
      sym__date_or_ref,
    STATE(591), 1,
      sym_reference,
  [7946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__indent,
    STATE(600), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    ACTIONS(787), 1,
      anon_sym_SQUOTE,
    ACTIONS(789), 1,
      sym_date,
    ACTIONS(791), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(475), 1,
      sym__date_or_ref,
    STATE(591), 1,
      sym_reference,
  [7994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(548), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(608), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym__dedent,
    ACTIONS(797), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__newline,
    ACTIONS(799), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(545), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(685), 1,
      sym_m_duru00e9e_units,
    ACTIONS(817), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(815), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(373), 1,
      sym__array_prefix,
    ACTIONS(849), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(212), 1,
      sym_dotted_name,
    STATE(400), 1,
      aux_sym_s_remplace_repeat1,
    STATE(561), 1,
      sym_reference,
    STATE(562), 1,
      sym__remplace_rule,
  [8748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
    STATE(692), 1,
      sym_dotted_name,
    STATE(303), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_name,
    ACTIONS(858), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 1,
      sym__dedent,
    STATE(652), 1,
      sym_dotted_name,
    STATE(298), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8861] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(863), 1,
      sym__indent,
    ACTIONS(865), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(528), 1,
      sym_remplace_rule_except,
    STATE(557), 1,
      sym_reference,
  [8883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    ACTIONS(871), 1,
      sym_date,
    STATE(212), 1,
      sym_dotted_name,
    STATE(572), 1,
      sym_reference,
  [8905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(502), 1,
      sym_remplace_rule_in,
    STATE(567), 1,
      sym_reference,
  [8939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_name,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
    ACTIONS(879), 1,
      anon_sym_LBRACK,
    STATE(692), 1,
      sym_dotted_name,
    STATE(303), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(863), 1,
      sym__indent,
    ACTIONS(865), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(557), 1,
      sym_reference,
    STATE(595), 1,
      sym_remplace_rule_except,
  [8981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    STATE(692), 1,
      sym_dotted_name,
    STATE(303), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(884), 1,
      anon_sym_LBRACK,
    ACTIONS(886), 1,
      sym__dedent,
    STATE(652), 1,
      sym_dotted_name,
    STATE(298), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9045] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(863), 1,
      sym__indent,
    ACTIONS(865), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(557), 1,
      sym_reference,
    STATE(610), 1,
      sym_remplace_rule_except,
  [9067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
    STATE(692), 1,
      sym_dotted_name,
    STATE(305), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(863), 1,
      sym__indent,
    ACTIONS(865), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(557), 1,
      sym_reference,
    STATE(558), 1,
      sym_remplace_rule_except,
  [9133] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_SPACE,
    ACTIONS(890), 1,
      aux_sym_unit_token1,
    ACTIONS(892), 1,
      sym__indent,
    STATE(338), 1,
      sym_unit,
    STATE(389), 1,
      sym__units,
    STATE(581), 1,
      sym_units,
  [9155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(510), 1,
      sym_remplace_rule_in,
    STATE(567), 1,
      sym_reference,
  [9177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_plafond,
    STATE(446), 1,
      sym__m_taux_or_montant,
    STATE(536), 1,
      sym__m_tranche,
    ACTIONS(894), 2,
      sym_montant,
      sym_taux,
  [9194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(898), 1,
      sym__indent,
    ACTIONS(900), 1,
      sym__newline,
    STATE(208), 1,
      sym_dotted_name,
    STATE(602), 1,
      sym_reference,
  [9213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_plafond,
    STATE(478), 1,
      sym__m_taux_or_montant,
    STATE(536), 1,
      sym__m_tranche,
    ACTIONS(894), 2,
      sym_montant,
      sym_taux,
  [9230] = 6,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SPACE,
    ACTIONS(904), 1,
      aux_sym_unit_token1,
    STATE(334), 1,
      sym_unit,
    STATE(380), 1,
      sym__units,
    STATE(551), 1,
      sym_units,
  [9249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_plafond,
    STATE(479), 1,
      sym__m_taux_or_montant,
    STATE(536), 1,
      sym__m_tranche,
    ACTIONS(894), 2,
      sym_montant,
      sym_taux,
  [9266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_name,
    ACTIONS(909), 1,
      sym__dedent,
    STATE(154), 1,
      sym_dotted_name,
    STATE(321), 1,
      aux_sym_m_contexte_repeat1,
    STATE(556), 1,
      sym_reference,
  [9285] = 5,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(769), 1,
      aux_sym__paragraph_token1,
    ACTIONS(771), 1,
      sym_text_line,
    ACTIONS(911), 1,
      sym__indent,
    STATE(93), 2,
      sym__text_line,
      sym__paragraph,
  [9302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_source,
    ACTIONS(915), 1,
      sym_url,
    ACTIONS(917), 1,
      sym__dedent,
    STATE(412), 1,
      sym__import_source,
    STATE(541), 1,
      sym__import_url,
  [9321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    ACTIONS(884), 1,
      anon_sym_LBRACK,
    STATE(499), 1,
      sym_dotted_name,
    STATE(516), 2,
      sym_import_rule,
      sym_rule,
  [9338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_plafond,
    STATE(445), 1,
      sym__m_taux_or_montant,
    STATE(536), 1,
      sym__m_tranche,
    ACTIONS(894), 2,
      sym_montant,
      sym_taux,
  [9355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(849), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(212), 1,
      sym_dotted_name,
    STATE(532), 1,
      sym_reference,
    STATE(533), 1,
      sym__remplace_rule,
  [9374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(884), 1,
      anon_sym_LBRACK,
    STATE(652), 1,
      sym_dotted_name,
    STATE(307), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_plafond,
    STATE(535), 1,
      sym__m_taux_or_montant,
    STATE(536), 1,
      sym__m_tranche,
    ACTIONS(919), 2,
      sym_montant,
      sym_taux,
  [9408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(739), 1,
      sym_name,
    STATE(212), 1,
      sym_dotted_name,
    STATE(430), 1,
      aux_sym_m_inversion_repeat1,
    STATE(521), 1,
      sym_reference,
  [9427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym_dans,
    ACTIONS(923), 1,
      sym_les_ru00e8gles,
    ACTIONS(925), 1,
      sym__dedent,
    STATE(359), 1,
      sym__import_into,
    STATE(657), 1,
      sym_import_rules,
  [9446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(739), 1,
      sym_name,
    STATE(212), 1,
      sym_dotted_name,
    STATE(425), 1,
      aux_sym_m_inversion_repeat1,
    STATE(526), 1,
      sym_reference,
  [9465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(927), 1,
      sym__dedent,
    STATE(154), 1,
      sym_dotted_name,
    STATE(321), 1,
      aux_sym_m_contexte_repeat1,
    STATE(556), 1,
      sym_reference,
  [9484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(929), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(623), 1,
      sym_reference,
  [9500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DOT2,
    STATE(339), 1,
      aux_sym__units_repeat1,
    ACTIONS(645), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(933), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(624), 1,
      sym_reference,
  [9530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_exposant,
    ACTIONS(639), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym_exposant,
    ACTIONS(639), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DOT2,
    STATE(348), 1,
      aux_sym__units_repeat1,
    ACTIONS(645), 2,
      sym__newline,
      anon_sym_SLASH,
  [9568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DOT2,
    STATE(340), 1,
      aux_sym__units_repeat1,
    ACTIONS(617), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_DOT2,
    STATE(340), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_DOT2,
    STATE(341), 1,
      aux_sym__units_repeat1,
    ACTIONS(623), 2,
      sym__newline,
      anon_sym_SLASH,
  [9610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_name,
    ACTIONS(947), 1,
      sym__indent,
    STATE(208), 1,
      sym_dotted_name,
    STATE(577), 1,
      sym_reference,
  [9626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(949), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(575), 1,
      sym_reference,
  [9642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_si,
    ACTIONS(953), 1,
      sym_sinon,
    STATE(590), 1,
      sym_m_variation_sinon,
    STATE(629), 1,
      sym_m_variation_si,
  [9658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(154), 1,
      sym_dotted_name,
    STATE(332), 1,
      aux_sym_m_contexte_repeat1,
    STATE(556), 1,
      sym_reference,
  [9674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(955), 2,
      sym__dedent,
      sym_sauf_dans,
  [9688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym_depuis,
    ACTIONS(959), 1,
      sym_jusqu_u00e0,
    ACTIONS(961), 1,
      sym_unitu00e9,
    ACTIONS(963), 1,
      sym__dedent,
  [9704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DOT2,
    STATE(341), 1,
      aux_sym__units_repeat1,
    ACTIONS(617), 2,
      sym__newline,
      anon_sym_SLASH,
  [9718] = 5,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__key,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(393), 1,
      aux_sym__text_line_repeat1,
    STATE(394), 1,
      aux_sym_object_repeat1,
  [9734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(969), 1,
      sym_date,
    STATE(154), 1,
      sym_dotted_name,
    STATE(574), 1,
      sym_reference,
  [9750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__dedent,
    ACTIONS(973), 1,
      anon_sym_SLASH,
    STATE(352), 1,
      aux_sym_units_repeat1,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_unit_token1,
    STATE(158), 1,
      sym_unit,
    STATE(169), 1,
      sym__units,
  [9803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [9812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_les_ru00e8gles,
    ACTIONS(986), 1,
      sym__dedent,
    STATE(620), 1,
      sym_import_rules,
  [9843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_unit_token1,
    STATE(334), 1,
      sym_unit,
    STATE(379), 1,
      sym__units,
  [9856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_unit_token1,
    STATE(338), 1,
      sym_unit,
    STATE(388), 1,
      sym__units,
  [9869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_dans,
    ACTIONS(990), 1,
      sym_sauf_dans,
    ACTIONS(992), 1,
      sym__dedent,
  [9882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(140), 1,
      sym_unit,
    STATE(147), 1,
      sym__units,
  [9895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym__indent,
    ACTIONS(998), 1,
      sym__newline,
    STATE(594), 1,
      sym_m_une_possibilitu00e9_options,
  [9917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [9930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_unit_token1,
    STATE(158), 1,
      sym_unit,
    STATE(193), 1,
      sym__units,
  [9943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(167), 1,
      sym__units,
  [9965] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    ACTIONS(1006), 1,
      sym_text_line,
  [9978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [9987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__dedent,
    ACTIONS(1014), 1,
      anon_sym_SLASH,
    STATE(352), 1,
      aux_sym_units_repeat1,
  [10027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__dedent,
    ACTIONS(1014), 1,
      anon_sym_SLASH,
    STATE(352), 1,
      aux_sym_units_repeat1,
  [10040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_unit_token1,
    STATE(334), 1,
      sym_unit,
    STATE(462), 1,
      sym__units,
  [10053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__dedent,
    ACTIONS(1014), 1,
      anon_sym_SLASH,
    STATE(375), 1,
      aux_sym_units_repeat1,
  [10075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__dedent,
    ACTIONS(1014), 1,
      anon_sym_SLASH,
    STATE(376), 1,
      aux_sym_units_repeat1,
  [10088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__newline,
    ACTIONS(1016), 1,
      anon_sym_SLASH,
    STATE(382), 1,
      aux_sym_units_repeat1,
  [10110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__newline,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    STATE(382), 1,
      aux_sym_units_repeat1,
  [10132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__newline,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    STATE(382), 1,
      aux_sym_units_repeat1,
  [10145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_unit_token1,
    STATE(338), 1,
      sym_unit,
    STATE(474), 1,
      sym__units,
  [10158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__newline,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    STATE(384), 1,
      aux_sym_units_repeat1,
  [10180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__newline,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    STATE(385), 1,
      aux_sym_units_repeat1,
  [10193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__dedent,
    ACTIONS(1027), 1,
      sym__array_prefix,
    STATE(419), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__dedent,
    ACTIONS(1031), 1,
      sym__array_prefix,
    STATE(419), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10228] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_text_line,
    ACTIONS(1033), 1,
      sym__dedent,
    STATE(404), 1,
      aux_sym__text_line_repeat1,
  [10241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__key,
    ACTIONS(1037), 1,
      sym__dedent,
    STATE(407), 1,
      aux_sym_object_repeat1,
  [10254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(140), 1,
      sym_unit,
    STATE(159), 1,
      sym__units,
  [10276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__array_prefix,
    ACTIONS(1043), 1,
      sym__dedent,
    STATE(71), 1,
      aux_sym_m_array_repeat1,
  [10298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
  [10311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__array_prefix,
    ACTIONS(1045), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_s_remplace_repeat1,
  [10324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    STATE(212), 1,
      sym_dotted_name,
    STATE(529), 1,
      sym_reference,
  [10337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1047), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__dedent,
    ACTIONS(1051), 1,
      sym__array_prefix,
    STATE(426), 1,
      aux_sym_m_variations_repeat1,
  [10363] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_text_line,
    ACTIONS(1056), 1,
      sym__dedent,
    STATE(404), 1,
      aux_sym__text_line_repeat1,
  [10376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1060), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__key,
    ACTIONS(1065), 1,
      sym__dedent,
    STATE(407), 1,
      aux_sym_object_repeat1,
  [10411] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_text_line,
    ACTIONS(1067), 1,
      sym__dedent,
    STATE(404), 1,
      aux_sym__text_line_repeat1,
  [10424] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_DQUOTE,
    ACTIONS(1071), 1,
      anon_sym_SQUOTE,
    ACTIONS(1073), 1,
      sym_text_line,
  [10437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_url,
    ACTIONS(1077), 1,
      sym__dedent,
    STATE(518), 1,
      sym__import_url,
  [10468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__dedent,
    ACTIONS(1081), 1,
      sym__array_prefix,
    STATE(436), 1,
      aux_sym_import_rules_repeat1,
  [10481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__array_prefix,
    ACTIONS(1083), 1,
      sym__dedent,
    STATE(436), 1,
      aux_sym_import_rules_repeat1,
  [10512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(578), 1,
      sym_boolean,
    ACTIONS(1085), 2,
      anon_sym_oui,
      anon_sym_non,
  [10523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1087), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym__dedent,
    ACTIONS(1091), 1,
      sym__array_prefix,
    STATE(419), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_unit_token1,
    STATE(151), 1,
      sym_unit,
    STATE(197), 1,
      sym__units,
  [10562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_dans,
    ACTIONS(1096), 1,
      sym_sauf_dans,
    ACTIONS(1098), 1,
      sym__dedent,
  [10575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym__indent,
    ACTIONS(998), 1,
      sym__newline,
    STATE(579), 1,
      sym_m_une_possibilitu00e9_options,
  [10588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(706), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [10601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1100), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__dedent,
    ACTIONS(1104), 1,
      sym__array_prefix,
    STATE(426), 1,
      aux_sym_m_variations_repeat1,
  [10636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [10645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10654] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      anon_sym_SQUOTE,
    ACTIONS(1113), 1,
      sym_text_line,
  [10667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1115), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    ACTIONS(1117), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_inversion_repeat1,
  [10693] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    ACTIONS(1123), 1,
      sym_text_line,
  [10706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym__dedent,
    ACTIONS(1131), 1,
      sym__array_prefix,
    STATE(436), 1,
      aux_sym_import_rules_repeat1,
  [10746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_name,
    STATE(212), 1,
      sym_dotted_name,
    STATE(525), 1,
      sym_reference,
  [10759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_jusqu_u00e0,
    ACTIONS(1136), 1,
      sym_unitu00e9,
    ACTIONS(1138), 1,
      sym__dedent,
  [10781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(598), 1,
      sym__m_taux_or_montant,
    ACTIONS(1140), 2,
      sym_montant,
      sym_taux,
  [10792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym__dedent,
    ACTIONS(1146), 1,
      sym__array_prefix,
    STATE(419), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym__dedent,
    ACTIONS(1150), 1,
      sym__array_prefix,
    STATE(419), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__array_prefix,
    STATE(416), 1,
      aux_sym_import_rules_repeat1,
  [10837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_plafond,
    ACTIONS(1154), 1,
      sym__dedent,
  [10847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_plafond,
    ACTIONS(1156), 1,
      sym__dedent,
  [10857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(684), 1,
      sym_dotted_name,
  [10867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      sym__dedent,
      sym_sauf_dans,
  [10875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym_depuis,
    STATE(330), 1,
      sym_import_from,
  [10885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym__indent,
    ACTIONS(1164), 1,
      sym__newline,
  [10895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(618), 1,
      sym_dotted_name,
  [10905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym__indent,
    ACTIONS(1168), 1,
      sym__newline,
  [10915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      sym__dedent,
      sym_url,
  [10923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym__indent,
    ACTIONS(1174), 1,
      sym__newline,
  [10933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym__indent,
    ACTIONS(1178), 1,
      sym__newline,
  [10943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 2,
      sym__dedent,
      sym__array_prefix,
  [10951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_unit_token1,
    STATE(165), 1,
      sym_unit,
  [10961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym_nom,
    STATE(323), 1,
      sym__import_name,
  [10971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym__indent,
    ACTIONS(1186), 1,
      sym__newline,
  [10981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__array_prefix,
    STATE(73), 1,
      aux_sym_m_array_repeat1,
  [10991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 2,
      sym__dedent,
      sym_url,
  [10999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 2,
      sym__dedent,
      anon_sym_SLASH,
  [11007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__array_prefix,
    STATE(74), 1,
      aux_sym_s_remplace_repeat1,
  [11017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_unit_token1,
    STATE(374), 1,
      sym_unit,
  [11027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__array_prefix,
    STATE(391), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__array_prefix,
    STATE(392), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_choix_obligatoire,
    ACTIONS(1194), 1,
      sym_possibilitu00e9s,
  [11057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym__dedent,
      sym_plafond,
  [11065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym__dedent,
      sym_plafond,
  [11073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym__dedent,
      sym_plafond,
  [11081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym__dedent,
      sym_plafond,
  [11089] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(393), 1,
      aux_sym__text_line_repeat1,
  [11099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym_unitu00e9,
    ACTIONS(1198), 1,
      sym__dedent,
  [11109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 2,
      sym__newline,
      anon_sym_SLASH,
  [11117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_unitu00e9,
    ACTIONS(1202), 1,
      sym__dedent,
  [11127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__array_prefix,
    STATE(442), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(402), 1,
      aux_sym_m_inversion_repeat1,
  [11147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_plafond,
    ACTIONS(1204), 1,
      sym__dedent,
  [11157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_plafond,
    ACTIONS(1206), 1,
      sym__dedent,
  [11167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_unit_token1,
    STATE(381), 1,
      sym_unit,
  [11177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 2,
      sym__dedent,
      sym__array_prefix,
  [11185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(72), 1,
      aux_sym_m_inversion_repeat1,
  [11195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym__array_prefix,
    STATE(403), 1,
      aux_sym_m_variations_repeat1,
  [11205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym__dedent,
      sym_name,
  [11213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 2,
      sym__dedent,
      sym__array_prefix,
  [11221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 2,
      sym__dedent,
      sym_name,
  [11229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym__dedent,
      sym_name,
  [11237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(406), 1,
      aux_sym_m_inversion_repeat1,
  [11247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(418), 1,
      aux_sym_m_inversion_repeat1,
  [11257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym__dedent,
      sym_name,
  [11265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym__dedent,
      sym_name,
  [11273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__array_prefix,
    STATE(443), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11283] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_text_line,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [11293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_multiplicateur,
    ACTIONS(1218), 1,
      sym_tranches,
  [11303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__array_prefix,
    STATE(413), 1,
      aux_sym_import_rules_repeat1,
  [11321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 2,
      sym__dedent,
      sym_plafond,
  [11329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(431), 1,
      aux_sym_m_inversion_repeat1,
  [11339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_COLON,
    ACTIONS(1226), 1,
      sym__dedent,
  [11349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      sym_si,
    STATE(629), 1,
      sym_m_variation_si,
  [11359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      sym_sauf_dans,
    ACTIONS(1234), 1,
      sym__dedent,
  [11377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(143), 1,
      sym_unit,
  [11387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      sym__indent,
    ACTIONS(1238), 1,
      sym__newline,
  [11397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_unit_token1,
    STATE(176), 1,
      sym_unit,
  [11407] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym__dedent,
    ACTIONS(1240), 1,
      sym_text_line,
  [11417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 2,
      sym__dedent,
      sym_sauf_dans,
  [11425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 2,
      sym__dedent,
      sym__key,
  [11433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__array_prefix,
    STATE(398), 1,
      aux_sym_m_array_repeat1,
  [11443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_sauf_dans,
    ACTIONS(1244), 1,
      sym__dedent,
  [11453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__array_prefix,
    STATE(346), 1,
      aux_sym_m_inversion_repeat1,
  [11463] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1246), 1,
      sym_text_line,
  [11470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_COLON,
  [11477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_COLON,
  [11484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      sym__dedent,
  [11491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym__dedent,
  [11498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym__dedent,
  [11505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym__dedent,
  [11512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_COLON,
  [11519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      sym__dedent,
  [11526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym__dedent,
  [11533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_COLON,
  [11540] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1264), 1,
      sym_text_line,
  [11547] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_text_line,
  [11554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      sym__dedent,
  [11561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__dedent,
  [11568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_COLON,
  [11575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      sym__dedent,
  [11582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym__dedent,
  [11589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_COLON,
  [11596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym__dedent,
  [11603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      sym__dedent,
  [11610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      sym__dedent,
  [11617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym__newline,
  [11624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_plafond,
  [11631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym__dedent,
  [11638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_COLON,
  [11645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_COLON,
  [11652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_SQUOTE,
  [11659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_DQUOTE,
  [11666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      sym__dedent,
  [11673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      sym__dedent,
  [11680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_COLON,
  [11687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_COLON,
  [11694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym__dedent,
  [11701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym__dedent,
  [11708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym__dedent,
  [11715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      sym__dedent,
  [11722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_COLON,
  [11729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym__dedent,
  [11736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      sym__dedent,
  [11743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_COLON,
  [11750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_COLON,
  [11757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_COLON,
  [11764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_alors,
  [11771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_COLON,
  [11778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym__newline,
  [11785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym__dedent,
  [11792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_COLON,
  [11799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_COLON,
  [11806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      sym__dedent,
  [11813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym__dedent,
  [11820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_COLON,
  [11827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym__dedent,
  [11834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_COLON,
  [11841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym__dedent,
  [11848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      sym__newline,
  [11855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COLON,
  [11862] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1350), 1,
      sym_text_line,
  [11869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym__dedent,
  [11876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_COLON,
  [11883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      sym__dedent,
  [11890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      sym__dedent,
  [11897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
  [11904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_SQUOTE,
  [11911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__dedent,
  [11918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      sym__newline,
  [11925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      sym_possibilitu00e9s,
  [11932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      sym__dedent,
  [11939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      sym__newline,
  [11946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      sym__newline,
  [11953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      sym__dedent,
  [11960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_COLON,
  [11967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym__dedent,
  [11974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_COLON,
  [11981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym__newline,
  [11988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      sym__dedent,
  [11995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      sym__newline,
  [12002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COLON,
  [12009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      sym__dedent,
  [12016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      sym__newline,
  [12023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      sym__dedent,
  [12030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      sym__dedent,
  [12037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      sym__dedent,
  [12044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      sym__dedent,
  [12051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      sym__dedent,
  [12058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      sym__dedent,
  [12065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      sym__dedent,
  [12072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      sym__newline,
  [12079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      sym__newline,
  [12086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_COLON,
  [12093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      sym__newline,
  [12100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      sym__dedent,
  [12107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
  [12114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      sym__dedent,
  [12121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      sym_tranches,
  [12128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      sym__dedent,
  [12135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      sym__dedent,
  [12142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      sym__dedent,
  [12149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      sym__dedent,
  [12156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_COLON,
  [12163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_SQUOTE,
  [12170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      sym_assiette,
  [12177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      sym_name,
  [12184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      sym__dedent,
  [12191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      sym_tag,
  [12198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      sym__dedent,
  [12205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_COLON,
  [12212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      sym__dedent,
  [12219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      sym__dedent,
  [12226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      sym__newline,
  [12233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      sym__dedent,
  [12240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_SQUOTE,
  [12247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_DQUOTE,
  [12254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      sym__newline,
  [12261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      sym__dedent,
  [12268] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1458), 1,
      sym_text_line,
  [12275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      sym__dedent,
  [12282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      sym__dedent,
  [12289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      sym__newline,
  [12296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      sym__dedent,
  [12303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_COLON,
  [12310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      sym__dedent,
  [12317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      sym_name,
  [12324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      sym__newline,
  [12331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_COLON,
  [12338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_plafond,
  [12345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_COLON,
  [12352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      sym_paragraph,
  [12359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      sym__indent,
  [12366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      sym__indent,
  [12373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      sym__newline,
  [12380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym__dedent,
  [12387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      sym__indent,
  [12394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_COLON,
  [12401] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1494), 1,
      sym_text_line,
  [12408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      sym__indent,
  [12415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      sym__indent,
  [12422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      sym__newline,
  [12429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      sym__dedent,
  [12436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_SQUOTE,
  [12443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_COLON,
  [12450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      sym__newline,
  [12457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_oui,
  [12464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      sym__indent,
  [12471] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1512), 1,
      sym_text_line,
  [12478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      sym__dedent,
  [12485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_DQUOTE,
  [12492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_COLON,
  [12499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_COLON,
  [12506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_SQUOTE,
  [12513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      sym__indent,
  [12520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_DQUOTE,
  [12527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      sym__dedent,
  [12534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_COLON,
  [12541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_COLON,
  [12548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_COLON,
  [12555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_COLON,
  [12562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_COLON,
  [12569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_COLON,
  [12576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
  [12583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_COLON,
  [12590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_COLON,
  [12597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_COLON,
  [12604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_COLON,
  [12611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_COLON,
  [12618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_COLON,
  [12625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_RBRACK,
  [12632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_COLON,
  [12639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_COLON,
  [12646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_COLON,
  [12653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_COLON,
  [12660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_COLON,
  [12667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_COLON,
  [12674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym__dedent,
  [12681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_COLON,
  [12688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym__dedent,
  [12695] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1572), 1,
      sym_text_line,
  [12702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym__indent,
  [12709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      sym_name,
  [12716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_RBRACK,
  [12723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_COLON,
  [12730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      ts_builtin_sym_end,
  [12737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_COLON,
  [12744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 126,
  [SMALL_STATE(4)] = 252,
  [SMALL_STATE(5)] = 355,
  [SMALL_STATE(6)] = 452,
  [SMALL_STATE(7)] = 549,
  [SMALL_STATE(8)] = 646,
  [SMALL_STATE(9)] = 743,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 919,
  [SMALL_STATE(12)] = 998,
  [SMALL_STATE(13)] = 1077,
  [SMALL_STATE(14)] = 1140,
  [SMALL_STATE(15)] = 1203,
  [SMALL_STATE(16)] = 1266,
  [SMALL_STATE(17)] = 1329,
  [SMALL_STATE(18)] = 1389,
  [SMALL_STATE(19)] = 1449,
  [SMALL_STATE(20)] = 1509,
  [SMALL_STATE(21)] = 1569,
  [SMALL_STATE(22)] = 1629,
  [SMALL_STATE(23)] = 1689,
  [SMALL_STATE(24)] = 1749,
  [SMALL_STATE(25)] = 1809,
  [SMALL_STATE(26)] = 1869,
  [SMALL_STATE(27)] = 1929,
  [SMALL_STATE(28)] = 1989,
  [SMALL_STATE(29)] = 2049,
  [SMALL_STATE(30)] = 2109,
  [SMALL_STATE(31)] = 2159,
  [SMALL_STATE(32)] = 2209,
  [SMALL_STATE(33)] = 2259,
  [SMALL_STATE(34)] = 2309,
  [SMALL_STATE(35)] = 2359,
  [SMALL_STATE(36)] = 2409,
  [SMALL_STATE(37)] = 2459,
  [SMALL_STATE(38)] = 2509,
  [SMALL_STATE(39)] = 2559,
  [SMALL_STATE(40)] = 2609,
  [SMALL_STATE(41)] = 2657,
  [SMALL_STATE(42)] = 2709,
  [SMALL_STATE(43)] = 2759,
  [SMALL_STATE(44)] = 2807,
  [SMALL_STATE(45)] = 2857,
  [SMALL_STATE(46)] = 2907,
  [SMALL_STATE(47)] = 2959,
  [SMALL_STATE(48)] = 3009,
  [SMALL_STATE(49)] = 3059,
  [SMALL_STATE(50)] = 3109,
  [SMALL_STATE(51)] = 3159,
  [SMALL_STATE(52)] = 3209,
  [SMALL_STATE(53)] = 3259,
  [SMALL_STATE(54)] = 3309,
  [SMALL_STATE(55)] = 3359,
  [SMALL_STATE(56)] = 3409,
  [SMALL_STATE(57)] = 3459,
  [SMALL_STATE(58)] = 3509,
  [SMALL_STATE(59)] = 3559,
  [SMALL_STATE(60)] = 3609,
  [SMALL_STATE(61)] = 3659,
  [SMALL_STATE(62)] = 3709,
  [SMALL_STATE(63)] = 3759,
  [SMALL_STATE(64)] = 3809,
  [SMALL_STATE(65)] = 3859,
  [SMALL_STATE(66)] = 3909,
  [SMALL_STATE(67)] = 3957,
  [SMALL_STATE(68)] = 4009,
  [SMALL_STATE(69)] = 4059,
  [SMALL_STATE(70)] = 4091,
  [SMALL_STATE(71)] = 4122,
  [SMALL_STATE(72)] = 4153,
  [SMALL_STATE(73)] = 4184,
  [SMALL_STATE(74)] = 4215,
  [SMALL_STATE(75)] = 4246,
  [SMALL_STATE(76)] = 4273,
  [SMALL_STATE(77)] = 4299,
  [SMALL_STATE(78)] = 4325,
  [SMALL_STATE(79)] = 4351,
  [SMALL_STATE(80)] = 4377,
  [SMALL_STATE(81)] = 4402,
  [SMALL_STATE(82)] = 4427,
  [SMALL_STATE(83)] = 4452,
  [SMALL_STATE(84)] = 4477,
  [SMALL_STATE(85)] = 4502,
  [SMALL_STATE(86)] = 4527,
  [SMALL_STATE(87)] = 4552,
  [SMALL_STATE(88)] = 4577,
  [SMALL_STATE(89)] = 4602,
  [SMALL_STATE(90)] = 4627,
  [SMALL_STATE(91)] = 4652,
  [SMALL_STATE(92)] = 4677,
  [SMALL_STATE(93)] = 4702,
  [SMALL_STATE(94)] = 4727,
  [SMALL_STATE(95)] = 4752,
  [SMALL_STATE(96)] = 4777,
  [SMALL_STATE(97)] = 4802,
  [SMALL_STATE(98)] = 4827,
  [SMALL_STATE(99)] = 4852,
  [SMALL_STATE(100)] = 4877,
  [SMALL_STATE(101)] = 4902,
  [SMALL_STATE(102)] = 4927,
  [SMALL_STATE(103)] = 4952,
  [SMALL_STATE(104)] = 4977,
  [SMALL_STATE(105)] = 5002,
  [SMALL_STATE(106)] = 5027,
  [SMALL_STATE(107)] = 5052,
  [SMALL_STATE(108)] = 5077,
  [SMALL_STATE(109)] = 5102,
  [SMALL_STATE(110)] = 5127,
  [SMALL_STATE(111)] = 5152,
  [SMALL_STATE(112)] = 5177,
  [SMALL_STATE(113)] = 5202,
  [SMALL_STATE(114)] = 5227,
  [SMALL_STATE(115)] = 5252,
  [SMALL_STATE(116)] = 5277,
  [SMALL_STATE(117)] = 5302,
  [SMALL_STATE(118)] = 5327,
  [SMALL_STATE(119)] = 5352,
  [SMALL_STATE(120)] = 5377,
  [SMALL_STATE(121)] = 5402,
  [SMALL_STATE(122)] = 5427,
  [SMALL_STATE(123)] = 5452,
  [SMALL_STATE(124)] = 5477,
  [SMALL_STATE(125)] = 5502,
  [SMALL_STATE(126)] = 5527,
  [SMALL_STATE(127)] = 5552,
  [SMALL_STATE(128)] = 5577,
  [SMALL_STATE(129)] = 5602,
  [SMALL_STATE(130)] = 5627,
  [SMALL_STATE(131)] = 5652,
  [SMALL_STATE(132)] = 5677,
  [SMALL_STATE(133)] = 5709,
  [SMALL_STATE(134)] = 5741,
  [SMALL_STATE(135)] = 5765,
  [SMALL_STATE(136)] = 5791,
  [SMALL_STATE(137)] = 5817,
  [SMALL_STATE(138)] = 5849,
  [SMALL_STATE(139)] = 5873,
  [SMALL_STATE(140)] = 5897,
  [SMALL_STATE(141)] = 5923,
  [SMALL_STATE(142)] = 5947,
  [SMALL_STATE(143)] = 5970,
  [SMALL_STATE(144)] = 5991,
  [SMALL_STATE(145)] = 6014,
  [SMALL_STATE(146)] = 6035,
  [SMALL_STATE(147)] = 6054,
  [SMALL_STATE(148)] = 6077,
  [SMALL_STATE(149)] = 6100,
  [SMALL_STATE(150)] = 6123,
  [SMALL_STATE(151)] = 6147,
  [SMALL_STATE(152)] = 6171,
  [SMALL_STATE(153)] = 6193,
  [SMALL_STATE(154)] = 6215,
  [SMALL_STATE(155)] = 6233,
  [SMALL_STATE(156)] = 6255,
  [SMALL_STATE(157)] = 6279,
  [SMALL_STATE(158)] = 6303,
  [SMALL_STATE(159)] = 6327,
  [SMALL_STATE(160)] = 6347,
  [SMALL_STATE(161)] = 6369,
  [SMALL_STATE(162)] = 6391,
  [SMALL_STATE(163)] = 6415,
  [SMALL_STATE(164)] = 6436,
  [SMALL_STATE(165)] = 6457,
  [SMALL_STATE(166)] = 6476,
  [SMALL_STATE(167)] = 6495,
  [SMALL_STATE(168)] = 6516,
  [SMALL_STATE(169)] = 6533,
  [SMALL_STATE(170)] = 6554,
  [SMALL_STATE(171)] = 6573,
  [SMALL_STATE(172)] = 6594,
  [SMALL_STATE(173)] = 6615,
  [SMALL_STATE(174)] = 6634,
  [SMALL_STATE(175)] = 6655,
  [SMALL_STATE(176)] = 6676,
  [SMALL_STATE(177)] = 6695,
  [SMALL_STATE(178)] = 6712,
  [SMALL_STATE(179)] = 6733,
  [SMALL_STATE(180)] = 6754,
  [SMALL_STATE(181)] = 6775,
  [SMALL_STATE(182)] = 6794,
  [SMALL_STATE(183)] = 6811,
  [SMALL_STATE(184)] = 6832,
  [SMALL_STATE(185)] = 6849,
  [SMALL_STATE(186)] = 6866,
  [SMALL_STATE(187)] = 6887,
  [SMALL_STATE(188)] = 6908,
  [SMALL_STATE(189)] = 6929,
  [SMALL_STATE(190)] = 6955,
  [SMALL_STATE(191)] = 6981,
  [SMALL_STATE(192)] = 7007,
  [SMALL_STATE(193)] = 7033,
  [SMALL_STATE(194)] = 7051,
  [SMALL_STATE(195)] = 7077,
  [SMALL_STATE(196)] = 7103,
  [SMALL_STATE(197)] = 7129,
  [SMALL_STATE(198)] = 7147,
  [SMALL_STATE(199)] = 7173,
  [SMALL_STATE(200)] = 7189,
  [SMALL_STATE(201)] = 7215,
  [SMALL_STATE(202)] = 7241,
  [SMALL_STATE(203)] = 7257,
  [SMALL_STATE(204)] = 7283,
  [SMALL_STATE(205)] = 7309,
  [SMALL_STATE(206)] = 7330,
  [SMALL_STATE(207)] = 7347,
  [SMALL_STATE(208)] = 7364,
  [SMALL_STATE(209)] = 7379,
  [SMALL_STATE(210)] = 7398,
  [SMALL_STATE(211)] = 7413,
  [SMALL_STATE(212)] = 7432,
  [SMALL_STATE(213)] = 7447,
  [SMALL_STATE(214)] = 7462,
  [SMALL_STATE(215)] = 7479,
  [SMALL_STATE(216)] = 7496,
  [SMALL_STATE(217)] = 7511,
  [SMALL_STATE(218)] = 7526,
  [SMALL_STATE(219)] = 7541,
  [SMALL_STATE(220)] = 7556,
  [SMALL_STATE(221)] = 7577,
  [SMALL_STATE(222)] = 7594,
  [SMALL_STATE(223)] = 7609,
  [SMALL_STATE(224)] = 7626,
  [SMALL_STATE(225)] = 7643,
  [SMALL_STATE(226)] = 7658,
  [SMALL_STATE(227)] = 7675,
  [SMALL_STATE(228)] = 7690,
  [SMALL_STATE(229)] = 7705,
  [SMALL_STATE(230)] = 7722,
  [SMALL_STATE(231)] = 7737,
  [SMALL_STATE(232)] = 7758,
  [SMALL_STATE(233)] = 7782,
  [SMALL_STATE(234)] = 7802,
  [SMALL_STATE(235)] = 7822,
  [SMALL_STATE(236)] = 7850,
  [SMALL_STATE(237)] = 7874,
  [SMALL_STATE(238)] = 7894,
  [SMALL_STATE(239)] = 7918,
  [SMALL_STATE(240)] = 7946,
  [SMALL_STATE(241)] = 7966,
  [SMALL_STATE(242)] = 7994,
  [SMALL_STATE(243)] = 8009,
  [SMALL_STATE(244)] = 8022,
  [SMALL_STATE(245)] = 8035,
  [SMALL_STATE(246)] = 8050,
  [SMALL_STATE(247)] = 8063,
  [SMALL_STATE(248)] = 8078,
  [SMALL_STATE(249)] = 8091,
  [SMALL_STATE(250)] = 8106,
  [SMALL_STATE(251)] = 8119,
  [SMALL_STATE(252)] = 8132,
  [SMALL_STATE(253)] = 8147,
  [SMALL_STATE(254)] = 8162,
  [SMALL_STATE(255)] = 8175,
  [SMALL_STATE(256)] = 8190,
  [SMALL_STATE(257)] = 8205,
  [SMALL_STATE(258)] = 8220,
  [SMALL_STATE(259)] = 8235,
  [SMALL_STATE(260)] = 8250,
  [SMALL_STATE(261)] = 8267,
  [SMALL_STATE(262)] = 8282,
  [SMALL_STATE(263)] = 8297,
  [SMALL_STATE(264)] = 8312,
  [SMALL_STATE(265)] = 8327,
  [SMALL_STATE(266)] = 8342,
  [SMALL_STATE(267)] = 8357,
  [SMALL_STATE(268)] = 8372,
  [SMALL_STATE(269)] = 8387,
  [SMALL_STATE(270)] = 8402,
  [SMALL_STATE(271)] = 8417,
  [SMALL_STATE(272)] = 8432,
  [SMALL_STATE(273)] = 8447,
  [SMALL_STATE(274)] = 8464,
  [SMALL_STATE(275)] = 8479,
  [SMALL_STATE(276)] = 8494,
  [SMALL_STATE(277)] = 8509,
  [SMALL_STATE(278)] = 8524,
  [SMALL_STATE(279)] = 8539,
  [SMALL_STATE(280)] = 8554,
  [SMALL_STATE(281)] = 8569,
  [SMALL_STATE(282)] = 8584,
  [SMALL_STATE(283)] = 8599,
  [SMALL_STATE(284)] = 8614,
  [SMALL_STATE(285)] = 8629,
  [SMALL_STATE(286)] = 8646,
  [SMALL_STATE(287)] = 8661,
  [SMALL_STATE(288)] = 8676,
  [SMALL_STATE(289)] = 8693,
  [SMALL_STATE(290)] = 8708,
  [SMALL_STATE(291)] = 8723,
  [SMALL_STATE(292)] = 8748,
  [SMALL_STATE(293)] = 8763,
  [SMALL_STATE(294)] = 8776,
  [SMALL_STATE(295)] = 8791,
  [SMALL_STATE(296)] = 8806,
  [SMALL_STATE(297)] = 8821,
  [SMALL_STATE(298)] = 8841,
  [SMALL_STATE(299)] = 8861,
  [SMALL_STATE(300)] = 8883,
  [SMALL_STATE(301)] = 8905,
  [SMALL_STATE(302)] = 8917,
  [SMALL_STATE(303)] = 8939,
  [SMALL_STATE(304)] = 8959,
  [SMALL_STATE(305)] = 8981,
  [SMALL_STATE(306)] = 9001,
  [SMALL_STATE(307)] = 9013,
  [SMALL_STATE(308)] = 9033,
  [SMALL_STATE(309)] = 9045,
  [SMALL_STATE(310)] = 9067,
  [SMALL_STATE(311)] = 9079,
  [SMALL_STATE(312)] = 9099,
  [SMALL_STATE(313)] = 9111,
  [SMALL_STATE(314)] = 9133,
  [SMALL_STATE(315)] = 9155,
  [SMALL_STATE(316)] = 9177,
  [SMALL_STATE(317)] = 9194,
  [SMALL_STATE(318)] = 9213,
  [SMALL_STATE(319)] = 9230,
  [SMALL_STATE(320)] = 9249,
  [SMALL_STATE(321)] = 9266,
  [SMALL_STATE(322)] = 9285,
  [SMALL_STATE(323)] = 9302,
  [SMALL_STATE(324)] = 9321,
  [SMALL_STATE(325)] = 9338,
  [SMALL_STATE(326)] = 9355,
  [SMALL_STATE(327)] = 9374,
  [SMALL_STATE(328)] = 9391,
  [SMALL_STATE(329)] = 9408,
  [SMALL_STATE(330)] = 9427,
  [SMALL_STATE(331)] = 9446,
  [SMALL_STATE(332)] = 9465,
  [SMALL_STATE(333)] = 9484,
  [SMALL_STATE(334)] = 9500,
  [SMALL_STATE(335)] = 9514,
  [SMALL_STATE(336)] = 9530,
  [SMALL_STATE(337)] = 9542,
  [SMALL_STATE(338)] = 9554,
  [SMALL_STATE(339)] = 9568,
  [SMALL_STATE(340)] = 9582,
  [SMALL_STATE(341)] = 9596,
  [SMALL_STATE(342)] = 9610,
  [SMALL_STATE(343)] = 9626,
  [SMALL_STATE(344)] = 9642,
  [SMALL_STATE(345)] = 9658,
  [SMALL_STATE(346)] = 9674,
  [SMALL_STATE(347)] = 9688,
  [SMALL_STATE(348)] = 9704,
  [SMALL_STATE(349)] = 9718,
  [SMALL_STATE(350)] = 9734,
  [SMALL_STATE(351)] = 9750,
  [SMALL_STATE(352)] = 9759,
  [SMALL_STATE(353)] = 9772,
  [SMALL_STATE(354)] = 9781,
  [SMALL_STATE(355)] = 9790,
  [SMALL_STATE(356)] = 9803,
  [SMALL_STATE(357)] = 9812,
  [SMALL_STATE(358)] = 9821,
  [SMALL_STATE(359)] = 9830,
  [SMALL_STATE(360)] = 9843,
  [SMALL_STATE(361)] = 9856,
  [SMALL_STATE(362)] = 9869,
  [SMALL_STATE(363)] = 9882,
  [SMALL_STATE(364)] = 9895,
  [SMALL_STATE(365)] = 9904,
  [SMALL_STATE(366)] = 9917,
  [SMALL_STATE(367)] = 9930,
  [SMALL_STATE(368)] = 9943,
  [SMALL_STATE(369)] = 9952,
  [SMALL_STATE(370)] = 9965,
  [SMALL_STATE(371)] = 9978,
  [SMALL_STATE(372)] = 9987,
  [SMALL_STATE(373)] = 9996,
  [SMALL_STATE(374)] = 10005,
  [SMALL_STATE(375)] = 10014,
  [SMALL_STATE(376)] = 10027,
  [SMALL_STATE(377)] = 10040,
  [SMALL_STATE(378)] = 10053,
  [SMALL_STATE(379)] = 10062,
  [SMALL_STATE(380)] = 10075,
  [SMALL_STATE(381)] = 10088,
  [SMALL_STATE(382)] = 10097,
  [SMALL_STATE(383)] = 10110,
  [SMALL_STATE(384)] = 10119,
  [SMALL_STATE(385)] = 10132,
  [SMALL_STATE(386)] = 10145,
  [SMALL_STATE(387)] = 10158,
  [SMALL_STATE(388)] = 10167,
  [SMALL_STATE(389)] = 10180,
  [SMALL_STATE(390)] = 10193,
  [SMALL_STATE(391)] = 10202,
  [SMALL_STATE(392)] = 10215,
  [SMALL_STATE(393)] = 10228,
  [SMALL_STATE(394)] = 10241,
  [SMALL_STATE(395)] = 10254,
  [SMALL_STATE(396)] = 10263,
  [SMALL_STATE(397)] = 10276,
  [SMALL_STATE(398)] = 10285,
  [SMALL_STATE(399)] = 10298,
  [SMALL_STATE(400)] = 10311,
  [SMALL_STATE(401)] = 10324,
  [SMALL_STATE(402)] = 10337,
  [SMALL_STATE(403)] = 10350,
  [SMALL_STATE(404)] = 10363,
  [SMALL_STATE(405)] = 10376,
  [SMALL_STATE(406)] = 10385,
  [SMALL_STATE(407)] = 10398,
  [SMALL_STATE(408)] = 10411,
  [SMALL_STATE(409)] = 10424,
  [SMALL_STATE(410)] = 10437,
  [SMALL_STATE(411)] = 10446,
  [SMALL_STATE(412)] = 10455,
  [SMALL_STATE(413)] = 10468,
  [SMALL_STATE(414)] = 10481,
  [SMALL_STATE(415)] = 10490,
  [SMALL_STATE(416)] = 10499,
  [SMALL_STATE(417)] = 10512,
  [SMALL_STATE(418)] = 10523,
  [SMALL_STATE(419)] = 10536,
  [SMALL_STATE(420)] = 10549,
  [SMALL_STATE(421)] = 10562,
  [SMALL_STATE(422)] = 10575,
  [SMALL_STATE(423)] = 10588,
  [SMALL_STATE(424)] = 10601,
  [SMALL_STATE(425)] = 10610,
  [SMALL_STATE(426)] = 10623,
  [SMALL_STATE(427)] = 10636,
  [SMALL_STATE(428)] = 10645,
  [SMALL_STATE(429)] = 10654,
  [SMALL_STATE(430)] = 10667,
  [SMALL_STATE(431)] = 10680,
  [SMALL_STATE(432)] = 10693,
  [SMALL_STATE(433)] = 10706,
  [SMALL_STATE(434)] = 10715,
  [SMALL_STATE(435)] = 10724,
  [SMALL_STATE(436)] = 10733,
  [SMALL_STATE(437)] = 10746,
  [SMALL_STATE(438)] = 10759,
  [SMALL_STATE(439)] = 10768,
  [SMALL_STATE(440)] = 10781,
  [SMALL_STATE(441)] = 10792,
  [SMALL_STATE(442)] = 10801,
  [SMALL_STATE(443)] = 10814,
  [SMALL_STATE(444)] = 10827,
  [SMALL_STATE(445)] = 10837,
  [SMALL_STATE(446)] = 10847,
  [SMALL_STATE(447)] = 10857,
  [SMALL_STATE(448)] = 10867,
  [SMALL_STATE(449)] = 10875,
  [SMALL_STATE(450)] = 10885,
  [SMALL_STATE(451)] = 10895,
  [SMALL_STATE(452)] = 10905,
  [SMALL_STATE(453)] = 10915,
  [SMALL_STATE(454)] = 10923,
  [SMALL_STATE(455)] = 10933,
  [SMALL_STATE(456)] = 10943,
  [SMALL_STATE(457)] = 10951,
  [SMALL_STATE(458)] = 10961,
  [SMALL_STATE(459)] = 10971,
  [SMALL_STATE(460)] = 10981,
  [SMALL_STATE(461)] = 10991,
  [SMALL_STATE(462)] = 10999,
  [SMALL_STATE(463)] = 11007,
  [SMALL_STATE(464)] = 11017,
  [SMALL_STATE(465)] = 11027,
  [SMALL_STATE(466)] = 11037,
  [SMALL_STATE(467)] = 11047,
  [SMALL_STATE(468)] = 11057,
  [SMALL_STATE(469)] = 11065,
  [SMALL_STATE(470)] = 11073,
  [SMALL_STATE(471)] = 11081,
  [SMALL_STATE(472)] = 11089,
  [SMALL_STATE(473)] = 11099,
  [SMALL_STATE(474)] = 11109,
  [SMALL_STATE(475)] = 11117,
  [SMALL_STATE(476)] = 11127,
  [SMALL_STATE(477)] = 11137,
  [SMALL_STATE(478)] = 11147,
  [SMALL_STATE(479)] = 11157,
  [SMALL_STATE(480)] = 11167,
  [SMALL_STATE(481)] = 11177,
  [SMALL_STATE(482)] = 11185,
  [SMALL_STATE(483)] = 11195,
  [SMALL_STATE(484)] = 11205,
  [SMALL_STATE(485)] = 11213,
  [SMALL_STATE(486)] = 11221,
  [SMALL_STATE(487)] = 11229,
  [SMALL_STATE(488)] = 11237,
  [SMALL_STATE(489)] = 11247,
  [SMALL_STATE(490)] = 11257,
  [SMALL_STATE(491)] = 11265,
  [SMALL_STATE(492)] = 11273,
  [SMALL_STATE(493)] = 11283,
  [SMALL_STATE(494)] = 11293,
  [SMALL_STATE(495)] = 11303,
  [SMALL_STATE(496)] = 11311,
  [SMALL_STATE(497)] = 11321,
  [SMALL_STATE(498)] = 11329,
  [SMALL_STATE(499)] = 11339,
  [SMALL_STATE(500)] = 11349,
  [SMALL_STATE(501)] = 11359,
  [SMALL_STATE(502)] = 11367,
  [SMALL_STATE(503)] = 11377,
  [SMALL_STATE(504)] = 11387,
  [SMALL_STATE(505)] = 11397,
  [SMALL_STATE(506)] = 11407,
  [SMALL_STATE(507)] = 11417,
  [SMALL_STATE(508)] = 11425,
  [SMALL_STATE(509)] = 11433,
  [SMALL_STATE(510)] = 11443,
  [SMALL_STATE(511)] = 11453,
  [SMALL_STATE(512)] = 11463,
  [SMALL_STATE(513)] = 11470,
  [SMALL_STATE(514)] = 11477,
  [SMALL_STATE(515)] = 11484,
  [SMALL_STATE(516)] = 11491,
  [SMALL_STATE(517)] = 11498,
  [SMALL_STATE(518)] = 11505,
  [SMALL_STATE(519)] = 11512,
  [SMALL_STATE(520)] = 11519,
  [SMALL_STATE(521)] = 11526,
  [SMALL_STATE(522)] = 11533,
  [SMALL_STATE(523)] = 11540,
  [SMALL_STATE(524)] = 11547,
  [SMALL_STATE(525)] = 11554,
  [SMALL_STATE(526)] = 11561,
  [SMALL_STATE(527)] = 11568,
  [SMALL_STATE(528)] = 11575,
  [SMALL_STATE(529)] = 11582,
  [SMALL_STATE(530)] = 11589,
  [SMALL_STATE(531)] = 11596,
  [SMALL_STATE(532)] = 11603,
  [SMALL_STATE(533)] = 11610,
  [SMALL_STATE(534)] = 11617,
  [SMALL_STATE(535)] = 11624,
  [SMALL_STATE(536)] = 11631,
  [SMALL_STATE(537)] = 11638,
  [SMALL_STATE(538)] = 11645,
  [SMALL_STATE(539)] = 11652,
  [SMALL_STATE(540)] = 11659,
  [SMALL_STATE(541)] = 11666,
  [SMALL_STATE(542)] = 11673,
  [SMALL_STATE(543)] = 11680,
  [SMALL_STATE(544)] = 11687,
  [SMALL_STATE(545)] = 11694,
  [SMALL_STATE(546)] = 11701,
  [SMALL_STATE(547)] = 11708,
  [SMALL_STATE(548)] = 11715,
  [SMALL_STATE(549)] = 11722,
  [SMALL_STATE(550)] = 11729,
  [SMALL_STATE(551)] = 11736,
  [SMALL_STATE(552)] = 11743,
  [SMALL_STATE(553)] = 11750,
  [SMALL_STATE(554)] = 11757,
  [SMALL_STATE(555)] = 11764,
  [SMALL_STATE(556)] = 11771,
  [SMALL_STATE(557)] = 11778,
  [SMALL_STATE(558)] = 11785,
  [SMALL_STATE(559)] = 11792,
  [SMALL_STATE(560)] = 11799,
  [SMALL_STATE(561)] = 11806,
  [SMALL_STATE(562)] = 11813,
  [SMALL_STATE(563)] = 11820,
  [SMALL_STATE(564)] = 11827,
  [SMALL_STATE(565)] = 11834,
  [SMALL_STATE(566)] = 11841,
  [SMALL_STATE(567)] = 11848,
  [SMALL_STATE(568)] = 11855,
  [SMALL_STATE(569)] = 11862,
  [SMALL_STATE(570)] = 11869,
  [SMALL_STATE(571)] = 11876,
  [SMALL_STATE(572)] = 11883,
  [SMALL_STATE(573)] = 11890,
  [SMALL_STATE(574)] = 11897,
  [SMALL_STATE(575)] = 11904,
  [SMALL_STATE(576)] = 11911,
  [SMALL_STATE(577)] = 11918,
  [SMALL_STATE(578)] = 11925,
  [SMALL_STATE(579)] = 11932,
  [SMALL_STATE(580)] = 11939,
  [SMALL_STATE(581)] = 11946,
  [SMALL_STATE(582)] = 11953,
  [SMALL_STATE(583)] = 11960,
  [SMALL_STATE(584)] = 11967,
  [SMALL_STATE(585)] = 11974,
  [SMALL_STATE(586)] = 11981,
  [SMALL_STATE(587)] = 11988,
  [SMALL_STATE(588)] = 11995,
  [SMALL_STATE(589)] = 12002,
  [SMALL_STATE(590)] = 12009,
  [SMALL_STATE(591)] = 12016,
  [SMALL_STATE(592)] = 12023,
  [SMALL_STATE(593)] = 12030,
  [SMALL_STATE(594)] = 12037,
  [SMALL_STATE(595)] = 12044,
  [SMALL_STATE(596)] = 12051,
  [SMALL_STATE(597)] = 12058,
  [SMALL_STATE(598)] = 12065,
  [SMALL_STATE(599)] = 12072,
  [SMALL_STATE(600)] = 12079,
  [SMALL_STATE(601)] = 12086,
  [SMALL_STATE(602)] = 12093,
  [SMALL_STATE(603)] = 12100,
  [SMALL_STATE(604)] = 12107,
  [SMALL_STATE(605)] = 12114,
  [SMALL_STATE(606)] = 12121,
  [SMALL_STATE(607)] = 12128,
  [SMALL_STATE(608)] = 12135,
  [SMALL_STATE(609)] = 12142,
  [SMALL_STATE(610)] = 12149,
  [SMALL_STATE(611)] = 12156,
  [SMALL_STATE(612)] = 12163,
  [SMALL_STATE(613)] = 12170,
  [SMALL_STATE(614)] = 12177,
  [SMALL_STATE(615)] = 12184,
  [SMALL_STATE(616)] = 12191,
  [SMALL_STATE(617)] = 12198,
  [SMALL_STATE(618)] = 12205,
  [SMALL_STATE(619)] = 12212,
  [SMALL_STATE(620)] = 12219,
  [SMALL_STATE(621)] = 12226,
  [SMALL_STATE(622)] = 12233,
  [SMALL_STATE(623)] = 12240,
  [SMALL_STATE(624)] = 12247,
  [SMALL_STATE(625)] = 12254,
  [SMALL_STATE(626)] = 12261,
  [SMALL_STATE(627)] = 12268,
  [SMALL_STATE(628)] = 12275,
  [SMALL_STATE(629)] = 12282,
  [SMALL_STATE(630)] = 12289,
  [SMALL_STATE(631)] = 12296,
  [SMALL_STATE(632)] = 12303,
  [SMALL_STATE(633)] = 12310,
  [SMALL_STATE(634)] = 12317,
  [SMALL_STATE(635)] = 12324,
  [SMALL_STATE(636)] = 12331,
  [SMALL_STATE(637)] = 12338,
  [SMALL_STATE(638)] = 12345,
  [SMALL_STATE(639)] = 12352,
  [SMALL_STATE(640)] = 12359,
  [SMALL_STATE(641)] = 12366,
  [SMALL_STATE(642)] = 12373,
  [SMALL_STATE(643)] = 12380,
  [SMALL_STATE(644)] = 12387,
  [SMALL_STATE(645)] = 12394,
  [SMALL_STATE(646)] = 12401,
  [SMALL_STATE(647)] = 12408,
  [SMALL_STATE(648)] = 12415,
  [SMALL_STATE(649)] = 12422,
  [SMALL_STATE(650)] = 12429,
  [SMALL_STATE(651)] = 12436,
  [SMALL_STATE(652)] = 12443,
  [SMALL_STATE(653)] = 12450,
  [SMALL_STATE(654)] = 12457,
  [SMALL_STATE(655)] = 12464,
  [SMALL_STATE(656)] = 12471,
  [SMALL_STATE(657)] = 12478,
  [SMALL_STATE(658)] = 12485,
  [SMALL_STATE(659)] = 12492,
  [SMALL_STATE(660)] = 12499,
  [SMALL_STATE(661)] = 12506,
  [SMALL_STATE(662)] = 12513,
  [SMALL_STATE(663)] = 12520,
  [SMALL_STATE(664)] = 12527,
  [SMALL_STATE(665)] = 12534,
  [SMALL_STATE(666)] = 12541,
  [SMALL_STATE(667)] = 12548,
  [SMALL_STATE(668)] = 12555,
  [SMALL_STATE(669)] = 12562,
  [SMALL_STATE(670)] = 12569,
  [SMALL_STATE(671)] = 12576,
  [SMALL_STATE(672)] = 12583,
  [SMALL_STATE(673)] = 12590,
  [SMALL_STATE(674)] = 12597,
  [SMALL_STATE(675)] = 12604,
  [SMALL_STATE(676)] = 12611,
  [SMALL_STATE(677)] = 12618,
  [SMALL_STATE(678)] = 12625,
  [SMALL_STATE(679)] = 12632,
  [SMALL_STATE(680)] = 12639,
  [SMALL_STATE(681)] = 12646,
  [SMALL_STATE(682)] = 12653,
  [SMALL_STATE(683)] = 12660,
  [SMALL_STATE(684)] = 12667,
  [SMALL_STATE(685)] = 12674,
  [SMALL_STATE(686)] = 12681,
  [SMALL_STATE(687)] = 12688,
  [SMALL_STATE(688)] = 12695,
  [SMALL_STATE(689)] = 12702,
  [SMALL_STATE(690)] = 12709,
  [SMALL_STATE(691)] = 12716,
  [SMALL_STATE(692)] = 12723,
  [SMALL_STATE(693)] = 12730,
  [SMALL_STATE(694)] = 12737,
  [SMALL_STATE(695)] = 12744,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(682),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(681),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(680),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(679),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(677),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(676),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(675),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(674),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(673),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(671),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(670),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(669),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(668),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(667),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(666),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(236),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(682),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(681),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(680),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(673),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(671),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(670),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(669),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(668),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(667),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(401),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 17),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 17),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 17), SHIFT_REPEAT(326),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4, .production_id = 10),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4, .production_id = 10),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 15),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 15),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 23),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 23),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 49),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 49),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 52),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 52),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 43),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 15, .production_id = 43),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 57),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 15, .production_id = 57),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 17, .production_id = 52),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 52),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 18, .production_id = 52),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 10),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 10),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 11),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 11),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 30),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 30),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 3, .production_id = 10),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 3, .production_id = 10),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 8, .production_id = 10),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 8, .production_id = 10),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 5, .production_id = 10),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 5, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 5, .production_id = 10),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 5, .production_id = 10),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 43),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 43),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 5, .production_id = 10),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 5, .production_id = 10),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 52),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 52),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 5, .production_id = 10),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 5, .production_id = 10),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 50),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 12, .production_id = 50),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 5, .production_id = 15),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 5, .production_id = 15),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 5, .production_id = 10),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 5, .production_id = 10),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 33),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 33),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_avec, 5, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_avec, 5, .production_id = 10),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 5, .production_id = 10),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 5, .production_id = 10),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 29),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 29),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 43),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 43),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 5, .production_id = 10),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 5, .production_id = 10),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 47),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 47),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 36),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 36),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 46),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 46),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 43),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 43),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 56),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 14, .production_id = 56),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 3, .production_id = 10),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 3, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 28),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 28),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 4, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 4, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 41),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 41),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 10, .production_id = 39),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 10, .production_id = 39),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 3, .production_id = 10),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 3, .production_id = 10),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 10),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 10),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(503),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(690),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 6),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(396),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 12),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(634),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(505),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(457),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(420),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(614),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(367),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(695),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(616),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(134),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(464),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(480),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7, .production_id = 14),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(377),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 5, .production_id = 31),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 32),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 7),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 8),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 9),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(386),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(580),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 5),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 2),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(238),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5, .production_id = 16),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 4),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 42),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 42), SHIFT_REPEAT(328),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4, .production_id = 27),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(500),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 3, .production_id = 18),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 2),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 6, .production_id = 19),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 6, .production_id = 20),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2), SHIFT_REPEAT(324),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 7, .production_id = 26),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 3, .production_id = 24),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 48),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 5, .production_id = 34),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 3),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 3, .production_id = 13),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_taux_or_montant, 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rule, 1, .production_id = 22),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 5, .production_id = 21),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 44),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 37),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 5),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 45),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e_units, 1),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_si, 6, .production_id = 40),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 38),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 3, .production_id = 25),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 11, .production_id = 55),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 4, .production_id = 54),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 4, .production_id = 53),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 5, .production_id = 35),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 10, .production_id = 51),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_sinon, 3),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 3),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 3),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1582] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
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
