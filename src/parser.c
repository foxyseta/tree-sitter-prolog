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

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\n'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange extras_character_set_3[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'(', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange extras_character_set_4[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'2', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange extras_character_set_5[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'8', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym_atom_token1_character_set_1[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static TSCharacterRange extras_character_set_8[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'8', '9'}, {';', ';'}, {'A', '['},
  {']', ']'}, {'_', '}'},
};

static TSCharacterRange aux_sym_atom_token1_character_set_2[] = {
  {'\n', '\n'}, {'"', '#'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static TSCharacterRange extras_character_set_9[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {';', ';'}, {'G', '['}, {']', ']'},
  {'_', '`'}, {'g', '}'},
};

static TSCharacterRange extras_character_set_10[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', '\\'},
  {'_', '}'},
};

static TSCharacterRange extras_character_set_11[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '|'},
};

static TSCharacterRange extras_character_set_12[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '_'}, {'a', '}'},
};

static TSCharacterRange extras_character_set_14[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'r'}, {'t', '}'},
};

static TSCharacterRange extras_character_set_16[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'n'}, {'p', '}'},
};

static TSCharacterRange extras_character_set_17[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'd'}, {'f', '}'},
};

static TSCharacterRange extras_character_set_18[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'c'}, {'e', '}'},
};

static TSCharacterRange extras_character_set_19[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'l'}, {'n', '}'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(969);
      if (lookahead == '%') SKIP(916);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(359);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) SKIP(245);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(218);
      if (lookahead == '+') ADVANCE(1098);
      if (lookahead == '/') ADVANCE(1104);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) SKIP(245);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(218);
      if (lookahead == '.') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (set_contains(extras_character_set_5, 9, lookahead)) SKIP(3);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) SKIP(245);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(218);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(3);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) SKIP(245);
      if (lookahead == '#') SKIP(218);
      if (lookahead == '%') SKIP(3);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(3);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(973);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(8);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(974);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(8);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(976);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(8);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(984);
      if (lookahead == '\\') ADVANCE(32);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(980);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(981);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(13);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(13);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(997);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(17);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(998);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(17);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(17);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\t') SKIP(31);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\'') ADVANCE(972);
      if (set_contains(extras_character_set_3, 9, lookahead)) SKIP(31);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(31);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(31);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(31);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1014);
      if (set_contains(extras_character_set_4, 9, lookahead)) SKIP(31);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1015);
      if (set_contains(extras_character_set_5, 9, lookahead)) SKIP(31);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(31);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '#') SKIP(219);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') SKIP(219);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(13);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(31);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') SKIP(219);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(17);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(31);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') SKIP(219);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(8);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(31);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(1131);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(1086);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(310);
      if (lookahead == '0') ADVANCE(979);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(1023);
      if (lookahead == '_') ADVANCE(1078);
      if (lookahead == '{') ADVANCE(1122);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1036);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(38);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(13);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(982);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1078);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1035);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(1049);
      if (lookahead == '(') ADVANCE(1089);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(310);
      if (lookahead == '0') ADVANCE(1002);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(1024);
      if (lookahead == '_') ADVANCE(1081);
      if (lookahead == '{') ADVANCE(1125);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1051);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(38);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(999);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1081);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1050);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '"') ADVANCE(1134);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(1031);
      if (lookahead == '(') ADVANCE(1085);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(310);
      if (lookahead == '0') ADVANCE(978);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(1025);
      if (lookahead == '_') ADVANCE(1077);
      if (lookahead == '{') ADVANCE(1121);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1030);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(38);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(975);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1077);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) SKIP(189);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(31);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(310);
      if (lookahead == '0') ADVANCE(1010);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1048);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(38);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == ',') ADVANCE(41);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(47);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(47);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(47);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(47);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == 'e') ADVANCE(44);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(47);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(47);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == 'o') ADVANCE(42);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(47);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(47);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '#') SKIP(221);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(47);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) SKIP(246);
      if (lookahead == '#') SKIP(221);
      if (lookahead == '%') SKIP(47);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(48);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(47);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == ',') ADVANCE(51);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(57);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(57);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(57);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(57);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == 'e') ADVANCE(54);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(57);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(57);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == 'o') ADVANCE(52);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(57);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(57);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') SKIP(222);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(57);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) SKIP(247);
      if (lookahead == '#') SKIP(222);
      if (lookahead == '%') SKIP(57);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(57);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == ',') ADVANCE(61);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(67);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(67);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(67);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(67);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == 'e') ADVANCE(64);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(67);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(67);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == 'o') ADVANCE(62);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(67);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(67);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '\n') SKIP(68);
      if (lookahead == '#') SKIP(223);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(67);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) SKIP(248);
      if (lookahead == '#') SKIP(223);
      if (lookahead == '%') SKIP(67);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(68);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(67);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == ',') ADVANCE(71);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(77);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(77);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(77);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(77);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == 'e') ADVANCE(74);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(77);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(77);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == 'o') ADVANCE(72);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(77);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(77);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '#') SKIP(224);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(77);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) SKIP(249);
      if (lookahead == '#') SKIP(224);
      if (lookahead == '%') SKIP(77);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(78);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(77);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == ',') ADVANCE(81);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(87);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(87);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(87);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(87);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == 'e') ADVANCE(84);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(87);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(87);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == 'o') ADVANCE(82);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(87);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(87);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '#') SKIP(225);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(87);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) SKIP(250);
      if (lookahead == '#') SKIP(225);
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(88);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(87);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == ',') ADVANCE(91);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(97);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(97);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(97);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(97);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == 'e') ADVANCE(94);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(97);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(97);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == 'o') ADVANCE(92);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(97);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(97);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '#') SKIP(226);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(97);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) SKIP(251);
      if (lookahead == '#') SKIP(226);
      if (lookahead == '%') SKIP(97);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '}') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(97);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == ',') ADVANCE(101);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(107);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(107);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(107);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(107);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == 'e') ADVANCE(104);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(107);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(107);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == 'o') ADVANCE(102);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(107);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(107);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '#') SKIP(227);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(107);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) SKIP(252);
      if (lookahead == '#') SKIP(227);
      if (lookahead == '%') SKIP(107);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(108);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(107);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == ',') ADVANCE(111);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(117);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(117);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(117);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(117);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == 'e') ADVANCE(114);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(117);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(117);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == 'o') ADVANCE(112);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(117);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(117);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '#') SKIP(228);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(117);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) SKIP(253);
      if (lookahead == '#') SKIP(228);
      if (lookahead == '%') SKIP(117);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(118);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(117);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == ',') ADVANCE(121);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(127);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(127);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(127);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(127);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == 'e') ADVANCE(124);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(127);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(127);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == 'o') ADVANCE(122);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(127);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(127);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '\n') SKIP(128);
      if (lookahead == '#') SKIP(229);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(127);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) SKIP(254);
      if (lookahead == '#') SKIP(229);
      if (lookahead == '%') SKIP(127);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '}') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(128);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) SKIP(127);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == ',') ADVANCE(131);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(137);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(137);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == '`') ADVANCE(1097);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(137);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == 'd') ADVANCE(1106);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(137);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == 'e') ADVANCE(134);
      if (set_contains(extras_character_set_17, 10, lookahead)) SKIP(137);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == 'm') ADVANCE(1106);
      if (set_contains(extras_character_set_19, 10, lookahead)) SKIP(137);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == 'o') ADVANCE(132);
      if (set_contains(extras_character_set_16, 10, lookahead)) SKIP(137);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (lookahead == 's') ADVANCE(1099);
      if (set_contains(extras_character_set_14, 10, lookahead)) SKIP(137);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '\n') SKIP(138);
      if (lookahead == '#') SKIP(230);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(137);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) SKIP(255);
      if (lookahead == '#') SKIP(230);
      if (lookahead == '%') SKIP(137);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(137);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) SKIP(256);
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') SKIP(231);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(139);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) SKIP(256);
      if (lookahead == '#') SKIP(231);
      if (lookahead == '%') SKIP(139);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(312);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(140);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(139);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) SKIP(257);
      if (lookahead == '\n') SKIP(142);
      if (lookahead == '#') SKIP(232);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(141);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) SKIP(257);
      if (lookahead == '#') SKIP(232);
      if (lookahead == '%') SKIP(141);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(313);
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
          ('_' <= lookahead && lookahead <= '}')) SKIP(141);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) SKIP(258);
      if (lookahead == '\n') SKIP(144);
      if (lookahead == '#') SKIP(233);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(143);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) SKIP(258);
      if (lookahead == '#') SKIP(233);
      if (lookahead == '%') SKIP(143);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(314);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(144);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(143);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '\n') SKIP(150);
      if (lookahead == '#') SKIP(234);
      if (lookahead == '\'') ADVANCE(972);
      if (set_contains(extras_character_set_3, 9, lookahead)) SKIP(149);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '\n') SKIP(150);
      if (lookahead == '#') SKIP(234);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1014);
      if (set_contains(extras_character_set_4, 9, lookahead)) SKIP(149);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '\n') SKIP(150);
      if (lookahead == '#') SKIP(234);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1015);
      if (set_contains(extras_character_set_5, 9, lookahead)) SKIP(149);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '\n') SKIP(150);
      if (lookahead == '#') SKIP(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(149);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '\n') SKIP(150);
      if (lookahead == '#') SKIP(234);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(149);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) SKIP(259);
      if (lookahead == '#') SKIP(234);
      if (lookahead == '%') SKIP(149);
      if (lookahead == '/') SKIP(315);
      if (lookahead == '0') ADVANCE(1012);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(149);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) SKIP(260);
      if (lookahead == '\n') SKIP(152);
      if (lookahead == '#') SKIP(235);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(151);
      END_STATE();
    case 152:
      if ((!eof && lookahead == 00)) SKIP(260);
      if (lookahead == '#') SKIP(235);
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(316);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(152);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(151);
      END_STATE();
    case 153:
      if ((!eof && lookahead == 00)) SKIP(261);
      if (lookahead == '\n') SKIP(154);
      if (lookahead == '#') SKIP(236);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(153);
      END_STATE();
    case 154:
      if ((!eof && lookahead == 00)) SKIP(261);
      if (lookahead == '#') SKIP(236);
      if (lookahead == '%') SKIP(153);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '/') SKIP(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(154);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(153);
      END_STATE();
    case 155:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(985);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(158);
      END_STATE();
    case 156:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(986);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(158);
      END_STATE();
    case 157:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(988);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(158);
      END_STATE();
    case 158:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(158);
      END_STATE();
    case 159:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(182);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(163);
      END_STATE();
    case 160:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(992);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(163);
      END_STATE();
    case 161:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(993);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(163);
      END_STATE();
    case 162:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(995);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(163);
      END_STATE();
    case 163:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1003);
      if (set_contains(extras_character_set_4, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1004);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 167:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\t') SKIP(181);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (set_contains(extras_character_set_3, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 168:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\'') ADVANCE(972);
      if (set_contains(extras_character_set_3, 9, lookahead)) SKIP(181);
      END_STATE();
    case 169:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(181);
      END_STATE();
    case 170:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 171:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(181);
      END_STATE();
    case 172:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 173:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      if (set_contains(extras_character_set_8, 10, lookahead)) SKIP(181);
      END_STATE();
    case 174:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '\\') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 175:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1014);
      if (set_contains(extras_character_set_4, 9, lookahead)) SKIP(181);
      END_STATE();
    case 176:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1015);
      if (set_contains(extras_character_set_5, 9, lookahead)) SKIP(181);
      END_STATE();
    case 177:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 178:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 179:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 180:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (set_contains(extras_character_set_18, 10, lookahead)) SKIP(181);
      END_STATE();
    case 181:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '#') SKIP(220);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(181);
      END_STATE();
    case 182:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '#') SKIP(220);
      if (lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(163);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(181);
      END_STATE();
    case 183:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead == '#') SKIP(220);
      if (lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(167);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(181);
      END_STATE();
    case 184:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '#') SKIP(220);
      if (lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(158);
      if (set_contains(extras_character_set_12, 10, lookahead)) SKIP(181);
      END_STATE();
    case 185:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '"') ADVANCE(1133);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '(') ADVANCE(1088);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(311);
      if (lookahead == '0') ADVANCE(991);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1115);
      if (lookahead == '\\') ADVANCE(1026);
      if (lookahead == '_') ADVANCE(1080);
      if (lookahead == '{') ADVANCE(1124);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1045);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(188);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(163);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(994);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1080);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 186:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '%') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(1053);
      if (lookahead == '(') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(311);
      if (lookahead == '0') ADVANCE(1008);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(1027);
      if (lookahead == '_') ADVANCE(1082);
      if (lookahead == '{') ADVANCE(1126);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(188);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1082);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1054);
      END_STATE();
    case 187:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead == '"') ADVANCE(1136);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(1040);
      if (lookahead == '(') ADVANCE(1087);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(311);
      if (lookahead == '0') ADVANCE(990);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1114);
      if (lookahead == '\\') ADVANCE(1028);
      if (lookahead == '_') ADVANCE(1079);
      if (lookahead == '{') ADVANCE(1123);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1039);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(188);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(987);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1079);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 188:
      if ((!eof && lookahead == 00)) SKIP(190);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(181);
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(311);
      if (lookahead == '0') ADVANCE(1011);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1048);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(188);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(181);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(31);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(310);
      if (lookahead == '0') ADVANCE(1009);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1047);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(181);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(311);
      if (lookahead == '0') ADVANCE(1009);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1047);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1129);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(863);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      if (lookahead == '#') SKIP(202);
      if (lookahead == '*') SKIP(496);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(864);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(193);
      END_STATE();
    case 194:
      if (lookahead == '#') SKIP(237);
      if (lookahead == '*') SKIP(498);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == '#') SKIP(238);
      if (lookahead == '*') SKIP(506);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == '#') SKIP(239);
      if (lookahead == '*') SKIP(500);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '#') SKIP(240);
      if (lookahead == '*') SKIP(501);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(197);
      END_STATE();
    case 198:
      if (lookahead == '#') SKIP(241);
      if (lookahead == '*') SKIP(502);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(198);
      END_STATE();
    case 199:
      if (lookahead == '#') SKIP(242);
      if (lookahead == '*') SKIP(503);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(199);
      END_STATE();
    case 200:
      if (lookahead == '#') SKIP(243);
      if (lookahead == '*') SKIP(504);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '#') SKIP(244);
      if (lookahead == '*') SKIP(505);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(201);
      END_STATE();
    case 202:
      if (lookahead == '$') SKIP(262);
      END_STATE();
    case 203:
      if (lookahead == '$') ADVANCE(263);
      END_STATE();
    case 204:
      if (lookahead == '$') ADVANCE(264);
      END_STATE();
    case 205:
      if (lookahead == '$') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == '$') ADVANCE(266);
      END_STATE();
    case 207:
      if (lookahead == '$') ADVANCE(267);
      END_STATE();
    case 208:
      if (lookahead == '$') ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == '$') ADVANCE(269);
      END_STATE();
    case 210:
      if (lookahead == '$') ADVANCE(270);
      END_STATE();
    case 211:
      if (lookahead == '$') ADVANCE(271);
      END_STATE();
    case 212:
      if (lookahead == '$') ADVANCE(272);
      END_STATE();
    case 213:
      if (lookahead == '$') ADVANCE(273);
      END_STATE();
    case 214:
      if (lookahead == '$') ADVANCE(274);
      END_STATE();
    case 215:
      if (lookahead == '$') ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == '$') ADVANCE(276);
      END_STATE();
    case 217:
      if (lookahead == '$') ADVANCE(277);
      END_STATE();
    case 218:
      if (lookahead == '$') SKIP(278);
      END_STATE();
    case 219:
      if (lookahead == '$') SKIP(279);
      END_STATE();
    case 220:
      if (lookahead == '$') SKIP(280);
      END_STATE();
    case 221:
      if (lookahead == '$') SKIP(281);
      END_STATE();
    case 222:
      if (lookahead == '$') SKIP(282);
      END_STATE();
    case 223:
      if (lookahead == '$') SKIP(283);
      END_STATE();
    case 224:
      if (lookahead == '$') SKIP(284);
      END_STATE();
    case 225:
      if (lookahead == '$') SKIP(285);
      END_STATE();
    case 226:
      if (lookahead == '$') SKIP(286);
      END_STATE();
    case 227:
      if (lookahead == '$') SKIP(287);
      END_STATE();
    case 228:
      if (lookahead == '$') SKIP(288);
      END_STATE();
    case 229:
      if (lookahead == '$') SKIP(289);
      END_STATE();
    case 230:
      if (lookahead == '$') SKIP(290);
      END_STATE();
    case 231:
      if (lookahead == '$') SKIP(291);
      END_STATE();
    case 232:
      if (lookahead == '$') SKIP(292);
      END_STATE();
    case 233:
      if (lookahead == '$') SKIP(293);
      END_STATE();
    case 234:
      if (lookahead == '$') SKIP(294);
      END_STATE();
    case 235:
      if (lookahead == '$') SKIP(295);
      END_STATE();
    case 236:
      if (lookahead == '$') SKIP(296);
      END_STATE();
    case 237:
      if (lookahead == '$') SKIP(297);
      END_STATE();
    case 238:
      if (lookahead == '$') SKIP(298);
      END_STATE();
    case 239:
      if (lookahead == '$') SKIP(299);
      END_STATE();
    case 240:
      if (lookahead == '$') SKIP(300);
      END_STATE();
    case 241:
      if (lookahead == '$') SKIP(301);
      END_STATE();
    case 242:
      if (lookahead == '$') SKIP(302);
      END_STATE();
    case 243:
      if (lookahead == '$') SKIP(303);
      END_STATE();
    case 244:
      if (lookahead == '$') SKIP(304);
      END_STATE();
    case 245:
      if (lookahead == '%') SKIP(3);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(359);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 246:
      if (lookahead == '%') SKIP(47);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == '%') SKIP(57);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(247);
      END_STATE();
    case 248:
      if (lookahead == '%') SKIP(67);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == '%') SKIP(77);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(249);
      END_STATE();
    case 250:
      if (lookahead == '%') SKIP(87);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == '%') SKIP(97);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '}') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(251);
      END_STATE();
    case 252:
      if (lookahead == '%') SKIP(107);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(252);
      END_STATE();
    case 253:
      if (lookahead == '%') SKIP(117);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(253);
      END_STATE();
    case 254:
      if (lookahead == '%') SKIP(127);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '}') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(254);
      END_STATE();
    case 255:
      if (lookahead == '%') SKIP(137);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '*') ADVANCE(1107);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead == '/') ADVANCE(1108);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ';') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1101);
      if (lookahead == '=') ADVANCE(1100);
      if (lookahead == '>') ADVANCE(1103);
      if (lookahead == '@') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(495);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(255);
      END_STATE();
    case 256:
      if (lookahead == '%') SKIP(139);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(312);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '|') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(256);
      END_STATE();
    case 257:
      if (lookahead == '%') SKIP(141);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(257);
      END_STATE();
    case 258:
      if (lookahead == '%') SKIP(143);
      if (lookahead == ',') ADVANCE(1092);
      if (lookahead == '/') SKIP(314);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(258);
      END_STATE();
    case 259:
      if (lookahead == '%') SKIP(149);
      if (lookahead == '/') SKIP(315);
      if (lookahead == '0') ADVANCE(1009);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(259);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      END_STATE();
    case 260:
      if (lookahead == '%') SKIP(151);
      if (lookahead == '/') SKIP(316);
      if (lookahead == ']') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(260);
      END_STATE();
    case 261:
      if (lookahead == '%') SKIP(153);
      if (lookahead == ')') ADVANCE(1091);
      if (lookahead == '/') SKIP(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(261);
      END_STATE();
    case 262:
      if (lookahead == '&') SKIP(308);
      END_STATE();
    case 263:
      if (lookahead == '&') ADVANCE(309);
      END_STATE();
    case 264:
      if (lookahead == '&') ADVANCE(318);
      END_STATE();
    case 265:
      if (lookahead == '&') ADVANCE(319);
      END_STATE();
    case 266:
      if (lookahead == '&') ADVANCE(320);
      END_STATE();
    case 267:
      if (lookahead == '&') ADVANCE(321);
      END_STATE();
    case 268:
      if (lookahead == '&') ADVANCE(322);
      END_STATE();
    case 269:
      if (lookahead == '&') ADVANCE(323);
      END_STATE();
    case 270:
      if (lookahead == '&') ADVANCE(324);
      END_STATE();
    case 271:
      if (lookahead == '&') ADVANCE(325);
      END_STATE();
    case 272:
      if (lookahead == '&') ADVANCE(326);
      END_STATE();
    case 273:
      if (lookahead == '&') ADVANCE(327);
      END_STATE();
    case 274:
      if (lookahead == '&') ADVANCE(328);
      END_STATE();
    case 275:
      if (lookahead == '&') ADVANCE(329);
      END_STATE();
    case 276:
      if (lookahead == '&') ADVANCE(330);
      END_STATE();
    case 277:
      if (lookahead == '&') ADVANCE(331);
      END_STATE();
    case 278:
      if (lookahead == '&') SKIP(332);
      END_STATE();
    case 279:
      if (lookahead == '&') SKIP(333);
      END_STATE();
    case 280:
      if (lookahead == '&') SKIP(334);
      END_STATE();
    case 281:
      if (lookahead == '&') SKIP(335);
      END_STATE();
    case 282:
      if (lookahead == '&') SKIP(336);
      END_STATE();
    case 283:
      if (lookahead == '&') SKIP(337);
      END_STATE();
    case 284:
      if (lookahead == '&') SKIP(338);
      END_STATE();
    case 285:
      if (lookahead == '&') SKIP(339);
      END_STATE();
    case 286:
      if (lookahead == '&') SKIP(340);
      END_STATE();
    case 287:
      if (lookahead == '&') SKIP(341);
      END_STATE();
    case 288:
      if (lookahead == '&') SKIP(342);
      END_STATE();
    case 289:
      if (lookahead == '&') SKIP(343);
      END_STATE();
    case 290:
      if (lookahead == '&') SKIP(344);
      END_STATE();
    case 291:
      if (lookahead == '&') SKIP(345);
      END_STATE();
    case 292:
      if (lookahead == '&') SKIP(346);
      END_STATE();
    case 293:
      if (lookahead == '&') SKIP(347);
      END_STATE();
    case 294:
      if (lookahead == '&') SKIP(348);
      END_STATE();
    case 295:
      if (lookahead == '&') SKIP(349);
      END_STATE();
    case 296:
      if (lookahead == '&') SKIP(350);
      END_STATE();
    case 297:
      if (lookahead == '&') SKIP(351);
      END_STATE();
    case 298:
      if (lookahead == '&') SKIP(352);
      END_STATE();
    case 299:
      if (lookahead == '&') SKIP(353);
      END_STATE();
    case 300:
      if (lookahead == '&') SKIP(354);
      END_STATE();
    case 301:
      if (lookahead == '&') SKIP(355);
      END_STATE();
    case 302:
      if (lookahead == '&') SKIP(356);
      END_STATE();
    case 303:
      if (lookahead == '&') SKIP(357);
      END_STATE();
    case 304:
      if (lookahead == '&') SKIP(358);
      END_STATE();
    case 305:
      if (lookahead == '\'') ADVANCE(972);
      END_STATE();
    case 306:
      if (lookahead == '*') ADVANCE(1109);
      END_STATE();
    case 307:
      if (lookahead == '*') SKIP(192);
      if (lookahead == '\\') ADVANCE(1104);
      END_STATE();
    case 308:
      if (lookahead == '*') SKIP(360);
      END_STATE();
    case 309:
      if (lookahead == '*') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == '*') SKIP(194);
      END_STATE();
    case 311:
      if (lookahead == '*') SKIP(195);
      END_STATE();
    case 312:
      if (lookahead == '*') SKIP(196);
      END_STATE();
    case 313:
      if (lookahead == '*') SKIP(197);
      END_STATE();
    case 314:
      if (lookahead == '*') SKIP(198);
      END_STATE();
    case 315:
      if (lookahead == '*') SKIP(199);
      END_STATE();
    case 316:
      if (lookahead == '*') SKIP(200);
      END_STATE();
    case 317:
      if (lookahead == '*') SKIP(201);
      END_STATE();
    case 318:
      if (lookahead == '*') ADVANCE(362);
      END_STATE();
    case 319:
      if (lookahead == '*') ADVANCE(363);
      END_STATE();
    case 320:
      if (lookahead == '*') ADVANCE(364);
      END_STATE();
    case 321:
      if (lookahead == '*') ADVANCE(365);
      END_STATE();
    case 322:
      if (lookahead == '*') ADVANCE(366);
      END_STATE();
    case 323:
      if (lookahead == '*') ADVANCE(367);
      END_STATE();
    case 324:
      if (lookahead == '*') ADVANCE(368);
      END_STATE();
    case 325:
      if (lookahead == '*') ADVANCE(369);
      END_STATE();
    case 326:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 327:
      if (lookahead == '*') ADVANCE(371);
      END_STATE();
    case 328:
      if (lookahead == '*') ADVANCE(372);
      END_STATE();
    case 329:
      if (lookahead == '*') ADVANCE(373);
      END_STATE();
    case 330:
      if (lookahead == '*') ADVANCE(374);
      END_STATE();
    case 331:
      if (lookahead == '*') ADVANCE(375);
      END_STATE();
    case 332:
      if (lookahead == '*') SKIP(376);
      END_STATE();
    case 333:
      if (lookahead == '*') SKIP(377);
      END_STATE();
    case 334:
      if (lookahead == '*') SKIP(378);
      END_STATE();
    case 335:
      if (lookahead == '*') SKIP(379);
      END_STATE();
    case 336:
      if (lookahead == '*') SKIP(380);
      END_STATE();
    case 337:
      if (lookahead == '*') SKIP(381);
      END_STATE();
    case 338:
      if (lookahead == '*') SKIP(382);
      END_STATE();
    case 339:
      if (lookahead == '*') SKIP(383);
      END_STATE();
    case 340:
      if (lookahead == '*') SKIP(384);
      END_STATE();
    case 341:
      if (lookahead == '*') SKIP(385);
      END_STATE();
    case 342:
      if (lookahead == '*') SKIP(386);
      END_STATE();
    case 343:
      if (lookahead == '*') SKIP(387);
      END_STATE();
    case 344:
      if (lookahead == '*') SKIP(388);
      END_STATE();
    case 345:
      if (lookahead == '*') SKIP(389);
      END_STATE();
    case 346:
      if (lookahead == '*') SKIP(390);
      END_STATE();
    case 347:
      if (lookahead == '*') SKIP(391);
      END_STATE();
    case 348:
      if (lookahead == '*') SKIP(392);
      END_STATE();
    case 349:
      if (lookahead == '*') SKIP(393);
      END_STATE();
    case 350:
      if (lookahead == '*') SKIP(394);
      END_STATE();
    case 351:
      if (lookahead == '*') SKIP(395);
      END_STATE();
    case 352:
      if (lookahead == '*') SKIP(396);
      END_STATE();
    case 353:
      if (lookahead == '*') SKIP(397);
      END_STATE();
    case 354:
      if (lookahead == '*') SKIP(398);
      END_STATE();
    case 355:
      if (lookahead == '*') SKIP(399);
      END_STATE();
    case 356:
      if (lookahead == '*') SKIP(400);
      END_STATE();
    case 357:
      if (lookahead == '*') SKIP(401);
      END_STATE();
    case 358:
      if (lookahead == '*') SKIP(402);
      END_STATE();
    case 359:
      if (lookahead == '+') ADVANCE(1098);
      if (lookahead == '/') ADVANCE(1104);
      END_STATE();
    case 360:
      if (lookahead == '+') SKIP(407);
      END_STATE();
    case 361:
      if (lookahead == '+') ADVANCE(408);
      END_STATE();
    case 362:
      if (lookahead == '+') ADVANCE(410);
      END_STATE();
    case 363:
      if (lookahead == '+') ADVANCE(412);
      END_STATE();
    case 364:
      if (lookahead == '+') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == '+') ADVANCE(416);
      END_STATE();
    case 366:
      if (lookahead == '+') ADVANCE(418);
      END_STATE();
    case 367:
      if (lookahead == '+') ADVANCE(420);
      END_STATE();
    case 368:
      if (lookahead == '+') ADVANCE(422);
      END_STATE();
    case 369:
      if (lookahead == '+') ADVANCE(424);
      END_STATE();
    case 370:
      if (lookahead == '+') ADVANCE(426);
      END_STATE();
    case 371:
      if (lookahead == '+') ADVANCE(428);
      END_STATE();
    case 372:
      if (lookahead == '+') ADVANCE(430);
      END_STATE();
    case 373:
      if (lookahead == '+') ADVANCE(432);
      END_STATE();
    case 374:
      if (lookahead == '+') ADVANCE(434);
      END_STATE();
    case 375:
      if (lookahead == '+') ADVANCE(436);
      END_STATE();
    case 376:
      if (lookahead == '+') SKIP(409);
      END_STATE();
    case 377:
      if (lookahead == '+') SKIP(411);
      END_STATE();
    case 378:
      if (lookahead == '+') SKIP(413);
      END_STATE();
    case 379:
      if (lookahead == '+') SKIP(415);
      END_STATE();
    case 380:
      if (lookahead == '+') SKIP(417);
      END_STATE();
    case 381:
      if (lookahead == '+') SKIP(419);
      END_STATE();
    case 382:
      if (lookahead == '+') SKIP(421);
      END_STATE();
    case 383:
      if (lookahead == '+') SKIP(423);
      END_STATE();
    case 384:
      if (lookahead == '+') SKIP(425);
      END_STATE();
    case 385:
      if (lookahead == '+') SKIP(427);
      END_STATE();
    case 386:
      if (lookahead == '+') SKIP(429);
      END_STATE();
    case 387:
      if (lookahead == '+') SKIP(431);
      END_STATE();
    case 388:
      if (lookahead == '+') SKIP(433);
      END_STATE();
    case 389:
      if (lookahead == '+') SKIP(435);
      END_STATE();
    case 390:
      if (lookahead == '+') SKIP(437);
      END_STATE();
    case 391:
      if (lookahead == '+') SKIP(438);
      END_STATE();
    case 392:
      if (lookahead == '+') SKIP(439);
      END_STATE();
    case 393:
      if (lookahead == '+') SKIP(440);
      END_STATE();
    case 394:
      if (lookahead == '+') SKIP(441);
      END_STATE();
    case 395:
      if (lookahead == '+') SKIP(442);
      END_STATE();
    case 396:
      if (lookahead == '+') SKIP(443);
      END_STATE();
    case 397:
      if (lookahead == '+') SKIP(444);
      END_STATE();
    case 398:
      if (lookahead == '+') SKIP(445);
      END_STATE();
    case 399:
      if (lookahead == '+') SKIP(446);
      END_STATE();
    case 400:
      if (lookahead == '+') SKIP(447);
      END_STATE();
    case 401:
      if (lookahead == '+') SKIP(448);
      END_STATE();
    case 402:
      if (lookahead == '+') SKIP(449);
      END_STATE();
    case 403:
      if (lookahead == ',') ADVANCE(857);
      END_STATE();
    case 404:
      if (lookahead == '-') ADVANCE(970);
      END_STATE();
    case 405:
      if (lookahead == '-') ADVANCE(1094);
      END_STATE();
    case 406:
      if (lookahead == '-') ADVANCE(1093);
      END_STATE();
    case 407:
      if (lookahead == '-') SKIP(453);
      END_STATE();
    case 408:
      if (lookahead == '-') ADVANCE(451);
      END_STATE();
    case 409:
      if (lookahead == '-') SKIP(455);
      END_STATE();
    case 410:
      if (lookahead == '-') ADVANCE(454);
      END_STATE();
    case 411:
      if (lookahead == '-') SKIP(457);
      END_STATE();
    case 412:
      if (lookahead == '-') ADVANCE(456);
      END_STATE();
    case 413:
      if (lookahead == '-') SKIP(459);
      END_STATE();
    case 414:
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 415:
      if (lookahead == '-') SKIP(461);
      END_STATE();
    case 416:
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 417:
      if (lookahead == '-') SKIP(463);
      END_STATE();
    case 418:
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 419:
      if (lookahead == '-') SKIP(465);
      END_STATE();
    case 420:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 421:
      if (lookahead == '-') SKIP(467);
      END_STATE();
    case 422:
      if (lookahead == '-') ADVANCE(466);
      END_STATE();
    case 423:
      if (lookahead == '-') SKIP(469);
      END_STATE();
    case 424:
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 425:
      if (lookahead == '-') SKIP(471);
      END_STATE();
    case 426:
      if (lookahead == '-') ADVANCE(470);
      END_STATE();
    case 427:
      if (lookahead == '-') SKIP(473);
      END_STATE();
    case 428:
      if (lookahead == '-') ADVANCE(472);
      END_STATE();
    case 429:
      if (lookahead == '-') SKIP(475);
      END_STATE();
    case 430:
      if (lookahead == '-') ADVANCE(474);
      END_STATE();
    case 431:
      if (lookahead == '-') SKIP(477);
      END_STATE();
    case 432:
      if (lookahead == '-') ADVANCE(476);
      END_STATE();
    case 433:
      if (lookahead == '-') SKIP(479);
      END_STATE();
    case 434:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 435:
      if (lookahead == '-') SKIP(481);
      END_STATE();
    case 436:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 437:
      if (lookahead == '-') SKIP(482);
      END_STATE();
    case 438:
      if (lookahead == '-') SKIP(483);
      END_STATE();
    case 439:
      if (lookahead == '-') SKIP(484);
      END_STATE();
    case 440:
      if (lookahead == '-') SKIP(485);
      END_STATE();
    case 441:
      if (lookahead == '-') SKIP(486);
      END_STATE();
    case 442:
      if (lookahead == '-') SKIP(487);
      END_STATE();
    case 443:
      if (lookahead == '-') SKIP(488);
      END_STATE();
    case 444:
      if (lookahead == '-') SKIP(489);
      END_STATE();
    case 445:
      if (lookahead == '-') SKIP(490);
      END_STATE();
    case 446:
      if (lookahead == '-') SKIP(491);
      END_STATE();
    case 447:
      if (lookahead == '-') SKIP(492);
      END_STATE();
    case 448:
      if (lookahead == '-') SKIP(493);
      END_STATE();
    case 449:
      if (lookahead == '-') SKIP(494);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(499);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(1099);
      END_STATE();
    case 453:
      if (lookahead == '.') SKIP(497);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(507);
      END_STATE();
    case 455:
      if (lookahead == '.') SKIP(521);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(508);
      END_STATE();
    case 457:
      if (lookahead == '.') SKIP(522);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(509);
      END_STATE();
    case 459:
      if (lookahead == '.') SKIP(523);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(510);
      END_STATE();
    case 461:
      if (lookahead == '.') SKIP(524);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(511);
      END_STATE();
    case 463:
      if (lookahead == '.') SKIP(525);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(512);
      END_STATE();
    case 465:
      if (lookahead == '.') SKIP(526);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(513);
      END_STATE();
    case 467:
      if (lookahead == '.') SKIP(527);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(514);
      END_STATE();
    case 469:
      if (lookahead == '.') SKIP(528);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(515);
      END_STATE();
    case 471:
      if (lookahead == '.') SKIP(529);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(516);
      END_STATE();
    case 473:
      if (lookahead == '.') SKIP(530);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(517);
      END_STATE();
    case 475:
      if (lookahead == '.') SKIP(531);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(518);
      END_STATE();
    case 477:
      if (lookahead == '.') SKIP(532);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(519);
      END_STATE();
    case 479:
      if (lookahead == '.') SKIP(533);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(520);
      END_STATE();
    case 481:
      if (lookahead == '.') SKIP(534);
      END_STATE();
    case 482:
      if (lookahead == '.') SKIP(535);
      END_STATE();
    case 483:
      if (lookahead == '.') SKIP(536);
      END_STATE();
    case 484:
      if (lookahead == '.') SKIP(537);
      END_STATE();
    case 485:
      if (lookahead == '.') SKIP(538);
      END_STATE();
    case 486:
      if (lookahead == '.') SKIP(539);
      END_STATE();
    case 487:
      if (lookahead == '.') SKIP(540);
      END_STATE();
    case 488:
      if (lookahead == '.') SKIP(541);
      END_STATE();
    case 489:
      if (lookahead == '.') SKIP(542);
      END_STATE();
    case 490:
      if (lookahead == '.') SKIP(543);
      END_STATE();
    case 491:
      if (lookahead == '.') SKIP(544);
      END_STATE();
    case 492:
      if (lookahead == '.') SKIP(545);
      END_STATE();
    case 493:
      if (lookahead == '.') SKIP(546);
      END_STATE();
    case 494:
      if (lookahead == '.') SKIP(547);
      END_STATE();
    case 495:
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '=') ADVANCE(1102);
      END_STATE();
    case 496:
      if (lookahead == '/') SKIP(245);
      END_STATE();
    case 497:
      if (lookahead == '/') SKIP(548);
      END_STATE();
    case 498:
      if (lookahead == '/') SKIP(189);
      END_STATE();
    case 499:
      if (lookahead == '/') ADVANCE(549);
      END_STATE();
    case 500:
      if (lookahead == '/') SKIP(256);
      END_STATE();
    case 501:
      if (lookahead == '/') SKIP(257);
      END_STATE();
    case 502:
      if (lookahead == '/') SKIP(258);
      END_STATE();
    case 503:
      if (lookahead == '/') SKIP(259);
      END_STATE();
    case 504:
      if (lookahead == '/') SKIP(260);
      END_STATE();
    case 505:
      if (lookahead == '/') SKIP(261);
      END_STATE();
    case 506:
      if (lookahead == '/') SKIP(190);
      END_STATE();
    case 507:
      if (lookahead == '/') ADVANCE(550);
      END_STATE();
    case 508:
      if (lookahead == '/') ADVANCE(551);
      END_STATE();
    case 509:
      if (lookahead == '/') ADVANCE(552);
      END_STATE();
    case 510:
      if (lookahead == '/') ADVANCE(553);
      END_STATE();
    case 511:
      if (lookahead == '/') ADVANCE(554);
      END_STATE();
    case 512:
      if (lookahead == '/') ADVANCE(555);
      END_STATE();
    case 513:
      if (lookahead == '/') ADVANCE(556);
      END_STATE();
    case 514:
      if (lookahead == '/') ADVANCE(557);
      END_STATE();
    case 515:
      if (lookahead == '/') ADVANCE(558);
      END_STATE();
    case 516:
      if (lookahead == '/') ADVANCE(559);
      END_STATE();
    case 517:
      if (lookahead == '/') ADVANCE(560);
      END_STATE();
    case 518:
      if (lookahead == '/') ADVANCE(561);
      END_STATE();
    case 519:
      if (lookahead == '/') ADVANCE(562);
      END_STATE();
    case 520:
      if (lookahead == '/') ADVANCE(563);
      END_STATE();
    case 521:
      if (lookahead == '/') SKIP(564);
      END_STATE();
    case 522:
      if (lookahead == '/') SKIP(565);
      END_STATE();
    case 523:
      if (lookahead == '/') SKIP(566);
      END_STATE();
    case 524:
      if (lookahead == '/') SKIP(567);
      END_STATE();
    case 525:
      if (lookahead == '/') SKIP(568);
      END_STATE();
    case 526:
      if (lookahead == '/') SKIP(569);
      END_STATE();
    case 527:
      if (lookahead == '/') SKIP(570);
      END_STATE();
    case 528:
      if (lookahead == '/') SKIP(571);
      END_STATE();
    case 529:
      if (lookahead == '/') SKIP(572);
      END_STATE();
    case 530:
      if (lookahead == '/') SKIP(573);
      END_STATE();
    case 531:
      if (lookahead == '/') SKIP(574);
      END_STATE();
    case 532:
      if (lookahead == '/') SKIP(575);
      END_STATE();
    case 533:
      if (lookahead == '/') SKIP(576);
      END_STATE();
    case 534:
      if (lookahead == '/') SKIP(577);
      END_STATE();
    case 535:
      if (lookahead == '/') SKIP(578);
      END_STATE();
    case 536:
      if (lookahead == '/') SKIP(579);
      END_STATE();
    case 537:
      if (lookahead == '/') SKIP(580);
      END_STATE();
    case 538:
      if (lookahead == '/') SKIP(581);
      END_STATE();
    case 539:
      if (lookahead == '/') SKIP(582);
      END_STATE();
    case 540:
      if (lookahead == '/') SKIP(583);
      END_STATE();
    case 541:
      if (lookahead == '/') SKIP(584);
      END_STATE();
    case 542:
      if (lookahead == '/') SKIP(585);
      END_STATE();
    case 543:
      if (lookahead == '/') SKIP(586);
      END_STATE();
    case 544:
      if (lookahead == '/') SKIP(587);
      END_STATE();
    case 545:
      if (lookahead == '/') SKIP(588);
      END_STATE();
    case 546:
      if (lookahead == '/') SKIP(589);
      END_STATE();
    case 547:
      if (lookahead == '/') SKIP(590);
      END_STATE();
    case 548:
      if (lookahead == ':') SKIP(591);
      END_STATE();
    case 549:
      if (lookahead == ':') ADVANCE(592);
      END_STATE();
    case 550:
      if (lookahead == ':') ADVANCE(595);
      END_STATE();
    case 551:
      if (lookahead == ':') ADVANCE(596);
      END_STATE();
    case 552:
      if (lookahead == ':') ADVANCE(597);
      END_STATE();
    case 553:
      if (lookahead == ':') ADVANCE(598);
      END_STATE();
    case 554:
      if (lookahead == ':') ADVANCE(599);
      END_STATE();
    case 555:
      if (lookahead == ':') ADVANCE(600);
      END_STATE();
    case 556:
      if (lookahead == ':') ADVANCE(601);
      END_STATE();
    case 557:
      if (lookahead == ':') ADVANCE(602);
      END_STATE();
    case 558:
      if (lookahead == ':') ADVANCE(603);
      END_STATE();
    case 559:
      if (lookahead == ':') ADVANCE(604);
      END_STATE();
    case 560:
      if (lookahead == ':') ADVANCE(605);
      END_STATE();
    case 561:
      if (lookahead == ':') ADVANCE(606);
      END_STATE();
    case 562:
      if (lookahead == ':') ADVANCE(607);
      END_STATE();
    case 563:
      if (lookahead == ':') ADVANCE(608);
      END_STATE();
    case 564:
      if (lookahead == ':') SKIP(609);
      END_STATE();
    case 565:
      if (lookahead == ':') SKIP(610);
      END_STATE();
    case 566:
      if (lookahead == ':') SKIP(611);
      END_STATE();
    case 567:
      if (lookahead == ':') SKIP(612);
      END_STATE();
    case 568:
      if (lookahead == ':') SKIP(613);
      END_STATE();
    case 569:
      if (lookahead == ':') SKIP(614);
      END_STATE();
    case 570:
      if (lookahead == ':') SKIP(615);
      END_STATE();
    case 571:
      if (lookahead == ':') SKIP(616);
      END_STATE();
    case 572:
      if (lookahead == ':') SKIP(617);
      END_STATE();
    case 573:
      if (lookahead == ':') SKIP(618);
      END_STATE();
    case 574:
      if (lookahead == ':') SKIP(619);
      END_STATE();
    case 575:
      if (lookahead == ':') SKIP(620);
      END_STATE();
    case 576:
      if (lookahead == ':') SKIP(621);
      END_STATE();
    case 577:
      if (lookahead == ':') SKIP(622);
      END_STATE();
    case 578:
      if (lookahead == ':') SKIP(623);
      END_STATE();
    case 579:
      if (lookahead == ':') SKIP(624);
      END_STATE();
    case 580:
      if (lookahead == ':') SKIP(625);
      END_STATE();
    case 581:
      if (lookahead == ':') SKIP(626);
      END_STATE();
    case 582:
      if (lookahead == ':') SKIP(627);
      END_STATE();
    case 583:
      if (lookahead == ':') SKIP(628);
      END_STATE();
    case 584:
      if (lookahead == ':') SKIP(629);
      END_STATE();
    case 585:
      if (lookahead == ':') SKIP(630);
      END_STATE();
    case 586:
      if (lookahead == ':') SKIP(631);
      END_STATE();
    case 587:
      if (lookahead == ':') SKIP(632);
      END_STATE();
    case 588:
      if (lookahead == ':') SKIP(633);
      END_STATE();
    case 589:
      if (lookahead == ':') SKIP(634);
      END_STATE();
    case 590:
      if (lookahead == ':') SKIP(635);
      END_STATE();
    case 591:
      if (lookahead == '<') SKIP(636);
      END_STATE();
    case 592:
      if (lookahead == '<') ADVANCE(638);
      END_STATE();
    case 593:
      if (lookahead == '<') ADVANCE(1099);
      END_STATE();
    case 594:
      if (lookahead == '<') ADVANCE(1099);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(1102);
      END_STATE();
    case 595:
      if (lookahead == '<') ADVANCE(639);
      END_STATE();
    case 596:
      if (lookahead == '<') ADVANCE(640);
      END_STATE();
    case 597:
      if (lookahead == '<') ADVANCE(641);
      END_STATE();
    case 598:
      if (lookahead == '<') ADVANCE(642);
      END_STATE();
    case 599:
      if (lookahead == '<') ADVANCE(643);
      END_STATE();
    case 600:
      if (lookahead == '<') ADVANCE(644);
      END_STATE();
    case 601:
      if (lookahead == '<') ADVANCE(645);
      END_STATE();
    case 602:
      if (lookahead == '<') ADVANCE(646);
      END_STATE();
    case 603:
      if (lookahead == '<') ADVANCE(647);
      END_STATE();
    case 604:
      if (lookahead == '<') ADVANCE(648);
      END_STATE();
    case 605:
      if (lookahead == '<') ADVANCE(649);
      END_STATE();
    case 606:
      if (lookahead == '<') ADVANCE(650);
      END_STATE();
    case 607:
      if (lookahead == '<') ADVANCE(651);
      END_STATE();
    case 608:
      if (lookahead == '<') ADVANCE(652);
      END_STATE();
    case 609:
      if (lookahead == '<') SKIP(653);
      END_STATE();
    case 610:
      if (lookahead == '<') SKIP(654);
      END_STATE();
    case 611:
      if (lookahead == '<') SKIP(655);
      END_STATE();
    case 612:
      if (lookahead == '<') SKIP(656);
      END_STATE();
    case 613:
      if (lookahead == '<') SKIP(657);
      END_STATE();
    case 614:
      if (lookahead == '<') SKIP(658);
      END_STATE();
    case 615:
      if (lookahead == '<') SKIP(659);
      END_STATE();
    case 616:
      if (lookahead == '<') SKIP(660);
      END_STATE();
    case 617:
      if (lookahead == '<') SKIP(661);
      END_STATE();
    case 618:
      if (lookahead == '<') SKIP(662);
      END_STATE();
    case 619:
      if (lookahead == '<') SKIP(663);
      END_STATE();
    case 620:
      if (lookahead == '<') SKIP(664);
      END_STATE();
    case 621:
      if (lookahead == '<') SKIP(665);
      END_STATE();
    case 622:
      if (lookahead == '<') SKIP(666);
      END_STATE();
    case 623:
      if (lookahead == '<') SKIP(667);
      END_STATE();
    case 624:
      if (lookahead == '<') SKIP(668);
      END_STATE();
    case 625:
      if (lookahead == '<') SKIP(669);
      END_STATE();
    case 626:
      if (lookahead == '<') SKIP(670);
      END_STATE();
    case 627:
      if (lookahead == '<') SKIP(671);
      END_STATE();
    case 628:
      if (lookahead == '<') SKIP(672);
      END_STATE();
    case 629:
      if (lookahead == '<') SKIP(673);
      END_STATE();
    case 630:
      if (lookahead == '<') SKIP(674);
      END_STATE();
    case 631:
      if (lookahead == '<') SKIP(675);
      END_STATE();
    case 632:
      if (lookahead == '<') SKIP(676);
      END_STATE();
    case 633:
      if (lookahead == '<') SKIP(677);
      END_STATE();
    case 634:
      if (lookahead == '<') SKIP(678);
      END_STATE();
    case 635:
      if (lookahead == '<') SKIP(679);
      END_STATE();
    case 636:
      if (lookahead == '=') SKIP(681);
      END_STATE();
    case 637:
      if (lookahead == '=') ADVANCE(1099);
      END_STATE();
    case 638:
      if (lookahead == '=') ADVANCE(682);
      END_STATE();
    case 639:
      if (lookahead == '=') ADVANCE(684);
      END_STATE();
    case 640:
      if (lookahead == '=') ADVANCE(686);
      END_STATE();
    case 641:
      if (lookahead == '=') ADVANCE(688);
      END_STATE();
    case 642:
      if (lookahead == '=') ADVANCE(690);
      END_STATE();
    case 643:
      if (lookahead == '=') ADVANCE(692);
      END_STATE();
    case 644:
      if (lookahead == '=') ADVANCE(694);
      END_STATE();
    case 645:
      if (lookahead == '=') ADVANCE(696);
      END_STATE();
    case 646:
      if (lookahead == '=') ADVANCE(698);
      END_STATE();
    case 647:
      if (lookahead == '=') ADVANCE(700);
      END_STATE();
    case 648:
      if (lookahead == '=') ADVANCE(702);
      END_STATE();
    case 649:
      if (lookahead == '=') ADVANCE(704);
      END_STATE();
    case 650:
      if (lookahead == '=') ADVANCE(706);
      END_STATE();
    case 651:
      if (lookahead == '=') ADVANCE(708);
      END_STATE();
    case 652:
      if (lookahead == '=') ADVANCE(710);
      END_STATE();
    case 653:
      if (lookahead == '=') SKIP(683);
      END_STATE();
    case 654:
      if (lookahead == '=') SKIP(685);
      END_STATE();
    case 655:
      if (lookahead == '=') SKIP(687);
      END_STATE();
    case 656:
      if (lookahead == '=') SKIP(689);
      END_STATE();
    case 657:
      if (lookahead == '=') SKIP(691);
      END_STATE();
    case 658:
      if (lookahead == '=') SKIP(693);
      END_STATE();
    case 659:
      if (lookahead == '=') SKIP(695);
      END_STATE();
    case 660:
      if (lookahead == '=') SKIP(697);
      END_STATE();
    case 661:
      if (lookahead == '=') SKIP(699);
      END_STATE();
    case 662:
      if (lookahead == '=') SKIP(701);
      END_STATE();
    case 663:
      if (lookahead == '=') SKIP(703);
      END_STATE();
    case 664:
      if (lookahead == '=') SKIP(705);
      END_STATE();
    case 665:
      if (lookahead == '=') SKIP(707);
      END_STATE();
    case 666:
      if (lookahead == '=') SKIP(709);
      END_STATE();
    case 667:
      if (lookahead == '=') SKIP(711);
      END_STATE();
    case 668:
      if (lookahead == '=') SKIP(712);
      END_STATE();
    case 669:
      if (lookahead == '=') SKIP(713);
      END_STATE();
    case 670:
      if (lookahead == '=') SKIP(714);
      END_STATE();
    case 671:
      if (lookahead == '=') SKIP(715);
      END_STATE();
    case 672:
      if (lookahead == '=') SKIP(716);
      END_STATE();
    case 673:
      if (lookahead == '=') SKIP(717);
      END_STATE();
    case 674:
      if (lookahead == '=') SKIP(718);
      END_STATE();
    case 675:
      if (lookahead == '=') SKIP(719);
      END_STATE();
    case 676:
      if (lookahead == '=') SKIP(720);
      END_STATE();
    case 677:
      if (lookahead == '=') SKIP(721);
      END_STATE();
    case 678:
      if (lookahead == '=') SKIP(722);
      END_STATE();
    case 679:
      if (lookahead == '=') SKIP(723);
      END_STATE();
    case 680:
      if (lookahead == '>') ADVANCE(1093);
      END_STATE();
    case 681:
      if (lookahead == '>') SKIP(724);
      END_STATE();
    case 682:
      if (lookahead == '>') ADVANCE(725);
      END_STATE();
    case 683:
      if (lookahead == '>') SKIP(726);
      END_STATE();
    case 684:
      if (lookahead == '>') ADVANCE(727);
      END_STATE();
    case 685:
      if (lookahead == '>') SKIP(728);
      END_STATE();
    case 686:
      if (lookahead == '>') ADVANCE(729);
      END_STATE();
    case 687:
      if (lookahead == '>') SKIP(730);
      END_STATE();
    case 688:
      if (lookahead == '>') ADVANCE(731);
      END_STATE();
    case 689:
      if (lookahead == '>') SKIP(732);
      END_STATE();
    case 690:
      if (lookahead == '>') ADVANCE(733);
      END_STATE();
    case 691:
      if (lookahead == '>') SKIP(734);
      END_STATE();
    case 692:
      if (lookahead == '>') ADVANCE(735);
      END_STATE();
    case 693:
      if (lookahead == '>') SKIP(736);
      END_STATE();
    case 694:
      if (lookahead == '>') ADVANCE(737);
      END_STATE();
    case 695:
      if (lookahead == '>') SKIP(738);
      END_STATE();
    case 696:
      if (lookahead == '>') ADVANCE(739);
      END_STATE();
    case 697:
      if (lookahead == '>') SKIP(740);
      END_STATE();
    case 698:
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 699:
      if (lookahead == '>') SKIP(742);
      END_STATE();
    case 700:
      if (lookahead == '>') ADVANCE(743);
      END_STATE();
    case 701:
      if (lookahead == '>') SKIP(744);
      END_STATE();
    case 702:
      if (lookahead == '>') ADVANCE(745);
      END_STATE();
    case 703:
      if (lookahead == '>') SKIP(746);
      END_STATE();
    case 704:
      if (lookahead == '>') ADVANCE(747);
      END_STATE();
    case 705:
      if (lookahead == '>') SKIP(748);
      END_STATE();
    case 706:
      if (lookahead == '>') ADVANCE(749);
      END_STATE();
    case 707:
      if (lookahead == '>') SKIP(750);
      END_STATE();
    case 708:
      if (lookahead == '>') ADVANCE(751);
      END_STATE();
    case 709:
      if (lookahead == '>') SKIP(752);
      END_STATE();
    case 710:
      if (lookahead == '>') ADVANCE(753);
      END_STATE();
    case 711:
      if (lookahead == '>') SKIP(754);
      END_STATE();
    case 712:
      if (lookahead == '>') SKIP(755);
      END_STATE();
    case 713:
      if (lookahead == '>') SKIP(756);
      END_STATE();
    case 714:
      if (lookahead == '>') SKIP(757);
      END_STATE();
    case 715:
      if (lookahead == '>') SKIP(758);
      END_STATE();
    case 716:
      if (lookahead == '>') SKIP(759);
      END_STATE();
    case 717:
      if (lookahead == '>') SKIP(760);
      END_STATE();
    case 718:
      if (lookahead == '>') SKIP(761);
      END_STATE();
    case 719:
      if (lookahead == '>') SKIP(762);
      END_STATE();
    case 720:
      if (lookahead == '>') SKIP(763);
      END_STATE();
    case 721:
      if (lookahead == '>') SKIP(764);
      END_STATE();
    case 722:
      if (lookahead == '>') SKIP(765);
      END_STATE();
    case 723:
      if (lookahead == '>') SKIP(766);
      END_STATE();
    case 724:
      if (lookahead == '?') SKIP(767);
      END_STATE();
    case 725:
      if (lookahead == '?') ADVANCE(768);
      END_STATE();
    case 726:
      if (lookahead == '?') SKIP(769);
      END_STATE();
    case 727:
      if (lookahead == '?') ADVANCE(770);
      END_STATE();
    case 728:
      if (lookahead == '?') SKIP(771);
      END_STATE();
    case 729:
      if (lookahead == '?') ADVANCE(772);
      END_STATE();
    case 730:
      if (lookahead == '?') SKIP(773);
      END_STATE();
    case 731:
      if (lookahead == '?') ADVANCE(774);
      END_STATE();
    case 732:
      if (lookahead == '?') SKIP(775);
      END_STATE();
    case 733:
      if (lookahead == '?') ADVANCE(776);
      END_STATE();
    case 734:
      if (lookahead == '?') SKIP(777);
      END_STATE();
    case 735:
      if (lookahead == '?') ADVANCE(778);
      END_STATE();
    case 736:
      if (lookahead == '?') SKIP(779);
      END_STATE();
    case 737:
      if (lookahead == '?') ADVANCE(780);
      END_STATE();
    case 738:
      if (lookahead == '?') SKIP(781);
      END_STATE();
    case 739:
      if (lookahead == '?') ADVANCE(782);
      END_STATE();
    case 740:
      if (lookahead == '?') SKIP(783);
      END_STATE();
    case 741:
      if (lookahead == '?') ADVANCE(784);
      END_STATE();
    case 742:
      if (lookahead == '?') SKIP(785);
      END_STATE();
    case 743:
      if (lookahead == '?') ADVANCE(786);
      END_STATE();
    case 744:
      if (lookahead == '?') SKIP(787);
      END_STATE();
    case 745:
      if (lookahead == '?') ADVANCE(788);
      END_STATE();
    case 746:
      if (lookahead == '?') SKIP(789);
      END_STATE();
    case 747:
      if (lookahead == '?') ADVANCE(790);
      END_STATE();
    case 748:
      if (lookahead == '?') SKIP(791);
      END_STATE();
    case 749:
      if (lookahead == '?') ADVANCE(792);
      END_STATE();
    case 750:
      if (lookahead == '?') SKIP(793);
      END_STATE();
    case 751:
      if (lookahead == '?') ADVANCE(794);
      END_STATE();
    case 752:
      if (lookahead == '?') SKIP(795);
      END_STATE();
    case 753:
      if (lookahead == '?') ADVANCE(796);
      END_STATE();
    case 754:
      if (lookahead == '?') SKIP(797);
      END_STATE();
    case 755:
      if (lookahead == '?') SKIP(798);
      END_STATE();
    case 756:
      if (lookahead == '?') SKIP(799);
      END_STATE();
    case 757:
      if (lookahead == '?') SKIP(800);
      END_STATE();
    case 758:
      if (lookahead == '?') SKIP(801);
      END_STATE();
    case 759:
      if (lookahead == '?') SKIP(802);
      END_STATE();
    case 760:
      if (lookahead == '?') SKIP(803);
      END_STATE();
    case 761:
      if (lookahead == '?') SKIP(804);
      END_STATE();
    case 762:
      if (lookahead == '?') SKIP(805);
      END_STATE();
    case 763:
      if (lookahead == '?') SKIP(806);
      END_STATE();
    case 764:
      if (lookahead == '?') SKIP(807);
      END_STATE();
    case 765:
      if (lookahead == '?') SKIP(808);
      END_STATE();
    case 766:
      if (lookahead == '?') SKIP(809);
      END_STATE();
    case 767:
      if (lookahead == '@') SKIP(814);
      END_STATE();
    case 768:
      if (lookahead == '@') ADVANCE(815);
      END_STATE();
    case 769:
      if (lookahead == '@') SKIP(816);
      END_STATE();
    case 770:
      if (lookahead == '@') ADVANCE(817);
      END_STATE();
    case 771:
      if (lookahead == '@') SKIP(818);
      END_STATE();
    case 772:
      if (lookahead == '@') ADVANCE(819);
      END_STATE();
    case 773:
      if (lookahead == '@') SKIP(820);
      END_STATE();
    case 774:
      if (lookahead == '@') ADVANCE(821);
      END_STATE();
    case 775:
      if (lookahead == '@') SKIP(822);
      END_STATE();
    case 776:
      if (lookahead == '@') ADVANCE(823);
      END_STATE();
    case 777:
      if (lookahead == '@') SKIP(824);
      END_STATE();
    case 778:
      if (lookahead == '@') ADVANCE(825);
      END_STATE();
    case 779:
      if (lookahead == '@') SKIP(826);
      END_STATE();
    case 780:
      if (lookahead == '@') ADVANCE(827);
      END_STATE();
    case 781:
      if (lookahead == '@') SKIP(828);
      END_STATE();
    case 782:
      if (lookahead == '@') ADVANCE(829);
      END_STATE();
    case 783:
      if (lookahead == '@') SKIP(830);
      END_STATE();
    case 784:
      if (lookahead == '@') ADVANCE(831);
      END_STATE();
    case 785:
      if (lookahead == '@') SKIP(832);
      END_STATE();
    case 786:
      if (lookahead == '@') ADVANCE(848);
      END_STATE();
    case 787:
      if (lookahead == '@') SKIP(834);
      END_STATE();
    case 788:
      if (lookahead == '@') ADVANCE(849);
      END_STATE();
    case 789:
      if (lookahead == '@') SKIP(836);
      END_STATE();
    case 790:
      if (lookahead == '@') ADVANCE(833);
      END_STATE();
    case 791:
      if (lookahead == '@') SKIP(838);
      END_STATE();
    case 792:
      if (lookahead == '@') ADVANCE(835);
      END_STATE();
    case 793:
      if (lookahead == '@') SKIP(840);
      END_STATE();
    case 794:
      if (lookahead == '@') ADVANCE(837);
      END_STATE();
    case 795:
      if (lookahead == '@') SKIP(841);
      END_STATE();
    case 796:
      if (lookahead == '@') ADVANCE(839);
      END_STATE();
    case 797:
      if (lookahead == '@') SKIP(842);
      END_STATE();
    case 798:
      if (lookahead == '@') SKIP(843);
      END_STATE();
    case 799:
      if (lookahead == '@') SKIP(844);
      END_STATE();
    case 800:
      if (lookahead == '@') SKIP(845);
      END_STATE();
    case 801:
      if (lookahead == '@') SKIP(846);
      END_STATE();
    case 802:
      if (lookahead == '@') SKIP(847);
      END_STATE();
    case 803:
      if (lookahead == '@') SKIP(850);
      END_STATE();
    case 804:
      if (lookahead == '@') SKIP(851);
      END_STATE();
    case 805:
      if (lookahead == '@') SKIP(852);
      END_STATE();
    case 806:
      if (lookahead == '@') SKIP(853);
      END_STATE();
    case 807:
      if (lookahead == '@') SKIP(854);
      END_STATE();
    case 808:
      if (lookahead == '@') SKIP(855);
      END_STATE();
    case 809:
      if (lookahead == '@') SKIP(856);
      END_STATE();
    case 810:
      if (lookahead == '\\') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(810);
      END_STATE();
    case 811:
      if (lookahead == '\\') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 812:
      if (lookahead == '\\') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(812);
      END_STATE();
    case 813:
      if (lookahead == '\\') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(813);
      END_STATE();
    case 814:
      if (lookahead == '^') SKIP(865);
      END_STATE();
    case 815:
      if (lookahead == '^') ADVANCE(869);
      END_STATE();
    case 816:
      if (lookahead == '^') SKIP(866);
      END_STATE();
    case 817:
      if (lookahead == '^') ADVANCE(867);
      END_STATE();
    case 818:
      if (lookahead == '^') SKIP(873);
      END_STATE();
    case 819:
      if (lookahead == '^') ADVANCE(868);
      END_STATE();
    case 820:
      if (lookahead == '^') SKIP(875);
      END_STATE();
    case 821:
      if (lookahead == '^') ADVANCE(870);
      END_STATE();
    case 822:
      if (lookahead == '^') SKIP(878);
      END_STATE();
    case 823:
      if (lookahead == '^') ADVANCE(871);
      END_STATE();
    case 824:
      if (lookahead == '^') SKIP(880);
      END_STATE();
    case 825:
      if (lookahead == '^') ADVANCE(874);
      END_STATE();
    case 826:
      if (lookahead == '^') SKIP(883);
      END_STATE();
    case 827:
      if (lookahead == '^') ADVANCE(877);
      END_STATE();
    case 828:
      if (lookahead == '^') SKIP(884);
      END_STATE();
    case 829:
      if (lookahead == '^') ADVANCE(872);
      END_STATE();
    case 830:
      if (lookahead == '^') SKIP(885);
      END_STATE();
    case 831:
      if (lookahead == '^') ADVANCE(882);
      END_STATE();
    case 832:
      if (lookahead == '^') SKIP(886);
      END_STATE();
    case 833:
      if (lookahead == '^') ADVANCE(879);
      END_STATE();
    case 834:
      if (lookahead == '^') SKIP(887);
      END_STATE();
    case 835:
      if (lookahead == '^') ADVANCE(881);
      END_STATE();
    case 836:
      if (lookahead == '^') SKIP(889);
      END_STATE();
    case 837:
      if (lookahead == '^') ADVANCE(876);
      END_STATE();
    case 838:
      if (lookahead == '^') SKIP(890);
      END_STATE();
    case 839:
      if (lookahead == '^') ADVANCE(888);
      END_STATE();
    case 840:
      if (lookahead == '^') SKIP(891);
      END_STATE();
    case 841:
      if (lookahead == '^') SKIP(892);
      END_STATE();
    case 842:
      if (lookahead == '^') SKIP(893);
      END_STATE();
    case 843:
      if (lookahead == '^') SKIP(894);
      END_STATE();
    case 844:
      if (lookahead == '^') SKIP(895);
      END_STATE();
    case 845:
      if (lookahead == '^') SKIP(896);
      END_STATE();
    case 846:
      if (lookahead == '^') SKIP(897);
      END_STATE();
    case 847:
      if (lookahead == '^') SKIP(898);
      END_STATE();
    case 848:
      if (lookahead == '^') ADVANCE(899);
      END_STATE();
    case 849:
      if (lookahead == '^') ADVANCE(900);
      END_STATE();
    case 850:
      if (lookahead == '^') SKIP(901);
      END_STATE();
    case 851:
      if (lookahead == '^') SKIP(902);
      END_STATE();
    case 852:
      if (lookahead == '^') SKIP(903);
      END_STATE();
    case 853:
      if (lookahead == '^') SKIP(904);
      END_STATE();
    case 854:
      if (lookahead == '^') SKIP(905);
      END_STATE();
    case 855:
      if (lookahead == '^') SKIP(906);
      END_STATE();
    case 856:
      if (lookahead == '^') SKIP(907);
      END_STATE();
    case 857:
      if (lookahead == '`') ADVANCE(1097);
      END_STATE();
    case 858:
      if (lookahead == 'd') ADVANCE(1106);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 860:
      if (lookahead == 'm') ADVANCE(1106);
      END_STATE();
    case 861:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 862:
      if (lookahead == 's') ADVANCE(1099);
      END_STATE();
    case 863:
      if (lookahead == 'x') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(810);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(191);
      END_STATE();
    case 864:
      if (lookahead == 'x') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(812);
      if (set_contains(aux_sym_atom_token1_character_set_1, 12, lookahead)) ADVANCE(193);
      END_STATE();
    case 865:
      if (lookahead == '~') SKIP(192);
      END_STATE();
    case 866:
      if (lookahead == '~') SKIP(3);
      END_STATE();
    case 867:
      if (lookahead == '~') ADVANCE(191);
      END_STATE();
    case 868:
      if (lookahead == '~') ADVANCE(193);
      END_STATE();
    case 869:
      if (lookahead == '~') ADVANCE(1048);
      END_STATE();
    case 870:
      if (lookahead == '~') ADVANCE(13);
      END_STATE();
    case 871:
      if (lookahead == '~') ADVANCE(17);
      END_STATE();
    case 872:
      if (lookahead == '~') ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '~') SKIP(31);
      END_STATE();
    case 874:
      if (lookahead == '~') ADVANCE(1037);
      END_STATE();
    case 875:
      if (lookahead == '~') SKIP(181);
      END_STATE();
    case 876:
      if (lookahead == '~') ADVANCE(158);
      END_STATE();
    case 877:
      if (lookahead == '~') ADVANCE(1052);
      END_STATE();
    case 878:
      if (lookahead == '~') SKIP(47);
      END_STATE();
    case 879:
      if (lookahead == '~') ADVANCE(1046);
      END_STATE();
    case 880:
      if (lookahead == '~') SKIP(57);
      END_STATE();
    case 881:
      if (lookahead == '~') ADVANCE(1056);
      END_STATE();
    case 882:
      if (lookahead == '~') ADVANCE(1032);
      END_STATE();
    case 883:
      if (lookahead == '~') SKIP(67);
      END_STATE();
    case 884:
      if (lookahead == '~') SKIP(77);
      END_STATE();
    case 885:
      if (lookahead == '~') SKIP(87);
      END_STATE();
    case 886:
      if (lookahead == '~') SKIP(97);
      END_STATE();
    case 887:
      if (lookahead == '~') SKIP(107);
      END_STATE();
    case 888:
      if (lookahead == '~') ADVANCE(1041);
      END_STATE();
    case 889:
      if (lookahead == '~') SKIP(117);
      END_STATE();
    case 890:
      if (lookahead == '~') SKIP(127);
      END_STATE();
    case 891:
      if (lookahead == '~') SKIP(137);
      END_STATE();
    case 892:
      if (lookahead == '~') SKIP(139);
      END_STATE();
    case 893:
      if (lookahead == '~') SKIP(141);
      END_STATE();
    case 894:
      if (lookahead == '~') SKIP(143);
      END_STATE();
    case 895:
      if (lookahead == '~') SKIP(149);
      END_STATE();
    case 896:
      if (lookahead == '~') SKIP(151);
      END_STATE();
    case 897:
      if (lookahead == '~') SKIP(153);
      END_STATE();
    case 898:
      if (lookahead == '~') SKIP(194);
      END_STATE();
    case 899:
      if (lookahead == '~') ADVANCE(163);
      END_STATE();
    case 900:
      if (lookahead == '~') ADVANCE(167);
      END_STATE();
    case 901:
      if (lookahead == '~') SKIP(195);
      END_STATE();
    case 902:
      if (lookahead == '~') SKIP(196);
      END_STATE();
    case 903:
      if (lookahead == '~') SKIP(197);
      END_STATE();
    case 904:
      if (lookahead == '~') SKIP(198);
      END_STATE();
    case 905:
      if (lookahead == '~') SKIP(199);
      END_STATE();
    case 906:
      if (lookahead == '~') SKIP(200);
      END_STATE();
    case 907:
      if (lookahead == '~') SKIP(201);
      END_STATE();
    case 908:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1019);
      END_STATE();
    case 909:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1014);
      END_STATE();
    case 910:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1015);
      END_STATE();
    case 911:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1018);
      END_STATE();
    case 912:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1019);
      END_STATE();
    case 913:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      END_STATE();
    case 914:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 915:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(813);
      END_STATE();
    case 916:
      if (eof) ADVANCE(969);
      if ((!eof && lookahead == 00)) SKIP(0);
      if (lookahead == '\n') SKIP(917);
      if (lookahead == '#') SKIP(922);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(916);
      END_STATE();
    case 917:
      if (eof) ADVANCE(969);
      if ((!eof && lookahead == 00)) SKIP(0);
      if (lookahead == '#') SKIP(922);
      if (lookahead == '%') SKIP(916);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '+') ADVANCE(1104);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(971);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(1110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(917);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) SKIP(916);
      END_STATE();
    case 918:
      if (eof) ADVANCE(969);
      if ((!eof && lookahead == 00)) SKIP(920);
      if (lookahead == '\n') SKIP(919);
      if (lookahead == '#') SKIP(923);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(918);
      END_STATE();
    case 919:
      if (eof) ADVANCE(969);
      if ((!eof && lookahead == 00)) SKIP(920);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(918);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(929);
      if (lookahead == '0') ADVANCE(1010);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1048);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(919);
      if (lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') SKIP(918);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 920:
      if (eof) ADVANCE(969);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') SKIP(918);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '(') ADVANCE(1084);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '/') SKIP(929);
      if (lookahead == '0') ADVANCE(1009);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(1118);
      if (lookahead == '\\') ADVANCE(1047);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(1127);
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(920);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1083);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 921:
      if (eof) ADVANCE(969);
      if (lookahead == '#') SKIP(924);
      if (lookahead == '*') SKIP(942);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(921);
      END_STATE();
    case 922:
      if (eof) ADVANCE(969);
      if (lookahead == '$') SKIP(925);
      END_STATE();
    case 923:
      if (eof) ADVANCE(969);
      if (lookahead == '$') SKIP(926);
      END_STATE();
    case 924:
      if (eof) ADVANCE(969);
      if (lookahead == '$') SKIP(927);
      END_STATE();
    case 925:
      if (eof) ADVANCE(969);
      if (lookahead == '&') SKIP(928);
      END_STATE();
    case 926:
      if (eof) ADVANCE(969);
      if (lookahead == '&') SKIP(930);
      END_STATE();
    case 927:
      if (eof) ADVANCE(969);
      if (lookahead == '&') SKIP(931);
      END_STATE();
    case 928:
      if (eof) ADVANCE(969);
      if (lookahead == '*') SKIP(932);
      END_STATE();
    case 929:
      if (eof) ADVANCE(969);
      if (lookahead == '*') SKIP(921);
      END_STATE();
    case 930:
      if (eof) ADVANCE(969);
      if (lookahead == '*') SKIP(933);
      END_STATE();
    case 931:
      if (eof) ADVANCE(969);
      if (lookahead == '*') SKIP(934);
      END_STATE();
    case 932:
      if (eof) ADVANCE(969);
      if (lookahead == '+') SKIP(935);
      END_STATE();
    case 933:
      if (eof) ADVANCE(969);
      if (lookahead == '+') SKIP(936);
      END_STATE();
    case 934:
      if (eof) ADVANCE(969);
      if (lookahead == '+') SKIP(937);
      END_STATE();
    case 935:
      if (eof) ADVANCE(969);
      if (lookahead == '-') SKIP(938);
      END_STATE();
    case 936:
      if (eof) ADVANCE(969);
      if (lookahead == '-') SKIP(939);
      END_STATE();
    case 937:
      if (eof) ADVANCE(969);
      if (lookahead == '-') SKIP(940);
      END_STATE();
    case 938:
      if (eof) ADVANCE(969);
      if (lookahead == '.') SKIP(941);
      END_STATE();
    case 939:
      if (eof) ADVANCE(969);
      if (lookahead == '.') SKIP(943);
      END_STATE();
    case 940:
      if (eof) ADVANCE(969);
      if (lookahead == '.') SKIP(944);
      END_STATE();
    case 941:
      if (eof) ADVANCE(969);
      if (lookahead == '/') SKIP(945);
      END_STATE();
    case 942:
      if (eof) ADVANCE(969);
      if (lookahead == '/') SKIP(920);
      END_STATE();
    case 943:
      if (eof) ADVANCE(969);
      if (lookahead == '/') SKIP(946);
      END_STATE();
    case 944:
      if (eof) ADVANCE(969);
      if (lookahead == '/') SKIP(947);
      END_STATE();
    case 945:
      if (eof) ADVANCE(969);
      if (lookahead == ':') SKIP(948);
      END_STATE();
    case 946:
      if (eof) ADVANCE(969);
      if (lookahead == ':') SKIP(949);
      END_STATE();
    case 947:
      if (eof) ADVANCE(969);
      if (lookahead == ':') SKIP(950);
      END_STATE();
    case 948:
      if (eof) ADVANCE(969);
      if (lookahead == '<') SKIP(951);
      END_STATE();
    case 949:
      if (eof) ADVANCE(969);
      if (lookahead == '<') SKIP(952);
      END_STATE();
    case 950:
      if (eof) ADVANCE(969);
      if (lookahead == '<') SKIP(953);
      END_STATE();
    case 951:
      if (eof) ADVANCE(969);
      if (lookahead == '=') SKIP(954);
      END_STATE();
    case 952:
      if (eof) ADVANCE(969);
      if (lookahead == '=') SKIP(955);
      END_STATE();
    case 953:
      if (eof) ADVANCE(969);
      if (lookahead == '=') SKIP(956);
      END_STATE();
    case 954:
      if (eof) ADVANCE(969);
      if (lookahead == '>') SKIP(957);
      END_STATE();
    case 955:
      if (eof) ADVANCE(969);
      if (lookahead == '>') SKIP(958);
      END_STATE();
    case 956:
      if (eof) ADVANCE(969);
      if (lookahead == '>') SKIP(959);
      END_STATE();
    case 957:
      if (eof) ADVANCE(969);
      if (lookahead == '?') SKIP(960);
      END_STATE();
    case 958:
      if (eof) ADVANCE(969);
      if (lookahead == '?') SKIP(961);
      END_STATE();
    case 959:
      if (eof) ADVANCE(969);
      if (lookahead == '?') SKIP(962);
      END_STATE();
    case 960:
      if (eof) ADVANCE(969);
      if (lookahead == '@') SKIP(963);
      END_STATE();
    case 961:
      if (eof) ADVANCE(969);
      if (lookahead == '@') SKIP(964);
      END_STATE();
    case 962:
      if (eof) ADVANCE(969);
      if (lookahead == '@') SKIP(965);
      END_STATE();
    case 963:
      if (eof) ADVANCE(969);
      if (lookahead == '^') SKIP(966);
      END_STATE();
    case 964:
      if (eof) ADVANCE(969);
      if (lookahead == '^') SKIP(968);
      END_STATE();
    case 965:
      if (eof) ADVANCE(969);
      if (lookahead == '^') SKIP(967);
      END_STATE();
    case 966:
      if (eof) ADVANCE(969);
      if (lookahead == '~') SKIP(916);
      END_STATE();
    case 967:
      if (eof) ADVANCE(969);
      if (lookahead == '~') SKIP(921);
      END_STATE();
    case 968:
      if (eof) ADVANCE(969);
      if (lookahead == '~') SKIP(918);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(973);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(974);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(975);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(8);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(976);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(8);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1034);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(975);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(8);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(982);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(13);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(980);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(981);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(982);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(13);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(13);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(985);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(986);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(987);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(158);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(988);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(158);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(987);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(158);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(994);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(163);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(992);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(993);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(994);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(163);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(995);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(163);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(997);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(998);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(999);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(17);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(17);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1059);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(999);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(17);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1003);
      if ((set_contains(extras_character_set_4, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1004);
      if ((set_contains(extras_character_set_8, 10, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '.') ADVANCE(911);
      if (lookahead == 'b') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(910);
      if (lookahead == 'x') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1014);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1015);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1017);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1018);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1019);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '>') ADVANCE(1096);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(1111);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1037);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(13);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1052);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(17);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1032);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(8);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1046);
      if (lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(163);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1056);
      if (lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(167);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1041);
      if (lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(158);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(1025);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(977);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1035);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1023);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1038);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(1028);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(989);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(1026);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '+') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(1048);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1048);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1049);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1050);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(1024);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1054);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(1027);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(193);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(1001);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(167);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(1007);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_empty_list);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1077);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1078);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1080);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1081);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_9, 10, lookahead)) &&
          lookahead != '\t' &&
          (lookahead < 'G' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1083);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_operator_1200xfx);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_operator_1200fx);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_operator_1100xfy);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_operator_1050xfy);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_operator_900fy);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_operator_700xfx);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == ':') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(637);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(1099);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '<') ADVANCE(1106);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(1099);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_operator_700xfx);
      if (lookahead == '=') ADVANCE(1099);
      if (lookahead == '>') ADVANCE(1106);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_operator_500yfx);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_operator_500yfx);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '>') ADVANCE(1096);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_operator_400yfx);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '*') ADVANCE(1109);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_operator_400yfx);
      if (lookahead == '/') ADVANCE(1106);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_operator_200xfx);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_operator_200xfy);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_operator_200fy);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1064);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(1065);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == ']') ADVANCE(1066);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == ']') ADVANCE(1067);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(1068);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == ']') ADVANCE(1069);
      if ((set_contains(extras_character_set_10, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1063);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(1132);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '}') ADVANCE(1071);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(1072);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if (lookahead == '}') ADVANCE(1073);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(1137);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '}') ADVANCE(1074);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(163);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(1075);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '}') ADVANCE(1076);
      if ((set_contains(extras_character_set_11, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(1070);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(191);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(1131);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(32);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(33);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(1133);
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(182);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(1134);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\'') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(34);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(8);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(183);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(167);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(1136);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(184);
      if ((set_contains(extras_character_set_3, 9, lookahead)) &&
          lookahead != '\t') ADVANCE(158);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(163);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 920},
  [2] = {.lex_state = 920},
  [3] = {.lex_state = 920},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 190},
  [9] = {.lex_state = 190},
  [10] = {.lex_state = 190},
  [11] = {.lex_state = 190},
  [12] = {.lex_state = 190},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 190},
  [15] = {.lex_state = 190},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 190},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 190},
  [24] = {.lex_state = 190},
  [25] = {.lex_state = 190},
  [26] = {.lex_state = 190},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 190},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 190},
  [39] = {.lex_state = 190},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 190},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 190},
  [44] = {.lex_state = 190},
  [45] = {.lex_state = 190},
  [46] = {.lex_state = 190},
  [47] = {.lex_state = 190},
  [48] = {.lex_state = 190},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 190},
  [51] = {.lex_state = 190},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 190},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 190},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 190},
  [61] = {.lex_state = 190},
  [62] = {.lex_state = 190},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 190},
  [66] = {.lex_state = 190},
  [67] = {.lex_state = 190},
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 190},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 190},
  [72] = {.lex_state = 190},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 190},
  [77] = {.lex_state = 190},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 190},
  [82] = {.lex_state = 190},
  [83] = {.lex_state = 190},
  [84] = {.lex_state = 190},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 190},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 920},
  [89] = {.lex_state = 920},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 246},
  [92] = {.lex_state = 246},
  [93] = {.lex_state = 246},
  [94] = {.lex_state = 246},
  [95] = {.lex_state = 246},
  [96] = {.lex_state = 246},
  [97] = {.lex_state = 246},
  [98] = {.lex_state = 247},
  [99] = {.lex_state = 247},
  [100] = {.lex_state = 247},
  [101] = {.lex_state = 246},
  [102] = {.lex_state = 246},
  [103] = {.lex_state = 246},
  [104] = {.lex_state = 246},
  [105] = {.lex_state = 246},
  [106] = {.lex_state = 246},
  [107] = {.lex_state = 248},
  [108] = {.lex_state = 248},
  [109] = {.lex_state = 248},
  [110] = {.lex_state = 248},
  [111] = {.lex_state = 248},
  [112] = {.lex_state = 248},
  [113] = {.lex_state = 248},
  [114] = {.lex_state = 248},
  [115] = {.lex_state = 248},
  [116] = {.lex_state = 249},
  [117] = {.lex_state = 248},
  [118] = {.lex_state = 250},
  [119] = {.lex_state = 246},
  [120] = {.lex_state = 251},
  [121] = {.lex_state = 246},
  [122] = {.lex_state = 252},
  [123] = {.lex_state = 246},
  [124] = {.lex_state = 246},
  [125] = {.lex_state = 246},
  [126] = {.lex_state = 253},
  [127] = {.lex_state = 249},
  [128] = {.lex_state = 250},
  [129] = {.lex_state = 248},
  [130] = {.lex_state = 249},
  [131] = {.lex_state = 249},
  [132] = {.lex_state = 246},
  [133] = {.lex_state = 254},
  [134] = {.lex_state = 251},
  [135] = {.lex_state = 249},
  [136] = {.lex_state = 255},
  [137] = {.lex_state = 248},
  [138] = {.lex_state = 249},
  [139] = {.lex_state = 254},
  [140] = {.lex_state = 254},
  [141] = {.lex_state = 254},
  [142] = {.lex_state = 254},
  [143] = {.lex_state = 253},
  [144] = {.lex_state = 252},
  [145] = {.lex_state = 248},
  [146] = {.lex_state = 253},
  [147] = {.lex_state = 248},
  [148] = {.lex_state = 255},
  [149] = {.lex_state = 255},
  [150] = {.lex_state = 254},
  [151] = {.lex_state = 248},
  [152] = {.lex_state = 254},
  [153] = {.lex_state = 248},
  [154] = {.lex_state = 254},
  [155] = {.lex_state = 248},
  [156] = {.lex_state = 253},
  [157] = {.lex_state = 254},
  [158] = {.lex_state = 254},
  [159] = {.lex_state = 254},
  [160] = {.lex_state = 254},
  [161] = {.lex_state = 254},
  [162] = {.lex_state = 254},
  [163] = {.lex_state = 254},
  [164] = {.lex_state = 254},
  [165] = {.lex_state = 254},
  [166] = {.lex_state = 253},
  [167] = {.lex_state = 253},
  [168] = {.lex_state = 252},
  [169] = {.lex_state = 253},
  [170] = {.lex_state = 253},
  [171] = {.lex_state = 253},
  [172] = {.lex_state = 252},
  [173] = {.lex_state = 248},
  [174] = {.lex_state = 253},
  [175] = {.lex_state = 253},
  [176] = {.lex_state = 253},
  [177] = {.lex_state = 249},
  [178] = {.lex_state = 249},
  [179] = {.lex_state = 249},
  [180] = {.lex_state = 249},
  [181] = {.lex_state = 249},
  [182] = {.lex_state = 249},
  [183] = {.lex_state = 249},
  [184] = {.lex_state = 249},
  [185] = {.lex_state = 253},
  [186] = {.lex_state = 253},
  [187] = {.lex_state = 253},
  [188] = {.lex_state = 249},
  [189] = {.lex_state = 249},
  [190] = {.lex_state = 253},
  [191] = {.lex_state = 253},
  [192] = {.lex_state = 248},
  [193] = {.lex_state = 249},
  [194] = {.lex_state = 248},
  [195] = {.lex_state = 248},
  [196] = {.lex_state = 253},
  [197] = {.lex_state = 254},
  [198] = {.lex_state = 253},
  [199] = {.lex_state = 254},
  [200] = {.lex_state = 254},
  [201] = {.lex_state = 248},
  [202] = {.lex_state = 254},
  [203] = {.lex_state = 253},
  [204] = {.lex_state = 249},
  [205] = {.lex_state = 249},
  [206] = {.lex_state = 254},
  [207] = {.lex_state = 254},
  [208] = {.lex_state = 248},
  [209] = {.lex_state = 248},
  [210] = {.lex_state = 249},
  [211] = {.lex_state = 256},
  [212] = {.lex_state = 257},
  [213] = {.lex_state = 257},
  [214] = {.lex_state = 258},
  [215] = {.lex_state = 257},
  [216] = {.lex_state = 258},
  [217] = {.lex_state = 259},
  [218] = {.lex_state = 259},
  [219] = {.lex_state = 257},
  [220] = {.lex_state = 259},
  [221] = {.lex_state = 258},
  [222] = {.lex_state = 259},
  [223] = {.lex_state = 259},
  [224] = {.lex_state = 260},
  [225] = {.lex_state = 260},
  [226] = {.lex_state = 260},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 260},
  [229] = {.lex_state = 260},
  [230] = {.lex_state = 261},
  [231] = {.lex_state = 260},
  [232] = {.lex_state = 261},
  [233] = {.lex_state = 261},
  [234] = {.lex_state = 261},
  [235] = {.lex_state = 261},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_operator_1200xfx] = ACTIONS(1),
    [sym_operator_1200fx] = ACTIONS(1),
    [sym_operator_1050xfy] = ACTIONS(1),
    [sym_operator_900fy] = ACTIONS(1),
    [sym_operator_500yfx] = ACTIONS(1),
    [sym_operator_200xfx] = ACTIONS(1),
    [sym_operator_200xfy] = ACTIONS(1),
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
