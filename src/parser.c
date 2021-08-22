#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
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
  sym_sci_name = 8,
  sym_genus = 9,
  sym_subgenus = 10,
  sym_species = 11,
  sym_author = 12,
  aux_sym_species_repeat1 = 13,
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
  [sym_sci_name] = "sci_name",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym_author] = "author",
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
  [sym_sci_name] = sym_sci_name,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym_author] = sym_author,
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
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
    [sym_sci_name] = STATE(11),
    [sym_genus] = STATE(6),
    [aux_sym_genus_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_species_token1,
    STATE(8), 1,
      sym_subgenus,
  [13] = 3,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_author_token1,
    STATE(4), 2,
      sym_author,
      aux_sym_species_repeat1,
  [24] = 3,
    ACTIONS(13), 1,
      aux_sym_author_token1,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(5), 2,
      sym_author,
      aux_sym_species_repeat1,
  [35] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      aux_sym_author_token1,
    STATE(5), 2,
      sym_author,
      aux_sym_species_repeat1,
  [46] = 3,
    ACTIONS(22), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      aux_sym_species_token1,
    STATE(14), 1,
      sym_species,
  [56] = 3,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(28), 1,
      aux_sym_author_token1,
    ACTIONS(30), 1,
      sym_year,
  [66] = 2,
    ACTIONS(32), 1,
      anon_sym_LF,
    ACTIONS(34), 1,
      aux_sym_species_token1,
  [73] = 2,
    ACTIONS(36), 1,
      anon_sym_LF,
    ACTIONS(38), 1,
      aux_sym_species_token1,
  [80] = 2,
    ACTIONS(40), 1,
      anon_sym_LF,
    ACTIONS(42), 1,
      aux_sym_author_token1,
  [87] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [91] = 1,
    ACTIONS(46), 1,
      aux_sym_genus_token1,
  [95] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(50), 1,
      anon_sym_LF,
  [103] = 1,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
  [107] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_species_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_species_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgenus, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 2),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SciName(void) {
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
