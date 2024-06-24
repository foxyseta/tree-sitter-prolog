#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 88
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COLON_DASH = 1,
  anon_sym_DOT = 2,
  aux_sym_number_token1 = 3,
  aux_sym_number_token2 = 4,
  anon_sym_DASH = 5,
  aux_sym_atom_token1 = 6,
  sym_empty_list = 7,
  sym_empty_curly_brackets = 8,
  sym_variable_term = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COMMA = 12,
  sym_operator_1200xfx = 13,
  sym_operator_1200fx = 14,
  sym_operator_1100xfy = 15,
  sym_operator_1050xfy = 16,
  anon_sym_BQUOTE_COMMA_BQUOTE = 17,
  sym_operator_900fy = 18,
  sym_operator_700xfx = 19,
  sym_operator_500yfx = 20,
  sym_operator_400yfx = 21,
  sym_operator_200xfx = 22,
  sym_operator_200xfy = 23,
  sym_operator_200fy = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_PIPE = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  sym_double_quoted_list_notation = 30,
  sym_source_file = 31,
  sym_directive_term = 32,
  sym_clause_term = 33,
  sym__term = 34,
  sym__compound_term = 35,
  sym__atomic_term = 36,
  sym_number = 37,
  sym_negative_number = 38,
  sym_atom = 39,
  sym_functional_notation = 40,
  sym_arg_list = 41,
  sym__arg = 42,
  sym__operator_notation = 43,
  sym_operation_1200xfx = 44,
  sym_operation_1200fx = 45,
  sym_operation_1100xfy = 46,
  sym_operation_1050xfy = 47,
  sym_operator_1000xfy = 48,
  sym_operation_1000xfy = 49,
  sym_operation_900fy = 50,
  sym_operation_700xfx = 51,
  sym_operation_500yfx = 52,
  sym_operation_400yfx = 53,
  sym_operation_200xfx = 54,
  sym_operation_200xfy = 55,
  sym_operation_200fy = 56,
  sym_list_notation = 57,
  sym__list_notation_items = 58,
  sym_curly_bracketed_notation = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_arg_list_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [6] = 4,
  [7] = 5,
  [8] = 4,
  [9] = 5,
  [10] = 4,
  [11] = 5,
  [12] = 5,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 20,
  [29] = 24,
  [30] = 19,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 17,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 18,
  [39] = 32,
  [40] = 31,
  [41] = 27,
  [42] = 18,
  [43] = 23,
  [44] = 20,
  [45] = 20,
  [46] = 19,
  [47] = 27,
  [48] = 31,
  [49] = 32,
  [50] = 18,
  [51] = 37,
  [52] = 36,
  [53] = 35,
  [54] = 54,
  [55] = 33,
  [56] = 23,
  [57] = 24,
  [58] = 25,
  [59] = 27,
  [60] = 31,
  [61] = 32,
  [62] = 20,
  [63] = 37,
  [64] = 36,
  [65] = 25,
  [66] = 24,
  [67] = 23,
  [68] = 35,
  [69] = 17,
  [70] = 33,
  [71] = 37,
  [72] = 36,
  [73] = 24,
  [74] = 25,
  [75] = 33,
  [76] = 17,
  [77] = 35,
  [78] = 36,
  [79] = 37,
  [80] = 18,
  [81] = 32,
  [82] = 31,
  [83] = 27,
  [84] = 35,
  [85] = 17,
  [86] = 33,
  [87] = 23,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 91,
  [108] = 106,
  [109] = 92,
  [110] = 97,
  [111] = 102,
  [112] = 93,
  [113] = 94,
  [114] = 95,
  [115] = 96,
  [116] = 116,
  [117] = 117,
  [118] = 100,
  [119] = 119,
  [120] = 98,
  [121] = 121,
  [122] = 99,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 101,
  [127] = 106,
  [128] = 98,
  [129] = 104,
  [130] = 103,
  [131] = 91,
  [132] = 132,
  [133] = 133,
  [134] = 100,
  [135] = 104,
  [136] = 99,
  [137] = 101,
  [138] = 138,
  [139] = 133,
  [140] = 106,
  [141] = 103,
  [142] = 91,
  [143] = 101,
  [144] = 99,
  [145] = 103,
  [146] = 92,
  [147] = 117,
  [148] = 98,
  [149] = 100,
  [150] = 133,
  [151] = 117,
  [152] = 133,
  [153] = 117,
  [154] = 133,
  [155] = 117,
  [156] = 96,
  [157] = 104,
  [158] = 105,
  [159] = 92,
  [160] = 97,
  [161] = 102,
  [162] = 93,
  [163] = 94,
  [164] = 95,
  [165] = 96,
  [166] = 95,
  [167] = 94,
  [168] = 100,
  [169] = 93,
  [170] = 102,
  [171] = 97,
  [172] = 98,
  [173] = 105,
  [174] = 106,
  [175] = 103,
  [176] = 91,
  [177] = 96,
  [178] = 95,
  [179] = 94,
  [180] = 93,
  [181] = 102,
  [182] = 97,
  [183] = 92,
  [184] = 105,
  [185] = 104,
  [186] = 105,
  [187] = 121,
  [188] = 123,
  [189] = 119,
  [190] = 123,
  [191] = 124,
  [192] = 132,
  [193] = 121,
  [194] = 125,
  [195] = 124,
  [196] = 119,
  [197] = 132,
  [198] = 132,
  [199] = 119,
  [200] = 125,
  [201] = 123,
  [202] = 124,
  [203] = 125,
  [204] = 124,
  [205] = 125,
  [206] = 123,
  [207] = 121,
  [208] = 121,
  [209] = 119,
  [210] = 132,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 212,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 217,
  [219] = 219,
  [220] = 217,
  [221] = 219,
  [222] = 217,
  [223] = 217,
  [224] = 224,
  [225] = 224,
  [226] = 224,
  [227] = 227,
  [228] = 224,
  [229] = 229,
  [230] = 230,
  [231] = 224,
  [232] = 230,
  [233] = 230,
  [234] = 230,
  [235] = 230,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\n'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
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
      if (eof) ADVANCE(1052);
      if (lookahead == '%') SKIP(982);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') SKIP(997);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1080);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1108);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1120);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '%') SKIP(24);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1447);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(1306);
      if (lookahead == '{') ADVANCE(1468);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '%') SKIP(25);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1447);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(1306);
      if (lookahead == '{') ADVANCE(1468);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1476);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(920);
      if ((set_contains(extras_character_set_1, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 16:
      if (lookahead == '#') SKIP(166);
      if (lookahead == '%') SKIP(17);
      if (lookahead == '(') ADVANCE(1316);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '+') ADVANCE(1376);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') SKIP(283);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(17);
      END_STATE();
    case 17:
      if (lookahead == '#') SKIP(166);
      if (lookahead == '%') SKIP(17);
      if (lookahead == '(') ADVANCE(1316);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') SKIP(283);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '#') SKIP(166);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(17);
      END_STATE();
    case 19:
      if (lookahead == '#') SKIP(168);
      if (lookahead == '*') SKIP(494);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '#') SKIP(168);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(19);
      END_STATE();
    case 21:
      if (lookahead == '#') SKIP(170);
      if (lookahead == '*') SKIP(497);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '#') SKIP(170);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(21);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(921);
      if ((set_contains(extras_character_set_1, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') SKIP(172);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(14);
      END_STATE();
    case 25:
      if (lookahead == '#') SKIP(174);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(15);
      END_STATE();
    case 26:
      if (lookahead == '#') SKIP(176);
      if (lookahead == '*') SKIP(515);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '#') SKIP(176);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(26);
      END_STATE();
    case 28:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(1406);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 29:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 30:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 31:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(1378);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 32:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(1405);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1393);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 35:
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1328);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 36:
      if (lookahead == '#') SKIP(178);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(32);
      END_STATE();
    case 37:
      if (lookahead == '#') SKIP(180);
      if (lookahead == '*') SKIP(498);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '#') SKIP(180);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 39:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(1408);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 40:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 41:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 42:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 43:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(1407);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 45:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1394);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 46:
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1330);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 47:
      if (lookahead == '#') SKIP(182);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(43);
      END_STATE();
    case 48:
      if (lookahead == '#') SKIP(184);
      if (lookahead == '*') SKIP(500);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '#') SKIP(184);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(1410);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 51:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 52:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 53:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(1380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 54:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(1409);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 56:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1395);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 57:
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1332);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 58:
      if (lookahead == '#') SKIP(186);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(54);
      END_STATE();
    case 59:
      if (lookahead == '#') SKIP(188);
      if (lookahead == '*') SKIP(501);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '#') SKIP(188);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(1412);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 62:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 63:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 64:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(1381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 65:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(1411);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 67:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1396);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 68:
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1334);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 69:
      if (lookahead == '#') SKIP(189);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(65);
      END_STATE();
    case 70:
      if (lookahead == '#') SKIP(190);
      if (lookahead == '*') SKIP(502);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(70);
      END_STATE();
    case 71:
      if (lookahead == '#') SKIP(190);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(70);
      END_STATE();
    case 72:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(1414);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 73:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 74:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 75:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 76:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(1413);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 78:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1397);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 79:
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1336);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 80:
      if (lookahead == '#') SKIP(191);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(76);
      END_STATE();
    case 81:
      if (lookahead == '#') SKIP(192);
      if (lookahead == '*') SKIP(503);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == '#') SKIP(192);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(81);
      END_STATE();
    case 83:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(1416);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 84:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 85:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 86:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(1383);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 87:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(1415);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 89:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1398);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 90:
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1338);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 91:
      if (lookahead == '#') SKIP(193);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(87);
      END_STATE();
    case 92:
      if (lookahead == '#') SKIP(194);
      if (lookahead == '*') SKIP(504);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(92);
      END_STATE();
    case 93:
      if (lookahead == '#') SKIP(194);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(92);
      END_STATE();
    case 94:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(1418);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 95:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 96:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 97:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(1384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 98:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(1417);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 100:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1399);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 101:
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1340);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 102:
      if (lookahead == '#') SKIP(195);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(98);
      END_STATE();
    case 103:
      if (lookahead == '#') SKIP(196);
      if (lookahead == '*') SKIP(505);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == '#') SKIP(196);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(103);
      END_STATE();
    case 105:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(1420);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 106:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 107:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 108:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(1385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 109:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(1419);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 111:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1400);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 112:
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1342);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 113:
      if (lookahead == '#') SKIP(197);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(109);
      END_STATE();
    case 114:
      if (lookahead == '#') SKIP(198);
      if (lookahead == '*') SKIP(506);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(114);
      END_STATE();
    case 115:
      if (lookahead == '#') SKIP(198);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(114);
      END_STATE();
    case 116:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(1422);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 117:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 118:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 119:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(1386);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 120:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 121:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(1421);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 122:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1401);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 123:
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1344);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 124:
      if (lookahead == '#') SKIP(199);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(120);
      END_STATE();
    case 125:
      if (lookahead == '#') SKIP(200);
      if (lookahead == '*') SKIP(507);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '#') SKIP(200);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(125);
      END_STATE();
    case 127:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(1424);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 128:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 129:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 130:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(1387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 131:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 132:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(1423);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 133:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1402);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 134:
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1346);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 135:
      if (lookahead == '#') SKIP(201);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(131);
      END_STATE();
    case 136:
      if (lookahead == '#') SKIP(202);
      if (lookahead == '*') SKIP(508);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '#') SKIP(202);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(136);
      END_STATE();
    case 138:
      if (lookahead == '#') SKIP(203);
      if (lookahead == '%') SKIP(138);
      if (lookahead == ',') ADVANCE(1348);
      if (lookahead == '/') SKIP(288);
      if (lookahead == ']') ADVANCE(1453);
      if (lookahead == '|') ADVANCE(1459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(138);
      END_STATE();
    case 139:
      if (lookahead == '#') SKIP(203);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(138);
      END_STATE();
    case 140:
      if (lookahead == '#') SKIP(204);
      if (lookahead == '*') SKIP(509);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(140);
      END_STATE();
    case 141:
      if (lookahead == '#') SKIP(204);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(140);
      END_STATE();
    case 142:
      if (lookahead == '#') SKIP(205);
      if (lookahead == '%') SKIP(142);
      if (lookahead == ')') ADVANCE(1325);
      if (lookahead == ',') ADVANCE(1349);
      if (lookahead == '/') SKIP(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(142);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(142);
      END_STATE();
    case 143:
      if (lookahead == '#') SKIP(205);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(142);
      END_STATE();
    case 144:
      if (lookahead == '#') SKIP(206);
      if (lookahead == '*') SKIP(510);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(144);
      END_STATE();
    case 145:
      if (lookahead == '#') SKIP(206);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(144);
      END_STATE();
    case 146:
      if (lookahead == '#') SKIP(207);
      if (lookahead == '%') SKIP(146);
      if (lookahead == ',') ADVANCE(1350);
      if (lookahead == '/') SKIP(290);
      if (lookahead == ']') ADVANCE(1454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(146);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(146);
      END_STATE();
    case 147:
      if (lookahead == '#') SKIP(207);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(146);
      END_STATE();
    case 148:
      if (lookahead == '#') SKIP(208);
      if (lookahead == '*') SKIP(511);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(148);
      END_STATE();
    case 149:
      if (lookahead == '#') SKIP(208);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(148);
      END_STATE();
    case 150:
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(1193);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 151:
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 152:
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1189);
      if (lookahead == '1') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 153:
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1190);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1195);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 154:
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 155:
      if (lookahead == '#') SKIP(209);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(151);
      END_STATE();
    case 156:
      if (lookahead == '#') SKIP(210);
      if (lookahead == '*') SKIP(512);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(156);
      END_STATE();
    case 157:
      if (lookahead == '#') SKIP(210);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(156);
      END_STATE();
    case 158:
      if (lookahead == '#') SKIP(211);
      if (lookahead == '%') SKIP(158);
      if (lookahead == '/') SKIP(292);
      if (lookahead == ']') ADVANCE(1455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == '#') SKIP(211);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(158);
      END_STATE();
    case 160:
      if (lookahead == '#') SKIP(212);
      if (lookahead == '*') SKIP(513);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(160);
      END_STATE();
    case 161:
      if (lookahead == '#') SKIP(212);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(160);
      END_STATE();
    case 162:
      if (lookahead == '#') SKIP(213);
      if (lookahead == '%') SKIP(162);
      if (lookahead == ')') ADVANCE(1326);
      if (lookahead == '/') SKIP(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(162);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(162);
      END_STATE();
    case 163:
      if (lookahead == '#') SKIP(213);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(162);
      END_STATE();
    case 164:
      if (lookahead == '#') SKIP(214);
      if (lookahead == '*') SKIP(514);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(164);
      END_STATE();
    case 165:
      if (lookahead == '#') SKIP(214);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(164);
      END_STATE();
    case 166:
      if (lookahead == '$') SKIP(233);
      END_STATE();
    case 167:
      if (lookahead == '$') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == '$') SKIP(235);
      END_STATE();
    case 169:
      if (lookahead == '$') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == '$') SKIP(237);
      END_STATE();
    case 171:
      if (lookahead == '$') ADVANCE(236);
      END_STATE();
    case 172:
      if (lookahead == '$') SKIP(239);
      END_STATE();
    case 173:
      if (lookahead == '$') ADVANCE(238);
      END_STATE();
    case 174:
      if (lookahead == '$') SKIP(241);
      END_STATE();
    case 175:
      if (lookahead == '$') ADVANCE(240);
      END_STATE();
    case 176:
      if (lookahead == '$') SKIP(243);
      END_STATE();
    case 177:
      if (lookahead == '$') ADVANCE(242);
      END_STATE();
    case 178:
      if (lookahead == '$') SKIP(245);
      END_STATE();
    case 179:
      if (lookahead == '$') ADVANCE(244);
      END_STATE();
    case 180:
      if (lookahead == '$') SKIP(247);
      END_STATE();
    case 181:
      if (lookahead == '$') ADVANCE(246);
      END_STATE();
    case 182:
      if (lookahead == '$') SKIP(249);
      END_STATE();
    case 183:
      if (lookahead == '$') ADVANCE(248);
      END_STATE();
    case 184:
      if (lookahead == '$') SKIP(251);
      END_STATE();
    case 185:
      if (lookahead == '$') ADVANCE(250);
      END_STATE();
    case 186:
      if (lookahead == '$') SKIP(253);
      END_STATE();
    case 187:
      if (lookahead == '$') ADVANCE(252);
      END_STATE();
    case 188:
      if (lookahead == '$') SKIP(254);
      END_STATE();
    case 189:
      if (lookahead == '$') SKIP(255);
      END_STATE();
    case 190:
      if (lookahead == '$') SKIP(256);
      END_STATE();
    case 191:
      if (lookahead == '$') SKIP(257);
      END_STATE();
    case 192:
      if (lookahead == '$') SKIP(258);
      END_STATE();
    case 193:
      if (lookahead == '$') SKIP(259);
      END_STATE();
    case 194:
      if (lookahead == '$') SKIP(260);
      END_STATE();
    case 195:
      if (lookahead == '$') SKIP(261);
      END_STATE();
    case 196:
      if (lookahead == '$') SKIP(262);
      END_STATE();
    case 197:
      if (lookahead == '$') SKIP(263);
      END_STATE();
    case 198:
      if (lookahead == '$') SKIP(264);
      END_STATE();
    case 199:
      if (lookahead == '$') SKIP(265);
      END_STATE();
    case 200:
      if (lookahead == '$') SKIP(266);
      END_STATE();
    case 201:
      if (lookahead == '$') SKIP(267);
      END_STATE();
    case 202:
      if (lookahead == '$') SKIP(268);
      END_STATE();
    case 203:
      if (lookahead == '$') SKIP(269);
      END_STATE();
    case 204:
      if (lookahead == '$') SKIP(270);
      END_STATE();
    case 205:
      if (lookahead == '$') SKIP(271);
      END_STATE();
    case 206:
      if (lookahead == '$') SKIP(272);
      END_STATE();
    case 207:
      if (lookahead == '$') SKIP(273);
      END_STATE();
    case 208:
      if (lookahead == '$') SKIP(274);
      END_STATE();
    case 209:
      if (lookahead == '$') SKIP(275);
      END_STATE();
    case 210:
      if (lookahead == '$') SKIP(276);
      END_STATE();
    case 211:
      if (lookahead == '$') SKIP(277);
      END_STATE();
    case 212:
      if (lookahead == '$') SKIP(278);
      END_STATE();
    case 213:
      if (lookahead == '$') SKIP(279);
      END_STATE();
    case 214:
      if (lookahead == '$') SKIP(280);
      END_STATE();
    case 215:
      if (lookahead == '%') SKIP(18);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') SKIP(283);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == '%') SKIP(36);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '|') ADVANCE(1456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '%') SKIP(47);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '|') ADVANCE(1456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '%') SKIP(58);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == '%') SKIP(69);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == '%') SKIP(80);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == '%') SKIP(91);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '}') ADVANCE(1469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(221);
      END_STATE();
    case 222:
      if (lookahead == '%') SKIP(102);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == '%') SKIP(113);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(223);
      END_STATE();
    case 224:
      if (lookahead == '%') SKIP(124);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '}') ADVANCE(1469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == '%') SKIP(135);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == '+') ADVANCE(1392);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '-') ADVANCE(1403);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == ';') ADVANCE(1353);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(499);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == '%') SKIP(139);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '/') SKIP(288);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '|') ADVANCE(1456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(226);
      END_STATE();
    case 227:
      if (lookahead == '%') SKIP(143);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '/') SKIP(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '%') SKIP(147);
      if (lookahead == ',') ADVANCE(1327);
      if (lookahead == '/') SKIP(290);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(228);
      END_STATE();
    case 229:
      if (lookahead == '%') SKIP(155);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      END_STATE();
    case 230:
      if (lookahead == '%') SKIP(159);
      if (lookahead == '/') SKIP(292);
      if (lookahead == ']') ADVANCE(1448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(230);
      END_STATE();
    case 231:
      if (lookahead == '%') SKIP(163);
      if (lookahead == ')') ADVANCE(1322);
      if (lookahead == '/') SKIP(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(231);
      END_STATE();
    case 232:
      if (lookahead == '&') ADVANCE(285);
      END_STATE();
    case 233:
      if (lookahead == '&') SKIP(284);
      END_STATE();
    case 234:
      if (lookahead == '&') ADVANCE(294);
      END_STATE();
    case 235:
      if (lookahead == '&') SKIP(304);
      END_STATE();
    case 236:
      if (lookahead == '&') ADVANCE(295);
      END_STATE();
    case 237:
      if (lookahead == '&') SKIP(305);
      END_STATE();
    case 238:
      if (lookahead == '&') ADVANCE(296);
      END_STATE();
    case 239:
      if (lookahead == '&') SKIP(306);
      END_STATE();
    case 240:
      if (lookahead == '&') ADVANCE(297);
      END_STATE();
    case 241:
      if (lookahead == '&') SKIP(307);
      END_STATE();
    case 242:
      if (lookahead == '&') ADVANCE(298);
      END_STATE();
    case 243:
      if (lookahead == '&') SKIP(308);
      END_STATE();
    case 244:
      if (lookahead == '&') ADVANCE(299);
      END_STATE();
    case 245:
      if (lookahead == '&') SKIP(309);
      END_STATE();
    case 246:
      if (lookahead == '&') ADVANCE(300);
      END_STATE();
    case 247:
      if (lookahead == '&') SKIP(310);
      END_STATE();
    case 248:
      if (lookahead == '&') ADVANCE(301);
      END_STATE();
    case 249:
      if (lookahead == '&') SKIP(311);
      END_STATE();
    case 250:
      if (lookahead == '&') ADVANCE(302);
      END_STATE();
    case 251:
      if (lookahead == '&') SKIP(312);
      END_STATE();
    case 252:
      if (lookahead == '&') ADVANCE(303);
      END_STATE();
    case 253:
      if (lookahead == '&') SKIP(313);
      END_STATE();
    case 254:
      if (lookahead == '&') SKIP(314);
      END_STATE();
    case 255:
      if (lookahead == '&') SKIP(315);
      END_STATE();
    case 256:
      if (lookahead == '&') SKIP(316);
      END_STATE();
    case 257:
      if (lookahead == '&') SKIP(317);
      END_STATE();
    case 258:
      if (lookahead == '&') SKIP(318);
      END_STATE();
    case 259:
      if (lookahead == '&') SKIP(319);
      END_STATE();
    case 260:
      if (lookahead == '&') SKIP(320);
      END_STATE();
    case 261:
      if (lookahead == '&') SKIP(321);
      END_STATE();
    case 262:
      if (lookahead == '&') SKIP(322);
      END_STATE();
    case 263:
      if (lookahead == '&') SKIP(323);
      END_STATE();
    case 264:
      if (lookahead == '&') SKIP(324);
      END_STATE();
    case 265:
      if (lookahead == '&') SKIP(325);
      END_STATE();
    case 266:
      if (lookahead == '&') SKIP(326);
      END_STATE();
    case 267:
      if (lookahead == '&') SKIP(327);
      END_STATE();
    case 268:
      if (lookahead == '&') SKIP(328);
      END_STATE();
    case 269:
      if (lookahead == '&') SKIP(329);
      END_STATE();
    case 270:
      if (lookahead == '&') SKIP(330);
      END_STATE();
    case 271:
      if (lookahead == '&') SKIP(331);
      END_STATE();
    case 272:
      if (lookahead == '&') SKIP(332);
      END_STATE();
    case 273:
      if (lookahead == '&') SKIP(333);
      END_STATE();
    case 274:
      if (lookahead == '&') SKIP(334);
      END_STATE();
    case 275:
      if (lookahead == '&') SKIP(335);
      END_STATE();
    case 276:
      if (lookahead == '&') SKIP(336);
      END_STATE();
    case 277:
      if (lookahead == '&') SKIP(337);
      END_STATE();
    case 278:
      if (lookahead == '&') SKIP(338);
      END_STATE();
    case 279:
      if (lookahead == '&') SKIP(339);
      END_STATE();
    case 280:
      if (lookahead == '&') SKIP(340);
      END_STATE();
    case 281:
      if (lookahead == '\'') ADVANCE(1055);
      END_STATE();
    case 282:
      if (lookahead == '*') ADVANCE(1436);
      END_STATE();
    case 283:
      if (lookahead == '*') SKIP(20);
      END_STATE();
    case 284:
      if (lookahead == '*') SKIP(342);
      END_STATE();
    case 285:
      if (lookahead == '*') ADVANCE(343);
      END_STATE();
    case 286:
      if (lookahead == '*') SKIP(22);
      END_STATE();
    case 287:
      if (lookahead == '*') SKIP(27);
      END_STATE();
    case 288:
      if (lookahead == '*') SKIP(141);
      END_STATE();
    case 289:
      if (lookahead == '*') SKIP(145);
      END_STATE();
    case 290:
      if (lookahead == '*') SKIP(149);
      END_STATE();
    case 291:
      if (lookahead == '*') SKIP(157);
      END_STATE();
    case 292:
      if (lookahead == '*') SKIP(161);
      END_STATE();
    case 293:
      if (lookahead == '*') SKIP(165);
      END_STATE();
    case 294:
      if (lookahead == '*') ADVANCE(344);
      END_STATE();
    case 295:
      if (lookahead == '*') ADVANCE(345);
      END_STATE();
    case 296:
      if (lookahead == '*') ADVANCE(346);
      END_STATE();
    case 297:
      if (lookahead == '*') ADVANCE(347);
      END_STATE();
    case 298:
      if (lookahead == '*') ADVANCE(348);
      END_STATE();
    case 299:
      if (lookahead == '*') ADVANCE(349);
      END_STATE();
    case 300:
      if (lookahead == '*') ADVANCE(350);
      END_STATE();
    case 301:
      if (lookahead == '*') ADVANCE(351);
      END_STATE();
    case 302:
      if (lookahead == '*') ADVANCE(352);
      END_STATE();
    case 303:
      if (lookahead == '*') ADVANCE(353);
      END_STATE();
    case 304:
      if (lookahead == '*') SKIP(354);
      END_STATE();
    case 305:
      if (lookahead == '*') SKIP(355);
      END_STATE();
    case 306:
      if (lookahead == '*') SKIP(356);
      END_STATE();
    case 307:
      if (lookahead == '*') SKIP(357);
      END_STATE();
    case 308:
      if (lookahead == '*') SKIP(358);
      END_STATE();
    case 309:
      if (lookahead == '*') SKIP(359);
      END_STATE();
    case 310:
      if (lookahead == '*') SKIP(360);
      END_STATE();
    case 311:
      if (lookahead == '*') SKIP(361);
      END_STATE();
    case 312:
      if (lookahead == '*') SKIP(362);
      END_STATE();
    case 313:
      if (lookahead == '*') SKIP(363);
      END_STATE();
    case 314:
      if (lookahead == '*') SKIP(364);
      END_STATE();
    case 315:
      if (lookahead == '*') SKIP(365);
      END_STATE();
    case 316:
      if (lookahead == '*') SKIP(366);
      END_STATE();
    case 317:
      if (lookahead == '*') SKIP(367);
      END_STATE();
    case 318:
      if (lookahead == '*') SKIP(368);
      END_STATE();
    case 319:
      if (lookahead == '*') SKIP(369);
      END_STATE();
    case 320:
      if (lookahead == '*') SKIP(370);
      END_STATE();
    case 321:
      if (lookahead == '*') SKIP(371);
      END_STATE();
    case 322:
      if (lookahead == '*') SKIP(372);
      END_STATE();
    case 323:
      if (lookahead == '*') SKIP(373);
      END_STATE();
    case 324:
      if (lookahead == '*') SKIP(374);
      END_STATE();
    case 325:
      if (lookahead == '*') SKIP(375);
      END_STATE();
    case 326:
      if (lookahead == '*') SKIP(376);
      END_STATE();
    case 327:
      if (lookahead == '*') SKIP(377);
      END_STATE();
    case 328:
      if (lookahead == '*') SKIP(378);
      END_STATE();
    case 329:
      if (lookahead == '*') SKIP(379);
      END_STATE();
    case 330:
      if (lookahead == '*') SKIP(380);
      END_STATE();
    case 331:
      if (lookahead == '*') SKIP(381);
      END_STATE();
    case 332:
      if (lookahead == '*') SKIP(382);
      END_STATE();
    case 333:
      if (lookahead == '*') SKIP(383);
      END_STATE();
    case 334:
      if (lookahead == '*') SKIP(384);
      END_STATE();
    case 335:
      if (lookahead == '*') SKIP(385);
      END_STATE();
    case 336:
      if (lookahead == '*') SKIP(386);
      END_STATE();
    case 337:
      if (lookahead == '*') SKIP(387);
      END_STATE();
    case 338:
      if (lookahead == '*') SKIP(388);
      END_STATE();
    case 339:
      if (lookahead == '*') SKIP(389);
      END_STATE();
    case 340:
      if (lookahead == '*') SKIP(390);
      END_STATE();
    case 341:
      if (lookahead == '+') ADVANCE(1376);
      END_STATE();
    case 342:
      if (lookahead == '+') SKIP(395);
      END_STATE();
    case 343:
      if (lookahead == '+') ADVANCE(396);
      END_STATE();
    case 344:
      if (lookahead == '+') ADVANCE(398);
      END_STATE();
    case 345:
      if (lookahead == '+') ADVANCE(400);
      END_STATE();
    case 346:
      if (lookahead == '+') ADVANCE(402);
      END_STATE();
    case 347:
      if (lookahead == '+') ADVANCE(404);
      END_STATE();
    case 348:
      if (lookahead == '+') ADVANCE(406);
      END_STATE();
    case 349:
      if (lookahead == '+') ADVANCE(408);
      END_STATE();
    case 350:
      if (lookahead == '+') ADVANCE(410);
      END_STATE();
    case 351:
      if (lookahead == '+') ADVANCE(412);
      END_STATE();
    case 352:
      if (lookahead == '+') ADVANCE(414);
      END_STATE();
    case 353:
      if (lookahead == '+') ADVANCE(416);
      END_STATE();
    case 354:
      if (lookahead == '+') SKIP(397);
      END_STATE();
    case 355:
      if (lookahead == '+') SKIP(399);
      END_STATE();
    case 356:
      if (lookahead == '+') SKIP(401);
      END_STATE();
    case 357:
      if (lookahead == '+') SKIP(403);
      END_STATE();
    case 358:
      if (lookahead == '+') SKIP(405);
      END_STATE();
    case 359:
      if (lookahead == '+') SKIP(407);
      END_STATE();
    case 360:
      if (lookahead == '+') SKIP(409);
      END_STATE();
    case 361:
      if (lookahead == '+') SKIP(411);
      END_STATE();
    case 362:
      if (lookahead == '+') SKIP(413);
      END_STATE();
    case 363:
      if (lookahead == '+') SKIP(415);
      END_STATE();
    case 364:
      if (lookahead == '+') SKIP(417);
      END_STATE();
    case 365:
      if (lookahead == '+') SKIP(418);
      END_STATE();
    case 366:
      if (lookahead == '+') SKIP(419);
      END_STATE();
    case 367:
      if (lookahead == '+') SKIP(420);
      END_STATE();
    case 368:
      if (lookahead == '+') SKIP(421);
      END_STATE();
    case 369:
      if (lookahead == '+') SKIP(422);
      END_STATE();
    case 370:
      if (lookahead == '+') SKIP(423);
      END_STATE();
    case 371:
      if (lookahead == '+') SKIP(424);
      END_STATE();
    case 372:
      if (lookahead == '+') SKIP(425);
      END_STATE();
    case 373:
      if (lookahead == '+') SKIP(426);
      END_STATE();
    case 374:
      if (lookahead == '+') SKIP(427);
      END_STATE();
    case 375:
      if (lookahead == '+') SKIP(428);
      END_STATE();
    case 376:
      if (lookahead == '+') SKIP(429);
      END_STATE();
    case 377:
      if (lookahead == '+') SKIP(430);
      END_STATE();
    case 378:
      if (lookahead == '+') SKIP(431);
      END_STATE();
    case 379:
      if (lookahead == '+') SKIP(432);
      END_STATE();
    case 380:
      if (lookahead == '+') SKIP(433);
      END_STATE();
    case 381:
      if (lookahead == '+') SKIP(434);
      END_STATE();
    case 382:
      if (lookahead == '+') SKIP(435);
      END_STATE();
    case 383:
      if (lookahead == '+') SKIP(436);
      END_STATE();
    case 384:
      if (lookahead == '+') SKIP(437);
      END_STATE();
    case 385:
      if (lookahead == '+') SKIP(438);
      END_STATE();
    case 386:
      if (lookahead == '+') SKIP(439);
      END_STATE();
    case 387:
      if (lookahead == '+') SKIP(440);
      END_STATE();
    case 388:
      if (lookahead == '+') SKIP(441);
      END_STATE();
    case 389:
      if (lookahead == '+') SKIP(442);
      END_STATE();
    case 390:
      if (lookahead == '+') SKIP(443);
      END_STATE();
    case 391:
      if (lookahead == ',') ADVANCE(914);
      END_STATE();
    case 392:
      if (lookahead == '-') ADVANCE(1053);
      END_STATE();
    case 393:
      if (lookahead == '-') ADVANCE(1352);
      END_STATE();
    case 394:
      if (lookahead == '-') ADVANCE(1351);
      END_STATE();
    case 395:
      if (lookahead == '-') SKIP(446);
      END_STATE();
    case 396:
      if (lookahead == '-') ADVANCE(444);
      END_STATE();
    case 397:
      if (lookahead == '-') SKIP(448);
      END_STATE();
    case 398:
      if (lookahead == '-') ADVANCE(447);
      END_STATE();
    case 399:
      if (lookahead == '-') SKIP(450);
      END_STATE();
    case 400:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 401:
      if (lookahead == '-') SKIP(452);
      END_STATE();
    case 402:
      if (lookahead == '-') ADVANCE(451);
      END_STATE();
    case 403:
      if (lookahead == '-') SKIP(454);
      END_STATE();
    case 404:
      if (lookahead == '-') ADVANCE(453);
      END_STATE();
    case 405:
      if (lookahead == '-') SKIP(456);
      END_STATE();
    case 406:
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 407:
      if (lookahead == '-') SKIP(458);
      END_STATE();
    case 408:
      if (lookahead == '-') ADVANCE(457);
      END_STATE();
    case 409:
      if (lookahead == '-') SKIP(460);
      END_STATE();
    case 410:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 411:
      if (lookahead == '-') SKIP(462);
      END_STATE();
    case 412:
      if (lookahead == '-') ADVANCE(461);
      END_STATE();
    case 413:
      if (lookahead == '-') SKIP(464);
      END_STATE();
    case 414:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 415:
      if (lookahead == '-') SKIP(466);
      END_STATE();
    case 416:
      if (lookahead == '-') ADVANCE(465);
      END_STATE();
    case 417:
      if (lookahead == '-') SKIP(467);
      END_STATE();
    case 418:
      if (lookahead == '-') SKIP(468);
      END_STATE();
    case 419:
      if (lookahead == '-') SKIP(469);
      END_STATE();
    case 420:
      if (lookahead == '-') SKIP(470);
      END_STATE();
    case 421:
      if (lookahead == '-') SKIP(471);
      END_STATE();
    case 422:
      if (lookahead == '-') SKIP(472);
      END_STATE();
    case 423:
      if (lookahead == '-') SKIP(473);
      END_STATE();
    case 424:
      if (lookahead == '-') SKIP(474);
      END_STATE();
    case 425:
      if (lookahead == '-') SKIP(475);
      END_STATE();
    case 426:
      if (lookahead == '-') SKIP(476);
      END_STATE();
    case 427:
      if (lookahead == '-') SKIP(477);
      END_STATE();
    case 428:
      if (lookahead == '-') SKIP(478);
      END_STATE();
    case 429:
      if (lookahead == '-') SKIP(479);
      END_STATE();
    case 430:
      if (lookahead == '-') SKIP(480);
      END_STATE();
    case 431:
      if (lookahead == '-') SKIP(481);
      END_STATE();
    case 432:
      if (lookahead == '-') SKIP(482);
      END_STATE();
    case 433:
      if (lookahead == '-') SKIP(483);
      END_STATE();
    case 434:
      if (lookahead == '-') SKIP(484);
      END_STATE();
    case 435:
      if (lookahead == '-') SKIP(485);
      END_STATE();
    case 436:
      if (lookahead == '-') SKIP(486);
      END_STATE();
    case 437:
      if (lookahead == '-') SKIP(487);
      END_STATE();
    case 438:
      if (lookahead == '-') SKIP(488);
      END_STATE();
    case 439:
      if (lookahead == '-') SKIP(489);
      END_STATE();
    case 440:
      if (lookahead == '-') SKIP(490);
      END_STATE();
    case 441:
      if (lookahead == '-') SKIP(491);
      END_STATE();
    case 442:
      if (lookahead == '-') SKIP(492);
      END_STATE();
    case 443:
      if (lookahead == '-') SKIP(493);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(496);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(1377);
      END_STATE();
    case 446:
      if (lookahead == '.') SKIP(495);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(516);
      END_STATE();
    case 448:
      if (lookahead == '.') SKIP(526);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(517);
      END_STATE();
    case 450:
      if (lookahead == '.') SKIP(527);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(518);
      END_STATE();
    case 452:
      if (lookahead == '.') SKIP(528);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(519);
      END_STATE();
    case 454:
      if (lookahead == '.') SKIP(529);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(520);
      END_STATE();
    case 456:
      if (lookahead == '.') SKIP(530);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(521);
      END_STATE();
    case 458:
      if (lookahead == '.') SKIP(531);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(522);
      END_STATE();
    case 460:
      if (lookahead == '.') SKIP(532);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(523);
      END_STATE();
    case 462:
      if (lookahead == '.') SKIP(533);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(524);
      END_STATE();
    case 464:
      if (lookahead == '.') SKIP(534);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(525);
      END_STATE();
    case 466:
      if (lookahead == '.') SKIP(535);
      END_STATE();
    case 467:
      if (lookahead == '.') SKIP(536);
      END_STATE();
    case 468:
      if (lookahead == '.') SKIP(537);
      END_STATE();
    case 469:
      if (lookahead == '.') SKIP(538);
      END_STATE();
    case 470:
      if (lookahead == '.') SKIP(539);
      END_STATE();
    case 471:
      if (lookahead == '.') SKIP(540);
      END_STATE();
    case 472:
      if (lookahead == '.') SKIP(541);
      END_STATE();
    case 473:
      if (lookahead == '.') SKIP(542);
      END_STATE();
    case 474:
      if (lookahead == '.') SKIP(543);
      END_STATE();
    case 475:
      if (lookahead == '.') SKIP(544);
      END_STATE();
    case 476:
      if (lookahead == '.') SKIP(545);
      END_STATE();
    case 477:
      if (lookahead == '.') SKIP(546);
      END_STATE();
    case 478:
      if (lookahead == '.') SKIP(547);
      END_STATE();
    case 479:
      if (lookahead == '.') SKIP(548);
      END_STATE();
    case 480:
      if (lookahead == '.') SKIP(549);
      END_STATE();
    case 481:
      if (lookahead == '.') SKIP(550);
      END_STATE();
    case 482:
      if (lookahead == '.') SKIP(551);
      END_STATE();
    case 483:
      if (lookahead == '.') SKIP(552);
      END_STATE();
    case 484:
      if (lookahead == '.') SKIP(553);
      END_STATE();
    case 485:
      if (lookahead == '.') SKIP(554);
      END_STATE();
    case 486:
      if (lookahead == '.') SKIP(555);
      END_STATE();
    case 487:
      if (lookahead == '.') SKIP(556);
      END_STATE();
    case 488:
      if (lookahead == '.') SKIP(557);
      END_STATE();
    case 489:
      if (lookahead == '.') SKIP(558);
      END_STATE();
    case 490:
      if (lookahead == '.') SKIP(559);
      END_STATE();
    case 491:
      if (lookahead == '.') SKIP(560);
      END_STATE();
    case 492:
      if (lookahead == '.') SKIP(561);
      END_STATE();
    case 493:
      if (lookahead == '.') SKIP(562);
      END_STATE();
    case 494:
      if (lookahead == '/') SKIP(215);
      END_STATE();
    case 495:
      if (lookahead == '/') SKIP(563);
      END_STATE();
    case 496:
      if (lookahead == '/') ADVANCE(564);
      END_STATE();
    case 497:
      if (lookahead == '/') SKIP(11);
      END_STATE();
    case 498:
      if (lookahead == '/') SKIP(216);
      END_STATE();
    case 499:
      if (lookahead == '/') ADVANCE(1392);
      if (lookahead == '=') ADVANCE(1390);
      END_STATE();
    case 500:
      if (lookahead == '/') SKIP(217);
      END_STATE();
    case 501:
      if (lookahead == '/') SKIP(218);
      END_STATE();
    case 502:
      if (lookahead == '/') SKIP(219);
      END_STATE();
    case 503:
      if (lookahead == '/') SKIP(220);
      END_STATE();
    case 504:
      if (lookahead == '/') SKIP(221);
      END_STATE();
    case 505:
      if (lookahead == '/') SKIP(222);
      END_STATE();
    case 506:
      if (lookahead == '/') SKIP(223);
      END_STATE();
    case 507:
      if (lookahead == '/') SKIP(224);
      END_STATE();
    case 508:
      if (lookahead == '/') SKIP(225);
      END_STATE();
    case 509:
      if (lookahead == '/') SKIP(226);
      END_STATE();
    case 510:
      if (lookahead == '/') SKIP(227);
      END_STATE();
    case 511:
      if (lookahead == '/') SKIP(228);
      END_STATE();
    case 512:
      if (lookahead == '/') SKIP(229);
      END_STATE();
    case 513:
      if (lookahead == '/') SKIP(230);
      END_STATE();
    case 514:
      if (lookahead == '/') SKIP(231);
      END_STATE();
    case 515:
      if (lookahead == '/') SKIP(12);
      END_STATE();
    case 516:
      if (lookahead == '/') ADVANCE(565);
      END_STATE();
    case 517:
      if (lookahead == '/') ADVANCE(566);
      END_STATE();
    case 518:
      if (lookahead == '/') ADVANCE(567);
      END_STATE();
    case 519:
      if (lookahead == '/') ADVANCE(568);
      END_STATE();
    case 520:
      if (lookahead == '/') ADVANCE(569);
      END_STATE();
    case 521:
      if (lookahead == '/') ADVANCE(570);
      END_STATE();
    case 522:
      if (lookahead == '/') ADVANCE(571);
      END_STATE();
    case 523:
      if (lookahead == '/') ADVANCE(572);
      END_STATE();
    case 524:
      if (lookahead == '/') ADVANCE(573);
      END_STATE();
    case 525:
      if (lookahead == '/') ADVANCE(574);
      END_STATE();
    case 526:
      if (lookahead == '/') SKIP(575);
      END_STATE();
    case 527:
      if (lookahead == '/') SKIP(576);
      END_STATE();
    case 528:
      if (lookahead == '/') SKIP(577);
      END_STATE();
    case 529:
      if (lookahead == '/') SKIP(578);
      END_STATE();
    case 530:
      if (lookahead == '/') SKIP(579);
      END_STATE();
    case 531:
      if (lookahead == '/') SKIP(580);
      END_STATE();
    case 532:
      if (lookahead == '/') SKIP(581);
      END_STATE();
    case 533:
      if (lookahead == '/') SKIP(582);
      END_STATE();
    case 534:
      if (lookahead == '/') SKIP(583);
      END_STATE();
    case 535:
      if (lookahead == '/') SKIP(584);
      END_STATE();
    case 536:
      if (lookahead == '/') SKIP(585);
      END_STATE();
    case 537:
      if (lookahead == '/') SKIP(586);
      END_STATE();
    case 538:
      if (lookahead == '/') SKIP(587);
      END_STATE();
    case 539:
      if (lookahead == '/') SKIP(588);
      END_STATE();
    case 540:
      if (lookahead == '/') SKIP(589);
      END_STATE();
    case 541:
      if (lookahead == '/') SKIP(590);
      END_STATE();
    case 542:
      if (lookahead == '/') SKIP(591);
      END_STATE();
    case 543:
      if (lookahead == '/') SKIP(592);
      END_STATE();
    case 544:
      if (lookahead == '/') SKIP(593);
      END_STATE();
    case 545:
      if (lookahead == '/') SKIP(594);
      END_STATE();
    case 546:
      if (lookahead == '/') SKIP(595);
      END_STATE();
    case 547:
      if (lookahead == '/') SKIP(596);
      END_STATE();
    case 548:
      if (lookahead == '/') SKIP(597);
      END_STATE();
    case 549:
      if (lookahead == '/') SKIP(598);
      END_STATE();
    case 550:
      if (lookahead == '/') SKIP(599);
      END_STATE();
    case 551:
      if (lookahead == '/') SKIP(600);
      END_STATE();
    case 552:
      if (lookahead == '/') SKIP(601);
      END_STATE();
    case 553:
      if (lookahead == '/') SKIP(602);
      END_STATE();
    case 554:
      if (lookahead == '/') SKIP(603);
      END_STATE();
    case 555:
      if (lookahead == '/') SKIP(604);
      END_STATE();
    case 556:
      if (lookahead == '/') SKIP(605);
      END_STATE();
    case 557:
      if (lookahead == '/') SKIP(606);
      END_STATE();
    case 558:
      if (lookahead == '/') SKIP(607);
      END_STATE();
    case 559:
      if (lookahead == '/') SKIP(608);
      END_STATE();
    case 560:
      if (lookahead == '/') SKIP(609);
      END_STATE();
    case 561:
      if (lookahead == '/') SKIP(610);
      END_STATE();
    case 562:
      if (lookahead == '/') SKIP(611);
      END_STATE();
    case 563:
      if (lookahead == ':') SKIP(612);
      END_STATE();
    case 564:
      if (lookahead == ':') ADVANCE(613);
      END_STATE();
    case 565:
      if (lookahead == ':') ADVANCE(616);
      END_STATE();
    case 566:
      if (lookahead == ':') ADVANCE(617);
      END_STATE();
    case 567:
      if (lookahead == ':') ADVANCE(618);
      END_STATE();
    case 568:
      if (lookahead == ':') ADVANCE(619);
      END_STATE();
    case 569:
      if (lookahead == ':') ADVANCE(620);
      END_STATE();
    case 570:
      if (lookahead == ':') ADVANCE(621);
      END_STATE();
    case 571:
      if (lookahead == ':') ADVANCE(622);
      END_STATE();
    case 572:
      if (lookahead == ':') ADVANCE(623);
      END_STATE();
    case 573:
      if (lookahead == ':') ADVANCE(624);
      END_STATE();
    case 574:
      if (lookahead == ':') ADVANCE(625);
      END_STATE();
    case 575:
      if (lookahead == ':') SKIP(626);
      END_STATE();
    case 576:
      if (lookahead == ':') SKIP(627);
      END_STATE();
    case 577:
      if (lookahead == ':') SKIP(628);
      END_STATE();
    case 578:
      if (lookahead == ':') SKIP(629);
      END_STATE();
    case 579:
      if (lookahead == ':') SKIP(630);
      END_STATE();
    case 580:
      if (lookahead == ':') SKIP(631);
      END_STATE();
    case 581:
      if (lookahead == ':') SKIP(632);
      END_STATE();
    case 582:
      if (lookahead == ':') SKIP(633);
      END_STATE();
    case 583:
      if (lookahead == ':') SKIP(634);
      END_STATE();
    case 584:
      if (lookahead == ':') SKIP(635);
      END_STATE();
    case 585:
      if (lookahead == ':') SKIP(636);
      END_STATE();
    case 586:
      if (lookahead == ':') SKIP(637);
      END_STATE();
    case 587:
      if (lookahead == ':') SKIP(638);
      END_STATE();
    case 588:
      if (lookahead == ':') SKIP(639);
      END_STATE();
    case 589:
      if (lookahead == ':') SKIP(640);
      END_STATE();
    case 590:
      if (lookahead == ':') SKIP(641);
      END_STATE();
    case 591:
      if (lookahead == ':') SKIP(642);
      END_STATE();
    case 592:
      if (lookahead == ':') SKIP(643);
      END_STATE();
    case 593:
      if (lookahead == ':') SKIP(644);
      END_STATE();
    case 594:
      if (lookahead == ':') SKIP(645);
      END_STATE();
    case 595:
      if (lookahead == ':') SKIP(646);
      END_STATE();
    case 596:
      if (lookahead == ':') SKIP(647);
      END_STATE();
    case 597:
      if (lookahead == ':') SKIP(648);
      END_STATE();
    case 598:
      if (lookahead == ':') SKIP(649);
      END_STATE();
    case 599:
      if (lookahead == ':') SKIP(650);
      END_STATE();
    case 600:
      if (lookahead == ':') SKIP(651);
      END_STATE();
    case 601:
      if (lookahead == ':') SKIP(652);
      END_STATE();
    case 602:
      if (lookahead == ':') SKIP(653);
      END_STATE();
    case 603:
      if (lookahead == ':') SKIP(654);
      END_STATE();
    case 604:
      if (lookahead == ':') SKIP(655);
      END_STATE();
    case 605:
      if (lookahead == ':') SKIP(656);
      END_STATE();
    case 606:
      if (lookahead == ':') SKIP(657);
      END_STATE();
    case 607:
      if (lookahead == ':') SKIP(658);
      END_STATE();
    case 608:
      if (lookahead == ':') SKIP(659);
      END_STATE();
    case 609:
      if (lookahead == ':') SKIP(660);
      END_STATE();
    case 610:
      if (lookahead == ':') SKIP(661);
      END_STATE();
    case 611:
      if (lookahead == ':') SKIP(662);
      END_STATE();
    case 612:
      if (lookahead == '<') SKIP(663);
      END_STATE();
    case 613:
      if (lookahead == '<') ADVANCE(665);
      END_STATE();
    case 614:
      if (lookahead == '<') ADVANCE(1377);
      END_STATE();
    case 615:
      if (lookahead == '<') ADVANCE(1377);
      if (lookahead == '=') ADVANCE(614);
      if (lookahead == '>') ADVANCE(1390);
      END_STATE();
    case 616:
      if (lookahead == '<') ADVANCE(666);
      END_STATE();
    case 617:
      if (lookahead == '<') ADVANCE(667);
      END_STATE();
    case 618:
      if (lookahead == '<') ADVANCE(668);
      END_STATE();
    case 619:
      if (lookahead == '<') ADVANCE(669);
      END_STATE();
    case 620:
      if (lookahead == '<') ADVANCE(670);
      END_STATE();
    case 621:
      if (lookahead == '<') ADVANCE(671);
      END_STATE();
    case 622:
      if (lookahead == '<') ADVANCE(672);
      END_STATE();
    case 623:
      if (lookahead == '<') ADVANCE(673);
      END_STATE();
    case 624:
      if (lookahead == '<') ADVANCE(674);
      END_STATE();
    case 625:
      if (lookahead == '<') ADVANCE(675);
      END_STATE();
    case 626:
      if (lookahead == '<') SKIP(676);
      END_STATE();
    case 627:
      if (lookahead == '<') SKIP(677);
      END_STATE();
    case 628:
      if (lookahead == '<') SKIP(678);
      END_STATE();
    case 629:
      if (lookahead == '<') SKIP(679);
      END_STATE();
    case 630:
      if (lookahead == '<') SKIP(680);
      END_STATE();
    case 631:
      if (lookahead == '<') SKIP(681);
      END_STATE();
    case 632:
      if (lookahead == '<') SKIP(682);
      END_STATE();
    case 633:
      if (lookahead == '<') SKIP(683);
      END_STATE();
    case 634:
      if (lookahead == '<') SKIP(684);
      END_STATE();
    case 635:
      if (lookahead == '<') SKIP(685);
      END_STATE();
    case 636:
      if (lookahead == '<') SKIP(686);
      END_STATE();
    case 637:
      if (lookahead == '<') SKIP(687);
      END_STATE();
    case 638:
      if (lookahead == '<') SKIP(688);
      END_STATE();
    case 639:
      if (lookahead == '<') SKIP(689);
      END_STATE();
    case 640:
      if (lookahead == '<') SKIP(690);
      END_STATE();
    case 641:
      if (lookahead == '<') SKIP(691);
      END_STATE();
    case 642:
      if (lookahead == '<') SKIP(692);
      END_STATE();
    case 643:
      if (lookahead == '<') SKIP(693);
      END_STATE();
    case 644:
      if (lookahead == '<') SKIP(694);
      END_STATE();
    case 645:
      if (lookahead == '<') SKIP(695);
      END_STATE();
    case 646:
      if (lookahead == '<') SKIP(696);
      END_STATE();
    case 647:
      if (lookahead == '<') SKIP(697);
      END_STATE();
    case 648:
      if (lookahead == '<') SKIP(698);
      END_STATE();
    case 649:
      if (lookahead == '<') SKIP(699);
      END_STATE();
    case 650:
      if (lookahead == '<') SKIP(700);
      END_STATE();
    case 651:
      if (lookahead == '<') SKIP(701);
      END_STATE();
    case 652:
      if (lookahead == '<') SKIP(702);
      END_STATE();
    case 653:
      if (lookahead == '<') SKIP(703);
      END_STATE();
    case 654:
      if (lookahead == '<') SKIP(704);
      END_STATE();
    case 655:
      if (lookahead == '<') SKIP(705);
      END_STATE();
    case 656:
      if (lookahead == '<') SKIP(706);
      END_STATE();
    case 657:
      if (lookahead == '<') SKIP(707);
      END_STATE();
    case 658:
      if (lookahead == '<') SKIP(708);
      END_STATE();
    case 659:
      if (lookahead == '<') SKIP(709);
      END_STATE();
    case 660:
      if (lookahead == '<') SKIP(710);
      END_STATE();
    case 661:
      if (lookahead == '<') SKIP(711);
      END_STATE();
    case 662:
      if (lookahead == '<') SKIP(712);
      END_STATE();
    case 663:
      if (lookahead == '=') SKIP(714);
      END_STATE();
    case 664:
      if (lookahead == '=') ADVANCE(1377);
      END_STATE();
    case 665:
      if (lookahead == '=') ADVANCE(715);
      END_STATE();
    case 666:
      if (lookahead == '=') ADVANCE(717);
      END_STATE();
    case 667:
      if (lookahead == '=') ADVANCE(719);
      END_STATE();
    case 668:
      if (lookahead == '=') ADVANCE(721);
      END_STATE();
    case 669:
      if (lookahead == '=') ADVANCE(723);
      END_STATE();
    case 670:
      if (lookahead == '=') ADVANCE(725);
      END_STATE();
    case 671:
      if (lookahead == '=') ADVANCE(727);
      END_STATE();
    case 672:
      if (lookahead == '=') ADVANCE(729);
      END_STATE();
    case 673:
      if (lookahead == '=') ADVANCE(731);
      END_STATE();
    case 674:
      if (lookahead == '=') ADVANCE(733);
      END_STATE();
    case 675:
      if (lookahead == '=') ADVANCE(735);
      END_STATE();
    case 676:
      if (lookahead == '=') SKIP(716);
      END_STATE();
    case 677:
      if (lookahead == '=') SKIP(718);
      END_STATE();
    case 678:
      if (lookahead == '=') SKIP(720);
      END_STATE();
    case 679:
      if (lookahead == '=') SKIP(722);
      END_STATE();
    case 680:
      if (lookahead == '=') SKIP(724);
      END_STATE();
    case 681:
      if (lookahead == '=') SKIP(726);
      END_STATE();
    case 682:
      if (lookahead == '=') SKIP(728);
      END_STATE();
    case 683:
      if (lookahead == '=') SKIP(730);
      END_STATE();
    case 684:
      if (lookahead == '=') SKIP(732);
      END_STATE();
    case 685:
      if (lookahead == '=') SKIP(734);
      END_STATE();
    case 686:
      if (lookahead == '=') SKIP(736);
      END_STATE();
    case 687:
      if (lookahead == '=') SKIP(737);
      END_STATE();
    case 688:
      if (lookahead == '=') SKIP(738);
      END_STATE();
    case 689:
      if (lookahead == '=') SKIP(739);
      END_STATE();
    case 690:
      if (lookahead == '=') SKIP(740);
      END_STATE();
    case 691:
      if (lookahead == '=') SKIP(741);
      END_STATE();
    case 692:
      if (lookahead == '=') SKIP(742);
      END_STATE();
    case 693:
      if (lookahead == '=') SKIP(743);
      END_STATE();
    case 694:
      if (lookahead == '=') SKIP(744);
      END_STATE();
    case 695:
      if (lookahead == '=') SKIP(745);
      END_STATE();
    case 696:
      if (lookahead == '=') SKIP(746);
      END_STATE();
    case 697:
      if (lookahead == '=') SKIP(747);
      END_STATE();
    case 698:
      if (lookahead == '=') SKIP(748);
      END_STATE();
    case 699:
      if (lookahead == '=') SKIP(749);
      END_STATE();
    case 700:
      if (lookahead == '=') SKIP(750);
      END_STATE();
    case 701:
      if (lookahead == '=') SKIP(751);
      END_STATE();
    case 702:
      if (lookahead == '=') SKIP(752);
      END_STATE();
    case 703:
      if (lookahead == '=') SKIP(753);
      END_STATE();
    case 704:
      if (lookahead == '=') SKIP(754);
      END_STATE();
    case 705:
      if (lookahead == '=') SKIP(755);
      END_STATE();
    case 706:
      if (lookahead == '=') SKIP(756);
      END_STATE();
    case 707:
      if (lookahead == '=') SKIP(757);
      END_STATE();
    case 708:
      if (lookahead == '=') SKIP(758);
      END_STATE();
    case 709:
      if (lookahead == '=') SKIP(759);
      END_STATE();
    case 710:
      if (lookahead == '=') SKIP(760);
      END_STATE();
    case 711:
      if (lookahead == '=') SKIP(761);
      END_STATE();
    case 712:
      if (lookahead == '=') SKIP(762);
      END_STATE();
    case 713:
      if (lookahead == '>') ADVANCE(1351);
      END_STATE();
    case 714:
      if (lookahead == '>') SKIP(763);
      END_STATE();
    case 715:
      if (lookahead == '>') ADVANCE(764);
      END_STATE();
    case 716:
      if (lookahead == '>') SKIP(765);
      END_STATE();
    case 717:
      if (lookahead == '>') ADVANCE(766);
      END_STATE();
    case 718:
      if (lookahead == '>') SKIP(767);
      END_STATE();
    case 719:
      if (lookahead == '>') ADVANCE(768);
      END_STATE();
    case 720:
      if (lookahead == '>') SKIP(769);
      END_STATE();
    case 721:
      if (lookahead == '>') ADVANCE(770);
      END_STATE();
    case 722:
      if (lookahead == '>') SKIP(771);
      END_STATE();
    case 723:
      if (lookahead == '>') ADVANCE(772);
      END_STATE();
    case 724:
      if (lookahead == '>') SKIP(773);
      END_STATE();
    case 725:
      if (lookahead == '>') ADVANCE(774);
      END_STATE();
    case 726:
      if (lookahead == '>') SKIP(775);
      END_STATE();
    case 727:
      if (lookahead == '>') ADVANCE(776);
      END_STATE();
    case 728:
      if (lookahead == '>') SKIP(777);
      END_STATE();
    case 729:
      if (lookahead == '>') ADVANCE(778);
      END_STATE();
    case 730:
      if (lookahead == '>') SKIP(779);
      END_STATE();
    case 731:
      if (lookahead == '>') ADVANCE(780);
      END_STATE();
    case 732:
      if (lookahead == '>') SKIP(781);
      END_STATE();
    case 733:
      if (lookahead == '>') ADVANCE(782);
      END_STATE();
    case 734:
      if (lookahead == '>') SKIP(783);
      END_STATE();
    case 735:
      if (lookahead == '>') ADVANCE(784);
      END_STATE();
    case 736:
      if (lookahead == '>') SKIP(785);
      END_STATE();
    case 737:
      if (lookahead == '>') SKIP(786);
      END_STATE();
    case 738:
      if (lookahead == '>') SKIP(787);
      END_STATE();
    case 739:
      if (lookahead == '>') SKIP(788);
      END_STATE();
    case 740:
      if (lookahead == '>') SKIP(789);
      END_STATE();
    case 741:
      if (lookahead == '>') SKIP(790);
      END_STATE();
    case 742:
      if (lookahead == '>') SKIP(791);
      END_STATE();
    case 743:
      if (lookahead == '>') SKIP(792);
      END_STATE();
    case 744:
      if (lookahead == '>') SKIP(793);
      END_STATE();
    case 745:
      if (lookahead == '>') SKIP(794);
      END_STATE();
    case 746:
      if (lookahead == '>') SKIP(795);
      END_STATE();
    case 747:
      if (lookahead == '>') SKIP(796);
      END_STATE();
    case 748:
      if (lookahead == '>') SKIP(797);
      END_STATE();
    case 749:
      if (lookahead == '>') SKIP(798);
      END_STATE();
    case 750:
      if (lookahead == '>') SKIP(799);
      END_STATE();
    case 751:
      if (lookahead == '>') SKIP(800);
      END_STATE();
    case 752:
      if (lookahead == '>') SKIP(801);
      END_STATE();
    case 753:
      if (lookahead == '>') SKIP(802);
      END_STATE();
    case 754:
      if (lookahead == '>') SKIP(803);
      END_STATE();
    case 755:
      if (lookahead == '>') SKIP(804);
      END_STATE();
    case 756:
      if (lookahead == '>') SKIP(805);
      END_STATE();
    case 757:
      if (lookahead == '>') SKIP(806);
      END_STATE();
    case 758:
      if (lookahead == '>') SKIP(807);
      END_STATE();
    case 759:
      if (lookahead == '>') SKIP(808);
      END_STATE();
    case 760:
      if (lookahead == '>') SKIP(809);
      END_STATE();
    case 761:
      if (lookahead == '>') SKIP(810);
      END_STATE();
    case 762:
      if (lookahead == '>') SKIP(811);
      END_STATE();
    case 763:
      if (lookahead == '?') SKIP(812);
      END_STATE();
    case 764:
      if (lookahead == '?') ADVANCE(813);
      END_STATE();
    case 765:
      if (lookahead == '?') SKIP(814);
      END_STATE();
    case 766:
      if (lookahead == '?') ADVANCE(815);
      END_STATE();
    case 767:
      if (lookahead == '?') SKIP(816);
      END_STATE();
    case 768:
      if (lookahead == '?') ADVANCE(817);
      END_STATE();
    case 769:
      if (lookahead == '?') SKIP(818);
      END_STATE();
    case 770:
      if (lookahead == '?') ADVANCE(819);
      END_STATE();
    case 771:
      if (lookahead == '?') SKIP(820);
      END_STATE();
    case 772:
      if (lookahead == '?') ADVANCE(821);
      END_STATE();
    case 773:
      if (lookahead == '?') SKIP(822);
      END_STATE();
    case 774:
      if (lookahead == '?') ADVANCE(823);
      END_STATE();
    case 775:
      if (lookahead == '?') SKIP(824);
      END_STATE();
    case 776:
      if (lookahead == '?') ADVANCE(825);
      END_STATE();
    case 777:
      if (lookahead == '?') SKIP(826);
      END_STATE();
    case 778:
      if (lookahead == '?') ADVANCE(827);
      END_STATE();
    case 779:
      if (lookahead == '?') SKIP(828);
      END_STATE();
    case 780:
      if (lookahead == '?') ADVANCE(829);
      END_STATE();
    case 781:
      if (lookahead == '?') SKIP(830);
      END_STATE();
    case 782:
      if (lookahead == '?') ADVANCE(831);
      END_STATE();
    case 783:
      if (lookahead == '?') SKIP(832);
      END_STATE();
    case 784:
      if (lookahead == '?') ADVANCE(833);
      END_STATE();
    case 785:
      if (lookahead == '?') SKIP(834);
      END_STATE();
    case 786:
      if (lookahead == '?') SKIP(835);
      END_STATE();
    case 787:
      if (lookahead == '?') SKIP(836);
      END_STATE();
    case 788:
      if (lookahead == '?') SKIP(837);
      END_STATE();
    case 789:
      if (lookahead == '?') SKIP(838);
      END_STATE();
    case 790:
      if (lookahead == '?') SKIP(839);
      END_STATE();
    case 791:
      if (lookahead == '?') SKIP(840);
      END_STATE();
    case 792:
      if (lookahead == '?') SKIP(841);
      END_STATE();
    case 793:
      if (lookahead == '?') SKIP(842);
      END_STATE();
    case 794:
      if (lookahead == '?') SKIP(843);
      END_STATE();
    case 795:
      if (lookahead == '?') SKIP(844);
      END_STATE();
    case 796:
      if (lookahead == '?') SKIP(845);
      END_STATE();
    case 797:
      if (lookahead == '?') SKIP(846);
      END_STATE();
    case 798:
      if (lookahead == '?') SKIP(847);
      END_STATE();
    case 799:
      if (lookahead == '?') SKIP(848);
      END_STATE();
    case 800:
      if (lookahead == '?') SKIP(849);
      END_STATE();
    case 801:
      if (lookahead == '?') SKIP(850);
      END_STATE();
    case 802:
      if (lookahead == '?') SKIP(851);
      END_STATE();
    case 803:
      if (lookahead == '?') SKIP(852);
      END_STATE();
    case 804:
      if (lookahead == '?') SKIP(853);
      END_STATE();
    case 805:
      if (lookahead == '?') SKIP(854);
      END_STATE();
    case 806:
      if (lookahead == '?') SKIP(855);
      END_STATE();
    case 807:
      if (lookahead == '?') SKIP(856);
      END_STATE();
    case 808:
      if (lookahead == '?') SKIP(857);
      END_STATE();
    case 809:
      if (lookahead == '?') SKIP(858);
      END_STATE();
    case 810:
      if (lookahead == '?') SKIP(859);
      END_STATE();
    case 811:
      if (lookahead == '?') SKIP(860);
      END_STATE();
    case 812:
      if (lookahead == '@') SKIP(865);
      END_STATE();
    case 813:
      if (lookahead == '@') ADVANCE(866);
      END_STATE();
    case 814:
      if (lookahead == '@') SKIP(867);
      END_STATE();
    case 815:
      if (lookahead == '@') ADVANCE(868);
      END_STATE();
    case 816:
      if (lookahead == '@') SKIP(895);
      END_STATE();
    case 817:
      if (lookahead == '@') ADVANCE(870);
      END_STATE();
    case 818:
      if (lookahead == '@') SKIP(869);
      END_STATE();
    case 819:
      if (lookahead == '@') ADVANCE(872);
      END_STATE();
    case 820:
      if (lookahead == '@') SKIP(871);
      END_STATE();
    case 821:
      if (lookahead == '@') ADVANCE(874);
      END_STATE();
    case 822:
      if (lookahead == '@') SKIP(897);
      END_STATE();
    case 823:
      if (lookahead == '@') ADVANCE(876);
      END_STATE();
    case 824:
      if (lookahead == '@') SKIP(873);
      END_STATE();
    case 825:
      if (lookahead == '@') ADVANCE(878);
      END_STATE();
    case 826:
      if (lookahead == '@') SKIP(898);
      END_STATE();
    case 827:
      if (lookahead == '@') ADVANCE(880);
      END_STATE();
    case 828:
      if (lookahead == '@') SKIP(875);
      END_STATE();
    case 829:
      if (lookahead == '@') ADVANCE(882);
      END_STATE();
    case 830:
      if (lookahead == '@') SKIP(899);
      END_STATE();
    case 831:
      if (lookahead == '@') ADVANCE(884);
      END_STATE();
    case 832:
      if (lookahead == '@') SKIP(877);
      END_STATE();
    case 833:
      if (lookahead == '@') ADVANCE(896);
      END_STATE();
    case 834:
      if (lookahead == '@') SKIP(900);
      END_STATE();
    case 835:
      if (lookahead == '@') SKIP(879);
      END_STATE();
    case 836:
      if (lookahead == '@') SKIP(901);
      END_STATE();
    case 837:
      if (lookahead == '@') SKIP(881);
      END_STATE();
    case 838:
      if (lookahead == '@') SKIP(902);
      END_STATE();
    case 839:
      if (lookahead == '@') SKIP(883);
      END_STATE();
    case 840:
      if (lookahead == '@') SKIP(903);
      END_STATE();
    case 841:
      if (lookahead == '@') SKIP(885);
      END_STATE();
    case 842:
      if (lookahead == '@') SKIP(904);
      END_STATE();
    case 843:
      if (lookahead == '@') SKIP(886);
      END_STATE();
    case 844:
      if (lookahead == '@') SKIP(905);
      END_STATE();
    case 845:
      if (lookahead == '@') SKIP(887);
      END_STATE();
    case 846:
      if (lookahead == '@') SKIP(906);
      END_STATE();
    case 847:
      if (lookahead == '@') SKIP(888);
      END_STATE();
    case 848:
      if (lookahead == '@') SKIP(907);
      END_STATE();
    case 849:
      if (lookahead == '@') SKIP(889);
      END_STATE();
    case 850:
      if (lookahead == '@') SKIP(908);
      END_STATE();
    case 851:
      if (lookahead == '@') SKIP(890);
      END_STATE();
    case 852:
      if (lookahead == '@') SKIP(909);
      END_STATE();
    case 853:
      if (lookahead == '@') SKIP(891);
      END_STATE();
    case 854:
      if (lookahead == '@') SKIP(910);
      END_STATE();
    case 855:
      if (lookahead == '@') SKIP(892);
      END_STATE();
    case 856:
      if (lookahead == '@') SKIP(911);
      END_STATE();
    case 857:
      if (lookahead == '@') SKIP(893);
      END_STATE();
    case 858:
      if (lookahead == '@') SKIP(912);
      END_STATE();
    case 859:
      if (lookahead == '@') SKIP(894);
      END_STATE();
    case 860:
      if (lookahead == '@') SKIP(913);
      END_STATE();
    case 861:
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(861);
      END_STATE();
    case 862:
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 863:
      if (lookahead == '\\') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(863);
      END_STATE();
    case 864:
      if (lookahead == '\\') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 865:
      if (lookahead == '^') SKIP(922);
      END_STATE();
    case 866:
      if (lookahead == '^') ADVANCE(926);
      END_STATE();
    case 867:
      if (lookahead == '^') SKIP(923);
      END_STATE();
    case 868:
      if (lookahead == '^') ADVANCE(924);
      END_STATE();
    case 869:
      if (lookahead == '^') SKIP(929);
      END_STATE();
    case 870:
      if (lookahead == '^') ADVANCE(925);
      END_STATE();
    case 871:
      if (lookahead == '^') SKIP(946);
      END_STATE();
    case 872:
      if (lookahead == '^') ADVANCE(927);
      END_STATE();
    case 873:
      if (lookahead == '^') SKIP(930);
      END_STATE();
    case 874:
      if (lookahead == '^') ADVANCE(928);
      END_STATE();
    case 875:
      if (lookahead == '^') SKIP(931);
      END_STATE();
    case 876:
      if (lookahead == '^') ADVANCE(948);
      END_STATE();
    case 877:
      if (lookahead == '^') SKIP(932);
      END_STATE();
    case 878:
      if (lookahead == '^') ADVANCE(949);
      END_STATE();
    case 879:
      if (lookahead == '^') SKIP(933);
      END_STATE();
    case 880:
      if (lookahead == '^') ADVANCE(947);
      END_STATE();
    case 881:
      if (lookahead == '^') SKIP(934);
      END_STATE();
    case 882:
      if (lookahead == '^') ADVANCE(950);
      END_STATE();
    case 883:
      if (lookahead == '^') SKIP(935);
      END_STATE();
    case 884:
      if (lookahead == '^') ADVANCE(951);
      END_STATE();
    case 885:
      if (lookahead == '^') SKIP(936);
      END_STATE();
    case 886:
      if (lookahead == '^') SKIP(937);
      END_STATE();
    case 887:
      if (lookahead == '^') SKIP(938);
      END_STATE();
    case 888:
      if (lookahead == '^') SKIP(939);
      END_STATE();
    case 889:
      if (lookahead == '^') SKIP(940);
      END_STATE();
    case 890:
      if (lookahead == '^') SKIP(941);
      END_STATE();
    case 891:
      if (lookahead == '^') SKIP(942);
      END_STATE();
    case 892:
      if (lookahead == '^') SKIP(943);
      END_STATE();
    case 893:
      if (lookahead == '^') SKIP(944);
      END_STATE();
    case 894:
      if (lookahead == '^') SKIP(945);
      END_STATE();
    case 895:
      if (lookahead == '^') SKIP(953);
      END_STATE();
    case 896:
      if (lookahead == '^') ADVANCE(952);
      END_STATE();
    case 897:
      if (lookahead == '^') SKIP(954);
      END_STATE();
    case 898:
      if (lookahead == '^') SKIP(955);
      END_STATE();
    case 899:
      if (lookahead == '^') SKIP(956);
      END_STATE();
    case 900:
      if (lookahead == '^') SKIP(957);
      END_STATE();
    case 901:
      if (lookahead == '^') SKIP(958);
      END_STATE();
    case 902:
      if (lookahead == '^') SKIP(959);
      END_STATE();
    case 903:
      if (lookahead == '^') SKIP(960);
      END_STATE();
    case 904:
      if (lookahead == '^') SKIP(961);
      END_STATE();
    case 905:
      if (lookahead == '^') SKIP(962);
      END_STATE();
    case 906:
      if (lookahead == '^') SKIP(963);
      END_STATE();
    case 907:
      if (lookahead == '^') SKIP(964);
      END_STATE();
    case 908:
      if (lookahead == '^') SKIP(965);
      END_STATE();
    case 909:
      if (lookahead == '^') SKIP(966);
      END_STATE();
    case 910:
      if (lookahead == '^') SKIP(967);
      END_STATE();
    case 911:
      if (lookahead == '^') SKIP(968);
      END_STATE();
    case 912:
      if (lookahead == '^') SKIP(969);
      END_STATE();
    case 913:
      if (lookahead == '^') SKIP(970);
      END_STATE();
    case 914:
      if (lookahead == '`') ADVANCE(1365);
      END_STATE();
    case 915:
      if (lookahead == 'd') ADVANCE(1404);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 917:
      if (lookahead == 'm') ADVANCE(1404);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(1377);
      END_STATE();
    case 920:
      if (lookahead == 'x') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(861);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(13);
      END_STATE();
    case 921:
      if (lookahead == 'x') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(863);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(23);
      END_STATE();
    case 922:
      if (lookahead == '~') SKIP(17);
      END_STATE();
    case 923:
      if (lookahead == '~') SKIP(19);
      END_STATE();
    case 924:
      if (lookahead == '~') ADVANCE(13);
      END_STATE();
    case 925:
      if (lookahead == '~') ADVANCE(23);
      END_STATE();
    case 926:
      if (lookahead == '~') ADVANCE(1277);
      END_STATE();
    case 927:
      if (lookahead == '~') ADVANCE(1248);
      END_STATE();
    case 928:
      if (lookahead == '~') ADVANCE(1214);
      END_STATE();
    case 929:
      if (lookahead == '~') SKIP(14);
      END_STATE();
    case 930:
      if (lookahead == '~') SKIP(32);
      END_STATE();
    case 931:
      if (lookahead == '~') SKIP(43);
      END_STATE();
    case 932:
      if (lookahead == '~') SKIP(54);
      END_STATE();
    case 933:
      if (lookahead == '~') SKIP(65);
      END_STATE();
    case 934:
      if (lookahead == '~') SKIP(76);
      END_STATE();
    case 935:
      if (lookahead == '~') SKIP(87);
      END_STATE();
    case 936:
      if (lookahead == '~') SKIP(98);
      END_STATE();
    case 937:
      if (lookahead == '~') SKIP(109);
      END_STATE();
    case 938:
      if (lookahead == '~') SKIP(120);
      END_STATE();
    case 939:
      if (lookahead == '~') SKIP(131);
      END_STATE();
    case 940:
      if (lookahead == '~') SKIP(138);
      END_STATE();
    case 941:
      if (lookahead == '~') SKIP(142);
      END_STATE();
    case 942:
      if (lookahead == '~') SKIP(146);
      END_STATE();
    case 943:
      if (lookahead == '~') SKIP(151);
      END_STATE();
    case 944:
      if (lookahead == '~') SKIP(158);
      END_STATE();
    case 945:
      if (lookahead == '~') SKIP(162);
      END_STATE();
    case 946:
      if (lookahead == '~') SKIP(15);
      END_STATE();
    case 947:
      if (lookahead == '~') ADVANCE(1263);
      END_STATE();
    case 948:
      if (lookahead == '~') ADVANCE(1220);
      END_STATE();
    case 949:
      if (lookahead == '~') ADVANCE(1226);
      END_STATE();
    case 950:
      if (lookahead == '~') ADVANCE(1234);
      END_STATE();
    case 951:
      if (lookahead == '~') ADVANCE(1240);
      END_STATE();
    case 952:
      if (lookahead == '~') ADVANCE(1246);
      END_STATE();
    case 953:
      if (lookahead == '~') SKIP(21);
      END_STATE();
    case 954:
      if (lookahead == '~') SKIP(26);
      END_STATE();
    case 955:
      if (lookahead == '~') SKIP(37);
      END_STATE();
    case 956:
      if (lookahead == '~') SKIP(48);
      END_STATE();
    case 957:
      if (lookahead == '~') SKIP(59);
      END_STATE();
    case 958:
      if (lookahead == '~') SKIP(70);
      END_STATE();
    case 959:
      if (lookahead == '~') SKIP(81);
      END_STATE();
    case 960:
      if (lookahead == '~') SKIP(92);
      END_STATE();
    case 961:
      if (lookahead == '~') SKIP(103);
      END_STATE();
    case 962:
      if (lookahead == '~') SKIP(114);
      END_STATE();
    case 963:
      if (lookahead == '~') SKIP(125);
      END_STATE();
    case 964:
      if (lookahead == '~') SKIP(136);
      END_STATE();
    case 965:
      if (lookahead == '~') SKIP(140);
      END_STATE();
    case 966:
      if (lookahead == '~') SKIP(144);
      END_STATE();
    case 967:
      if (lookahead == '~') SKIP(148);
      END_STATE();
    case 968:
      if (lookahead == '~') SKIP(156);
      END_STATE();
    case 969:
      if (lookahead == '~') SKIP(160);
      END_STATE();
    case 970:
      if (lookahead == '~') SKIP(164);
      END_STATE();
    case 971:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1204);
      END_STATE();
    case 972:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1200);
      END_STATE();
    case 973:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1201);
      END_STATE();
    case 974:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      END_STATE();
    case 975:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1204);
      END_STATE();
    case 976:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1202);
      END_STATE();
    case 977:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 978:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 979:
      if (eof) ADVANCE(1052);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '%') SKIP(985);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(1307);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(998);
      if (lookahead == '0') ADVANCE(1198);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1447);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(1306);
      if (lookahead == '{') ADVANCE(1468);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(979);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 980:
      if (eof) ADVANCE(1052);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(980);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') SKIP(998);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(980);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(980);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 981:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(988);
      if (lookahead == '%') SKIP(981);
      if (lookahead == '(') ADVANCE(1316);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '-') ADVANCE(1205);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '/') SKIP(997);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '^') ADVANCE(1437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(981);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(981);
      END_STATE();
    case 982:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(988);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(981);
      END_STATE();
    case 983:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(989);
      if (lookahead == '*') SKIP(1014);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(983);
      END_STATE();
    case 984:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(989);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(983);
      END_STATE();
    case 985:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(990);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(980);
      END_STATE();
    case 986:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(991);
      if (lookahead == '*') SKIP(1016);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(986);
      END_STATE();
    case 987:
      if (eof) ADVANCE(1052);
      if (lookahead == '#') SKIP(991);
      if (set_contains(extras_character_set_1, 9, lookahead)) SKIP(986);
      END_STATE();
    case 988:
      if (eof) ADVANCE(1052);
      if (lookahead == '$') SKIP(992);
      END_STATE();
    case 989:
      if (eof) ADVANCE(1052);
      if (lookahead == '$') SKIP(993);
      END_STATE();
    case 990:
      if (eof) ADVANCE(1052);
      if (lookahead == '$') SKIP(994);
      END_STATE();
    case 991:
      if (eof) ADVANCE(1052);
      if (lookahead == '$') SKIP(995);
      END_STATE();
    case 992:
      if (eof) ADVANCE(1052);
      if (lookahead == '&') SKIP(996);
      END_STATE();
    case 993:
      if (eof) ADVANCE(1052);
      if (lookahead == '&') SKIP(999);
      END_STATE();
    case 994:
      if (eof) ADVANCE(1052);
      if (lookahead == '&') SKIP(1000);
      END_STATE();
    case 995:
      if (eof) ADVANCE(1052);
      if (lookahead == '&') SKIP(1001);
      END_STATE();
    case 996:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(1002);
      END_STATE();
    case 997:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(984);
      END_STATE();
    case 998:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(987);
      END_STATE();
    case 999:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(1003);
      END_STATE();
    case 1000:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(1004);
      END_STATE();
    case 1001:
      if (eof) ADVANCE(1052);
      if (lookahead == '*') SKIP(1005);
      END_STATE();
    case 1002:
      if (eof) ADVANCE(1052);
      if (lookahead == '+') SKIP(1006);
      END_STATE();
    case 1003:
      if (eof) ADVANCE(1052);
      if (lookahead == '+') SKIP(1007);
      END_STATE();
    case 1004:
      if (eof) ADVANCE(1052);
      if (lookahead == '+') SKIP(1008);
      END_STATE();
    case 1005:
      if (eof) ADVANCE(1052);
      if (lookahead == '+') SKIP(1009);
      END_STATE();
    case 1006:
      if (eof) ADVANCE(1052);
      if (lookahead == '-') SKIP(1010);
      END_STATE();
    case 1007:
      if (eof) ADVANCE(1052);
      if (lookahead == '-') SKIP(1011);
      END_STATE();
    case 1008:
      if (eof) ADVANCE(1052);
      if (lookahead == '-') SKIP(1012);
      END_STATE();
    case 1009:
      if (eof) ADVANCE(1052);
      if (lookahead == '-') SKIP(1013);
      END_STATE();
    case 1010:
      if (eof) ADVANCE(1052);
      if (lookahead == '.') SKIP(1015);
      END_STATE();
    case 1011:
      if (eof) ADVANCE(1052);
      if (lookahead == '.') SKIP(1017);
      END_STATE();
    case 1012:
      if (eof) ADVANCE(1052);
      if (lookahead == '.') SKIP(1018);
      END_STATE();
    case 1013:
      if (eof) ADVANCE(1052);
      if (lookahead == '.') SKIP(1019);
      END_STATE();
    case 1014:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(0);
      END_STATE();
    case 1015:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(1020);
      END_STATE();
    case 1016:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(979);
      END_STATE();
    case 1017:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(1021);
      END_STATE();
    case 1018:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(1022);
      END_STATE();
    case 1019:
      if (eof) ADVANCE(1052);
      if (lookahead == '/') SKIP(1023);
      END_STATE();
    case 1020:
      if (eof) ADVANCE(1052);
      if (lookahead == ':') SKIP(1024);
      END_STATE();
    case 1021:
      if (eof) ADVANCE(1052);
      if (lookahead == ':') SKIP(1025);
      END_STATE();
    case 1022:
      if (eof) ADVANCE(1052);
      if (lookahead == ':') SKIP(1026);
      END_STATE();
    case 1023:
      if (eof) ADVANCE(1052);
      if (lookahead == ':') SKIP(1027);
      END_STATE();
    case 1024:
      if (eof) ADVANCE(1052);
      if (lookahead == '<') SKIP(1028);
      END_STATE();
    case 1025:
      if (eof) ADVANCE(1052);
      if (lookahead == '<') SKIP(1029);
      END_STATE();
    case 1026:
      if (eof) ADVANCE(1052);
      if (lookahead == '<') SKIP(1030);
      END_STATE();
    case 1027:
      if (eof) ADVANCE(1052);
      if (lookahead == '<') SKIP(1031);
      END_STATE();
    case 1028:
      if (eof) ADVANCE(1052);
      if (lookahead == '=') SKIP(1032);
      END_STATE();
    case 1029:
      if (eof) ADVANCE(1052);
      if (lookahead == '=') SKIP(1033);
      END_STATE();
    case 1030:
      if (eof) ADVANCE(1052);
      if (lookahead == '=') SKIP(1034);
      END_STATE();
    case 1031:
      if (eof) ADVANCE(1052);
      if (lookahead == '=') SKIP(1035);
      END_STATE();
    case 1032:
      if (eof) ADVANCE(1052);
      if (lookahead == '>') SKIP(1036);
      END_STATE();
    case 1033:
      if (eof) ADVANCE(1052);
      if (lookahead == '>') SKIP(1037);
      END_STATE();
    case 1034:
      if (eof) ADVANCE(1052);
      if (lookahead == '>') SKIP(1038);
      END_STATE();
    case 1035:
      if (eof) ADVANCE(1052);
      if (lookahead == '>') SKIP(1039);
      END_STATE();
    case 1036:
      if (eof) ADVANCE(1052);
      if (lookahead == '?') SKIP(1040);
      END_STATE();
    case 1037:
      if (eof) ADVANCE(1052);
      if (lookahead == '?') SKIP(1041);
      END_STATE();
    case 1038:
      if (eof) ADVANCE(1052);
      if (lookahead == '?') SKIP(1042);
      END_STATE();
    case 1039:
      if (eof) ADVANCE(1052);
      if (lookahead == '?') SKIP(1043);
      END_STATE();
    case 1040:
      if (eof) ADVANCE(1052);
      if (lookahead == '@') SKIP(1044);
      END_STATE();
    case 1041:
      if (eof) ADVANCE(1052);
      if (lookahead == '@') SKIP(1045);
      END_STATE();
    case 1042:
      if (eof) ADVANCE(1052);
      if (lookahead == '@') SKIP(1046);
      END_STATE();
    case 1043:
      if (eof) ADVANCE(1052);
      if (lookahead == '@') SKIP(1047);
      END_STATE();
    case 1044:
      if (eof) ADVANCE(1052);
      if (lookahead == '^') SKIP(1048);
      END_STATE();
    case 1045:
      if (eof) ADVANCE(1052);
      if (lookahead == '^') SKIP(1049);
      END_STATE();
    case 1046:
      if (eof) ADVANCE(1052);
      if (lookahead == '^') SKIP(1050);
      END_STATE();
    case 1047:
      if (eof) ADVANCE(1052);
      if (lookahead == '^') SKIP(1051);
      END_STATE();
    case 1048:
      if (eof) ADVANCE(1052);
      if (lookahead == '~') SKIP(981);
      END_STATE();
    case 1049:
      if (eof) ADVANCE(1052);
      if (lookahead == '~') SKIP(983);
      END_STATE();
    case 1050:
      if (eof) ADVANCE(1052);
      if (lookahead == '~') SKIP(980);
      END_STATE();
    case 1051:
      if (eof) ADVANCE(1052);
      if (lookahead == '~') SKIP(986);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1063);
      if (lookahead == '1') ADVANCE(1057);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1064);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1061);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1058);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1065);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1059);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1059);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1066);
      if (lookahead == '1') ADVANCE(1060);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1059);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1059);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1063);
      if (lookahead == '1') ADVANCE(1057);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1064);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1061);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1058);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1065);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1059);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1059);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1066);
      if (lookahead == '1') ADVANCE(1060);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1059);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1059);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1216);
      if (lookahead == 'x') ADVANCE(1217);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1075);
      if (lookahead == '1') ADVANCE(1069);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1076);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1073);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1070);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1077);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1071);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1071);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1071);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1078);
      if (lookahead == '1') ADVANCE(1072);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1071);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1071);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1071);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1079);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == 'b') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1075);
      if (lookahead == '1') ADVANCE(1069);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == 'b') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1076);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == 'b') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1073);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1070);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1077);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == 'b') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1071);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1071);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1071);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1078);
      if (lookahead == '1') ADVANCE(1072);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == 'b') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1071);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1071);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1071);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1079);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == 'b') ADVANCE(1221);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 'x') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1087);
      if (lookahead == '1') ADVANCE(1081);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1085);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1082);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1083);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(1084);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1083);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1087);
      if (lookahead == '1') ADVANCE(1081);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1085);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1082);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == 'b') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1083);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1083);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(1084);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == 'b') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1083);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1083);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1225);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == 'b') ADVANCE(1227);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead == 'x') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1097);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1093);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1100);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1094);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1101);
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1094);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1103);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == 'b') ADVANCE(1231);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == 'b') ADVANCE(1231);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1097);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1093);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1100);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == 'b') ADVANCE(1095);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1094);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1101);
      if (lookahead == '1') ADVANCE(1095);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == 'b') ADVANCE(1095);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1094);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == 'b') ADVANCE(1231);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1103);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == 'b') ADVANCE(1231);
      if (lookahead == 'o') ADVANCE(1232);
      if (lookahead == 'x') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1110);
      if (lookahead == '1') ADVANCE(1104);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1111);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1109);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1112);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1106);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1106);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1113);
      if (lookahead == '1') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1106);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1106);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1115);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1110);
      if (lookahead == '1') ADVANCE(1104);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1111);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1109);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1112);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == 'b') ADVANCE(1107);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1106);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1113);
      if (lookahead == '1') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == 'b') ADVANCE(1107);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1106);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1106);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1236);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1115);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == 'b') ADVANCE(1237);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == 'x') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1122);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1121);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1124);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1118);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1118);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1119);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1118);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1118);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1127);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1122);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1121);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1124);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == 'b') ADVANCE(1119);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1118);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1125);
      if (lookahead == '1') ADVANCE(1119);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == 'b') ADVANCE(1119);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1118);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1118);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1242);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1127);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'o') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1131);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1132);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1131);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1148);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1149);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1151);
      if (lookahead == '1') ADVANCE(1136);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1154);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1155);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1156);
      if (lookahead == '1') ADVANCE(1141);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1147);
      if (lookahead == '1') ADVANCE(1132);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1131);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1148);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1149);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1151);
      if (lookahead == '1') ADVANCE(1136);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1258);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1154);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1258);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1155);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1261);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1156);
      if (lookahead == '1') ADVANCE(1141);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == 'b') ADVANCE(1261);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'x') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1175);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1161);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1178);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1163);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1163);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1179);
      if (lookahead == '1') ADVANCE(1164);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1163);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1163);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1180);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1181);
      if (lookahead == '1') ADVANCE(1166);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1182);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1167);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1183);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1184);
      if (lookahead == '1') ADVANCE(1169);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1185);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1170);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1186);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1187);
      if (lookahead == '1') ADVANCE(1172);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1175);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1178);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1164);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1163);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1163);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1179);
      if (lookahead == '1') ADVANCE(1164);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1164);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1163);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1163);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1180);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1269);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1181);
      if (lookahead == '1') ADVANCE(1166);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1269);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1182);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1183);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1272);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1184);
      if (lookahead == '1') ADVANCE(1169);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1272);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1185);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1186);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1275);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1187);
      if (lookahead == '1') ADVANCE(1172);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == 'b') ADVANCE(1275);
      if (lookahead == 'o') ADVANCE(1265);
      if (lookahead == 'x') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1188);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1189);
      if (lookahead == '1') ADVANCE(1194);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1190);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1195);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1191);
      if (lookahead == 'b') ADVANCE(1197);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1192);
      if (lookahead == '1') ADVANCE(1197);
      if (lookahead == 'b') ADVANCE(1197);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1189);
      if (lookahead == '1') ADVANCE(1194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1190);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1195);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') SKIP(209);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(291);
      if (lookahead == '0') ADVANCE(1192);
      if (lookahead == '1') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(151);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1196);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '.') ADVANCE(974);
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(973);
      if (lookahead == 'x') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1199);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1200);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1201);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1202);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1203);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1204);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '>') ADVANCE(1364);
      if (lookahead == '\\') ADVANCE(1438);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(1438);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1144);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '`') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(1252);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1218);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1129);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1149);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '`') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(1256);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1224);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1134);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(1259);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1128);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1230);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1142);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1176);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(1267);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1235);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1161);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1182);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(1270);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1241);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1167);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1185);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(1273);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1159);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(1247);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1170);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1063);
      if (lookahead == '1') ADVANCE(1057);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1064);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1061);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1058);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1065);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1059);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1059);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1059);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1218);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1075);
      if (lookahead == '1') ADVANCE(1069);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1076);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1073);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1070);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1077);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1071);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1071);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1071);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1079);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1073);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1224);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1080);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1087);
      if (lookahead == '1') ADVANCE(1081);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1085);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1082);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1083);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1083);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1091);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1230);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1099);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1097);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1093);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1100);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1094);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1094);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1094);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1103);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1097);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1235);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1108);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1110);
      if (lookahead == '1') ADVANCE(1104);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1111);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1109);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1112);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1106);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1106);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1115);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1120);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1122);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1123);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1121);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1124);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1118);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1118);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1127);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1145);
      if (lookahead == '1') ADVANCE(1130);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1146);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1131);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1148);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1150);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1151);
      if (lookahead == '1') ADVANCE(1136);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1214);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1253);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1135);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1154);
      if (lookahead == '1') ADVANCE(1139);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1220);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1257);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1138);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1155);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1155);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1156);
      if (lookahead == '1') ADVANCE(1141);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '_') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1260);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1260);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1140);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1251);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1173);
      if (lookahead == '1') ADVANCE(1158);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1175);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1177);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(1162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1178);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1163);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1163);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1180);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1180);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1181);
      if (lookahead == '1') ADVANCE(1166);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1234);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1268);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1268);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1183);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1183);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1184);
      if (lookahead == '1') ADVANCE(1169);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1240);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1271);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1271);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1186);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1186);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1187);
      if (lookahead == '1') ADVANCE(1172);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1246);
      if (lookahead == '_') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1274);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1274);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(1264);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '+') ADVANCE(1376);
      if (lookahead == '\\') ADVANCE(1277);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1277);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(23);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_empty_list);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1306);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(166);
      if (lookahead == '%') SKIP(17);
      if (lookahead == '(') ADVANCE(1316);
      if (lookahead == '/') SKIP(283);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(17);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') SKIP(205);
      if (lookahead == '%') SKIP(142);
      if (lookahead == ')') ADVANCE(1325);
      if (lookahead == ',') ADVANCE(1349);
      if (lookahead == '/') SKIP(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(142);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(142);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') SKIP(213);
      if (lookahead == '%') SKIP(162);
      if (lookahead == ')') ADVANCE(1326);
      if (lookahead == '/') SKIP(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(162);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(162);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(1366);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(1367);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(1368);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(1369);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(1370);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(1371);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(1372);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(1373);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(1374);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(1375);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(203);
      if (lookahead == '%') SKIP(138);
      if (lookahead == ',') ADVANCE(1348);
      if (lookahead == '/') SKIP(288);
      if (lookahead == ']') ADVANCE(1453);
      if (lookahead == '|') ADVANCE(1459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(138);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(205);
      if (lookahead == '%') SKIP(142);
      if (lookahead == ')') ADVANCE(1325);
      if (lookahead == ',') ADVANCE(1349);
      if (lookahead == '/') SKIP(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(142);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(142);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') SKIP(207);
      if (lookahead == '%') SKIP(146);
      if (lookahead == ',') ADVANCE(1350);
      if (lookahead == '/') SKIP(290);
      if (lookahead == ']') ADVANCE(1454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(146);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(146);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1328);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1330);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1332);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == ',') ADVANCE(1334);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1336);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1338);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1340);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1342);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1344);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1346);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '=') ADVANCE(1388);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '@') ADVANCE(615);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead == ':') ADVANCE(664);
      if (lookahead == '\\') ADVANCE(664);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(1377);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(1404);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(1377);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(1377);
      if (lookahead == '>') ADVANCE(1404);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(38);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(49);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(60);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(71);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(82);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(93);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(104);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(115);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(126);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '*') SKIP(137);
      if (lookahead == '\\') ADVANCE(1392);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '>') ADVANCE(1364);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(186);
      if (lookahead == '%') SKIP(54);
      if (lookahead == ')') ADVANCE(1323);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1333);
      if (lookahead == '/') ADVANCE(1428);
      if (lookahead == ';') ADVANCE(1356);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(54);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(189);
      if (lookahead == '%') SKIP(65);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1335);
      if (lookahead == '/') ADVANCE(1429);
      if (lookahead == ';') ADVANCE(1357);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(65);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(65);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(191);
      if (lookahead == '%') SKIP(76);
      if (lookahead == '(') ADVANCE(1318);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1337);
      if (lookahead == '/') ADVANCE(1430);
      if (lookahead == ';') ADVANCE(1358);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(76);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(76);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '#') SKIP(201);
      if (lookahead == '%') SKIP(131);
      if (lookahead == '(') ADVANCE(1321);
      if (lookahead == ')') ADVANCE(1324);
      if (lookahead == '*') ADVANCE(1425);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '/') ADVANCE(1435);
      if (lookahead == ';') ADVANCE(1363);
      if (lookahead == '<') ADVANCE(1389);
      if (lookahead == '>') ADVANCE(1391);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(131);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(1436);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(38);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(49);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(60);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(71);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(82);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(93);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(104);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(115);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(126);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') SKIP(137);
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == ']') ADVANCE(1281);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == ']') ADVANCE(1282);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == ']') ADVANCE(1283);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == ']') ADVANCE(1284);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == ']') ADVANCE(1285);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == ']') ADVANCE(1286);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == ']') ADVANCE(1287);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == ']') ADVANCE(1288);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1280);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(195);
      if (lookahead == '%') SKIP(98);
      if (lookahead == '(') ADVANCE(1320);
      if (lookahead == ',') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1432);
      if (lookahead == ';') ADVANCE(1360);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1451);
      if (lookahead == '`') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(98);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(197);
      if (lookahead == '%') SKIP(109);
      if (lookahead == ',') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1433);
      if (lookahead == ';') ADVANCE(1361);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(1452);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(109);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(109);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(203);
      if (lookahead == '%') SKIP(138);
      if (lookahead == ',') ADVANCE(1348);
      if (lookahead == '/') SKIP(288);
      if (lookahead == ']') ADVANCE(1453);
      if (lookahead == '|') ADVANCE(1459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(138);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(207);
      if (lookahead == '%') SKIP(146);
      if (lookahead == ',') ADVANCE(1350);
      if (lookahead == '/') SKIP(290);
      if (lookahead == ']') ADVANCE(1454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(146);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(146);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') SKIP(211);
      if (lookahead == '%') SKIP(158);
      if (lookahead == '/') SKIP(292);
      if (lookahead == ']') ADVANCE(1455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(158);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '#') SKIP(178);
      if (lookahead == '%') SKIP(32);
      if (lookahead == ',') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(1426);
      if (lookahead == ';') ADVANCE(1354);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1449);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == '|') ADVANCE(1457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(32);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '#') SKIP(182);
      if (lookahead == '%') SKIP(43);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ',') ADVANCE(1331);
      if (lookahead == '/') ADVANCE(1427);
      if (lookahead == ';') ADVANCE(1355);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(1450);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '|') ADVANCE(1458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(43);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '#') SKIP(203);
      if (lookahead == '%') SKIP(138);
      if (lookahead == ',') ADVANCE(1348);
      if (lookahead == '/') SKIP(288);
      if (lookahead == ']') ADVANCE(1453);
      if (lookahead == '|') ADVANCE(1459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(138);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '}') ADVANCE(1290);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(1220);
      if (lookahead == '(') ADVANCE(1309);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1074);
      if (lookahead == '[') ADVANCE(1440);
      if (lookahead == '\\') ADVANCE(1209);
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(1461);
      if (lookahead == '}') ADVANCE(1291);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1068);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '}') ADVANCE(1292);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '}') ADVANCE(1293);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1240);
      if (lookahead == '(') ADVANCE(1312);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1114);
      if (lookahead == '[') ADVANCE(1443);
      if (lookahead == '\\') ADVANCE(1212);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1464);
      if (lookahead == '}') ADVANCE(1294);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') SKIP(14);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(1314);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1143);
      if (lookahead == '[') ADVANCE(1445);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(1466);
      if (lookahead == '}') ADVANCE(1296);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '%') SKIP(15);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1315);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1174);
      if (lookahead == '[') ADVANCE(1446);
      if (lookahead == '\\') ADVANCE(1263);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(1467);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1159);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(1289);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '#') SKIP(193);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1319);
      if (lookahead == ',') ADVANCE(1339);
      if (lookahead == '/') ADVANCE(1431);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '}') ADVANCE(1470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(87);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(87);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '#') SKIP(199);
      if (lookahead == '%') SKIP(120);
      if (lookahead == ',') ADVANCE(1345);
      if (lookahead == '/') ADVANCE(1434);
      if (lookahead == ';') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '}') ADVANCE(1471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) SKIP(120);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1472);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(1308);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1062);
      if (lookahead == '[') ADVANCE(1439);
      if (lookahead == '\\') ADVANCE(1208);
      if (lookahead == '_') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(1460);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1298);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(1226);
      if (lookahead == '(') ADVANCE(1310);
      if (lookahead == '/') SKIP(286);
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '[') ADVANCE(1441);
      if (lookahead == '\\') ADVANCE(1210);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(1462);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(1474);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(1311);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1102);
      if (lookahead == '[') ADVANCE(1442);
      if (lookahead == '\\') ADVANCE(1211);
      if (lookahead == '_') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(1463);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1234);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1301);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(1475);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1246);
      if (lookahead == '(') ADVANCE(1313);
      if (lookahead == '/') SKIP(287);
      if (lookahead == '0') ADVANCE(1126);
      if (lookahead == '[') ADVANCE(1444);
      if (lookahead == '\\') ADVANCE(1213);
      if (lookahead == '_') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(1465);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1246);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(15);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 979},
  [2] = {.lex_state = 979},
  [3] = {.lex_state = 979},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 979},
  [89] = {.lex_state = 979},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 216},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 216},
  [94] = {.lex_state = 216},
  [95] = {.lex_state = 216},
  [96] = {.lex_state = 216},
  [97] = {.lex_state = 216},
  [98] = {.lex_state = 217},
  [99] = {.lex_state = 217},
  [100] = {.lex_state = 217},
  [101] = {.lex_state = 216},
  [102] = {.lex_state = 216},
  [103] = {.lex_state = 216},
  [104] = {.lex_state = 216},
  [105] = {.lex_state = 216},
  [106] = {.lex_state = 216},
  [107] = {.lex_state = 218},
  [108] = {.lex_state = 218},
  [109] = {.lex_state = 218},
  [110] = {.lex_state = 218},
  [111] = {.lex_state = 218},
  [112] = {.lex_state = 218},
  [113] = {.lex_state = 218},
  [114] = {.lex_state = 218},
  [115] = {.lex_state = 218},
  [116] = {.lex_state = 219},
  [117] = {.lex_state = 218},
  [118] = {.lex_state = 220},
  [119] = {.lex_state = 216},
  [120] = {.lex_state = 221},
  [121] = {.lex_state = 216},
  [122] = {.lex_state = 222},
  [123] = {.lex_state = 216},
  [124] = {.lex_state = 216},
  [125] = {.lex_state = 216},
  [126] = {.lex_state = 223},
  [127] = {.lex_state = 219},
  [128] = {.lex_state = 220},
  [129] = {.lex_state = 218},
  [130] = {.lex_state = 219},
  [131] = {.lex_state = 219},
  [132] = {.lex_state = 216},
  [133] = {.lex_state = 224},
  [134] = {.lex_state = 221},
  [135] = {.lex_state = 219},
  [136] = {.lex_state = 225},
  [137] = {.lex_state = 218},
  [138] = {.lex_state = 219},
  [139] = {.lex_state = 224},
  [140] = {.lex_state = 224},
  [141] = {.lex_state = 224},
  [142] = {.lex_state = 224},
  [143] = {.lex_state = 223},
  [144] = {.lex_state = 222},
  [145] = {.lex_state = 218},
  [146] = {.lex_state = 223},
  [147] = {.lex_state = 218},
  [148] = {.lex_state = 225},
  [149] = {.lex_state = 225},
  [150] = {.lex_state = 224},
  [151] = {.lex_state = 218},
  [152] = {.lex_state = 224},
  [153] = {.lex_state = 218},
  [154] = {.lex_state = 224},
  [155] = {.lex_state = 218},
  [156] = {.lex_state = 223},
  [157] = {.lex_state = 224},
  [158] = {.lex_state = 224},
  [159] = {.lex_state = 224},
  [160] = {.lex_state = 224},
  [161] = {.lex_state = 224},
  [162] = {.lex_state = 224},
  [163] = {.lex_state = 224},
  [164] = {.lex_state = 224},
  [165] = {.lex_state = 224},
  [166] = {.lex_state = 223},
  [167] = {.lex_state = 223},
  [168] = {.lex_state = 222},
  [169] = {.lex_state = 223},
  [170] = {.lex_state = 223},
  [171] = {.lex_state = 223},
  [172] = {.lex_state = 222},
  [173] = {.lex_state = 218},
  [174] = {.lex_state = 223},
  [175] = {.lex_state = 223},
  [176] = {.lex_state = 223},
  [177] = {.lex_state = 219},
  [178] = {.lex_state = 219},
  [179] = {.lex_state = 219},
  [180] = {.lex_state = 219},
  [181] = {.lex_state = 219},
  [182] = {.lex_state = 219},
  [183] = {.lex_state = 219},
  [184] = {.lex_state = 219},
  [185] = {.lex_state = 223},
  [186] = {.lex_state = 223},
  [187] = {.lex_state = 223},
  [188] = {.lex_state = 219},
  [189] = {.lex_state = 219},
  [190] = {.lex_state = 223},
  [191] = {.lex_state = 223},
  [192] = {.lex_state = 218},
  [193] = {.lex_state = 219},
  [194] = {.lex_state = 218},
  [195] = {.lex_state = 218},
  [196] = {.lex_state = 223},
  [197] = {.lex_state = 224},
  [198] = {.lex_state = 223},
  [199] = {.lex_state = 224},
  [200] = {.lex_state = 224},
  [201] = {.lex_state = 218},
  [202] = {.lex_state = 224},
  [203] = {.lex_state = 223},
  [204] = {.lex_state = 219},
  [205] = {.lex_state = 219},
  [206] = {.lex_state = 224},
  [207] = {.lex_state = 224},
  [208] = {.lex_state = 218},
  [209] = {.lex_state = 218},
  [210] = {.lex_state = 219},
  [211] = {.lex_state = 226},
  [212] = {.lex_state = 227},
  [213] = {.lex_state = 227},
  [214] = {.lex_state = 228},
  [215] = {.lex_state = 227},
  [216] = {.lex_state = 228},
  [217] = {.lex_state = 229},
  [218] = {.lex_state = 229},
  [219] = {.lex_state = 227},
  [220] = {.lex_state = 229},
  [221] = {.lex_state = 228},
  [222] = {.lex_state = 229},
  [223] = {.lex_state = 229},
  [224] = {.lex_state = 230},
  [225] = {.lex_state = 230},
  [226] = {.lex_state = 230},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 230},
  [229] = {.lex_state = 230},
  [230] = {.lex_state = 231},
  [231] = {.lex_state = 230},
  [232] = {.lex_state = 231},
  [233] = {.lex_state = 231},
  [234] = {.lex_state = 231},
  [235] = {.lex_state = 231},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_operator_1200xfx] = ACTIONS(1),
    [sym_operator_1200fx] = ACTIONS(1),
    [sym_operator_1050xfy] = ACTIONS(1),
    [sym_operator_900fy] = ACTIONS(1),
    [sym_operator_200xfx] = ACTIONS(1),
    [sym_operator_200xfy] = ACTIONS(1),
    [sym_operator_200fy] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(227),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(138),
    [sym__compound_term] = STATE(138),
    [sym__atomic_term] = STATE(138),
    [sym_number] = STATE(138),
    [sym_negative_number] = STATE(138),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(138),
    [sym__operator_notation] = STATE(138),
    [sym_operation_1200xfx] = STATE(138),
    [sym_operation_1200fx] = STATE(138),
    [sym_operation_1100xfy] = STATE(138),
    [sym_operation_1050xfy] = STATE(138),
    [sym_operation_1000xfy] = STATE(138),
    [sym_operation_900fy] = STATE(138),
    [sym_operation_700xfx] = STATE(138),
    [sym_operation_500yfx] = STATE(138),
    [sym_operation_400yfx] = STATE(138),
    [sym_operation_200xfx] = STATE(138),
    [sym_operation_200xfy] = STATE(138),
    [sym_operation_200fy] = STATE(138),
    [sym_list_notation] = STATE(138),
    [sym_curly_bracketed_notation] = STATE(138),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(13),
  },
  [2] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(138),
    [sym__compound_term] = STATE(138),
    [sym__atomic_term] = STATE(138),
    [sym_number] = STATE(138),
    [sym_negative_number] = STATE(138),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(138),
    [sym__operator_notation] = STATE(138),
    [sym_operation_1200xfx] = STATE(138),
    [sym_operation_1200fx] = STATE(138),
    [sym_operation_1100xfy] = STATE(138),
    [sym_operation_1050xfy] = STATE(138),
    [sym_operation_1000xfy] = STATE(138),
    [sym_operation_900fy] = STATE(138),
    [sym_operation_700xfx] = STATE(138),
    [sym_operation_500yfx] = STATE(138),
    [sym_operation_400yfx] = STATE(138),
    [sym_operation_200xfx] = STATE(138),
    [sym_operation_200xfy] = STATE(138),
    [sym_operation_200fy] = STATE(138),
    [sym_list_notation] = STATE(138),
    [sym_curly_bracketed_notation] = STATE(138),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_COLON_DASH] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(32),
    [aux_sym_number_token2] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(35),
    [aux_sym_atom_token1] = ACTIONS(38),
    [sym_empty_list] = ACTIONS(38),
    [sym_empty_curly_brackets] = ACTIONS(38),
    [sym_variable_term] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym_operator_1200fx] = ACTIONS(47),
    [sym_operator_900fy] = ACTIONS(50),
    [sym_operator_200fy] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_double_quoted_list_notation] = ACTIONS(41),
  },
  [3] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(138),
    [sym__compound_term] = STATE(138),
    [sym__atomic_term] = STATE(138),
    [sym_number] = STATE(138),
    [sym_negative_number] = STATE(138),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(138),
    [sym__operator_notation] = STATE(138),
    [sym_operation_1200xfx] = STATE(138),
    [sym_operation_1200fx] = STATE(138),
    [sym_operation_1100xfy] = STATE(138),
    [sym_operation_1050xfy] = STATE(138),
    [sym_operation_1000xfy] = STATE(138),
    [sym_operation_900fy] = STATE(138),
    [sym_operation_700xfx] = STATE(138),
    [sym_operation_500yfx] = STATE(138),
    [sym_operation_400yfx] = STATE(138),
    [sym_operation_200xfx] = STATE(138),
    [sym_operation_200xfy] = STATE(138),
    [sym_operation_200fy] = STATE(138),
    [sym_list_notation] = STATE(138),
    [sym_curly_bracketed_notation] = STATE(138),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(13),
  },
  [4] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym_arg_list] = STATE(232),
    [sym__arg] = STATE(215),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [5] = {
    [sym__term] = STATE(101),
    [sym__compound_term] = STATE(101),
    [sym__atomic_term] = STATE(101),
    [sym_number] = STATE(101),
    [sym_negative_number] = STATE(101),
    [sym_atom] = STATE(99),
    [sym_functional_notation] = STATE(101),
    [sym__arg] = STATE(211),
    [sym__operator_notation] = STATE(101),
    [sym_operation_1200xfx] = STATE(101),
    [sym_operation_1200fx] = STATE(101),
    [sym_operation_1100xfy] = STATE(101),
    [sym_operation_1050xfy] = STATE(101),
    [sym_operation_1000xfy] = STATE(101),
    [sym_operation_900fy] = STATE(101),
    [sym_operation_700xfx] = STATE(101),
    [sym_operation_500yfx] = STATE(101),
    [sym_operation_400yfx] = STATE(101),
    [sym_operation_200xfx] = STATE(101),
    [sym_operation_200xfy] = STATE(101),
    [sym_operation_200fy] = STATE(101),
    [sym_list_notation] = STATE(101),
    [sym__list_notation_items] = STATE(224),
    [sym_curly_bracketed_notation] = STATE(101),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [6] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym_arg_list] = STATE(234),
    [sym__arg] = STATE(215),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [7] = {
    [sym__term] = STATE(101),
    [sym__compound_term] = STATE(101),
    [sym__atomic_term] = STATE(101),
    [sym_number] = STATE(101),
    [sym_negative_number] = STATE(101),
    [sym_atom] = STATE(99),
    [sym_functional_notation] = STATE(101),
    [sym__arg] = STATE(211),
    [sym__operator_notation] = STATE(101),
    [sym_operation_1200xfx] = STATE(101),
    [sym_operation_1200fx] = STATE(101),
    [sym_operation_1100xfy] = STATE(101),
    [sym_operation_1050xfy] = STATE(101),
    [sym_operation_1000xfy] = STATE(101),
    [sym_operation_900fy] = STATE(101),
    [sym_operation_700xfx] = STATE(101),
    [sym_operation_500yfx] = STATE(101),
    [sym_operation_400yfx] = STATE(101),
    [sym_operation_200xfx] = STATE(101),
    [sym_operation_200xfy] = STATE(101),
    [sym_operation_200fy] = STATE(101),
    [sym_list_notation] = STATE(101),
    [sym__list_notation_items] = STATE(228),
    [sym_curly_bracketed_notation] = STATE(101),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [8] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym_arg_list] = STATE(233),
    [sym__arg] = STATE(215),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [9] = {
    [sym__term] = STATE(101),
    [sym__compound_term] = STATE(101),
    [sym__atomic_term] = STATE(101),
    [sym_number] = STATE(101),
    [sym_negative_number] = STATE(101),
    [sym_atom] = STATE(99),
    [sym_functional_notation] = STATE(101),
    [sym__arg] = STATE(211),
    [sym__operator_notation] = STATE(101),
    [sym_operation_1200xfx] = STATE(101),
    [sym_operation_1200fx] = STATE(101),
    [sym_operation_1100xfy] = STATE(101),
    [sym_operation_1050xfy] = STATE(101),
    [sym_operation_1000xfy] = STATE(101),
    [sym_operation_900fy] = STATE(101),
    [sym_operation_700xfx] = STATE(101),
    [sym_operation_500yfx] = STATE(101),
    [sym_operation_400yfx] = STATE(101),
    [sym_operation_200xfx] = STATE(101),
    [sym_operation_200xfy] = STATE(101),
    [sym_operation_200fy] = STATE(101),
    [sym_list_notation] = STATE(101),
    [sym__list_notation_items] = STATE(231),
    [sym_curly_bracketed_notation] = STATE(101),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [10] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym_arg_list] = STATE(230),
    [sym__arg] = STATE(215),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [11] = {
    [sym__term] = STATE(101),
    [sym__compound_term] = STATE(101),
    [sym__atomic_term] = STATE(101),
    [sym_number] = STATE(101),
    [sym_negative_number] = STATE(101),
    [sym_atom] = STATE(99),
    [sym_functional_notation] = STATE(101),
    [sym__arg] = STATE(211),
    [sym__operator_notation] = STATE(101),
    [sym_operation_1200xfx] = STATE(101),
    [sym_operation_1200fx] = STATE(101),
    [sym_operation_1100xfy] = STATE(101),
    [sym_operation_1050xfy] = STATE(101),
    [sym_operation_1000xfy] = STATE(101),
    [sym_operation_900fy] = STATE(101),
    [sym_operation_700xfx] = STATE(101),
    [sym_operation_500yfx] = STATE(101),
    [sym_operation_400yfx] = STATE(101),
    [sym_operation_200xfx] = STATE(101),
    [sym_operation_200xfy] = STATE(101),
    [sym_operation_200fy] = STATE(101),
    [sym_list_notation] = STATE(101),
    [sym__list_notation_items] = STATE(225),
    [sym_curly_bracketed_notation] = STATE(101),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [12] = {
    [sym__term] = STATE(101),
    [sym__compound_term] = STATE(101),
    [sym__atomic_term] = STATE(101),
    [sym_number] = STATE(101),
    [sym_negative_number] = STATE(101),
    [sym_atom] = STATE(99),
    [sym_functional_notation] = STATE(101),
    [sym__arg] = STATE(211),
    [sym__operator_notation] = STATE(101),
    [sym_operation_1200xfx] = STATE(101),
    [sym_operation_1200fx] = STATE(101),
    [sym_operation_1100xfy] = STATE(101),
    [sym_operation_1050xfy] = STATE(101),
    [sym_operation_1000xfy] = STATE(101),
    [sym_operation_900fy] = STATE(101),
    [sym_operation_700xfx] = STATE(101),
    [sym_operation_500yfx] = STATE(101),
    [sym_operation_400yfx] = STATE(101),
    [sym_operation_200xfx] = STATE(101),
    [sym_operation_200xfy] = STATE(101),
    [sym_operation_200fy] = STATE(101),
    [sym_list_notation] = STATE(101),
    [sym__list_notation_items] = STATE(226),
    [sym_curly_bracketed_notation] = STATE(101),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(90),
  },
  [13] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym_arg_list] = STATE(235),
    [sym__arg] = STATE(215),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [14] = {
    [sym__term] = STATE(143),
    [sym__compound_term] = STATE(143),
    [sym__atomic_term] = STATE(143),
    [sym_number] = STATE(143),
    [sym_negative_number] = STATE(143),
    [sym_atom] = STATE(144),
    [sym_functional_notation] = STATE(143),
    [sym__arg] = STATE(229),
    [sym__operator_notation] = STATE(143),
    [sym_operation_1200xfx] = STATE(143),
    [sym_operation_1200fx] = STATE(143),
    [sym_operation_1100xfy] = STATE(143),
    [sym_operation_1050xfy] = STATE(143),
    [sym_operation_1000xfy] = STATE(143),
    [sym_operation_900fy] = STATE(143),
    [sym_operation_700xfx] = STATE(143),
    [sym_operation_500yfx] = STATE(143),
    [sym_operation_400yfx] = STATE(143),
    [sym_operation_200xfx] = STATE(143),
    [sym_operation_200xfy] = STATE(143),
    [sym_operation_200fy] = STATE(143),
    [sym_list_notation] = STATE(143),
    [sym_curly_bracketed_notation] = STATE(143),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(110),
  },
  [15] = {
    [sym__term] = STATE(137),
    [sym__compound_term] = STATE(137),
    [sym__atomic_term] = STATE(137),
    [sym_number] = STATE(137),
    [sym_negative_number] = STATE(137),
    [sym_atom] = STATE(136),
    [sym_functional_notation] = STATE(137),
    [sym__arg] = STATE(219),
    [sym__operator_notation] = STATE(137),
    [sym_operation_1200xfx] = STATE(137),
    [sym_operation_1200fx] = STATE(137),
    [sym_operation_1100xfy] = STATE(137),
    [sym_operation_1050xfy] = STATE(137),
    [sym_operation_1000xfy] = STATE(137),
    [sym_operation_900fy] = STATE(137),
    [sym_operation_700xfx] = STATE(137),
    [sym_operation_500yfx] = STATE(137),
    [sym_operation_400yfx] = STATE(137),
    [sym_operation_200xfx] = STATE(137),
    [sym_operation_200xfy] = STATE(137),
    [sym_operation_200fy] = STATE(137),
    [sym_list_notation] = STATE(137),
    [sym_curly_bracketed_notation] = STATE(137),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(70),
  },
  [16] = {
    [sym__term] = STATE(126),
    [sym__compound_term] = STATE(126),
    [sym__atomic_term] = STATE(126),
    [sym_number] = STATE(126),
    [sym_negative_number] = STATE(126),
    [sym_atom] = STATE(122),
    [sym_functional_notation] = STATE(126),
    [sym__arg] = STATE(221),
    [sym__operator_notation] = STATE(126),
    [sym_operation_1200xfx] = STATE(126),
    [sym_operation_1200fx] = STATE(126),
    [sym_operation_1100xfy] = STATE(126),
    [sym_operation_1050xfy] = STATE(126),
    [sym_operation_1000xfy] = STATE(126),
    [sym_operation_900fy] = STATE(126),
    [sym_operation_700xfx] = STATE(126),
    [sym_operation_500yfx] = STATE(126),
    [sym_operation_400yfx] = STATE(126),
    [sym_operation_200xfx] = STATE(126),
    [sym_operation_200xfy] = STATE(126),
    [sym_operation_200fy] = STATE(126),
    [sym_list_notation] = STATE(126),
    [sym_curly_bracketed_notation] = STATE(126),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(124),
  },
  [17] = {
    [sym__term] = STATE(186),
    [sym__compound_term] = STATE(186),
    [sym__atomic_term] = STATE(186),
    [sym_number] = STATE(186),
    [sym_negative_number] = STATE(186),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(186),
    [sym__operator_notation] = STATE(186),
    [sym_operation_1200xfx] = STATE(186),
    [sym_operation_1200fx] = STATE(186),
    [sym_operation_1100xfy] = STATE(186),
    [sym_operation_1050xfy] = STATE(186),
    [sym_operation_1000xfy] = STATE(186),
    [sym_operation_900fy] = STATE(186),
    [sym_operation_700xfx] = STATE(186),
    [sym_operation_500yfx] = STATE(186),
    [sym_operation_400yfx] = STATE(186),
    [sym_operation_200xfx] = STATE(186),
    [sym_operation_200xfy] = STATE(186),
    [sym_operation_200fy] = STATE(186),
    [sym_list_notation] = STATE(186),
    [sym_curly_bracketed_notation] = STATE(186),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(126),
  },
  [18] = {
    [sym__term] = STATE(162),
    [sym__compound_term] = STATE(162),
    [sym__atomic_term] = STATE(162),
    [sym_number] = STATE(162),
    [sym_negative_number] = STATE(162),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(162),
    [sym__operator_notation] = STATE(162),
    [sym_operation_1200xfx] = STATE(162),
    [sym_operation_1200fx] = STATE(162),
    [sym_operation_1100xfy] = STATE(162),
    [sym_operation_1050xfy] = STATE(162),
    [sym_operation_1000xfy] = STATE(162),
    [sym_operation_900fy] = STATE(162),
    [sym_operation_700xfx] = STATE(162),
    [sym_operation_500yfx] = STATE(162),
    [sym_operation_400yfx] = STATE(162),
    [sym_operation_200xfx] = STATE(162),
    [sym_operation_200xfy] = STATE(162),
    [sym_operation_200fy] = STATE(162),
    [sym_list_notation] = STATE(162),
    [sym_curly_bracketed_notation] = STATE(162),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(134),
  },
  [19] = {
    [sym__term] = STATE(147),
    [sym__compound_term] = STATE(147),
    [sym__atomic_term] = STATE(147),
    [sym_number] = STATE(147),
    [sym_negative_number] = STATE(147),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(147),
    [sym__operator_notation] = STATE(147),
    [sym_operation_1200xfx] = STATE(147),
    [sym_operation_1200fx] = STATE(147),
    [sym_operation_1100xfy] = STATE(147),
    [sym_operation_1050xfy] = STATE(147),
    [sym_operation_1000xfy] = STATE(147),
    [sym_operation_900fy] = STATE(147),
    [sym_operation_700xfx] = STATE(147),
    [sym_operation_500yfx] = STATE(147),
    [sym_operation_400yfx] = STATE(147),
    [sym_operation_200xfx] = STATE(147),
    [sym_operation_200xfy] = STATE(147),
    [sym_operation_200fy] = STATE(147),
    [sym_list_notation] = STATE(147),
    [sym_curly_bracketed_notation] = STATE(147),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(148),
  },
  [20] = {
    [sym__term] = STATE(150),
    [sym__compound_term] = STATE(150),
    [sym__atomic_term] = STATE(150),
    [sym_number] = STATE(150),
    [sym_negative_number] = STATE(150),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(150),
    [sym__operator_notation] = STATE(150),
    [sym_operation_1200xfx] = STATE(150),
    [sym_operation_1200fx] = STATE(150),
    [sym_operation_1100xfy] = STATE(150),
    [sym_operation_1050xfy] = STATE(150),
    [sym_operation_1000xfy] = STATE(150),
    [sym_operation_900fy] = STATE(150),
    [sym_operation_700xfx] = STATE(150),
    [sym_operation_500yfx] = STATE(150),
    [sym_operation_400yfx] = STATE(150),
    [sym_operation_200xfx] = STATE(150),
    [sym_operation_200xfy] = STATE(150),
    [sym_operation_200fy] = STATE(150),
    [sym_list_notation] = STATE(150),
    [sym_curly_bracketed_notation] = STATE(150),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(150),
  },
  [21] = {
    [sym__term] = STATE(117),
    [sym__compound_term] = STATE(117),
    [sym__atomic_term] = STATE(117),
    [sym_number] = STATE(117),
    [sym_negative_number] = STATE(117),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(117),
    [sym__operator_notation] = STATE(117),
    [sym_operation_1200xfx] = STATE(117),
    [sym_operation_1200fx] = STATE(117),
    [sym_operation_1100xfy] = STATE(117),
    [sym_operation_1050xfy] = STATE(117),
    [sym_operation_1000xfy] = STATE(117),
    [sym_operation_900fy] = STATE(117),
    [sym_operation_700xfx] = STATE(117),
    [sym_operation_500yfx] = STATE(117),
    [sym_operation_400yfx] = STATE(117),
    [sym_operation_200xfx] = STATE(117),
    [sym_operation_200xfy] = STATE(117),
    [sym_operation_200fy] = STATE(117),
    [sym_list_notation] = STATE(117),
    [sym_curly_bracketed_notation] = STATE(117),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(152),
  },
  [22] = {
    [sym__term] = STATE(151),
    [sym__compound_term] = STATE(151),
    [sym__atomic_term] = STATE(151),
    [sym_number] = STATE(151),
    [sym_negative_number] = STATE(151),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(151),
    [sym__operator_notation] = STATE(151),
    [sym_operation_1200xfx] = STATE(151),
    [sym_operation_1200fx] = STATE(151),
    [sym_operation_1100xfy] = STATE(151),
    [sym_operation_1050xfy] = STATE(151),
    [sym_operation_1000xfy] = STATE(151),
    [sym_operation_900fy] = STATE(151),
    [sym_operation_700xfx] = STATE(151),
    [sym_operation_500yfx] = STATE(151),
    [sym_operation_400yfx] = STATE(151),
    [sym_operation_200xfx] = STATE(151),
    [sym_operation_200xfy] = STATE(151),
    [sym_operation_200fy] = STATE(151),
    [sym_list_notation] = STATE(151),
    [sym_curly_bracketed_notation] = STATE(151),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(154),
  },
  [23] = {
    [sym__term] = STATE(91),
    [sym__compound_term] = STATE(91),
    [sym__atomic_term] = STATE(91),
    [sym_number] = STATE(91),
    [sym_negative_number] = STATE(91),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(91),
    [sym__operator_notation] = STATE(91),
    [sym_operation_1200xfx] = STATE(91),
    [sym_operation_1200fx] = STATE(91),
    [sym_operation_1100xfy] = STATE(91),
    [sym_operation_1050xfy] = STATE(91),
    [sym_operation_1000xfy] = STATE(91),
    [sym_operation_900fy] = STATE(91),
    [sym_operation_700xfx] = STATE(91),
    [sym_operation_500yfx] = STATE(91),
    [sym_operation_400yfx] = STATE(91),
    [sym_operation_200xfx] = STATE(91),
    [sym_operation_200xfy] = STATE(91),
    [sym_operation_200fy] = STATE(91),
    [sym_list_notation] = STATE(91),
    [sym_curly_bracketed_notation] = STATE(91),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(156),
  },
  [24] = {
    [sym__term] = STATE(103),
    [sym__compound_term] = STATE(103),
    [sym__atomic_term] = STATE(103),
    [sym_number] = STATE(103),
    [sym_negative_number] = STATE(103),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(103),
    [sym__operator_notation] = STATE(103),
    [sym_operation_1200xfx] = STATE(103),
    [sym_operation_1200fx] = STATE(103),
    [sym_operation_1100xfy] = STATE(103),
    [sym_operation_1050xfy] = STATE(103),
    [sym_operation_1000xfy] = STATE(103),
    [sym_operation_900fy] = STATE(103),
    [sym_operation_700xfx] = STATE(103),
    [sym_operation_500yfx] = STATE(103),
    [sym_operation_400yfx] = STATE(103),
    [sym_operation_200xfx] = STATE(103),
    [sym_operation_200xfy] = STATE(103),
    [sym_operation_200fy] = STATE(103),
    [sym_list_notation] = STATE(103),
    [sym_curly_bracketed_notation] = STATE(103),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(158),
  },
  [25] = {
    [sym__term] = STATE(127),
    [sym__compound_term] = STATE(127),
    [sym__atomic_term] = STATE(127),
    [sym_number] = STATE(127),
    [sym_negative_number] = STATE(127),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(127),
    [sym__operator_notation] = STATE(127),
    [sym_operation_1200xfx] = STATE(127),
    [sym_operation_1200fx] = STATE(127),
    [sym_operation_1100xfy] = STATE(127),
    [sym_operation_1050xfy] = STATE(127),
    [sym_operation_1000xfy] = STATE(127),
    [sym_operation_900fy] = STATE(127),
    [sym_operation_700xfx] = STATE(127),
    [sym_operation_500yfx] = STATE(127),
    [sym_operation_400yfx] = STATE(127),
    [sym_operation_200xfx] = STATE(127),
    [sym_operation_200xfy] = STATE(127),
    [sym_operation_200fy] = STATE(127),
    [sym_list_notation] = STATE(127),
    [sym_curly_bracketed_notation] = STATE(127),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(160),
  },
  [26] = {
    [sym__term] = STATE(106),
    [sym__compound_term] = STATE(106),
    [sym__atomic_term] = STATE(106),
    [sym_number] = STATE(106),
    [sym_negative_number] = STATE(106),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(106),
    [sym__operator_notation] = STATE(106),
    [sym_operation_1200xfx] = STATE(106),
    [sym_operation_1200fx] = STATE(106),
    [sym_operation_1100xfy] = STATE(106),
    [sym_operation_1050xfy] = STATE(106),
    [sym_operation_1000xfy] = STATE(106),
    [sym_operation_900fy] = STATE(106),
    [sym_operation_700xfx] = STATE(106),
    [sym_operation_500yfx] = STATE(106),
    [sym_operation_400yfx] = STATE(106),
    [sym_operation_200xfx] = STATE(106),
    [sym_operation_200xfy] = STATE(106),
    [sym_operation_200fy] = STATE(106),
    [sym_list_notation] = STATE(106),
    [sym_curly_bracketed_notation] = STATE(106),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(162),
  },
  [27] = {
    [sym__term] = STATE(96),
    [sym__compound_term] = STATE(96),
    [sym__atomic_term] = STATE(96),
    [sym_number] = STATE(96),
    [sym_negative_number] = STATE(96),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(96),
    [sym__operator_notation] = STATE(96),
    [sym_operation_1200xfx] = STATE(96),
    [sym_operation_1200fx] = STATE(96),
    [sym_operation_1100xfy] = STATE(96),
    [sym_operation_1050xfy] = STATE(96),
    [sym_operation_1000xfy] = STATE(96),
    [sym_operation_900fy] = STATE(96),
    [sym_operation_700xfx] = STATE(96),
    [sym_operation_500yfx] = STATE(96),
    [sym_operation_400yfx] = STATE(96),
    [sym_operation_200xfx] = STATE(96),
    [sym_operation_200xfy] = STATE(96),
    [sym_operation_200fy] = STATE(96),
    [sym_list_notation] = STATE(96),
    [sym_curly_bracketed_notation] = STATE(96),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(164),
  },
  [28] = {
    [sym__term] = STATE(152),
    [sym__compound_term] = STATE(152),
    [sym__atomic_term] = STATE(152),
    [sym_number] = STATE(152),
    [sym_negative_number] = STATE(152),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(152),
    [sym__operator_notation] = STATE(152),
    [sym_operation_1200xfx] = STATE(152),
    [sym_operation_1200fx] = STATE(152),
    [sym_operation_1100xfy] = STATE(152),
    [sym_operation_1050xfy] = STATE(152),
    [sym_operation_1000xfy] = STATE(152),
    [sym_operation_900fy] = STATE(152),
    [sym_operation_700xfx] = STATE(152),
    [sym_operation_500yfx] = STATE(152),
    [sym_operation_400yfx] = STATE(152),
    [sym_operation_200xfx] = STATE(152),
    [sym_operation_200xfy] = STATE(152),
    [sym_operation_200fy] = STATE(152),
    [sym_list_notation] = STATE(152),
    [sym_curly_bracketed_notation] = STATE(152),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(166),
  },
  [29] = {
    [sym__term] = STATE(130),
    [sym__compound_term] = STATE(130),
    [sym__atomic_term] = STATE(130),
    [sym_number] = STATE(130),
    [sym_negative_number] = STATE(130),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(130),
    [sym__operator_notation] = STATE(130),
    [sym_operation_1200xfx] = STATE(130),
    [sym_operation_1200fx] = STATE(130),
    [sym_operation_1100xfy] = STATE(130),
    [sym_operation_1050xfy] = STATE(130),
    [sym_operation_1000xfy] = STATE(130),
    [sym_operation_900fy] = STATE(130),
    [sym_operation_700xfx] = STATE(130),
    [sym_operation_500yfx] = STATE(130),
    [sym_operation_400yfx] = STATE(130),
    [sym_operation_200xfx] = STATE(130),
    [sym_operation_200xfy] = STATE(130),
    [sym_operation_200fy] = STATE(130),
    [sym_list_notation] = STATE(130),
    [sym_curly_bracketed_notation] = STATE(130),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(168),
  },
  [30] = {
    [sym__term] = STATE(153),
    [sym__compound_term] = STATE(153),
    [sym__atomic_term] = STATE(153),
    [sym_number] = STATE(153),
    [sym_negative_number] = STATE(153),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(153),
    [sym__operator_notation] = STATE(153),
    [sym_operation_1200xfx] = STATE(153),
    [sym_operation_1200fx] = STATE(153),
    [sym_operation_1100xfy] = STATE(153),
    [sym_operation_1050xfy] = STATE(153),
    [sym_operation_1000xfy] = STATE(153),
    [sym_operation_900fy] = STATE(153),
    [sym_operation_700xfx] = STATE(153),
    [sym_operation_500yfx] = STATE(153),
    [sym_operation_400yfx] = STATE(153),
    [sym_operation_200xfx] = STATE(153),
    [sym_operation_200xfy] = STATE(153),
    [sym_operation_200fy] = STATE(153),
    [sym_list_notation] = STATE(153),
    [sym_curly_bracketed_notation] = STATE(153),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(170),
  },
  [31] = {
    [sym__term] = STATE(95),
    [sym__compound_term] = STATE(95),
    [sym__atomic_term] = STATE(95),
    [sym_number] = STATE(95),
    [sym_negative_number] = STATE(95),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(95),
    [sym__operator_notation] = STATE(95),
    [sym_operation_1200xfx] = STATE(95),
    [sym_operation_1200fx] = STATE(95),
    [sym_operation_1100xfy] = STATE(95),
    [sym_operation_1050xfy] = STATE(95),
    [sym_operation_1000xfy] = STATE(95),
    [sym_operation_900fy] = STATE(95),
    [sym_operation_700xfx] = STATE(95),
    [sym_operation_500yfx] = STATE(95),
    [sym_operation_400yfx] = STATE(95),
    [sym_operation_200xfx] = STATE(95),
    [sym_operation_200xfy] = STATE(95),
    [sym_operation_200fy] = STATE(95),
    [sym_list_notation] = STATE(95),
    [sym_curly_bracketed_notation] = STATE(95),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(172),
  },
  [32] = {
    [sym__term] = STATE(94),
    [sym__compound_term] = STATE(94),
    [sym__atomic_term] = STATE(94),
    [sym_number] = STATE(94),
    [sym_negative_number] = STATE(94),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(94),
    [sym__operator_notation] = STATE(94),
    [sym_operation_1200xfx] = STATE(94),
    [sym_operation_1200fx] = STATE(94),
    [sym_operation_1100xfy] = STATE(94),
    [sym_operation_1050xfy] = STATE(94),
    [sym_operation_1000xfy] = STATE(94),
    [sym_operation_900fy] = STATE(94),
    [sym_operation_700xfx] = STATE(94),
    [sym_operation_500yfx] = STATE(94),
    [sym_operation_400yfx] = STATE(94),
    [sym_operation_200xfx] = STATE(94),
    [sym_operation_200xfy] = STATE(94),
    [sym_operation_200fy] = STATE(94),
    [sym_list_notation] = STATE(94),
    [sym_curly_bracketed_notation] = STATE(94),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(174),
  },
  [33] = {
    [sym__term] = STATE(135),
    [sym__compound_term] = STATE(135),
    [sym__atomic_term] = STATE(135),
    [sym_number] = STATE(135),
    [sym_negative_number] = STATE(135),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(135),
    [sym__operator_notation] = STATE(135),
    [sym_operation_1200xfx] = STATE(135),
    [sym_operation_1200fx] = STATE(135),
    [sym_operation_1100xfy] = STATE(135),
    [sym_operation_1050xfy] = STATE(135),
    [sym_operation_1000xfy] = STATE(135),
    [sym_operation_900fy] = STATE(135),
    [sym_operation_700xfx] = STATE(135),
    [sym_operation_500yfx] = STATE(135),
    [sym_operation_400yfx] = STATE(135),
    [sym_operation_200xfx] = STATE(135),
    [sym_operation_200xfy] = STATE(135),
    [sym_operation_200fy] = STATE(135),
    [sym_list_notation] = STATE(135),
    [sym_curly_bracketed_notation] = STATE(135),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(176),
  },
  [34] = {
    [sym__term] = STATE(184),
    [sym__compound_term] = STATE(184),
    [sym__atomic_term] = STATE(184),
    [sym_number] = STATE(184),
    [sym_negative_number] = STATE(184),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(184),
    [sym__operator_notation] = STATE(184),
    [sym_operation_1200xfx] = STATE(184),
    [sym_operation_1200fx] = STATE(184),
    [sym_operation_1100xfy] = STATE(184),
    [sym_operation_1050xfy] = STATE(184),
    [sym_operation_1000xfy] = STATE(184),
    [sym_operation_900fy] = STATE(184),
    [sym_operation_700xfx] = STATE(184),
    [sym_operation_500yfx] = STATE(184),
    [sym_operation_400yfx] = STATE(184),
    [sym_operation_200xfx] = STATE(184),
    [sym_operation_200xfy] = STATE(184),
    [sym_operation_200fy] = STATE(184),
    [sym_list_notation] = STATE(184),
    [sym_curly_bracketed_notation] = STATE(184),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(178),
  },
  [35] = {
    [sym__term] = STATE(183),
    [sym__compound_term] = STATE(183),
    [sym__atomic_term] = STATE(183),
    [sym_number] = STATE(183),
    [sym_negative_number] = STATE(183),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(183),
    [sym__operator_notation] = STATE(183),
    [sym_operation_1200xfx] = STATE(183),
    [sym_operation_1200fx] = STATE(183),
    [sym_operation_1100xfy] = STATE(183),
    [sym_operation_1050xfy] = STATE(183),
    [sym_operation_1000xfy] = STATE(183),
    [sym_operation_900fy] = STATE(183),
    [sym_operation_700xfx] = STATE(183),
    [sym_operation_500yfx] = STATE(183),
    [sym_operation_400yfx] = STATE(183),
    [sym_operation_200xfx] = STATE(183),
    [sym_operation_200xfy] = STATE(183),
    [sym_operation_200fy] = STATE(183),
    [sym_list_notation] = STATE(183),
    [sym_curly_bracketed_notation] = STATE(183),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(180),
  },
  [36] = {
    [sym__term] = STATE(182),
    [sym__compound_term] = STATE(182),
    [sym__atomic_term] = STATE(182),
    [sym_number] = STATE(182),
    [sym_negative_number] = STATE(182),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(182),
    [sym__operator_notation] = STATE(182),
    [sym_operation_1200xfx] = STATE(182),
    [sym_operation_1200fx] = STATE(182),
    [sym_operation_1100xfy] = STATE(182),
    [sym_operation_1050xfy] = STATE(182),
    [sym_operation_1000xfy] = STATE(182),
    [sym_operation_900fy] = STATE(182),
    [sym_operation_700xfx] = STATE(182),
    [sym_operation_500yfx] = STATE(182),
    [sym_operation_400yfx] = STATE(182),
    [sym_operation_200xfx] = STATE(182),
    [sym_operation_200xfy] = STATE(182),
    [sym_operation_200fy] = STATE(182),
    [sym_list_notation] = STATE(182),
    [sym_curly_bracketed_notation] = STATE(182),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(182),
  },
  [37] = {
    [sym__term] = STATE(181),
    [sym__compound_term] = STATE(181),
    [sym__atomic_term] = STATE(181),
    [sym_number] = STATE(181),
    [sym_negative_number] = STATE(181),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(181),
    [sym__operator_notation] = STATE(181),
    [sym_operation_1200xfx] = STATE(181),
    [sym_operation_1200fx] = STATE(181),
    [sym_operation_1100xfy] = STATE(181),
    [sym_operation_1050xfy] = STATE(181),
    [sym_operation_1000xfy] = STATE(181),
    [sym_operation_900fy] = STATE(181),
    [sym_operation_700xfx] = STATE(181),
    [sym_operation_500yfx] = STATE(181),
    [sym_operation_400yfx] = STATE(181),
    [sym_operation_200xfx] = STATE(181),
    [sym_operation_200xfy] = STATE(181),
    [sym_operation_200fy] = STATE(181),
    [sym_list_notation] = STATE(181),
    [sym_curly_bracketed_notation] = STATE(181),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(184),
  },
  [38] = {
    [sym__term] = STATE(180),
    [sym__compound_term] = STATE(180),
    [sym__atomic_term] = STATE(180),
    [sym_number] = STATE(180),
    [sym_negative_number] = STATE(180),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(180),
    [sym__operator_notation] = STATE(180),
    [sym_operation_1200xfx] = STATE(180),
    [sym_operation_1200fx] = STATE(180),
    [sym_operation_1100xfy] = STATE(180),
    [sym_operation_1050xfy] = STATE(180),
    [sym_operation_1000xfy] = STATE(180),
    [sym_operation_900fy] = STATE(180),
    [sym_operation_700xfx] = STATE(180),
    [sym_operation_500yfx] = STATE(180),
    [sym_operation_400yfx] = STATE(180),
    [sym_operation_200xfx] = STATE(180),
    [sym_operation_200xfy] = STATE(180),
    [sym_operation_200fy] = STATE(180),
    [sym_list_notation] = STATE(180),
    [sym_curly_bracketed_notation] = STATE(180),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(186),
  },
  [39] = {
    [sym__term] = STATE(179),
    [sym__compound_term] = STATE(179),
    [sym__atomic_term] = STATE(179),
    [sym_number] = STATE(179),
    [sym_negative_number] = STATE(179),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(179),
    [sym__operator_notation] = STATE(179),
    [sym_operation_1200xfx] = STATE(179),
    [sym_operation_1200fx] = STATE(179),
    [sym_operation_1100xfy] = STATE(179),
    [sym_operation_1050xfy] = STATE(179),
    [sym_operation_1000xfy] = STATE(179),
    [sym_operation_900fy] = STATE(179),
    [sym_operation_700xfx] = STATE(179),
    [sym_operation_500yfx] = STATE(179),
    [sym_operation_400yfx] = STATE(179),
    [sym_operation_200xfx] = STATE(179),
    [sym_operation_200xfy] = STATE(179),
    [sym_operation_200fy] = STATE(179),
    [sym_list_notation] = STATE(179),
    [sym_curly_bracketed_notation] = STATE(179),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(188),
  },
  [40] = {
    [sym__term] = STATE(178),
    [sym__compound_term] = STATE(178),
    [sym__atomic_term] = STATE(178),
    [sym_number] = STATE(178),
    [sym_negative_number] = STATE(178),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(178),
    [sym__operator_notation] = STATE(178),
    [sym_operation_1200xfx] = STATE(178),
    [sym_operation_1200fx] = STATE(178),
    [sym_operation_1100xfy] = STATE(178),
    [sym_operation_1050xfy] = STATE(178),
    [sym_operation_1000xfy] = STATE(178),
    [sym_operation_900fy] = STATE(178),
    [sym_operation_700xfx] = STATE(178),
    [sym_operation_500yfx] = STATE(178),
    [sym_operation_400yfx] = STATE(178),
    [sym_operation_200xfx] = STATE(178),
    [sym_operation_200xfy] = STATE(178),
    [sym_operation_200fy] = STATE(178),
    [sym_list_notation] = STATE(178),
    [sym_curly_bracketed_notation] = STATE(178),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(190),
  },
  [41] = {
    [sym__term] = STATE(177),
    [sym__compound_term] = STATE(177),
    [sym__atomic_term] = STATE(177),
    [sym_number] = STATE(177),
    [sym_negative_number] = STATE(177),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(177),
    [sym__operator_notation] = STATE(177),
    [sym_operation_1200xfx] = STATE(177),
    [sym_operation_1200fx] = STATE(177),
    [sym_operation_1100xfy] = STATE(177),
    [sym_operation_1050xfy] = STATE(177),
    [sym_operation_1000xfy] = STATE(177),
    [sym_operation_900fy] = STATE(177),
    [sym_operation_700xfx] = STATE(177),
    [sym_operation_500yfx] = STATE(177),
    [sym_operation_400yfx] = STATE(177),
    [sym_operation_200xfx] = STATE(177),
    [sym_operation_200xfy] = STATE(177),
    [sym_operation_200fy] = STATE(177),
    [sym_list_notation] = STATE(177),
    [sym_curly_bracketed_notation] = STATE(177),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(192),
  },
  [42] = {
    [sym__term] = STATE(93),
    [sym__compound_term] = STATE(93),
    [sym__atomic_term] = STATE(93),
    [sym_number] = STATE(93),
    [sym_negative_number] = STATE(93),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(93),
    [sym__operator_notation] = STATE(93),
    [sym_operation_1200xfx] = STATE(93),
    [sym_operation_1200fx] = STATE(93),
    [sym_operation_1100xfy] = STATE(93),
    [sym_operation_1050xfy] = STATE(93),
    [sym_operation_1000xfy] = STATE(93),
    [sym_operation_900fy] = STATE(93),
    [sym_operation_700xfx] = STATE(93),
    [sym_operation_500yfx] = STATE(93),
    [sym_operation_400yfx] = STATE(93),
    [sym_operation_200xfx] = STATE(93),
    [sym_operation_200xfy] = STATE(93),
    [sym_operation_200fy] = STATE(93),
    [sym_list_notation] = STATE(93),
    [sym_curly_bracketed_notation] = STATE(93),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(194),
  },
  [43] = {
    [sym__term] = STATE(131),
    [sym__compound_term] = STATE(131),
    [sym__atomic_term] = STATE(131),
    [sym_number] = STATE(131),
    [sym_negative_number] = STATE(131),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(131),
    [sym__operator_notation] = STATE(131),
    [sym_operation_1200xfx] = STATE(131),
    [sym_operation_1200fx] = STATE(131),
    [sym_operation_1100xfy] = STATE(131),
    [sym_operation_1050xfy] = STATE(131),
    [sym_operation_1000xfy] = STATE(131),
    [sym_operation_900fy] = STATE(131),
    [sym_operation_700xfx] = STATE(131),
    [sym_operation_500yfx] = STATE(131),
    [sym_operation_400yfx] = STATE(131),
    [sym_operation_200xfx] = STATE(131),
    [sym_operation_200xfy] = STATE(131),
    [sym_operation_200fy] = STATE(131),
    [sym_list_notation] = STATE(131),
    [sym_curly_bracketed_notation] = STATE(131),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(196),
  },
  [44] = {
    [sym__term] = STATE(154),
    [sym__compound_term] = STATE(154),
    [sym__atomic_term] = STATE(154),
    [sym_number] = STATE(154),
    [sym_negative_number] = STATE(154),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(154),
    [sym__operator_notation] = STATE(154),
    [sym_operation_1200xfx] = STATE(154),
    [sym_operation_1200fx] = STATE(154),
    [sym_operation_1100xfy] = STATE(154),
    [sym_operation_1050xfy] = STATE(154),
    [sym_operation_1000xfy] = STATE(154),
    [sym_operation_900fy] = STATE(154),
    [sym_operation_700xfx] = STATE(154),
    [sym_operation_500yfx] = STATE(154),
    [sym_operation_400yfx] = STATE(154),
    [sym_operation_200xfx] = STATE(154),
    [sym_operation_200xfy] = STATE(154),
    [sym_operation_200fy] = STATE(154),
    [sym_list_notation] = STATE(154),
    [sym_curly_bracketed_notation] = STATE(154),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(198),
  },
  [45] = {
    [sym__term] = STATE(133),
    [sym__compound_term] = STATE(133),
    [sym__atomic_term] = STATE(133),
    [sym_number] = STATE(133),
    [sym_negative_number] = STATE(133),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(133),
    [sym__operator_notation] = STATE(133),
    [sym_operation_1200xfx] = STATE(133),
    [sym_operation_1200fx] = STATE(133),
    [sym_operation_1100xfy] = STATE(133),
    [sym_operation_1050xfy] = STATE(133),
    [sym_operation_1000xfy] = STATE(133),
    [sym_operation_900fy] = STATE(133),
    [sym_operation_700xfx] = STATE(133),
    [sym_operation_500yfx] = STATE(133),
    [sym_operation_400yfx] = STATE(133),
    [sym_operation_200xfx] = STATE(133),
    [sym_operation_200xfy] = STATE(133),
    [sym_operation_200fy] = STATE(133),
    [sym_list_notation] = STATE(133),
    [sym_curly_bracketed_notation] = STATE(133),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(200),
  },
  [46] = {
    [sym__term] = STATE(155),
    [sym__compound_term] = STATE(155),
    [sym__atomic_term] = STATE(155),
    [sym_number] = STATE(155),
    [sym_negative_number] = STATE(155),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(155),
    [sym__operator_notation] = STATE(155),
    [sym_operation_1200xfx] = STATE(155),
    [sym_operation_1200fx] = STATE(155),
    [sym_operation_1100xfy] = STATE(155),
    [sym_operation_1050xfy] = STATE(155),
    [sym_operation_1000xfy] = STATE(155),
    [sym_operation_900fy] = STATE(155),
    [sym_operation_700xfx] = STATE(155),
    [sym_operation_500yfx] = STATE(155),
    [sym_operation_400yfx] = STATE(155),
    [sym_operation_200xfx] = STATE(155),
    [sym_operation_200xfy] = STATE(155),
    [sym_operation_200fy] = STATE(155),
    [sym_list_notation] = STATE(155),
    [sym_curly_bracketed_notation] = STATE(155),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(202),
  },
  [47] = {
    [sym__term] = STATE(156),
    [sym__compound_term] = STATE(156),
    [sym__atomic_term] = STATE(156),
    [sym_number] = STATE(156),
    [sym_negative_number] = STATE(156),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(156),
    [sym__operator_notation] = STATE(156),
    [sym_operation_1200xfx] = STATE(156),
    [sym_operation_1200fx] = STATE(156),
    [sym_operation_1100xfy] = STATE(156),
    [sym_operation_1050xfy] = STATE(156),
    [sym_operation_1000xfy] = STATE(156),
    [sym_operation_900fy] = STATE(156),
    [sym_operation_700xfx] = STATE(156),
    [sym_operation_500yfx] = STATE(156),
    [sym_operation_400yfx] = STATE(156),
    [sym_operation_200xfx] = STATE(156),
    [sym_operation_200xfy] = STATE(156),
    [sym_operation_200fy] = STATE(156),
    [sym_list_notation] = STATE(156),
    [sym_curly_bracketed_notation] = STATE(156),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(204),
  },
  [48] = {
    [sym__term] = STATE(166),
    [sym__compound_term] = STATE(166),
    [sym__atomic_term] = STATE(166),
    [sym_number] = STATE(166),
    [sym_negative_number] = STATE(166),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(166),
    [sym__operator_notation] = STATE(166),
    [sym_operation_1200xfx] = STATE(166),
    [sym_operation_1200fx] = STATE(166),
    [sym_operation_1100xfy] = STATE(166),
    [sym_operation_1050xfy] = STATE(166),
    [sym_operation_1000xfy] = STATE(166),
    [sym_operation_900fy] = STATE(166),
    [sym_operation_700xfx] = STATE(166),
    [sym_operation_500yfx] = STATE(166),
    [sym_operation_400yfx] = STATE(166),
    [sym_operation_200xfx] = STATE(166),
    [sym_operation_200xfy] = STATE(166),
    [sym_operation_200fy] = STATE(166),
    [sym_list_notation] = STATE(166),
    [sym_curly_bracketed_notation] = STATE(166),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(206),
  },
  [49] = {
    [sym__term] = STATE(167),
    [sym__compound_term] = STATE(167),
    [sym__atomic_term] = STATE(167),
    [sym_number] = STATE(167),
    [sym_negative_number] = STATE(167),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(167),
    [sym__operator_notation] = STATE(167),
    [sym_operation_1200xfx] = STATE(167),
    [sym_operation_1200fx] = STATE(167),
    [sym_operation_1100xfy] = STATE(167),
    [sym_operation_1050xfy] = STATE(167),
    [sym_operation_1000xfy] = STATE(167),
    [sym_operation_900fy] = STATE(167),
    [sym_operation_700xfx] = STATE(167),
    [sym_operation_500yfx] = STATE(167),
    [sym_operation_400yfx] = STATE(167),
    [sym_operation_200xfx] = STATE(167),
    [sym_operation_200xfy] = STATE(167),
    [sym_operation_200fy] = STATE(167),
    [sym_list_notation] = STATE(167),
    [sym_curly_bracketed_notation] = STATE(167),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(208),
  },
  [50] = {
    [sym__term] = STATE(169),
    [sym__compound_term] = STATE(169),
    [sym__atomic_term] = STATE(169),
    [sym_number] = STATE(169),
    [sym_negative_number] = STATE(169),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(169),
    [sym__operator_notation] = STATE(169),
    [sym_operation_1200xfx] = STATE(169),
    [sym_operation_1200fx] = STATE(169),
    [sym_operation_1100xfy] = STATE(169),
    [sym_operation_1050xfy] = STATE(169),
    [sym_operation_1000xfy] = STATE(169),
    [sym_operation_900fy] = STATE(169),
    [sym_operation_700xfx] = STATE(169),
    [sym_operation_500yfx] = STATE(169),
    [sym_operation_400yfx] = STATE(169),
    [sym_operation_200xfx] = STATE(169),
    [sym_operation_200xfy] = STATE(169),
    [sym_operation_200fy] = STATE(169),
    [sym_list_notation] = STATE(169),
    [sym_curly_bracketed_notation] = STATE(169),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(210),
  },
  [51] = {
    [sym__term] = STATE(170),
    [sym__compound_term] = STATE(170),
    [sym__atomic_term] = STATE(170),
    [sym_number] = STATE(170),
    [sym_negative_number] = STATE(170),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(170),
    [sym__operator_notation] = STATE(170),
    [sym_operation_1200xfx] = STATE(170),
    [sym_operation_1200fx] = STATE(170),
    [sym_operation_1100xfy] = STATE(170),
    [sym_operation_1050xfy] = STATE(170),
    [sym_operation_1000xfy] = STATE(170),
    [sym_operation_900fy] = STATE(170),
    [sym_operation_700xfx] = STATE(170),
    [sym_operation_500yfx] = STATE(170),
    [sym_operation_400yfx] = STATE(170),
    [sym_operation_200xfx] = STATE(170),
    [sym_operation_200xfy] = STATE(170),
    [sym_operation_200fy] = STATE(170),
    [sym_list_notation] = STATE(170),
    [sym_curly_bracketed_notation] = STATE(170),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(212),
  },
  [52] = {
    [sym__term] = STATE(171),
    [sym__compound_term] = STATE(171),
    [sym__atomic_term] = STATE(171),
    [sym_number] = STATE(171),
    [sym_negative_number] = STATE(171),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(171),
    [sym__operator_notation] = STATE(171),
    [sym_operation_1200xfx] = STATE(171),
    [sym_operation_1200fx] = STATE(171),
    [sym_operation_1100xfy] = STATE(171),
    [sym_operation_1050xfy] = STATE(171),
    [sym_operation_1000xfy] = STATE(171),
    [sym_operation_900fy] = STATE(171),
    [sym_operation_700xfx] = STATE(171),
    [sym_operation_500yfx] = STATE(171),
    [sym_operation_400yfx] = STATE(171),
    [sym_operation_200xfx] = STATE(171),
    [sym_operation_200xfy] = STATE(171),
    [sym_operation_200fy] = STATE(171),
    [sym_list_notation] = STATE(171),
    [sym_curly_bracketed_notation] = STATE(171),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(214),
  },
  [53] = {
    [sym__term] = STATE(146),
    [sym__compound_term] = STATE(146),
    [sym__atomic_term] = STATE(146),
    [sym_number] = STATE(146),
    [sym_negative_number] = STATE(146),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(146),
    [sym__operator_notation] = STATE(146),
    [sym_operation_1200xfx] = STATE(146),
    [sym_operation_1200fx] = STATE(146),
    [sym_operation_1100xfy] = STATE(146),
    [sym_operation_1050xfy] = STATE(146),
    [sym_operation_1000xfy] = STATE(146),
    [sym_operation_900fy] = STATE(146),
    [sym_operation_700xfx] = STATE(146),
    [sym_operation_500yfx] = STATE(146),
    [sym_operation_400yfx] = STATE(146),
    [sym_operation_200xfx] = STATE(146),
    [sym_operation_200xfy] = STATE(146),
    [sym_operation_200fy] = STATE(146),
    [sym_list_notation] = STATE(146),
    [sym_curly_bracketed_notation] = STATE(146),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(216),
  },
  [54] = {
    [sym__term] = STATE(116),
    [sym__compound_term] = STATE(116),
    [sym__atomic_term] = STATE(116),
    [sym_number] = STATE(116),
    [sym_negative_number] = STATE(116),
    [sym_atom] = STATE(128),
    [sym_functional_notation] = STATE(116),
    [sym__operator_notation] = STATE(116),
    [sym_operation_1200xfx] = STATE(116),
    [sym_operation_1200fx] = STATE(116),
    [sym_operation_1100xfy] = STATE(116),
    [sym_operation_1050xfy] = STATE(116),
    [sym_operation_1000xfy] = STATE(116),
    [sym_operation_900fy] = STATE(116),
    [sym_operation_700xfx] = STATE(116),
    [sym_operation_500yfx] = STATE(116),
    [sym_operation_400yfx] = STATE(116),
    [sym_operation_200xfx] = STATE(116),
    [sym_operation_200xfy] = STATE(116),
    [sym_operation_200fy] = STATE(116),
    [sym_list_notation] = STATE(116),
    [sym_curly_bracketed_notation] = STATE(116),
    [aux_sym_number_token1] = ACTIONS(7),
    [aux_sym_number_token2] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_atom_token1] = ACTIONS(11),
    [sym_empty_list] = ACTIONS(11),
    [sym_empty_curly_brackets] = ACTIONS(11),
    [sym_variable_term] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_operator_1200fx] = ACTIONS(17),
    [sym_operator_900fy] = ACTIONS(19),
    [sym_operator_200fy] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_double_quoted_list_notation] = ACTIONS(218),
  },
  [55] = {
    [sym__term] = STATE(185),
    [sym__compound_term] = STATE(185),
    [sym__atomic_term] = STATE(185),
    [sym_number] = STATE(185),
    [sym_negative_number] = STATE(185),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(185),
    [sym__operator_notation] = STATE(185),
    [sym_operation_1200xfx] = STATE(185),
    [sym_operation_1200fx] = STATE(185),
    [sym_operation_1100xfy] = STATE(185),
    [sym_operation_1050xfy] = STATE(185),
    [sym_operation_1000xfy] = STATE(185),
    [sym_operation_900fy] = STATE(185),
    [sym_operation_700xfx] = STATE(185),
    [sym_operation_500yfx] = STATE(185),
    [sym_operation_400yfx] = STATE(185),
    [sym_operation_200xfx] = STATE(185),
    [sym_operation_200xfy] = STATE(185),
    [sym_operation_200fy] = STATE(185),
    [sym_list_notation] = STATE(185),
    [sym_curly_bracketed_notation] = STATE(185),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(220),
  },
  [56] = {
    [sym__term] = STATE(176),
    [sym__compound_term] = STATE(176),
    [sym__atomic_term] = STATE(176),
    [sym_number] = STATE(176),
    [sym_negative_number] = STATE(176),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(176),
    [sym__operator_notation] = STATE(176),
    [sym_operation_1200xfx] = STATE(176),
    [sym_operation_1200fx] = STATE(176),
    [sym_operation_1100xfy] = STATE(176),
    [sym_operation_1050xfy] = STATE(176),
    [sym_operation_1000xfy] = STATE(176),
    [sym_operation_900fy] = STATE(176),
    [sym_operation_700xfx] = STATE(176),
    [sym_operation_500yfx] = STATE(176),
    [sym_operation_400yfx] = STATE(176),
    [sym_operation_200xfx] = STATE(176),
    [sym_operation_200xfy] = STATE(176),
    [sym_operation_200fy] = STATE(176),
    [sym_list_notation] = STATE(176),
    [sym_curly_bracketed_notation] = STATE(176),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(222),
  },
  [57] = {
    [sym__term] = STATE(175),
    [sym__compound_term] = STATE(175),
    [sym__atomic_term] = STATE(175),
    [sym_number] = STATE(175),
    [sym_negative_number] = STATE(175),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(175),
    [sym__operator_notation] = STATE(175),
    [sym_operation_1200xfx] = STATE(175),
    [sym_operation_1200fx] = STATE(175),
    [sym_operation_1100xfy] = STATE(175),
    [sym_operation_1050xfy] = STATE(175),
    [sym_operation_1000xfy] = STATE(175),
    [sym_operation_900fy] = STATE(175),
    [sym_operation_700xfx] = STATE(175),
    [sym_operation_500yfx] = STATE(175),
    [sym_operation_400yfx] = STATE(175),
    [sym_operation_200xfx] = STATE(175),
    [sym_operation_200xfy] = STATE(175),
    [sym_operation_200fy] = STATE(175),
    [sym_list_notation] = STATE(175),
    [sym_curly_bracketed_notation] = STATE(175),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(224),
  },
  [58] = {
    [sym__term] = STATE(174),
    [sym__compound_term] = STATE(174),
    [sym__atomic_term] = STATE(174),
    [sym_number] = STATE(174),
    [sym_negative_number] = STATE(174),
    [sym_atom] = STATE(172),
    [sym_functional_notation] = STATE(174),
    [sym__operator_notation] = STATE(174),
    [sym_operation_1200xfx] = STATE(174),
    [sym_operation_1200fx] = STATE(174),
    [sym_operation_1100xfy] = STATE(174),
    [sym_operation_1050xfy] = STATE(174),
    [sym_operation_1000xfy] = STATE(174),
    [sym_operation_900fy] = STATE(174),
    [sym_operation_700xfx] = STATE(174),
    [sym_operation_500yfx] = STATE(174),
    [sym_operation_400yfx] = STATE(174),
    [sym_operation_200xfx] = STATE(174),
    [sym_operation_200xfy] = STATE(174),
    [sym_operation_200fy] = STATE(174),
    [sym_list_notation] = STATE(174),
    [sym_curly_bracketed_notation] = STATE(174),
    [aux_sym_number_token1] = ACTIONS(104),
    [aux_sym_number_token2] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_atom_token1] = ACTIONS(108),
    [sym_empty_list] = ACTIONS(108),
    [sym_empty_curly_brackets] = ACTIONS(108),
    [sym_variable_term] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(112),
    [sym_operator_1200fx] = ACTIONS(114),
    [sym_operator_900fy] = ACTIONS(116),
    [sym_operator_200fy] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_double_quoted_list_notation] = ACTIONS(226),
  },
  [59] = {
    [sym__term] = STATE(165),
    [sym__compound_term] = STATE(165),
    [sym__atomic_term] = STATE(165),
    [sym_number] = STATE(165),
    [sym_negative_number] = STATE(165),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(165),
    [sym__operator_notation] = STATE(165),
    [sym_operation_1200xfx] = STATE(165),
    [sym_operation_1200fx] = STATE(165),
    [sym_operation_1100xfy] = STATE(165),
    [sym_operation_1050xfy] = STATE(165),
    [sym_operation_1000xfy] = STATE(165),
    [sym_operation_900fy] = STATE(165),
    [sym_operation_700xfx] = STATE(165),
    [sym_operation_500yfx] = STATE(165),
    [sym_operation_400yfx] = STATE(165),
    [sym_operation_200xfx] = STATE(165),
    [sym_operation_200xfy] = STATE(165),
    [sym_operation_200fy] = STATE(165),
    [sym_list_notation] = STATE(165),
    [sym_curly_bracketed_notation] = STATE(165),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(228),
  },
  [60] = {
    [sym__term] = STATE(164),
    [sym__compound_term] = STATE(164),
    [sym__atomic_term] = STATE(164),
    [sym_number] = STATE(164),
    [sym_negative_number] = STATE(164),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(164),
    [sym__operator_notation] = STATE(164),
    [sym_operation_1200xfx] = STATE(164),
    [sym_operation_1200fx] = STATE(164),
    [sym_operation_1100xfy] = STATE(164),
    [sym_operation_1050xfy] = STATE(164),
    [sym_operation_1000xfy] = STATE(164),
    [sym_operation_900fy] = STATE(164),
    [sym_operation_700xfx] = STATE(164),
    [sym_operation_500yfx] = STATE(164),
    [sym_operation_400yfx] = STATE(164),
    [sym_operation_200xfx] = STATE(164),
    [sym_operation_200xfy] = STATE(164),
    [sym_operation_200fy] = STATE(164),
    [sym_list_notation] = STATE(164),
    [sym_curly_bracketed_notation] = STATE(164),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(230),
  },
  [61] = {
    [sym__term] = STATE(163),
    [sym__compound_term] = STATE(163),
    [sym__atomic_term] = STATE(163),
    [sym_number] = STATE(163),
    [sym_negative_number] = STATE(163),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(163),
    [sym__operator_notation] = STATE(163),
    [sym_operation_1200xfx] = STATE(163),
    [sym_operation_1200fx] = STATE(163),
    [sym_operation_1100xfy] = STATE(163),
    [sym_operation_1050xfy] = STATE(163),
    [sym_operation_1000xfy] = STATE(163),
    [sym_operation_900fy] = STATE(163),
    [sym_operation_700xfx] = STATE(163),
    [sym_operation_500yfx] = STATE(163),
    [sym_operation_400yfx] = STATE(163),
    [sym_operation_200xfx] = STATE(163),
    [sym_operation_200xfy] = STATE(163),
    [sym_operation_200fy] = STATE(163),
    [sym_list_notation] = STATE(163),
    [sym_curly_bracketed_notation] = STATE(163),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(232),
  },
  [62] = {
    [sym__term] = STATE(139),
    [sym__compound_term] = STATE(139),
    [sym__atomic_term] = STATE(139),
    [sym_number] = STATE(139),
    [sym_negative_number] = STATE(139),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(139),
    [sym__operator_notation] = STATE(139),
    [sym_operation_1200xfx] = STATE(139),
    [sym_operation_1200fx] = STATE(139),
    [sym_operation_1100xfy] = STATE(139),
    [sym_operation_1050xfy] = STATE(139),
    [sym_operation_1000xfy] = STATE(139),
    [sym_operation_900fy] = STATE(139),
    [sym_operation_700xfx] = STATE(139),
    [sym_operation_500yfx] = STATE(139),
    [sym_operation_400yfx] = STATE(139),
    [sym_operation_200xfx] = STATE(139),
    [sym_operation_200xfy] = STATE(139),
    [sym_operation_200fy] = STATE(139),
    [sym_list_notation] = STATE(139),
    [sym_curly_bracketed_notation] = STATE(139),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(234),
  },
  [63] = {
    [sym__term] = STATE(161),
    [sym__compound_term] = STATE(161),
    [sym__atomic_term] = STATE(161),
    [sym_number] = STATE(161),
    [sym_negative_number] = STATE(161),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(161),
    [sym__operator_notation] = STATE(161),
    [sym_operation_1200xfx] = STATE(161),
    [sym_operation_1200fx] = STATE(161),
    [sym_operation_1100xfy] = STATE(161),
    [sym_operation_1050xfy] = STATE(161),
    [sym_operation_1000xfy] = STATE(161),
    [sym_operation_900fy] = STATE(161),
    [sym_operation_700xfx] = STATE(161),
    [sym_operation_500yfx] = STATE(161),
    [sym_operation_400yfx] = STATE(161),
    [sym_operation_200xfx] = STATE(161),
    [sym_operation_200xfy] = STATE(161),
    [sym_operation_200fy] = STATE(161),
    [sym_list_notation] = STATE(161),
    [sym_curly_bracketed_notation] = STATE(161),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(236),
  },
  [64] = {
    [sym__term] = STATE(160),
    [sym__compound_term] = STATE(160),
    [sym__atomic_term] = STATE(160),
    [sym_number] = STATE(160),
    [sym_negative_number] = STATE(160),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(160),
    [sym__operator_notation] = STATE(160),
    [sym_operation_1200xfx] = STATE(160),
    [sym_operation_1200fx] = STATE(160),
    [sym_operation_1100xfy] = STATE(160),
    [sym_operation_1050xfy] = STATE(160),
    [sym_operation_1000xfy] = STATE(160),
    [sym_operation_900fy] = STATE(160),
    [sym_operation_700xfx] = STATE(160),
    [sym_operation_500yfx] = STATE(160),
    [sym_operation_400yfx] = STATE(160),
    [sym_operation_200xfx] = STATE(160),
    [sym_operation_200xfy] = STATE(160),
    [sym_operation_200fy] = STATE(160),
    [sym_list_notation] = STATE(160),
    [sym_curly_bracketed_notation] = STATE(160),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(238),
  },
  [65] = {
    [sym__term] = STATE(108),
    [sym__compound_term] = STATE(108),
    [sym__atomic_term] = STATE(108),
    [sym_number] = STATE(108),
    [sym_negative_number] = STATE(108),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(108),
    [sym__operator_notation] = STATE(108),
    [sym_operation_1200xfx] = STATE(108),
    [sym_operation_1200fx] = STATE(108),
    [sym_operation_1100xfy] = STATE(108),
    [sym_operation_1050xfy] = STATE(108),
    [sym_operation_1000xfy] = STATE(108),
    [sym_operation_900fy] = STATE(108),
    [sym_operation_700xfx] = STATE(108),
    [sym_operation_500yfx] = STATE(108),
    [sym_operation_400yfx] = STATE(108),
    [sym_operation_200xfx] = STATE(108),
    [sym_operation_200xfy] = STATE(108),
    [sym_operation_200fy] = STATE(108),
    [sym_list_notation] = STATE(108),
    [sym_curly_bracketed_notation] = STATE(108),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(240),
  },
  [66] = {
    [sym__term] = STATE(145),
    [sym__compound_term] = STATE(145),
    [sym__atomic_term] = STATE(145),
    [sym_number] = STATE(145),
    [sym_negative_number] = STATE(145),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(145),
    [sym__operator_notation] = STATE(145),
    [sym_operation_1200xfx] = STATE(145),
    [sym_operation_1200fx] = STATE(145),
    [sym_operation_1100xfy] = STATE(145),
    [sym_operation_1050xfy] = STATE(145),
    [sym_operation_1000xfy] = STATE(145),
    [sym_operation_900fy] = STATE(145),
    [sym_operation_700xfx] = STATE(145),
    [sym_operation_500yfx] = STATE(145),
    [sym_operation_400yfx] = STATE(145),
    [sym_operation_200xfx] = STATE(145),
    [sym_operation_200xfy] = STATE(145),
    [sym_operation_200fy] = STATE(145),
    [sym_list_notation] = STATE(145),
    [sym_curly_bracketed_notation] = STATE(145),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(242),
  },
  [67] = {
    [sym__term] = STATE(107),
    [sym__compound_term] = STATE(107),
    [sym__atomic_term] = STATE(107),
    [sym_number] = STATE(107),
    [sym_negative_number] = STATE(107),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(107),
    [sym__operator_notation] = STATE(107),
    [sym_operation_1200xfx] = STATE(107),
    [sym_operation_1200fx] = STATE(107),
    [sym_operation_1100xfy] = STATE(107),
    [sym_operation_1050xfy] = STATE(107),
    [sym_operation_1000xfy] = STATE(107),
    [sym_operation_900fy] = STATE(107),
    [sym_operation_700xfx] = STATE(107),
    [sym_operation_500yfx] = STATE(107),
    [sym_operation_400yfx] = STATE(107),
    [sym_operation_200xfx] = STATE(107),
    [sym_operation_200xfy] = STATE(107),
    [sym_operation_200fy] = STATE(107),
    [sym_list_notation] = STATE(107),
    [sym_curly_bracketed_notation] = STATE(107),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(244),
  },
  [68] = {
    [sym__term] = STATE(159),
    [sym__compound_term] = STATE(159),
    [sym__atomic_term] = STATE(159),
    [sym_number] = STATE(159),
    [sym_negative_number] = STATE(159),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(159),
    [sym__operator_notation] = STATE(159),
    [sym_operation_1200xfx] = STATE(159),
    [sym_operation_1200fx] = STATE(159),
    [sym_operation_1100xfy] = STATE(159),
    [sym_operation_1050xfy] = STATE(159),
    [sym_operation_1000xfy] = STATE(159),
    [sym_operation_900fy] = STATE(159),
    [sym_operation_700xfx] = STATE(159),
    [sym_operation_500yfx] = STATE(159),
    [sym_operation_400yfx] = STATE(159),
    [sym_operation_200xfx] = STATE(159),
    [sym_operation_200xfy] = STATE(159),
    [sym_operation_200fy] = STATE(159),
    [sym_list_notation] = STATE(159),
    [sym_curly_bracketed_notation] = STATE(159),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(246),
  },
  [69] = {
    [sym__term] = STATE(158),
    [sym__compound_term] = STATE(158),
    [sym__atomic_term] = STATE(158),
    [sym_number] = STATE(158),
    [sym_negative_number] = STATE(158),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(158),
    [sym__operator_notation] = STATE(158),
    [sym_operation_1200xfx] = STATE(158),
    [sym_operation_1200fx] = STATE(158),
    [sym_operation_1100xfy] = STATE(158),
    [sym_operation_1050xfy] = STATE(158),
    [sym_operation_1000xfy] = STATE(158),
    [sym_operation_900fy] = STATE(158),
    [sym_operation_700xfx] = STATE(158),
    [sym_operation_500yfx] = STATE(158),
    [sym_operation_400yfx] = STATE(158),
    [sym_operation_200xfx] = STATE(158),
    [sym_operation_200xfy] = STATE(158),
    [sym_operation_200fy] = STATE(158),
    [sym_list_notation] = STATE(158),
    [sym_curly_bracketed_notation] = STATE(158),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(248),
  },
  [70] = {
    [sym__term] = STATE(157),
    [sym__compound_term] = STATE(157),
    [sym__atomic_term] = STATE(157),
    [sym_number] = STATE(157),
    [sym_negative_number] = STATE(157),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(157),
    [sym__operator_notation] = STATE(157),
    [sym_operation_1200xfx] = STATE(157),
    [sym_operation_1200fx] = STATE(157),
    [sym_operation_1100xfy] = STATE(157),
    [sym_operation_1050xfy] = STATE(157),
    [sym_operation_1000xfy] = STATE(157),
    [sym_operation_900fy] = STATE(157),
    [sym_operation_700xfx] = STATE(157),
    [sym_operation_500yfx] = STATE(157),
    [sym_operation_400yfx] = STATE(157),
    [sym_operation_200xfx] = STATE(157),
    [sym_operation_200xfy] = STATE(157),
    [sym_operation_200fy] = STATE(157),
    [sym_list_notation] = STATE(157),
    [sym_curly_bracketed_notation] = STATE(157),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(250),
  },
  [71] = {
    [sym__term] = STATE(102),
    [sym__compound_term] = STATE(102),
    [sym__atomic_term] = STATE(102),
    [sym_number] = STATE(102),
    [sym_negative_number] = STATE(102),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(102),
    [sym__operator_notation] = STATE(102),
    [sym_operation_1200xfx] = STATE(102),
    [sym_operation_1200fx] = STATE(102),
    [sym_operation_1100xfy] = STATE(102),
    [sym_operation_1050xfy] = STATE(102),
    [sym_operation_1000xfy] = STATE(102),
    [sym_operation_900fy] = STATE(102),
    [sym_operation_700xfx] = STATE(102),
    [sym_operation_500yfx] = STATE(102),
    [sym_operation_400yfx] = STATE(102),
    [sym_operation_200xfx] = STATE(102),
    [sym_operation_200xfy] = STATE(102),
    [sym_operation_200fy] = STATE(102),
    [sym_list_notation] = STATE(102),
    [sym_curly_bracketed_notation] = STATE(102),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(252),
  },
  [72] = {
    [sym__term] = STATE(97),
    [sym__compound_term] = STATE(97),
    [sym__atomic_term] = STATE(97),
    [sym_number] = STATE(97),
    [sym_negative_number] = STATE(97),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(97),
    [sym__operator_notation] = STATE(97),
    [sym_operation_1200xfx] = STATE(97),
    [sym_operation_1200fx] = STATE(97),
    [sym_operation_1100xfy] = STATE(97),
    [sym_operation_1050xfy] = STATE(97),
    [sym_operation_1000xfy] = STATE(97),
    [sym_operation_900fy] = STATE(97),
    [sym_operation_700xfx] = STATE(97),
    [sym_operation_500yfx] = STATE(97),
    [sym_operation_400yfx] = STATE(97),
    [sym_operation_200xfx] = STATE(97),
    [sym_operation_200xfy] = STATE(97),
    [sym_operation_200fy] = STATE(97),
    [sym_list_notation] = STATE(97),
    [sym_curly_bracketed_notation] = STATE(97),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(254),
  },
  [73] = {
    [sym__term] = STATE(141),
    [sym__compound_term] = STATE(141),
    [sym__atomic_term] = STATE(141),
    [sym_number] = STATE(141),
    [sym_negative_number] = STATE(141),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(141),
    [sym__operator_notation] = STATE(141),
    [sym_operation_1200xfx] = STATE(141),
    [sym_operation_1200fx] = STATE(141),
    [sym_operation_1100xfy] = STATE(141),
    [sym_operation_1050xfy] = STATE(141),
    [sym_operation_1000xfy] = STATE(141),
    [sym_operation_900fy] = STATE(141),
    [sym_operation_700xfx] = STATE(141),
    [sym_operation_500yfx] = STATE(141),
    [sym_operation_400yfx] = STATE(141),
    [sym_operation_200xfx] = STATE(141),
    [sym_operation_200xfy] = STATE(141),
    [sym_operation_200fy] = STATE(141),
    [sym_list_notation] = STATE(141),
    [sym_curly_bracketed_notation] = STATE(141),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(256),
  },
  [74] = {
    [sym__term] = STATE(140),
    [sym__compound_term] = STATE(140),
    [sym__atomic_term] = STATE(140),
    [sym_number] = STATE(140),
    [sym_negative_number] = STATE(140),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(140),
    [sym__operator_notation] = STATE(140),
    [sym_operation_1200xfx] = STATE(140),
    [sym_operation_1200fx] = STATE(140),
    [sym_operation_1100xfy] = STATE(140),
    [sym_operation_1050xfy] = STATE(140),
    [sym_operation_1000xfy] = STATE(140),
    [sym_operation_900fy] = STATE(140),
    [sym_operation_700xfx] = STATE(140),
    [sym_operation_500yfx] = STATE(140),
    [sym_operation_400yfx] = STATE(140),
    [sym_operation_200xfx] = STATE(140),
    [sym_operation_200xfy] = STATE(140),
    [sym_operation_200fy] = STATE(140),
    [sym_list_notation] = STATE(140),
    [sym_curly_bracketed_notation] = STATE(140),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(258),
  },
  [75] = {
    [sym__term] = STATE(129),
    [sym__compound_term] = STATE(129),
    [sym__atomic_term] = STATE(129),
    [sym_number] = STATE(129),
    [sym_negative_number] = STATE(129),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(129),
    [sym__operator_notation] = STATE(129),
    [sym_operation_1200xfx] = STATE(129),
    [sym_operation_1200fx] = STATE(129),
    [sym_operation_1100xfy] = STATE(129),
    [sym_operation_1050xfy] = STATE(129),
    [sym_operation_1000xfy] = STATE(129),
    [sym_operation_900fy] = STATE(129),
    [sym_operation_700xfx] = STATE(129),
    [sym_operation_500yfx] = STATE(129),
    [sym_operation_400yfx] = STATE(129),
    [sym_operation_200xfx] = STATE(129),
    [sym_operation_200xfy] = STATE(129),
    [sym_operation_200fy] = STATE(129),
    [sym_list_notation] = STATE(129),
    [sym_curly_bracketed_notation] = STATE(129),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(260),
  },
  [76] = {
    [sym__term] = STATE(173),
    [sym__compound_term] = STATE(173),
    [sym__atomic_term] = STATE(173),
    [sym_number] = STATE(173),
    [sym_negative_number] = STATE(173),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(173),
    [sym__operator_notation] = STATE(173),
    [sym_operation_1200xfx] = STATE(173),
    [sym_operation_1200fx] = STATE(173),
    [sym_operation_1100xfy] = STATE(173),
    [sym_operation_1050xfy] = STATE(173),
    [sym_operation_1000xfy] = STATE(173),
    [sym_operation_900fy] = STATE(173),
    [sym_operation_700xfx] = STATE(173),
    [sym_operation_500yfx] = STATE(173),
    [sym_operation_400yfx] = STATE(173),
    [sym_operation_200xfx] = STATE(173),
    [sym_operation_200xfy] = STATE(173),
    [sym_operation_200fy] = STATE(173),
    [sym_list_notation] = STATE(173),
    [sym_curly_bracketed_notation] = STATE(173),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(262),
  },
  [77] = {
    [sym__term] = STATE(109),
    [sym__compound_term] = STATE(109),
    [sym__atomic_term] = STATE(109),
    [sym_number] = STATE(109),
    [sym_negative_number] = STATE(109),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(109),
    [sym__operator_notation] = STATE(109),
    [sym_operation_1200xfx] = STATE(109),
    [sym_operation_1200fx] = STATE(109),
    [sym_operation_1100xfy] = STATE(109),
    [sym_operation_1050xfy] = STATE(109),
    [sym_operation_1000xfy] = STATE(109),
    [sym_operation_900fy] = STATE(109),
    [sym_operation_700xfx] = STATE(109),
    [sym_operation_500yfx] = STATE(109),
    [sym_operation_400yfx] = STATE(109),
    [sym_operation_200xfx] = STATE(109),
    [sym_operation_200xfy] = STATE(109),
    [sym_operation_200fy] = STATE(109),
    [sym_list_notation] = STATE(109),
    [sym_curly_bracketed_notation] = STATE(109),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(264),
  },
  [78] = {
    [sym__term] = STATE(110),
    [sym__compound_term] = STATE(110),
    [sym__atomic_term] = STATE(110),
    [sym_number] = STATE(110),
    [sym_negative_number] = STATE(110),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(110),
    [sym__operator_notation] = STATE(110),
    [sym_operation_1200xfx] = STATE(110),
    [sym_operation_1200fx] = STATE(110),
    [sym_operation_1100xfy] = STATE(110),
    [sym_operation_1050xfy] = STATE(110),
    [sym_operation_1000xfy] = STATE(110),
    [sym_operation_900fy] = STATE(110),
    [sym_operation_700xfx] = STATE(110),
    [sym_operation_500yfx] = STATE(110),
    [sym_operation_400yfx] = STATE(110),
    [sym_operation_200xfx] = STATE(110),
    [sym_operation_200xfy] = STATE(110),
    [sym_operation_200fy] = STATE(110),
    [sym_list_notation] = STATE(110),
    [sym_curly_bracketed_notation] = STATE(110),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(266),
  },
  [79] = {
    [sym__term] = STATE(111),
    [sym__compound_term] = STATE(111),
    [sym__atomic_term] = STATE(111),
    [sym_number] = STATE(111),
    [sym_negative_number] = STATE(111),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(111),
    [sym__operator_notation] = STATE(111),
    [sym_operation_1200xfx] = STATE(111),
    [sym_operation_1200fx] = STATE(111),
    [sym_operation_1100xfy] = STATE(111),
    [sym_operation_1050xfy] = STATE(111),
    [sym_operation_1000xfy] = STATE(111),
    [sym_operation_900fy] = STATE(111),
    [sym_operation_700xfx] = STATE(111),
    [sym_operation_500yfx] = STATE(111),
    [sym_operation_400yfx] = STATE(111),
    [sym_operation_200xfx] = STATE(111),
    [sym_operation_200xfy] = STATE(111),
    [sym_operation_200fy] = STATE(111),
    [sym_list_notation] = STATE(111),
    [sym_curly_bracketed_notation] = STATE(111),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(268),
  },
  [80] = {
    [sym__term] = STATE(112),
    [sym__compound_term] = STATE(112),
    [sym__atomic_term] = STATE(112),
    [sym_number] = STATE(112),
    [sym_negative_number] = STATE(112),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(112),
    [sym__operator_notation] = STATE(112),
    [sym_operation_1200xfx] = STATE(112),
    [sym_operation_1200fx] = STATE(112),
    [sym_operation_1100xfy] = STATE(112),
    [sym_operation_1050xfy] = STATE(112),
    [sym_operation_1000xfy] = STATE(112),
    [sym_operation_900fy] = STATE(112),
    [sym_operation_700xfx] = STATE(112),
    [sym_operation_500yfx] = STATE(112),
    [sym_operation_400yfx] = STATE(112),
    [sym_operation_200xfx] = STATE(112),
    [sym_operation_200xfy] = STATE(112),
    [sym_operation_200fy] = STATE(112),
    [sym_list_notation] = STATE(112),
    [sym_curly_bracketed_notation] = STATE(112),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(270),
  },
  [81] = {
    [sym__term] = STATE(113),
    [sym__compound_term] = STATE(113),
    [sym__atomic_term] = STATE(113),
    [sym_number] = STATE(113),
    [sym_negative_number] = STATE(113),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(113),
    [sym__operator_notation] = STATE(113),
    [sym_operation_1200xfx] = STATE(113),
    [sym_operation_1200fx] = STATE(113),
    [sym_operation_1100xfy] = STATE(113),
    [sym_operation_1050xfy] = STATE(113),
    [sym_operation_1000xfy] = STATE(113),
    [sym_operation_900fy] = STATE(113),
    [sym_operation_700xfx] = STATE(113),
    [sym_operation_500yfx] = STATE(113),
    [sym_operation_400yfx] = STATE(113),
    [sym_operation_200xfx] = STATE(113),
    [sym_operation_200xfy] = STATE(113),
    [sym_operation_200fy] = STATE(113),
    [sym_list_notation] = STATE(113),
    [sym_curly_bracketed_notation] = STATE(113),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(272),
  },
  [82] = {
    [sym__term] = STATE(114),
    [sym__compound_term] = STATE(114),
    [sym__atomic_term] = STATE(114),
    [sym_number] = STATE(114),
    [sym_negative_number] = STATE(114),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(114),
    [sym__operator_notation] = STATE(114),
    [sym_operation_1200xfx] = STATE(114),
    [sym_operation_1200fx] = STATE(114),
    [sym_operation_1100xfy] = STATE(114),
    [sym_operation_1050xfy] = STATE(114),
    [sym_operation_1000xfy] = STATE(114),
    [sym_operation_900fy] = STATE(114),
    [sym_operation_700xfx] = STATE(114),
    [sym_operation_500yfx] = STATE(114),
    [sym_operation_400yfx] = STATE(114),
    [sym_operation_200xfx] = STATE(114),
    [sym_operation_200xfy] = STATE(114),
    [sym_operation_200fy] = STATE(114),
    [sym_list_notation] = STATE(114),
    [sym_curly_bracketed_notation] = STATE(114),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(274),
  },
  [83] = {
    [sym__term] = STATE(115),
    [sym__compound_term] = STATE(115),
    [sym__atomic_term] = STATE(115),
    [sym_number] = STATE(115),
    [sym_negative_number] = STATE(115),
    [sym_atom] = STATE(148),
    [sym_functional_notation] = STATE(115),
    [sym__operator_notation] = STATE(115),
    [sym_operation_1200xfx] = STATE(115),
    [sym_operation_1200fx] = STATE(115),
    [sym_operation_1100xfy] = STATE(115),
    [sym_operation_1050xfy] = STATE(115),
    [sym_operation_1000xfy] = STATE(115),
    [sym_operation_900fy] = STATE(115),
    [sym_operation_700xfx] = STATE(115),
    [sym_operation_500yfx] = STATE(115),
    [sym_operation_400yfx] = STATE(115),
    [sym_operation_200xfx] = STATE(115),
    [sym_operation_200xfy] = STATE(115),
    [sym_operation_200fy] = STATE(115),
    [sym_list_notation] = STATE(115),
    [sym_curly_bracketed_notation] = STATE(115),
    [aux_sym_number_token1] = ACTIONS(64),
    [aux_sym_number_token2] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(66),
    [aux_sym_atom_token1] = ACTIONS(68),
    [sym_empty_list] = ACTIONS(68),
    [sym_empty_curly_brackets] = ACTIONS(68),
    [sym_variable_term] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_operator_1200fx] = ACTIONS(74),
    [sym_operator_900fy] = ACTIONS(76),
    [sym_operator_200fy] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [sym_double_quoted_list_notation] = ACTIONS(276),
  },
  [84] = {
    [sym__term] = STATE(92),
    [sym__compound_term] = STATE(92),
    [sym__atomic_term] = STATE(92),
    [sym_number] = STATE(92),
    [sym_negative_number] = STATE(92),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(92),
    [sym__operator_notation] = STATE(92),
    [sym_operation_1200xfx] = STATE(92),
    [sym_operation_1200fx] = STATE(92),
    [sym_operation_1100xfy] = STATE(92),
    [sym_operation_1050xfy] = STATE(92),
    [sym_operation_1000xfy] = STATE(92),
    [sym_operation_900fy] = STATE(92),
    [sym_operation_700xfx] = STATE(92),
    [sym_operation_500yfx] = STATE(92),
    [sym_operation_400yfx] = STATE(92),
    [sym_operation_200xfx] = STATE(92),
    [sym_operation_200xfy] = STATE(92),
    [sym_operation_200fy] = STATE(92),
    [sym_list_notation] = STATE(92),
    [sym_curly_bracketed_notation] = STATE(92),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(278),
  },
  [85] = {
    [sym__term] = STATE(105),
    [sym__compound_term] = STATE(105),
    [sym__atomic_term] = STATE(105),
    [sym_number] = STATE(105),
    [sym_negative_number] = STATE(105),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(105),
    [sym__operator_notation] = STATE(105),
    [sym_operation_1200xfx] = STATE(105),
    [sym_operation_1200fx] = STATE(105),
    [sym_operation_1100xfy] = STATE(105),
    [sym_operation_1050xfy] = STATE(105),
    [sym_operation_1000xfy] = STATE(105),
    [sym_operation_900fy] = STATE(105),
    [sym_operation_700xfx] = STATE(105),
    [sym_operation_500yfx] = STATE(105),
    [sym_operation_400yfx] = STATE(105),
    [sym_operation_200xfx] = STATE(105),
    [sym_operation_200xfy] = STATE(105),
    [sym_operation_200fy] = STATE(105),
    [sym_list_notation] = STATE(105),
    [sym_curly_bracketed_notation] = STATE(105),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(280),
  },
  [86] = {
    [sym__term] = STATE(104),
    [sym__compound_term] = STATE(104),
    [sym__atomic_term] = STATE(104),
    [sym_number] = STATE(104),
    [sym_negative_number] = STATE(104),
    [sym_atom] = STATE(98),
    [sym_functional_notation] = STATE(104),
    [sym__operator_notation] = STATE(104),
    [sym_operation_1200xfx] = STATE(104),
    [sym_operation_1200fx] = STATE(104),
    [sym_operation_1100xfy] = STATE(104),
    [sym_operation_1050xfy] = STATE(104),
    [sym_operation_1000xfy] = STATE(104),
    [sym_operation_900fy] = STATE(104),
    [sym_operation_700xfx] = STATE(104),
    [sym_operation_500yfx] = STATE(104),
    [sym_operation_400yfx] = STATE(104),
    [sym_operation_200xfx] = STATE(104),
    [sym_operation_200xfy] = STATE(104),
    [sym_operation_200fy] = STATE(104),
    [sym_list_notation] = STATE(104),
    [sym_curly_bracketed_notation] = STATE(104),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [aux_sym_atom_token1] = ACTIONS(88),
    [sym_empty_list] = ACTIONS(88),
    [sym_empty_curly_brackets] = ACTIONS(88),
    [sym_variable_term] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_operator_1200fx] = ACTIONS(94),
    [sym_operator_900fy] = ACTIONS(96),
    [sym_operator_200fy] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [sym_double_quoted_list_notation] = ACTIONS(282),
  },
  [87] = {
    [sym__term] = STATE(142),
    [sym__compound_term] = STATE(142),
    [sym__atomic_term] = STATE(142),
    [sym_number] = STATE(142),
    [sym_negative_number] = STATE(142),
    [sym_atom] = STATE(120),
    [sym_functional_notation] = STATE(142),
    [sym__operator_notation] = STATE(142),
    [sym_operation_1200xfx] = STATE(142),
    [sym_operation_1200fx] = STATE(142),
    [sym_operation_1100xfy] = STATE(142),
    [sym_operation_1050xfy] = STATE(142),
    [sym_operation_1000xfy] = STATE(142),
    [sym_operation_900fy] = STATE(142),
    [sym_operation_700xfx] = STATE(142),
    [sym_operation_500yfx] = STATE(142),
    [sym_operation_400yfx] = STATE(142),
    [sym_operation_200xfx] = STATE(142),
    [sym_operation_200xfy] = STATE(142),
    [sym_operation_200fy] = STATE(142),
    [sym_list_notation] = STATE(142),
    [sym_curly_bracketed_notation] = STATE(142),
    [aux_sym_number_token1] = ACTIONS(128),
    [aux_sym_number_token2] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [aux_sym_atom_token1] = ACTIONS(132),
    [sym_empty_list] = ACTIONS(132),
    [sym_empty_curly_brackets] = ACTIONS(132),
    [sym_variable_term] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_operator_1200fx] = ACTIONS(138),
    [sym_operator_900fy] = ACTIONS(140),
    [sym_operator_200fy] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(146),
    [sym_double_quoted_list_notation] = ACTIONS(284),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 15,
      anon_sym_COLON_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_double_quoted_list_notation,
  [21] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 15,
      anon_sym_COLON_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_double_quoted_list_notation,
  [42] = 1,
    ACTIONS(294), 14,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      anon_sym_LPAREN,
      sym_operator_1200fx,
      sym_operator_900fy,
      sym_operator_200fy,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_double_quoted_list_notation,
  [59] = 4,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(296), 10,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [81] = 9,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(306), 1,
      sym_operator_1050xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(304), 4,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [113] = 4,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(314), 10,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [135] = 2,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(316), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [153] = 4,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(318), 10,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [175] = 8,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 5,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [205] = 6,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(322), 8,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [231] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [249] = 3,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    ACTIONS(326), 9,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [269] = 1,
    ACTIONS(330), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [285] = 11,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(302), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(306), 1,
      sym_operator_1050xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    ACTIONS(332), 1,
      sym_operator_1200xfx,
    ACTIONS(334), 1,
      sym_operator_1100xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(328), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [321] = 5,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(336), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [345] = 7,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(338), 7,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [373] = 10,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(306), 1,
      sym_operator_1050xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    ACTIONS(334), 1,
      sym_operator_1100xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(340), 3,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [407] = 10,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(306), 1,
      sym_operator_1050xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    ACTIONS(334), 1,
      sym_operator_1100xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(342), 3,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [441] = 10,
    ACTIONS(298), 1,
      sym_operator_200xfx,
    ACTIONS(300), 1,
      sym_operator_200xfy,
    ACTIONS(306), 1,
      sym_operator_1050xfy,
    ACTIONS(308), 1,
      sym_operator_700xfx,
    ACTIONS(310), 1,
      sym_operator_500yfx,
    ACTIONS(312), 1,
      sym_operator_400yfx,
    ACTIONS(334), 1,
      sym_operator_1100xfy,
    STATE(27), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(344), 3,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [475] = 4,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(296), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [496] = 10,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
  [529] = 9,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(304), 3,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
  [560] = 6,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(322), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
  [585] = 5,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(336), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
  [608] = 4,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(314), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [629] = 2,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(316), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [646] = 4,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(318), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [667] = 8,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 4,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
  [696] = 11,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(362), 1,
      sym_operator_1200xfx,
    ACTIONS(364), 1,
      sym_operator_1100xfy,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [731] = 11,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [766] = 1,
    ACTIONS(330), 12,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [781] = 1,
    ACTIONS(382), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [796] = 2,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [813] = 1,
    ACTIONS(386), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [828] = 3,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(326), 9,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [847] = 1,
    ACTIONS(390), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [862] = 1,
    ACTIONS(392), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [877] = 1,
    ACTIONS(394), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [892] = 11,
    ACTIONS(302), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(396), 1,
      sym_operator_1200xfx,
    ACTIONS(398), 1,
      sym_operator_1100xfy,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [927] = 10,
    ACTIONS(364), 1,
      sym_operator_1100xfy,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(344), 2,
      anon_sym_DOT,
      sym_operator_1200xfx,
  [960] = 2,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [977] = 10,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
  [1010] = 7,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(338), 6,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1037] = 4,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(296), 9,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [1058] = 1,
    ACTIONS(414), 12,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [1073] = 11,
    ACTIONS(416), 1,
      sym_operator_1200xfx,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1108] = 1,
    ACTIONS(330), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [1123] = 10,
    ACTIONS(364), 1,
      sym_operator_1100xfy,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(340), 2,
      anon_sym_DOT,
      sym_operator_1200xfx,
  [1156] = 3,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(326), 9,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [1175] = 11,
    ACTIONS(302), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(328), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1210] = 11,
    ACTIONS(362), 1,
      sym_operator_1200xfx,
    ACTIONS(364), 1,
      sym_operator_1100xfy,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    ACTIONS(436), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1245] = 11,
    ACTIONS(416), 1,
      sym_operator_1200xfx,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1280] = 10,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(344), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACE,
  [1313] = 7,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(338), 6,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACE,
  [1340] = 4,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(296), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACE,
  [1361] = 11,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(396), 1,
      sym_operator_1200xfx,
    ACTIONS(398), 1,
      sym_operator_1100xfy,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1396] = 3,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 10,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [1415] = 7,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(338), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1442] = 9,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(304), 3,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_RBRACK,
  [1473] = 11,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1508] = 2,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [1525] = 1,
    ACTIONS(330), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [1540] = 11,
    ACTIONS(416), 1,
      sym_operator_1200xfx,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1575] = 11,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1610] = 11,
    ACTIONS(416), 1,
      sym_operator_1200xfx,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1645] = 11,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1680] = 11,
    ACTIONS(416), 1,
      sym_operator_1200xfx,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1715] = 11,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    ACTIONS(380), 1,
      sym_operator_1200xfx,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [1750] = 8,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 4,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_RBRACK,
  [1779] = 10,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(340), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACE,
  [1812] = 10,
    ACTIONS(418), 1,
      sym_operator_1100xfy,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(342), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACE,
  [1845] = 9,
    ACTIONS(420), 1,
      sym_operator_1050xfy,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(304), 3,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      anon_sym_RBRACE,
  [1876] = 6,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(322), 7,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      anon_sym_RBRACE,
  [1901] = 5,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(336), 8,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      anon_sym_RBRACE,
  [1924] = 4,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(314), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACE,
  [1945] = 2,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(316), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [1962] = 4,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(318), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACE,
  [1983] = 8,
    ACTIONS(422), 1,
      sym_operator_700xfx,
    ACTIONS(424), 1,
      sym_operator_500yfx,
    ACTIONS(426), 1,
      sym_operator_400yfx,
    ACTIONS(428), 1,
      sym_operator_200xfx,
    ACTIONS(430), 1,
      sym_operator_200xfy,
    STATE(59), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 4,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_RBRACE,
  [2012] = 4,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(318), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
  [2033] = 2,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(316), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2050] = 1,
    ACTIONS(330), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2065] = 4,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(314), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
  [2086] = 5,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(336), 8,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      anon_sym_RBRACK,
  [2109] = 6,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(322), 7,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      anon_sym_RBRACK,
  [2134] = 2,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2151] = 10,
    ACTIONS(346), 1,
      sym_operator_200xfx,
    ACTIONS(348), 1,
      sym_operator_200xfy,
    ACTIONS(350), 1,
      sym_operator_1100xfy,
    ACTIONS(352), 1,
      sym_operator_1050xfy,
    ACTIONS(354), 1,
      sym_operator_700xfx,
    ACTIONS(356), 1,
      sym_operator_500yfx,
    ACTIONS(358), 1,
      sym_operator_400yfx,
    STATE(83), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(342), 2,
      anon_sym_RPAREN,
      sym_operator_1200xfx,
  [2184] = 10,
    ACTIONS(398), 1,
      sym_operator_1100xfy,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(344), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
  [2217] = 7,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(338), 6,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_RBRACK,
  [2244] = 4,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(296), 9,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      anon_sym_RBRACK,
  [2265] = 8,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 4,
      anon_sym_DOT,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
  [2294] = 4,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(318), 9,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [2315] = 2,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(316), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2332] = 4,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(314), 9,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
  [2353] = 5,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(336), 8,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
  [2376] = 6,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(322), 7,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
  [2401] = 9,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(304), 3,
      anon_sym_DOT,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
  [2432] = 10,
    ACTIONS(364), 1,
      sym_operator_1100xfy,
    ACTIONS(366), 1,
      sym_operator_1050xfy,
    ACTIONS(368), 1,
      sym_operator_700xfx,
    ACTIONS(370), 1,
      sym_operator_500yfx,
    ACTIONS(372), 1,
      sym_operator_400yfx,
    ACTIONS(374), 1,
      sym_operator_200xfx,
    ACTIONS(376), 1,
      sym_operator_200xfy,
    STATE(41), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(342), 2,
      anon_sym_DOT,
      sym_operator_1200xfx,
  [2465] = 10,
    ACTIONS(398), 1,
      sym_operator_1100xfy,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(340), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
  [2498] = 10,
    ACTIONS(398), 1,
      sym_operator_1100xfy,
    ACTIONS(400), 1,
      sym_operator_1050xfy,
    ACTIONS(402), 1,
      sym_operator_700xfx,
    ACTIONS(404), 1,
      sym_operator_500yfx,
    ACTIONS(406), 1,
      sym_operator_400yfx,
    ACTIONS(408), 1,
      sym_operator_200xfx,
    ACTIONS(410), 1,
      sym_operator_200xfy,
    STATE(47), 1,
      sym_operator_1000xfy,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(342), 2,
      sym_operator_1200xfx,
      anon_sym_RBRACK,
  [2531] = 1,
    ACTIONS(386), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2545] = 1,
    ACTIONS(390), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2559] = 1,
    ACTIONS(382), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2573] = 1,
    ACTIONS(390), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2587] = 1,
    ACTIONS(392), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2601] = 1,
    ACTIONS(414), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2615] = 1,
    ACTIONS(386), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2629] = 1,
    ACTIONS(394), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2643] = 1,
    ACTIONS(392), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2657] = 1,
    ACTIONS(382), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2671] = 1,
    ACTIONS(414), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2685] = 1,
    ACTIONS(414), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2699] = 1,
    ACTIONS(382), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2713] = 1,
    ACTIONS(394), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2727] = 1,
    ACTIONS(390), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2741] = 1,
    ACTIONS(392), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2755] = 1,
    ACTIONS(394), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACK,
  [2769] = 1,
    ACTIONS(392), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2783] = 1,
    ACTIONS(394), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2797] = 1,
    ACTIONS(390), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2811] = 1,
    ACTIONS(386), 11,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
      anon_sym_RBRACE,
  [2825] = 1,
    ACTIONS(386), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2839] = 1,
    ACTIONS(382), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2853] = 1,
    ACTIONS(414), 11,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_operator_1200xfx,
      sym_operator_1100xfy,
      sym_operator_1050xfy,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_operator_700xfx,
      sym_operator_500yfx,
      sym_operator_400yfx,
      sym_operator_200xfx,
      sym_operator_200xfy,
  [2867] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    STATE(216), 1,
      aux_sym_arg_list_repeat1,
  [2880] = 3,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_arg_list_repeat1,
  [2890] = 3,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_arg_list_repeat1,
  [2900] = 3,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_arg_list_repeat1,
  [2910] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_arg_list_repeat1,
  [2920] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      aux_sym_arg_list_repeat1,
  [2930] = 1,
    ACTIONS(476), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [2935] = 1,
    ACTIONS(478), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [2940] = 1,
    ACTIONS(460), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2945] = 1,
    ACTIONS(480), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [2950] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2955] = 1,
    ACTIONS(482), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [2960] = 1,
    ACTIONS(484), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [2965] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [2969] = 1,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [2973] = 1,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [2977] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [2981] = 1,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [2985] = 1,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
  [2989] = 1,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [2993] = 1,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
  [2997] = 1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [3001] = 1,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [3005] = 1,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [3009] = 1,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(88)] = 0,
  [SMALL_STATE(89)] = 21,
  [SMALL_STATE(90)] = 42,
  [SMALL_STATE(91)] = 59,
  [SMALL_STATE(92)] = 81,
  [SMALL_STATE(93)] = 113,
  [SMALL_STATE(94)] = 135,
  [SMALL_STATE(95)] = 153,
  [SMALL_STATE(96)] = 175,
  [SMALL_STATE(97)] = 205,
  [SMALL_STATE(98)] = 231,
  [SMALL_STATE(99)] = 249,
  [SMALL_STATE(100)] = 269,
  [SMALL_STATE(101)] = 285,
  [SMALL_STATE(102)] = 321,
  [SMALL_STATE(103)] = 345,
  [SMALL_STATE(104)] = 373,
  [SMALL_STATE(105)] = 407,
  [SMALL_STATE(106)] = 441,
  [SMALL_STATE(107)] = 475,
  [SMALL_STATE(108)] = 496,
  [SMALL_STATE(109)] = 529,
  [SMALL_STATE(110)] = 560,
  [SMALL_STATE(111)] = 585,
  [SMALL_STATE(112)] = 608,
  [SMALL_STATE(113)] = 629,
  [SMALL_STATE(114)] = 646,
  [SMALL_STATE(115)] = 667,
  [SMALL_STATE(116)] = 696,
  [SMALL_STATE(117)] = 731,
  [SMALL_STATE(118)] = 766,
  [SMALL_STATE(119)] = 781,
  [SMALL_STATE(120)] = 796,
  [SMALL_STATE(121)] = 813,
  [SMALL_STATE(122)] = 828,
  [SMALL_STATE(123)] = 847,
  [SMALL_STATE(124)] = 862,
  [SMALL_STATE(125)] = 877,
  [SMALL_STATE(126)] = 892,
  [SMALL_STATE(127)] = 927,
  [SMALL_STATE(128)] = 960,
  [SMALL_STATE(129)] = 977,
  [SMALL_STATE(130)] = 1010,
  [SMALL_STATE(131)] = 1037,
  [SMALL_STATE(132)] = 1058,
  [SMALL_STATE(133)] = 1073,
  [SMALL_STATE(134)] = 1108,
  [SMALL_STATE(135)] = 1123,
  [SMALL_STATE(136)] = 1156,
  [SMALL_STATE(137)] = 1175,
  [SMALL_STATE(138)] = 1210,
  [SMALL_STATE(139)] = 1245,
  [SMALL_STATE(140)] = 1280,
  [SMALL_STATE(141)] = 1313,
  [SMALL_STATE(142)] = 1340,
  [SMALL_STATE(143)] = 1361,
  [SMALL_STATE(144)] = 1396,
  [SMALL_STATE(145)] = 1415,
  [SMALL_STATE(146)] = 1442,
  [SMALL_STATE(147)] = 1473,
  [SMALL_STATE(148)] = 1508,
  [SMALL_STATE(149)] = 1525,
  [SMALL_STATE(150)] = 1540,
  [SMALL_STATE(151)] = 1575,
  [SMALL_STATE(152)] = 1610,
  [SMALL_STATE(153)] = 1645,
  [SMALL_STATE(154)] = 1680,
  [SMALL_STATE(155)] = 1715,
  [SMALL_STATE(156)] = 1750,
  [SMALL_STATE(157)] = 1779,
  [SMALL_STATE(158)] = 1812,
  [SMALL_STATE(159)] = 1845,
  [SMALL_STATE(160)] = 1876,
  [SMALL_STATE(161)] = 1901,
  [SMALL_STATE(162)] = 1924,
  [SMALL_STATE(163)] = 1945,
  [SMALL_STATE(164)] = 1962,
  [SMALL_STATE(165)] = 1983,
  [SMALL_STATE(166)] = 2012,
  [SMALL_STATE(167)] = 2033,
  [SMALL_STATE(168)] = 2050,
  [SMALL_STATE(169)] = 2065,
  [SMALL_STATE(170)] = 2086,
  [SMALL_STATE(171)] = 2109,
  [SMALL_STATE(172)] = 2134,
  [SMALL_STATE(173)] = 2151,
  [SMALL_STATE(174)] = 2184,
  [SMALL_STATE(175)] = 2217,
  [SMALL_STATE(176)] = 2244,
  [SMALL_STATE(177)] = 2265,
  [SMALL_STATE(178)] = 2294,
  [SMALL_STATE(179)] = 2315,
  [SMALL_STATE(180)] = 2332,
  [SMALL_STATE(181)] = 2353,
  [SMALL_STATE(182)] = 2376,
  [SMALL_STATE(183)] = 2401,
  [SMALL_STATE(184)] = 2432,
  [SMALL_STATE(185)] = 2465,
  [SMALL_STATE(186)] = 2498,
  [SMALL_STATE(187)] = 2531,
  [SMALL_STATE(188)] = 2545,
  [SMALL_STATE(189)] = 2559,
  [SMALL_STATE(190)] = 2573,
  [SMALL_STATE(191)] = 2587,
  [SMALL_STATE(192)] = 2601,
  [SMALL_STATE(193)] = 2615,
  [SMALL_STATE(194)] = 2629,
  [SMALL_STATE(195)] = 2643,
  [SMALL_STATE(196)] = 2657,
  [SMALL_STATE(197)] = 2671,
  [SMALL_STATE(198)] = 2685,
  [SMALL_STATE(199)] = 2699,
  [SMALL_STATE(200)] = 2713,
  [SMALL_STATE(201)] = 2727,
  [SMALL_STATE(202)] = 2741,
  [SMALL_STATE(203)] = 2755,
  [SMALL_STATE(204)] = 2769,
  [SMALL_STATE(205)] = 2783,
  [SMALL_STATE(206)] = 2797,
  [SMALL_STATE(207)] = 2811,
  [SMALL_STATE(208)] = 2825,
  [SMALL_STATE(209)] = 2839,
  [SMALL_STATE(210)] = 2853,
  [SMALL_STATE(211)] = 2867,
  [SMALL_STATE(212)] = 2880,
  [SMALL_STATE(213)] = 2890,
  [SMALL_STATE(214)] = 2900,
  [SMALL_STATE(215)] = 2910,
  [SMALL_STATE(216)] = 2920,
  [SMALL_STATE(217)] = 2930,
  [SMALL_STATE(218)] = 2935,
  [SMALL_STATE(219)] = 2940,
  [SMALL_STATE(220)] = 2945,
  [SMALL_STATE(221)] = 2950,
  [SMALL_STATE(222)] = 2955,
  [SMALL_STATE(223)] = 2960,
  [SMALL_STATE(224)] = 2965,
  [SMALL_STATE(225)] = 2969,
  [SMALL_STATE(226)] = 2973,
  [SMALL_STATE(227)] = 2977,
  [SMALL_STATE(228)] = 2981,
  [SMALL_STATE(229)] = 2985,
  [SMALL_STATE(230)] = 2989,
  [SMALL_STATE(231)] = 2993,
  [SMALL_STATE(232)] = 2997,
  [SMALL_STATE(233)] = 3001,
  [SMALL_STATE(234)] = 3005,
  [SMALL_STATE(235)] = 3009,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_1000xfy, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
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
