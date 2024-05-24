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
#define STATE_COUNT 663
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 58

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
  [43] = {.index = 96, .length = 3},
  [44] = {.index = 99, .length = 4},
  [45] = {.index = 103, .length = 4},
  [46] = {.index = 107, .length = 4},
  [47] = {.index = 111, .length = 4},
  [48] = {.index = 115, .length = 1},
  [49] = {.index = 116, .length = 4},
  [50] = {.index = 120, .length = 5},
  [51] = {.index = 125, .length = 5},
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
    {field_ceiling, 0, .inherited = true},
    {field_ceiling, 1, .inherited = true},
  [96] =
    {field_assiette, 3},
    {field_ceiling, 6, .inherited = true},
    {field_m_name, 0},
  [99] =
    {field_in, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [103] =
    {field_except, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [107] =
    {field_from, 3},
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
  [111] =
    {field_m_name, 0},
    {field_to, 3},
    {field_unit, 5},
    {field_unit, 6},
  [115] =
    {field_ceiling, 1, .inherited = true},
  [116] =
    {field_except, 6},
    {field_in, 4},
    {field_ref, 1},
    {field_ref, 2},
  [120] =
    {field_from, 3},
    {field_m_name, 0},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [125] =
    {field_m_name, 0},
    {field_to, 3},
    {field_unit, 5},
    {field_unit, 6},
    {field_unit, 7},
  [130] =
    {field_assiette, 3},
    {field_ceiling, 8, .inherited = true},
    {field_m_name, 0},
    {field_multiplier, 5},
  [134] =
    {field_ceiling, 1},
  [135] =
    {field_ceiling, 2},
  [136] =
    {field_except, 7},
    {field_in, 5},
    {field_ref, 1},
    {field_ref, 2},
    {field_ref, 3},
  [141] =
    {field_from, 3},
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 7},
    {field_unit, 8},
  [146] =
    {field_from, 3},
    {field_m_name, 0},
    {field_to, 5},
    {field_unit, 7},
    {field_unit, 8},
    {field_unit, 9},
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
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 31,
  [35] = 31,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 36,
  [42] = 42,
  [43] = 38,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 45,
  [52] = 47,
  [53] = 47,
  [54] = 39,
  [55] = 40,
  [56] = 45,
  [57] = 50,
  [58] = 48,
  [59] = 42,
  [60] = 42,
  [61] = 42,
  [62] = 62,
  [63] = 48,
  [64] = 47,
  [65] = 65,
  [66] = 45,
  [67] = 44,
  [68] = 50,
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
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 132,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 133,
  [151] = 136,
  [152] = 135,
  [153] = 138,
  [154] = 137,
  [155] = 140,
  [156] = 139,
  [157] = 157,
  [158] = 158,
  [159] = 133,
  [160] = 139,
  [161] = 138,
  [162] = 140,
  [163] = 142,
  [164] = 164,
  [165] = 145,
  [166] = 144,
  [167] = 143,
  [168] = 148,
  [169] = 146,
  [170] = 149,
  [171] = 137,
  [172] = 135,
  [173] = 136,
  [174] = 147,
  [175] = 146,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 142,
  [183] = 183,
  [184] = 143,
  [185] = 144,
  [186] = 149,
  [187] = 148,
  [188] = 145,
  [189] = 189,
  [190] = 190,
  [191] = 157,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 194,
  [197] = 193,
  [198] = 192,
  [199] = 189,
  [200] = 194,
  [201] = 189,
  [202] = 157,
  [203] = 147,
  [204] = 192,
  [205] = 205,
  [206] = 179,
  [207] = 178,
  [208] = 181,
  [209] = 183,
  [210] = 210,
  [211] = 177,
  [212] = 177,
  [213] = 178,
  [214] = 158,
  [215] = 215,
  [216] = 180,
  [217] = 181,
  [218] = 176,
  [219] = 219,
  [220] = 177,
  [221] = 183,
  [222] = 176,
  [223] = 164,
  [224] = 158,
  [225] = 178,
  [226] = 205,
  [227] = 205,
  [228] = 164,
  [229] = 180,
  [230] = 230,
  [231] = 179,
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
  [244] = 190,
  [245] = 245,
  [246] = 215,
  [247] = 247,
  [248] = 219,
  [249] = 249,
  [250] = 219,
  [251] = 251,
  [252] = 252,
  [253] = 249,
  [254] = 254,
  [255] = 251,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 249,
  [260] = 251,
  [261] = 257,
  [262] = 258,
  [263] = 263,
  [264] = 264,
  [265] = 242,
  [266] = 230,
  [267] = 257,
  [268] = 268,
  [269] = 258,
  [270] = 243,
  [271] = 271,
  [272] = 249,
  [273] = 251,
  [274] = 257,
  [275] = 258,
  [276] = 247,
  [277] = 263,
  [278] = 278,
  [279] = 271,
  [280] = 230,
  [281] = 281,
  [282] = 243,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 264,
  [287] = 283,
  [288] = 278,
  [289] = 271,
  [290] = 281,
  [291] = 243,
  [292] = 215,
  [293] = 293,
  [294] = 190,
  [295] = 281,
  [296] = 281,
  [297] = 119,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 118,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 106,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 300,
  [313] = 313,
  [314] = 89,
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
  [333] = 133,
  [334] = 140,
  [335] = 139,
  [336] = 336,
  [337] = 133,
  [338] = 138,
  [339] = 339,
  [340] = 70,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 138,
  [346] = 139,
  [347] = 140,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 348,
  [352] = 352,
  [353] = 76,
  [354] = 354,
  [355] = 149,
  [356] = 356,
  [357] = 148,
  [358] = 358,
  [359] = 359,
  [360] = 142,
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
  [372] = 372,
  [373] = 146,
  [374] = 374,
  [375] = 375,
  [376] = 145,
  [377] = 144,
  [378] = 378,
  [379] = 372,
  [380] = 143,
  [381] = 381,
  [382] = 356,
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
  [396] = 374,
  [397] = 397,
  [398] = 374,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 387,
  [404] = 356,
  [405] = 374,
  [406] = 369,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 356,
  [412] = 412,
  [413] = 409,
  [414] = 414,
  [415] = 415,
  [416] = 366,
  [417] = 363,
  [418] = 393,
  [419] = 419,
  [420] = 420,
  [421] = 363,
  [422] = 374,
  [423] = 419,
  [424] = 407,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 143,
  [434] = 144,
  [435] = 435,
  [436] = 375,
  [437] = 145,
  [438] = 438,
  [439] = 146,
  [440] = 149,
  [441] = 441,
  [442] = 356,
  [443] = 142,
  [444] = 358,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 359,
  [450] = 148,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 118,
  [457] = 119,
  [458] = 106,
  [459] = 157,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 121,
  [465] = 455,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 455,
  [474] = 474,
  [475] = 89,
  [476] = 476,
  [477] = 466,
  [478] = 478,
  [479] = 479,
  [480] = 80,
  [481] = 127,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 455,
  [487] = 487,
  [488] = 488,
  [489] = 119,
  [490] = 107,
  [491] = 491,
  [492] = 492,
  [493] = 114,
  [494] = 494,
  [495] = 109,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 118,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 106,
  [507] = 507,
  [508] = 508,
  [509] = 474,
  [510] = 510,
  [511] = 511,
  [512] = 157,
  [513] = 513,
  [514] = 514,
  [515] = 89,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 492,
  [524] = 524,
  [525] = 525,
  [526] = 455,
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
  [555] = 544,
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
  [589] = 552,
  [590] = 588,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 542,
  [595] = 595,
  [596] = 553,
  [597] = 564,
  [598] = 598,
  [599] = 599,
  [600] = 574,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 586,
  [606] = 606,
  [607] = 607,
  [608] = 542,
  [609] = 564,
  [610] = 610,
  [611] = 452,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 542,
  [616] = 564,
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
  [651] = 578,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 574,
  [658] = 645,
  [659] = 618,
  [660] = 660,
  [661] = 661,
  [662] = 583,
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

static inline bool sym_name_character_set_5(int32_t c) {
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

static inline bool sym_name_character_set_6(int32_t c) {
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

static inline bool sym_name_character_set_7(int32_t c) {
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

static inline bool sym_name_character_set_8(int32_t c) {
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

static inline bool sym_name_character_set_11(int32_t c) {
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

static inline bool sym_name_character_set_12(int32_t c) {
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

static inline bool sym_name_character_set_13(int32_t c) {
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

static inline bool sym_name_character_set_15(int32_t c) {
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

static inline bool sym_name_character_set_16(int32_t c) {
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

static inline bool sym_name_character_set_17(int32_t c) {
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

static inline bool sym_name_character_set_18(int32_t c) {
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

static inline bool sym_name_character_set_19(int32_t c) {
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

static inline bool sym_name_character_set_20(int32_t c) {
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

static inline bool sym_name_character_set_21(int32_t c) {
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

static inline bool sym_name_character_set_22(int32_t c) {
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

static inline bool sym_name_character_set_23(int32_t c) {
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

static inline bool sym_name_character_set_24(int32_t c) {
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

static inline bool sym_name_character_set_25(int32_t c) {
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

static inline bool sym_name_character_set_26(int32_t c) {
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

static inline bool sym_name_character_set_27(int32_t c) {
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

static inline bool sym_name_character_set_28(int32_t c) {
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

static inline bool sym_name_character_set_29(int32_t c) {
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

static inline bool sym_name_character_set_30(int32_t c) {
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

static inline bool sym_name_character_set_31(int32_t c) {
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

static inline bool sym_name_character_set_32(int32_t c) {
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

static inline bool sym_name_character_set_33(int32_t c) {
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

static inline bool sym_name_character_set_34(int32_t c) {
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

static inline bool sym_name_character_set_35(int32_t c) {
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

static inline bool sym_name_character_set_36(int32_t c) {
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

static inline bool sym_name_character_set_37(int32_t c) {
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

static inline bool sym_name_character_set_38(int32_t c) {
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

static inline bool sym_name_character_set_39(int32_t c) {
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

static inline bool sym_name_character_set_40(int32_t c) {
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

static inline bool sym_name_character_set_41(int32_t c) {
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

static inline bool sym_name_character_set_42(int32_t c) {
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

static inline bool sym_name_character_set_43(int32_t c) {
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

static inline bool sym_name_character_set_44(int32_t c) {
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

static inline bool sym_name_character_set_45(int32_t c) {
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

static inline bool sym_name_character_set_46(int32_t c) {
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

static inline bool sym_name_character_set_47(int32_t c) {
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

static inline bool sym_name_character_set_48(int32_t c) {
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

static inline bool sym_name_character_set_49(int32_t c) {
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

static inline bool sym_name_character_set_50(int32_t c) {
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

static inline bool sym_name_character_set_51(int32_t c) {
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

static inline bool sym_name_character_set_52(int32_t c) {
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

static inline bool sym_name_character_set_53(int32_t c) {
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

static inline bool sym_name_character_set_54(int32_t c) {
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

static inline bool sym_name_character_set_55(int32_t c) {
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

static inline bool sym_name_character_set_56(int32_t c) {
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

static inline bool sym_name_character_set_57(int32_t c) {
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
      if (eof) ADVANCE(321);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '>') ADVANCE(1110);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(670);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'q') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(696);
      if (lookahead == '|') ADVANCE(1110);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(1063);
      if (lookahead == '2') ADVANCE(1065);
      if (lookahead == '3') ADVANCE(1062);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(881);
      if (lookahead == 'd') ADVANCE(751);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 'f') ADVANCE(883);
      if (lookahead == 'g') ADVANCE(901);
      if (lookahead == 'i') ADVANCE(858);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'm') ADVANCE(877);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == 'q') ADVANCE(949);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead == 's') ADVANCE(880);
      if (lookahead == 't') ADVANCE(748);
      if (lookahead == 'u') ADVANCE(859);
      if (lookahead == 'v') ADVANCE(967);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1064);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(991);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '1') ADVANCE(1063);
      if (lookahead == '2') ADVANCE(1065);
      if (lookahead == '3') ADVANCE(1062);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'b') ADVANCE(970);
      if (lookahead == 'c') ADVANCE(881);
      if (lookahead == 'd') ADVANCE(751);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 'f') ADVANCE(883);
      if (lookahead == 'g') ADVANCE(901);
      if (lookahead == 'i') ADVANCE(858);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'm') ADVANCE(877);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == 'q') ADVANCE(949);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead == 's') ADVANCE(880);
      if (lookahead == 't') ADVANCE(748);
      if (lookahead == 'u') ADVANCE(859);
      if (lookahead == 'v') ADVANCE(967);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1064);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(1113);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == ':') ADVANCE(1111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '!') ADVANCE(183);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1073);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(1110);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(670);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'q') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(696);
      if (lookahead == '|') ADVANCE(1110);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '>') ADVANCE(1110);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(670);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'q') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(696);
      if (lookahead == '|') ADVANCE(1110);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(343);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(346);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '!') ADVANCE(183);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(520);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(520);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(1071);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(1071);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(1075);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '!') ADVANCE(183);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1073);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '!') ADVANCE(183);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(728);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(728);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(696);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'b') ADVANCE(699);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(549);
      if (lookahead == 'v') ADVANCE(696);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == ':') ADVANCE(1114);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(63);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(64)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1046);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(66)
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1046);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(66)
      if (aux_sym_unit_token1_character_set_1(lookahead)) ADVANCE(1075);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == ':') ADVANCE(1116);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '\'') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '\'') ADVANCE(307);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(317);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(77);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(81);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 83:
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(75);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '1') ADVANCE(74);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == ':') ADVANCE(1111);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 86:
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == ':') ADVANCE(1111);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 87:
      if (lookahead == '0') ADVANCE(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == '0') ADVANCE(178);
      if (lookahead == ':') ADVANCE(1111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1102);
      if (lookahead == 'n') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(1102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(1079);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(1079);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1081);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1081);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(600);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(1098);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(1103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(1103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(1108);
      if (lookahead == 224) ADVANCE(1040);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(1104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(1104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(1078);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(1078);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(1106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(1106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(127);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(1094);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(1094);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(1096);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(1096);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(1077);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(1091);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(1091);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(1087);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(1087);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(148);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(1095);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(1095);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(152);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(1111);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead == 'd') ADVANCE(981);
      if (lookahead == 'n') ADVANCE(887);
      if (sym_name_character_set_2(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead == 'd') ADVANCE(981);
      if (sym_name_character_set_2(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(893);
      if (sym_name_character_set_2(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(823);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(804);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(890);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(982);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(784);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(885);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(974);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(755);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(953);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(910);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(983);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(822);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(1111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(1111);
      if (sym_name_character_set_1(lookahead)) ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(1097);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'n') ADVANCE(572);
      if (sym_name_character_set_2(lookahead)) ADVANCE(730);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'd') ADVANCE(717);
      if (sym_name_character_set_2(lookahead)) ADVANCE(730);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(581);
      if (sym_name_character_set_2(lookahead)) ADVANCE(730);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(482);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(427);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(576);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(718);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(706);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(428);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(580);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(424);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(262);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(704);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(383);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(675);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(395);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(600);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 268:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(714);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(719);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(483);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 305:
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 306:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 307:
      if (lookahead == 224) ADVANCE(127);
      END_STATE();
    case 308:
      if (lookahead == 224) ADVANCE(1040);
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 309:
      if (lookahead == 232) ADVANCE(221);
      END_STATE();
    case 310:
      if (lookahead == 233) ADVANCE(115);
      END_STATE();
    case 311:
      if (lookahead == 233) ADVANCE(287);
      END_STATE();
    case 312:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1070);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1053);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 318:
      if (sym_name_character_set_1(lookahead)) ADVANCE(730);
      END_STATE();
    case 319:
      if (sym_name_character_set_1(lookahead)) ADVANCE(1075);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '0') ADVANCE(1060);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1055);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(520);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(320)
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 383)) ADVANCE(730);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1129);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(1113);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1129);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_m_unary_name);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_m_array_name);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_m_baru00e8me_like_name);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_ar_unary_expression_token1);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_ar_binary_expression_token2);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ' ') ADVANCE(9);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(11);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(13);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(15);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(17);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(19);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(21);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(23);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(25);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(27);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(29);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(31);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(33);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == ' ') ADVANCE(35);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (lookahead == '!') ADVANCE(139);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(713);
      if (sym_name_character_set_4(lookahead)) ADVANCE(730);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_5(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(701);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 'v') ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_6(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_7(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_8(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_9(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_10(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_11(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_12(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_13(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(1006);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_14(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_14(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_15(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 233) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_16(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_17(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(723);
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_18(lookahead)) ADVANCE(730);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_19(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_20(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_21(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_22(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'u') ADVANCE(598);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_23(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_24(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_25(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead == 'y') ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_26(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_27(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_28(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 'x') ADVANCE(582);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_29(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(487);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_29(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(510);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_29(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(512);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_29(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(492);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_29(lookahead)) ADVANCE(730);
      if (lookahead == 'b') ADVANCE(518);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(1016);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(682);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_30(lookahead)) ADVANCE(730);
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_31(lookahead)) ADVANCE(730);
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_31(lookahead)) ADVANCE(730);
      if (lookahead == 'd') ADVANCE(1028);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_31(lookahead)) ADVANCE(730);
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_31(lookahead)) ADVANCE(730);
      if (lookahead == 'd') ADVANCE(678);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_31(lookahead)) ADVANCE(730);
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1019);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1043);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_32(lookahead)) ADVANCE(730);
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(1008);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(707);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(1025);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_33(lookahead)) ADVANCE(730);
      if (lookahead == 'f') ADVANCE(729);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_34(lookahead)) ADVANCE(730);
      if (lookahead == 'g') ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_34(lookahead)) ADVANCE(730);
      if (lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_34(lookahead)) ADVANCE(730);
      if (lookahead == 'g') ADVANCE(703);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_35(lookahead)) ADVANCE(730);
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_35(lookahead)) ADVANCE(730);
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(1028);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_36(lookahead)) ADVANCE(730);
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_37(lookahead)) ADVANCE(730);
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(686);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(674);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(1013);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(725);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_38(lookahead)) ADVANCE(730);
      if (lookahead == 'm') ADVANCE(452);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(1020);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(1021);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_40(lookahead)) ADVANCE(730);
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(583);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(724);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(505);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(653);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_41(lookahead)) ADVANCE(730);
      if (lookahead == 'p') ADVANCE(588);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_42(lookahead)) ADVANCE(730);
      if (lookahead == 'q') ADVANCE(669);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_42(lookahead)) ADVANCE(730);
      if (lookahead == 'q') ADVANCE(685);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_43(lookahead)) ADVANCE(730);
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1017);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1018);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1020);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1022);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1026);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1009);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1038);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(1039);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_45(lookahead)) ADVANCE(730);
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(619);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(689);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(415);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(489);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(662);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(609);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_46(lookahead)) ADVANCE(730);
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_47(lookahead)) ADVANCE(730);
      if (lookahead == 'v') ADVANCE(429);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_47(lookahead)) ADVANCE(730);
      if (lookahead == 'v') ADVANCE(716);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(739);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(740);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(485);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(1004);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(660);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_48(lookahead)) ADVANCE(730);
      if (lookahead == 'x') ADVANCE(664);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_49(lookahead)) ADVANCE(730);
      if (lookahead == 'y') ADVANCE(419);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(1007);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_50(lookahead)) ADVANCE(730);
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_51(lookahead)) ADVANCE(730);
      if (lookahead == 224) ADVANCE(1030);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_52(lookahead)) ADVANCE(730);
      if (lookahead == 232) ADVANCE(466);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_52(lookahead)) ADVANCE(730);
      if (lookahead == 232) ADVANCE(528);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(334);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(463);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(461);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(464);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(421);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(1024);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(1042);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(607);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(606);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(611);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(636);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(616);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(465);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_53(lookahead)) ADVANCE(730);
      if (lookahead == 233) ADVANCE(617);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(318);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(245);
      if (sym_name_character_set_44(lookahead)) ADVANCE(730);
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(245);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(91);
      if (sym_name_character_set_39(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1102);
      if (lookahead == 'n') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(90);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(188);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(271);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(195);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(205);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(208);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(100);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1098);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(101);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(264);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(202);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(189);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(242);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(254);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(282);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(106);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(107);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_54(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'b') ADVANCE(971);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(918);
      if (lookahead == 'v') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_55(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == 'e') ADVANCE(964);
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_12(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'l') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_14(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead == 'i') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_56(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'u') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_15(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 233) ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_16(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(886);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_17(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(987);
      if (lookahead == 's') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_19(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_20(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(961);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_21(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_57(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(994);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_28(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_29(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'b') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_29(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'b') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_29(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'b') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_30(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'c') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_31(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_31(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_31(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_31(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_31(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_32(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_33(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_33(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_33(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_33(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'f') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_34(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'g') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_35(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'h') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_36(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_37(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_38(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'm') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_39(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_40(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_41(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_42(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'q') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_43(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'r') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_44(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_45(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_46(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'u') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_47(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'v') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_47(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'v') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_48(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_48(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_48(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_48(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_49(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'y') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_50(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 'a') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_52(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 232) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_53(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == 233) ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(180);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(169);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(159);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(161);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(165);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(167);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(171);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(163);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(160);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(168);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(170);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(173);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(172);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(267);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(308);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(93);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1079);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(92);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(273);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(206);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(203);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(166);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(164);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(95);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1081);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(94);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(207);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(201);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(162);
      if (sym_name_character_set_3(lookahead)) ADVANCE(991);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(97);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1085);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(96);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(99);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(98);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(103);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1103);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(102);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(105);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1105);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(104);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(108);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1108);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(107);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(110);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1104);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(109);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(112);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(111);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(114);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1092);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(116);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1107);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(115);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(118);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(117);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(120);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1078);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(119);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(122);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(124);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(123);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(126);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(125);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(128);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1106);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(127);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(130);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1094);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(129);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(132);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1093);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(134);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1100);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(133);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(136);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1086);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(135);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(138);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1096);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(137);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(141);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1088);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(140);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(143);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(142);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(145);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1101);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(144);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(147);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1091);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(146);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(149);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1087);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(148);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(151);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1095);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(150);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(153);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1089);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(152);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(155);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1090);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(154);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(157);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      if (lookahead == ':') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(156);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(209);
      if (sym_name_character_set_3(lookahead)) ADVANCE(730);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1046);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1049);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1052);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1059);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1057);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '0') ADVANCE(1061);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1066);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1064);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '0') ADVANCE(1068);
      if (lookahead == ':') ADVANCE(1111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(181);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1070);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(1071);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == ' ') ADVANCE(343);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (sym_name_character_set_3(lookahead)) ADVANCE(1075);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_exposant);
      if ((8304 <= lookahead && lookahead <= 8313)) ADVANCE(1076);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_importer);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_depuis);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_nom);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_url);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_dans);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_les_ru00e8gles);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_formule);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_avec);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_remplace);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_ru00e9fu00e9rences_u00e0);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sauf_dans);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_une_possibilitu00e9);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_choix_obligatoire);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_possibilitu00e9s);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_texte);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_assiette);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_montant);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_multiplicateur);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_tranches);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_plafond);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_taux);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_inversion_numu00e9rique);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_contexte);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_variations);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_si);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_alors);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sinon);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_duru00e9e);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_jusqu_u00e0);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_unitu00e9);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_meta_name);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__paragraph_token1);
      if (lookahead == '-') ADVANCE(1109);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__key);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '"') ADVANCE(1127);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(63);
      if (lookahead != 0) ADVANCE(1122);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__key);
      if (lookahead == '\'') ADVANCE(1127);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(70);
      if (lookahead != 0) ADVANCE(1126);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1120);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(1125);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1120);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(1125);
      if (lookahead == ':') ADVANCE(1129);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1128);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1128);
      if (lookahead == ':') ADVANCE(1115);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(63);
      if (lookahead != 0) ADVANCE(1120);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1129);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '"') ADVANCE(1127);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(63);
      if (lookahead != 0) ADVANCE(1122);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '>') ADVANCE(1110);
      if (lookahead == '|') ADVANCE(1110);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1129);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(1046);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1129);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(1128);
      if (lookahead == ':') ADVANCE(1117);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(70);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\'') ADVANCE(1127);
      if (lookahead == '\n' ||
          lookahead == '#') ADVANCE(70);
      if (lookahead != 0) ADVANCE(1126);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1129);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ':') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1128);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(1129);
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
  [1] = {.lex_state = 320, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 59, .external_lex_state = 2},
  [5] = {.lex_state = 60, .external_lex_state = 2},
  [6] = {.lex_state = 60, .external_lex_state = 2},
  [7] = {.lex_state = 60, .external_lex_state = 2},
  [8] = {.lex_state = 60, .external_lex_state = 2},
  [9] = {.lex_state = 60, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 3},
  [11] = {.lex_state = 2, .external_lex_state = 3},
  [12] = {.lex_state = 2, .external_lex_state = 3},
  [13] = {.lex_state = 320, .external_lex_state = 4},
  [14] = {.lex_state = 320, .external_lex_state = 4},
  [15] = {.lex_state = 320, .external_lex_state = 4},
  [16] = {.lex_state = 320, .external_lex_state = 4},
  [17] = {.lex_state = 320, .external_lex_state = 5},
  [18] = {.lex_state = 320, .external_lex_state = 5},
  [19] = {.lex_state = 320, .external_lex_state = 5},
  [20] = {.lex_state = 320, .external_lex_state = 5},
  [21] = {.lex_state = 320, .external_lex_state = 5},
  [22] = {.lex_state = 320, .external_lex_state = 5},
  [23] = {.lex_state = 320, .external_lex_state = 5},
  [24] = {.lex_state = 320, .external_lex_state = 5},
  [25] = {.lex_state = 320, .external_lex_state = 5},
  [26] = {.lex_state = 320, .external_lex_state = 5},
  [27] = {.lex_state = 320, .external_lex_state = 5},
  [28] = {.lex_state = 320, .external_lex_state = 5},
  [29] = {.lex_state = 320, .external_lex_state = 5},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 2, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 3},
  [34] = {.lex_state = 2, .external_lex_state = 3},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 64, .external_lex_state = 2},
  [37] = {.lex_state = 64, .external_lex_state = 2},
  [38] = {.lex_state = 64, .external_lex_state = 2},
  [39] = {.lex_state = 64, .external_lex_state = 2},
  [40] = {.lex_state = 64, .external_lex_state = 2},
  [41] = {.lex_state = 64, .external_lex_state = 2},
  [42] = {.lex_state = 64, .external_lex_state = 2},
  [43] = {.lex_state = 64, .external_lex_state = 2},
  [44] = {.lex_state = 64, .external_lex_state = 2},
  [45] = {.lex_state = 64, .external_lex_state = 2},
  [46] = {.lex_state = 64, .external_lex_state = 2},
  [47] = {.lex_state = 64, .external_lex_state = 2},
  [48] = {.lex_state = 64, .external_lex_state = 2},
  [49] = {.lex_state = 64, .external_lex_state = 2},
  [50] = {.lex_state = 64, .external_lex_state = 2},
  [51] = {.lex_state = 64, .external_lex_state = 2},
  [52] = {.lex_state = 64, .external_lex_state = 2},
  [53] = {.lex_state = 64, .external_lex_state = 2},
  [54] = {.lex_state = 64, .external_lex_state = 2},
  [55] = {.lex_state = 64, .external_lex_state = 2},
  [56] = {.lex_state = 64, .external_lex_state = 2},
  [57] = {.lex_state = 64, .external_lex_state = 2},
  [58] = {.lex_state = 64, .external_lex_state = 2},
  [59] = {.lex_state = 64, .external_lex_state = 2},
  [60] = {.lex_state = 64, .external_lex_state = 2},
  [61] = {.lex_state = 64, .external_lex_state = 2},
  [62] = {.lex_state = 64, .external_lex_state = 2},
  [63] = {.lex_state = 64, .external_lex_state = 2},
  [64] = {.lex_state = 64, .external_lex_state = 2},
  [65] = {.lex_state = 64, .external_lex_state = 2},
  [66] = {.lex_state = 64, .external_lex_state = 2},
  [67] = {.lex_state = 64, .external_lex_state = 2},
  [68] = {.lex_state = 64, .external_lex_state = 2},
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
  [132] = {.lex_state = 50, .external_lex_state = 2},
  [133] = {.lex_state = 52, .external_lex_state = 2},
  [134] = {.lex_state = 50, .external_lex_state = 7},
  [135] = {.lex_state = 55, .external_lex_state = 2},
  [136] = {.lex_state = 55, .external_lex_state = 2},
  [137] = {.lex_state = 55, .external_lex_state = 2},
  [138] = {.lex_state = 52, .external_lex_state = 2},
  [139] = {.lex_state = 52, .external_lex_state = 2},
  [140] = {.lex_state = 52, .external_lex_state = 2},
  [141] = {.lex_state = 50, .external_lex_state = 3},
  [142] = {.lex_state = 52, .external_lex_state = 2},
  [143] = {.lex_state = 52, .external_lex_state = 2},
  [144] = {.lex_state = 52, .external_lex_state = 2},
  [145] = {.lex_state = 52, .external_lex_state = 2},
  [146] = {.lex_state = 52, .external_lex_state = 2},
  [147] = {.lex_state = 55, .external_lex_state = 2},
  [148] = {.lex_state = 52, .external_lex_state = 2},
  [149] = {.lex_state = 52, .external_lex_state = 2},
  [150] = {.lex_state = 52, .external_lex_state = 3},
  [151] = {.lex_state = 55, .external_lex_state = 3},
  [152] = {.lex_state = 55, .external_lex_state = 3},
  [153] = {.lex_state = 52, .external_lex_state = 3},
  [154] = {.lex_state = 55, .external_lex_state = 3},
  [155] = {.lex_state = 52, .external_lex_state = 7},
  [156] = {.lex_state = 52, .external_lex_state = 3},
  [157] = {.lex_state = 52, .external_lex_state = 2},
  [158] = {.lex_state = 52, .external_lex_state = 2},
  [159] = {.lex_state = 52, .external_lex_state = 7},
  [160] = {.lex_state = 52, .external_lex_state = 7},
  [161] = {.lex_state = 52, .external_lex_state = 7},
  [162] = {.lex_state = 52, .external_lex_state = 3},
  [163] = {.lex_state = 52, .external_lex_state = 3},
  [164] = {.lex_state = 52, .external_lex_state = 2},
  [165] = {.lex_state = 52, .external_lex_state = 3},
  [166] = {.lex_state = 52, .external_lex_state = 3},
  [167] = {.lex_state = 52, .external_lex_state = 3},
  [168] = {.lex_state = 52, .external_lex_state = 3},
  [169] = {.lex_state = 52, .external_lex_state = 7},
  [170] = {.lex_state = 52, .external_lex_state = 3},
  [171] = {.lex_state = 55, .external_lex_state = 7},
  [172] = {.lex_state = 55, .external_lex_state = 7},
  [173] = {.lex_state = 55, .external_lex_state = 7},
  [174] = {.lex_state = 55, .external_lex_state = 3},
  [175] = {.lex_state = 52, .external_lex_state = 3},
  [176] = {.lex_state = 52, .external_lex_state = 2},
  [177] = {.lex_state = 52, .external_lex_state = 2},
  [178] = {.lex_state = 52, .external_lex_state = 2},
  [179] = {.lex_state = 52, .external_lex_state = 2},
  [180] = {.lex_state = 52, .external_lex_state = 2},
  [181] = {.lex_state = 52, .external_lex_state = 2},
  [182] = {.lex_state = 52, .external_lex_state = 7},
  [183] = {.lex_state = 52, .external_lex_state = 2},
  [184] = {.lex_state = 52, .external_lex_state = 7},
  [185] = {.lex_state = 52, .external_lex_state = 7},
  [186] = {.lex_state = 52, .external_lex_state = 7},
  [187] = {.lex_state = 52, .external_lex_state = 7},
  [188] = {.lex_state = 52, .external_lex_state = 7},
  [189] = {.lex_state = 320, .external_lex_state = 2},
  [190] = {.lex_state = 52, .external_lex_state = 2},
  [191] = {.lex_state = 52, .external_lex_state = 3},
  [192] = {.lex_state = 320, .external_lex_state = 2},
  [193] = {.lex_state = 320, .external_lex_state = 2},
  [194] = {.lex_state = 320, .external_lex_state = 2},
  [195] = {.lex_state = 320, .external_lex_state = 2},
  [196] = {.lex_state = 320, .external_lex_state = 2},
  [197] = {.lex_state = 320, .external_lex_state = 2},
  [198] = {.lex_state = 320, .external_lex_state = 2},
  [199] = {.lex_state = 320, .external_lex_state = 2},
  [200] = {.lex_state = 320, .external_lex_state = 2},
  [201] = {.lex_state = 320, .external_lex_state = 2},
  [202] = {.lex_state = 52, .external_lex_state = 7},
  [203] = {.lex_state = 55, .external_lex_state = 7},
  [204] = {.lex_state = 320, .external_lex_state = 2},
  [205] = {.lex_state = 52, .external_lex_state = 2},
  [206] = {.lex_state = 52, .external_lex_state = 3},
  [207] = {.lex_state = 52, .external_lex_state = 3},
  [208] = {.lex_state = 52, .external_lex_state = 3},
  [209] = {.lex_state = 52, .external_lex_state = 7},
  [210] = {.lex_state = 320, .external_lex_state = 2},
  [211] = {.lex_state = 52, .external_lex_state = 2},
  [212] = {.lex_state = 52, .external_lex_state = 3},
  [213] = {.lex_state = 52, .external_lex_state = 2},
  [214] = {.lex_state = 52, .external_lex_state = 3},
  [215] = {.lex_state = 320, .external_lex_state = 2},
  [216] = {.lex_state = 52, .external_lex_state = 3},
  [217] = {.lex_state = 52, .external_lex_state = 7},
  [218] = {.lex_state = 52, .external_lex_state = 3},
  [219] = {.lex_state = 320, .external_lex_state = 2},
  [220] = {.lex_state = 52, .external_lex_state = 7},
  [221] = {.lex_state = 52, .external_lex_state = 3},
  [222] = {.lex_state = 52, .external_lex_state = 7},
  [223] = {.lex_state = 52, .external_lex_state = 7},
  [224] = {.lex_state = 52, .external_lex_state = 7},
  [225] = {.lex_state = 52, .external_lex_state = 7},
  [226] = {.lex_state = 52, .external_lex_state = 2},
  [227] = {.lex_state = 52, .external_lex_state = 2},
  [228] = {.lex_state = 52, .external_lex_state = 3},
  [229] = {.lex_state = 52, .external_lex_state = 7},
  [230] = {.lex_state = 320, .external_lex_state = 2},
  [231] = {.lex_state = 52, .external_lex_state = 7},
  [232] = {.lex_state = 320, .external_lex_state = 5},
  [233] = {.lex_state = 320, .external_lex_state = 5},
  [234] = {.lex_state = 320, .external_lex_state = 5},
  [235] = {.lex_state = 320, .external_lex_state = 5},
  [236] = {.lex_state = 320, .external_lex_state = 5},
  [237] = {.lex_state = 1123, .external_lex_state = 4},
  [238] = {.lex_state = 320, .external_lex_state = 5},
  [239] = {.lex_state = 1123, .external_lex_state = 4},
  [240] = {.lex_state = 320, .external_lex_state = 5},
  [241] = {.lex_state = 1123, .external_lex_state = 4},
  [242] = {.lex_state = 320, .external_lex_state = 2},
  [243] = {.lex_state = 320, .external_lex_state = 3},
  [244] = {.lex_state = 320, .external_lex_state = 7},
  [245] = {.lex_state = 320, .external_lex_state = 3},
  [246] = {.lex_state = 320, .external_lex_state = 7},
  [247] = {.lex_state = 320, .external_lex_state = 7},
  [248] = {.lex_state = 320, .external_lex_state = 7},
  [249] = {.lex_state = 320, .external_lex_state = 2},
  [250] = {.lex_state = 320, .external_lex_state = 3},
  [251] = {.lex_state = 320, .external_lex_state = 2},
  [252] = {.lex_state = 320, .external_lex_state = 2},
  [253] = {.lex_state = 320, .external_lex_state = 2},
  [254] = {.lex_state = 320, .external_lex_state = 2},
  [255] = {.lex_state = 320, .external_lex_state = 2},
  [256] = {.lex_state = 320, .external_lex_state = 2},
  [257] = {.lex_state = 320, .external_lex_state = 2},
  [258] = {.lex_state = 320, .external_lex_state = 2},
  [259] = {.lex_state = 320, .external_lex_state = 2},
  [260] = {.lex_state = 320, .external_lex_state = 2},
  [261] = {.lex_state = 320, .external_lex_state = 2},
  [262] = {.lex_state = 320, .external_lex_state = 2},
  [263] = {.lex_state = 320, .external_lex_state = 3},
  [264] = {.lex_state = 320, .external_lex_state = 2},
  [265] = {.lex_state = 320, .external_lex_state = 2},
  [266] = {.lex_state = 320, .external_lex_state = 3},
  [267] = {.lex_state = 320, .external_lex_state = 2},
  [268] = {.lex_state = 320, .external_lex_state = 2},
  [269] = {.lex_state = 320, .external_lex_state = 2},
  [270] = {.lex_state = 320, .external_lex_state = 3},
  [271] = {.lex_state = 320, .external_lex_state = 2},
  [272] = {.lex_state = 320, .external_lex_state = 2},
  [273] = {.lex_state = 320, .external_lex_state = 2},
  [274] = {.lex_state = 320, .external_lex_state = 2},
  [275] = {.lex_state = 320, .external_lex_state = 2},
  [276] = {.lex_state = 320, .external_lex_state = 7},
  [277] = {.lex_state = 320, .external_lex_state = 3},
  [278] = {.lex_state = 320, .external_lex_state = 2},
  [279] = {.lex_state = 320, .external_lex_state = 2},
  [280] = {.lex_state = 320, .external_lex_state = 7},
  [281] = {.lex_state = 320, .external_lex_state = 7},
  [282] = {.lex_state = 320, .external_lex_state = 3},
  [283] = {.lex_state = 320, .external_lex_state = 2},
  [284] = {.lex_state = 320, .external_lex_state = 2},
  [285] = {.lex_state = 320, .external_lex_state = 2},
  [286] = {.lex_state = 320, .external_lex_state = 2},
  [287] = {.lex_state = 320, .external_lex_state = 2},
  [288] = {.lex_state = 320, .external_lex_state = 2},
  [289] = {.lex_state = 320, .external_lex_state = 2},
  [290] = {.lex_state = 320, .external_lex_state = 7},
  [291] = {.lex_state = 320, .external_lex_state = 3},
  [292] = {.lex_state = 320, .external_lex_state = 3},
  [293] = {.lex_state = 55, .external_lex_state = 8},
  [294] = {.lex_state = 320, .external_lex_state = 3},
  [295] = {.lex_state = 320, .external_lex_state = 7},
  [296] = {.lex_state = 320, .external_lex_state = 7},
  [297] = {.lex_state = 52, .external_lex_state = 2},
  [298] = {.lex_state = 320, .external_lex_state = 2},
  [299] = {.lex_state = 320, .external_lex_state = 2},
  [300] = {.lex_state = 320, .external_lex_state = 3},
  [301] = {.lex_state = 320, .external_lex_state = 2},
  [302] = {.lex_state = 52, .external_lex_state = 2},
  [303] = {.lex_state = 320, .external_lex_state = 4},
  [304] = {.lex_state = 320, .external_lex_state = 4},
  [305] = {.lex_state = 320, .external_lex_state = 4},
  [306] = {.lex_state = 320, .external_lex_state = 2},
  [307] = {.lex_state = 320, .external_lex_state = 4},
  [308] = {.lex_state = 52, .external_lex_state = 2},
  [309] = {.lex_state = 320, .external_lex_state = 2},
  [310] = {.lex_state = 320, .external_lex_state = 4},
  [311] = {.lex_state = 50, .external_lex_state = 5},
  [312] = {.lex_state = 320, .external_lex_state = 2},
  [313] = {.lex_state = 320, .external_lex_state = 4},
  [314] = {.lex_state = 52, .external_lex_state = 2},
  [315] = {.lex_state = 320, .external_lex_state = 3},
  [316] = {.lex_state = 52, .external_lex_state = 3},
  [317] = {.lex_state = 320, .external_lex_state = 2},
  [318] = {.lex_state = 52, .external_lex_state = 2},
  [319] = {.lex_state = 1123, .external_lex_state = 5},
  [320] = {.lex_state = 52, .external_lex_state = 3},
  [321] = {.lex_state = 52, .external_lex_state = 2},
  [322] = {.lex_state = 55, .external_lex_state = 2},
  [323] = {.lex_state = 320, .external_lex_state = 2},
  [324] = {.lex_state = 52, .external_lex_state = 2},
  [325] = {.lex_state = 52, .external_lex_state = 2},
  [326] = {.lex_state = 52, .external_lex_state = 2},
  [327] = {.lex_state = 320, .external_lex_state = 4},
  [328] = {.lex_state = 320, .external_lex_state = 3},
  [329] = {.lex_state = 320, .external_lex_state = 8},
  [330] = {.lex_state = 320, .external_lex_state = 8},
  [331] = {.lex_state = 320, .external_lex_state = 3},
  [332] = {.lex_state = 50, .external_lex_state = 2},
  [333] = {.lex_state = 320, .external_lex_state = 3},
  [334] = {.lex_state = 320, .external_lex_state = 7},
  [335] = {.lex_state = 320, .external_lex_state = 7},
  [336] = {.lex_state = 52, .external_lex_state = 6},
  [337] = {.lex_state = 320, .external_lex_state = 7},
  [338] = {.lex_state = 320, .external_lex_state = 7},
  [339] = {.lex_state = 52, .external_lex_state = 2},
  [340] = {.lex_state = 52, .external_lex_state = 6},
  [341] = {.lex_state = 320, .external_lex_state = 5},
  [342] = {.lex_state = 320, .external_lex_state = 2},
  [343] = {.lex_state = 320, .external_lex_state = 2},
  [344] = {.lex_state = 320, .external_lex_state = 2},
  [345] = {.lex_state = 320, .external_lex_state = 3},
  [346] = {.lex_state = 320, .external_lex_state = 3},
  [347] = {.lex_state = 320, .external_lex_state = 3},
  [348] = {.lex_state = 1119, .external_lex_state = 2},
  [349] = {.lex_state = 320, .external_lex_state = 2},
  [350] = {.lex_state = 320, .external_lex_state = 2},
  [351] = {.lex_state = 1119, .external_lex_state = 2},
  [352] = {.lex_state = 52, .external_lex_state = 3},
  [353] = {.lex_state = 52, .external_lex_state = 6},
  [354] = {.lex_state = 0, .external_lex_state = 6},
  [355] = {.lex_state = 320, .external_lex_state = 7},
  [356] = {.lex_state = 67, .external_lex_state = 2},
  [357] = {.lex_state = 320, .external_lex_state = 7},
  [358] = {.lex_state = 320, .external_lex_state = 2},
  [359] = {.lex_state = 320, .external_lex_state = 2},
  [360] = {.lex_state = 320, .external_lex_state = 7},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 52, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 0, .external_lex_state = 6},
  [366] = {.lex_state = 8, .external_lex_state = 3},
  [367] = {.lex_state = 320, .external_lex_state = 2},
  [368] = {.lex_state = 1121, .external_lex_state = 2},
  [369] = {.lex_state = 320, .external_lex_state = 2},
  [370] = {.lex_state = 52, .external_lex_state = 3},
  [371] = {.lex_state = 52, .external_lex_state = 3},
  [372] = {.lex_state = 320, .external_lex_state = 2},
  [373] = {.lex_state = 320, .external_lex_state = 7},
  [374] = {.lex_state = 67, .external_lex_state = 2},
  [375] = {.lex_state = 320, .external_lex_state = 2},
  [376] = {.lex_state = 320, .external_lex_state = 7},
  [377] = {.lex_state = 320, .external_lex_state = 7},
  [378] = {.lex_state = 1121, .external_lex_state = 2},
  [379] = {.lex_state = 320, .external_lex_state = 2},
  [380] = {.lex_state = 320, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 6},
  [382] = {.lex_state = 67, .external_lex_state = 2},
  [383] = {.lex_state = 52, .external_lex_state = 3},
  [384] = {.lex_state = 52, .external_lex_state = 3},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 320, .external_lex_state = 2},
  [388] = {.lex_state = 320, .external_lex_state = 2},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 320, .external_lex_state = 2},
  [392] = {.lex_state = 52, .external_lex_state = 3},
  [393] = {.lex_state = 1124, .external_lex_state = 3},
  [394] = {.lex_state = 0, .external_lex_state = 4},
  [395] = {.lex_state = 320, .external_lex_state = 2},
  [396] = {.lex_state = 67, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 67, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 320, .external_lex_state = 2},
  [402] = {.lex_state = 52, .external_lex_state = 2},
  [403] = {.lex_state = 320, .external_lex_state = 3},
  [404] = {.lex_state = 67, .external_lex_state = 2},
  [405] = {.lex_state = 67, .external_lex_state = 2},
  [406] = {.lex_state = 320, .external_lex_state = 3},
  [407] = {.lex_state = 320, .external_lex_state = 3},
  [408] = {.lex_state = 1124, .external_lex_state = 3},
  [409] = {.lex_state = 1124, .external_lex_state = 3},
  [410] = {.lex_state = 0, .external_lex_state = 6},
  [411] = {.lex_state = 67, .external_lex_state = 2},
  [412] = {.lex_state = 320, .external_lex_state = 2},
  [413] = {.lex_state = 1124, .external_lex_state = 3},
  [414] = {.lex_state = 52, .external_lex_state = 3},
  [415] = {.lex_state = 52, .external_lex_state = 3},
  [416] = {.lex_state = 8, .external_lex_state = 3},
  [417] = {.lex_state = 52, .external_lex_state = 2},
  [418] = {.lex_state = 1124, .external_lex_state = 3},
  [419] = {.lex_state = 320, .external_lex_state = 2},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 52, .external_lex_state = 2},
  [422] = {.lex_state = 67, .external_lex_state = 2},
  [423] = {.lex_state = 320, .external_lex_state = 3},
  [424] = {.lex_state = 320, .external_lex_state = 2},
  [425] = {.lex_state = 52, .external_lex_state = 3},
  [426] = {.lex_state = 52, .external_lex_state = 3},
  [427] = {.lex_state = 0, .external_lex_state = 6},
  [428] = {.lex_state = 8, .external_lex_state = 3},
  [429] = {.lex_state = 52, .external_lex_state = 3},
  [430] = {.lex_state = 1121, .external_lex_state = 2},
  [431] = {.lex_state = 52, .external_lex_state = 3},
  [432] = {.lex_state = 1121, .external_lex_state = 2},
  [433] = {.lex_state = 320, .external_lex_state = 3},
  [434] = {.lex_state = 320, .external_lex_state = 3},
  [435] = {.lex_state = 52, .external_lex_state = 3},
  [436] = {.lex_state = 320, .external_lex_state = 3},
  [437] = {.lex_state = 320, .external_lex_state = 3},
  [438] = {.lex_state = 52, .external_lex_state = 3},
  [439] = {.lex_state = 320, .external_lex_state = 3},
  [440] = {.lex_state = 320, .external_lex_state = 3},
  [441] = {.lex_state = 52, .external_lex_state = 3},
  [442] = {.lex_state = 67, .external_lex_state = 2},
  [443] = {.lex_state = 320, .external_lex_state = 3},
  [444] = {.lex_state = 320, .external_lex_state = 3},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 4},
  [448] = {.lex_state = 52, .external_lex_state = 3},
  [449] = {.lex_state = 320, .external_lex_state = 3},
  [450] = {.lex_state = 320, .external_lex_state = 3},
  [451] = {.lex_state = 52, .external_lex_state = 2},
  [452] = {.lex_state = 52, .external_lex_state = 3},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 67, .external_lex_state = 2},
  [456] = {.lex_state = 52, .external_lex_state = 3},
  [457] = {.lex_state = 52, .external_lex_state = 3},
  [458] = {.lex_state = 52, .external_lex_state = 3},
  [459] = {.lex_state = 320, .external_lex_state = 3},
  [460] = {.lex_state = 52, .external_lex_state = 3},
  [461] = {.lex_state = 52, .external_lex_state = 3},
  [462] = {.lex_state = 8, .external_lex_state = 3},
  [463] = {.lex_state = 1124, .external_lex_state = 2},
  [464] = {.lex_state = 8, .external_lex_state = 3},
  [465] = {.lex_state = 67, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 4},
  [467] = {.lex_state = 0, .external_lex_state = 3},
  [468] = {.lex_state = 0, .external_lex_state = 8},
  [469] = {.lex_state = 0, .external_lex_state = 8},
  [470] = {.lex_state = 0, .external_lex_state = 8},
  [471] = {.lex_state = 0, .external_lex_state = 8},
  [472] = {.lex_state = 0, .external_lex_state = 8},
  [473] = {.lex_state = 67, .external_lex_state = 2},
  [474] = {.lex_state = 1124, .external_lex_state = 2},
  [475] = {.lex_state = 52, .external_lex_state = 3},
  [476] = {.lex_state = 52, .external_lex_state = 3},
  [477] = {.lex_state = 0, .external_lex_state = 4},
  [478] = {.lex_state = 52, .external_lex_state = 3},
  [479] = {.lex_state = 1124, .external_lex_state = 3},
  [480] = {.lex_state = 8, .external_lex_state = 3},
  [481] = {.lex_state = 8, .external_lex_state = 3},
  [482] = {.lex_state = 52, .external_lex_state = 3},
  [483] = {.lex_state = 52, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 8},
  [485] = {.lex_state = 0, .external_lex_state = 8},
  [486] = {.lex_state = 67, .external_lex_state = 2},
  [487] = {.lex_state = 52, .external_lex_state = 3},
  [488] = {.lex_state = 320, .external_lex_state = 3},
  [489] = {.lex_state = 320, .external_lex_state = 3},
  [490] = {.lex_state = 8, .external_lex_state = 3},
  [491] = {.lex_state = 0, .external_lex_state = 8},
  [492] = {.lex_state = 320, .external_lex_state = 2},
  [493] = {.lex_state = 8, .external_lex_state = 3},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 8, .external_lex_state = 3},
  [496] = {.lex_state = 52, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 8},
  [498] = {.lex_state = 0, .external_lex_state = 6},
  [499] = {.lex_state = 52, .external_lex_state = 3},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 320, .external_lex_state = 3},
  [502] = {.lex_state = 0, .external_lex_state = 3},
  [503] = {.lex_state = 0, .external_lex_state = 4},
  [504] = {.lex_state = 52, .external_lex_state = 3},
  [505] = {.lex_state = 0, .external_lex_state = 8},
  [506] = {.lex_state = 320, .external_lex_state = 3},
  [507] = {.lex_state = 52, .external_lex_state = 3},
  [508] = {.lex_state = 52, .external_lex_state = 3},
  [509] = {.lex_state = 1124, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 8},
  [511] = {.lex_state = 52, .external_lex_state = 3},
  [512] = {.lex_state = 320, .external_lex_state = 7},
  [513] = {.lex_state = 0, .external_lex_state = 8},
  [514] = {.lex_state = 0, .external_lex_state = 4},
  [515] = {.lex_state = 320, .external_lex_state = 3},
  [516] = {.lex_state = 0, .external_lex_state = 4},
  [517] = {.lex_state = 0, .external_lex_state = 4},
  [518] = {.lex_state = 0, .external_lex_state = 8},
  [519] = {.lex_state = 52, .external_lex_state = 2},
  [520] = {.lex_state = 52, .external_lex_state = 3},
  [521] = {.lex_state = 0, .external_lex_state = 8},
  [522] = {.lex_state = 0, .external_lex_state = 4},
  [523] = {.lex_state = 320, .external_lex_state = 2},
  [524] = {.lex_state = 0, .external_lex_state = 3},
  [525] = {.lex_state = 52, .external_lex_state = 2},
  [526] = {.lex_state = 67, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 3},
  [528] = {.lex_state = 0, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 3},
  [530] = {.lex_state = 0, .external_lex_state = 3},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 1124, .external_lex_state = 2},
  [534] = {.lex_state = 1124, .external_lex_state = 2},
  [535] = {.lex_state = 1124, .external_lex_state = 2},
  [536] = {.lex_state = 1124, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 3},
  [538] = {.lex_state = 0, .external_lex_state = 3},
  [539] = {.lex_state = 0, .external_lex_state = 3},
  [540] = {.lex_state = 0, .external_lex_state = 3},
  [541] = {.lex_state = 0, .external_lex_state = 7},
  [542] = {.lex_state = 0, .external_lex_state = 7},
  [543] = {.lex_state = 0, .external_lex_state = 3},
  [544] = {.lex_state = 0, .external_lex_state = 3},
  [545] = {.lex_state = 0, .external_lex_state = 3},
  [546] = {.lex_state = 0, .external_lex_state = 3},
  [547] = {.lex_state = 0, .external_lex_state = 3},
  [548] = {.lex_state = 0, .external_lex_state = 3},
  [549] = {.lex_state = 0, .external_lex_state = 7},
  [550] = {.lex_state = 52, .external_lex_state = 2},
  [551] = {.lex_state = 0, .external_lex_state = 7},
  [552] = {.lex_state = 0, .external_lex_state = 3},
  [553] = {.lex_state = 0, .external_lex_state = 3},
  [554] = {.lex_state = 0, .external_lex_state = 7},
  [555] = {.lex_state = 0, .external_lex_state = 7},
  [556] = {.lex_state = 0, .external_lex_state = 2},
  [557] = {.lex_state = 0, .external_lex_state = 7},
  [558] = {.lex_state = 0, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 3},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 3},
  [565] = {.lex_state = 0, .external_lex_state = 3},
  [566] = {.lex_state = 52, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 3},
  [568] = {.lex_state = 0, .external_lex_state = 3},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 0, .external_lex_state = 3},
  [572] = {.lex_state = 0, .external_lex_state = 3},
  [573] = {.lex_state = 0, .external_lex_state = 3},
  [574] = {.lex_state = 320, .external_lex_state = 2},
  [575] = {.lex_state = 0, .external_lex_state = 3},
  [576] = {.lex_state = 0, .external_lex_state = 3},
  [577] = {.lex_state = 0, .external_lex_state = 3},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 1124, .external_lex_state = 2},
  [580] = {.lex_state = 1124, .external_lex_state = 2},
  [581] = {.lex_state = 0, .external_lex_state = 3},
  [582] = {.lex_state = 0, .external_lex_state = 3},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 3},
  [585] = {.lex_state = 0, .external_lex_state = 3},
  [586] = {.lex_state = 0, .external_lex_state = 9},
  [587] = {.lex_state = 0, .external_lex_state = 3},
  [588] = {.lex_state = 0, .external_lex_state = 7},
  [589] = {.lex_state = 0, .external_lex_state = 3},
  [590] = {.lex_state = 0, .external_lex_state = 7},
  [591] = {.lex_state = 0, .external_lex_state = 3},
  [592] = {.lex_state = 0, .external_lex_state = 3},
  [593] = {.lex_state = 52, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 3},
  [596] = {.lex_state = 0, .external_lex_state = 3},
  [597] = {.lex_state = 0, .external_lex_state = 3},
  [598] = {.lex_state = 0, .external_lex_state = 7},
  [599] = {.lex_state = 0, .external_lex_state = 3},
  [600] = {.lex_state = 320, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 3},
  [602] = {.lex_state = 0, .external_lex_state = 3},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 0, .external_lex_state = 3},
  [605] = {.lex_state = 0, .external_lex_state = 9},
  [606] = {.lex_state = 0, .external_lex_state = 3},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 7},
  [609] = {.lex_state = 0, .external_lex_state = 3},
  [610] = {.lex_state = 0, .external_lex_state = 7},
  [611] = {.lex_state = 52, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 3},
  [613] = {.lex_state = 320, .external_lex_state = 2},
  [614] = {.lex_state = 52, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 7},
  [616] = {.lex_state = 0, .external_lex_state = 3},
  [617] = {.lex_state = 0, .external_lex_state = 3},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 2},
  [620] = {.lex_state = 0, .external_lex_state = 3},
  [621] = {.lex_state = 0, .external_lex_state = 7},
  [622] = {.lex_state = 0, .external_lex_state = 2},
  [623] = {.lex_state = 0, .external_lex_state = 3},
  [624] = {.lex_state = 0, .external_lex_state = 3},
  [625] = {.lex_state = 0, .external_lex_state = 3},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 1124, .external_lex_state = 2},
  [629] = {.lex_state = 1124, .external_lex_state = 2},
  [630] = {.lex_state = 0, .external_lex_state = 3},
  [631] = {.lex_state = 0, .external_lex_state = 3},
  [632] = {.lex_state = 52, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 3},
  [634] = {.lex_state = 0, .external_lex_state = 3},
  [635] = {.lex_state = 0, .external_lex_state = 5},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 5},
  [638] = {.lex_state = 0, .external_lex_state = 3},
  [639] = {.lex_state = 0, .external_lex_state = 5},
  [640] = {.lex_state = 0, .external_lex_state = 5},
  [641] = {.lex_state = 0, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 3},
  [644] = {.lex_state = 0, .external_lex_state = 3},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 3},
  [647] = {.lex_state = 0, .external_lex_state = 3},
  [648] = {.lex_state = 0, .external_lex_state = 3},
  [649] = {.lex_state = 0, .external_lex_state = 7},
  [650] = {.lex_state = 0, .external_lex_state = 3},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 7},
  [653] = {.lex_state = 0, .external_lex_state = 3},
  [654] = {.lex_state = 0, .external_lex_state = 5},
  [655] = {.lex_state = 0, .external_lex_state = 7},
  [656] = {.lex_state = 0, .external_lex_state = 7},
  [657] = {.lex_state = 320, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 0, .external_lex_state = 2},
  [661] = {.lex_state = 0, .external_lex_state = 5},
  [662] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(660),
    [sym_import] = STATE(306),
    [sym_rule] = STATE(299),
    [sym_dotted_name] = STATE(659),
    [aux_sym_source_file_repeat1] = STATE(299),
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(277), 5,
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
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(263), 5,
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
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    STATE(548), 1,
      sym_m_une_possibilitu00e9,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(35), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(32), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(245), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
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
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(270), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(34), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(243), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
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
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(282), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(33), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(33), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(291), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
    STATE(84), 10,
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
    ACTIONS(103), 1,
      sym__dedent,
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
    STATE(84), 10,
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
    ACTIONS(105), 1,
      sym_m_unary_name,
    ACTIONS(108), 1,
      sym_m_array_name,
    ACTIONS(111), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(114), 1,
      sym_tag,
    ACTIONS(117), 1,
      sym_formule,
    ACTIONS(120), 1,
      sym_avec,
    ACTIONS(123), 1,
      sym_remplace,
    ACTIONS(126), 1,
      sym_une_possibilitu00e9,
    ACTIONS(129), 1,
      sym_texte,
    ACTIONS(132), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(135), 1,
      sym_contexte,
    ACTIONS(138), 1,
      sym_variations,
    ACTIONS(141), 1,
      sym_duru00e9e,
    ACTIONS(144), 1,
      sym_unitu00e9,
    ACTIONS(147), 1,
      sym_meta_name,
    ACTIONS(150), 1,
      sym__key,
    ACTIONS(153), 1,
      sym__dedent,
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
    STATE(84), 10,
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
    STATE(84), 10,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(407), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(276), 5,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(449), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(359), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(247), 5,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(424), 1,
      sym_rule_body,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(247), 5,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(488), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(290), 5,
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
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(593), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 5,
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
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_date,
    ACTIONS(211), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(452), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(296), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(607), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_date,
    ACTIONS(203), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(611), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(587), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(221), 1,
      sym__indent,
    STATE(112), 1,
      sym__valeur,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_date,
    ACTIONS(203), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(402), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(452), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_date,
    ACTIONS(203), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(566), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(648), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_date,
    ACTIONS(219), 1,
      sym__indent,
    STATE(108), 1,
      sym__valeur,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(295), 5,
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
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_date,
    ACTIONS(203), 1,
      sym__indent,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    STATE(496), 1,
      sym__valeur,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(281), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [2109] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_m_unary_name,
    ACTIONS(226), 1,
      sym_m_array_name,
    ACTIONS(229), 1,
      sym_m_baru00e8me_like_name,
    ACTIONS(232), 1,
      sym_texte,
    ACTIONS(235), 1,
      sym_inversion_numu00e9rique,
    ACTIONS(238), 1,
      sym_contexte,
    ACTIONS(241), 1,
      sym_variations,
    ACTIONS(244), 1,
      sym_duru00e9e,
    ACTIONS(247), 1,
      sym_unitu00e9,
    ACTIONS(250), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    ACTIONS(252), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    ACTIONS(254), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    ACTIONS(256), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    ACTIONS(258), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    ACTIONS(260), 1,
      sym__dedent,
    STATE(30), 2,
      sym_mechanism,
      aux_sym__valeur_repeat1,
    STATE(84), 10,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(272), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(259), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(283), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(242), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2609] = 14,
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
    ACTIONS(280), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(286), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2659] = 14,
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
    ACTIONS(282), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(253), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
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
    ACTIONS(284), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(275), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2759] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(287), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2809] = 14,
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
    ACTIONS(288), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(288), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2859] = 14,
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
    ACTIONS(290), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(255), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2909] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(249), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [2959] = 13,
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
    ACTIONS(296), 1,
      sym_date,
    STATE(220), 1,
      sym_reference,
    STATE(224), 1,
      sym_dotted_name,
    STATE(225), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(294), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(222), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(248), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3007] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(274), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3057] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(257), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3107] = 15,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(271), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(298), 2,
      sym__expression,
      sym_string,
    STATE(227), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(251), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3209] = 13,
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
    ACTIONS(308), 1,
      sym_date,
    STATE(207), 1,
      sym_number,
    STATE(212), 1,
      sym_reference,
    STATE(214), 1,
      sym_dotted_name,
    ACTIONS(25), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(306), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(218), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(250), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3257] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3307] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(265), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3357] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(264), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3407] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(273), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3457] = 15,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
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
    STATE(298), 2,
      sym__expression,
      sym_string,
    STATE(205), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(267), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(262), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(269), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(258), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(284), 4,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(261), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3809] = 13,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(211), 1,
      sym_reference,
    STATE(213), 1,
      sym_number,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(219), 5,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_boolean,
      sym_string,
  [3857] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(285), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3907] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(260), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [3957] = 14,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(176), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
    STATE(278), 4,
      sym__expression,
      sym__bool_expression,
      sym_comparison,
      sym_string,
  [4007] = 15,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(177), 1,
      sym_reference,
    STATE(178), 1,
      sym_number,
    STATE(210), 1,
      sym_boolean,
    ACTIONS(262), 2,
      anon_sym_oui,
      anon_sym_non,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(279), 2,
      sym__bool_expression,
      sym_comparison,
    STATE(298), 2,
      sym__expression,
      sym_string,
    STATE(226), 3,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
  [4059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__key,
    ACTIONS(340), 1,
      sym__array_prefix,
    STATE(69), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(336), 16,
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
  [4090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__key,
    ACTIONS(347), 1,
      sym__array_prefix,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
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
  [4121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__key,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
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
  [4152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__key,
    ACTIONS(360), 1,
      sym__array_prefix,
    STATE(74), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(356), 16,
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
  [4183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__key,
    ACTIONS(366), 1,
      sym__array_prefix,
    STATE(69), 1,
      aux_sym_m_array_repeat1,
    ACTIONS(362), 16,
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
  [4214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__key,
    ACTIONS(372), 1,
      sym__array_prefix,
    STATE(74), 1,
      aux_sym_s_remplace_repeat1,
    ACTIONS(368), 16,
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
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__key,
    ACTIONS(375), 17,
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
  [4271] = 3,
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
  [4297] = 3,
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
  [4323] = 3,
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
  [4349] = 3,
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
  [4375] = 3,
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
  [4400] = 3,
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
  [4425] = 3,
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
  [4450] = 3,
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
  [4475] = 3,
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
  [4500] = 3,
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
  [4525] = 3,
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
  [4550] = 3,
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
  [4575] = 3,
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
  [4600] = 3,
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
  [4625] = 3,
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
  [4650] = 3,
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
  [4675] = 3,
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
  [4700] = 3,
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
  [4725] = 3,
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
  [4750] = 3,
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
  [4775] = 3,
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
  [4800] = 3,
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
  [4825] = 3,
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
  [4850] = 3,
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
  [4875] = 3,
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
  [4900] = 3,
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
  [4925] = 3,
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
  [4950] = 3,
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
  [4975] = 3,
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
  [5000] = 3,
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
  [5025] = 3,
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
  [5050] = 3,
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
  [5075] = 3,
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
  [5100] = 3,
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
  [5125] = 3,
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
  [5150] = 3,
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
  [5175] = 3,
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
  [5200] = 3,
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
  [5225] = 3,
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
  [5250] = 3,
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
  [5275] = 3,
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
  [5300] = 3,
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
  [5325] = 3,
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
  [5350] = 3,
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
  [5375] = 3,
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
  [5400] = 3,
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
  [5425] = 3,
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
  [5450] = 3,
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
  [5475] = 3,
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
  [5500] = 3,
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
  [5525] = 3,
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
  [5550] = 3,
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
  [5575] = 3,
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
  [5600] = 3,
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
  [5625] = 3,
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
  [5650] = 3,
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
  [5675] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SPACE,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(133), 1,
      sym_unit,
    STATE(146), 1,
      sym__units,
    STATE(180), 1,
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
  [5707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH,
    ACTIONS(611), 1,
      anon_sym_DOT2,
    STATE(139), 1,
      aux_sym__units_repeat1,
    ACTIONS(607), 11,
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
  [5733] = 8,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SPACE,
    ACTIONS(615), 1,
      aux_sym_unit_token1,
    ACTIONS(617), 1,
      sym__newline,
    STATE(159), 1,
      sym_unit,
    STATE(169), 1,
      sym__units,
    STATE(229), 1,
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
  [5765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(619), 12,
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
  [5789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(623), 12,
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
  [5813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(628), 12,
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
  [5837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      sym_exposant,
    ACTIONS(630), 12,
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
  [5861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_DOT2,
    ACTIONS(638), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      aux_sym__units_repeat1,
    ACTIONS(636), 11,
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
  [5887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(644), 1,
      anon_sym_DOT2,
    STATE(140), 1,
      aux_sym__units_repeat1,
    ACTIONS(640), 11,
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
  [5913] = 8,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__dedent,
    ACTIONS(647), 1,
      anon_sym_SPACE,
    ACTIONS(649), 1,
      aux_sym_unit_token1,
    STATE(150), 1,
      sym_unit,
    STATE(175), 1,
      sym__units,
    STATE(216), 1,
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
  [5945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(145), 1,
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
  [5968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(640), 12,
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
  [5989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SLASH,
    STATE(144), 1,
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
  [6012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(144), 1,
      aux_sym_units_repeat1,
    ACTIONS(660), 11,
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
  [6035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      aux_sym_units_repeat1,
    ACTIONS(662), 11,
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
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 13,
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
  [6077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SLASH,
    ACTIONS(664), 12,
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
  [6098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(144), 1,
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
  [6121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_DOT2,
    STATE(156), 1,
      aux_sym__units_repeat1,
    ACTIONS(607), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(623), 10,
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
  [6167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(619), 10,
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
  [6189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH,
    ACTIONS(677), 1,
      sym_exposant,
    ACTIONS(630), 10,
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
  [6211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(628), 10,
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
  [6233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(679), 1,
      anon_sym_DOT2,
    STATE(155), 1,
      aux_sym__units_repeat1,
    ACTIONS(640), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_SLASH,
    ACTIONS(670), 1,
      anon_sym_DOT2,
    STATE(162), 1,
      aux_sym__units_repeat1,
    ACTIONS(636), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
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
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 12,
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
  [6319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      anon_sym_DOT2,
    STATE(160), 1,
      aux_sym__units_repeat1,
    ACTIONS(607), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_SLASH,
    ACTIONS(686), 1,
      anon_sym_DOT2,
    STATE(155), 1,
      aux_sym__units_repeat1,
    ACTIONS(636), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH,
    ACTIONS(688), 1,
      sym_exposant,
    ACTIONS(630), 10,
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
  [6389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(690), 1,
      anon_sym_DOT2,
    STATE(162), 1,
      aux_sym__units_repeat1,
    ACTIONS(640), 9,
      sym__dedent,
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
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(165), 1,
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
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 11,
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
  [6451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      aux_sym_units_repeat1,
    ACTIONS(660), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_SLASH,
    STATE(166), 1,
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
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(640), 10,
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
  [6512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SLASH,
    ACTIONS(664), 10,
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
  [6531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SLASH,
    STATE(186), 1,
      aux_sym_units_repeat1,
    ACTIONS(662), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(166), 1,
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
  [6573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_DOT,
    STATE(172), 1,
      aux_sym_dotted_name_repeat1,
    ACTIONS(628), 9,
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
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_dotted_name_repeat1,
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
  [6615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_dotted_name_repeat1,
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
  [6636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 11,
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
    ACTIONS(693), 1,
      anon_sym_SLASH,
    STATE(170), 1,
      aux_sym_units_repeat1,
    ACTIONS(662), 9,
      sym__dedent,
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
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 9,
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
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      anon_sym_RPAREN,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 11,
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
  [6752] = 2,
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
  [6769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(722), 10,
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
  [6788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
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
  [6809] = 2,
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
  [6826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(640), 10,
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
  [6845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SLASH,
    STATE(185), 1,
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
  [6866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SLASH,
    STATE(185), 1,
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
  [6887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SLASH,
    ACTIONS(664), 10,
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
  [6906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SLASH,
    STATE(185), 1,
      aux_sym_units_repeat1,
    ACTIONS(660), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6927] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(179), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [6953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 10,
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
  [6969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
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
  [6987] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(421), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7013] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(735), 1,
      sym_name,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      aux_sym_number_token1,
    STATE(214), 1,
      sym_dotted_name,
    STATE(208), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7039] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      aux_sym_number_token1,
    STATE(224), 1,
      sym_dotted_name,
    STATE(209), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      aux_sym_number_token1,
    STATE(224), 1,
      sym_dotted_name,
    STATE(217), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7091] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(735), 1,
      sym_name,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      aux_sym_number_token1,
    STATE(214), 1,
      sym_dotted_name,
    STATE(221), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7117] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(181), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7143] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(417), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(735), 1,
      sym_name,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      aux_sym_number_token1,
    STATE(214), 1,
      sym_dotted_name,
    STATE(206), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7195] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(183), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7221] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_ar_unary_expression_token1,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      aux_sym_number_token1,
    STATE(224), 1,
      sym_dotted_name,
    STATE(231), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SLASH,
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
  [7265] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_DOT,
  [7281] = 7,
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
    STATE(158), 1,
      sym_dotted_name,
    STATE(363), 5,
      sym__ar_expression,
      sym_ar_unary_expression,
      sym_ar_binary_expression,
      sym_reference,
      sym_number,
  [7307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(722), 8,
      sym__dedent,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7377] = 2,
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
  [7392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 8,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7460] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7475] = 2,
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
  [7490] = 2,
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
  [7505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(722), 8,
      sym__newline,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(757), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      sym__dedent,
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
  [7556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7573] = 2,
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
  [7588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(761), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
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
    ACTIONS(695), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7622] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [7637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(707), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 9,
      sym__dedent,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7711] = 2,
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
  [7726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 9,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 9,
      sym__newline,
      aux_sym_ar_binary_expression_token1,
      aux_sym_ar_binary_expression_token2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7756] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
    ACTIONS(773), 1,
      sym_date,
    ACTIONS(775), 1,
      sym__indent,
    STATE(224), 1,
      sym_dotted_name,
    STATE(524), 1,
      sym__date_or_ref,
    STATE(554), 1,
      sym_reference,
  [7784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__indent,
    STATE(656), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7804] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
    ACTIONS(773), 1,
      sym_date,
    ACTIONS(775), 1,
      sym__indent,
    STATE(224), 1,
      sym_dotted_name,
    STATE(415), 1,
      sym__date_or_ref,
    STATE(554), 1,
      sym_reference,
  [7832] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
    ACTIONS(773), 1,
      sym_date,
    ACTIONS(775), 1,
      sym__indent,
    STATE(224), 1,
      sym_dotted_name,
    STATE(467), 1,
      sym__date_or_ref,
    STATE(554), 1,
      sym_reference,
  [7860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__indent,
    STATE(655), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7880] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__paragraph_token1,
    ACTIONS(787), 1,
      sym_text_line,
    ACTIONS(789), 1,
      sym__indent,
    ACTIONS(791), 1,
      sym__newline,
    STATE(123), 1,
      sym_meta_value,
    STATE(121), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__indent,
    STATE(621), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7924] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__paragraph_token1,
    ACTIONS(787), 1,
      sym_text_line,
    ACTIONS(789), 1,
      sym__indent,
    ACTIONS(791), 1,
      sym__newline,
    STATE(81), 1,
      sym_meta_value,
    STATE(121), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__indent,
    STATE(557), 1,
      sym_m_duru00e9e_units,
    ACTIONS(779), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(777), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [7968] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym__paragraph_token1,
    ACTIONS(799), 1,
      sym_text_line,
    ACTIONS(801), 1,
      sym__indent,
    ACTIONS(803), 1,
      sym__newline,
    STATE(462), 1,
      sym_meta_value,
    STATE(464), 3,
      sym__text_line,
      sym__paragraph,
      sym_object,
  [7992] = 3,
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
  [8007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 7,
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
    ACTIONS(254), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8050] = 2,
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
  [8063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__newline,
    ACTIONS(811), 6,
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
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8106] = 2,
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
  [8119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(638), 1,
      sym_m_duru00e9e_units,
    ACTIONS(819), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(817), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8151] = 3,
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
  [8166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(646), 1,
      sym_m_duru00e9e_units,
    ACTIONS(819), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(817), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8183] = 3,
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
  [8198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(601), 1,
      sym_m_duru00e9e_units,
    ACTIONS(819), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(817), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8215] = 3,
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
  [8230] = 3,
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
  [8245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8275] = 3,
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
  [8290] = 3,
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
  [8305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8320] = 3,
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
  [8335] = 3,
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
  [8350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8363] = 3,
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
  [8378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(575), 1,
      sym_m_duru00e9e_units,
    ACTIONS(819), 2,
      anon_sym_an,
      anon_sym_trimestre,
    ACTIONS(817), 4,
      anon_sym_jour,
      anon_sym_mois,
      anon_sym_annu00e9ecivile,
      anon_sym_trimestrecivil,
  [8395] = 3,
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
  [8410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8470] = 3,
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
  [8485] = 3,
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
  [8500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym__newline,
    ACTIONS(811), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8530] = 3,
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
  [8545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 7,
      sym__newline,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym__newline,
    ACTIONS(811), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8603] = 3,
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
  [8618] = 3,
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
  [8633] = 3,
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
  [8648] = 3,
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
  [8663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(707), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym__newline,
    ACTIONS(811), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__dedent,
    ACTIONS(809), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8738] = 2,
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
  [8751] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(360), 1,
      sym__array_prefix,
    ACTIONS(855), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(214), 1,
      sym_dotted_name,
    STATE(397), 1,
      aux_sym_s_remplace_repeat1,
    STATE(545), 1,
      sym_reference,
    STATE(546), 1,
      sym__remplace_rule,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 7,
      sym__dedent,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__newline,
    ACTIONS(811), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__newline,
    ACTIONS(811), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    STATE(659), 1,
      sym_dotted_name,
    STATE(312), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_name,
    ACTIONS(868), 1,
      anon_sym_LBRACK,
    ACTIONS(871), 1,
      sym__dedent,
    STATE(618), 1,
      sym_dotted_name,
    STATE(300), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    STATE(659), 1,
      sym_dotted_name,
    STATE(312), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [8915] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(603), 1,
      sym_remplace_rule_except,
    STATE(649), 1,
      sym_reference,
  [8937] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(630), 1,
      sym_remplace_rule_except,
    STATE(649), 1,
      sym_reference,
  [8959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(879), 1,
      sym__indent,
    ACTIONS(881), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(508), 1,
      sym_remplace_rule_in,
    STATE(652), 1,
      sym_reference,
  [8981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
    STATE(659), 1,
      sym_dotted_name,
    STATE(301), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9001] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(649), 1,
      sym_reference,
    STATE(650), 1,
      sym_remplace_rule_except,
  [9023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9035] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_name,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    ACTIONS(885), 1,
      anon_sym_SQUOTE,
    ACTIONS(887), 1,
      sym_date,
    STATE(214), 1,
      sym_dotted_name,
    STATE(568), 1,
      sym_reference,
  [9057] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(879), 1,
      sym__indent,
    ACTIONS(881), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(520), 1,
      sym_remplace_rule_in,
    STATE(652), 1,
      sym_reference,
  [9079] = 7,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SPACE,
    ACTIONS(891), 1,
      aux_sym_unit_token1,
    ACTIONS(893), 1,
      sym__indent,
    STATE(337), 1,
      sym_unit,
    STATE(373), 1,
      sym__units,
    STATE(598), 1,
      sym_units,
  [9101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_name,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
    ACTIONS(895), 1,
      anon_sym_LBRACK,
    STATE(659), 1,
      sym_dotted_name,
    STATE(312), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9121] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(875), 1,
      sym__indent,
    ACTIONS(877), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(582), 1,
      sym_remplace_rule_except,
    STATE(649), 1,
      sym_reference,
  [9143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 6,
      sym_montant,
      sym_multiplicateur,
      sym_tranches,
      sym_plafond,
      sym_taux,
      sym_alors,
  [9155] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      sym__dedent,
    STATE(618), 1,
      sym_dotted_name,
    STATE(300), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_dans,
    ACTIONS(904), 1,
      sym_les_ru00e8gles,
    ACTIONS(906), 1,
      sym__dedent,
    STATE(370), 1,
      sym__import_into,
    STATE(644), 1,
      sym_import_rules,
  [9194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_name,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    STATE(502), 1,
      sym_dotted_name,
    STATE(539), 2,
      sym_import_rule,
      sym_rule,
  [9211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_plafond,
    STATE(460), 1,
      sym__m_taux_or_montant,
    STATE(633), 1,
      sym__m_tranche,
    ACTIONS(908), 2,
      sym_montant,
      sym_taux,
  [9228] = 5,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym__paragraph_token1,
    ACTIONS(787), 1,
      sym_text_line,
    ACTIONS(912), 1,
      sym__indent,
    STATE(117), 2,
      sym__text_line,
      sym__paragraph,
  [9245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_source,
    ACTIONS(916), 1,
      sym_url,
    ACTIONS(918), 1,
      sym__dedent,
    STATE(438), 1,
      sym__import_source,
    STATE(562), 1,
      sym__import_url,
  [9264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_plafond,
    STATE(461), 1,
      sym__m_taux_or_montant,
    STATE(633), 1,
      sym__m_tranche,
    ACTIONS(908), 2,
      sym_montant,
      sym_taux,
  [9281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_name,
    ACTIONS(855), 1,
      sym_ru00e9fu00e9rences_u00e0,
    STATE(214), 1,
      sym_dotted_name,
    STATE(543), 1,
      sym__remplace_rule,
    STATE(547), 1,
      sym_reference,
  [9300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    STATE(618), 1,
      sym_dotted_name,
    STATE(315), 2,
      sym_rule,
      aux_sym_source_file_repeat1,
  [9317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_plafond,
    STATE(478), 1,
      sym__m_taux_or_montant,
    STATE(633), 1,
      sym__m_tranche,
    ACTIONS(908), 2,
      sym_montant,
      sym_taux,
  [9334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_plafond,
    STATE(632), 1,
      sym__m_taux_or_montant,
    STATE(633), 1,
      sym__m_tranche,
    ACTIONS(920), 2,
      sym_montant,
      sym_taux,
  [9351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_plafond,
    STATE(482), 1,
      sym__m_taux_or_montant,
    STATE(633), 1,
      sym__m_tranche,
    ACTIONS(908), 2,
      sym_montant,
      sym_taux,
  [9368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(922), 1,
      sym__indent,
    ACTIONS(924), 1,
      sym__newline,
    STATE(224), 1,
      sym_dotted_name,
    STATE(610), 1,
      sym_reference,
  [9387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_name,
    ACTIONS(929), 1,
      sym__dedent,
    STATE(158), 1,
      sym_dotted_name,
    STATE(328), 1,
      aux_sym_m_contexte_repeat1,
    STATE(528), 1,
      sym_reference,
  [9406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(735), 1,
      sym_name,
    STATE(214), 1,
      sym_dotted_name,
    STATE(385), 1,
      aux_sym_m_inversion_repeat1,
    STATE(627), 1,
      sym_reference,
  [9425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(735), 1,
      sym_name,
    STATE(214), 1,
      sym_dotted_name,
    STATE(389), 1,
      aux_sym_m_inversion_repeat1,
    STATE(625), 1,
      sym_reference,
  [9444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(931), 1,
      sym__dedent,
    STATE(158), 1,
      sym_dotted_name,
    STATE(328), 1,
      aux_sym_m_contexte_repeat1,
    STATE(528), 1,
      sym_reference,
  [9463] = 6,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SPACE,
    ACTIONS(935), 1,
      aux_sym_unit_token1,
    STATE(333), 1,
      sym_unit,
    STATE(439), 1,
      sym__units,
    STATE(530), 1,
      sym_units,
  [9482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DOT2,
    STATE(346), 1,
      aux_sym__units_repeat1,
    ACTIONS(607), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DOT2,
    STATE(334), 1,
      aux_sym__units_repeat1,
    ACTIONS(640), 2,
      sym__newline,
      anon_sym_SLASH,
  [9510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_DOT2,
    STATE(334), 1,
      aux_sym__units_repeat1,
    ACTIONS(636), 2,
      sym__newline,
      anon_sym_SLASH,
  [9524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__array_prefix,
    STATE(340), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(944), 2,
      sym__dedent,
      sym_sauf_dans,
  [9538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_DOT2,
    STATE(335), 1,
      aux_sym__units_repeat1,
    ACTIONS(607), 2,
      sym__newline,
      anon_sym_SLASH,
  [9552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_exposant,
    ACTIONS(630), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_si,
    ACTIONS(952), 1,
      sym_sinon,
    STATE(567), 1,
      sym_m_variation_sinon,
    STATE(604), 1,
      sym_m_variation_si,
  [9580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym__array_prefix,
    STATE(340), 1,
      aux_sym_m_inversion_repeat1,
    ACTIONS(343), 2,
      sym__dedent,
      sym_sauf_dans,
  [9594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_name,
    ACTIONS(957), 1,
      sym__indent,
    STATE(224), 1,
      sym_dotted_name,
    STATE(549), 1,
      sym_reference,
  [9610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(158), 1,
      sym_dotted_name,
    STATE(331), 1,
      aux_sym_m_contexte_repeat1,
    STATE(528), 1,
      sym_reference,
  [9626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(959), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(569), 1,
      sym_reference,
  [9642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(961), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(570), 1,
      sym_reference,
  [9658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_exposant,
    ACTIONS(630), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_DOT2,
    STATE(347), 1,
      aux_sym__units_repeat1,
    ACTIONS(636), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_DOT2,
    STATE(347), 1,
      aux_sym__units_repeat1,
    ACTIONS(640), 2,
      sym__dedent,
      anon_sym_SLASH,
  [9698] = 5,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym__key,
    ACTIONS(970), 1,
      sym_text_line,
    STATE(416), 1,
      aux_sym_object_repeat1,
    STATE(418), 1,
      aux_sym__text_line_repeat1,
  [9714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(972), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(622), 1,
      sym_reference,
  [9730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    ACTIONS(974), 1,
      sym_date,
    STATE(158), 1,
      sym_dotted_name,
    STATE(619), 1,
      sym_reference,
  [9746] = 5,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym__key,
    ACTIONS(970), 1,
      sym_text_line,
    STATE(366), 1,
      aux_sym_object_repeat1,
    STATE(393), 1,
      aux_sym__text_line_repeat1,
  [9762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_depuis,
    ACTIONS(978), 1,
      sym_jusqu_u00e0,
    ACTIONS(980), 1,
      sym_unitu00e9,
    ACTIONS(982), 1,
      sym__dedent,
  [9778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 3,
      sym__dedent,
      sym__array_prefix,
      sym_sauf_dans,
  [9787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__array_prefix,
    ACTIONS(984), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym_m_array_repeat1,
  [9800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__newline,
    ACTIONS(986), 1,
      anon_sym_SLASH,
    STATE(377), 1,
      aux_sym_units_repeat1,
  [9813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_unit_token1,
    STATE(337), 1,
      sym_unit,
    STATE(512), 1,
      sym__units,
  [9826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [9835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__newline,
    ACTIONS(986), 1,
      anon_sym_SLASH,
    STATE(376), 1,
      aux_sym_units_repeat1,
  [9866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym__dedent,
    ACTIONS(994), 1,
      sym__array_prefix,
    STATE(381), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [9879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym__dedent,
    ACTIONS(998), 1,
      sym__array_prefix,
    STATE(381), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [9892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
  [9905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym__dedent,
    ACTIONS(1002), 1,
      sym__array_prefix,
    STATE(410), 1,
      aux_sym_m_variations_repeat1,
  [9918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1004), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [9931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__key,
    ACTIONS(1008), 1,
      sym__dedent,
    STATE(428), 1,
      aux_sym_object_repeat1,
  [9944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9953] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1016), 1,
      sym_text_line,
  [9966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [9975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_les_ru00e8gles,
    ACTIONS(1020), 1,
      sym__dedent,
    STATE(623), 1,
      sym_import_rules,
  [9988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [9997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_name,
    STATE(214), 1,
      sym_dotted_name,
    STATE(553), 1,
      sym_reference,
  [10010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__newline,
    ACTIONS(986), 1,
      anon_sym_SLASH,
    STATE(355), 1,
      aux_sym_units_repeat1,
  [10023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_unit_token1,
    STATE(159), 1,
      sym_unit,
    STATE(182), 1,
      sym__units,
  [10036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__newline,
    ACTIONS(986), 1,
      anon_sym_SLASH,
    STATE(377), 1,
      aux_sym_units_repeat1,
  [10058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__newline,
    ACTIONS(1026), 1,
      anon_sym_SLASH,
    STATE(377), 1,
      aux_sym_units_repeat1,
  [10071] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_DQUOTE,
    ACTIONS(1031), 1,
      anon_sym_SQUOTE,
    ACTIONS(1033), 1,
      sym_text_line,
  [10084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_name,
    STATE(214), 1,
      sym_dotted_name,
    STATE(596), 1,
      sym_reference,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 3,
      sym__newline,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__dedent,
    ACTIONS(1037), 1,
      sym__array_prefix,
    STATE(381), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_unit_token1,
    STATE(159), 1,
      sym_unit,
    STATE(202), 1,
      sym__units,
  [10132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1044), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [10163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__dedent,
    ACTIONS(1048), 1,
      sym__array_prefix,
    STATE(386), 1,
      aux_sym_import_rules_repeat1,
  [10176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1055), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [10207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1057), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [10220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10238] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    ACTIONS(1063), 1,
      sym__dedent,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [10251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__indent,
    ACTIONS(1067), 1,
      sym__newline,
    STATE(529), 1,
      sym_m_une_possibilitu00e9_options,
  [10264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(550), 1,
      sym_boolean,
    ACTIONS(1069), 2,
      anon_sym_oui,
      anon_sym_non,
  [10275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym_unit_token1,
    STATE(333), 1,
      sym_unit,
    STATE(443), 1,
      sym__units,
  [10288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__array_prefix,
    ACTIONS(1071), 1,
      sym__dedent,
    STATE(74), 1,
      aux_sym_s_remplace_repeat1,
  [10301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(133), 1,
      sym_unit,
    STATE(142), 1,
      sym__units,
  [10314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__dedent,
    ACTIONS(1075), 1,
      sym__array_prefix,
    STATE(381), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym__dedent,
    ACTIONS(1079), 1,
      sym__array_prefix,
    STATE(381), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [10340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_name,
    STATE(214), 1,
      sym_dotted_name,
    STATE(565), 1,
      sym_reference,
  [10353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(591), 1,
      sym__m_taux_or_montant,
    ACTIONS(1081), 2,
      sym_montant,
      sym_taux,
  [10364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(133), 1,
      sym_unit,
    STATE(157), 1,
      sym__units,
  [10386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_unit_token1,
    STATE(337), 1,
      sym_unit,
    STATE(360), 1,
      sym__units,
  [10399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10417] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_text_line,
    ACTIONS(1088), 1,
      sym__dedent,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [10430] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    ACTIONS(1090), 1,
      sym__dedent,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [10443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__dedent,
    ACTIONS(1094), 1,
      sym__array_prefix,
    STATE(410), 1,
      aux_sym_m_variations_repeat1,
  [10456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_unit_token1,
    STATE(150), 1,
      sym_unit,
    STATE(191), 1,
      sym__units,
  [10469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10478] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    ACTIONS(1099), 1,
      sym__dedent,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [10491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_dans,
    ACTIONS(1103), 1,
      sym_sauf_dans,
    ACTIONS(1105), 1,
      sym__dedent,
  [10504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_jusqu_u00e0,
    ACTIONS(1109), 1,
      sym_unitu00e9,
    ACTIONS(1111), 1,
      sym__dedent,
  [10517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__key,
    ACTIONS(1113), 1,
      sym__dedent,
    STATE(428), 1,
      aux_sym_object_repeat1,
  [10530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [10543] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    ACTIONS(1115), 1,
      sym__dedent,
    STATE(408), 1,
      aux_sym__text_line_repeat1,
  [10556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      sym__dedent,
    ACTIONS(1121), 1,
      sym__array_prefix,
    STATE(386), 1,
      aux_sym_import_rules_repeat1,
  [10578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_ar_binary_expression_token1,
    ACTIONS(711), 1,
      aux_sym_ar_binary_expression_token2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
  [10591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_unit_token1,
    STATE(150), 1,
      sym_unit,
    STATE(163), 1,
      sym__units,
  [10604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [10622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [10631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym__array_prefix,
    ACTIONS(1127), 1,
      sym__dedent,
    STATE(386), 1,
      aux_sym_import_rules_repeat1,
  [10653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym__key,
    ACTIONS(1132), 1,
      sym__dedent,
    STATE(428), 1,
      aux_sym_object_repeat1,
  [10666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 3,
      sym__dedent,
      sym_source,
      sym_url,
  [10675] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    ACTIONS(1138), 1,
      anon_sym_SQUOTE,
    ACTIONS(1140), 1,
      sym_text_line,
  [10688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10697] = 4,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_DQUOTE,
    ACTIONS(1146), 1,
      anon_sym_SQUOTE,
    ACTIONS(1148), 1,
      sym_text_line,
  [10710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__dedent,
    ACTIONS(1150), 1,
      anon_sym_SLASH,
    STATE(434), 1,
      aux_sym_units_repeat1,
  [10732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 3,
      sym__dedent,
      sym_jusqu_u00e0,
      sym_unitu00e9,
  [10741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__dedent,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    STATE(434), 1,
      aux_sym_units_repeat1,
  [10763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_url,
    ACTIONS(1157), 1,
      sym__dedent,
    STATE(538), 1,
      sym__import_url,
  [10776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__dedent,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    STATE(440), 1,
      aux_sym_units_repeat1,
  [10789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__dedent,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    STATE(434), 1,
      aux_sym_units_repeat1,
  [10802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      sym__dedent,
      sym_dans,
      sym_les_ru00e8gles,
  [10811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym_unit_token1,
    STATE(333), 1,
      sym_unit,
    STATE(459), 1,
      sym__units,
  [10824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__dedent,
    ACTIONS(1155), 1,
      anon_sym_SLASH,
    STATE(437), 1,
      aux_sym_units_repeat1,
  [10837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1161), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [10859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    ACTIONS(1163), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_m_inversion_repeat1,
  [10872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__indent,
    ACTIONS(1067), 1,
      sym__newline,
    STATE(626), 1,
      sym_m_une_possibilitu00e9_options,
  [10885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_dans,
    ACTIONS(1167), 1,
      sym_sauf_dans,
    ACTIONS(1169), 1,
      sym__dedent,
  [10898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 3,
      sym__dedent,
      anon_sym_LBRACK,
      sym_name,
  [10907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      sym__dedent,
      anon_sym_SLASH,
      anon_sym_DOT2,
  [10916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_choix_obligatoire,
    ACTIONS(1173), 1,
      sym_possibilitu00e9s,
  [10926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 2,
      sym__dedent,
      sym_plafond,
  [10934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 2,
      sym__dedent,
      sym__array_prefix,
  [10942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 2,
      sym__dedent,
      sym__array_prefix,
  [10950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym_unit_token1,
    STATE(433), 1,
      sym_unit,
  [10960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym__dedent,
      sym_plafond,
  [10968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym__dedent,
      sym_plafond,
  [10976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      sym__dedent,
      sym_plafond,
  [10984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      sym__dedent,
      anon_sym_SLASH,
  [10992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_plafond,
    ACTIONS(1183), 1,
      sym__dedent,
  [11002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_plafond,
    ACTIONS(1185), 1,
      sym__dedent,
  [11012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 2,
      sym__dedent,
      sym__key,
  [11020] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    STATE(393), 1,
      aux_sym__text_line_repeat1,
  [11030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      sym__dedent,
      sym__key,
  [11038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_unit_token1,
    STATE(184), 1,
      sym_unit,
  [11048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      sym__indent,
    ACTIONS(1189), 1,
      sym__newline,
  [11058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      sym_unitu00e9,
    ACTIONS(1193), 1,
      sym__dedent,
  [11068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym__array_prefix,
    STATE(361), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym__array_prefix,
    STATE(362), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      sym__array_prefix,
    STATE(364), 1,
      aux_sym_m_variations_repeat1,
  [11098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(71), 1,
      aux_sym_m_inversion_repeat1,
  [11108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(365), 1,
      aux_sym_m_inversion_repeat1,
  [11118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_unit_token1,
    STATE(167), 1,
      sym_unit,
  [11128] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    STATE(409), 1,
      aux_sym__text_line_repeat1,
  [11138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__dedent,
      sym_plafond,
  [11146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 2,
      sym__dedent,
      sym_sauf_dans,
  [11154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      sym__indent,
    ACTIONS(1203), 1,
      sym__newline,
  [11164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_plafond,
    ACTIONS(1205), 1,
      sym__dedent,
  [11174] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__dedent,
    ACTIONS(1207), 1,
      sym_text_line,
  [11184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym__dedent,
      sym__key,
  [11192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      sym__dedent,
      sym__key,
  [11200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_plafond,
    ACTIONS(1209), 1,
      sym__dedent,
  [11210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_si,
    STATE(604), 1,
      sym_m_variation_si,
  [11220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(445), 1,
      aux_sym_m_inversion_repeat1,
  [11230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(446), 1,
      aux_sym_m_inversion_repeat1,
  [11240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_unit_token1,
    STATE(143), 1,
      sym_unit,
  [11250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 2,
      sym__dedent,
      sym_url,
  [11258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 2,
      sym__dedent,
      sym_name,
  [11266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym__dedent,
      sym_name,
  [11274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      sym__dedent,
      sym__key,
  [11282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__array_prefix,
    STATE(72), 1,
      aux_sym_s_remplace_repeat1,
  [11292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(578), 1,
      sym_dotted_name,
  [11302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      sym__dedent,
      sym__key,
  [11310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__array_prefix,
    STATE(73), 1,
      aux_sym_m_array_repeat1,
  [11320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym__dedent,
      sym__key,
  [11328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      sym_multiplicateur,
    ACTIONS(1217), 1,
      sym_tranches,
  [11338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__array_prefix,
    STATE(354), 1,
      aux_sym_m_array_repeat1,
  [11348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 2,
      sym__dedent,
      sym__array_prefix,
  [11356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 2,
      sym__dedent,
      sym_sauf_dans,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym__array_prefix,
    STATE(420), 1,
      aux_sym_import_rules_repeat1,
  [11374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      sym__dedent,
      sym_name,
  [11382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COLON,
    ACTIONS(1223), 1,
      sym__dedent,
  [11392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym__indent,
    ACTIONS(1227), 1,
      sym__newline,
  [11402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      sym__array_prefix,
    STATE(427), 1,
      aux_sym_import_rules_repeat1,
  [11420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      sym__dedent,
      sym_name,
  [11428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 2,
      sym__dedent,
      sym_les_ru00e8gles,
  [11436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_sauf_dans,
    ACTIONS(1235), 1,
      sym__dedent,
  [11446] = 3,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_text_line,
    STATE(413), 1,
      aux_sym__text_line_repeat1,
  [11456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym__array_prefix,
    STATE(400), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 2,
      sym__dedent,
      sym_url,
  [11474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 2,
      sym__newline,
      anon_sym_SLASH,
  [11482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym__array_prefix,
    STATE(399), 1,
      aux_sym_m_baru00e8me_like_repeat1,
  [11492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym__indent,
    ACTIONS(1241), 1,
      sym__newline,
  [11502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__dedent,
      sym_name,
  [11510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym__indent,
    ACTIONS(1245), 1,
      sym__newline,
  [11520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym__indent,
    ACTIONS(1249), 1,
      sym__newline,
  [11530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__array_prefix,
    STATE(390), 1,
      aux_sym_m_inversion_repeat1,
  [11540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_nom,
    STATE(320), 1,
      sym__import_name,
  [11550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_sauf_dans,
    ACTIONS(1255), 1,
      sym__dedent,
  [11560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__array_prefix,
    STATE(336), 1,
      aux_sym_m_inversion_repeat1,
  [11570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym__indent,
    ACTIONS(1259), 1,
      sym__newline,
  [11580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_name,
    STATE(651), 1,
      sym_dotted_name,
  [11590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_unitu00e9,
    ACTIONS(1263), 1,
      sym__dedent,
  [11600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      sym_depuis,
    STATE(316), 1,
      sym_import_from,
  [11610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_unit_token1,
    STATE(380), 1,
      sym_unit,
  [11620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym__dedent,
  [11627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_COLON,
  [11634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      sym__dedent,
  [11641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      sym__dedent,
  [11648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_DQUOTE,
  [11655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_SQUOTE,
  [11662] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_text_line,
  [11669] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1279), 1,
      sym_text_line,
  [11676] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1281), 1,
      sym_text_line,
  [11683] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym_text_line,
  [11690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      sym__dedent,
  [11697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      sym__dedent,
  [11704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      sym__dedent,
  [11711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__dedent,
  [11718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym__newline,
  [11725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      sym__newline,
  [11732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym__dedent,
  [11739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym__dedent,
  [11746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      sym__dedent,
  [11753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      sym__dedent,
  [11760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      sym__dedent,
  [11767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym__dedent,
  [11774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym__newline,
  [11781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym_possibilitu00e9s,
  [11788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym__newline,
  [11795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      sym__dedent,
  [11802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      sym__dedent,
  [11809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym__newline,
  [11816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym__newline,
  [11823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_SQUOTE,
  [11830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      sym__newline,
  [11837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
  [11844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_SQUOTE,
  [11851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_DQUOTE,
  [11858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_DQUOTE,
  [11865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym__dedent,
  [11872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_SQUOTE,
  [11879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym__dedent,
  [11886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__dedent,
  [11893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      sym_alors,
  [11900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      sym__dedent,
  [11907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym__dedent,
  [11914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
  [11921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
  [11928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym__dedent,
  [11935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym__dedent,
  [11942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym__dedent,
  [11949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym_name,
  [11956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym__dedent,
  [11963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__dedent,
  [11970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__dedent,
  [11977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_COLON,
  [11984] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym_text_line,
  [11991] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym_text_line,
  [11998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      sym__dedent,
  [12005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym__dedent,
  [12012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      sym_tag,
  [12019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      sym__dedent,
  [12026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym__dedent,
  [12033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym_paragraph,
  [12040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym__dedent,
  [12047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym__newline,
  [12054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym__dedent,
  [12061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym__newline,
  [12068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym__dedent,
  [12075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym__dedent,
  [12082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_tranches,
  [12089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym__newline,
  [12096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym__dedent,
  [12103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym__dedent,
  [12110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym__dedent,
  [12117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym__newline,
  [12124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym__dedent,
  [12131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      sym_name,
  [12138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym__dedent,
  [12145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym__dedent,
  [12152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym__dedent,
  [12159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym__dedent,
  [12166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym_paragraph,
  [12173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym__dedent,
  [12180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym__dedent,
  [12187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym__newline,
  [12194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym__dedent,
  [12201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym__newline,
  [12208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_plafond,
  [12215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym__dedent,
  [12222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_oui,
  [12229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym_assiette,
  [12236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      sym__newline,
  [12243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym__dedent,
  [12250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      sym__dedent,
  [12257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COLON,
  [12264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_DQUOTE,
  [12271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      sym__dedent,
  [12278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym__newline,
  [12285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_SQUOTE,
  [12292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      sym__dedent,
  [12299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__dedent,
  [12306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__dedent,
  [12313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym__dedent,
  [12320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym__dedent,
  [12327] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1445), 1,
      sym_text_line,
  [12334] = 2,
    ACTIONS(601), 1,
      sym_comment,
    ACTIONS(1447), 1,
      sym_text_line,
  [12341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      sym__dedent,
  [12348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym__dedent,
  [12355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_plafond,
  [12362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      sym__dedent,
  [12369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      sym__dedent,
  [12376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      sym__indent,
  [12383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      sym__indent,
  [12390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      sym__indent,
  [12397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      sym__dedent,
  [12404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym__indent,
  [12411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym__indent,
  [12418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_COLON,
  [12425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      sym__indent,
  [12432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym__dedent,
  [12439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      sym__dedent,
  [12446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_RBRACK,
  [12453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      sym__dedent,
  [12460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      sym__dedent,
  [12467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      sym__dedent,
  [12474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      sym__newline,
  [12481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      sym__dedent,
  [12488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_COLON,
  [12495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      sym__newline,
  [12502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      sym__dedent,
  [12509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      sym__indent,
  [12516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      sym__newline,
  [12523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      sym__newline,
  [12530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      sym_name,
  [12537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_RBRACK,
  [12544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_COLON,
  [12551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      ts_builtin_sym_end,
  [12558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      sym__indent,
  [12565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
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
  [SMALL_STATE(41)] = 2659,
  [SMALL_STATE(42)] = 2709,
  [SMALL_STATE(43)] = 2759,
  [SMALL_STATE(44)] = 2809,
  [SMALL_STATE(45)] = 2859,
  [SMALL_STATE(46)] = 2909,
  [SMALL_STATE(47)] = 2959,
  [SMALL_STATE(48)] = 3007,
  [SMALL_STATE(49)] = 3057,
  [SMALL_STATE(50)] = 3107,
  [SMALL_STATE(51)] = 3159,
  [SMALL_STATE(52)] = 3209,
  [SMALL_STATE(53)] = 3257,
  [SMALL_STATE(54)] = 3307,
  [SMALL_STATE(55)] = 3357,
  [SMALL_STATE(56)] = 3407,
  [SMALL_STATE(57)] = 3457,
  [SMALL_STATE(58)] = 3509,
  [SMALL_STATE(59)] = 3559,
  [SMALL_STATE(60)] = 3609,
  [SMALL_STATE(61)] = 3659,
  [SMALL_STATE(62)] = 3709,
  [SMALL_STATE(63)] = 3759,
  [SMALL_STATE(64)] = 3809,
  [SMALL_STATE(65)] = 3857,
  [SMALL_STATE(66)] = 3907,
  [SMALL_STATE(67)] = 3957,
  [SMALL_STATE(68)] = 4007,
  [SMALL_STATE(69)] = 4059,
  [SMALL_STATE(70)] = 4090,
  [SMALL_STATE(71)] = 4121,
  [SMALL_STATE(72)] = 4152,
  [SMALL_STATE(73)] = 4183,
  [SMALL_STATE(74)] = 4214,
  [SMALL_STATE(75)] = 4245,
  [SMALL_STATE(76)] = 4271,
  [SMALL_STATE(77)] = 4297,
  [SMALL_STATE(78)] = 4323,
  [SMALL_STATE(79)] = 4349,
  [SMALL_STATE(80)] = 4375,
  [SMALL_STATE(81)] = 4400,
  [SMALL_STATE(82)] = 4425,
  [SMALL_STATE(83)] = 4450,
  [SMALL_STATE(84)] = 4475,
  [SMALL_STATE(85)] = 4500,
  [SMALL_STATE(86)] = 4525,
  [SMALL_STATE(87)] = 4550,
  [SMALL_STATE(88)] = 4575,
  [SMALL_STATE(89)] = 4600,
  [SMALL_STATE(90)] = 4625,
  [SMALL_STATE(91)] = 4650,
  [SMALL_STATE(92)] = 4675,
  [SMALL_STATE(93)] = 4700,
  [SMALL_STATE(94)] = 4725,
  [SMALL_STATE(95)] = 4750,
  [SMALL_STATE(96)] = 4775,
  [SMALL_STATE(97)] = 4800,
  [SMALL_STATE(98)] = 4825,
  [SMALL_STATE(99)] = 4850,
  [SMALL_STATE(100)] = 4875,
  [SMALL_STATE(101)] = 4900,
  [SMALL_STATE(102)] = 4925,
  [SMALL_STATE(103)] = 4950,
  [SMALL_STATE(104)] = 4975,
  [SMALL_STATE(105)] = 5000,
  [SMALL_STATE(106)] = 5025,
  [SMALL_STATE(107)] = 5050,
  [SMALL_STATE(108)] = 5075,
  [SMALL_STATE(109)] = 5100,
  [SMALL_STATE(110)] = 5125,
  [SMALL_STATE(111)] = 5150,
  [SMALL_STATE(112)] = 5175,
  [SMALL_STATE(113)] = 5200,
  [SMALL_STATE(114)] = 5225,
  [SMALL_STATE(115)] = 5250,
  [SMALL_STATE(116)] = 5275,
  [SMALL_STATE(117)] = 5300,
  [SMALL_STATE(118)] = 5325,
  [SMALL_STATE(119)] = 5350,
  [SMALL_STATE(120)] = 5375,
  [SMALL_STATE(121)] = 5400,
  [SMALL_STATE(122)] = 5425,
  [SMALL_STATE(123)] = 5450,
  [SMALL_STATE(124)] = 5475,
  [SMALL_STATE(125)] = 5500,
  [SMALL_STATE(126)] = 5525,
  [SMALL_STATE(127)] = 5550,
  [SMALL_STATE(128)] = 5575,
  [SMALL_STATE(129)] = 5600,
  [SMALL_STATE(130)] = 5625,
  [SMALL_STATE(131)] = 5650,
  [SMALL_STATE(132)] = 5675,
  [SMALL_STATE(133)] = 5707,
  [SMALL_STATE(134)] = 5733,
  [SMALL_STATE(135)] = 5765,
  [SMALL_STATE(136)] = 5789,
  [SMALL_STATE(137)] = 5813,
  [SMALL_STATE(138)] = 5837,
  [SMALL_STATE(139)] = 5861,
  [SMALL_STATE(140)] = 5887,
  [SMALL_STATE(141)] = 5913,
  [SMALL_STATE(142)] = 5945,
  [SMALL_STATE(143)] = 5968,
  [SMALL_STATE(144)] = 5989,
  [SMALL_STATE(145)] = 6012,
  [SMALL_STATE(146)] = 6035,
  [SMALL_STATE(147)] = 6058,
  [SMALL_STATE(148)] = 6077,
  [SMALL_STATE(149)] = 6098,
  [SMALL_STATE(150)] = 6121,
  [SMALL_STATE(151)] = 6145,
  [SMALL_STATE(152)] = 6167,
  [SMALL_STATE(153)] = 6189,
  [SMALL_STATE(154)] = 6211,
  [SMALL_STATE(155)] = 6233,
  [SMALL_STATE(156)] = 6257,
  [SMALL_STATE(157)] = 6281,
  [SMALL_STATE(158)] = 6301,
  [SMALL_STATE(159)] = 6319,
  [SMALL_STATE(160)] = 6343,
  [SMALL_STATE(161)] = 6367,
  [SMALL_STATE(162)] = 6389,
  [SMALL_STATE(163)] = 6413,
  [SMALL_STATE(164)] = 6434,
  [SMALL_STATE(165)] = 6451,
  [SMALL_STATE(166)] = 6472,
  [SMALL_STATE(167)] = 6493,
  [SMALL_STATE(168)] = 6512,
  [SMALL_STATE(169)] = 6531,
  [SMALL_STATE(170)] = 6552,
  [SMALL_STATE(171)] = 6573,
  [SMALL_STATE(172)] = 6594,
  [SMALL_STATE(173)] = 6615,
  [SMALL_STATE(174)] = 6636,
  [SMALL_STATE(175)] = 6653,
  [SMALL_STATE(176)] = 6674,
  [SMALL_STATE(177)] = 6695,
  [SMALL_STATE(178)] = 6716,
  [SMALL_STATE(179)] = 6735,
  [SMALL_STATE(180)] = 6752,
  [SMALL_STATE(181)] = 6769,
  [SMALL_STATE(182)] = 6788,
  [SMALL_STATE(183)] = 6809,
  [SMALL_STATE(184)] = 6826,
  [SMALL_STATE(185)] = 6845,
  [SMALL_STATE(186)] = 6866,
  [SMALL_STATE(187)] = 6887,
  [SMALL_STATE(188)] = 6906,
  [SMALL_STATE(189)] = 6927,
  [SMALL_STATE(190)] = 6953,
  [SMALL_STATE(191)] = 6969,
  [SMALL_STATE(192)] = 6987,
  [SMALL_STATE(193)] = 7013,
  [SMALL_STATE(194)] = 7039,
  [SMALL_STATE(195)] = 7065,
  [SMALL_STATE(196)] = 7091,
  [SMALL_STATE(197)] = 7117,
  [SMALL_STATE(198)] = 7143,
  [SMALL_STATE(199)] = 7169,
  [SMALL_STATE(200)] = 7195,
  [SMALL_STATE(201)] = 7221,
  [SMALL_STATE(202)] = 7247,
  [SMALL_STATE(203)] = 7265,
  [SMALL_STATE(204)] = 7281,
  [SMALL_STATE(205)] = 7307,
  [SMALL_STATE(206)] = 7328,
  [SMALL_STATE(207)] = 7343,
  [SMALL_STATE(208)] = 7360,
  [SMALL_STATE(209)] = 7377,
  [SMALL_STATE(210)] = 7392,
  [SMALL_STATE(211)] = 7409,
  [SMALL_STATE(212)] = 7426,
  [SMALL_STATE(213)] = 7443,
  [SMALL_STATE(214)] = 7460,
  [SMALL_STATE(215)] = 7475,
  [SMALL_STATE(216)] = 7490,
  [SMALL_STATE(217)] = 7505,
  [SMALL_STATE(218)] = 7522,
  [SMALL_STATE(219)] = 7541,
  [SMALL_STATE(220)] = 7556,
  [SMALL_STATE(221)] = 7573,
  [SMALL_STATE(222)] = 7588,
  [SMALL_STATE(223)] = 7607,
  [SMALL_STATE(224)] = 7622,
  [SMALL_STATE(225)] = 7637,
  [SMALL_STATE(226)] = 7654,
  [SMALL_STATE(227)] = 7675,
  [SMALL_STATE(228)] = 7696,
  [SMALL_STATE(229)] = 7711,
  [SMALL_STATE(230)] = 7726,
  [SMALL_STATE(231)] = 7741,
  [SMALL_STATE(232)] = 7756,
  [SMALL_STATE(233)] = 7784,
  [SMALL_STATE(234)] = 7804,
  [SMALL_STATE(235)] = 7832,
  [SMALL_STATE(236)] = 7860,
  [SMALL_STATE(237)] = 7880,
  [SMALL_STATE(238)] = 7904,
  [SMALL_STATE(239)] = 7924,
  [SMALL_STATE(240)] = 7948,
  [SMALL_STATE(241)] = 7968,
  [SMALL_STATE(242)] = 7992,
  [SMALL_STATE(243)] = 8007,
  [SMALL_STATE(244)] = 8022,
  [SMALL_STATE(245)] = 8035,
  [SMALL_STATE(246)] = 8050,
  [SMALL_STATE(247)] = 8063,
  [SMALL_STATE(248)] = 8078,
  [SMALL_STATE(249)] = 8091,
  [SMALL_STATE(250)] = 8106,
  [SMALL_STATE(251)] = 8119,
  [SMALL_STATE(252)] = 8134,
  [SMALL_STATE(253)] = 8151,
  [SMALL_STATE(254)] = 8166,
  [SMALL_STATE(255)] = 8183,
  [SMALL_STATE(256)] = 8198,
  [SMALL_STATE(257)] = 8215,
  [SMALL_STATE(258)] = 8230,
  [SMALL_STATE(259)] = 8245,
  [SMALL_STATE(260)] = 8260,
  [SMALL_STATE(261)] = 8275,
  [SMALL_STATE(262)] = 8290,
  [SMALL_STATE(263)] = 8305,
  [SMALL_STATE(264)] = 8320,
  [SMALL_STATE(265)] = 8335,
  [SMALL_STATE(266)] = 8350,
  [SMALL_STATE(267)] = 8363,
  [SMALL_STATE(268)] = 8378,
  [SMALL_STATE(269)] = 8395,
  [SMALL_STATE(270)] = 8410,
  [SMALL_STATE(271)] = 8425,
  [SMALL_STATE(272)] = 8440,
  [SMALL_STATE(273)] = 8455,
  [SMALL_STATE(274)] = 8470,
  [SMALL_STATE(275)] = 8485,
  [SMALL_STATE(276)] = 8500,
  [SMALL_STATE(277)] = 8515,
  [SMALL_STATE(278)] = 8530,
  [SMALL_STATE(279)] = 8545,
  [SMALL_STATE(280)] = 8560,
  [SMALL_STATE(281)] = 8573,
  [SMALL_STATE(282)] = 8588,
  [SMALL_STATE(283)] = 8603,
  [SMALL_STATE(284)] = 8618,
  [SMALL_STATE(285)] = 8633,
  [SMALL_STATE(286)] = 8648,
  [SMALL_STATE(287)] = 8663,
  [SMALL_STATE(288)] = 8678,
  [SMALL_STATE(289)] = 8693,
  [SMALL_STATE(290)] = 8708,
  [SMALL_STATE(291)] = 8723,
  [SMALL_STATE(292)] = 8738,
  [SMALL_STATE(293)] = 8751,
  [SMALL_STATE(294)] = 8776,
  [SMALL_STATE(295)] = 8789,
  [SMALL_STATE(296)] = 8804,
  [SMALL_STATE(297)] = 8819,
  [SMALL_STATE(298)] = 8831,
  [SMALL_STATE(299)] = 8843,
  [SMALL_STATE(300)] = 8863,
  [SMALL_STATE(301)] = 8883,
  [SMALL_STATE(302)] = 8903,
  [SMALL_STATE(303)] = 8915,
  [SMALL_STATE(304)] = 8937,
  [SMALL_STATE(305)] = 8959,
  [SMALL_STATE(306)] = 8981,
  [SMALL_STATE(307)] = 9001,
  [SMALL_STATE(308)] = 9023,
  [SMALL_STATE(309)] = 9035,
  [SMALL_STATE(310)] = 9057,
  [SMALL_STATE(311)] = 9079,
  [SMALL_STATE(312)] = 9101,
  [SMALL_STATE(313)] = 9121,
  [SMALL_STATE(314)] = 9143,
  [SMALL_STATE(315)] = 9155,
  [SMALL_STATE(316)] = 9175,
  [SMALL_STATE(317)] = 9194,
  [SMALL_STATE(318)] = 9211,
  [SMALL_STATE(319)] = 9228,
  [SMALL_STATE(320)] = 9245,
  [SMALL_STATE(321)] = 9264,
  [SMALL_STATE(322)] = 9281,
  [SMALL_STATE(323)] = 9300,
  [SMALL_STATE(324)] = 9317,
  [SMALL_STATE(325)] = 9334,
  [SMALL_STATE(326)] = 9351,
  [SMALL_STATE(327)] = 9368,
  [SMALL_STATE(328)] = 9387,
  [SMALL_STATE(329)] = 9406,
  [SMALL_STATE(330)] = 9425,
  [SMALL_STATE(331)] = 9444,
  [SMALL_STATE(332)] = 9463,
  [SMALL_STATE(333)] = 9482,
  [SMALL_STATE(334)] = 9496,
  [SMALL_STATE(335)] = 9510,
  [SMALL_STATE(336)] = 9524,
  [SMALL_STATE(337)] = 9538,
  [SMALL_STATE(338)] = 9552,
  [SMALL_STATE(339)] = 9564,
  [SMALL_STATE(340)] = 9580,
  [SMALL_STATE(341)] = 9594,
  [SMALL_STATE(342)] = 9610,
  [SMALL_STATE(343)] = 9626,
  [SMALL_STATE(344)] = 9642,
  [SMALL_STATE(345)] = 9658,
  [SMALL_STATE(346)] = 9670,
  [SMALL_STATE(347)] = 9684,
  [SMALL_STATE(348)] = 9698,
  [SMALL_STATE(349)] = 9714,
  [SMALL_STATE(350)] = 9730,
  [SMALL_STATE(351)] = 9746,
  [SMALL_STATE(352)] = 9762,
  [SMALL_STATE(353)] = 9778,
  [SMALL_STATE(354)] = 9787,
  [SMALL_STATE(355)] = 9800,
  [SMALL_STATE(356)] = 9813,
  [SMALL_STATE(357)] = 9826,
  [SMALL_STATE(358)] = 9835,
  [SMALL_STATE(359)] = 9844,
  [SMALL_STATE(360)] = 9853,
  [SMALL_STATE(361)] = 9866,
  [SMALL_STATE(362)] = 9879,
  [SMALL_STATE(363)] = 9892,
  [SMALL_STATE(364)] = 9905,
  [SMALL_STATE(365)] = 9918,
  [SMALL_STATE(366)] = 9931,
  [SMALL_STATE(367)] = 9944,
  [SMALL_STATE(368)] = 9953,
  [SMALL_STATE(369)] = 9966,
  [SMALL_STATE(370)] = 9975,
  [SMALL_STATE(371)] = 9988,
  [SMALL_STATE(372)] = 9997,
  [SMALL_STATE(373)] = 10010,
  [SMALL_STATE(374)] = 10023,
  [SMALL_STATE(375)] = 10036,
  [SMALL_STATE(376)] = 10045,
  [SMALL_STATE(377)] = 10058,
  [SMALL_STATE(378)] = 10071,
  [SMALL_STATE(379)] = 10084,
  [SMALL_STATE(380)] = 10097,
  [SMALL_STATE(381)] = 10106,
  [SMALL_STATE(382)] = 10119,
  [SMALL_STATE(383)] = 10132,
  [SMALL_STATE(384)] = 10141,
  [SMALL_STATE(385)] = 10150,
  [SMALL_STATE(386)] = 10163,
  [SMALL_STATE(387)] = 10176,
  [SMALL_STATE(388)] = 10185,
  [SMALL_STATE(389)] = 10194,
  [SMALL_STATE(390)] = 10207,
  [SMALL_STATE(391)] = 10220,
  [SMALL_STATE(392)] = 10229,
  [SMALL_STATE(393)] = 10238,
  [SMALL_STATE(394)] = 10251,
  [SMALL_STATE(395)] = 10264,
  [SMALL_STATE(396)] = 10275,
  [SMALL_STATE(397)] = 10288,
  [SMALL_STATE(398)] = 10301,
  [SMALL_STATE(399)] = 10314,
  [SMALL_STATE(400)] = 10327,
  [SMALL_STATE(401)] = 10340,
  [SMALL_STATE(402)] = 10353,
  [SMALL_STATE(403)] = 10364,
  [SMALL_STATE(404)] = 10373,
  [SMALL_STATE(405)] = 10386,
  [SMALL_STATE(406)] = 10399,
  [SMALL_STATE(407)] = 10408,
  [SMALL_STATE(408)] = 10417,
  [SMALL_STATE(409)] = 10430,
  [SMALL_STATE(410)] = 10443,
  [SMALL_STATE(411)] = 10456,
  [SMALL_STATE(412)] = 10469,
  [SMALL_STATE(413)] = 10478,
  [SMALL_STATE(414)] = 10491,
  [SMALL_STATE(415)] = 10504,
  [SMALL_STATE(416)] = 10517,
  [SMALL_STATE(417)] = 10530,
  [SMALL_STATE(418)] = 10543,
  [SMALL_STATE(419)] = 10556,
  [SMALL_STATE(420)] = 10565,
  [SMALL_STATE(421)] = 10578,
  [SMALL_STATE(422)] = 10591,
  [SMALL_STATE(423)] = 10604,
  [SMALL_STATE(424)] = 10613,
  [SMALL_STATE(425)] = 10622,
  [SMALL_STATE(426)] = 10631,
  [SMALL_STATE(427)] = 10640,
  [SMALL_STATE(428)] = 10653,
  [SMALL_STATE(429)] = 10666,
  [SMALL_STATE(430)] = 10675,
  [SMALL_STATE(431)] = 10688,
  [SMALL_STATE(432)] = 10697,
  [SMALL_STATE(433)] = 10710,
  [SMALL_STATE(434)] = 10719,
  [SMALL_STATE(435)] = 10732,
  [SMALL_STATE(436)] = 10741,
  [SMALL_STATE(437)] = 10750,
  [SMALL_STATE(438)] = 10763,
  [SMALL_STATE(439)] = 10776,
  [SMALL_STATE(440)] = 10789,
  [SMALL_STATE(441)] = 10802,
  [SMALL_STATE(442)] = 10811,
  [SMALL_STATE(443)] = 10824,
  [SMALL_STATE(444)] = 10837,
  [SMALL_STATE(445)] = 10846,
  [SMALL_STATE(446)] = 10859,
  [SMALL_STATE(447)] = 10872,
  [SMALL_STATE(448)] = 10885,
  [SMALL_STATE(449)] = 10898,
  [SMALL_STATE(450)] = 10907,
  [SMALL_STATE(451)] = 10916,
  [SMALL_STATE(452)] = 10926,
  [SMALL_STATE(453)] = 10934,
  [SMALL_STATE(454)] = 10942,
  [SMALL_STATE(455)] = 10950,
  [SMALL_STATE(456)] = 10960,
  [SMALL_STATE(457)] = 10968,
  [SMALL_STATE(458)] = 10976,
  [SMALL_STATE(459)] = 10984,
  [SMALL_STATE(460)] = 10992,
  [SMALL_STATE(461)] = 11002,
  [SMALL_STATE(462)] = 11012,
  [SMALL_STATE(463)] = 11020,
  [SMALL_STATE(464)] = 11030,
  [SMALL_STATE(465)] = 11038,
  [SMALL_STATE(466)] = 11048,
  [SMALL_STATE(467)] = 11058,
  [SMALL_STATE(468)] = 11068,
  [SMALL_STATE(469)] = 11078,
  [SMALL_STATE(470)] = 11088,
  [SMALL_STATE(471)] = 11098,
  [SMALL_STATE(472)] = 11108,
  [SMALL_STATE(473)] = 11118,
  [SMALL_STATE(474)] = 11128,
  [SMALL_STATE(475)] = 11138,
  [SMALL_STATE(476)] = 11146,
  [SMALL_STATE(477)] = 11154,
  [SMALL_STATE(478)] = 11164,
  [SMALL_STATE(479)] = 11174,
  [SMALL_STATE(480)] = 11184,
  [SMALL_STATE(481)] = 11192,
  [SMALL_STATE(482)] = 11200,
  [SMALL_STATE(483)] = 11210,
  [SMALL_STATE(484)] = 11220,
  [SMALL_STATE(485)] = 11230,
  [SMALL_STATE(486)] = 11240,
  [SMALL_STATE(487)] = 11250,
  [SMALL_STATE(488)] = 11258,
  [SMALL_STATE(489)] = 11266,
  [SMALL_STATE(490)] = 11274,
  [SMALL_STATE(491)] = 11282,
  [SMALL_STATE(492)] = 11292,
  [SMALL_STATE(493)] = 11302,
  [SMALL_STATE(494)] = 11310,
  [SMALL_STATE(495)] = 11320,
  [SMALL_STATE(496)] = 11328,
  [SMALL_STATE(497)] = 11338,
  [SMALL_STATE(498)] = 11348,
  [SMALL_STATE(499)] = 11356,
  [SMALL_STATE(500)] = 11364,
  [SMALL_STATE(501)] = 11374,
  [SMALL_STATE(502)] = 11382,
  [SMALL_STATE(503)] = 11392,
  [SMALL_STATE(504)] = 11402,
  [SMALL_STATE(505)] = 11410,
  [SMALL_STATE(506)] = 11420,
  [SMALL_STATE(507)] = 11428,
  [SMALL_STATE(508)] = 11436,
  [SMALL_STATE(509)] = 11446,
  [SMALL_STATE(510)] = 11456,
  [SMALL_STATE(511)] = 11466,
  [SMALL_STATE(512)] = 11474,
  [SMALL_STATE(513)] = 11482,
  [SMALL_STATE(514)] = 11492,
  [SMALL_STATE(515)] = 11502,
  [SMALL_STATE(516)] = 11510,
  [SMALL_STATE(517)] = 11520,
  [SMALL_STATE(518)] = 11530,
  [SMALL_STATE(519)] = 11540,
  [SMALL_STATE(520)] = 11550,
  [SMALL_STATE(521)] = 11560,
  [SMALL_STATE(522)] = 11570,
  [SMALL_STATE(523)] = 11580,
  [SMALL_STATE(524)] = 11590,
  [SMALL_STATE(525)] = 11600,
  [SMALL_STATE(526)] = 11610,
  [SMALL_STATE(527)] = 11620,
  [SMALL_STATE(528)] = 11627,
  [SMALL_STATE(529)] = 11634,
  [SMALL_STATE(530)] = 11641,
  [SMALL_STATE(531)] = 11648,
  [SMALL_STATE(532)] = 11655,
  [SMALL_STATE(533)] = 11662,
  [SMALL_STATE(534)] = 11669,
  [SMALL_STATE(535)] = 11676,
  [SMALL_STATE(536)] = 11683,
  [SMALL_STATE(537)] = 11690,
  [SMALL_STATE(538)] = 11697,
  [SMALL_STATE(539)] = 11704,
  [SMALL_STATE(540)] = 11711,
  [SMALL_STATE(541)] = 11718,
  [SMALL_STATE(542)] = 11725,
  [SMALL_STATE(543)] = 11732,
  [SMALL_STATE(544)] = 11739,
  [SMALL_STATE(545)] = 11746,
  [SMALL_STATE(546)] = 11753,
  [SMALL_STATE(547)] = 11760,
  [SMALL_STATE(548)] = 11767,
  [SMALL_STATE(549)] = 11774,
  [SMALL_STATE(550)] = 11781,
  [SMALL_STATE(551)] = 11788,
  [SMALL_STATE(552)] = 11795,
  [SMALL_STATE(553)] = 11802,
  [SMALL_STATE(554)] = 11809,
  [SMALL_STATE(555)] = 11816,
  [SMALL_STATE(556)] = 11823,
  [SMALL_STATE(557)] = 11830,
  [SMALL_STATE(558)] = 11837,
  [SMALL_STATE(559)] = 11844,
  [SMALL_STATE(560)] = 11851,
  [SMALL_STATE(561)] = 11858,
  [SMALL_STATE(562)] = 11865,
  [SMALL_STATE(563)] = 11872,
  [SMALL_STATE(564)] = 11879,
  [SMALL_STATE(565)] = 11886,
  [SMALL_STATE(566)] = 11893,
  [SMALL_STATE(567)] = 11900,
  [SMALL_STATE(568)] = 11907,
  [SMALL_STATE(569)] = 11914,
  [SMALL_STATE(570)] = 11921,
  [SMALL_STATE(571)] = 11928,
  [SMALL_STATE(572)] = 11935,
  [SMALL_STATE(573)] = 11942,
  [SMALL_STATE(574)] = 11949,
  [SMALL_STATE(575)] = 11956,
  [SMALL_STATE(576)] = 11963,
  [SMALL_STATE(577)] = 11970,
  [SMALL_STATE(578)] = 11977,
  [SMALL_STATE(579)] = 11984,
  [SMALL_STATE(580)] = 11991,
  [SMALL_STATE(581)] = 11998,
  [SMALL_STATE(582)] = 12005,
  [SMALL_STATE(583)] = 12012,
  [SMALL_STATE(584)] = 12019,
  [SMALL_STATE(585)] = 12026,
  [SMALL_STATE(586)] = 12033,
  [SMALL_STATE(587)] = 12040,
  [SMALL_STATE(588)] = 12047,
  [SMALL_STATE(589)] = 12054,
  [SMALL_STATE(590)] = 12061,
  [SMALL_STATE(591)] = 12068,
  [SMALL_STATE(592)] = 12075,
  [SMALL_STATE(593)] = 12082,
  [SMALL_STATE(594)] = 12089,
  [SMALL_STATE(595)] = 12096,
  [SMALL_STATE(596)] = 12103,
  [SMALL_STATE(597)] = 12110,
  [SMALL_STATE(598)] = 12117,
  [SMALL_STATE(599)] = 12124,
  [SMALL_STATE(600)] = 12131,
  [SMALL_STATE(601)] = 12138,
  [SMALL_STATE(602)] = 12145,
  [SMALL_STATE(603)] = 12152,
  [SMALL_STATE(604)] = 12159,
  [SMALL_STATE(605)] = 12166,
  [SMALL_STATE(606)] = 12173,
  [SMALL_STATE(607)] = 12180,
  [SMALL_STATE(608)] = 12187,
  [SMALL_STATE(609)] = 12194,
  [SMALL_STATE(610)] = 12201,
  [SMALL_STATE(611)] = 12208,
  [SMALL_STATE(612)] = 12215,
  [SMALL_STATE(613)] = 12222,
  [SMALL_STATE(614)] = 12229,
  [SMALL_STATE(615)] = 12236,
  [SMALL_STATE(616)] = 12243,
  [SMALL_STATE(617)] = 12250,
  [SMALL_STATE(618)] = 12257,
  [SMALL_STATE(619)] = 12264,
  [SMALL_STATE(620)] = 12271,
  [SMALL_STATE(621)] = 12278,
  [SMALL_STATE(622)] = 12285,
  [SMALL_STATE(623)] = 12292,
  [SMALL_STATE(624)] = 12299,
  [SMALL_STATE(625)] = 12306,
  [SMALL_STATE(626)] = 12313,
  [SMALL_STATE(627)] = 12320,
  [SMALL_STATE(628)] = 12327,
  [SMALL_STATE(629)] = 12334,
  [SMALL_STATE(630)] = 12341,
  [SMALL_STATE(631)] = 12348,
  [SMALL_STATE(632)] = 12355,
  [SMALL_STATE(633)] = 12362,
  [SMALL_STATE(634)] = 12369,
  [SMALL_STATE(635)] = 12376,
  [SMALL_STATE(636)] = 12383,
  [SMALL_STATE(637)] = 12390,
  [SMALL_STATE(638)] = 12397,
  [SMALL_STATE(639)] = 12404,
  [SMALL_STATE(640)] = 12411,
  [SMALL_STATE(641)] = 12418,
  [SMALL_STATE(642)] = 12425,
  [SMALL_STATE(643)] = 12432,
  [SMALL_STATE(644)] = 12439,
  [SMALL_STATE(645)] = 12446,
  [SMALL_STATE(646)] = 12453,
  [SMALL_STATE(647)] = 12460,
  [SMALL_STATE(648)] = 12467,
  [SMALL_STATE(649)] = 12474,
  [SMALL_STATE(650)] = 12481,
  [SMALL_STATE(651)] = 12488,
  [SMALL_STATE(652)] = 12495,
  [SMALL_STATE(653)] = 12502,
  [SMALL_STATE(654)] = 12509,
  [SMALL_STATE(655)] = 12516,
  [SMALL_STATE(656)] = 12523,
  [SMALL_STATE(657)] = 12530,
  [SMALL_STATE(658)] = 12537,
  [SMALL_STATE(659)] = 12544,
  [SMALL_STATE(660)] = 12551,
  [SMALL_STATE(661)] = 12558,
  [SMALL_STATE(662)] = 12565,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(28),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(516),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(642),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(641),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(23),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(640),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(327),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(639),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(319),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(514),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(637),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(636),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(635),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(311),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(239),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(237),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(28),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(516),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(642),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(319),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(514),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(637),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(636),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(635),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2), SHIFT_REPEAT(311),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__valeur_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 2), SHIFT_REPEAT(5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(372),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 3, .production_id = 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 3, .production_id = 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 3, .production_id = 16),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 3, .production_id = 16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 3, .production_id = 7),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 3, .production_id = 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 2, .production_id = 24), SHIFT_REPEAT(322),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_inversion_repeat1, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_m_array_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 27),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_s_remplace_repeat1, 3, .production_id = 27),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 8),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, .production_id = 8),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 16),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 16),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 4, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 52),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 52),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 43),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 11, .production_id = 43),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 31),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 31),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_avec, 4, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_avec, 4, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 4, .production_id = 7),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 4, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 40),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 40),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_array, 4, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 56),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 10, .production_id = 56),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 46),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 46),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 7, .production_id = 7),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 7, .production_id = 7),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 47),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 8, .production_id = 47),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 30),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 5, .production_id = 30),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 9, .production_id = 43),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 9, .production_id = 43),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 50),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 50),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 57),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 11, .production_id = 57),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 43),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 12, .production_id = 43),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 13, .production_id = 52),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 13, .production_id = 52),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 52),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 14, .production_id = 52),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 6, .production_id = 35),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 6, .production_id = 35),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unary, 2, .production_id = 7),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unary, 2, .production_id = 7),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 4),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 5, .production_id = 29),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 5, .production_id = 29),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variations, 4, .production_id = 7),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_variations, 4, .production_id = 7),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_formule, 2, .production_id = 7),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_formule, 2, .production_id = 7),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 4, .production_id = 7),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 51),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 9, .production_id = 51),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 10, .production_id = 52),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 10, .production_id = 52),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_texte, 2, .production_id = 7),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_texte, 2, .production_id = 7),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valeur, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valeur, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_remplace, 3, .production_id = 7),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_remplace, 3, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tags, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tags, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_meta, 2, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_meta, 2, .production_id = 9),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_inversion, 4, .production_id = 7),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_baru00e8me_like, 8, .production_id = 43),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_baru00e8me_like, 8, .production_id = 43),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 41),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 7, .production_id = 41),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_line, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_line, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unitu00e9, 3, .production_id = 7),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unitu00e9, 3, .production_id = 7),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e, 3, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_duru00e9e, 3, .production_id = 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 38),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_une_possibilitu00e9, 7, .production_id = 38),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_contexte, 4, .production_id = 7),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_contexte, 4, .production_id = 7),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(657),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_name, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__units, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__units, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__units_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(486),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(404),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 3, .production_id = 17),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1, .production_id = 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 2, .production_id = 11),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(600),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(465),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(473),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 3),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(411),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_name_repeat1, 2), SHIFT_REPEAT(574),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__ar_expression, 1), REDUCE(sym__bool_expression, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ar_expression, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_unary_expression, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ar_binary_expression, 3),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(382),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expression, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(662),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(583),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2), SHIFT_REPEAT(137),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(526),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_inversion_repeat1, 2), SHIFT_REPEAT(379),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__units_repeat1, 2), SHIFT_REPEAT(455),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 4),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(356),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 42),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 2, .production_id = 42), SHIFT_REPEAT(325),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5, .production_id = 20),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 5, .production_id = 21),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 2), SHIFT_REPEAT(317),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 5),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, .production_id = 6),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 5),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 12),
  [1085] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2), SHIFT_REPEAT(541),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 2), SHIFT_REPEAT(483),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 15),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 4, .production_id = 34),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 2, .production_id = 13),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 4, .production_id = 14),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(241),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 4, .production_id = 25),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 3),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_units_repeat1, 2), SHIFT_REPEAT(442),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_or_ref, 2),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 6, .production_id = 26),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 3, .production_id = 28),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_taux_or_montant, 2),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_rules_repeat1, 3),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_variations_repeat1, 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_in, 3),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line_repeat1, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 4, .production_id = 32),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_contexte_repeat1, 3),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_m_baru00e8me_like_repeat1, 3, .production_id = 48),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rule, 1, .production_id = 23),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 4, .production_id = 22),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_into, 2, .production_id = 4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 6, .production_id = 44),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 2, .production_id = 18),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 36),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 2, .production_id = 19),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rules, 4),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_duru00e9e_units, 1),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_url, 4, .production_id = 33),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 8, .production_id = 55),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 3, .production_id = 54),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__m_tranche, 3, .production_id = 53),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remplace_rule_except, 3),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 7, .production_id = 49),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_une_possibilitu00e9_options, 3),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_sinon, 2),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 6, .production_id = 45),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_variation_si, 4, .production_id = 39),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remplace_rule, 5, .production_id = 37),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1507] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
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
