#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_COLON_DASH = 2,
  anon_sym_DOT = 3,
  aux_sym_number_token1 = 4,
  aux_sym_number_token2 = 5,
  anon_sym_DASH = 6,
  aux_sym_atom_token1 = 7,
  sym_empty_list = 8,
  sym_empty_curly_brackets = 9,
  sym_variable_term = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  sym_operator_1200xfx = 14,
  sym_operator_1200fx = 15,
  sym_operator_1100xfy = 16,
  sym_operator_1050xfy = 17,
  anon_sym_BQUOTE_COMMA_BQUOTE = 18,
  sym_operator_900fy = 19,
  sym_operator_700xfx = 20,
  sym_operator_500yfx = 21,
  sym_operator_400yfx = 22,
  sym_operator_200xfx = 23,
  sym_operator_200xfy = 24,
  sym_operator_200fy = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_PIPE = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  sym_double_quoted_list_notation = 31,
  sym_source_file = 32,
  sym_directive_term = 33,
  sym_clause_term = 34,
  sym__term = 35,
  sym__compound_term = 36,
  sym__atomic_term = 37,
  sym_number = 38,
  sym_negative_number = 39,
  sym_atom = 40,
  sym_functional_notation = 41,
  sym_arg_list = 42,
  sym__arg = 43,
  sym__operator_notation = 44,
  sym_operation_1200xfx = 45,
  sym_operation_1200fx = 46,
  sym_operation_1100xfy = 47,
  sym_operation_1050xfy = 48,
  sym_operator_1000xfy = 49,
  sym_operation_1000xfy = 50,
  sym_operation_900fy = 51,
  sym_operation_700xfx = 52,
  sym_operation_500yfx = 53,
  sym_operation_400yfx = 54,
  sym_operation_200xfx = 55,
  sym_operation_200xfy = 56,
  sym_operation_200fy = 57,
  sym_list_notation = 58,
  sym__list_notation_items = 59,
  sym_curly_bracketed_notation = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_arg_list_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DASH] = "-",
  [aux_sym_atom_token1] = "atom_token1",
  [sym_empty_list] = "empty_list",
  [sym_empty_curly_brackets] = "empty_curly_brackets",
  [sym_variable_term] = "variable_term",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_operator_1200xfx] = "operator_1200xfx",
  [sym_operator_1200fx] = "operator_1200fx",
  [sym_operator_1100xfy] = "operator_1100xfy",
  [sym_operator_1050xfy] = "operator_1050xfy",
  [anon_sym_BQUOTE_COMMA_BQUOTE] = "`,`",
  [sym_operator_900fy] = "operator_900fy",
  [sym_operator_700xfx] = "operator_700xfx",
  [sym_operator_500yfx] = "operator_500yfx",
  [sym_operator_400yfx] = "operator_400yfx",
  [sym_operator_200xfx] = "operator_200xfx",
  [sym_operator_200xfy] = "operator_200xfy",
  [sym_operator_200fy] = "operator_200fy",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_double_quoted_list_notation] = "double_quoted_list_notation",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__compound_term] = "_compound_term",
  [sym__atomic_term] = "_atomic_term",
  [sym_number] = "number",
  [sym_negative_number] = "negative_number",
  [sym_atom] = "atom",
  [sym_functional_notation] = "functional_notation",
  [sym_arg_list] = "arg_list",
  [sym__arg] = "_arg",
  [sym__operator_notation] = "_operator_notation",
  [sym_operation_1200xfx] = "operation_1200xfx",
  [sym_operation_1200fx] = "operation_1200fx",
  [sym_operation_1100xfy] = "operation_1100xfy",
  [sym_operation_1050xfy] = "operation_1050xfy",
  [sym_operator_1000xfy] = "operator_1000xfy",
  [sym_operation_1000xfy] = "operation_1000xfy",
  [sym_operation_900fy] = "operation_900fy",
  [sym_operation_700xfx] = "operation_700xfx",
  [sym_operation_500yfx] = "operation_500yfx",
  [sym_operation_400yfx] = "operation_400yfx",
  [sym_operation_200xfx] = "operation_200xfx",
  [sym_operation_200xfy] = "operation_200xfy",
  [sym_operation_200fy] = "operation_200fy",
  [sym_list_notation] = "list_notation",
  [sym__list_notation_items] = "_list_notation_items",
  [sym_curly_bracketed_notation] = "curly_bracketed_notation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [sym_empty_list] = sym_empty_list,
  [sym_empty_curly_brackets] = sym_empty_curly_brackets,
  [sym_variable_term] = sym_variable_term,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_operator_1200xfx] = sym_operator_1200xfx,
  [sym_operator_1200fx] = sym_operator_1200fx,
  [sym_operator_1100xfy] = sym_operator_1100xfy,
  [sym_operator_1050xfy] = sym_operator_1050xfy,
  [anon_sym_BQUOTE_COMMA_BQUOTE] = anon_sym_BQUOTE_COMMA_BQUOTE,
  [sym_operator_900fy] = sym_operator_900fy,
  [sym_operator_700xfx] = sym_operator_700xfx,
  [sym_operator_500yfx] = sym_operator_500yfx,
  [sym_operator_400yfx] = sym_operator_400yfx,
  [sym_operator_200xfx] = sym_operator_200xfx,
  [sym_operator_200xfy] = sym_operator_200xfy,
  [sym_operator_200fy] = sym_operator_200fy,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_double_quoted_list_notation] = sym_double_quoted_list_notation,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__compound_term] = sym__compound_term,
  [sym__atomic_term] = sym__atomic_term,
  [sym_number] = sym_number,
  [sym_negative_number] = sym_negative_number,
  [sym_atom] = sym_atom,
  [sym_functional_notation] = sym_functional_notation,
  [sym_arg_list] = sym_arg_list,
  [sym__arg] = sym__arg,
  [sym__operator_notation] = sym__operator_notation,
  [sym_operation_1200xfx] = sym_operation_1200xfx,
  [sym_operation_1200fx] = sym_operation_1200fx,
  [sym_operation_1100xfy] = sym_operation_1100xfy,
  [sym_operation_1050xfy] = sym_operation_1050xfy,
  [sym_operator_1000xfy] = sym_operator_1000xfy,
  [sym_operation_1000xfy] = sym_operation_1000xfy,
  [sym_operation_900fy] = sym_operation_900fy,
  [sym_operation_700xfx] = sym_operation_700xfx,
  [sym_operation_500yfx] = sym_operation_500yfx,
  [sym_operation_400yfx] = sym_operation_400yfx,
  [sym_operation_200xfx] = sym_operation_200xfx,
  [sym_operation_200xfy] = sym_operation_200xfy,
  [sym_operation_200fy] = sym_operation_200fy,
  [sym_list_notation] = sym_list_notation,
  [sym__list_notation_items] = sym__list_notation_items,
  [sym_curly_bracketed_notation] = sym_curly_bracketed_notation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_empty_list] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_curly_brackets] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_term] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_1200xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_1200fx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_1100xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_1050xfy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE_COMMA_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_900fy] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_700xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_500yfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_400yfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_200xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_200xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_200fy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_list_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_term] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_term] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_term] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_term] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym__operator_notation] = {
    .visible = false,
    .named = true,
  },
  [sym_operation_1200xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_1200fx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_1100xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_1050xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_1000xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_1000xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_900fy] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_700xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_500yfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_400yfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_200xfx] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_200xfy] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_200fy] = {
    .visible = true,
    .named = true,
  },
  [sym_list_notation] = {
    .visible = true,
    .named = true,
  },
  [sym__list_notation_items] = {
    .visible = false,
    .named = true,
  },
  [sym_curly_bracketed_notation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 46,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static TSCharacterRange sym_comment_character_set_1[] = {
  {0, 0}, {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static TSCharacterRange sym_comment_character_set_2[] = {
  {0, 0}, {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', '*'}, {',', ','}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static TSCharacterRange aux_sym_atom_token1_character_set_1[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      ADVANCE_MAP(
        '!', 133,
        '"', 2,
        '#', 6,
        '%', 3,
        '\'', 4,
        '(', 145,
        ')', 146,
        '*', 162,
        ',', 147,
        '-', 131,
        '.', 122,
        '/', 163,
        '0', 124,
        ':', 30,
        ';', 150,
        '<', 56,
        '>', 70,
        '?', 31,
        '[', 168,
        '\\', 134,
        ']', 169,
        '^', 166,
        '_', 144,
        '`', 29,
        'm', 140,
        'r', 138,
        '{', 171,
        '|', 170,
        '}', 172,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 6,
        '%', 3,
        '\'', 4,
        '(', 145,
        '-', 132,
        '/', 18,
        '0', 124,
        ':', 31,
        '?', 31,
        '[', 168,
        '\\', 134,
        '_', 144,
        '{', 171,
        '!', 133,
        ';', 133,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(102);
      if (((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) &&
          lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(8);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(120);
      if ((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(103);
      if (((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) &&
          lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(44);
      if ((!eof && set_contains(sym_comment_character_set_2, 10, lookahead))) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(16);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '%', 3,
        '(', 145,
        ')', 146,
        '*', 162,
        '+', 159,
        ',', 147,
        '-', 160,
        '.', 122,
        '/', 164,
        ':', 32,
        ';', 150,
        '<', 156,
        '=', 155,
        '>', 158,
        '@', 59,
        '\\', 46,
        ']', 169,
        '^', 166,
        '`', 29,
        'i', 101,
        'm', 100,
        'r', 98,
        '|', 170,
        '}', 172,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '+') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == '+') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '+') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == '+') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == '<') ADVANCE(161);
      END_STATE();
    case 57:
      if (lookahead == '<') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == '<') ADVANCE(154);
      END_STATE();
    case 59:
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 60:
      if (lookahead == '<') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == '<') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == '<') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == '<') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 65:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == '?') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == '?') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == '?') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == '?') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == '@') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == '@') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == '@') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == '@') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == '@') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == '\\') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '\\') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '^') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == '^') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == '^') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == '^') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == '^') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == '`') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(2);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(4);
      END_STATE();
    case 104:
      if (lookahead == '~') ADVANCE(2);
      END_STATE();
    case 105:
      if (lookahead == '~') ADVANCE(3);
      END_STATE();
    case 106:
      if (lookahead == '~') ADVANCE(4);
      END_STATE();
    case 107:
      if (lookahead == '~') ADVANCE(5);
      END_STATE();
    case 108:
      if (lookahead == '~') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      ADVANCE_MAP(
        '"', 2,
        '#', 6,
        '%', 3,
        '\'', 4,
        '(', 145,
        '-', 132,
        '/', 18,
        '0', 124,
        ':', 30,
        '?', 31,
        '[', 168,
        '\\', 134,
        '_', 144,
        '{', 171,
        '!', 133,
        ';', 133,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(8);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(120);
      if ((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) ADVANCE(3);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_empty_list);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(159);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 117},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [sym_empty_list] = ACTIONS(1),
    [sym_empty_curly_brackets] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_operator_1200xfx] = ACTIONS(1),
    [sym_operator_1200fx] = ACTIONS(1),
    [sym_operator_1100xfy] = ACTIONS(1),
    [sym_operator_1050xfy] = ACTIONS(1),
    [anon_sym_BQUOTE_COMMA_BQUOTE] = ACTIONS(1),
    [sym_operator_900fy] = ACTIONS(1),
    [sym_operator_400yfx] = ACTIONS(1),
    [sym_operator_200xfx] = ACTIONS(1),
    [sym_operator_200xfy] = ACTIONS(1),
    [sym_operator_200fy] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_double_quoted_list_notation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(50),
    [sym__operator_notation] = STATE(50),
    [sym_operation_1200xfx] = STATE(50),
    [sym_operation_1200fx] = STATE(50),
    [sym_operation_1100xfy] = STATE(50),
    [sym_operation_1050xfy] = STATE(50),
    [sym_operation_1000xfy] = STATE(50),
    [sym_operation_900fy] = STATE(50),
    [sym_operation_700xfx] = STATE(50),
    [sym_operation_500yfx] = STATE(50),
    [sym_operation_400yfx] = STATE(50),
    [sym_operation_200xfx] = STATE(50),
    [sym_operation_200xfy] = STATE(50),
    [sym_operation_200fy] = STATE(50),
    [sym_list_notation] = STATE(50),
    [sym_curly_bracketed_notation] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(23),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(19),
  },
  [2] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(50),
    [sym__operator_notation] = STATE(50),
    [sym_operation_1200xfx] = STATE(50),
    [sym_operation_1200fx] = STATE(50),
    [sym_operation_1100xfy] = STATE(50),
    [sym_operation_1050xfy] = STATE(50),
    [sym_operation_1000xfy] = STATE(50),
    [sym_operation_900fy] = STATE(50),
    [sym_operation_700xfx] = STATE(50),
    [sym_operation_500yfx] = STATE(50),
    [sym_operation_400yfx] = STATE(50),
    [sym_operation_200xfx] = STATE(50),
    [sym_operation_200xfy] = STATE(50),
    [sym_operation_200fy] = STATE(50),
    [sym_list_notation] = STATE(50),
    [sym_curly_bracketed_notation] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(38),
    [aux_sym_number_token2] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(44),
    [aux_sym_atom_token1] = ACTIONS(47),
    [sym_empty_list] = ACTIONS(50),
    [sym_empty_curly_brackets] = ACTIONS(50),
    [sym_variable_term] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_operator_1200fx] = ACTIONS(59),
    [sym_operator_900fy] = ACTIONS(62),
    [sym_operator_200fy] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_double_quoted_list_notation] = ACTIONS(53),
  },
  [3] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(50),
    [sym__operator_notation] = STATE(50),
    [sym_operation_1200xfx] = STATE(50),
    [sym_operation_1200fx] = STATE(50),
    [sym_operation_1100xfy] = STATE(50),
    [sym_operation_1050xfy] = STATE(50),
    [sym_operation_1000xfy] = STATE(50),
    [sym_operation_900fy] = STATE(50),
    [sym_operation_700xfx] = STATE(50),
    [sym_operation_500yfx] = STATE(50),
    [sym_operation_400yfx] = STATE(50),
    [sym_operation_200xfx] = STATE(50),
    [sym_operation_200xfy] = STATE(50),
    [sym_operation_200fy] = STATE(50),
    [sym_list_notation] = STATE(50),
    [sym_curly_bracketed_notation] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(23),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(19),
  },
  [4] = {
    [sym__term] = STATE(45),
    [sym__compound_term] = STATE(45),
    [sym__atomic_term] = STATE(45),
    [sym_number] = STATE(45),
    [sym_negative_number] = STATE(45),
    [sym_atom] = STATE(46),
    [sym_functional_notation] = STATE(45),
    [sym__arg] = STATE(54),
    [sym__operator_notation] = STATE(45),
    [sym_operation_1200xfx] = STATE(45),
    [sym_operation_1200fx] = STATE(45),
    [sym_operation_1100xfy] = STATE(45),
    [sym_operation_1050xfy] = STATE(45),
    [sym_operation_1000xfy] = STATE(45),
    [sym_operation_900fy] = STATE(45),
    [sym_operation_700xfx] = STATE(45),
    [sym_operation_500yfx] = STATE(45),
    [sym_operation_400yfx] = STATE(45),
    [sym_operation_200xfx] = STATE(45),
    [sym_operation_200xfy] = STATE(45),
    [sym_operation_200fy] = STATE(45),
    [sym_list_notation] = STATE(45),
    [sym__list_notation_items] = STATE(62),
    [sym_curly_bracketed_notation] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(76),
  },
  [5] = {
    [sym__term] = STATE(45),
    [sym__compound_term] = STATE(45),
    [sym__atomic_term] = STATE(45),
    [sym_number] = STATE(45),
    [sym_negative_number] = STATE(45),
    [sym_atom] = STATE(46),
    [sym_functional_notation] = STATE(45),
    [sym_arg_list] = STATE(63),
    [sym__arg] = STATE(57),
    [sym__operator_notation] = STATE(45),
    [sym_operation_1200xfx] = STATE(45),
    [sym_operation_1200fx] = STATE(45),
    [sym_operation_1100xfy] = STATE(45),
    [sym_operation_1050xfy] = STATE(45),
    [sym_operation_1000xfy] = STATE(45),
    [sym_operation_900fy] = STATE(45),
    [sym_operation_700xfx] = STATE(45),
    [sym_operation_500yfx] = STATE(45),
    [sym_operation_400yfx] = STATE(45),
    [sym_operation_200xfx] = STATE(45),
    [sym_operation_200xfy] = STATE(45),
    [sym_operation_200fy] = STATE(45),
    [sym_list_notation] = STATE(45),
    [sym_curly_bracketed_notation] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(76),
  },
  [6] = {
    [sym__term] = STATE(45),
    [sym__compound_term] = STATE(45),
    [sym__atomic_term] = STATE(45),
    [sym_number] = STATE(45),
    [sym_negative_number] = STATE(45),
    [sym_atom] = STATE(46),
    [sym_functional_notation] = STATE(45),
    [sym__arg] = STATE(58),
    [sym__operator_notation] = STATE(45),
    [sym_operation_1200xfx] = STATE(45),
    [sym_operation_1200fx] = STATE(45),
    [sym_operation_1100xfy] = STATE(45),
    [sym_operation_1050xfy] = STATE(45),
    [sym_operation_1000xfy] = STATE(45),
    [sym_operation_900fy] = STATE(45),
    [sym_operation_700xfx] = STATE(45),
    [sym_operation_500yfx] = STATE(45),
    [sym_operation_400yfx] = STATE(45),
    [sym_operation_200xfx] = STATE(45),
    [sym_operation_200xfy] = STATE(45),
    [sym_operation_200fy] = STATE(45),
    [sym_list_notation] = STATE(45),
    [sym_curly_bracketed_notation] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(76),
  },
  [7] = {
    [sym__term] = STATE(52),
    [sym__compound_term] = STATE(52),
    [sym__atomic_term] = STATE(52),
    [sym_number] = STATE(52),
    [sym_negative_number] = STATE(52),
    [sym_atom] = STATE(53),
    [sym_functional_notation] = STATE(52),
    [sym__arg] = STATE(64),
    [sym__operator_notation] = STATE(52),
    [sym_operation_1200xfx] = STATE(52),
    [sym_operation_1200fx] = STATE(52),
    [sym_operation_1100xfy] = STATE(52),
    [sym_operation_1050xfy] = STATE(52),
    [sym_operation_1000xfy] = STATE(52),
    [sym_operation_900fy] = STATE(52),
    [sym_operation_700xfx] = STATE(52),
    [sym_operation_500yfx] = STATE(52),
    [sym_operation_400yfx] = STATE(52),
    [sym_operation_200xfx] = STATE(52),
    [sym_operation_200xfy] = STATE(52),
    [sym_operation_200fy] = STATE(52),
    [sym_list_notation] = STATE(52),
    [sym_curly_bracketed_notation] = STATE(52),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(80),
  },
  [8] = {
    [sym__term] = STATE(48),
    [sym__compound_term] = STATE(48),
    [sym__atomic_term] = STATE(48),
    [sym_number] = STATE(48),
    [sym_negative_number] = STATE(48),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(48),
    [sym__operator_notation] = STATE(48),
    [sym_operation_1200xfx] = STATE(48),
    [sym_operation_1200fx] = STATE(48),
    [sym_operation_1100xfy] = STATE(48),
    [sym_operation_1050xfy] = STATE(48),
    [sym_operation_1000xfy] = STATE(48),
    [sym_operation_900fy] = STATE(48),
    [sym_operation_700xfx] = STATE(48),
    [sym_operation_500yfx] = STATE(48),
    [sym_operation_400yfx] = STATE(48),
    [sym_operation_200xfx] = STATE(48),
    [sym_operation_200xfy] = STATE(48),
    [sym_operation_200fy] = STATE(48),
    [sym_list_notation] = STATE(48),
    [sym_curly_bracketed_notation] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(82),
  },
  [9] = {
    [sym__term] = STATE(34),
    [sym__compound_term] = STATE(34),
    [sym__atomic_term] = STATE(34),
    [sym_number] = STATE(34),
    [sym_negative_number] = STATE(34),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(34),
    [sym__operator_notation] = STATE(34),
    [sym_operation_1200xfx] = STATE(34),
    [sym_operation_1200fx] = STATE(34),
    [sym_operation_1100xfy] = STATE(34),
    [sym_operation_1050xfy] = STATE(34),
    [sym_operation_1000xfy] = STATE(34),
    [sym_operation_900fy] = STATE(34),
    [sym_operation_700xfx] = STATE(34),
    [sym_operation_500yfx] = STATE(34),
    [sym_operation_400yfx] = STATE(34),
    [sym_operation_200xfx] = STATE(34),
    [sym_operation_200xfy] = STATE(34),
    [sym_operation_200fy] = STATE(34),
    [sym_list_notation] = STATE(34),
    [sym_curly_bracketed_notation] = STATE(34),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(84),
  },
  [10] = {
    [sym__term] = STATE(33),
    [sym__compound_term] = STATE(33),
    [sym__atomic_term] = STATE(33),
    [sym_number] = STATE(33),
    [sym_negative_number] = STATE(33),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(33),
    [sym__operator_notation] = STATE(33),
    [sym_operation_1200xfx] = STATE(33),
    [sym_operation_1200fx] = STATE(33),
    [sym_operation_1100xfy] = STATE(33),
    [sym_operation_1050xfy] = STATE(33),
    [sym_operation_1000xfy] = STATE(33),
    [sym_operation_900fy] = STATE(33),
    [sym_operation_700xfx] = STATE(33),
    [sym_operation_500yfx] = STATE(33),
    [sym_operation_400yfx] = STATE(33),
    [sym_operation_200xfx] = STATE(33),
    [sym_operation_200xfy] = STATE(33),
    [sym_operation_200fy] = STATE(33),
    [sym_list_notation] = STATE(33),
    [sym_curly_bracketed_notation] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(86),
  },
  [11] = {
    [sym__term] = STATE(32),
    [sym__compound_term] = STATE(32),
    [sym__atomic_term] = STATE(32),
    [sym_number] = STATE(32),
    [sym_negative_number] = STATE(32),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(32),
    [sym__operator_notation] = STATE(32),
    [sym_operation_1200xfx] = STATE(32),
    [sym_operation_1200fx] = STATE(32),
    [sym_operation_1100xfy] = STATE(32),
    [sym_operation_1050xfy] = STATE(32),
    [sym_operation_1000xfy] = STATE(32),
    [sym_operation_900fy] = STATE(32),
    [sym_operation_700xfx] = STATE(32),
    [sym_operation_500yfx] = STATE(32),
    [sym_operation_400yfx] = STATE(32),
    [sym_operation_200xfx] = STATE(32),
    [sym_operation_200xfy] = STATE(32),
    [sym_operation_200fy] = STATE(32),
    [sym_list_notation] = STATE(32),
    [sym_curly_bracketed_notation] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(88),
  },
  [12] = {
    [sym__term] = STATE(35),
    [sym__compound_term] = STATE(35),
    [sym__atomic_term] = STATE(35),
    [sym_number] = STATE(35),
    [sym_negative_number] = STATE(35),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(35),
    [sym__operator_notation] = STATE(35),
    [sym_operation_1200xfx] = STATE(35),
    [sym_operation_1200fx] = STATE(35),
    [sym_operation_1100xfy] = STATE(35),
    [sym_operation_1050xfy] = STATE(35),
    [sym_operation_1000xfy] = STATE(35),
    [sym_operation_900fy] = STATE(35),
    [sym_operation_700xfx] = STATE(35),
    [sym_operation_500yfx] = STATE(35),
    [sym_operation_400yfx] = STATE(35),
    [sym_operation_200xfx] = STATE(35),
    [sym_operation_200xfy] = STATE(35),
    [sym_operation_200fy] = STATE(35),
    [sym_list_notation] = STATE(35),
    [sym_curly_bracketed_notation] = STATE(35),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [13] = {
    [sym__term] = STATE(51),
    [sym__compound_term] = STATE(51),
    [sym__atomic_term] = STATE(51),
    [sym_number] = STATE(51),
    [sym_negative_number] = STATE(51),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(51),
    [sym__operator_notation] = STATE(51),
    [sym_operation_1200xfx] = STATE(51),
    [sym_operation_1200fx] = STATE(51),
    [sym_operation_1100xfy] = STATE(51),
    [sym_operation_1050xfy] = STATE(51),
    [sym_operation_1000xfy] = STATE(51),
    [sym_operation_900fy] = STATE(51),
    [sym_operation_700xfx] = STATE(51),
    [sym_operation_500yfx] = STATE(51),
    [sym_operation_400yfx] = STATE(51),
    [sym_operation_200xfx] = STATE(51),
    [sym_operation_200xfy] = STATE(51),
    [sym_operation_200fy] = STATE(51),
    [sym_list_notation] = STATE(51),
    [sym_curly_bracketed_notation] = STATE(51),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(92),
  },
  [14] = {
    [sym__term] = STATE(49),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(49),
    [sym_negative_number] = STATE(49),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(49),
    [sym__operator_notation] = STATE(49),
    [sym_operation_1200xfx] = STATE(49),
    [sym_operation_1200fx] = STATE(49),
    [sym_operation_1100xfy] = STATE(49),
    [sym_operation_1050xfy] = STATE(49),
    [sym_operation_1000xfy] = STATE(49),
    [sym_operation_900fy] = STATE(49),
    [sym_operation_700xfx] = STATE(49),
    [sym_operation_500yfx] = STATE(49),
    [sym_operation_400yfx] = STATE(49),
    [sym_operation_200xfx] = STATE(49),
    [sym_operation_200xfy] = STATE(49),
    [sym_operation_200fy] = STATE(49),
    [sym_list_notation] = STATE(49),
    [sym_curly_bracketed_notation] = STATE(49),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(94),
  },
  [15] = {
    [sym__term] = STATE(25),
    [sym__compound_term] = STATE(25),
    [sym__atomic_term] = STATE(25),
    [sym_number] = STATE(25),
    [sym_negative_number] = STATE(25),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(25),
    [sym__operator_notation] = STATE(25),
    [sym_operation_1200xfx] = STATE(25),
    [sym_operation_1200fx] = STATE(25),
    [sym_operation_1100xfy] = STATE(25),
    [sym_operation_1050xfy] = STATE(25),
    [sym_operation_1000xfy] = STATE(25),
    [sym_operation_900fy] = STATE(25),
    [sym_operation_700xfx] = STATE(25),
    [sym_operation_500yfx] = STATE(25),
    [sym_operation_400yfx] = STATE(25),
    [sym_operation_200xfx] = STATE(25),
    [sym_operation_200xfy] = STATE(25),
    [sym_operation_200fy] = STATE(25),
    [sym_list_notation] = STATE(25),
    [sym_curly_bracketed_notation] = STATE(25),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(96),
  },
  [16] = {
    [sym__term] = STATE(24),
    [sym__compound_term] = STATE(24),
    [sym__atomic_term] = STATE(24),
    [sym_number] = STATE(24),
    [sym_negative_number] = STATE(24),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(24),
    [sym__operator_notation] = STATE(24),
    [sym_operation_1200xfx] = STATE(24),
    [sym_operation_1200fx] = STATE(24),
    [sym_operation_1100xfy] = STATE(24),
    [sym_operation_1050xfy] = STATE(24),
    [sym_operation_1000xfy] = STATE(24),
    [sym_operation_900fy] = STATE(24),
    [sym_operation_700xfx] = STATE(24),
    [sym_operation_500yfx] = STATE(24),
    [sym_operation_400yfx] = STATE(24),
    [sym_operation_200xfx] = STATE(24),
    [sym_operation_200xfy] = STATE(24),
    [sym_operation_200fy] = STATE(24),
    [sym_list_notation] = STATE(24),
    [sym_curly_bracketed_notation] = STATE(24),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(98),
  },
  [17] = {
    [sym__term] = STATE(26),
    [sym__compound_term] = STATE(26),
    [sym__atomic_term] = STATE(26),
    [sym_number] = STATE(26),
    [sym_negative_number] = STATE(26),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(26),
    [sym__operator_notation] = STATE(26),
    [sym_operation_1200xfx] = STATE(26),
    [sym_operation_1200fx] = STATE(26),
    [sym_operation_1100xfy] = STATE(26),
    [sym_operation_1050xfy] = STATE(26),
    [sym_operation_1000xfy] = STATE(26),
    [sym_operation_900fy] = STATE(26),
    [sym_operation_700xfx] = STATE(26),
    [sym_operation_500yfx] = STATE(26),
    [sym_operation_400yfx] = STATE(26),
    [sym_operation_200xfx] = STATE(26),
    [sym_operation_200xfy] = STATE(26),
    [sym_operation_200fy] = STATE(26),
    [sym_list_notation] = STATE(26),
    [sym_curly_bracketed_notation] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(100),
  },
  [18] = {
    [sym__term] = STATE(28),
    [sym__compound_term] = STATE(28),
    [sym__atomic_term] = STATE(28),
    [sym_number] = STATE(28),
    [sym_negative_number] = STATE(28),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(28),
    [sym__operator_notation] = STATE(28),
    [sym_operation_1200xfx] = STATE(28),
    [sym_operation_1200fx] = STATE(28),
    [sym_operation_1100xfy] = STATE(28),
    [sym_operation_1050xfy] = STATE(28),
    [sym_operation_1000xfy] = STATE(28),
    [sym_operation_900fy] = STATE(28),
    [sym_operation_700xfx] = STATE(28),
    [sym_operation_500yfx] = STATE(28),
    [sym_operation_400yfx] = STATE(28),
    [sym_operation_200xfx] = STATE(28),
    [sym_operation_200xfy] = STATE(28),
    [sym_operation_200fy] = STATE(28),
    [sym_list_notation] = STATE(28),
    [sym_curly_bracketed_notation] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(102),
  },
  [19] = {
    [sym__term] = STATE(29),
    [sym__compound_term] = STATE(29),
    [sym__atomic_term] = STATE(29),
    [sym_number] = STATE(29),
    [sym_negative_number] = STATE(29),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(29),
    [sym__operator_notation] = STATE(29),
    [sym_operation_1200xfx] = STATE(29),
    [sym_operation_1200fx] = STATE(29),
    [sym_operation_1100xfy] = STATE(29),
    [sym_operation_1050xfy] = STATE(29),
    [sym_operation_1000xfy] = STATE(29),
    [sym_operation_900fy] = STATE(29),
    [sym_operation_700xfx] = STATE(29),
    [sym_operation_500yfx] = STATE(29),
    [sym_operation_400yfx] = STATE(29),
    [sym_operation_200xfx] = STATE(29),
    [sym_operation_200xfy] = STATE(29),
    [sym_operation_200fy] = STATE(29),
    [sym_list_notation] = STATE(29),
    [sym_curly_bracketed_notation] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(104),
  },
  [20] = {
    [sym__term] = STATE(30),
    [sym__compound_term] = STATE(30),
    [sym__atomic_term] = STATE(30),
    [sym_number] = STATE(30),
    [sym_negative_number] = STATE(30),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(30),
    [sym__operator_notation] = STATE(30),
    [sym_operation_1200xfx] = STATE(30),
    [sym_operation_1200fx] = STATE(30),
    [sym_operation_1100xfy] = STATE(30),
    [sym_operation_1050xfy] = STATE(30),
    [sym_operation_1000xfy] = STATE(30),
    [sym_operation_900fy] = STATE(30),
    [sym_operation_700xfx] = STATE(30),
    [sym_operation_500yfx] = STATE(30),
    [sym_operation_400yfx] = STATE(30),
    [sym_operation_200xfx] = STATE(30),
    [sym_operation_200xfy] = STATE(30),
    [sym_operation_200fy] = STATE(30),
    [sym_list_notation] = STATE(30),
    [sym_curly_bracketed_notation] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(106),
  },
  [21] = {
    [sym__term] = STATE(31),
    [sym__compound_term] = STATE(31),
    [sym__atomic_term] = STATE(31),
    [sym_number] = STATE(31),
    [sym_negative_number] = STATE(31),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(31),
    [sym__operator_notation] = STATE(31),
    [sym_operation_1200xfx] = STATE(31),
    [sym_operation_1200fx] = STATE(31),
    [sym_operation_1100xfy] = STATE(31),
    [sym_operation_1050xfy] = STATE(31),
    [sym_operation_1000xfy] = STATE(31),
    [sym_operation_900fy] = STATE(31),
    [sym_operation_700xfx] = STATE(31),
    [sym_operation_500yfx] = STATE(31),
    [sym_operation_400yfx] = STATE(31),
    [sym_operation_200xfx] = STATE(31),
    [sym_operation_200xfy] = STATE(31),
    [sym_operation_200fy] = STATE(31),
    [sym_list_notation] = STATE(31),
    [sym_curly_bracketed_notation] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(108),
  },
  [22] = {
    [sym__term] = STATE(23),
    [sym__compound_term] = STATE(23),
    [sym__atomic_term] = STATE(23),
    [sym_number] = STATE(23),
    [sym_negative_number] = STATE(23),
    [sym_atom] = STATE(38),
    [sym_functional_notation] = STATE(23),
    [sym__operator_notation] = STATE(23),
    [sym_operation_1200xfx] = STATE(23),
    [sym_operation_1200fx] = STATE(23),
    [sym_operation_1100xfy] = STATE(23),
    [sym_operation_1050xfy] = STATE(23),
    [sym_operation_1000xfy] = STATE(23),
    [sym_operation_900fy] = STATE(23),
    [sym_operation_700xfx] = STATE(23),
    [sym_operation_500yfx] = STATE(23),
    [sym_operation_400yfx] = STATE(23),
    [sym_operation_200xfx] = STATE(23),
    [sym_operation_200xfy] = STATE(23),
    [sym_operation_200fy] = STATE(23),
    [sym_list_notation] = STATE(23),
    [sym_curly_bracketed_notation] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(17),
    [sym_empty_curly_brackets] = ACTIONS(17),
    [sym_variable_term] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_operator_1200fx] = ACTIONS(78),
    [sym_operator_900fy] = ACTIONS(25),
    [sym_operator_200fy] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_double_quoted_list_notation] = ACTIONS(110),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(112), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [40] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(132), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(130), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [70] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(134), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(138), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(136), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(140), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
  [156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(144), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(150), 2,
      sym_operator_700xfx,
      sym_operator_500yfx,
    ACTIONS(148), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [218] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(154), 1,
      sym_operator_700xfx,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(152), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(156), 7,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(160), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(158), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(162), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [354] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(164), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [394] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(166), 6,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(168), 13,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(172), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(176), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(182), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(186), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(190), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(194), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(198), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(202), 12,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [646] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(206), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(206), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    ACTIONS(176), 6,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(212), 9,
      aux_sym_number_token2,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
  [734] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [772] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [810] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    ACTIONS(218), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [848] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [886] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_operator_1100xfy,
    ACTIONS(118), 1,
      sym_operator_1050xfy,
    ACTIONS(120), 1,
      sym_operator_700xfx,
    ACTIONS(122), 1,
      sym_operator_500yfx,
    ACTIONS(124), 1,
      sym_operator_400yfx,
    ACTIONS(126), 1,
      sym_operator_200xfx,
    ACTIONS(128), 1,
      sym_operator_200xfy,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 1,
      sym_operator_1200xfx,
    STATE(15), 1,
      sym_operator_1000xfy,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(176), 7,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    ACTIONS(226), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_arg_list_repeat1,
  [964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(228), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_arg_list_repeat1,
  [991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_arg_list_repeat1,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_arg_list_repeat1,
  [1026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_number_token1,
    ACTIONS(241), 1,
      aux_sym_number_token2,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 40,
  [SMALL_STATE(25)] = 70,
  [SMALL_STATE(26)] = 106,
  [SMALL_STATE(27)] = 132,
  [SMALL_STATE(28)] = 156,
  [SMALL_STATE(29)] = 186,
  [SMALL_STATE(30)] = 218,
  [SMALL_STATE(31)] = 252,
  [SMALL_STATE(32)] = 290,
  [SMALL_STATE(33)] = 320,
  [SMALL_STATE(34)] = 354,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 482,
  [SMALL_STATE(39)] = 508,
  [SMALL_STATE(40)] = 531,
  [SMALL_STATE(41)] = 554,
  [SMALL_STATE(42)] = 577,
  [SMALL_STATE(43)] = 600,
  [SMALL_STATE(44)] = 623,
  [SMALL_STATE(45)] = 646,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 712,
  [SMALL_STATE(48)] = 734,
  [SMALL_STATE(49)] = 772,
  [SMALL_STATE(50)] = 810,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 886,
  [SMALL_STATE(53)] = 924,
  [SMALL_STATE(54)] = 948,
  [SMALL_STATE(55)] = 964,
  [SMALL_STATE(56)] = 978,
  [SMALL_STATE(57)] = 991,
  [SMALL_STATE(58)] = 1004,
  [SMALL_STATE(59)] = 1013,
  [SMALL_STATE(60)] = 1026,
  [SMALL_STATE(61)] = 1036,
  [SMALL_STATE(62)] = 1043,
  [SMALL_STATE(63)] = 1050,
  [SMALL_STATE(64)] = 1057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_number, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_prolog(void) {
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
