#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end = 1,
  sym_directive_head = 2,
  aux_sym_atom_token1 = 3,
  sym_variable_term = 4,
  sym_operator_1200xfx = 5,
  sym_operator_1200fx = 6,
  sym_operator_1100xfy = 7,
  sym_operator_1050xfy = 8,
  anon_sym_BQUOTE_COMMA_BQUOTE = 9,
  sym_operator_900fy = 10,
  sym_operator_700xfx = 11,
  sym_operator_500yfx = 12,
  sym_operator_400yfx = 13,
  sym_operator_200xfx = 14,
  sym_operator_200xfy = 15,
  sym_operator_200fy = 16,
  anon_sym_PIPE = 17,
  sym_double_quoted_list_notation = 18,
  anon_sym_LPAREN = 19,
  sym_close = 20,
  sym_open_list = 21,
  sym_close_list = 22,
  sym_open_curly = 23,
  sym_close_curly = 24,
  sym_comma = 25,
  sym_integer = 26,
  sym_float_number = 27,
  sym_comment = 28,
  anon_sym_COLON_COLON = 29,
  sym_source_file = 30,
  sym_directive_term = 31,
  sym_clause_term = 32,
  sym__term = 33,
  sym__compound_term = 34,
  sym__atomic_term = 35,
  sym__number = 36,
  sym_atom = 37,
  sym_empty_list = 38,
  sym_empty_curly_brackets = 39,
  sym_functional_notation = 40,
  sym_arg_list = 41,
  sym_arg_list_separator = 42,
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
  sym_list_notation_separator = 60,
  sym_curly_bracketed_notation = 61,
  sym_open = 62,
  sym_open_ct = 63,
  sym_probability_label = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_arg_list_repeat1 = 66,
  aux_sym__list_notation_items_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end] = "end",
  [sym_directive_head] = "directive_head",
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
  [anon_sym_COLON_COLON] = "::",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__compound_term] = "_compound_term",
  [sym__atomic_term] = "_atomic_term",
  [sym__number] = "_number",
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
  [sym_probability_label] = "probability_label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym__list_notation_items_repeat1] = "_list_notation_items_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end] = sym_end,
  [sym_directive_head] = sym_directive_head,
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__compound_term] = sym__compound_term,
  [sym__atomic_term] = sym__atomic_term,
  [sym__number] = sym__number,
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
  [sym_probability_label] = sym_probability_label,
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
  [sym_directive_head] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
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
  [sym__number] = {
    .visible = false,
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
  [sym_probability_label] = {
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
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 46,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
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
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '!', 95,
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 127,
        ')', 128,
        '*', 119,
        '+', 40,
        ',', 133,
        '-', 28,
        '.', 93,
        '/', 120,
        '0', 135,
        ':', 24,
        ';', 107,
        '<', 44,
        '>', 54,
        '?', 25,
        '[', 129,
        '\\', 96,
        ']', 130,
        '^', 123,
        '_', 104,
        '`', 22,
        'm', 102,
        'r', 100,
        '{', 131,
        '|', 125,
        '}', 132,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 127,
        '+', 40,
        '-', 39,
        '/', 13,
        '0', 135,
        ':', 25,
        '?', 25,
        '[', 129,
        '\\', 96,
        ']', 130,
        '_', 104,
        '{', 131,
        '}', 132,
        '!', 95,
        ';', 95,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(78);
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
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(79);
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
        '(', 127,
        ')', 128,
        '*', 119,
        '+', 116,
        ',', 133,
        '-', 117,
        '.', 93,
        '/', 121,
        ':', 26,
        ';', 107,
        '<', 113,
        '=', 112,
        '>', 115,
        '@', 47,
        '\\', 36,
        ']', 130,
        '^', 123,
        '`', 22,
        'i', 77,
        'm', 76,
        'r', 74,
        '|', 125,
        '}', 132,
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
      if (lookahead == '\'') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(144);
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
      if (lookahead == '+') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '+') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '+') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == '<') ADVANCE(118);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '<') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == '<') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == '<') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '?') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == '?') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == '?') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == '@') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == '@') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == '@') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '^') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == '^') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == '^') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == '`') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(3);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(4);
      END_STATE();
    case 80:
      if (lookahead == '~') ADVANCE(3);
      END_STATE();
    case 81:
      if (lookahead == '~') ADVANCE(4);
      END_STATE();
    case 82:
      if (lookahead == '~') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '"', 3,
        '#', 5,
        '%', 1,
        '\'', 4,
        '(', 127,
        '+', 40,
        '-', 39,
        '/', 13,
        '0', 135,
        ':', 23,
        '?', 25,
        '[', 129,
        '\\', 96,
        '_', 104,
        '{', 131,
        '!', 95,
        ';', 95,
      );
      if ((!eof && lookahead == 00) ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_directive_head);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(116);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_float_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if ((!eof && lookahead == 00)) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 91},
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
  [24] = {.lex_state = 2},
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
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
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
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_directive_head] = ACTIONS(1),
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(56),
    [sym__compound_term] = STATE(56),
    [sym__atomic_term] = STATE(56),
    [sym__number] = STATE(53),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_directive_head] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(11),
    [sym_operator_1200fx] = ACTIONS(13),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(56),
    [sym__compound_term] = STATE(56),
    [sym__atomic_term] = STATE(56),
    [sym__number] = STATE(53),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_directive_head] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(11),
    [sym_operator_1200fx] = ACTIONS(13),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(56),
    [sym__compound_term] = STATE(56),
    [sym__atomic_term] = STATE(56),
    [sym__number] = STATE(53),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_directive_head] = ACTIONS(33),
    [aux_sym_atom_token1] = ACTIONS(36),
    [sym_variable_term] = ACTIONS(39),
    [sym_operator_1200fx] = ACTIONS(42),
    [sym_operator_900fy] = ACTIONS(45),
    [sym_operator_200fy] = ACTIONS(48),
    [sym_double_quoted_list_notation] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_open_list] = ACTIONS(54),
    [sym_open_curly] = ACTIONS(57),
    [sym_integer] = ACTIONS(60),
    [sym_float_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__term] = STATE(46),
    [sym__compound_term] = STATE(46),
    [sym__atomic_term] = STATE(46),
    [sym__number] = STATE(46),
    [sym_atom] = STATE(44),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(46),
    [sym__arg] = STATE(64),
    [sym__operator_notation] = STATE(46),
    [sym_operation_1200xfx] = STATE(46),
    [sym_operation_1200fx] = STATE(46),
    [sym_operation_1100xfy] = STATE(46),
    [sym_operation_1050xfy] = STATE(46),
    [sym_operation_1000xfy] = STATE(46),
    [sym_operation_900fy] = STATE(46),
    [sym_operation_700xfx] = STATE(46),
    [sym_operation_500yfx] = STATE(46),
    [sym_operation_400yfx] = STATE(46),
    [sym_operation_200xfx] = STATE(46),
    [sym_operation_200xfy] = STATE(46),
    [sym_operation_200fy] = STATE(46),
    [sym_list_notation] = STATE(46),
    [sym__list_notation_items] = STATE(72),
    [sym_curly_bracketed_notation] = STATE(46),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(66),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_close_list] = ACTIONS(70),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(72),
    [sym_float_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__term] = STATE(46),
    [sym__compound_term] = STATE(46),
    [sym__atomic_term] = STATE(46),
    [sym__number] = STATE(46),
    [sym_atom] = STATE(44),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(46),
    [sym_arg_list] = STATE(73),
    [sym__arg] = STATE(65),
    [sym__operator_notation] = STATE(46),
    [sym_operation_1200xfx] = STATE(46),
    [sym_operation_1200fx] = STATE(46),
    [sym_operation_1100xfy] = STATE(46),
    [sym_operation_1050xfy] = STATE(46),
    [sym_operation_1000xfy] = STATE(46),
    [sym_operation_900fy] = STATE(46),
    [sym_operation_700xfx] = STATE(46),
    [sym_operation_500yfx] = STATE(46),
    [sym_operation_400yfx] = STATE(46),
    [sym_operation_200xfx] = STATE(46),
    [sym_operation_200xfy] = STATE(46),
    [sym_operation_200fy] = STATE(46),
    [sym_list_notation] = STATE(46),
    [sym_curly_bracketed_notation] = STATE(46),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(66),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(72),
    [sym_float_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__term] = STATE(55),
    [sym__compound_term] = STATE(55),
    [sym__atomic_term] = STATE(55),
    [sym__number] = STATE(55),
    [sym_atom] = STATE(47),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(55),
    [sym__arg] = STATE(75),
    [sym__operator_notation] = STATE(55),
    [sym_operation_1200xfx] = STATE(55),
    [sym_operation_1200fx] = STATE(55),
    [sym_operation_1100xfy] = STATE(55),
    [sym_operation_1050xfy] = STATE(55),
    [sym_operation_1000xfy] = STATE(55),
    [sym_operation_900fy] = STATE(55),
    [sym_operation_700xfx] = STATE(55),
    [sym_operation_500yfx] = STATE(55),
    [sym_operation_400yfx] = STATE(55),
    [sym_operation_200xfx] = STATE(55),
    [sym_operation_200xfy] = STATE(55),
    [sym_operation_200fy] = STATE(55),
    [sym_list_notation] = STATE(55),
    [sym_curly_bracketed_notation] = STATE(55),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(74),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(76),
    [sym_float_number] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__term] = STATE(46),
    [sym__compound_term] = STATE(46),
    [sym__atomic_term] = STATE(46),
    [sym__number] = STATE(46),
    [sym_atom] = STATE(44),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(46),
    [sym__arg] = STATE(71),
    [sym__operator_notation] = STATE(46),
    [sym_operation_1200xfx] = STATE(46),
    [sym_operation_1200fx] = STATE(46),
    [sym_operation_1100xfy] = STATE(46),
    [sym_operation_1050xfy] = STATE(46),
    [sym_operation_1000xfy] = STATE(46),
    [sym_operation_900fy] = STATE(46),
    [sym_operation_700xfx] = STATE(46),
    [sym_operation_500yfx] = STATE(46),
    [sym_operation_400yfx] = STATE(46),
    [sym_operation_200xfx] = STATE(46),
    [sym_operation_200xfy] = STATE(46),
    [sym_operation_200fy] = STATE(46),
    [sym_list_notation] = STATE(46),
    [sym_curly_bracketed_notation] = STATE(46),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(66),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(72),
    [sym_float_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__term] = STATE(46),
    [sym__compound_term] = STATE(46),
    [sym__atomic_term] = STATE(46),
    [sym__number] = STATE(46),
    [sym_atom] = STATE(44),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(46),
    [sym__arg] = STATE(70),
    [sym__operator_notation] = STATE(46),
    [sym_operation_1200xfx] = STATE(46),
    [sym_operation_1200fx] = STATE(46),
    [sym_operation_1100xfy] = STATE(46),
    [sym_operation_1050xfy] = STATE(46),
    [sym_operation_1000xfy] = STATE(46),
    [sym_operation_900fy] = STATE(46),
    [sym_operation_700xfx] = STATE(46),
    [sym_operation_500yfx] = STATE(46),
    [sym_operation_400yfx] = STATE(46),
    [sym_operation_200xfx] = STATE(46),
    [sym_operation_200xfy] = STATE(46),
    [sym_operation_200fy] = STATE(46),
    [sym_list_notation] = STATE(46),
    [sym_curly_bracketed_notation] = STATE(46),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(66),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(72),
    [sym_float_number] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__term] = STATE(51),
    [sym__compound_term] = STATE(51),
    [sym__atomic_term] = STATE(51),
    [sym__number] = STATE(51),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(78),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_close_curly] = ACTIONS(80),
    [sym_integer] = ACTIONS(82),
    [sym_float_number] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__term] = STATE(29),
    [sym__compound_term] = STATE(29),
    [sym__atomic_term] = STATE(29),
    [sym__number] = STATE(29),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(84),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(86),
    [sym_float_number] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__term] = STATE(54),
    [sym__compound_term] = STATE(54),
    [sym__atomic_term] = STATE(54),
    [sym__number] = STATE(54),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(88),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(90),
    [sym_float_number] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__term] = STATE(36),
    [sym__compound_term] = STATE(36),
    [sym__atomic_term] = STATE(36),
    [sym__number] = STATE(36),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(94),
    [sym_float_number] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__term] = STATE(52),
    [sym__compound_term] = STATE(52),
    [sym__atomic_term] = STATE(52),
    [sym__number] = STATE(52),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(96),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(98),
    [sym_float_number] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__term] = STATE(57),
    [sym__compound_term] = STATE(57),
    [sym__atomic_term] = STATE(57),
    [sym__number] = STATE(57),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(100),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(102),
    [sym_float_number] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__term] = STATE(26),
    [sym__compound_term] = STATE(26),
    [sym__atomic_term] = STATE(26),
    [sym__number] = STATE(26),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(104),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(106),
    [sym_float_number] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__term] = STATE(30),
    [sym__compound_term] = STATE(30),
    [sym__atomic_term] = STATE(30),
    [sym__number] = STATE(30),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(108),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(110),
    [sym_float_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__term] = STATE(31),
    [sym__compound_term] = STATE(31),
    [sym__atomic_term] = STATE(31),
    [sym__number] = STATE(31),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(114),
    [sym_float_number] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__term] = STATE(38),
    [sym__compound_term] = STATE(38),
    [sym__atomic_term] = STATE(38),
    [sym__number] = STATE(38),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(116),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(118),
    [sym_float_number] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__term] = STATE(35),
    [sym__compound_term] = STATE(35),
    [sym__atomic_term] = STATE(35),
    [sym__number] = STATE(35),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(120),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(122),
    [sym_float_number] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__term] = STATE(34),
    [sym__compound_term] = STATE(34),
    [sym__atomic_term] = STATE(34),
    [sym__number] = STATE(34),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(124),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(126),
    [sym_float_number] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__term] = STATE(27),
    [sym__compound_term] = STATE(27),
    [sym__atomic_term] = STATE(27),
    [sym__number] = STATE(27),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(27),
    [sym__operator_notation] = STATE(27),
    [sym_operation_1200xfx] = STATE(27),
    [sym_operation_1200fx] = STATE(27),
    [sym_operation_1100xfy] = STATE(27),
    [sym_operation_1050xfy] = STATE(27),
    [sym_operation_1000xfy] = STATE(27),
    [sym_operation_900fy] = STATE(27),
    [sym_operation_700xfx] = STATE(27),
    [sym_operation_500yfx] = STATE(27),
    [sym_operation_400yfx] = STATE(27),
    [sym_operation_200xfx] = STATE(27),
    [sym_operation_200xfy] = STATE(27),
    [sym_operation_200fy] = STATE(27),
    [sym_list_notation] = STATE(27),
    [sym_curly_bracketed_notation] = STATE(27),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(128),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(130),
    [sym_float_number] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__term] = STATE(40),
    [sym__compound_term] = STATE(40),
    [sym__atomic_term] = STATE(40),
    [sym__number] = STATE(40),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
    [sym_functional_notation] = STATE(40),
    [sym__operator_notation] = STATE(40),
    [sym_operation_1200xfx] = STATE(40),
    [sym_operation_1200fx] = STATE(40),
    [sym_operation_1100xfy] = STATE(40),
    [sym_operation_1050xfy] = STATE(40),
    [sym_operation_1000xfy] = STATE(40),
    [sym_operation_900fy] = STATE(40),
    [sym_operation_700xfx] = STATE(40),
    [sym_operation_500yfx] = STATE(40),
    [sym_operation_400yfx] = STATE(40),
    [sym_operation_200xfx] = STATE(40),
    [sym_operation_200xfy] = STATE(40),
    [sym_operation_200fy] = STATE(40),
    [sym_list_notation] = STATE(40),
    [sym_curly_bracketed_notation] = STATE(40),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(132),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(134),
    [sym_float_number] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__term] = STATE(39),
    [sym__compound_term] = STATE(39),
    [sym__atomic_term] = STATE(39),
    [sym__number] = STATE(39),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(138),
    [sym_float_number] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__term] = STATE(32),
    [sym__compound_term] = STATE(32),
    [sym__atomic_term] = STATE(32),
    [sym__number] = STATE(32),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(37),
    [sym_empty_curly_brackets] = STATE(37),
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
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(140),
    [sym_operator_1200fx] = ACTIONS(68),
    [sym_operator_900fy] = ACTIONS(15),
    [sym_operator_200fy] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(142),
    [sym_float_number] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(144), 12,
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
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(150), 10,
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
  [63] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(162), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(170), 13,
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
  [127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(176), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(174), 10,
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
  [157] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(178), 8,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(182), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(180), 10,
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
  [223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(186), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(184), 12,
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
  [249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(188), 13,
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
  [273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(194), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(192), 10,
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
  [303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(198), 2,
      sym_operator_700xfx,
      sym_operator_500yfx,
    ACTIONS(196), 10,
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
  [335] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(202), 1,
      sym_operator_700xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(200), 10,
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
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(204), 13,
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
  [393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(208), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [433] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(210), 7,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(212), 6,
      sym_end,
      sym_operator_1200xfx,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(214), 12,
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
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(218), 12,
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
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(222), 12,
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
  [580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(226), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
    ACTIONS(144), 6,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(228), 12,
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
  [632] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(168), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(226), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
  [672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(144), 7,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      sym_comma,
  [699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_integer,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      sym_directive_head,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_integer,
    ACTIONS(238), 10,
      ts_builtin_sym_end,
      sym_directive_head,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      aux_sym_atom_token1,
      sym_operator_1200fx,
      sym_integer,
    ACTIONS(242), 10,
      ts_builtin_sym_end,
      sym_directive_head,
      sym_variable_term,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [762] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    ACTIONS(246), 1,
      sym_close_curly,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [800] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    ACTIONS(248), 1,
      sym_close,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON,
    ACTIONS(146), 3,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
    ACTIONS(144), 8,
      sym_end,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_200xfx,
      sym_operator_200xfy,
      sym_comma,
  [860] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    ACTIONS(252), 1,
      sym_end,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [898] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(226), 1,
      sym_close_list,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [936] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    ACTIONS(254), 1,
      sym_end,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [974] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_operator_700xfx,
    ACTIONS(154), 1,
      sym_operator_500yfx,
    ACTIONS(156), 1,
      sym_operator_400yfx,
    ACTIONS(158), 1,
      sym_operator_200xfx,
    ACTIONS(160), 1,
      sym_operator_200xfy,
    ACTIONS(164), 1,
      sym_operator_1100xfy,
    ACTIONS(166), 1,
      sym_operator_1050xfy,
    ACTIONS(232), 1,
      sym_operator_1200xfx,
    ACTIONS(256), 1,
      sym_end,
    STATE(16), 1,
      sym_operator_1000xfy,
    ACTIONS(168), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(260), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(264), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(268), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(272), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(276), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(280), 9,
      sym_variable_term,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      sym_close_list,
    ACTIONS(286), 1,
      sym_comma,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(67), 1,
      aux_sym__list_notation_items_repeat1,
  [1145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_close,
    ACTIONS(290), 1,
      sym_comma,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(68), 1,
      aux_sym_arg_list_repeat1,
  [1161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_close_list,
    ACTIONS(294), 1,
      sym_comma,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(66), 1,
      aux_sym__list_notation_items_repeat1,
  [1177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_comma,
    ACTIONS(297), 1,
      sym_close_list,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(66), 1,
      aux_sym__list_notation_items_repeat1,
  [1193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_comma,
    ACTIONS(299), 1,
      sym_close,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(69), 1,
      aux_sym_arg_list_repeat1,
  [1209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_close,
    ACTIONS(303), 1,
      sym_comma,
    STATE(7), 1,
      sym_arg_list_separator,
    STATE(69), 1,
      aux_sym_arg_list_repeat1,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      sym_close_list,
      sym_comma,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym_close,
      sym_comma,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_close_list,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_close,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_close_list,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 29,
  [SMALL_STATE(27)] = 63,
  [SMALL_STATE(28)] = 103,
  [SMALL_STATE(29)] = 127,
  [SMALL_STATE(30)] = 157,
  [SMALL_STATE(31)] = 193,
  [SMALL_STATE(32)] = 223,
  [SMALL_STATE(33)] = 249,
  [SMALL_STATE(34)] = 273,
  [SMALL_STATE(35)] = 303,
  [SMALL_STATE(36)] = 335,
  [SMALL_STATE(37)] = 369,
  [SMALL_STATE(38)] = 393,
  [SMALL_STATE(39)] = 433,
  [SMALL_STATE(40)] = 471,
  [SMALL_STATE(41)] = 511,
  [SMALL_STATE(42)] = 534,
  [SMALL_STATE(43)] = 557,
  [SMALL_STATE(44)] = 580,
  [SMALL_STATE(45)] = 609,
  [SMALL_STATE(46)] = 632,
  [SMALL_STATE(47)] = 672,
  [SMALL_STATE(48)] = 699,
  [SMALL_STATE(49)] = 720,
  [SMALL_STATE(50)] = 741,
  [SMALL_STATE(51)] = 762,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 898,
  [SMALL_STATE(56)] = 936,
  [SMALL_STATE(57)] = 974,
  [SMALL_STATE(58)] = 1012,
  [SMALL_STATE(59)] = 1031,
  [SMALL_STATE(60)] = 1050,
  [SMALL_STATE(61)] = 1069,
  [SMALL_STATE(62)] = 1088,
  [SMALL_STATE(63)] = 1107,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1145,
  [SMALL_STATE(66)] = 1161,
  [SMALL_STATE(67)] = 1177,
  [SMALL_STATE(68)] = 1193,
  [SMALL_STATE(69)] = 1209,
  [SMALL_STATE(70)] = 1225,
  [SMALL_STATE(71)] = 1233,
  [SMALL_STATE(72)] = 1241,
  [SMALL_STATE(73)] = 1248,
  [SMALL_STATE(74)] = 1255,
  [SMALL_STATE(75)] = 1262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation_separator, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list_separator, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability_label, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability_label, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [310] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_problog(void) {
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
