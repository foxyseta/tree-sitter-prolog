#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end = 1,
  anon_sym_COLON_DASH = 2,
  anon_sym_DASH = 3,
  aux_sym_atom_token1 = 4,
  sym_variable_term = 5,
  sym_operator_1200xfx = 6,
  sym_operator_1200fx = 7,
  sym_operator_1100xfy = 8,
  sym_operator_1050xfy = 9,
  anon_sym_BQUOTE_COMMA_BQUOTE = 10,
  sym_operator_900fy = 11,
  sym_operator_700xfx = 12,
  sym_operator_500yfx = 13,
  sym_operator_400yfx = 14,
  sym_operator_200xfx = 15,
  sym_operator_200xfy = 16,
  sym_operator_200fy = 17,
  anon_sym_PIPE = 18,
  sym_double_quoted_list_notation = 19,
  anon_sym_LPAREN = 20,
  sym_close = 21,
  sym_open_list = 22,
  sym_close_list = 23,
  sym_open_curly = 24,
  sym_close_curly = 25,
  sym_comma = 26,
  sym_integer = 27,
  sym_float_number = 28,
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
  aux_sym_source_file_repeat1 = 65,
  aux_sym_arg_list_repeat1 = 66,
  aux_sym__list_notation_items_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
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
  [sym_integer] = "integer",
  [sym_float_number] = "float_number",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym__list_notation_items_repeat1] = "_list_notation_items_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end] = sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
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
  [sym_integer] = sym_integer,
  [sym_float_number] = sym_float_number,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float_number] = {
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
  [50] = 41,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 49,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
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
      if (eof) ADVANCE(88);
      ADVANCE_MAP(
        '!', 93,
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 125,
        ')', 126,
        '*', 117,
        ',', 131,
        '-', 91,
        '.', 89,
        '/', 118,
        '0', 133,
        ':', 23,
        ';', 105,
        '<', 40,
        '>', 50,
        '?', 24,
        '[', 127,
        '\\', 94,
        ']', 128,
        '^', 121,
        '_', 102,
        '`', 22,
        'm', 100,
        'r', 98,
        '{', 129,
        '|', 123,
        '}', 130,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(141);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 125,
        '-', 92,
        '/', 13,
        '0', 133,
        ':', 24,
        '?', 24,
        '[', 127,
        '\\', 94,
        ']', 128,
        '_', 102,
        '{', 129,
        '}', 130,
        '!', 93,
        ';', 93,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(75);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(11);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '%', 1,
        '(', 125,
        ')', 126,
        '*', 117,
        '+', 114,
        ',', 131,
        '-', 115,
        '.', 89,
        '/', 119,
        ':', 25,
        ';', 105,
        '<', 111,
        '=', 110,
        '>', 113,
        '@', 43,
        '\\', 34,
        ']', 128,
        '^', 121,
        '`', 22,
        'i', 73,
        'm', 72,
        'r', 70,
        '|', 123,
        '}', 130,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '+') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '+') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '+') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == '<') ADVANCE(116);
      END_STATE();
    case 41:
      if (lookahead == '<') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == '<') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '?') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == '?') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == '?') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == '@') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == '@') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == '@') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '^') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == '^') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == '^') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == '`') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(3);
      END_STATE();
    case 75:
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(4);
      END_STATE();
    case 76:
      if (lookahead == '~') ADVANCE(3);
      END_STATE();
    case 77:
      if (lookahead == '~') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == '~') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      ADVANCE_MAP(
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 125,
        '-', 92,
        '/', 13,
        '0', 133,
        ':', 23,
        '?', 24,
        '[', 127,
        '\\', 94,
        '_', 102,
        '{', 129,
        '!', 93,
        ';', 93,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(114);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'x') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_float_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      if ((!eof && lookahead == 00)) ADVANCE(141);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
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
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
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
    [sym_comma] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(54),
    [sym__atomic_term] = STATE(54),
    [sym_number] = STATE(54),
    [sym_negative_number] = STATE(54),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(54),
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
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(13),
    [sym_operator_1200fx] = ACTIONS(15),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(54),
    [sym__atomic_term] = STATE(54),
    [sym_number] = STATE(54),
    [sym_negative_number] = STATE(54),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(54),
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
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(13),
    [sym_operator_1200fx] = ACTIONS(15),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(54),
    [sym__atomic_term] = STATE(54),
    [sym_number] = STATE(54),
    [sym_negative_number] = STATE(54),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(54),
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
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_COLON_DASH] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(38),
    [aux_sym_atom_token1] = ACTIONS(41),
    [sym_variable_term] = ACTIONS(44),
    [sym_operator_1200fx] = ACTIONS(47),
    [sym_operator_900fy] = ACTIONS(50),
    [sym_operator_200fy] = ACTIONS(53),
    [sym_double_quoted_list_notation] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_open_list] = ACTIONS(59),
    [sym_open_curly] = ACTIONS(62),
    [sym_integer] = ACTIONS(65),
    [sym_float_number] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__term] = STATE(49),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(49),
    [sym_negative_number] = STATE(49),
    [sym_atom] = STATE(41),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(49),
    [sym__arg] = STATE(61),
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
    [sym__list_notation_items] = STATE(73),
    [sym_curly_bracketed_notation] = STATE(49),
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_close_list] = ACTIONS(75),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__term] = STATE(49),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(49),
    [sym_negative_number] = STATE(49),
    [sym_atom] = STATE(41),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(49),
    [sym_arg_list] = STATE(71),
    [sym__arg] = STATE(62),
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
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__term] = STATE(51),
    [sym__compound_term] = STATE(51),
    [sym__atomic_term] = STATE(51),
    [sym_number] = STATE(51),
    [sym_negative_number] = STATE(51),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(77),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_close_curly] = ACTIONS(79),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__term] = STATE(49),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(49),
    [sym_negative_number] = STATE(49),
    [sym_atom] = STATE(41),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(49),
    [sym__arg] = STATE(68),
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
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__term] = STATE(58),
    [sym__compound_term] = STATE(58),
    [sym__atomic_term] = STATE(58),
    [sym_number] = STATE(58),
    [sym_negative_number] = STATE(58),
    [sym_atom] = STATE(50),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(58),
    [sym__arg] = STATE(70),
    [sym__operator_notation] = STATE(58),
    [sym_operation_1200xfx] = STATE(58),
    [sym_operation_1200fx] = STATE(58),
    [sym_operation_1100xfy] = STATE(58),
    [sym_operation_1050xfy] = STATE(58),
    [sym_operation_1000xfy] = STATE(58),
    [sym_operation_900fy] = STATE(58),
    [sym_operation_700xfx] = STATE(58),
    [sym_operation_500yfx] = STATE(58),
    [sym_operation_400yfx] = STATE(58),
    [sym_operation_200xfx] = STATE(58),
    [sym_operation_200xfy] = STATE(58),
    [sym_operation_200fy] = STATE(58),
    [sym_list_notation] = STATE(58),
    [sym_curly_bracketed_notation] = STATE(58),
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(81),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__term] = STATE(49),
    [sym__compound_term] = STATE(49),
    [sym__atomic_term] = STATE(49),
    [sym_number] = STATE(49),
    [sym_negative_number] = STATE(49),
    [sym_atom] = STATE(41),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(49),
    [sym__arg] = STATE(67),
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
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(71),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__term] = STATE(37),
    [sym__compound_term] = STATE(37),
    [sym__atomic_term] = STATE(37),
    [sym_number] = STATE(37),
    [sym_negative_number] = STATE(37),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(83),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__term] = STATE(57),
    [sym__compound_term] = STATE(57),
    [sym__atomic_term] = STATE(57),
    [sym_number] = STATE(57),
    [sym_negative_number] = STATE(57),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(57),
    [sym__operator_notation] = STATE(57),
    [sym_operation_1200xfx] = STATE(57),
    [sym_operation_1200fx] = STATE(57),
    [sym_operation_1100xfy] = STATE(57),
    [sym_operation_1050xfy] = STATE(57),
    [sym_operation_1000xfy] = STATE(57),
    [sym_operation_900fy] = STATE(57),
    [sym_operation_700xfx] = STATE(57),
    [sym_operation_500yfx] = STATE(57),
    [sym_operation_400yfx] = STATE(57),
    [sym_operation_200xfx] = STATE(57),
    [sym_operation_200xfy] = STATE(57),
    [sym_operation_200fy] = STATE(57),
    [sym_list_notation] = STATE(57),
    [sym_curly_bracketed_notation] = STATE(57),
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(85),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__term] = STATE(26),
    [sym__compound_term] = STATE(26),
    [sym__atomic_term] = STATE(26),
    [sym_number] = STATE(26),
    [sym_negative_number] = STATE(26),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(87),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__term] = STATE(39),
    [sym__compound_term] = STATE(39),
    [sym__atomic_term] = STATE(39),
    [sym_number] = STATE(39),
    [sym_negative_number] = STATE(39),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym_operation_1200xfx] = STATE(39),
    [sym_operation_1200fx] = STATE(39),
    [sym_operation_1100xfy] = STATE(39),
    [sym_operation_1050xfy] = STATE(39),
    [sym_operation_1000xfy] = STATE(39),
    [sym_operation_900fy] = STATE(39),
    [sym_operation_700xfx] = STATE(39),
    [sym_operation_500yfx] = STATE(39),
    [sym_operation_400yfx] = STATE(39),
    [sym_operation_200xfx] = STATE(39),
    [sym_operation_200xfy] = STATE(39),
    [sym_operation_200fy] = STATE(39),
    [sym_list_notation] = STATE(39),
    [sym_curly_bracketed_notation] = STATE(39),
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(89),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__term] = STATE(52),
    [sym__compound_term] = STATE(52),
    [sym__atomic_term] = STATE(52),
    [sym_number] = STATE(52),
    [sym_negative_number] = STATE(52),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(52),
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
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(91),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__term] = STATE(38),
    [sym__compound_term] = STATE(38),
    [sym__atomic_term] = STATE(38),
    [sym_number] = STATE(38),
    [sym_negative_number] = STATE(38),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
    [sym_functional_notation] = STATE(38),
    [sym__operator_notation] = STATE(38),
    [sym_operation_1200xfx] = STATE(38),
    [sym_operation_1200fx] = STATE(38),
    [sym_operation_1100xfy] = STATE(38),
    [sym_operation_1050xfy] = STATE(38),
    [sym_operation_1000xfy] = STATE(38),
    [sym_operation_900fy] = STATE(38),
    [sym_operation_700xfx] = STATE(38),
    [sym_operation_500yfx] = STATE(38),
    [sym_operation_400yfx] = STATE(38),
    [sym_operation_200xfx] = STATE(38),
    [sym_operation_200xfy] = STATE(38),
    [sym_operation_200fy] = STATE(38),
    [sym_list_notation] = STATE(38),
    [sym_curly_bracketed_notation] = STATE(38),
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(93),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__term] = STATE(29),
    [sym__compound_term] = STATE(29),
    [sym__atomic_term] = STATE(29),
    [sym_number] = STATE(29),
    [sym_negative_number] = STATE(29),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(95),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__term] = STATE(30),
    [sym__compound_term] = STATE(30),
    [sym__atomic_term] = STATE(30),
    [sym_number] = STATE(30),
    [sym_negative_number] = STATE(30),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(97),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__term] = STATE(31),
    [sym__compound_term] = STATE(31),
    [sym__atomic_term] = STATE(31),
    [sym_number] = STATE(31),
    [sym_negative_number] = STATE(31),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(99),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__term] = STATE(33),
    [sym__compound_term] = STATE(33),
    [sym__atomic_term] = STATE(33),
    [sym_number] = STATE(33),
    [sym_negative_number] = STATE(33),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(101),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__term] = STATE(36),
    [sym__compound_term] = STATE(36),
    [sym__atomic_term] = STATE(36),
    [sym_number] = STATE(36),
    [sym_negative_number] = STATE(36),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(103),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__term] = STATE(35),
    [sym__compound_term] = STATE(35),
    [sym__atomic_term] = STATE(35),
    [sym_number] = STATE(35),
    [sym_negative_number] = STATE(35),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(105),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__term] = STATE(34),
    [sym__compound_term] = STATE(34),
    [sym__atomic_term] = STATE(34),
    [sym_number] = STATE(34),
    [sym_negative_number] = STATE(34),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [sym_open] = STATE(14),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(107),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__term] = STATE(25),
    [sym__compound_term] = STATE(25),
    [sym__atomic_term] = STATE(25),
    [sym_number] = STATE(25),
    [sym_negative_number] = STATE(25),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(28),
    [sym_empty_curly_brackets] = STATE(28),
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
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(109),
    [sym_operator_1200fx] = ACTIONS(73),
    [sym_operator_900fy] = ACTIONS(17),
    [sym_operator_200fy] = ACTIONS(19),
    [sym_double_quoted_list_notation] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_open_list] = ACTIONS(23),
    [sym_open_curly] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float_number] = ACTIONS(29),
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
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_operator_700xfx,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(117), 10,
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
  [63] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(131), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(129), 10,
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
  [93] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(133), 13,
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
  [117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(137), 13,
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
  [141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(141), 8,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(149), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(147), 10,
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
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(153), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(151), 12,
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
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(155), 13,
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
  [257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(161), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(159), 10,
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
  [287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(165), 2,
      sym_operator_700xfx,
      sym_operator_500yfx,
    ACTIONS(163), 10,
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
  [319] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(167), 7,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [357] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(171), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [397] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(175), 10,
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
  [431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(177), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(179), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
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
  [534] = 6,
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
    ACTIONS(185), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
    ACTIONS(111), 6,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(187), 12,
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
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(191), 12,
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
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(195), 12,
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
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(199), 12,
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
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(203), 12,
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
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_integer,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_integer,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [722] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(185), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
  [762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(113), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(111), 7,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      sym_comma,
  [789] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    ACTIONS(217), 1,
      sym_close_curly,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [827] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    ACTIONS(219), 1,
      sym_close,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(223), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [885] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    ACTIONS(225), 1,
      sym_end,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(229), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(233), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [963] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    ACTIONS(235), 1,
      sym_end,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1001] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_operator_500yfx,
    ACTIONS(123), 1,
      sym_operator_400yfx,
    ACTIONS(125), 1,
      sym_operator_200xfx,
    ACTIONS(127), 1,
      sym_operator_200xfy,
    ACTIONS(145), 1,
      sym_operator_700xfx,
    ACTIONS(169), 1,
      sym_operator_1050xfy,
    ACTIONS(173), 1,
      sym_operator_1100xfy,
    ACTIONS(185), 1,
      sym_close_list,
    ACTIONS(215), 1,
      sym_operator_1200xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(143), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(239), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(243), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      sym_close_list,
    ACTIONS(249), 1,
      sym_comma,
    STATE(9), 1,
      sym_list_notation_separator,
    STATE(63), 1,
      aux_sym__list_notation_items_repeat1,
  [1098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_close,
    ACTIONS(253), 1,
      sym_comma,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(65), 1,
      aux_sym_arg_list_repeat1,
  [1114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_comma,
    ACTIONS(255), 1,
      sym_close_list,
    STATE(9), 1,
      sym_list_notation_separator,
    STATE(64), 1,
      aux_sym__list_notation_items_repeat1,
  [1130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_close_list,
    ACTIONS(259), 1,
      sym_comma,
    STATE(9), 1,
      sym_list_notation_separator,
    STATE(64), 1,
      aux_sym__list_notation_items_repeat1,
  [1146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_comma,
    ACTIONS(262), 1,
      sym_close,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(66), 1,
      aux_sym_arg_list_repeat1,
  [1162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_close,
    ACTIONS(266), 1,
      sym_comma,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(66), 1,
      aux_sym_arg_list_repeat1,
  [1178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_close_list,
      sym_comma,
  [1186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym_close,
      sym_comma,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_integer,
    ACTIONS(271), 1,
      sym_float_number,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_close_list,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_close,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_close_list,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 29,
  [SMALL_STATE(26)] = 63,
  [SMALL_STATE(27)] = 93,
  [SMALL_STATE(28)] = 117,
  [SMALL_STATE(29)] = 141,
  [SMALL_STATE(30)] = 177,
  [SMALL_STATE(31)] = 207,
  [SMALL_STATE(32)] = 233,
  [SMALL_STATE(33)] = 257,
  [SMALL_STATE(34)] = 287,
  [SMALL_STATE(35)] = 319,
  [SMALL_STATE(36)] = 357,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 471,
  [SMALL_STATE(40)] = 511,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 563,
  [SMALL_STATE(43)] = 586,
  [SMALL_STATE(44)] = 609,
  [SMALL_STATE(45)] = 632,
  [SMALL_STATE(46)] = 655,
  [SMALL_STATE(47)] = 678,
  [SMALL_STATE(48)] = 700,
  [SMALL_STATE(49)] = 722,
  [SMALL_STATE(50)] = 762,
  [SMALL_STATE(51)] = 789,
  [SMALL_STATE(52)] = 827,
  [SMALL_STATE(53)] = 865,
  [SMALL_STATE(54)] = 885,
  [SMALL_STATE(55)] = 923,
  [SMALL_STATE(56)] = 943,
  [SMALL_STATE(57)] = 963,
  [SMALL_STATE(58)] = 1001,
  [SMALL_STATE(59)] = 1039,
  [SMALL_STATE(60)] = 1059,
  [SMALL_STATE(61)] = 1079,
  [SMALL_STATE(62)] = 1098,
  [SMALL_STATE(63)] = 1114,
  [SMALL_STATE(64)] = 1130,
  [SMALL_STATE(65)] = 1146,
  [SMALL_STATE(66)] = 1162,
  [SMALL_STATE(67)] = 1178,
  [SMALL_STATE(68)] = 1186,
  [SMALL_STATE(69)] = 1194,
  [SMALL_STATE(70)] = 1204,
  [SMALL_STATE(71)] = 1211,
  [SMALL_STATE(72)] = 1218,
  [SMALL_STATE(73)] = 1225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_number, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
