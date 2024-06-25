#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end = 1,
  anon_sym_COLON_DASH = 2,
  aux_sym_number_token1 = 3,
  aux_sym_number_token2 = 4,
  anon_sym_DASH = 5,
  aux_sym_atom_token1 = 6,
  sym_variable_term = 7,
  anon_sym_COMMA = 8,
  sym_operator_1200xfx = 9,
  sym_operator_1200fx = 10,
  sym_operator_1100xfy = 11,
  sym_operator_1050xfy = 12,
  anon_sym_BQUOTE_COMMA_BQUOTE = 13,
  sym_operator_900fy = 14,
  sym_operator_700xfx = 15,
  sym_operator_500yfx = 16,
  sym_operator_400yfx = 17,
  sym_operator_200xfx = 18,
  sym_operator_200xfy = 19,
  sym_operator_200fy = 20,
  anon_sym_PIPE = 21,
  sym_double_quoted_list_notation = 22,
  anon_sym_LPAREN = 23,
  sym_close = 24,
  sym_open_list = 25,
  sym_close_list = 26,
  sym_open_curly = 27,
  sym_close_curly = 28,
  sym_comment = 29,
  sym_source_file = 30,
  sym_directive_term = 31,
  sym_clause_term = 32,
  sym__term = 33,
  sym__compound_term = 34,
  sym__atomic_term = 35,
  sym_number = 36,
  sym_negative_number = 37,
  sym_atom = 38,
  sym_empty_list = 39,
  sym_empty_curly_brackets = 40,
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
  sym_open = 61,
  sym_open_ct = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_arg_list_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DASH] = "-",
  [aux_sym_atom_token1] = "atom_token1",
  [sym_variable_term] = "variable_term",
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
  [anon_sym_PIPE] = "|",
  [sym_double_quoted_list_notation] = "double_quoted_list_notation",
  [anon_sym_LPAREN] = "(",
  [sym_close] = "close",
  [sym_open_list] = "open_list",
  [sym_close_list] = "close_list",
  [sym_open_curly] = "open_curly",
  [sym_close_curly] = "close_curly",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__compound_term] = "_compound_term",
  [sym__atomic_term] = "_atomic_term",
  [sym_number] = "number",
  [sym_negative_number] = "negative_number",
  [sym_atom] = "atom",
  [sym_empty_list] = "empty_list",
  [sym_empty_curly_brackets] = "empty_curly_brackets",
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
  [sym_open] = "open",
  [sym_open_ct] = "open_ct",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end] = sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [sym_variable_term] = sym_variable_term,
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_double_quoted_list_notation] = sym_double_quoted_list_notation,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_close] = sym_close,
  [sym_open_list] = sym_open_list,
  [sym_close_list] = sym_close_list,
  [sym_open_curly] = sym_open_curly,
  [sym_close_curly] = sym_close_curly,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__compound_term] = sym__compound_term,
  [sym__atomic_term] = sym__atomic_term,
  [sym_number] = sym_number,
  [sym_negative_number] = sym_negative_number,
  [sym_atom] = sym_atom,
  [sym_empty_list] = sym_empty_list,
  [sym_empty_curly_brackets] = sym_empty_curly_brackets,
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
  [sym_open] = sym_open,
  [sym_open_ct] = sym_open_ct,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
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
  [sym_variable_term] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_list_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_open_list] = {
    .visible = true,
    .named = true,
  },
  [sym_close_list] = {
    .visible = true,
    .named = true,
  },
  [sym_open_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_close_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_empty_list] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_curly_brackets] = {
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
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_open_ct] = {
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
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 47,
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static TSCharacterRange aux_sym_atom_token1_character_set_1[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static TSCharacterRange sym_comment_character_set_1[] = {
  {0, 0}, {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static TSCharacterRange sym_comment_character_set_2[] = {
  {0, 0}, {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', '*'}, {',', ','}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      ADVANCE_MAP(
        '!', 131,
        '"', 2,
        '#', 6,
        '%', 3,
        '\'', 4,
        '(', 164,
        ')', 165,
        '*', 156,
        ',', 141,
        '-', 129,
        '.', 119,
        '/', 157,
        '0', 122,
        ':', 30,
        ';', 144,
        '<', 56,
        '>', 70,
        '?', 31,
        '[', 166,
        '\\', 132,
        ']', 167,
        '^', 160,
        '_', 140,
        '`', 29,
        'm', 138,
        'r', 136,
        '{', 168,
        '|', 162,
        '}', 169,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 6,
        '%', 3,
        '\'', 4,
        '(', 164,
        '-', 130,
        '/', 18,
        '0', 122,
        ':', 31,
        '?', 31,
        '[', 166,
        '\\', 132,
        ']', 167,
        '_', 140,
        '{', 168,
        '}', 169,
        '!', 131,
        ';', 131,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(163);
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
          lookahead == '\n') ADVANCE(171);
      if ((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(134);
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
        '(', 164,
        ')', 165,
        '*', 156,
        '+', 153,
        ',', 141,
        '-', 154,
        '.', 119,
        '/', 158,
        ':', 32,
        ';', 144,
        '<', 150,
        '=', 149,
        '>', 152,
        '@', 59,
        '\\', 46,
        ']', 167,
        '^', 160,
        '`', 29,
        'i', 101,
        'm', 100,
        'r', 98,
        '|', 162,
        '}', 169,
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
      if (lookahead == '\'') ADVANCE(121);
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
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(142);
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
      if (lookahead == '.') ADVANCE(148);
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
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '=') ADVANCE(151);
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
      if (lookahead == '<') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == '<') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == '<') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(151);
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
      if (lookahead == '=') ADVANCE(148);
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
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(142);
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
      if (lookahead == '`') ADVANCE(146);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(148);
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
      if (lookahead == '~') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
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
        '(', 164,
        '-', 130,
        '/', 18,
        '0', 122,
        ':', 30,
        '?', 31,
        '[', 166,
        '\\', 132,
        '_', 140,
        '{', 168,
        '!', 131,
        ';', 131,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '+') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(153);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(8);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(171);
      if ((!eof && set_contains(sym_comment_character_set_1, 10, lookahead))) ADVANCE(3);
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
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 117},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_double_quoted_list_notation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_close] = ACTIONS(1),
    [sym_open_list] = ACTIONS(1),
    [sym_close_list] = ACTIONS(1),
    [sym_open_curly] = ACTIONS(1),
    [sym_close_curly] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(19),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_COLON_DASH] = ACTIONS(33),
    [aux_sym_number_token1] = ACTIONS(36),
    [aux_sym_number_token2] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(42),
    [aux_sym_atom_token1] = ACTIONS(45),
    [sym_variable_term] = ACTIONS(48),
    [sym_operator_1200fx] = ACTIONS(51),
    [sym_operator_900fy] = ACTIONS(54),
    [sym_operator_200fy] = ACTIONS(57),
    [sym_double_quoted_list_notation] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_open_list] = ACTIONS(63),
    [sym_open_curly] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(50),
    [sym__compound_term] = STATE(50),
    [sym__atomic_term] = STATE(50),
    [sym_number] = STATE(50),
    [sym_negative_number] = STATE(50),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(19),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__term] = STATE(47),
    [sym__compound_term] = STATE(47),
    [sym__atomic_term] = STATE(47),
    [sym_number] = STATE(47),
    [sym_negative_number] = STATE(47),
    [sym_atom] = STATE(43),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(47),
    [sym__arg] = STATE(59),
    [sym__operator_notation] = STATE(47),
    [sym_operation_1200xfx] = STATE(47),
    [sym_operation_1200fx] = STATE(47),
    [sym_operation_1100xfy] = STATE(47),
    [sym_operation_1050xfy] = STATE(47),
    [sym_operation_1000xfy] = STATE(47),
    [sym_operation_900fy] = STATE(47),
    [sym_operation_700xfx] = STATE(47),
    [sym_operation_500yfx] = STATE(47),
    [sym_operation_400yfx] = STATE(47),
    [sym_operation_200xfx] = STATE(47),
    [sym_operation_200xfy] = STATE(47),
    [sym_operation_200fy] = STATE(47),
    [sym_list_notation] = STATE(47),
    [sym__list_notation_items] = STATE(65),
    [sym_curly_bracketed_notation] = STATE(47),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_close_list] = ACTIONS(75),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__term] = STATE(47),
    [sym__compound_term] = STATE(47),
    [sym__atomic_term] = STATE(47),
    [sym_number] = STATE(47),
    [sym_negative_number] = STATE(47),
    [sym_atom] = STATE(43),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(47),
    [sym_arg_list] = STATE(68),
    [sym__arg] = STATE(62),
    [sym__operator_notation] = STATE(47),
    [sym_operation_1200xfx] = STATE(47),
    [sym_operation_1200fx] = STATE(47),
    [sym_operation_1100xfy] = STATE(47),
    [sym_operation_1050xfy] = STATE(47),
    [sym_operation_1000xfy] = STATE(47),
    [sym_operation_900fy] = STATE(47),
    [sym_operation_700xfx] = STATE(47),
    [sym_operation_500yfx] = STATE(47),
    [sym_operation_400yfx] = STATE(47),
    [sym_operation_200xfx] = STATE(47),
    [sym_operation_200xfy] = STATE(47),
    [sym_operation_200fy] = STATE(47),
    [sym_list_notation] = STATE(47),
    [sym_curly_bracketed_notation] = STATE(47),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(54),
    [sym__atomic_term] = STATE(54),
    [sym_number] = STATE(54),
    [sym_negative_number] = STATE(54),
    [sym_atom] = STATE(49),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(54),
    [sym__arg] = STATE(66),
    [sym__operator_notation] = STATE(54),
    [sym_operation_1200xfx] = STATE(54),
    [sym_operation_1200fx] = STATE(54),
    [sym_operation_1100xfy] = STATE(54),
    [sym_operation_1050xfy] = STATE(54),
    [sym_operation_1000xfy] = STATE(54),
    [sym_operation_900fy] = STATE(54),
    [sym_operation_700xfx] = STATE(54),
    [sym_operation_500yfx] = STATE(54),
    [sym_operation_400yfx] = STATE(54),
    [sym_operation_200xfx] = STATE(54),
    [sym_operation_200xfy] = STATE(54),
    [sym_operation_200fy] = STATE(54),
    [sym_list_notation] = STATE(54),
    [sym_curly_bracketed_notation] = STATE(54),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(77),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__term] = STATE(47),
    [sym__compound_term] = STATE(47),
    [sym__atomic_term] = STATE(47),
    [sym_number] = STATE(47),
    [sym_negative_number] = STATE(47),
    [sym_atom] = STATE(43),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(47),
    [sym__arg] = STATE(61),
    [sym__operator_notation] = STATE(47),
    [sym_operation_1200xfx] = STATE(47),
    [sym_operation_1200fx] = STATE(47),
    [sym_operation_1100xfy] = STATE(47),
    [sym_operation_1050xfy] = STATE(47),
    [sym_operation_1000xfy] = STATE(47),
    [sym_operation_900fy] = STATE(47),
    [sym_operation_700xfx] = STATE(47),
    [sym_operation_500yfx] = STATE(47),
    [sym_operation_400yfx] = STATE(47),
    [sym_operation_200xfx] = STATE(47),
    [sym_operation_200xfy] = STATE(47),
    [sym_operation_200fy] = STATE(47),
    [sym_list_notation] = STATE(47),
    [sym_curly_bracketed_notation] = STATE(47),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__term] = STATE(56),
    [sym__compound_term] = STATE(56),
    [sym__atomic_term] = STATE(56),
    [sym_number] = STATE(56),
    [sym_negative_number] = STATE(56),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(56),
    [sym__operator_notation] = STATE(56),
    [sym_operation_1200xfx] = STATE(56),
    [sym_operation_1200fx] = STATE(56),
    [sym_operation_1100xfy] = STATE(56),
    [sym_operation_1050xfy] = STATE(56),
    [sym_operation_1000xfy] = STATE(56),
    [sym_operation_900fy] = STATE(56),
    [sym_operation_700xfx] = STATE(56),
    [sym_operation_500yfx] = STATE(56),
    [sym_operation_400yfx] = STATE(56),
    [sym_operation_200xfx] = STATE(56),
    [sym_operation_200xfy] = STATE(56),
    [sym_operation_200fy] = STATE(56),
    [sym_list_notation] = STATE(56),
    [sym_curly_bracketed_notation] = STATE(56),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(79),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_close_curly] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__term] = STATE(37),
    [sym__compound_term] = STATE(37),
    [sym__atomic_term] = STATE(37),
    [sym_number] = STATE(37),
    [sym_negative_number] = STATE(37),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(37),
    [sym__operator_notation] = STATE(37),
    [sym_operation_1200xfx] = STATE(37),
    [sym_operation_1200fx] = STATE(37),
    [sym_operation_1100xfy] = STATE(37),
    [sym_operation_1050xfy] = STATE(37),
    [sym_operation_1000xfy] = STATE(37),
    [sym_operation_900fy] = STATE(37),
    [sym_operation_700xfx] = STATE(37),
    [sym_operation_500yfx] = STATE(37),
    [sym_operation_400yfx] = STATE(37),
    [sym_operation_200xfx] = STATE(37),
    [sym_operation_200xfy] = STATE(37),
    [sym_operation_200fy] = STATE(37),
    [sym_list_notation] = STATE(37),
    [sym_curly_bracketed_notation] = STATE(37),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(83),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__term] = STATE(53),
    [sym__compound_term] = STATE(53),
    [sym__atomic_term] = STATE(53),
    [sym_number] = STATE(53),
    [sym_negative_number] = STATE(53),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(53),
    [sym__operator_notation] = STATE(53),
    [sym_operation_1200xfx] = STATE(53),
    [sym_operation_1200fx] = STATE(53),
    [sym_operation_1100xfy] = STATE(53),
    [sym_operation_1050xfy] = STATE(53),
    [sym_operation_1000xfy] = STATE(53),
    [sym_operation_900fy] = STATE(53),
    [sym_operation_700xfx] = STATE(53),
    [sym_operation_500yfx] = STATE(53),
    [sym_operation_400yfx] = STATE(53),
    [sym_operation_200xfx] = STATE(53),
    [sym_operation_200xfy] = STATE(53),
    [sym_operation_200fy] = STATE(53),
    [sym_list_notation] = STATE(53),
    [sym_curly_bracketed_notation] = STATE(53),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(85),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__term] = STATE(35),
    [sym__compound_term] = STATE(35),
    [sym__atomic_term] = STATE(35),
    [sym_number] = STATE(35),
    [sym_negative_number] = STATE(35),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(87),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__term] = STATE(36),
    [sym__compound_term] = STATE(36),
    [sym__atomic_term] = STATE(36),
    [sym_number] = STATE(36),
    [sym_negative_number] = STATE(36),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
    [sym_functional_notation] = STATE(36),
    [sym__operator_notation] = STATE(36),
    [sym_operation_1200xfx] = STATE(36),
    [sym_operation_1200fx] = STATE(36),
    [sym_operation_1100xfy] = STATE(36),
    [sym_operation_1050xfy] = STATE(36),
    [sym_operation_1000xfy] = STATE(36),
    [sym_operation_900fy] = STATE(36),
    [sym_operation_700xfx] = STATE(36),
    [sym_operation_500yfx] = STATE(36),
    [sym_operation_400yfx] = STATE(36),
    [sym_operation_200xfx] = STATE(36),
    [sym_operation_200xfy] = STATE(36),
    [sym_operation_200fy] = STATE(36),
    [sym_list_notation] = STATE(36),
    [sym_curly_bracketed_notation] = STATE(36),
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(89),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__term] = STATE(25),
    [sym__compound_term] = STATE(25),
    [sym__atomic_term] = STATE(25),
    [sym_number] = STATE(25),
    [sym_negative_number] = STATE(25),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(91),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__term] = STATE(51),
    [sym__compound_term] = STATE(51),
    [sym__atomic_term] = STATE(51),
    [sym_number] = STATE(51),
    [sym_negative_number] = STATE(51),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(93),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__term] = STATE(33),
    [sym__compound_term] = STATE(33),
    [sym__atomic_term] = STATE(33),
    [sym_number] = STATE(33),
    [sym_negative_number] = STATE(33),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(95),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__term] = STATE(26),
    [sym__compound_term] = STATE(26),
    [sym__atomic_term] = STATE(26),
    [sym_number] = STATE(26),
    [sym_negative_number] = STATE(26),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(97),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__term] = STATE(28),
    [sym__compound_term] = STATE(28),
    [sym__atomic_term] = STATE(28),
    [sym_number] = STATE(28),
    [sym_negative_number] = STATE(28),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(99),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__term] = STATE(29),
    [sym__compound_term] = STATE(29),
    [sym__atomic_term] = STATE(29),
    [sym_number] = STATE(29),
    [sym_negative_number] = STATE(29),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(101),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__term] = STATE(30),
    [sym__compound_term] = STATE(30),
    [sym__atomic_term] = STATE(30),
    [sym_number] = STATE(30),
    [sym_negative_number] = STATE(30),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(103),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__term] = STATE(31),
    [sym__compound_term] = STATE(31),
    [sym__atomic_term] = STATE(31),
    [sym_number] = STATE(31),
    [sym_negative_number] = STATE(31),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(105),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__term] = STATE(32),
    [sym__compound_term] = STATE(32),
    [sym__atomic_term] = STATE(32),
    [sym_number] = STATE(32),
    [sym_negative_number] = STATE(32),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(107),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__term] = STATE(24),
    [sym__compound_term] = STATE(24),
    [sym__atomic_term] = STATE(24),
    [sym_number] = STATE(24),
    [sym_negative_number] = STATE(24),
    [sym_atom] = STATE(23),
    [sym_empty_list] = STATE(38),
    [sym_empty_curly_brackets] = STATE(38),
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
    [sym_open] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(109),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_open_list] = ACTIONS(27),
    [sym_open_curly] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(113), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(111), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [29] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(117), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [69] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(135), 8,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(139), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(137), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(141), 13,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(147), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(145), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(151), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(149), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(155), 2,
      sym_operator_700xfx,
      sym_operator_500yfx,
    ACTIONS(153), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [247] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(159), 1,
      sym_operator_700xfx,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(157), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [281] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(161), 7,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [319] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(163), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(165), 13,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(171), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(169), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [413] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(173), 10,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [447] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(175), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(177), 13,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(181), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(185), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(189), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(193), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(113), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
    ACTIONS(111), 6,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(199), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(203), 12,
      sym_end,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [700] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
  [740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(113), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(111), 7,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [789] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    ACTIONS(217), 1,
      sym_end,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [827] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    ACTIONS(219), 1,
      sym_close,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
    ACTIONS(223), 9,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [885] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    ACTIONS(225), 1,
      sym_end,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [923] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(197), 1,
      sym_close_list,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
    ACTIONS(229), 9,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [981] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_1100xfy,
    ACTIONS(123), 1,
      sym_operator_1050xfy,
    ACTIONS(125), 1,
      sym_operator_700xfx,
    ACTIONS(127), 1,
      sym_operator_500yfx,
    ACTIONS(129), 1,
      sym_operator_400yfx,
    ACTIONS(131), 1,
      sym_operator_200xfx,
    ACTIONS(133), 1,
      sym_operator_200xfy,
    ACTIONS(211), 1,
      sym_operator_1200xfx,
    ACTIONS(231), 1,
      sym_close_curly,
    STATE(13), 1,
      sym_operator_1000xfy,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
    ACTIONS(235), 9,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(240), 2,
      sym_close,
      sym_close_list,
  [1053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    ACTIONS(246), 1,
      sym_close_list,
    STATE(60), 1,
      aux_sym_arg_list_repeat1,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym_close_list,
    STATE(58), 1,
      aux_sym_arg_list_repeat1,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      sym_close,
      sym_close_list,
  [1091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      sym_close,
    STATE(63), 1,
      aux_sym_arg_list_repeat1,
  [1104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      sym_close,
    STATE(58), 1,
      aux_sym_arg_list_repeat1,
  [1117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_number_token1,
    ACTIONS(256), 1,
      aux_sym_number_token2,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_close_list,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_close_list,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_close,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 29,
  [SMALL_STATE(25)] = 69,
  [SMALL_STATE(26)] = 105,
  [SMALL_STATE(27)] = 135,
  [SMALL_STATE(28)] = 159,
  [SMALL_STATE(29)] = 185,
  [SMALL_STATE(30)] = 215,
  [SMALL_STATE(31)] = 247,
  [SMALL_STATE(32)] = 281,
  [SMALL_STATE(33)] = 319,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 383,
  [SMALL_STATE(36)] = 413,
  [SMALL_STATE(37)] = 447,
  [SMALL_STATE(38)] = 487,
  [SMALL_STATE(39)] = 511,
  [SMALL_STATE(40)] = 534,
  [SMALL_STATE(41)] = 557,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 603,
  [SMALL_STATE(44)] = 632,
  [SMALL_STATE(45)] = 655,
  [SMALL_STATE(46)] = 678,
  [SMALL_STATE(47)] = 700,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 762,
  [SMALL_STATE(50)] = 789,
  [SMALL_STATE(51)] = 827,
  [SMALL_STATE(52)] = 865,
  [SMALL_STATE(53)] = 885,
  [SMALL_STATE(54)] = 923,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 981,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1039,
  [SMALL_STATE(59)] = 1053,
  [SMALL_STATE(60)] = 1069,
  [SMALL_STATE(61)] = 1082,
  [SMALL_STATE(62)] = 1091,
  [SMALL_STATE(63)] = 1104,
  [SMALL_STATE(64)] = 1117,
  [SMALL_STATE(65)] = 1127,
  [SMALL_STATE(66)] = 1134,
  [SMALL_STATE(67)] = 1141,
  [SMALL_STATE(68)] = 1148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_number, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
