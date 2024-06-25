#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 69
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
  sym_operator_1200xfx = 8,
  sym_operator_1200fx = 9,
  sym_operator_1100xfy = 10,
  sym_operator_1050xfy = 11,
  anon_sym_BQUOTE_COMMA_BQUOTE = 12,
  sym_operator_900fy = 13,
  sym_operator_700xfx = 14,
  sym_operator_500yfx = 15,
  sym_operator_400yfx = 16,
  sym_operator_200xfx = 17,
  sym_operator_200xfy = 18,
  sym_operator_200fy = 19,
  anon_sym_PIPE = 20,
  sym_double_quoted_list_notation = 21,
  anon_sym_LPAREN = 22,
  sym_close = 23,
  sym_open_list = 24,
  sym_close_list = 25,
  sym_open_curly = 26,
  sym_close_curly = 27,
  sym_comma = 28,
  aux_sym_comment_token1 = 29,
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
  sym_arg_list_separator = 43,
  sym__arg = 44,
  sym__operator_notation = 45,
  sym_operation_1200xfx = 46,
  sym_operation_1200fx = 47,
  sym_operation_1100xfy = 48,
  sym_operation_1050xfy = 49,
  sym_operator_1000xfy = 50,
  sym_operation_1000xfy = 51,
  sym_operation_900fy = 52,
  sym_operation_700xfx = 53,
  sym_operation_500yfx = 54,
  sym_operation_400yfx = 55,
  sym_operation_200xfx = 56,
  sym_operation_200xfy = 57,
  sym_operation_200fy = 58,
  sym_list_notation = 59,
  sym__list_notation_items = 60,
  sym_list_notation_separator = 61,
  sym_curly_bracketed_notation = 62,
  sym_open = 63,
  sym_open_ct = 64,
  sym_comment = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_arg_list_repeat1 = 67,
  aux_sym__list_notation_items_repeat1 = 68,
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
  [sym_comma] = "comma",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_arg_list_separator] = "arg_list_separator",
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
  [sym_list_notation_separator] = "list_notation_separator",
  [sym_curly_bracketed_notation] = "curly_bracketed_notation",
  [sym_open] = "open",
  [sym_open_ct] = "open_ct",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym__list_notation_items_repeat1] = "_list_notation_items_repeat1",
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
  [sym_comma] = sym_comma,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_arg_list_separator] = sym_arg_list_separator,
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
  [sym_list_notation_separator] = sym_list_notation_separator,
  [sym_curly_bracketed_notation] = sym_curly_bracketed_notation,
  [sym_open] = sym_open,
  [sym_open_ct] = sym_open_ct,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym__list_notation_items_repeat1] = aux_sym__list_notation_items_repeat1,
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
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_arg_list_separator] = {
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
  [sym_list_notation_separator] = {
    .visible = true,
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
  [sym_comment] = {
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
  [aux_sym__list_notation_items_repeat1] = {
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 40,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 54,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
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
};

static TSCharacterRange aux_sym_atom_token1_character_set_1[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static TSCharacterRange aux_sym_comment_token1_character_set_1[] = {
  {0, 0}, {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', '*'}, {',', '-'}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 115,
        '"', 3,
        '#', 6,
        '%', 1,
        '\'', 4,
        '(', 146,
        ')', 147,
        '*', 139,
        ',', 152,
        '-', 114,
        '.', 104,
        '/', 140,
        '0', 107,
        ':', 26,
        ';', 127,
        '<', 48,
        '>', 60,
        '?', 27,
        '[', 148,
        '\\', 116,
        ']', 149,
        '^', 143,
        '_', 124,
        '`', 25,
        'm', 122,
        'r', 120,
        '{', 150,
        '|', 144,
        '}', 151,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '#', 6,
        '%', 1,
        '\'', 4,
        '(', 146,
        '-', 114,
        '/', 16,
        '0', 107,
        ':', 27,
        '?', 27,
        '[', 148,
        '\\', 116,
        ']', 149,
        '_', 124,
        '{', 150,
        '}', 151,
        '!', 115,
        ';', 115,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(88);
      if (((!eof && set_contains(aux_sym_comment_token1_character_set_1, 10, lookahead))) &&
          lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(89);
      if (((!eof && set_contains(aux_sym_comment_token1_character_set_1, 10, lookahead))) &&
          lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(38);
      if ((!eof && set_contains(aux_sym_comment_token1_character_set_1, 10, lookahead))) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(14);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '%', 1,
        '(', 146,
        ')', 147,
        '*', 139,
        '+', 136,
        ',', 152,
        '-', 137,
        '.', 104,
        '/', 141,
        ':', 29,
        ';', 127,
        '<', 133,
        '=', 132,
        '>', 135,
        '@', 51,
        '\\', 40,
        ']', 149,
        '^', 143,
        '`', 25,
        'i', 87,
        'm', 86,
        'r', 84,
        '|', 144,
        '}', 151,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '+') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '+') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '+') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == '+') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(131);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(153);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == '<') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == '<') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == '<') ADVANCE(131);
      END_STATE();
    case 51:
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 52:
      if (lookahead == '<') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == '<') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == '<') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == '?') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == '?') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == '?') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == '?') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == '@') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == '@') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == '@') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == '@') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '^') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == '^') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == '^') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == '^') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == '`') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(3);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(4);
      END_STATE();
    case 90:
      if (lookahead == '~') ADVANCE(3);
      END_STATE();
    case 91:
      if (lookahead == '~') ADVANCE(4);
      END_STATE();
    case 92:
      if (lookahead == '~') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == '~') ADVANCE(5);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '"', 3,
        '#', 6,
        '%', 1,
        '\'', 4,
        '(', 146,
        '-', 114,
        '/', 16,
        '0', 107,
        ':', 26,
        '?', 27,
        '[', 148,
        '\\', 116,
        '_', 124,
        '{', 150,
        '!', 115,
        ';', 115,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(136);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 102},
  [3] = {.lex_state = 102},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 102},
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
    [sym_operator_1200fx] = ACTIONS(1),
    [sym_operator_1100xfy] = ACTIONS(1),
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
    [sym_comma] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_directive_term] = STATE(53),
    [sym_clause_term] = STATE(53),
    [sym__term] = STATE(61),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_directive_term] = STATE(53),
    [sym_clause_term] = STATE(53),
    [sym__term] = STATE(61),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(19),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_directive_term] = STATE(53),
    [sym_clause_term] = STATE(53),
    [sym__term] = STATE(61),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_COLON_DASH] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(40),
    [aux_sym_number_token2] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(46),
    [aux_sym_atom_token1] = ACTIONS(49),
    [sym_variable_term] = ACTIONS(52),
    [sym_operator_1200fx] = ACTIONS(55),
    [sym_operator_900fy] = ACTIONS(58),
    [sym_operator_200fy] = ACTIONS(61),
    [sym_double_quoted_list_notation] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_open_list] = ACTIONS(70),
    [sym_open_curly] = ACTIONS(73),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(40),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__arg] = STATE(66),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym__list_notation_items] = STATE(76),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(4),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_close_list] = ACTIONS(78),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(40),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym_arg_list] = STATE(78),
    [sym__arg] = STATE(68),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(5),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(40),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__arg] = STATE(72),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(6),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(40),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__arg] = STATE(74),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym__term] = STATE(63),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(55),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__arg] = STATE(77),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(8),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym__term] = STATE(64),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(9),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [sym_close_curly] = ACTIONS(80),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
    [sym__term] = STATE(32),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(10),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym__term] = STATE(36),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(11),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [12] = {
    [sym__term] = STATE(33),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(12),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym__term] = STATE(57),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(13),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym__term] = STATE(29),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym__term] = STATE(31),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(15),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym__term] = STATE(38),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(16),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
    [sym__term] = STATE(26),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(17),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym__term] = STATE(25),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(18),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym__term] = STATE(28),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(19),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym__term] = STATE(37),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(20),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym__term] = STATE(58),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(21),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym__term] = STATE(27),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(22),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym__term] = STATE(34),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(41),
    [sym_negative_number] = STATE(41),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(39),
    [sym_empty_curly_brackets] = STATE(39),
    [sym_functional_notation] = STATE(44),
    [sym__operator_notation] = STATE(44),
    [sym_operation_1200xfx] = STATE(42),
    [sym_operation_1200fx] = STATE(42),
    [sym_operation_1100xfy] = STATE(42),
    [sym_operation_1050xfy] = STATE(42),
    [sym_operation_1000xfy] = STATE(42),
    [sym_operation_900fy] = STATE(42),
    [sym_operation_700xfx] = STATE(42),
    [sym_operation_500yfx] = STATE(42),
    [sym_operation_400yfx] = STATE(42),
    [sym_operation_200xfx] = STATE(42),
    [sym_operation_200xfy] = STATE(42),
    [sym_operation_200fy] = STATE(42),
    [sym_list_notation] = STATE(44),
    [sym_curly_bracketed_notation] = STATE(44),
    [sym_open] = STATE(21),
    [sym_comment] = STATE(23),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(17),
    [sym_operator_1200fx] = ACTIONS(76),
    [sym_operator_900fy] = ACTIONS(21),
    [sym_operator_200fy] = ACTIONS(23),
    [sym_double_quoted_list_notation] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_open_list] = ACTIONS(29),
    [sym_open_curly] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    STATE(24), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(82), 12,
      sym_end,
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
      sym_comma,
  [32] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      sym_operator_700xfx,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(25), 1,
      sym_comment,
    ACTIONS(88), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [69] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(26), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_operator_700xfx,
      sym_operator_500yfx,
    ACTIONS(100), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [104] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(27), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(104), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [147] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(28), 1,
      sym_comment,
    ACTIONS(114), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [184] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(29), 1,
      sym_comment,
    ACTIONS(118), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(116), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [217] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(122), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(120), 13,
      sym_end,
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
      sym_comma,
  [244] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(31), 1,
      sym_comment,
    ACTIONS(126), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(124), 12,
      sym_end,
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
      sym_comma,
  [273] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(32), 1,
      sym_comment,
    ACTIONS(130), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(128), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [306] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(33), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(132), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [349] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(34), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(134), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [392] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(136), 13,
      sym_end,
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
      sym_comma,
  [419] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(36), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(140), 8,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [458] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(37), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(142), 7,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [499] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(38), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(144), 10,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [532] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(150), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(148), 13,
      sym_end,
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
      sym_comma,
  [559] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    STATE(40), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(152), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
    ACTIONS(82), 6,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [591] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(82), 12,
      sym_end,
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
      sym_comma,
  [617] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(156), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(154), 12,
      sym_end,
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
      sym_comma,
  [643] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(160), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(158), 12,
      sym_end,
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
      sym_comma,
  [669] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(162), 12,
      sym_end,
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
      sym_comma,
  [695] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(166), 12,
      sym_end,
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
      sym_comma,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(170), 12,
      sym_end,
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
      sym_comma,
  [747] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(174), 12,
      sym_end,
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
      sym_comma,
  [773] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(178), 12,
      sym_end,
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
      sym_comma,
  [799] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(184), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(182), 12,
      sym_end,
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
      sym_comma,
  [825] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(188), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(186), 12,
      sym_end,
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
      sym_comma,
  [851] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(192), 5,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_operator_200fy,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [876] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(196), 5,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_operator_200fy,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [901] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(200), 5,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_operator_200fy,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [926] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(110), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(54), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
  [969] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    STATE(55), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(82), 7,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      sym_comma,
  [999] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(204), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_200fy,
    ACTIONS(206), 8,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1022] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    ACTIONS(208), 1,
      sym_end,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(57), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1063] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    ACTIONS(210), 1,
      sym_close,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(58), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1104] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(212), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_200fy,
    ACTIONS(214), 8,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1127] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(216), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_200fy,
    ACTIONS(218), 8,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1150] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    ACTIONS(220), 1,
      sym_end,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(61), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1191] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(222), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_200fy,
    ACTIONS(224), 8,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1214] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(152), 1,
      sym_close_list,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(63), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1255] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      sym_operator_500yfx,
    ACTIONS(94), 1,
      sym_operator_400yfx,
    ACTIONS(96), 1,
      sym_operator_200xfx,
    ACTIONS(98), 1,
      sym_operator_200xfy,
    ACTIONS(106), 1,
      sym_operator_1100xfy,
    ACTIONS(108), 1,
      sym_operator_1050xfy,
    ACTIONS(112), 1,
      sym_operator_700xfx,
    ACTIONS(202), 1,
      sym_operator_1200xfx,
    ACTIONS(226), 1,
      sym_close_curly,
    STATE(11), 1,
      sym_operator_1000xfy,
    STATE(64), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1296] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(228), 4,
      aux_sym_number_token1,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_200fy,
    ACTIONS(230), 8,
      aux_sym_number_token2,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
  [1319] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(234), 1,
      sym_close_list,
    ACTIONS(236), 1,
      sym_comma,
    STATE(7), 1,
      sym_list_notation_separator,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__list_notation_items_repeat1,
  [1341] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      sym_comma,
    ACTIONS(238), 1,
      sym_close_list,
    STATE(7), 1,
      sym_list_notation_separator,
    STATE(67), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym__list_notation_items_repeat1,
  [1360] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_close,
    ACTIONS(242), 1,
      sym_comma,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_arg_list_repeat1,
  [1379] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(244), 1,
      sym_close,
    ACTIONS(246), 1,
      sym_comma,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(69), 2,
      sym_comment,
      aux_sym_arg_list_repeat1,
  [1396] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(249), 1,
      sym_close_list,
    ACTIONS(251), 1,
      sym_comma,
    STATE(7), 1,
      sym_list_notation_separator,
    STATE(70), 2,
      sym_comment,
      aux_sym__list_notation_items_repeat1,
  [1413] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(242), 1,
      sym_comma,
    ACTIONS(254), 1,
      sym_close,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(69), 1,
      aux_sym_arg_list_repeat1,
    STATE(71), 1,
      sym_comment,
  [1432] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_close,
      sym_comma,
  [1443] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(256), 1,
      aux_sym_number_token1,
    ACTIONS(258), 1,
      aux_sym_number_token2,
    STATE(73), 1,
      sym_comment,
  [1456] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym_close_list,
      sym_comma,
  [1467] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
  [1477] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      sym_close_list,
    STATE(76), 1,
      sym_comment,
  [1487] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      sym_close_list,
    STATE(77), 1,
      sym_comment,
  [1497] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      sym_close,
    STATE(78), 1,
      sym_comment,
  [1507] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 32,
  [SMALL_STATE(26)] = 69,
  [SMALL_STATE(27)] = 104,
  [SMALL_STATE(28)] = 147,
  [SMALL_STATE(29)] = 184,
  [SMALL_STATE(30)] = 217,
  [SMALL_STATE(31)] = 244,
  [SMALL_STATE(32)] = 273,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 392,
  [SMALL_STATE(36)] = 419,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 559,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 617,
  [SMALL_STATE(43)] = 643,
  [SMALL_STATE(44)] = 669,
  [SMALL_STATE(45)] = 695,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 747,
  [SMALL_STATE(48)] = 773,
  [SMALL_STATE(49)] = 799,
  [SMALL_STATE(50)] = 825,
  [SMALL_STATE(51)] = 851,
  [SMALL_STATE(52)] = 876,
  [SMALL_STATE(53)] = 901,
  [SMALL_STATE(54)] = 926,
  [SMALL_STATE(55)] = 969,
  [SMALL_STATE(56)] = 999,
  [SMALL_STATE(57)] = 1022,
  [SMALL_STATE(58)] = 1063,
  [SMALL_STATE(59)] = 1104,
  [SMALL_STATE(60)] = 1127,
  [SMALL_STATE(61)] = 1150,
  [SMALL_STATE(62)] = 1191,
  [SMALL_STATE(63)] = 1214,
  [SMALL_STATE(64)] = 1255,
  [SMALL_STATE(65)] = 1296,
  [SMALL_STATE(66)] = 1319,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1360,
  [SMALL_STATE(69)] = 1379,
  [SMALL_STATE(70)] = 1396,
  [SMALL_STATE(71)] = 1413,
  [SMALL_STATE(72)] = 1432,
  [SMALL_STATE(73)] = 1443,
  [SMALL_STATE(74)] = 1456,
  [SMALL_STATE(75)] = 1467,
  [SMALL_STATE(76)] = 1477,
  [SMALL_STATE(77)] = 1487,
  [SMALL_STATE(78)] = 1497,
  [SMALL_STATE(79)] = 1507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_term, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_term, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_number, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
