#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
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
  aux_sym_author_token1 = 6,
  sym_year = 7,
  sym_list = 8,
  sym_sci_name = 9,
  sym_genus = 10,
  sym_subgenus = 11,
  sym_species = 12,
  sym_author = 13,
  aux_sym_list_repeat1 = 14,
  aux_sym_species_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_genus_token1] = "genus_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_species_token1] = "species_token1",
  [aux_sym_author_token1] = "author_token1",
  [sym_year] = "year",
  [sym_list] = "list",
  [sym_sci_name] = "sci_name",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym_author] = "author",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_species_repeat1] = "species_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_genus_token1] = aux_sym_genus_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_species_token1] = aux_sym_species_token1,
  [aux_sym_author_token1] = aux_sym_author_token1,
  [sym_year] = sym_year,
  [sym_list] = sym_list,
  [sym_sci_name] = sym_sci_name,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym_author] = sym_author,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_species_repeat1] = aux_sym_species_repeat1,
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
  [aux_sym_author_token1] = {
    .visible = false,
    .named = false,
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
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_species_repeat1] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?') ADVANCE(17);
      END_STATE();
    case 7:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_genus_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_species_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_author_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_author_token1);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
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
    [sym_list] = STATE(15),
    [sym_sci_name] = STATE(2),
    [sym_genus] = STATE(8),
    [aux_sym_list_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_genus_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      aux_sym_genus_token1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_genus,
    STATE(3), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_genus_token1,
    STATE(8), 1,
      sym_genus,
    STATE(3), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [28] = 4,
    ACTIONS(14), 1,
      anon_sym_LF,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      aux_sym_species_token1,
    STATE(10), 1,
      sym_subgenus,
  [41] = 3,
    ACTIONS(20), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      aux_sym_author_token1,
    STATE(6), 2,
      sym_author,
      aux_sym_species_repeat1,
  [52] = 3,
    ACTIONS(22), 1,
      aux_sym_author_token1,
    ACTIONS(24), 1,
      anon_sym_LF,
    STATE(7), 2,
      sym_author,
      aux_sym_species_repeat1,
  [63] = 3,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(28), 1,
      aux_sym_author_token1,
    STATE(7), 2,
      sym_author,
      aux_sym_species_repeat1,
  [74] = 3,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      aux_sym_species_token1,
    STATE(17), 1,
      sym_species,
  [84] = 3,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      aux_sym_author_token1,
    ACTIONS(39), 1,
      sym_year,
  [94] = 2,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      aux_sym_species_token1,
  [101] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [106] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [111] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      aux_sym_species_token1,
  [118] = 2,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      aux_sym_author_token1,
  [125] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [129] = 1,
    ACTIONS(59), 1,
      aux_sym_genus_token1,
  [133] = 1,
    ACTIONS(61), 1,
      anon_sym_LF,
  [137] = 1,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 111,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 133,
  [SMALL_STATE(18)] = 137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 1),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_species_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_species_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgenus, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 2),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
