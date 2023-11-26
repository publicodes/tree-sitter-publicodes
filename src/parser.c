#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  aux_sym__statement_token1 = 2,
  aux_sym__statement_token2 = 3,
  anon_sym_valeur = 4,
  sym_identifier = 5,
  sym_string = 6,
  sym_comment = 7,
  sym_number = 8,
  anon_sym_oui = 9,
  anon_sym_non = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_value_definition = 13,
  sym_rule_definition = 14,
  sym_rule_body = 15,
  sym__statement = 16,
  sym_mechanism = 17,
  sym_valeur = 18,
  sym__expression = 19,
  sym_constant = 20,
  sym_boolean = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_rule_body_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [anon_sym_valeur] = "valeur",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [anon_sym_oui] = "oui",
  [anon_sym_non] = "non",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [anon_sym_valeur] = anon_sym_valeur,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [anon_sym_oui] = anon_sym_oui,
  [anon_sym_non] = anon_sym_non,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_oui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 0},
  [2] =
    {field_name, 0},
    {field_value, 2},
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
  [17] = 13,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 7098
    ? (c < 3133
      ? (c < 2486
        ? (c < 1649
          ? (c < 904
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 891
                ? (c < 880
                  ? (c >= 248 && c <= 687)
                  : (c <= 883 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))))
            : (c <= 906 || (c < 1376
              ? (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))
              : (c <= 1416 || (c < 1568
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)
                : (c <= 1599 || (c < 1646
                  ? (c >= 1601 && c <= 1610)
                  : c <= 1647)))))))
          : (c <= 1747 || (c < 2160
            ? (c < 1869
              ? (c < 1791
                ? (c < 1774
                  ? c == 1749
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))
              : (c <= 1957 || (c < 2048
                ? (c < 1994
                  ? c == 1969
                  : c <= 2026)
                : (c <= 2069 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))))
            : (c <= 2183 || (c < 2418
              ? (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2248 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))
              : (c <= 2432 || (c < 2451
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2809
          ? (c < 2616
            ? (c < 2565
              ? (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))
              : (c <= 2570 || (c < 2602
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))))
            : (c <= 2617 || (c < 2730
              ? (c < 2693
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))
              : (c <= 2736 || (c < 2749
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))))))
          : (c <= 2809 || (c < 2958
            ? (c < 2877
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))))
            : (c <= 2960 || (c < 2990
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))
              : (c <= 3001 || (c < 3086
                ? (c < 3077
                  ? c == 3024
                  : c <= 3084)
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))))))))
      : (c <= 3133 || (c < 4256
        ? (c < 3585
          ? (c < 3332
            ? (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))
            : (c <= 3340 || (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3507
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))))))
          : (c <= 3632 || (c < 3840
            ? (c < 3749
              ? (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3653 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))
              : (c <= 3749 || (c < 3773
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)
                : (c <= 3773 || (c < 3804
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3807)))))
            : (c <= 3840 || (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4206
                ? (c < 4197
                  ? c == 4193
                  : c <= 4198)
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))))))))
        : (c <= 4293 || (c < 5792
          ? (c < 4792
            ? (c < 4696
              ? (c < 4349
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))
              : (c <= 4696 || (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))))
            : (c <= 4798 || (c < 4992
              ? (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))
              : (c <= 5007 || (c < 5121
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))))))
          : (c <= 5866 || (c < 6314
            ? (c < 6016
              ? (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))
              : (c <= 6067 || (c < 6212
                ? (c < 6176
                  ? c == 6108
                  : c <= 6210)
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))))
            : (c <= 6314 || (c < 6656
              ? (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6480 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))
              : (c <= 6678 || (c < 6981
                ? (c < 6917
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6963)
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))))))))))))
    : (c <= 7141 || (c < 43312
      ? (c < 11565
        ? (c < 8134
          ? (c < 7680
            ? (c < 7401
              ? (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7287)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7467 || (c < 7545
                  ? (c >= 7531 && c <= 7543)
                  : c <= 7578)))))
            : (c <= 7957 || (c < 8029
              ? (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))
              : (c <= 8029 || (c < 8118
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))))))
          : (c <= 8140 || (c < 8488
            ? (c < 8455
              ? (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8450
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8473
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))))
            : (c <= 8488 || (c < 11264
              ? (c < 8517
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))
                : (c <= 8521 || (c < 8544
                  ? c == 8526
                  : c <= 8584)))
              : (c <= 11387 || (c < 11506
                ? (c < 11499
                  ? (c >= 11390 && c <= 11492)
                  : c <= 11502)
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))))))))
        : (c <= 11565 || (c < 40959
          ? (c < 12344
            ? (c < 11712
              ? (c < 11688
                ? (c < 11648
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))
              : (c <= 11718 || (c < 11736
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)
                : (c <= 11742 || (c < 12321
                  ? (c >= 12294 && c <= 12295)
                  : c <= 12329)))))
            : (c <= 12346 || (c < 12593
              ? (c < 12449
                ? (c < 12353
                  ? c == 12348
                  : (c <= 12438 || c == 12447))
                : (c <= 12538 || (c < 12549
                  ? c == 12543
                  : c <= 12591)))
              : (c <= 12686 || (c < 13312
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : c <= 12799)
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))))))
          : (c <= 40980 || (c < 42963
            ? (c < 42624
              ? (c < 42512
                ? (c < 42192
                  ? (c >= 40982 && c <= 42124)
                  : (c <= 42231 || (c >= 42240 && c <= 42507)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))
              : (c <= 42651 || (c < 42865
                ? (c < 42786
                  ? (c >= 42656 && c <= 42735)
                  : c <= 42863)
                : (c <= 42887 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : c <= 42961)))))
            : (c <= 42963 || (c < 43072
              ? (c < 43011
                ? (c < 42997
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 42999 || (c >= 43002 && c <= 43009)))
                : (c <= 43013 || (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)))
              : (c <= 43123 || (c < 43259
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)
                : (c <= 43259 || (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)))))))))))
      : (c <= 43334 || (c < 65382
        ? (c < 43872
          ? (c < 43701
            ? (c < 43584
              ? (c < 43495
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43442 || (c >= 43488 && c <= 43492)))
                : (c <= 43503 || (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : c <= 43560)))
              : (c <= 43586 || (c < 43642
                ? (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : (c <= 43631 || (c >= 43633 && c <= 43638)))
                : (c <= 43642 || (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : c <= 43697)))))
            : (c <= 43702 || (c < 43777
              ? (c < 43739
                ? (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43740 || (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43762)))
              : (c <= 43782 || (c < 43808
                ? (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43866)))))))
          : (c <= 43880 || (c < 64312
            ? (c < 64112
              ? (c < 55216
                ? (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44032 || c == 55203))
                : (c <= 55238 || (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : c <= 64109)))
              : (c <= 64217 || (c < 64285
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)
                : (c <= 64285 || (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : c <= 64310)))))
            : (c <= 64316 || (c < 64914
              ? (c < 64326
                ? (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)))
              : (c <= 64967 || (c < 65142
                ? (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)
                : (c <= 65276 || (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : c <= 65370)))))))))
        : (c <= 65391 || (c < 66776
          ? (c < 65664
            ? (c < 65536
              ? (c < 65482
                ? (c < 65440
                  ? (c >= 65393 && c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65596
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : c <= 65594)
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66513
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66517 || (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67424
            ? (c < 66967
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : c <= 66965)))
              : (c <= 66977 || (c < 67003
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)))))
            : (c <= 67431 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_valeur);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_oui);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_non);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_valeur] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [anon_sym_oui] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__definition] = STATE(6),
    [sym_value_definition] = STATE(6),
    [sym_rule_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym_comment,
    STATE(4), 1,
      sym__statement,
    STATE(15), 1,
      sym_rule_body,
    STATE(18), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    ACTIONS(11), 2,
      sym_string,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(16), 2,
      sym__expression,
      sym_constant,
  [29] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_boolean,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_oui,
      anon_sym_non,
    STATE(11), 2,
      sym__expression,
      sym_constant,
  [48] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(8), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [66] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(27), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(5), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [84] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(7), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(7), 4,
      sym__definition,
      sym_value_definition,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [116] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(9), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
    STATE(5), 2,
      sym__statement,
      aux_sym_rule_body_repeat1,
  [134] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 3,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [146] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 3,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [158] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 3,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [170] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 3,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [182] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 3,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      sym_identifier,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_valeur,
    STATE(9), 1,
      sym_valeur,
    STATE(10), 1,
      sym_mechanism,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COLON,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COLON,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 253,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_body, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanism, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mechanism, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valeur, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valeur, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 3, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 3, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
