#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  aux_sym_genus_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  aux_sym_species_token1 = 5,
  sym_author = 6,
  sym_year = 7,
  sym_list = 8,
  sym_sci_name = 9,
  sym_genus = 10,
  sym_subgenus = 11,
  sym_species = 12,
  sym_authorship = 13,
  sym_authorship_orig = 14,
  aux_sym_list_repeat1 = 15,
  aux_sym_authorship_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_genus_token1] = "genus_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_species_token1] = "species_token1",
  [sym_author] = "author",
  [sym_year] = "year",
  [sym_list] = "list",
  [sym_sci_name] = "sci_name",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym_authorship] = "authorship",
  [sym_authorship_orig] = "authorship_orig",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_authorship_repeat1] = "authorship_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_genus_token1] = aux_sym_genus_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_species_token1] = aux_sym_species_token1,
  [sym_author] = sym_author,
  [sym_year] = sym_year,
  [sym_list] = sym_list,
  [sym_sci_name] = sym_sci_name,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym_authorship] = sym_authorship,
  [sym_authorship_orig] = sym_authorship_orig,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_authorship_repeat1] = aux_sym_authorship_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_genus_token1] = {
    .visible = false,
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
  [aux_sym_species_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sci_name] = {
    .visible = true,
    .named = true,
  },
  [sym_genus] = {
    .visible = true,
    .named = true,
  },
  [sym_subgenus] = {
    .visible = true,
    .named = true,
  },
  [sym_species] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship_orig] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_authorship_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?') ADVANCE(18);
      END_STATE();
    case 8:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_genus_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_species_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_author);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_author);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_genus_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_species_token1] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(22),
    [sym_sci_name] = STATE(3),
    [sym_genus] = STATE(11),
    [aux_sym_list_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_genus_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_author,
    STATE(9), 1,
      sym_authorship_orig,
    STATE(10), 1,
      aux_sym_authorship_repeat1,
    STATE(23), 1,
      sym_authorship,
  [19] = 4,
    ACTIONS(5), 1,
      aux_sym_genus_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_genus,
    STATE(4), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [33] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_genus_token1,
    STATE(11), 1,
      sym_genus,
    STATE(4), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [47] = 4,
    ACTIONS(20), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(24), 1,
      aux_sym_species_token1,
    STATE(14), 1,
      sym_subgenus,
  [60] = 3,
    ACTIONS(28), 1,
      sym_author,
    STATE(6), 1,
      aux_sym_authorship_repeat1,
    ACTIONS(26), 2,
      anon_sym_RPAREN,
      sym_year,
  [71] = 4,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym_author,
    ACTIONS(35), 1,
      sym_year,
    STATE(6), 1,
      aux_sym_authorship_repeat1,
  [84] = 4,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_author,
    ACTIONS(40), 1,
      sym_year,
    STATE(8), 1,
      aux_sym_authorship_repeat1,
  [97] = 4,
    ACTIONS(11), 1,
      sym_author,
    ACTIONS(42), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_authorship_repeat1,
    STATE(20), 1,
      sym_authorship,
  [110] = 4,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_author,
    ACTIONS(46), 1,
      sym_year,
    STATE(8), 1,
      aux_sym_authorship_repeat1,
  [123] = 3,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      aux_sym_species_token1,
    STATE(26), 1,
      sym_species,
  [133] = 3,
    ACTIONS(52), 1,
      sym_author,
    STATE(7), 1,
      aux_sym_authorship_repeat1,
    STATE(19), 1,
      sym_authorship,
  [143] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      aux_sym_species_token1,
  [150] = 2,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      aux_sym_species_token1,
  [157] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [162] = 2,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_author,
  [169] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [174] = 1,
    ACTIONS(70), 1,
      aux_sym_genus_token1,
  [178] = 1,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
  [182] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [186] = 1,
    ACTIONS(76), 1,
      anon_sym_LF,
  [190] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [194] = 1,
    ACTIONS(42), 1,
      anon_sym_LF,
  [198] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [202] = 1,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
  [206] = 1,
    ACTIONS(82), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 174,
  [SMALL_STATE(19)] = 178,
  [SMALL_STATE(20)] = 182,
  [SMALL_STATE(21)] = 186,
  [SMALL_STATE(22)] = 190,
  [SMALL_STATE(23)] = 194,
  [SMALL_STATE(24)] = 198,
  [SMALL_STATE(25)] = 202,
  [SMALL_STATE(26)] = 206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgenus, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship_orig, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship_orig, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sname(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
