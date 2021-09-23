#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_tail = 10,
  sym_list = 11,
  sym_sci_name = 12,
  sym_genus = 13,
  sym_subgenus = 14,
  sym_species = 15,
  sym_authorship = 16,
  sym_authorship_orig = 17,
  sym_author = 18,
  sym_author_sep = 19,
  aux_sym_list_repeat1 = 20,
  aux_sym_authorship_repeat1 = 21,
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
  [sym_tail] = "tail",
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
  [sym_tail] = sym_tail,
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
  [sym_tail] = {
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
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?') ADVANCE(33);
      END_STATE();
    case 15:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_genus_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_species_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_author_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_author_sep_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tail);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tail);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
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
    [sym_list] = STATE(32),
    [sym_sci_name] = STATE(8),
    [sym_genus] = STATE(15),
    [aux_sym_list_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_genus_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      aux_sym_author_token1,
    STATE(6), 1,
      sym_authorship_orig,
    STATE(26), 1,
      sym_authorship,
    ACTIONS(7), 2,
      anon_sym_LF,
      sym_tail,
    STATE(4), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [21] = 3,
    STATE(16), 1,
      sym_author_sep,
    ACTIONS(15), 2,
      anon_sym_COMMA,
      aux_sym_author_sep_token1,
    ACTIONS(13), 4,
      anon_sym_LF,
      aux_sym_author_token1,
      sym_year,
      sym_tail,
  [35] = 4,
    ACTIONS(11), 1,
      aux_sym_author_token1,
    ACTIONS(19), 1,
      sym_year,
    ACTIONS(17), 2,
      anon_sym_LF,
      sym_tail,
    STATE(7), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [50] = 3,
    STATE(18), 1,
      sym_author_sep,
    ACTIONS(23), 2,
      anon_sym_COMMA,
      aux_sym_author_sep_token1,
    ACTIONS(21), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [63] = 4,
    ACTIONS(11), 1,
      aux_sym_author_token1,
    STATE(23), 1,
      sym_authorship,
    ACTIONS(25), 2,
      anon_sym_LF,
      sym_tail,
    STATE(4), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [78] = 3,
    ACTIONS(29), 1,
      aux_sym_author_token1,
    STATE(7), 2,
      sym_author,
      aux_sym_authorship_repeat1,
    ACTIONS(27), 3,
      anon_sym_LF,
      sym_year,
      sym_tail,
  [91] = 4,
    ACTIONS(5), 1,
      aux_sym_genus_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_genus,
    STATE(11), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [105] = 3,
    ACTIONS(36), 1,
      aux_sym_author_token1,
    ACTIONS(34), 2,
      anon_sym_RPAREN,
      sym_year,
    STATE(9), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [117] = 4,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      aux_sym_author_token1,
    ACTIONS(43), 1,
      sym_year,
    STATE(9), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [131] = 4,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_genus_token1,
    STATE(15), 1,
      sym_genus,
    STATE(11), 2,
      sym_sci_name,
      aux_sym_list_repeat1,
  [145] = 3,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_subgenus,
    ACTIONS(50), 3,
      anon_sym_LF,
      aux_sym_species_token1,
      sym_tail,
  [157] = 1,
    ACTIONS(54), 4,
      anon_sym_LF,
      aux_sym_author_token1,
      sym_year,
      sym_tail,
  [164] = 3,
    ACTIONS(41), 1,
      aux_sym_author_token1,
    STATE(29), 1,
      sym_authorship,
    STATE(10), 2,
      sym_author,
      aux_sym_authorship_repeat1,
  [175] = 4,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      aux_sym_species_token1,
    ACTIONS(60), 1,
      sym_tail,
    STATE(27), 1,
      sym_species,
  [188] = 1,
    ACTIONS(62), 4,
      anon_sym_LF,
      aux_sym_author_token1,
      sym_year,
      sym_tail,
  [195] = 1,
    ACTIONS(64), 3,
      anon_sym_LF,
      aux_sym_species_token1,
      sym_tail,
  [201] = 1,
    ACTIONS(66), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [207] = 1,
    ACTIONS(68), 3,
      anon_sym_RPAREN,
      aux_sym_author_token1,
      sym_year,
  [213] = 1,
    ACTIONS(70), 3,
      anon_sym_LF,
      aux_sym_author_token1,
      sym_tail,
  [219] = 1,
    ACTIONS(72), 3,
      anon_sym_LF,
      aux_sym_species_token1,
      sym_tail,
  [225] = 1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [230] = 1,
    ACTIONS(76), 2,
      anon_sym_LF,
      sym_tail,
  [235] = 1,
    ACTIONS(78), 2,
      anon_sym_LF,
      sym_tail,
  [240] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [245] = 1,
    ACTIONS(25), 2,
      anon_sym_LF,
      sym_tail,
  [250] = 2,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym_tail,
  [257] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_genus_token1,
  [262] = 1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [266] = 1,
    ACTIONS(90), 1,
      aux_sym_genus_token1,
  [270] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [274] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [278] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [282] = 1,
    ACTIONS(98), 1,
      anon_sym_LF,
  [286] = 1,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 213,
  [SMALL_STATE(21)] = 219,
  [SMALL_STATE(22)] = 225,
  [SMALL_STATE(23)] = 230,
  [SMALL_STATE(24)] = 235,
  [SMALL_STATE(25)] = 240,
  [SMALL_STATE(26)] = 245,
  [SMALL_STATE(27)] = 250,
  [SMALL_STATE(28)] = 257,
  [SMALL_STATE(29)] = 262,
  [SMALL_STATE(30)] = 266,
  [SMALL_STATE(31)] = 270,
  [SMALL_STATE(32)] = 274,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 282,
  [SMALL_STATE(35)] = 286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_authorship_repeat1, 2), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_sep, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_sep, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship_orig, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sci_name, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2),
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
