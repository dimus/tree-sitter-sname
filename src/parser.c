#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
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
  anon_sym_COMMA = 7,
  aux_sym_author_sep_token1 = 8,
  sym_year = 9,
  sym_list = 10,
  sym_sci_name = 11,
  sym_genus = 12,
  sym_subgenus = 13,
  sym_species = 14,
  sym_authorship = 15,
  sym_authorship_orig = 16,
  sym_author = 17,
  sym_author_sep = 18,
  aux_sym_list_repeat1 = 19,
  aux_sym_authorship_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_genus_token1] = "genus_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_species_token1] = "species_token1",
  [aux_sym_author_token1] = "author_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_author_sep_token1] = "author_sep_token1",
  [sym_year] = "year",
  [sym_list] = "list",
  [sym_sci_name] = "sci_name",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym_authorship] = "authorship",
  [sym_authorship_orig] = "authorship_orig",
  [sym_author] = "author",
  [sym_author_sep] = "author_sep",
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
  [aux_sym_author_token1] = aux_sym_author_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_author_sep_token1] = aux_sym_author_sep_token1,
  [sym_year] = sym_year,
  [sym_list] = sym_list,
  [sym_sci_name] = sym_sci_name,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym_authorship] = sym_authorship,
  [sym_authorship_orig] = sym_authorship_orig,
  [sym_author] = sym_author,
  [sym_author_sep] = sym_author_sep,
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
  [aux_sym_author_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_author_sep_token1] = {
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
  [sym_authorship] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship_orig] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_author_sep] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?') ADVANCE(22);
      END_STATE();
    case 10:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_genus_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_species_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_author_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_author_sep_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_genus_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_species_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_author_sep_token1] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(27),
    [sym_sci_name] = STATE(6),
    [sym_genus] = STATE(15),
    [aux_sym_list_repeat1] = STATE(6),
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
      aux_sym_author_token1,
    STATE(10), 1,
      sym_authorship_orig,
    STATE(28), 1,
      sym_authorship,
    STATE(11), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [20] = 3,
    STATE(16), 1,
      sym_author_sep,
    ACTIONS(15), 2,
      anon_sym_COMMA,
      aux_sym_author_sep_token1,
    ACTIONS(13), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [33] = 4,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_author_sep,
    ACTIONS(17), 2,
      aux_sym_author_token1,
      sym_year,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      aux_sym_author_sep_token1,
  [48] = 3,
    ACTIONS(23), 1,
      aux_sym_author_token1,
    ACTIONS(21), 2,
      anon_sym_RPAREN,
      sym_year,
    STATE(5), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [60] = 4,
    ACTIONS(5), 1,
      aux_sym_genus_token1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_genus,
    STATE(8), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [74] = 4,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    ACTIONS(30), 1,
      aux_sym_author_token1,
    ACTIONS(32), 1,
      sym_year,
    STATE(5), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [88] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym_genus_token1,
    STATE(15), 1,
      sym_genus,
    STATE(8), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [102] = 4,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      aux_sym_author_token1,
    ACTIONS(42), 1,
      sym_year,
    STATE(9), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [116] = 4,
    ACTIONS(11), 1,
      aux_sym_author_token1,
    ACTIONS(44), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_authorship,
    STATE(11), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [130] = 4,
    ACTIONS(11), 1,
      aux_sym_author_token1,
    ACTIONS(28), 1,
      anon_sym_LF,
    ACTIONS(46), 1,
      sym_year,
    STATE(9), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [144] = 4,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      aux_sym_species_token1,
    STATE(23), 1,
      sym_subgenus,
  [157] = 3,
    ACTIONS(30), 1,
      aux_sym_author_token1,
    STATE(24), 1,
      sym_authorship,
    STATE(7), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [168] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 2,
      aux_sym_author_token1,
      sym_year,
  [176] = 3,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      aux_sym_species_token1,
    STATE(30), 1,
      sym_species,
  [186] = 1,
    ACTIONS(54), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [192] = 1,
    ACTIONS(62), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [198] = 2,
    ACTIONS(62), 1,
      anon_sym_LF,
    ACTIONS(64), 2,
      aux_sym_author_token1,
      sym_year,
  [206] = 1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [211] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [216] = 2,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      aux_sym_species_token1,
  [223] = 2,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_author_token1,
  [230] = 2,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      aux_sym_species_token1,
  [237] = 1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
  [241] = 1,
    ACTIONS(84), 1,
      anon_sym_LF,
  [245] = 1,
    ACTIONS(86), 1,
      anon_sym_LF,
  [249] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [253] = 1,
    ACTIONS(44), 1,
      anon_sym_LF,
  [257] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [261] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [265] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [269] = 1,
    ACTIONS(94), 1,
      aux_sym_genus_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 211,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 223,
  [SMALL_STATE(23)] = 230,
  [SMALL_STATE(24)] = 237,
  [SMALL_STATE(25)] = 241,
  [SMALL_STATE(26)] = 245,
  [SMALL_STATE(27)] = 249,
  [SMALL_STATE(28)] = 253,
  [SMALL_STATE(29)] = 257,
  [SMALL_STATE(30)] = 261,
  [SMALL_STATE(31)] = 265,
  [SMALL_STATE(32)] = 269,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_sep, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_sep, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgenus, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship_orig, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship_orig, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_genus, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_species, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
