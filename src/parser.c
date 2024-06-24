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
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON_DASH = 1,
  anon_sym_SPACE = 2,
  anon_sym_TAB = 3,
  anon_sym_LF = 4,
  anon_sym_PERCENT = 5,
  aux_sym_directive_term_token1 = 6,
  anon_sym__ = 7,
  aux_sym_directive_term_token2 = 8,
  aux_sym_directive_term_token3 = 9,
  aux_sym_directive_term_token4 = 10,
  anon_sym_BANG = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_SEMI = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_PIPE = 20,
  anon_sym_BSLASH = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_DQUOTE = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_SLASH_STAR = 25,
  anon_sym_STAR_SLASH = 26,
  anon_sym_DOT = 27,
  aux_sym__number_token1 = 28,
  aux_sym__number_token2 = 29,
  anon_sym_DASH = 30,
  aux_sym_atom_token1 = 31,
  sym_empty_list = 32,
  sym_empty_curly_brackets = 33,
  sym_variable_term = 34,
  aux_sym_functional_notation_token1 = 35,
  aux_sym_arg_list_token1 = 36,
  aux_sym__operator_notation_token1 = 37,
  aux_sym_operation_1200xfx_token1 = 38,
  aux_sym_operation_1200fx_token1 = 39,
  anon_sym_DASH_GT = 40,
  anon_sym_BQUOTE_COMMA_BQUOTE = 41,
  anon_sym_BSLASH_PLUS = 42,
  aux_sym_operation_700xfx_token1 = 43,
  aux_sym_operation_500yfx_token1 = 44,
  aux_sym_operation_400yfx_token1 = 45,
  anon_sym_STAR_STAR = 46,
  anon_sym_CARET = 47,
  aux_sym_operation_200fy_token1 = 48,
  aux_sym_list_notation_token1 = 49,
  aux_sym_list_notation_token2 = 50,
  aux_sym__list_notation_items_token1 = 51,
  aux_sym_curly_bracketed_notation_token1 = 52,
  aux_sym_curly_bracketed_notation_token2 = 53,
  sym_source_file = 54,
  sym_directive_term = 55,
  sym_clause_term = 56,
  sym__term = 57,
  sym__compound_term = 58,
  sym__atomic_term = 59,
  sym__number = 60,
  sym__negative_number = 61,
  sym_atom = 62,
  sym_functional_notation = 63,
  sym_arg_list = 64,
  sym__arg = 65,
  sym__operator_notation = 66,
  sym_operation_1200xfx = 67,
  sym_operation_1200fx = 68,
  sym_operation_1100xfy = 69,
  sym_operation_1050xfy = 70,
  sym_operation_1000xfy = 71,
  sym_operation_900fy = 72,
  sym_operation_700xfx = 73,
  sym_operation_500yfx = 74,
  sym_operation_400yfx = 75,
  sym_operation_200xfx = 76,
  sym_operation_200xfy = 77,
  sym_operation_200fy = 78,
  sym_list_notation = 79,
  sym__list_notation_items = 80,
  sym_curly_bracketed_notation = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_directive_term_repeat1 = 83,
  aux_sym_directive_term_repeat2 = 84,
  aux_sym_arg_list_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_LF] = "\n",
  [anon_sym_PERCENT] = "%",
  [aux_sym_directive_term_token1] = "directive_term_token1",
  [anon_sym__] = "_",
  [aux_sym_directive_term_token2] = "directive_term_token2",
  [aux_sym_directive_term_token3] = "directive_term_token3",
  [aux_sym_directive_term_token4] = "directive_term_token4",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_DOT] = ".",
  [aux_sym__number_token1] = "_number_token1",
  [aux_sym__number_token2] = "_number_token2",
  [anon_sym_DASH] = "-",
  [aux_sym_atom_token1] = "atom_token1",
  [sym_empty_list] = "empty_list",
  [sym_empty_curly_brackets] = "empty_curly_brackets",
  [sym_variable_term] = "variable_term",
  [aux_sym_functional_notation_token1] = "functional_notation_token1",
  [aux_sym_arg_list_token1] = "arg_list_token1",
  [aux_sym__operator_notation_token1] = "_operator_notation_token1",
  [aux_sym_operation_1200xfx_token1] = "operation_1200xfx_token1",
  [aux_sym_operation_1200fx_token1] = "operation_1200fx_token1",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_BQUOTE_COMMA_BQUOTE] = "`,`",
  [anon_sym_BSLASH_PLUS] = "\\+",
  [aux_sym_operation_700xfx_token1] = "operation_700xfx_token1",
  [aux_sym_operation_500yfx_token1] = "operation_500yfx_token1",
  [aux_sym_operation_400yfx_token1] = "operation_400yfx_token1",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET] = "^",
  [aux_sym_operation_200fy_token1] = "operation_200fy_token1",
  [aux_sym_list_notation_token1] = "list_notation_token1",
  [aux_sym_list_notation_token2] = "list_notation_token2",
  [aux_sym__list_notation_items_token1] = "_list_notation_items_token1",
  [aux_sym_curly_bracketed_notation_token1] = "curly_bracketed_notation_token1",
  [aux_sym_curly_bracketed_notation_token2] = "curly_bracketed_notation_token2",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__compound_term] = "_compound_term",
  [sym__atomic_term] = "_atomic_term",
  [sym__number] = "_number",
  [sym__negative_number] = "_negative_number",
  [sym_atom] = "atom",
  [sym_functional_notation] = "functional_notation",
  [sym_arg_list] = "arg_list",
  [sym__arg] = "_arg",
  [sym__operator_notation] = "_operator_notation",
  [sym_operation_1200xfx] = "operation_1200xfx",
  [sym_operation_1200fx] = "operation_1200fx",
  [sym_operation_1100xfy] = "operation_1100xfy",
  [sym_operation_1050xfy] = "operation_1050xfy",
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
  [aux_sym_directive_term_repeat1] = "directive_term_repeat1",
  [aux_sym_directive_term_repeat2] = "directive_term_repeat2",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_directive_term_token1] = aux_sym_directive_term_token1,
  [anon_sym__] = anon_sym__,
  [aux_sym_directive_term_token2] = aux_sym_directive_term_token2,
  [aux_sym_directive_term_token3] = aux_sym_directive_term_token3,
  [aux_sym_directive_term_token4] = aux_sym_directive_term_token4,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__number_token1] = aux_sym__number_token1,
  [aux_sym__number_token2] = aux_sym__number_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [sym_empty_list] = sym_empty_list,
  [sym_empty_curly_brackets] = sym_empty_curly_brackets,
  [sym_variable_term] = sym_variable_term,
  [aux_sym_functional_notation_token1] = aux_sym_functional_notation_token1,
  [aux_sym_arg_list_token1] = aux_sym_arg_list_token1,
  [aux_sym__operator_notation_token1] = aux_sym__operator_notation_token1,
  [aux_sym_operation_1200xfx_token1] = aux_sym_operation_1200xfx_token1,
  [aux_sym_operation_1200fx_token1] = aux_sym_operation_1200fx_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BQUOTE_COMMA_BQUOTE] = anon_sym_BQUOTE_COMMA_BQUOTE,
  [anon_sym_BSLASH_PLUS] = anon_sym_BSLASH_PLUS,
  [aux_sym_operation_700xfx_token1] = aux_sym_operation_700xfx_token1,
  [aux_sym_operation_500yfx_token1] = aux_sym_operation_500yfx_token1,
  [aux_sym_operation_400yfx_token1] = aux_sym_operation_400yfx_token1,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_operation_200fy_token1] = aux_sym_operation_200fy_token1,
  [aux_sym_list_notation_token1] = aux_sym_list_notation_token1,
  [aux_sym_list_notation_token2] = aux_sym_list_notation_token2,
  [aux_sym__list_notation_items_token1] = aux_sym__list_notation_items_token1,
  [aux_sym_curly_bracketed_notation_token1] = aux_sym_curly_bracketed_notation_token1,
  [aux_sym_curly_bracketed_notation_token2] = aux_sym_curly_bracketed_notation_token2,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__compound_term] = sym__compound_term,
  [sym__atomic_term] = sym__atomic_term,
  [sym__number] = sym__number,
  [sym__negative_number] = sym__negative_number,
  [sym_atom] = sym_atom,
  [sym_functional_notation] = sym_functional_notation,
  [sym_arg_list] = sym_arg_list,
  [sym__arg] = sym__arg,
  [sym__operator_notation] = sym__operator_notation,
  [sym_operation_1200xfx] = sym_operation_1200xfx,
  [sym_operation_1200fx] = sym_operation_1200fx,
  [sym_operation_1100xfy] = sym_operation_1100xfy,
  [sym_operation_1050xfy] = sym_operation_1050xfy,
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
  [aux_sym_directive_term_repeat1] = aux_sym_directive_term_repeat1,
  [aux_sym_directive_term_repeat2] = aux_sym_directive_term_repeat2,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_term_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_term_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_term_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_term_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__number_token2] = {
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
  [aux_sym_functional_notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operator_notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operation_1200xfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operation_1200fx_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_COMMA_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operation_700xfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operation_500yfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operation_400yfx_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operation_200fy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_notation_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_notation_items_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_curly_bracketed_notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_curly_bracketed_notation_token2] = {
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__negative_number] = {
    .visible = false,
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
  [aux_sym_directive_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_term_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 4,
  [8] = 5,
  [9] = 5,
  [10] = 5,
  [11] = 5,
  [12] = 4,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 21,
  [26] = 26,
  [27] = 19,
  [28] = 28,
  [29] = 18,
  [30] = 28,
  [31] = 26,
  [32] = 20,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 22,
  [40] = 22,
  [41] = 17,
  [42] = 22,
  [43] = 18,
  [44] = 17,
  [45] = 45,
  [46] = 21,
  [47] = 33,
  [48] = 37,
  [49] = 34,
  [50] = 36,
  [51] = 35,
  [52] = 35,
  [53] = 34,
  [54] = 33,
  [55] = 20,
  [56] = 26,
  [57] = 28,
  [58] = 19,
  [59] = 21,
  [60] = 37,
  [61] = 36,
  [62] = 17,
  [63] = 45,
  [64] = 35,
  [65] = 37,
  [66] = 36,
  [67] = 35,
  [68] = 34,
  [69] = 33,
  [70] = 34,
  [71] = 33,
  [72] = 20,
  [73] = 26,
  [74] = 45,
  [75] = 45,
  [76] = 18,
  [77] = 28,
  [78] = 19,
  [79] = 18,
  [80] = 17,
  [81] = 45,
  [82] = 37,
  [83] = 36,
  [84] = 19,
  [85] = 28,
  [86] = 26,
  [87] = 20,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 101,
  [121] = 97,
  [122] = 118,
  [123] = 116,
  [124] = 119,
  [125] = 104,
  [126] = 101,
  [127] = 119,
  [128] = 110,
  [129] = 111,
  [130] = 112,
  [131] = 113,
  [132] = 114,
  [133] = 106,
  [134] = 117,
  [135] = 105,
  [136] = 103,
  [137] = 109,
  [138] = 108,
  [139] = 102,
  [140] = 115,
  [141] = 97,
  [142] = 142,
  [143] = 101,
  [144] = 97,
  [145] = 107,
  [146] = 101,
  [147] = 119,
  [148] = 97,
  [149] = 108,
  [150] = 114,
  [151] = 105,
  [152] = 106,
  [153] = 107,
  [154] = 142,
  [155] = 105,
  [156] = 104,
  [157] = 157,
  [158] = 118,
  [159] = 117,
  [160] = 116,
  [161] = 110,
  [162] = 111,
  [163] = 112,
  [164] = 113,
  [165] = 114,
  [166] = 118,
  [167] = 117,
  [168] = 116,
  [169] = 103,
  [170] = 109,
  [171] = 113,
  [172] = 102,
  [173] = 115,
  [174] = 114,
  [175] = 103,
  [176] = 109,
  [177] = 108,
  [178] = 106,
  [179] = 104,
  [180] = 105,
  [181] = 106,
  [182] = 107,
  [183] = 183,
  [184] = 107,
  [185] = 142,
  [186] = 110,
  [187] = 111,
  [188] = 112,
  [189] = 102,
  [190] = 142,
  [191] = 115,
  [192] = 110,
  [193] = 111,
  [194] = 112,
  [195] = 113,
  [196] = 104,
  [197] = 118,
  [198] = 117,
  [199] = 116,
  [200] = 103,
  [201] = 109,
  [202] = 108,
  [203] = 102,
  [204] = 115,
  [205] = 183,
  [206] = 157,
  [207] = 157,
  [208] = 183,
  [209] = 183,
  [210] = 157,
  [211] = 183,
  [212] = 157,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 219,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 223,
  [227] = 223,
  [228] = 225,
  [229] = 223,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 230,
  [234] = 230,
  [235] = 232,
  [236] = 232,
  [237] = 237,
  [238] = 232,
  [239] = 232,
  [240] = 230,
  [241] = 241,
};

static TSCharacterRange aux_sym__number_token1_character_set_1[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym__number_token1_character_set_2[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'/', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym__number_token1_character_set_3[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', '*'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym__number_token2_character_set_1[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'.', '.'}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
};

static TSCharacterRange aux_sym_atom_token1_character_set_2[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'`', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static TSCharacterRange extras_character_set_3[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '_'}, {'a', '}'},
};

static TSCharacterRange extras_character_set_5[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'r'}, {'t', '}'},
};

static TSCharacterRange extras_character_set_7[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'n'}, {'p', '}'},
};

static TSCharacterRange extras_character_set_8[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'd'}, {'f', '}'},
};

static TSCharacterRange extras_character_set_9[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'c'}, {'e', '}'},
};

static TSCharacterRange extras_character_set_10[] = {
  {'\t', '\t'}, {' ', '"'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', 'l'}, {'n', '}'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1920);
      ADVANCE_MAP(
        '\n', 1952,
        '%', 344,
        '(', 2036,
        '*', 616,
        '+', 2412,
        '-', 2223,
        '.', 2112,
        '/', 621,
        ':', 822,
        '?', 823,
        '\\', 729,
        '^', 2437,
        '\t', 75,
        ' ', 75,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(916);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 88,
        '\n', 1954,
        ' ', 1,
        '#', 446,
        '%', 14,
        '\'', 2228,
        '(', 2037,
        '-', 2224,
        '/', 622,
        '0', 2119,
        ':', 822,
        '?', 823,
        '[', 2439,
        '\\', 2263,
        '_', 2346,
        '{', 2468,
        '!', 2227,
        ';', 2227,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2346);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2226);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\t', 91,
        '\n', 94,
        ' ', 2,
        '#', 443,
        '%', 33,
        '\'', 2258,
        '/', 623,
        '\\', 93,
        ']', 2311,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 92,
        '\n', 95,
        ' ', 3,
        '#', 443,
        '%', 44,
        '\'', 2258,
        '/', 624,
        '\\', 93,
        '}', 2329,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(14);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 1932,
        '\n', 1942,
        ' ', 1922,
        '!', 2033,
        '"', 2101,
        '#', 480,
        '%', 2013,
        '\'', 2098,
        '(', 2036,
        ')', 2061,
        '*', 1011,
        ',', 2064,
      );
      if (lookahead == '/') SKIP(618);
      if (lookahead == ';') ADVANCE(2067);
      if (lookahead == '[') ADVANCE(2080);
      if (lookahead == '\\') ADVANCE(2095);
      if (lookahead == ']') ADVANCE(2083);
      if (lookahead == '_') ADVANCE(2021);
      if (lookahead == '`') ADVANCE(2104);
      if (lookahead == '{') ADVANCE(2086);
      if (lookahead == '|') ADVANCE(2092);
      if (lookahead == '}') ADVANCE(2089);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2030);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2024);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2027);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 1933,
        '\n', 1943,
        ' ', 1923,
        '!', 2034,
        '"', 2102,
        '#', 481,
        '%', 2011,
        '\'', 2099,
        '(', 2054,
        ')', 2062,
        '*', 1011,
        ',', 2065,
      );
      if (lookahead == '/') SKIP(618);
      if (lookahead == ';') ADVANCE(2078);
      if (lookahead == '[') ADVANCE(2081);
      if (lookahead == '\\') ADVANCE(2096);
      if (lookahead == ']') ADVANCE(2084);
      if (lookahead == '_') ADVANCE(2022);
      if (lookahead == '`') ADVANCE(2105);
      if (lookahead == '{') ADVANCE(2087);
      if (lookahead == '|') ADVANCE(2093);
      if (lookahead == '}') ADVANCE(2090);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2031);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2025);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2028);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 1934,
        '\n', 1944,
        ' ', 1924,
        '!', 2033,
        '"', 2101,
        '#', 480,
        '%', 2016,
        '\'', 2098,
        '(', 2036,
        ')', 2061,
        ',', 2064,
        '.', 2112,
        '/', 620,
        ';', 2067,
        '[', 2080,
        '\\', 2095,
        ']', 2083,
        '_', 2021,
        '`', 2104,
        '{', 2086,
        '|', 2092,
        '}', 2089,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2030);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2024);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2027);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 1935,
        '\n', 1945,
        ' ', 1925,
        '!', 2035,
        '"', 2103,
        '#', 482,
        '%', 2012,
        '\'', 2100,
        '(', 2055,
        ')', 2063,
        ',', 2066,
        '.', 2112,
        '/', 620,
        ';', 2079,
        '[', 2082,
        '\\', 2097,
        ']', 2085,
        '_', 2023,
        '`', 2106,
        '{', 2088,
        '|', 2094,
        '}', 2091,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2032);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2026);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2029);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\t', 1936,
        '\n', 1946,
        ' ', 1926,
        '#', 483,
        '%', 2008,
        '*', 2425,
        '+', 2412,
        ',', 2369,
        '-', 2413,
        '.', 2112,
        '/', 2426,
        ':', 824,
        ';', 2068,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 102,
        '^', 2437,
        '`', 101,
        'i', 108,
        'm', 107,
        'r', 105,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(109);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\t', 1937,
        '\n', 1947,
        ' ', 1927,
        '#', 485,
        '%', 2009,
        '(', 2047,
        '*', 2425,
        '+', 2412,
        ',', 2370,
        '-', 2413,
        '.', 2112,
        '/', 2428,
        ':', 824,
        ';', 2069,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 111,
        '^', 2437,
        '`', 110,
        'i', 117,
        'm', 116,
        'r', 114,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(73);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(1938);
      if (lookahead == '\n') ADVANCE(1948);
      if (lookahead == ' ') ADVANCE(1928);
      if (lookahead == '#') SKIP(518);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead == '.') ADVANCE(2112);
      if (lookahead == '/') ADVANCE(633);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(74);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(199);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2114);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2115);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2117);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\t', 242,
        '\n', 1976,
        ' ', 15,
        '#', 454,
        '%', 37,
        '\'', 2232,
        '(', 2038,
        '-', 2224,
        '/', 625,
        '0', 2125,
        ':', 822,
        '?', 823,
        '[', 2440,
        '\\', 2264,
        ']', 2312,
        '_', 2347,
        '{', 2469,
        '!', 2231,
        ';', 2231,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2347);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2230);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\t', 222,
        '\n', 242,
        ' ', 16,
        '#', 450,
        '%', 37,
        '\'', 2267,
        '/', 623,
        '\\', 97,
        ']', 2312,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\t', 244,
        '\n', 1977,
        ' ', 17,
        '#', 456,
        '%', 43,
        '\'', 2236,
        '(', 2039,
        '-', 2224,
        '/', 626,
        '0', 2131,
        ':', 822,
        '?', 823,
        '[', 2441,
        '\\', 2265,
        '_', 2348,
        '{', 2470,
        '}', 2331,
        '!', 2235,
        ';', 2235,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2234);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\t', 96,
        '\n', 98,
        ' ', 18,
        '#', 450,
        '%', 47,
        '\'', 2267,
        '/', 624,
        '\\', 97,
        '}', 2330,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(37);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\t', 1939,
        '\n', 1949,
        ' ', 1929,
        '%', 2014,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '.', 2112,
        '/', 2426,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\t', 245,
        '\n', 247,
        ' ', 20,
        '#', 452,
        '%', 48,
        '\'', 2272,
        '/', 623,
        '\\', 99,
        ']', 2313,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\t', 231,
        '\n', 244,
        ' ', 21,
        '#', 452,
        '%', 43,
        '\'', 2272,
        '/', 624,
        '\\', 99,
        '}', 2331,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(43);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\t', 270,
        '\n', 1982,
        ' ', 22,
        '#', 459,
        '%', 52,
        '\'', 2240,
        '(', 2040,
        '-', 2224,
        '/', 627,
        '0', 2137,
        ':', 822,
        '?', 823,
        '[', 2442,
        '\\', 2266,
        ']', 2314,
        '_', 2349,
        '{', 2471,
        '}', 2332,
        '!', 2239,
        ';', 2239,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2349);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2238);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\t', 221,
        '\n', 1975,
        ' ', 23,
        '#', 466,
        '%', 56,
        '\'', 2244,
        '(', 2041,
        '-', 2224,
        '/', 628,
        '0', 2143,
        ':', 823,
        '?', 823,
        '[', 2443,
        '\\', 2277,
        '_', 2350,
        '{', 2472,
        '!', 2243,
        ';', 2243,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2350);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2242);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\t', 258,
        '\n', 270,
        ' ', 24,
        '#', 458,
        '%', 52,
        '\'', 2282,
        '/', 623,
        '\\', 100,
        ']', 2314,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\t', 259,
        '\n', 270,
        ' ', 25,
        '#', 458,
        '%', 52,
        '\'', 2282,
        '/', 624,
        '\\', 100,
        '}', 2332,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(52);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '\t', 283,
        '\n', 1984,
        ' ', 26,
        '#', 474,
        '%', 61,
        '\'', 2248,
        '(', 2042,
        '-', 2224,
        '/', 629,
        '0', 2149,
        ':', 823,
        '?', 823,
        '[', 2444,
        '\\', 2278,
        ']', 2316,
        '_', 2351,
        '{', 2473,
        '!', 2247,
        ';', 2247,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2351);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2246);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\t', 280,
        '\n', 256,
        ' ', 27,
        '#', 463,
        '%', 57,
        '\'', 2287,
        '/', 623,
        '\\', 240,
        ']', 2315,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\t', 285,
        '\n', 1985,
        ' ', 28,
        '#', 476,
        '%', 65,
        '\'', 2252,
        '(', 2043,
        '-', 2224,
        '/', 630,
        '0', 2155,
        ':', 823,
        '?', 823,
        '[', 2445,
        '\\', 2279,
        '_', 2352,
        '{', 2474,
        '}', 2335,
        '!', 2251,
        ';', 2251,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2152);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2352);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2250);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '\t', 281,
        '\n', 257,
        ' ', 29,
        '#', 463,
        '%', 66,
        '\'', 2287,
        '/', 624,
        '\\', 240,
        '}', 2333,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(56);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '\t', 290,
        '\n', 283,
        ' ', 30,
        '#', 470,
        '%', 61,
        '\'', 2292,
        '/', 623,
        '\\', 246,
        ']', 2316,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\t', 286,
        '\n', 287,
        ' ', 31,
        '#', 470,
        '%', 67,
        '\'', 2292,
        '/', 624,
        '\\', 246,
        '}', 2334,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(61);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\t', 326,
        '\n', 1990,
        ' ', 32,
        '#', 479,
        '%', 72,
        '\'', 2256,
        '(', 2044,
        '-', 2224,
        '/', 631,
        '0', 2161,
        ':', 823,
        '?', 823,
        '[', 2446,
        '\\', 2280,
        ']', 2318,
        '_', 2353,
        '{', 2475,
        '}', 2336,
        '!', 2255,
        ';', 2255,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2158);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2353);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      END_STATE();
    case 33:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2120);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2121);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2123);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\t', 308,
        '\n', 309,
        ' ', 38,
        '#', 472,
        '%', 68,
        '\'', 2297,
        '/', 623,
        '\\', 248,
        ']', 2317,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '\t', 299,
        '\n', 285,
        ' ', 39,
        '#', 472,
        '%', 65,
        '\'', 2297,
        '/', 624,
        '\\', 248,
        '}', 2335,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2126);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2127);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2129);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '\t', 314,
        '\n', 326,
        ' ', 45,
        '#', 478,
        '%', 72,
        '\'', 2302,
        '/', 623,
        '\\', 249,
        ']', 2318,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '\t', 315,
        '\n', 326,
        ' ', 46,
        '#', 478,
        '%', 72,
        '\'', 2302,
        '/', 624,
        '\\', 249,
        '}', 2336,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2132);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2133);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2135);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2138);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2139);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2141);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2144);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2145);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2147);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2150);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2151);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2153);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2156);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2157);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2159);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        '\t', 1940,
        '\n', 1950,
        ' ', 1930,
        '%', 2015,
        '(', 2036,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '.', 2112,
        '/', 2428,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '\t') ADVANCE(1941);
      if (lookahead == '\n') ADVANCE(1951);
      if (lookahead == ' ') ADVANCE(1931);
      if (lookahead == '%') ADVANCE(2017);
      if (lookahead == '.') ADVANCE(2112);
      if (lookahead == '/') ADVANCE(633);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(74);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        '\n', 1952,
        '%', 344,
        '(', 2036,
        '*', 616,
        '+', 2412,
        '-', 2223,
        '.', 2112,
        '/', 621,
        ':', 822,
        '?', 823,
        '\\', 729,
        '^', 2437,
        '\t', 75,
        ' ', 75,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(916);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(431);
      if (lookahead == '+') ADVANCE(2396);
      if (lookahead == '/') ADVANCE(2412);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(431);
      if (lookahead == '.') ADVANCE(1877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (set_contains(aux_sym__number_token2_character_set_1, 10, lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(431);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(78);
      END_STATE();
    case 79:
      ADVANCE_MAP(
        '\n', 1953,
        '#', 431,
        '%', 78,
        '(', 2045,
        '*', 616,
        '+', 2412,
        '-', 2223,
        '.', 2112,
        '/', 621,
        ':', 822,
        '?', 823,
        '\\', 76,
        '^', 2437,
        '\t', 79,
        ' ', 79,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ';') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(2167);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2163);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2164);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2166);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ADVANCE_MAP(
        '\n', 1954,
        '#', 440,
        '%', 87,
        '\'', 14,
        '(', 2046,
        '-', 2224,
        '/', 622,
        '0', 2162,
        ':', 822,
        '?', 823,
        '[', 2447,
        '\\', 2262,
        '_', 2354,
        '{', 2476,
        '\t', 88,
        ' ', 88,
        '!', 2261,
        ';', 2261,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(351);
      if (lookahead == '#') ADVANCE(438);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '#') ADVANCE(439);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2319);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(14);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 94:
      ADVANCE_MAP(
        '\n', 1955,
        '#', 440,
        '%', 220,
        '\'', 14,
        '(', 2046,
        '-', 2224,
        '/', 625,
        '0', 2162,
        ':', 822,
        '?', 823,
        '[', 2447,
        '\\', 2262,
        ']', 2319,
        '_', 2354,
        '{', 2476,
        '\t', 94,
        ' ', 94,
        '!', 2261,
        ';', 2261,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 95:
      ADVANCE_MAP(
        '\n', 1956,
        '#', 440,
        '%', 253,
        '\'', 14,
        '(', 2046,
        '-', 2224,
        '/', 626,
        '0', 2162,
        ':', 822,
        '?', 823,
        '[', 2447,
        '\\', 2262,
        '_', 2354,
        '{', 2476,
        '}', 2337,
        '\t', 95,
        ' ', 95,
        '!', 2261,
        ';', 2261,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '%') ADVANCE(254);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2339);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(230);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(224);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(37);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 98:
      ADVANCE_MAP(
        '\n', 1957,
        '#', 447,
        '%', 254,
        '\'', 37,
        '(', 2052,
        '-', 2224,
        '/', 627,
        '0', 2174,
        ':', 822,
        '?', 823,
        '[', 2448,
        '\\', 2271,
        ']', 2321,
        '_', 2355,
        '{', 2477,
        '}', 2339,
        '\t', 98,
        ' ', 98,
        '!', 2270,
        ';', 2270,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(230);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(43);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(52);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == ',') ADVANCE(103);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '`') ADVANCE(2386);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(2415);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == 'e') ADVANCE(106);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == 'm') ADVANCE(2415);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == 'o') ADVANCE(104);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == 's') ADVANCE(2398);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == ',') ADVANCE(112);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '`') ADVANCE(2387);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(2416);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(115);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(2416);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(113);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == 's') ADVANCE(2399);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == ',') ADVANCE(121);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '`') ADVANCE(2388);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(2417);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(124);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(2417);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(122);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == 's') ADVANCE(2400);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        '\n', 1958,
        '#', 487,
        '%', 127,
        '(', 2048,
        '*', 2425,
        '+', 2412,
        ',', 2371,
        '-', 2413,
        '/', 2427,
        ':', 824,
        ';', 2070,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 120,
        ']', 2457,
        '^', 2437,
        '`', 119,
        'i', 126,
        'm', 125,
        'r', 123,
        '|', 2465,
        '\t', 128,
        ' ', 128,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(330);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == ',') ADVANCE(131);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '`') ADVANCE(2389);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(2418);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(134);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(2418);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(132);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == 's') ADVANCE(2401);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 138:
      ADVANCE_MAP(
        '\n', 1959,
        '#', 489,
        '%', 137,
        '*', 2425,
        '+', 2412,
        ',', 2372,
        '-', 2413,
        '/', 2429,
        ':', 824,
        ';', 2071,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 130,
        ']', 2458,
        '^', 2437,
        '`', 129,
        'i', 136,
        'm', 135,
        'r', 133,
        '|', 2466,
        '\t', 138,
        ' ', 138,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(331);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(137);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == ',') ADVANCE(141);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '`') ADVANCE(2390);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == 'd') ADVANCE(2419);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(144);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(2419);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(142);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == 's') ADVANCE(2402);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      ADVANCE_MAP(
        '\n', 1960,
        '#', 491,
        '%', 147,
        '(', 2049,
        '*', 2425,
        '+', 2412,
        ',', 2373,
        '-', 2413,
        '/', 2430,
        ':', 824,
        ';', 2072,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 140,
        ']', 2459,
        '^', 2437,
        '`', 139,
        'i', 146,
        'm', 145,
        'r', 143,
        '\t', 148,
        ' ', 148,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(147);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == ',') ADVANCE(151);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '`') ADVANCE(2391);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(2420);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(154);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(2420);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(152);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == 's') ADVANCE(2403);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        '\n', 1961,
        '#', 493,
        '%', 157,
        '(', 2050,
        '*', 2425,
        '+', 2412,
        ',', 2374,
        '-', 2413,
        '/', 2431,
        ':', 824,
        ';', 2073,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 150,
        '^', 2437,
        '`', 149,
        'i', 156,
        'm', 155,
        'r', 153,
        '}', 2486,
        '\t', 158,
        ' ', 158,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(333);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) ADVANCE(157);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == ',') ADVANCE(161);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == '`') ADVANCE(2392);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == 'd') ADVANCE(2421);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == 'e') ADVANCE(164);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == 'm') ADVANCE(2421);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(162);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == 's') ADVANCE(2404);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 168:
      ADVANCE_MAP(
        '\n', 1962,
        '#', 495,
        '%', 167,
        '(', 2051,
        ')', 2364,
        '*', 2425,
        '+', 2412,
        ',', 2375,
        '-', 2413,
        '/', 2432,
        ':', 824,
        ';', 2074,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 160,
        '^', 2437,
        '`', 159,
        'i', 166,
        'm', 165,
        'r', 163,
        '\t', 168,
        ' ', 168,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(334);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == ',') ADVANCE(171);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '`') ADVANCE(2393);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == 'd') ADVANCE(2422);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(174);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == 'm') ADVANCE(2422);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == 'o') ADVANCE(172);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == 's') ADVANCE(2405);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        '\n', 1963,
        '#', 497,
        '%', 177,
        '*', 2425,
        '+', 2412,
        ',', 2376,
        '-', 2413,
        '/', 2433,
        ':', 824,
        ';', 2075,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 170,
        '^', 2437,
        '`', 169,
        'i', 176,
        'm', 175,
        'r', 173,
        '}', 2487,
        '\t', 178,
        ' ', 178,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(335);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '|')) ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == ',') ADVANCE(181);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '`') ADVANCE(2394);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == 'd') ADVANCE(2423);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(184);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == 'm') ADVANCE(2423);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(182);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == 's') ADVANCE(2406);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        '\n', 1964,
        '#', 499,
        '%', 187,
        '*', 2425,
        '+', 2412,
        ',', 2377,
        '-', 2413,
        '/', 2434,
        ':', 824,
        ';', 2076,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 180,
        ']', 2460,
        '^', 2437,
        '`', 179,
        'i', 186,
        'm', 185,
        'r', 183,
        '\t', 188,
        ' ', 188,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(336);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == ',') ADVANCE(191);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      if (set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '`') ADVANCE(2395);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == 'd') ADVANCE(2424);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(194);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(2424);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(192);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == 's') ADVANCE(2407);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 198:
      ADVANCE_MAP(
        '\n', 1965,
        '#', 501,
        '%', 197,
        ')', 2365,
        '*', 2425,
        '+', 2412,
        ',', 2378,
        '-', 2413,
        '/', 2435,
        ':', 824,
        ';', 2077,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 190,
        '^', 2437,
        '`', 189,
        'i', 196,
        'm', 195,
        'r', 193,
        '\t', 198,
        ' ', 198,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(337);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(197);
      END_STATE();
    case 199:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') SKIP(518);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(199);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      ADVANCE_MAP(
        '\n', 1966,
        '#', 503,
        '%', 200,
        ',', 2379,
        '/', 634,
        ']', 2461,
        '|', 2467,
        '\t', 201,
        ' ', 201,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(338);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '#') ADVANCE(505);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ADVANCE_MAP(
        '\n', 1967,
        '#', 505,
        '%', 202,
        ')', 2366,
        ',', 2380,
        '/', 635,
        '\t', 203,
        ' ', 203,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(339);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(204);
      END_STATE();
    case 205:
      ADVANCE_MAP(
        '\n', 1968,
        '#', 507,
        '%', 204,
        ',', 2381,
        '/', 636,
        ']', 2462,
        '\t', 205,
        ' ', 205,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(340);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(2173);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2169);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2170);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2172);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1969);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == '0') ADVANCE(2168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(341);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2171);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(210);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1970);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '%') ADVANCE(212);
      if (lookahead == ')') ADVANCE(2367);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(213);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(342);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(212);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '#') ADVANCE(513);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1971);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == ']') ADVANCE(2463);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(215);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(343);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(1972);
      if (lookahead == '%') SKIP(428);
      if (lookahead == '/') SKIP(632);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '\n') SKIP(218);
      if (lookahead == '#') SKIP(520);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1973);
      if (lookahead == '#') SKIP(520);
      if (lookahead == '%') SKIP(217);
      if (lookahead == '/') SKIP(632);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(218);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(216);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(217);
      END_STATE();
    case 219:
      ADVANCE_MAP(
        '\n', 1974,
        '#', 434,
        '%', 347,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 622,
        '0', 2216,
        ':', 822,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        '_', 2362,
        '{', 2484,
        '\t', 219,
        ' ', 219,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 221:
      ADVANCE_MAP(
        '\n', 1975,
        '#', 462,
        '%', 279,
        '\'', 56,
        '(', 2057,
        '-', 2224,
        '/', 628,
        '0', 2192,
        ':', 823,
        '?', 823,
        '[', 2451,
        '\\', 2290,
        '_', 2358,
        '{', 2480,
        '\t', 221,
        ' ', 221,
        '!', 2289,
        ';', 2289,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(279);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(230);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(2179);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(224);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 226:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2175);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2176);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 228:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2178);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(239);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(2185);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2181);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2182);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2184);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == 'x') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(56);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 241:
      ADVANCE_MAP(
        '\n', 1976,
        '#', 447,
        '%', 230,
        '\'', 37,
        '(', 2052,
        '-', 2224,
        '/', 622,
        '0', 2174,
        ':', 822,
        '?', 823,
        '[', 2448,
        '\\', 2271,
        '_', 2355,
        '{', 2477,
        '\t', 241,
        ' ', 241,
        '!', 2270,
        ';', 2270,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(230);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 242:
      ADVANCE_MAP(
        '\n', 1976,
        '#', 447,
        '%', 230,
        '\'', 37,
        '(', 2052,
        '-', 2224,
        '/', 625,
        '0', 2174,
        ':', 822,
        '?', 823,
        '[', 2448,
        '\\', 2271,
        ']', 2321,
        '_', 2355,
        '{', 2477,
        '\t', 242,
        ' ', 242,
        '!', 2270,
        ';', 2270,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(230);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 243:
      ADVANCE_MAP(
        '\n', 1977,
        '#', 448,
        '%', 239,
        '\'', 43,
        '(', 2053,
        '-', 2224,
        '/', 622,
        '0', 2180,
        ':', 822,
        '?', 823,
        '[', 2449,
        '\\', 2276,
        '_', 2356,
        '{', 2478,
        '\t', 243,
        ' ', 243,
        '!', 2275,
        ';', 2275,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 244:
      ADVANCE_MAP(
        '\n', 1977,
        '#', 448,
        '%', 239,
        '\'', 43,
        '(', 2053,
        '-', 2224,
        '/', 626,
        '0', 2180,
        ':', 822,
        '?', 823,
        '[', 2449,
        '\\', 2276,
        '_', 2356,
        '{', 2478,
        '}', 2340,
        '\t', 244,
        ' ', 244,
        '!', 2275,
        ';', 2275,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == 'x') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(292);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(61);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 247:
      ADVANCE_MAP(
        '\n', 1978,
        '#', 448,
        '%', 255,
        '\'', 43,
        '(', 2053,
        '-', 2224,
        '/', 627,
        '0', 2180,
        ':', 822,
        '?', 823,
        '[', 2449,
        '\\', 2276,
        ']', 2322,
        '_', 2356,
        '{', 2478,
        '}', 2340,
        '\t', 247,
        ' ', 247,
        '!', 2275,
        ';', 2275,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(65);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(317);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(72);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 250:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 252:
      ADVANCE_MAP(
        '\n', 1979,
        '#', 434,
        '%', 359,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 625,
        '0', 2216,
        ':', 822,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        ']', 2310,
        '_', 2362,
        '{', 2484,
        '\t', 252,
        ' ', 252,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 256:
      ADVANCE_MAP(
        '\n', 1980,
        '#', 462,
        '%', 289,
        '\'', 56,
        '(', 2057,
        '-', 2224,
        '/', 629,
        '0', 2192,
        ':', 823,
        '?', 823,
        '[', 2451,
        '\\', 2290,
        ']', 2324,
        '_', 2358,
        '{', 2480,
        '\t', 256,
        ' ', 256,
        '!', 2289,
        ';', 2289,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(279);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 257:
      ADVANCE_MAP(
        '\n', 1981,
        '#', 462,
        '%', 311,
        '\'', 56,
        '(', 2057,
        '-', 2224,
        '/', 630,
        '0', 2192,
        ':', 823,
        '?', 823,
        '[', 2451,
        '\\', 2290,
        '_', 2358,
        '{', 2480,
        '}', 2342,
        '\t', 257,
        ' ', 257,
        '!', 2289,
        ';', 2289,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(279);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2323);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(267);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(2191);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\\') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\\') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2187);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2188);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2190);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 268:
      ADVANCE_MAP(
        '\n', 1982,
        '#', 455,
        '%', 267,
        '\'', 52,
        '(', 2056,
        '-', 2224,
        '/', 625,
        '0', 2186,
        ':', 822,
        '?', 823,
        '[', 2450,
        '\\', 2285,
        ']', 2323,
        '_', 2357,
        '{', 2479,
        '\t', 268,
        ' ', 268,
        '!', 2284,
        ';', 2284,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2357);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2283);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        '\n', 1982,
        '#', 455,
        '%', 267,
        '\'', 52,
        '(', 2056,
        '-', 2224,
        '/', 626,
        '0', 2186,
        ':', 822,
        '?', 823,
        '[', 2450,
        '\\', 2285,
        '_', 2357,
        '{', 2479,
        '}', 2341,
        '\t', 269,
        ' ', 269,
        '!', 2284,
        ';', 2284,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2357);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2283);
      END_STATE();
    case 270:
      ADVANCE_MAP(
        '\n', 1982,
        '#', 455,
        '%', 267,
        '\'', 52,
        '(', 2056,
        '-', 2224,
        '/', 627,
        '0', 2186,
        ':', 822,
        '?', 823,
        '[', 2450,
        '\\', 2285,
        ']', 2323,
        '_', 2357,
        '{', 2479,
        '}', 2341,
        '\t', 270,
        ' ', 270,
        '!', 2284,
        ';', 2284,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2357);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2283);
      END_STATE();
    case 271:
      ADVANCE_MAP(
        '\n', 1983,
        '#', 434,
        '%', 360,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 626,
        '0', 2216,
        ':', 822,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        '_', 2362,
        '{', 2484,
        '}', 2328,
        '\t', 271,
        ' ', 271,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(2197);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2193);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2194);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2196);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(279);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        '\n', 1984,
        '#', 467,
        '%', 298,
        '\'', 61,
        '(', 2058,
        '-', 2224,
        '/', 628,
        '0', 2198,
        ':', 823,
        '?', 823,
        '[', 2452,
        '\\', 2295,
        '_', 2359,
        '{', 2481,
        '\t', 282,
        ' ', 282,
        '!', 2294,
        ';', 2294,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(298);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 283:
      ADVANCE_MAP(
        '\n', 1984,
        '#', 467,
        '%', 298,
        '\'', 61,
        '(', 2058,
        '-', 2224,
        '/', 629,
        '0', 2198,
        ':', 823,
        '?', 823,
        '[', 2452,
        '\\', 2295,
        ']', 2325,
        '_', 2359,
        '{', 2481,
        '\t', 283,
        ' ', 283,
        '!', 2294,
        ';', 2294,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(298);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 284:
      ADVANCE_MAP(
        '\n', 1985,
        '#', 468,
        '%', 307,
        '\'', 65,
        '(', 2059,
        '-', 2224,
        '/', 628,
        '0', 2204,
        ':', 823,
        '?', 823,
        '[', 2453,
        '\\', 2300,
        '_', 2360,
        '{', 2482,
        '\t', 284,
        ' ', 284,
        '!', 2299,
        ';', 2299,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        '\n', 1985,
        '#', 468,
        '%', 307,
        '\'', 65,
        '(', 2059,
        '-', 2224,
        '/', 630,
        '0', 2204,
        ':', 823,
        '?', 823,
        '[', 2453,
        '\\', 2300,
        '_', 2360,
        '{', 2482,
        '}', 2344,
        '\t', 285,
        ' ', 285,
        '!', 2299,
        ';', 2299,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2343);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(298);
      END_STATE();
    case 287:
      ADVANCE_MAP(
        '\n', 1986,
        '#', 467,
        '%', 312,
        '\'', 61,
        '(', 2058,
        '-', 2224,
        '/', 631,
        '0', 2198,
        ':', 823,
        '?', 823,
        '[', 2452,
        '\\', 2295,
        ']', 2325,
        '_', 2359,
        '{', 2481,
        '}', 2343,
        '\t', 287,
        ' ', 287,
        '!', 2294,
        ';', 2294,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(298);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 288:
      ADVANCE_MAP(
        '\n', 1987,
        '#', 434,
        '%', 365,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 627,
        '0', 2216,
        ':', 822,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        ']', 2310,
        '_', 2362,
        '{', 2484,
        '}', 2328,
        '\t', 288,
        ' ', 288,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(219);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2325);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(298);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(2203);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(292);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2199);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2200);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2202);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(307);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(2209);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2205);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2206);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2208);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(307);
      END_STATE();
    case 309:
      ADVANCE_MAP(
        '\n', 1988,
        '#', 468,
        '%', 313,
        '\'', 65,
        '(', 2059,
        '-', 2224,
        '/', 631,
        '0', 2204,
        ':', 823,
        '?', 823,
        '[', 2453,
        '\\', 2300,
        ']', 2326,
        '_', 2360,
        '{', 2482,
        '}', 2344,
        '\t', 309,
        ' ', 309,
        '!', 2299,
        ';', 2299,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 310:
      ADVANCE_MAP(
        '\n', 1989,
        '#', 434,
        '%', 368,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 628,
        '0', 2216,
        ':', 823,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        '_', 2362,
        '{', 2484,
        '\t', 310,
        ' ', 310,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(323);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(323);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\'') ADVANCE(2215);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(317);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2211);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2212);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2214);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 324:
      ADVANCE_MAP(
        '\n', 1990,
        '#', 475,
        '%', 323,
        '\'', 72,
        '(', 2060,
        '-', 2224,
        '/', 629,
        '0', 2210,
        ':', 823,
        '?', 823,
        '[', 2454,
        '\\', 2305,
        ']', 2327,
        '_', 2361,
        '{', 2483,
        '\t', 324,
        ' ', 324,
        '!', 2304,
        ';', 2304,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2303);
      END_STATE();
    case 325:
      ADVANCE_MAP(
        '\n', 1990,
        '#', 475,
        '%', 323,
        '\'', 72,
        '(', 2060,
        '-', 2224,
        '/', 630,
        '0', 2210,
        ':', 823,
        '?', 823,
        '[', 2454,
        '\\', 2305,
        '_', 2361,
        '{', 2483,
        '}', 2345,
        '\t', 325,
        ' ', 325,
        '!', 2304,
        ';', 2304,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2303);
      END_STATE();
    case 326:
      ADVANCE_MAP(
        '\n', 1990,
        '#', 475,
        '%', 323,
        '\'', 72,
        '(', 2060,
        '-', 2224,
        '/', 631,
        '0', 2210,
        ':', 823,
        '?', 823,
        '[', 2454,
        '\\', 2305,
        ']', 2327,
        '_', 2361,
        '{', 2483,
        '}', 2345,
        '\t', 326,
        ' ', 326,
        '!', 2304,
        ';', 2304,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(323);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2303);
      END_STATE();
    case 327:
      ADVANCE_MAP(
        '\n', 1991,
        '#', 434,
        '%', 371,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 629,
        '0', 2216,
        ':', 823,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        ']', 2310,
        '_', 2362,
        '{', 2484,
        '\t', 327,
        ' ', 327,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 328:
      ADVANCE_MAP(
        '\n', 1992,
        '#', 434,
        '%', 372,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 630,
        '0', 2216,
        ':', 823,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        '_', 2362,
        '{', 2484,
        '}', 2328,
        '\t', 328,
        ' ', 328,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 329:
      ADVANCE_MAP(
        '\n', 1993,
        '#', 434,
        '%', 377,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 631,
        '0', 2216,
        ':', 823,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        ']', 2310,
        '_', 2362,
        '{', 2484,
        '}', 2328,
        '\t', 329,
        ' ', 329,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(310);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 330:
      ADVANCE_MAP(
        '\n', 1994,
        '%', 382,
        '(', 2036,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2427,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        ']', 2456,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '|', 2464,
        '\t', 330,
        ' ', 330,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(330);
      END_STATE();
    case 331:
      ADVANCE_MAP(
        '\n', 1995,
        '%', 385,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2429,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        ']', 2456,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '|', 2464,
        '\t', 331,
        ' ', 331,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(331);
      END_STATE();
    case 332:
      ADVANCE_MAP(
        '\n', 1996,
        '%', 388,
        '(', 2036,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2430,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        ']', 2456,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '\t', 332,
        ' ', 332,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(332);
      END_STATE();
    case 333:
      ADVANCE_MAP(
        '\n', 1997,
        '%', 391,
        '(', 2036,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2431,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '}', 2485,
        '\t', 333,
        ' ', 333,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(333);
      END_STATE();
    case 334:
      ADVANCE_MAP(
        '\n', 1998,
        '%', 394,
        '(', 2036,
        ')', 2363,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2432,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '\t', 334,
        ' ', 334,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(334);
      END_STATE();
    case 335:
      ADVANCE_MAP(
        '\n', 1999,
        '%', 397,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2433,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '}', 2485,
        '\t', 335,
        ' ', 335,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(335);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        '\n', 2000,
        '%', 400,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2434,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        ']', 2456,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '\t', 336,
        ' ', 336,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(336);
      END_STATE();
    case 337:
      ADVANCE_MAP(
        '\n', 2001,
        '%', 403,
        ')', 2363,
        '*', 2425,
        '+', 2412,
        ',', 2368,
        '-', 2413,
        '/', 2435,
        ':', 824,
        ';', 2067,
        '<', 2409,
        '=', 2408,
        '>', 2411,
        '@', 1227,
        '\\', 1009,
        '^', 2437,
        '`', 821,
        'i', 1781,
        'm', 1780,
        'r', 1778,
        '\t', 337,
        ' ', 337,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(337);
      END_STATE();
    case 338:
      ADVANCE_MAP(
        '\n', 2002,
        '%', 406,
        ',', 2368,
        '/', 634,
        ']', 2456,
        '|', 2464,
        '\t', 338,
        ' ', 338,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(338);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(2003);
      if (lookahead == '%') ADVANCE(409);
      if (lookahead == ')') ADVANCE(2363);
      if (lookahead == ',') ADVANCE(2368);
      if (lookahead == '/') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(339);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(2004);
      if (lookahead == '%') ADVANCE(412);
      if (lookahead == ',') ADVANCE(2368);
      if (lookahead == '/') ADVANCE(636);
      if (lookahead == ']') ADVANCE(2456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(340);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(2005);
      if (lookahead == '%') ADVANCE(415);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == '0') ADVANCE(2216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(341);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(2006);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == ')') ADVANCE(2363);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(342);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(421);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == ']') ADVANCE(2456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(343);
      END_STATE();
    case 344:
      if (lookahead == '#') ADVANCE(431);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(78);
      END_STATE();
    case 345:
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '*') ADVANCE(1010);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(345);
      END_STATE();
    case 346:
      if (lookahead == '#') ADVANCE(433);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 348:
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(2308);
      if (lookahead == '\\') ADVANCE(1782);
      if ((set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 349:
      if (lookahead == '#') ADVANCE(437);
      if (lookahead == '*') ADVANCE(1013);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == '#') ADVANCE(437);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(89);
      END_STATE();
    case 352:
      if (lookahead == '#') ADVANCE(438);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(89);
      END_STATE();
    case 353:
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(90);
      END_STATE();
    case 354:
      if (lookahead == '#') ADVANCE(439);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 355:
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == '*') ADVANCE(1014);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(355);
      END_STATE();
    case 356:
      if (lookahead == '#') ADVANCE(441);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(1015);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(357);
      END_STATE();
    case 358:
      if (lookahead == '#') ADVANCE(442);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 360:
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 361:
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '*') ADVANCE(1016);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == '#') ADVANCE(449);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '*') ADVANCE(1017);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(363);
      END_STATE();
    case 364:
      if (lookahead == '#') ADVANCE(451);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(363);
      END_STATE();
    case 365:
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 366:
      if (lookahead == '#') ADVANCE(457);
      if (lookahead == '*') ADVANCE(1018);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '#') ADVANCE(457);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 369:
      if (lookahead == '#') ADVANCE(461);
      if (lookahead == '*') ADVANCE(1040);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == '#') ADVANCE(461);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 372:
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 373:
      if (lookahead == '#') ADVANCE(469);
      if (lookahead == '*') ADVANCE(1041);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(373);
      END_STATE();
    case 374:
      if (lookahead == '#') ADVANCE(469);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(373);
      END_STATE();
    case 375:
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '*') ADVANCE(1042);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == '#') ADVANCE(471);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(375);
      END_STATE();
    case 377:
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 378:
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '*') ADVANCE(1043);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(378);
      END_STATE();
    case 379:
      if (lookahead == '#') ADVANCE(477);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(378);
      END_STATE();
    case 380:
      if (lookahead == '#') ADVANCE(484);
      if (lookahead == '*') ADVANCE(1022);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(380);
      END_STATE();
    case 381:
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == '*') ADVANCE(1023);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(381);
      END_STATE();
    case 382:
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 383:
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '*') ADVANCE(1024);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(383);
      END_STATE();
    case 384:
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 386:
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '*') ADVANCE(1025);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(386);
      END_STATE();
    case 387:
      if (lookahead == '#') ADVANCE(490);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(386);
      END_STATE();
    case 388:
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 389:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '*') ADVANCE(1026);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(389);
      END_STATE();
    case 390:
      if (lookahead == '#') ADVANCE(492);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(389);
      END_STATE();
    case 391:
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 392:
      if (lookahead == '#') ADVANCE(494);
      if (lookahead == '*') ADVANCE(1027);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(392);
      END_STATE();
    case 393:
      if (lookahead == '#') ADVANCE(494);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(392);
      END_STATE();
    case 394:
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 395:
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '*') ADVANCE(1028);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(395);
      END_STATE();
    case 396:
      if (lookahead == '#') ADVANCE(496);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(395);
      END_STATE();
    case 397:
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 398:
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '*') ADVANCE(1029);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(398);
      END_STATE();
    case 399:
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(398);
      END_STATE();
    case 400:
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 401:
      if (lookahead == '#') ADVANCE(500);
      if (lookahead == '*') ADVANCE(1030);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(401);
      END_STATE();
    case 402:
      if (lookahead == '#') ADVANCE(500);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(401);
      END_STATE();
    case 403:
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 404:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '*') ADVANCE(1031);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(404);
      END_STATE();
    case 405:
      if (lookahead == '#') ADVANCE(502);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(404);
      END_STATE();
    case 406:
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 407:
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '*') ADVANCE(1033);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(407);
      END_STATE();
    case 408:
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(407);
      END_STATE();
    case 409:
      if (lookahead == '#') ADVANCE(505);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 410:
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '*') ADVANCE(1034);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(410);
      END_STATE();
    case 411:
      if (lookahead == '#') ADVANCE(506);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(410);
      END_STATE();
    case 412:
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(204);
      END_STATE();
    case 413:
      if (lookahead == '#') ADVANCE(508);
      if (lookahead == '*') ADVANCE(1035);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(413);
      END_STATE();
    case 414:
      if (lookahead == '#') ADVANCE(508);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(413);
      END_STATE();
    case 415:
      if (lookahead == '#') ADVANCE(509);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 416:
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '*') ADVANCE(1036);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(416);
      END_STATE();
    case 417:
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(416);
      END_STATE();
    case 418:
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(212);
      END_STATE();
    case 419:
      if (lookahead == '#') ADVANCE(512);
      if (lookahead == '*') ADVANCE(1037);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(419);
      END_STATE();
    case 420:
      if (lookahead == '#') ADVANCE(512);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(419);
      END_STATE();
    case 421:
      if (lookahead == '#') ADVANCE(513);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(214);
      END_STATE();
    case 422:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '*') ADVANCE(1038);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) ADVANCE(422);
      END_STATE();
    case 423:
      if (lookahead == '#') ADVANCE(514);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(422);
      END_STATE();
    case 424:
      if (lookahead == '#') SKIP(515);
      if (lookahead == '*') SKIP(1019);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) SKIP(424);
      END_STATE();
    case 425:
      if (lookahead == '#') SKIP(515);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(424);
      END_STATE();
    case 426:
      if (lookahead == '#') SKIP(517);
      if (lookahead == '*') SKIP(1021);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) SKIP(426);
      END_STATE();
    case 427:
      if (lookahead == '#') SKIP(519);
      if (lookahead == '*') SKIP(1032);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) SKIP(427);
      END_STATE();
    case 428:
      if (lookahead == '#') SKIP(520);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(217);
      END_STATE();
    case 429:
      if (lookahead == '#') SKIP(521);
      if (lookahead == '*') SKIP(1039);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) SKIP(429);
      END_STATE();
    case 430:
      if (lookahead == '#') SKIP(521);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(429);
      END_STATE();
    case 431:
      if (lookahead == '$') ADVANCE(524);
      END_STATE();
    case 432:
      if (lookahead == '$') SKIP(525);
      END_STATE();
    case 433:
      if (lookahead == '$') ADVANCE(526);
      END_STATE();
    case 434:
      if (lookahead == '$') ADVANCE(527);
      END_STATE();
    case 435:
      if (lookahead == '$') ADVANCE(528);
      END_STATE();
    case 436:
      if (lookahead == '$') ADVANCE(529);
      END_STATE();
    case 437:
      if (lookahead == '$') ADVANCE(530);
      END_STATE();
    case 438:
      if (lookahead == '$') ADVANCE(531);
      END_STATE();
    case 439:
      if (lookahead == '$') ADVANCE(532);
      END_STATE();
    case 440:
      if (lookahead == '$') ADVANCE(533);
      END_STATE();
    case 441:
      if (lookahead == '$') ADVANCE(534);
      END_STATE();
    case 442:
      if (lookahead == '$') ADVANCE(535);
      END_STATE();
    case 443:
      if (lookahead == '$') ADVANCE(536);
      END_STATE();
    case 444:
      if (lookahead == '$') ADVANCE(537);
      END_STATE();
    case 445:
      if (lookahead == '$') ADVANCE(538);
      END_STATE();
    case 446:
      if (lookahead == '$') ADVANCE(539);
      END_STATE();
    case 447:
      if (lookahead == '$') ADVANCE(540);
      END_STATE();
    case 448:
      if (lookahead == '$') ADVANCE(541);
      END_STATE();
    case 449:
      if (lookahead == '$') ADVANCE(542);
      END_STATE();
    case 450:
      if (lookahead == '$') ADVANCE(543);
      END_STATE();
    case 451:
      if (lookahead == '$') ADVANCE(544);
      END_STATE();
    case 452:
      if (lookahead == '$') ADVANCE(545);
      END_STATE();
    case 453:
      if (lookahead == '$') ADVANCE(546);
      END_STATE();
    case 454:
      if (lookahead == '$') ADVANCE(547);
      END_STATE();
    case 455:
      if (lookahead == '$') ADVANCE(548);
      END_STATE();
    case 456:
      if (lookahead == '$') ADVANCE(549);
      END_STATE();
    case 457:
      if (lookahead == '$') ADVANCE(550);
      END_STATE();
    case 458:
      if (lookahead == '$') ADVANCE(551);
      END_STATE();
    case 459:
      if (lookahead == '$') ADVANCE(552);
      END_STATE();
    case 460:
      if (lookahead == '$') ADVANCE(553);
      END_STATE();
    case 461:
      if (lookahead == '$') ADVANCE(554);
      END_STATE();
    case 462:
      if (lookahead == '$') ADVANCE(555);
      END_STATE();
    case 463:
      if (lookahead == '$') ADVANCE(556);
      END_STATE();
    case 464:
      if (lookahead == '$') ADVANCE(557);
      END_STATE();
    case 465:
      if (lookahead == '$') ADVANCE(558);
      END_STATE();
    case 466:
      if (lookahead == '$') ADVANCE(559);
      END_STATE();
    case 467:
      if (lookahead == '$') ADVANCE(560);
      END_STATE();
    case 468:
      if (lookahead == '$') ADVANCE(561);
      END_STATE();
    case 469:
      if (lookahead == '$') ADVANCE(562);
      END_STATE();
    case 470:
      if (lookahead == '$') ADVANCE(563);
      END_STATE();
    case 471:
      if (lookahead == '$') ADVANCE(564);
      END_STATE();
    case 472:
      if (lookahead == '$') ADVANCE(565);
      END_STATE();
    case 473:
      if (lookahead == '$') ADVANCE(566);
      END_STATE();
    case 474:
      if (lookahead == '$') ADVANCE(567);
      END_STATE();
    case 475:
      if (lookahead == '$') ADVANCE(568);
      END_STATE();
    case 476:
      if (lookahead == '$') ADVANCE(569);
      END_STATE();
    case 477:
      if (lookahead == '$') ADVANCE(570);
      END_STATE();
    case 478:
      if (lookahead == '$') ADVANCE(571);
      END_STATE();
    case 479:
      if (lookahead == '$') ADVANCE(572);
      END_STATE();
    case 480:
      if (lookahead == '$') ADVANCE(573);
      END_STATE();
    case 481:
      if (lookahead == '$') ADVANCE(574);
      END_STATE();
    case 482:
      if (lookahead == '$') ADVANCE(575);
      END_STATE();
    case 483:
      if (lookahead == '$') ADVANCE(576);
      END_STATE();
    case 484:
      if (lookahead == '$') ADVANCE(577);
      END_STATE();
    case 485:
      if (lookahead == '$') ADVANCE(578);
      END_STATE();
    case 486:
      if (lookahead == '$') ADVANCE(579);
      END_STATE();
    case 487:
      if (lookahead == '$') ADVANCE(580);
      END_STATE();
    case 488:
      if (lookahead == '$') ADVANCE(581);
      END_STATE();
    case 489:
      if (lookahead == '$') ADVANCE(582);
      END_STATE();
    case 490:
      if (lookahead == '$') ADVANCE(583);
      END_STATE();
    case 491:
      if (lookahead == '$') ADVANCE(584);
      END_STATE();
    case 492:
      if (lookahead == '$') ADVANCE(585);
      END_STATE();
    case 493:
      if (lookahead == '$') ADVANCE(586);
      END_STATE();
    case 494:
      if (lookahead == '$') ADVANCE(587);
      END_STATE();
    case 495:
      if (lookahead == '$') ADVANCE(588);
      END_STATE();
    case 496:
      if (lookahead == '$') ADVANCE(589);
      END_STATE();
    case 497:
      if (lookahead == '$') ADVANCE(590);
      END_STATE();
    case 498:
      if (lookahead == '$') ADVANCE(591);
      END_STATE();
    case 499:
      if (lookahead == '$') ADVANCE(592);
      END_STATE();
    case 500:
      if (lookahead == '$') ADVANCE(593);
      END_STATE();
    case 501:
      if (lookahead == '$') ADVANCE(594);
      END_STATE();
    case 502:
      if (lookahead == '$') ADVANCE(595);
      END_STATE();
    case 503:
      if (lookahead == '$') ADVANCE(596);
      END_STATE();
    case 504:
      if (lookahead == '$') ADVANCE(597);
      END_STATE();
    case 505:
      if (lookahead == '$') ADVANCE(598);
      END_STATE();
    case 506:
      if (lookahead == '$') ADVANCE(599);
      END_STATE();
    case 507:
      if (lookahead == '$') ADVANCE(600);
      END_STATE();
    case 508:
      if (lookahead == '$') ADVANCE(601);
      END_STATE();
    case 509:
      if (lookahead == '$') ADVANCE(602);
      END_STATE();
    case 510:
      if (lookahead == '$') ADVANCE(603);
      END_STATE();
    case 511:
      if (lookahead == '$') ADVANCE(604);
      END_STATE();
    case 512:
      if (lookahead == '$') ADVANCE(605);
      END_STATE();
    case 513:
      if (lookahead == '$') ADVANCE(606);
      END_STATE();
    case 514:
      if (lookahead == '$') ADVANCE(607);
      END_STATE();
    case 515:
      if (lookahead == '$') SKIP(608);
      END_STATE();
    case 516:
      if (lookahead == '$') SKIP(609);
      END_STATE();
    case 517:
      if (lookahead == '$') SKIP(610);
      END_STATE();
    case 518:
      if (lookahead == '$') SKIP(611);
      END_STATE();
    case 519:
      if (lookahead == '$') SKIP(612);
      END_STATE();
    case 520:
      if (lookahead == '$') SKIP(613);
      END_STATE();
    case 521:
      if (lookahead == '$') SKIP(614);
      END_STATE();
    case 522:
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 523:
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(523);
      END_STATE();
    case 524:
      if (lookahead == '&') ADVANCE(617);
      END_STATE();
    case 525:
      if (lookahead == '&') SKIP(619);
      END_STATE();
    case 526:
      if (lookahead == '&') ADVANCE(640);
      END_STATE();
    case 527:
      if (lookahead == '&') ADVANCE(641);
      END_STATE();
    case 528:
      if (lookahead == '&') ADVANCE(642);
      END_STATE();
    case 529:
      if (lookahead == '&') ADVANCE(643);
      END_STATE();
    case 530:
      if (lookahead == '&') ADVANCE(644);
      END_STATE();
    case 531:
      if (lookahead == '&') ADVANCE(645);
      END_STATE();
    case 532:
      if (lookahead == '&') ADVANCE(646);
      END_STATE();
    case 533:
      if (lookahead == '&') ADVANCE(647);
      END_STATE();
    case 534:
      if (lookahead == '&') ADVANCE(648);
      END_STATE();
    case 535:
      if (lookahead == '&') ADVANCE(649);
      END_STATE();
    case 536:
      if (lookahead == '&') ADVANCE(650);
      END_STATE();
    case 537:
      if (lookahead == '&') ADVANCE(651);
      END_STATE();
    case 538:
      if (lookahead == '&') ADVANCE(652);
      END_STATE();
    case 539:
      if (lookahead == '&') ADVANCE(653);
      END_STATE();
    case 540:
      if (lookahead == '&') ADVANCE(654);
      END_STATE();
    case 541:
      if (lookahead == '&') ADVANCE(655);
      END_STATE();
    case 542:
      if (lookahead == '&') ADVANCE(656);
      END_STATE();
    case 543:
      if (lookahead == '&') ADVANCE(657);
      END_STATE();
    case 544:
      if (lookahead == '&') ADVANCE(658);
      END_STATE();
    case 545:
      if (lookahead == '&') ADVANCE(659);
      END_STATE();
    case 546:
      if (lookahead == '&') ADVANCE(660);
      END_STATE();
    case 547:
      if (lookahead == '&') ADVANCE(661);
      END_STATE();
    case 548:
      if (lookahead == '&') ADVANCE(662);
      END_STATE();
    case 549:
      if (lookahead == '&') ADVANCE(663);
      END_STATE();
    case 550:
      if (lookahead == '&') ADVANCE(664);
      END_STATE();
    case 551:
      if (lookahead == '&') ADVANCE(665);
      END_STATE();
    case 552:
      if (lookahead == '&') ADVANCE(666);
      END_STATE();
    case 553:
      if (lookahead == '&') ADVANCE(667);
      END_STATE();
    case 554:
      if (lookahead == '&') ADVANCE(668);
      END_STATE();
    case 555:
      if (lookahead == '&') ADVANCE(669);
      END_STATE();
    case 556:
      if (lookahead == '&') ADVANCE(670);
      END_STATE();
    case 557:
      if (lookahead == '&') ADVANCE(671);
      END_STATE();
    case 558:
      if (lookahead == '&') ADVANCE(672);
      END_STATE();
    case 559:
      if (lookahead == '&') ADVANCE(673);
      END_STATE();
    case 560:
      if (lookahead == '&') ADVANCE(674);
      END_STATE();
    case 561:
      if (lookahead == '&') ADVANCE(675);
      END_STATE();
    case 562:
      if (lookahead == '&') ADVANCE(676);
      END_STATE();
    case 563:
      if (lookahead == '&') ADVANCE(677);
      END_STATE();
    case 564:
      if (lookahead == '&') ADVANCE(678);
      END_STATE();
    case 565:
      if (lookahead == '&') ADVANCE(679);
      END_STATE();
    case 566:
      if (lookahead == '&') ADVANCE(680);
      END_STATE();
    case 567:
      if (lookahead == '&') ADVANCE(681);
      END_STATE();
    case 568:
      if (lookahead == '&') ADVANCE(682);
      END_STATE();
    case 569:
      if (lookahead == '&') ADVANCE(683);
      END_STATE();
    case 570:
      if (lookahead == '&') ADVANCE(684);
      END_STATE();
    case 571:
      if (lookahead == '&') ADVANCE(685);
      END_STATE();
    case 572:
      if (lookahead == '&') ADVANCE(686);
      END_STATE();
    case 573:
      if (lookahead == '&') ADVANCE(687);
      END_STATE();
    case 574:
      if (lookahead == '&') ADVANCE(688);
      END_STATE();
    case 575:
      if (lookahead == '&') ADVANCE(689);
      END_STATE();
    case 576:
      if (lookahead == '&') ADVANCE(690);
      END_STATE();
    case 577:
      if (lookahead == '&') ADVANCE(691);
      END_STATE();
    case 578:
      if (lookahead == '&') ADVANCE(692);
      END_STATE();
    case 579:
      if (lookahead == '&') ADVANCE(693);
      END_STATE();
    case 580:
      if (lookahead == '&') ADVANCE(694);
      END_STATE();
    case 581:
      if (lookahead == '&') ADVANCE(695);
      END_STATE();
    case 582:
      if (lookahead == '&') ADVANCE(696);
      END_STATE();
    case 583:
      if (lookahead == '&') ADVANCE(697);
      END_STATE();
    case 584:
      if (lookahead == '&') ADVANCE(698);
      END_STATE();
    case 585:
      if (lookahead == '&') ADVANCE(699);
      END_STATE();
    case 586:
      if (lookahead == '&') ADVANCE(700);
      END_STATE();
    case 587:
      if (lookahead == '&') ADVANCE(701);
      END_STATE();
    case 588:
      if (lookahead == '&') ADVANCE(702);
      END_STATE();
    case 589:
      if (lookahead == '&') ADVANCE(703);
      END_STATE();
    case 590:
      if (lookahead == '&') ADVANCE(704);
      END_STATE();
    case 591:
      if (lookahead == '&') ADVANCE(705);
      END_STATE();
    case 592:
      if (lookahead == '&') ADVANCE(706);
      END_STATE();
    case 593:
      if (lookahead == '&') ADVANCE(707);
      END_STATE();
    case 594:
      if (lookahead == '&') ADVANCE(708);
      END_STATE();
    case 595:
      if (lookahead == '&') ADVANCE(709);
      END_STATE();
    case 596:
      if (lookahead == '&') ADVANCE(710);
      END_STATE();
    case 597:
      if (lookahead == '&') ADVANCE(711);
      END_STATE();
    case 598:
      if (lookahead == '&') ADVANCE(712);
      END_STATE();
    case 599:
      if (lookahead == '&') ADVANCE(713);
      END_STATE();
    case 600:
      if (lookahead == '&') ADVANCE(714);
      END_STATE();
    case 601:
      if (lookahead == '&') ADVANCE(715);
      END_STATE();
    case 602:
      if (lookahead == '&') ADVANCE(716);
      END_STATE();
    case 603:
      if (lookahead == '&') ADVANCE(717);
      END_STATE();
    case 604:
      if (lookahead == '&') ADVANCE(718);
      END_STATE();
    case 605:
      if (lookahead == '&') ADVANCE(719);
      END_STATE();
    case 606:
      if (lookahead == '&') ADVANCE(720);
      END_STATE();
    case 607:
      if (lookahead == '&') ADVANCE(721);
      END_STATE();
    case 608:
      if (lookahead == '&') SKIP(722);
      END_STATE();
    case 609:
      if (lookahead == '&') SKIP(723);
      END_STATE();
    case 610:
      if (lookahead == '&') SKIP(724);
      END_STATE();
    case 611:
      if (lookahead == '&') SKIP(725);
      END_STATE();
    case 612:
      if (lookahead == '&') SKIP(726);
      END_STATE();
    case 613:
      if (lookahead == '&') SKIP(727);
      END_STATE();
    case 614:
      if (lookahead == '&') SKIP(728);
      END_STATE();
    case 615:
      if (lookahead == '\'') ADVANCE(2113);
      END_STATE();
    case 616:
      if (lookahead == '*') ADVANCE(2436);
      if (lookahead == '/') ADVANCE(2111);
      END_STATE();
    case 617:
      if (lookahead == '*') ADVANCE(731);
      END_STATE();
    case 618:
      if (lookahead == '*') SKIP(425);
      END_STATE();
    case 619:
      if (lookahead == '*') SKIP(730);
      END_STATE();
    case 620:
      if (lookahead == '*') ADVANCE(2109);
      END_STATE();
    case 621:
      if (lookahead == '*') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(2412);
      END_STATE();
    case 622:
      if (lookahead == '*') ADVANCE(350);
      END_STATE();
    case 623:
      if (lookahead == '*') ADVANCE(356);
      END_STATE();
    case 624:
      if (lookahead == '*') ADVANCE(358);
      END_STATE();
    case 625:
      if (lookahead == '*') ADVANCE(362);
      END_STATE();
    case 626:
      if (lookahead == '*') ADVANCE(364);
      END_STATE();
    case 627:
      if (lookahead == '*') ADVANCE(367);
      END_STATE();
    case 628:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 629:
      if (lookahead == '*') ADVANCE(374);
      END_STATE();
    case 630:
      if (lookahead == '*') ADVANCE(376);
      END_STATE();
    case 631:
      if (lookahead == '*') ADVANCE(379);
      END_STATE();
    case 632:
      if (lookahead == '*') SKIP(430);
      END_STATE();
    case 633:
      if (lookahead == '*') ADVANCE(2110);
      END_STATE();
    case 634:
      if (lookahead == '*') ADVANCE(408);
      END_STATE();
    case 635:
      if (lookahead == '*') ADVANCE(411);
      END_STATE();
    case 636:
      if (lookahead == '*') ADVANCE(414);
      END_STATE();
    case 637:
      if (lookahead == '*') ADVANCE(417);
      END_STATE();
    case 638:
      if (lookahead == '*') ADVANCE(420);
      END_STATE();
    case 639:
      if (lookahead == '*') ADVANCE(423);
      END_STATE();
    case 640:
      if (lookahead == '*') ADVANCE(732);
      END_STATE();
    case 641:
      if (lookahead == '*') ADVANCE(733);
      END_STATE();
    case 642:
      if (lookahead == '*') ADVANCE(734);
      END_STATE();
    case 643:
      if (lookahead == '*') ADVANCE(735);
      END_STATE();
    case 644:
      if (lookahead == '*') ADVANCE(736);
      END_STATE();
    case 645:
      if (lookahead == '*') ADVANCE(737);
      END_STATE();
    case 646:
      if (lookahead == '*') ADVANCE(738);
      END_STATE();
    case 647:
      if (lookahead == '*') ADVANCE(739);
      END_STATE();
    case 648:
      if (lookahead == '*') ADVANCE(740);
      END_STATE();
    case 649:
      if (lookahead == '*') ADVANCE(741);
      END_STATE();
    case 650:
      if (lookahead == '*') ADVANCE(742);
      END_STATE();
    case 651:
      if (lookahead == '*') ADVANCE(743);
      END_STATE();
    case 652:
      if (lookahead == '*') ADVANCE(744);
      END_STATE();
    case 653:
      if (lookahead == '*') ADVANCE(745);
      END_STATE();
    case 654:
      if (lookahead == '*') ADVANCE(746);
      END_STATE();
    case 655:
      if (lookahead == '*') ADVANCE(747);
      END_STATE();
    case 656:
      if (lookahead == '*') ADVANCE(748);
      END_STATE();
    case 657:
      if (lookahead == '*') ADVANCE(749);
      END_STATE();
    case 658:
      if (lookahead == '*') ADVANCE(750);
      END_STATE();
    case 659:
      if (lookahead == '*') ADVANCE(751);
      END_STATE();
    case 660:
      if (lookahead == '*') ADVANCE(752);
      END_STATE();
    case 661:
      if (lookahead == '*') ADVANCE(753);
      END_STATE();
    case 662:
      if (lookahead == '*') ADVANCE(754);
      END_STATE();
    case 663:
      if (lookahead == '*') ADVANCE(755);
      END_STATE();
    case 664:
      if (lookahead == '*') ADVANCE(756);
      END_STATE();
    case 665:
      if (lookahead == '*') ADVANCE(757);
      END_STATE();
    case 666:
      if (lookahead == '*') ADVANCE(758);
      END_STATE();
    case 667:
      if (lookahead == '*') ADVANCE(759);
      END_STATE();
    case 668:
      if (lookahead == '*') ADVANCE(760);
      END_STATE();
    case 669:
      if (lookahead == '*') ADVANCE(761);
      END_STATE();
    case 670:
      if (lookahead == '*') ADVANCE(762);
      END_STATE();
    case 671:
      if (lookahead == '*') ADVANCE(763);
      END_STATE();
    case 672:
      if (lookahead == '*') ADVANCE(764);
      END_STATE();
    case 673:
      if (lookahead == '*') ADVANCE(765);
      END_STATE();
    case 674:
      if (lookahead == '*') ADVANCE(766);
      END_STATE();
    case 675:
      if (lookahead == '*') ADVANCE(767);
      END_STATE();
    case 676:
      if (lookahead == '*') ADVANCE(768);
      END_STATE();
    case 677:
      if (lookahead == '*') ADVANCE(769);
      END_STATE();
    case 678:
      if (lookahead == '*') ADVANCE(770);
      END_STATE();
    case 679:
      if (lookahead == '*') ADVANCE(771);
      END_STATE();
    case 680:
      if (lookahead == '*') ADVANCE(772);
      END_STATE();
    case 681:
      if (lookahead == '*') ADVANCE(773);
      END_STATE();
    case 682:
      if (lookahead == '*') ADVANCE(774);
      END_STATE();
    case 683:
      if (lookahead == '*') ADVANCE(775);
      END_STATE();
    case 684:
      if (lookahead == '*') ADVANCE(776);
      END_STATE();
    case 685:
      if (lookahead == '*') ADVANCE(777);
      END_STATE();
    case 686:
      if (lookahead == '*') ADVANCE(778);
      END_STATE();
    case 687:
      if (lookahead == '*') ADVANCE(779);
      END_STATE();
    case 688:
      if (lookahead == '*') ADVANCE(780);
      END_STATE();
    case 689:
      if (lookahead == '*') ADVANCE(781);
      END_STATE();
    case 690:
      if (lookahead == '*') ADVANCE(782);
      END_STATE();
    case 691:
      if (lookahead == '*') ADVANCE(783);
      END_STATE();
    case 692:
      if (lookahead == '*') ADVANCE(784);
      END_STATE();
    case 693:
      if (lookahead == '*') ADVANCE(785);
      END_STATE();
    case 694:
      if (lookahead == '*') ADVANCE(786);
      END_STATE();
    case 695:
      if (lookahead == '*') ADVANCE(787);
      END_STATE();
    case 696:
      if (lookahead == '*') ADVANCE(788);
      END_STATE();
    case 697:
      if (lookahead == '*') ADVANCE(789);
      END_STATE();
    case 698:
      if (lookahead == '*') ADVANCE(790);
      END_STATE();
    case 699:
      if (lookahead == '*') ADVANCE(791);
      END_STATE();
    case 700:
      if (lookahead == '*') ADVANCE(792);
      END_STATE();
    case 701:
      if (lookahead == '*') ADVANCE(793);
      END_STATE();
    case 702:
      if (lookahead == '*') ADVANCE(794);
      END_STATE();
    case 703:
      if (lookahead == '*') ADVANCE(795);
      END_STATE();
    case 704:
      if (lookahead == '*') ADVANCE(796);
      END_STATE();
    case 705:
      if (lookahead == '*') ADVANCE(797);
      END_STATE();
    case 706:
      if (lookahead == '*') ADVANCE(798);
      END_STATE();
    case 707:
      if (lookahead == '*') ADVANCE(799);
      END_STATE();
    case 708:
      if (lookahead == '*') ADVANCE(800);
      END_STATE();
    case 709:
      if (lookahead == '*') ADVANCE(801);
      END_STATE();
    case 710:
      if (lookahead == '*') ADVANCE(802);
      END_STATE();
    case 711:
      if (lookahead == '*') ADVANCE(803);
      END_STATE();
    case 712:
      if (lookahead == '*') ADVANCE(804);
      END_STATE();
    case 713:
      if (lookahead == '*') ADVANCE(805);
      END_STATE();
    case 714:
      if (lookahead == '*') ADVANCE(806);
      END_STATE();
    case 715:
      if (lookahead == '*') ADVANCE(807);
      END_STATE();
    case 716:
      if (lookahead == '*') ADVANCE(808);
      END_STATE();
    case 717:
      if (lookahead == '*') ADVANCE(809);
      END_STATE();
    case 718:
      if (lookahead == '*') ADVANCE(810);
      END_STATE();
    case 719:
      if (lookahead == '*') ADVANCE(811);
      END_STATE();
    case 720:
      if (lookahead == '*') ADVANCE(812);
      END_STATE();
    case 721:
      if (lookahead == '*') ADVANCE(813);
      END_STATE();
    case 722:
      if (lookahead == '*') SKIP(814);
      END_STATE();
    case 723:
      if (lookahead == '*') SKIP(815);
      END_STATE();
    case 724:
      if (lookahead == '*') SKIP(816);
      END_STATE();
    case 725:
      if (lookahead == '*') SKIP(817);
      END_STATE();
    case 726:
      if (lookahead == '*') SKIP(818);
      END_STATE();
    case 727:
      if (lookahead == '*') SKIP(819);
      END_STATE();
    case 728:
      if (lookahead == '*') SKIP(820);
      END_STATE();
    case 729:
      if (lookahead == '+') ADVANCE(2396);
      if (lookahead == '/') ADVANCE(2412);
      END_STATE();
    case 730:
      if (lookahead == '+') SKIP(826);
      END_STATE();
    case 731:
      if (lookahead == '+') ADVANCE(825);
      END_STATE();
    case 732:
      if (lookahead == '+') ADVANCE(827);
      END_STATE();
    case 733:
      if (lookahead == '+') ADVANCE(828);
      END_STATE();
    case 734:
      if (lookahead == '+') ADVANCE(829);
      END_STATE();
    case 735:
      if (lookahead == '+') ADVANCE(830);
      END_STATE();
    case 736:
      if (lookahead == '+') ADVANCE(831);
      END_STATE();
    case 737:
      if (lookahead == '+') ADVANCE(832);
      END_STATE();
    case 738:
      if (lookahead == '+') ADVANCE(833);
      END_STATE();
    case 739:
      if (lookahead == '+') ADVANCE(834);
      END_STATE();
    case 740:
      if (lookahead == '+') ADVANCE(835);
      END_STATE();
    case 741:
      if (lookahead == '+') ADVANCE(836);
      END_STATE();
    case 742:
      if (lookahead == '+') ADVANCE(837);
      END_STATE();
    case 743:
      if (lookahead == '+') ADVANCE(838);
      END_STATE();
    case 744:
      if (lookahead == '+') ADVANCE(839);
      END_STATE();
    case 745:
      if (lookahead == '+') ADVANCE(840);
      END_STATE();
    case 746:
      if (lookahead == '+') ADVANCE(841);
      END_STATE();
    case 747:
      if (lookahead == '+') ADVANCE(842);
      END_STATE();
    case 748:
      if (lookahead == '+') ADVANCE(843);
      END_STATE();
    case 749:
      if (lookahead == '+') ADVANCE(844);
      END_STATE();
    case 750:
      if (lookahead == '+') ADVANCE(845);
      END_STATE();
    case 751:
      if (lookahead == '+') ADVANCE(846);
      END_STATE();
    case 752:
      if (lookahead == '+') ADVANCE(847);
      END_STATE();
    case 753:
      if (lookahead == '+') ADVANCE(848);
      END_STATE();
    case 754:
      if (lookahead == '+') ADVANCE(849);
      END_STATE();
    case 755:
      if (lookahead == '+') ADVANCE(850);
      END_STATE();
    case 756:
      if (lookahead == '+') ADVANCE(851);
      END_STATE();
    case 757:
      if (lookahead == '+') ADVANCE(852);
      END_STATE();
    case 758:
      if (lookahead == '+') ADVANCE(853);
      END_STATE();
    case 759:
      if (lookahead == '+') ADVANCE(854);
      END_STATE();
    case 760:
      if (lookahead == '+') ADVANCE(855);
      END_STATE();
    case 761:
      if (lookahead == '+') ADVANCE(856);
      END_STATE();
    case 762:
      if (lookahead == '+') ADVANCE(857);
      END_STATE();
    case 763:
      if (lookahead == '+') ADVANCE(858);
      END_STATE();
    case 764:
      if (lookahead == '+') ADVANCE(859);
      END_STATE();
    case 765:
      if (lookahead == '+') ADVANCE(860);
      END_STATE();
    case 766:
      if (lookahead == '+') ADVANCE(861);
      END_STATE();
    case 767:
      if (lookahead == '+') ADVANCE(862);
      END_STATE();
    case 768:
      if (lookahead == '+') ADVANCE(863);
      END_STATE();
    case 769:
      if (lookahead == '+') ADVANCE(864);
      END_STATE();
    case 770:
      if (lookahead == '+') ADVANCE(865);
      END_STATE();
    case 771:
      if (lookahead == '+') ADVANCE(866);
      END_STATE();
    case 772:
      if (lookahead == '+') ADVANCE(867);
      END_STATE();
    case 773:
      if (lookahead == '+') ADVANCE(868);
      END_STATE();
    case 774:
      if (lookahead == '+') ADVANCE(869);
      END_STATE();
    case 775:
      if (lookahead == '+') ADVANCE(870);
      END_STATE();
    case 776:
      if (lookahead == '+') ADVANCE(871);
      END_STATE();
    case 777:
      if (lookahead == '+') ADVANCE(872);
      END_STATE();
    case 778:
      if (lookahead == '+') ADVANCE(873);
      END_STATE();
    case 779:
      if (lookahead == '+') ADVANCE(874);
      END_STATE();
    case 780:
      if (lookahead == '+') ADVANCE(875);
      END_STATE();
    case 781:
      if (lookahead == '+') ADVANCE(876);
      END_STATE();
    case 782:
      if (lookahead == '+') ADVANCE(877);
      END_STATE();
    case 783:
      if (lookahead == '+') ADVANCE(878);
      END_STATE();
    case 784:
      if (lookahead == '+') ADVANCE(879);
      END_STATE();
    case 785:
      if (lookahead == '+') ADVANCE(880);
      END_STATE();
    case 786:
      if (lookahead == '+') ADVANCE(881);
      END_STATE();
    case 787:
      if (lookahead == '+') ADVANCE(882);
      END_STATE();
    case 788:
      if (lookahead == '+') ADVANCE(883);
      END_STATE();
    case 789:
      if (lookahead == '+') ADVANCE(884);
      END_STATE();
    case 790:
      if (lookahead == '+') ADVANCE(885);
      END_STATE();
    case 791:
      if (lookahead == '+') ADVANCE(886);
      END_STATE();
    case 792:
      if (lookahead == '+') ADVANCE(887);
      END_STATE();
    case 793:
      if (lookahead == '+') ADVANCE(888);
      END_STATE();
    case 794:
      if (lookahead == '+') ADVANCE(889);
      END_STATE();
    case 795:
      if (lookahead == '+') ADVANCE(890);
      END_STATE();
    case 796:
      if (lookahead == '+') ADVANCE(891);
      END_STATE();
    case 797:
      if (lookahead == '+') ADVANCE(892);
      END_STATE();
    case 798:
      if (lookahead == '+') ADVANCE(893);
      END_STATE();
    case 799:
      if (lookahead == '+') ADVANCE(894);
      END_STATE();
    case 800:
      if (lookahead == '+') ADVANCE(895);
      END_STATE();
    case 801:
      if (lookahead == '+') ADVANCE(896);
      END_STATE();
    case 802:
      if (lookahead == '+') ADVANCE(897);
      END_STATE();
    case 803:
      if (lookahead == '+') ADVANCE(898);
      END_STATE();
    case 804:
      if (lookahead == '+') ADVANCE(899);
      END_STATE();
    case 805:
      if (lookahead == '+') ADVANCE(900);
      END_STATE();
    case 806:
      if (lookahead == '+') ADVANCE(901);
      END_STATE();
    case 807:
      if (lookahead == '+') ADVANCE(902);
      END_STATE();
    case 808:
      if (lookahead == '+') ADVANCE(903);
      END_STATE();
    case 809:
      if (lookahead == '+') ADVANCE(904);
      END_STATE();
    case 810:
      if (lookahead == '+') ADVANCE(905);
      END_STATE();
    case 811:
      if (lookahead == '+') ADVANCE(906);
      END_STATE();
    case 812:
      if (lookahead == '+') ADVANCE(907);
      END_STATE();
    case 813:
      if (lookahead == '+') ADVANCE(908);
      END_STATE();
    case 814:
      if (lookahead == '+') SKIP(909);
      END_STATE();
    case 815:
      if (lookahead == '+') SKIP(910);
      END_STATE();
    case 816:
      if (lookahead == '+') SKIP(911);
      END_STATE();
    case 817:
      if (lookahead == '+') SKIP(912);
      END_STATE();
    case 818:
      if (lookahead == '+') SKIP(913);
      END_STATE();
    case 819:
      if (lookahead == '+') SKIP(914);
      END_STATE();
    case 820:
      if (lookahead == '+') SKIP(915);
      END_STATE();
    case 821:
      if (lookahead == ',') ADVANCE(1776);
      END_STATE();
    case 822:
      if (lookahead == '-') ADVANCE(1921);
      END_STATE();
    case 823:
      if (lookahead == '-') ADVANCE(2383);
      END_STATE();
    case 824:
      if (lookahead == '-') ADVANCE(2382);
      END_STATE();
    case 825:
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 826:
      if (lookahead == '-') SKIP(919);
      END_STATE();
    case 827:
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 828:
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 829:
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 830:
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 831:
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 832:
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 833:
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 834:
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 835:
      if (lookahead == '-') ADVANCE(928);
      END_STATE();
    case 836:
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 837:
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 838:
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 839:
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 840:
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 841:
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 842:
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 843:
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 844:
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 845:
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 846:
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 847:
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 848:
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 849:
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 850:
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 851:
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 852:
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 853:
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 854:
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 855:
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 856:
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 857:
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 858:
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 859:
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 860:
      if (lookahead == '-') ADVANCE(953);
      END_STATE();
    case 861:
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 862:
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 863:
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 864:
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 865:
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 866:
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 867:
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 868:
      if (lookahead == '-') ADVANCE(961);
      END_STATE();
    case 869:
      if (lookahead == '-') ADVANCE(962);
      END_STATE();
    case 870:
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 871:
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 872:
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 873:
      if (lookahead == '-') ADVANCE(966);
      END_STATE();
    case 874:
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 875:
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 876:
      if (lookahead == '-') ADVANCE(969);
      END_STATE();
    case 877:
      if (lookahead == '-') ADVANCE(970);
      END_STATE();
    case 878:
      if (lookahead == '-') ADVANCE(971);
      END_STATE();
    case 879:
      if (lookahead == '-') ADVANCE(972);
      END_STATE();
    case 880:
      if (lookahead == '-') ADVANCE(973);
      END_STATE();
    case 881:
      if (lookahead == '-') ADVANCE(974);
      END_STATE();
    case 882:
      if (lookahead == '-') ADVANCE(975);
      END_STATE();
    case 883:
      if (lookahead == '-') ADVANCE(976);
      END_STATE();
    case 884:
      if (lookahead == '-') ADVANCE(977);
      END_STATE();
    case 885:
      if (lookahead == '-') ADVANCE(978);
      END_STATE();
    case 886:
      if (lookahead == '-') ADVANCE(979);
      END_STATE();
    case 887:
      if (lookahead == '-') ADVANCE(980);
      END_STATE();
    case 888:
      if (lookahead == '-') ADVANCE(981);
      END_STATE();
    case 889:
      if (lookahead == '-') ADVANCE(982);
      END_STATE();
    case 890:
      if (lookahead == '-') ADVANCE(983);
      END_STATE();
    case 891:
      if (lookahead == '-') ADVANCE(984);
      END_STATE();
    case 892:
      if (lookahead == '-') ADVANCE(985);
      END_STATE();
    case 893:
      if (lookahead == '-') ADVANCE(986);
      END_STATE();
    case 894:
      if (lookahead == '-') ADVANCE(987);
      END_STATE();
    case 895:
      if (lookahead == '-') ADVANCE(988);
      END_STATE();
    case 896:
      if (lookahead == '-') ADVANCE(989);
      END_STATE();
    case 897:
      if (lookahead == '-') ADVANCE(990);
      END_STATE();
    case 898:
      if (lookahead == '-') ADVANCE(991);
      END_STATE();
    case 899:
      if (lookahead == '-') ADVANCE(992);
      END_STATE();
    case 900:
      if (lookahead == '-') ADVANCE(993);
      END_STATE();
    case 901:
      if (lookahead == '-') ADVANCE(994);
      END_STATE();
    case 902:
      if (lookahead == '-') ADVANCE(995);
      END_STATE();
    case 903:
      if (lookahead == '-') ADVANCE(996);
      END_STATE();
    case 904:
      if (lookahead == '-') ADVANCE(997);
      END_STATE();
    case 905:
      if (lookahead == '-') ADVANCE(998);
      END_STATE();
    case 906:
      if (lookahead == '-') ADVANCE(999);
      END_STATE();
    case 907:
      if (lookahead == '-') ADVANCE(1000);
      END_STATE();
    case 908:
      if (lookahead == '-') ADVANCE(1001);
      END_STATE();
    case 909:
      if (lookahead == '-') SKIP(1002);
      END_STATE();
    case 910:
      if (lookahead == '-') SKIP(1003);
      END_STATE();
    case 911:
      if (lookahead == '-') SKIP(1004);
      END_STATE();
    case 912:
      if (lookahead == '-') SKIP(1005);
      END_STATE();
    case 913:
      if (lookahead == '-') SKIP(1006);
      END_STATE();
    case 914:
      if (lookahead == '-') SKIP(1007);
      END_STATE();
    case 915:
      if (lookahead == '-') SKIP(1008);
      END_STATE();
    case 916:
      if (lookahead == '.') ADVANCE(1877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(916);
      END_STATE();
    case 917:
      if (lookahead == '.') ADVANCE(2397);
      END_STATE();
    case 918:
      if (lookahead == '.') ADVANCE(1012);
      END_STATE();
    case 919:
      if (lookahead == '.') SKIP(1020);
      END_STATE();
    case 920:
      if (lookahead == '.') ADVANCE(1044);
      END_STATE();
    case 921:
      if (lookahead == '.') ADVANCE(1045);
      END_STATE();
    case 922:
      if (lookahead == '.') ADVANCE(1046);
      END_STATE();
    case 923:
      if (lookahead == '.') ADVANCE(1047);
      END_STATE();
    case 924:
      if (lookahead == '.') ADVANCE(1048);
      END_STATE();
    case 925:
      if (lookahead == '.') ADVANCE(1049);
      END_STATE();
    case 926:
      if (lookahead == '.') ADVANCE(1050);
      END_STATE();
    case 927:
      if (lookahead == '.') ADVANCE(1051);
      END_STATE();
    case 928:
      if (lookahead == '.') ADVANCE(1052);
      END_STATE();
    case 929:
      if (lookahead == '.') ADVANCE(1053);
      END_STATE();
    case 930:
      if (lookahead == '.') ADVANCE(1054);
      END_STATE();
    case 931:
      if (lookahead == '.') ADVANCE(1055);
      END_STATE();
    case 932:
      if (lookahead == '.') ADVANCE(1056);
      END_STATE();
    case 933:
      if (lookahead == '.') ADVANCE(1057);
      END_STATE();
    case 934:
      if (lookahead == '.') ADVANCE(1058);
      END_STATE();
    case 935:
      if (lookahead == '.') ADVANCE(1059);
      END_STATE();
    case 936:
      if (lookahead == '.') ADVANCE(1060);
      END_STATE();
    case 937:
      if (lookahead == '.') ADVANCE(1061);
      END_STATE();
    case 938:
      if (lookahead == '.') ADVANCE(1062);
      END_STATE();
    case 939:
      if (lookahead == '.') ADVANCE(1063);
      END_STATE();
    case 940:
      if (lookahead == '.') ADVANCE(1064);
      END_STATE();
    case 941:
      if (lookahead == '.') ADVANCE(1065);
      END_STATE();
    case 942:
      if (lookahead == '.') ADVANCE(1066);
      END_STATE();
    case 943:
      if (lookahead == '.') ADVANCE(1067);
      END_STATE();
    case 944:
      if (lookahead == '.') ADVANCE(1068);
      END_STATE();
    case 945:
      if (lookahead == '.') ADVANCE(1069);
      END_STATE();
    case 946:
      if (lookahead == '.') ADVANCE(1070);
      END_STATE();
    case 947:
      if (lookahead == '.') ADVANCE(1071);
      END_STATE();
    case 948:
      if (lookahead == '.') ADVANCE(1072);
      END_STATE();
    case 949:
      if (lookahead == '.') ADVANCE(1073);
      END_STATE();
    case 950:
      if (lookahead == '.') ADVANCE(1074);
      END_STATE();
    case 951:
      if (lookahead == '.') ADVANCE(1075);
      END_STATE();
    case 952:
      if (lookahead == '.') ADVANCE(1076);
      END_STATE();
    case 953:
      if (lookahead == '.') ADVANCE(1077);
      END_STATE();
    case 954:
      if (lookahead == '.') ADVANCE(1078);
      END_STATE();
    case 955:
      if (lookahead == '.') ADVANCE(1079);
      END_STATE();
    case 956:
      if (lookahead == '.') ADVANCE(1080);
      END_STATE();
    case 957:
      if (lookahead == '.') ADVANCE(1081);
      END_STATE();
    case 958:
      if (lookahead == '.') ADVANCE(1082);
      END_STATE();
    case 959:
      if (lookahead == '.') ADVANCE(1083);
      END_STATE();
    case 960:
      if (lookahead == '.') ADVANCE(1084);
      END_STATE();
    case 961:
      if (lookahead == '.') ADVANCE(1085);
      END_STATE();
    case 962:
      if (lookahead == '.') ADVANCE(1086);
      END_STATE();
    case 963:
      if (lookahead == '.') ADVANCE(1087);
      END_STATE();
    case 964:
      if (lookahead == '.') ADVANCE(1088);
      END_STATE();
    case 965:
      if (lookahead == '.') ADVANCE(1089);
      END_STATE();
    case 966:
      if (lookahead == '.') ADVANCE(1090);
      END_STATE();
    case 967:
      if (lookahead == '.') ADVANCE(1091);
      END_STATE();
    case 968:
      if (lookahead == '.') ADVANCE(1092);
      END_STATE();
    case 969:
      if (lookahead == '.') ADVANCE(1093);
      END_STATE();
    case 970:
      if (lookahead == '.') ADVANCE(1094);
      END_STATE();
    case 971:
      if (lookahead == '.') ADVANCE(1095);
      END_STATE();
    case 972:
      if (lookahead == '.') ADVANCE(1096);
      END_STATE();
    case 973:
      if (lookahead == '.') ADVANCE(1097);
      END_STATE();
    case 974:
      if (lookahead == '.') ADVANCE(1098);
      END_STATE();
    case 975:
      if (lookahead == '.') ADVANCE(1099);
      END_STATE();
    case 976:
      if (lookahead == '.') ADVANCE(1100);
      END_STATE();
    case 977:
      if (lookahead == '.') ADVANCE(1101);
      END_STATE();
    case 978:
      if (lookahead == '.') ADVANCE(1102);
      END_STATE();
    case 979:
      if (lookahead == '.') ADVANCE(1103);
      END_STATE();
    case 980:
      if (lookahead == '.') ADVANCE(1104);
      END_STATE();
    case 981:
      if (lookahead == '.') ADVANCE(1105);
      END_STATE();
    case 982:
      if (lookahead == '.') ADVANCE(1106);
      END_STATE();
    case 983:
      if (lookahead == '.') ADVANCE(1107);
      END_STATE();
    case 984:
      if (lookahead == '.') ADVANCE(1108);
      END_STATE();
    case 985:
      if (lookahead == '.') ADVANCE(1109);
      END_STATE();
    case 986:
      if (lookahead == '.') ADVANCE(1110);
      END_STATE();
    case 987:
      if (lookahead == '.') ADVANCE(1111);
      END_STATE();
    case 988:
      if (lookahead == '.') ADVANCE(1112);
      END_STATE();
    case 989:
      if (lookahead == '.') ADVANCE(1113);
      END_STATE();
    case 990:
      if (lookahead == '.') ADVANCE(1114);
      END_STATE();
    case 991:
      if (lookahead == '.') ADVANCE(1115);
      END_STATE();
    case 992:
      if (lookahead == '.') ADVANCE(1116);
      END_STATE();
    case 993:
      if (lookahead == '.') ADVANCE(1117);
      END_STATE();
    case 994:
      if (lookahead == '.') ADVANCE(1118);
      END_STATE();
    case 995:
      if (lookahead == '.') ADVANCE(1119);
      END_STATE();
    case 996:
      if (lookahead == '.') ADVANCE(1120);
      END_STATE();
    case 997:
      if (lookahead == '.') ADVANCE(1121);
      END_STATE();
    case 998:
      if (lookahead == '.') ADVANCE(1122);
      END_STATE();
    case 999:
      if (lookahead == '.') ADVANCE(1123);
      END_STATE();
    case 1000:
      if (lookahead == '.') ADVANCE(1124);
      END_STATE();
    case 1001:
      if (lookahead == '.') ADVANCE(1125);
      END_STATE();
    case 1002:
      if (lookahead == '.') SKIP(1126);
      END_STATE();
    case 1003:
      if (lookahead == '.') SKIP(1127);
      END_STATE();
    case 1004:
      if (lookahead == '.') SKIP(1128);
      END_STATE();
    case 1005:
      if (lookahead == '.') SKIP(1129);
      END_STATE();
    case 1006:
      if (lookahead == '.') SKIP(1130);
      END_STATE();
    case 1007:
      if (lookahead == '.') SKIP(1131);
      END_STATE();
    case 1008:
      if (lookahead == '.') SKIP(1132);
      END_STATE();
    case 1009:
      if (lookahead == '/') ADVANCE(2412);
      if (lookahead == '=') ADVANCE(2410);
      END_STATE();
    case 1010:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 1011:
      if (lookahead == '/') ADVANCE(2111);
      END_STATE();
    case 1012:
      if (lookahead == '/') ADVANCE(1133);
      END_STATE();
    case 1013:
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 1014:
      if (lookahead == '/') ADVANCE(522);
      END_STATE();
    case 1015:
      if (lookahead == '/') ADVANCE(523);
      END_STATE();
    case 1016:
      if (lookahead == '/') ADVANCE(252);
      END_STATE();
    case 1017:
      if (lookahead == '/') ADVANCE(271);
      END_STATE();
    case 1018:
      if (lookahead == '/') ADVANCE(288);
      END_STATE();
    case 1019:
      if (lookahead == '/') SKIP(4);
      END_STATE();
    case 1020:
      if (lookahead == '/') SKIP(1134);
      END_STATE();
    case 1021:
      if (lookahead == '/') SKIP(6);
      END_STATE();
    case 1022:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 1023:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 1024:
      if (lookahead == '/') ADVANCE(330);
      END_STATE();
    case 1025:
      if (lookahead == '/') ADVANCE(331);
      END_STATE();
    case 1026:
      if (lookahead == '/') ADVANCE(332);
      END_STATE();
    case 1027:
      if (lookahead == '/') ADVANCE(333);
      END_STATE();
    case 1028:
      if (lookahead == '/') ADVANCE(334);
      END_STATE();
    case 1029:
      if (lookahead == '/') ADVANCE(335);
      END_STATE();
    case 1030:
      if (lookahead == '/') ADVANCE(336);
      END_STATE();
    case 1031:
      if (lookahead == '/') ADVANCE(337);
      END_STATE();
    case 1032:
      if (lookahead == '/') SKIP(74);
      END_STATE();
    case 1033:
      if (lookahead == '/') ADVANCE(338);
      END_STATE();
    case 1034:
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 1035:
      if (lookahead == '/') ADVANCE(340);
      END_STATE();
    case 1036:
      if (lookahead == '/') ADVANCE(341);
      END_STATE();
    case 1037:
      if (lookahead == '/') ADVANCE(342);
      END_STATE();
    case 1038:
      if (lookahead == '/') ADVANCE(343);
      END_STATE();
    case 1039:
      if (lookahead == '/') SKIP(216);
      END_STATE();
    case 1040:
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 1041:
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 1042:
      if (lookahead == '/') ADVANCE(328);
      END_STATE();
    case 1043:
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 1044:
      if (lookahead == '/') ADVANCE(1135);
      END_STATE();
    case 1045:
      if (lookahead == '/') ADVANCE(1136);
      END_STATE();
    case 1046:
      if (lookahead == '/') ADVANCE(1137);
      END_STATE();
    case 1047:
      if (lookahead == '/') ADVANCE(1138);
      END_STATE();
    case 1048:
      if (lookahead == '/') ADVANCE(1139);
      END_STATE();
    case 1049:
      if (lookahead == '/') ADVANCE(1140);
      END_STATE();
    case 1050:
      if (lookahead == '/') ADVANCE(1141);
      END_STATE();
    case 1051:
      if (lookahead == '/') ADVANCE(1142);
      END_STATE();
    case 1052:
      if (lookahead == '/') ADVANCE(1143);
      END_STATE();
    case 1053:
      if (lookahead == '/') ADVANCE(1144);
      END_STATE();
    case 1054:
      if (lookahead == '/') ADVANCE(1145);
      END_STATE();
    case 1055:
      if (lookahead == '/') ADVANCE(1146);
      END_STATE();
    case 1056:
      if (lookahead == '/') ADVANCE(1147);
      END_STATE();
    case 1057:
      if (lookahead == '/') ADVANCE(1148);
      END_STATE();
    case 1058:
      if (lookahead == '/') ADVANCE(1149);
      END_STATE();
    case 1059:
      if (lookahead == '/') ADVANCE(1150);
      END_STATE();
    case 1060:
      if (lookahead == '/') ADVANCE(1151);
      END_STATE();
    case 1061:
      if (lookahead == '/') ADVANCE(1152);
      END_STATE();
    case 1062:
      if (lookahead == '/') ADVANCE(1153);
      END_STATE();
    case 1063:
      if (lookahead == '/') ADVANCE(1154);
      END_STATE();
    case 1064:
      if (lookahead == '/') ADVANCE(1155);
      END_STATE();
    case 1065:
      if (lookahead == '/') ADVANCE(1156);
      END_STATE();
    case 1066:
      if (lookahead == '/') ADVANCE(1157);
      END_STATE();
    case 1067:
      if (lookahead == '/') ADVANCE(1158);
      END_STATE();
    case 1068:
      if (lookahead == '/') ADVANCE(1159);
      END_STATE();
    case 1069:
      if (lookahead == '/') ADVANCE(1160);
      END_STATE();
    case 1070:
      if (lookahead == '/') ADVANCE(1161);
      END_STATE();
    case 1071:
      if (lookahead == '/') ADVANCE(1162);
      END_STATE();
    case 1072:
      if (lookahead == '/') ADVANCE(1163);
      END_STATE();
    case 1073:
      if (lookahead == '/') ADVANCE(1164);
      END_STATE();
    case 1074:
      if (lookahead == '/') ADVANCE(1165);
      END_STATE();
    case 1075:
      if (lookahead == '/') ADVANCE(1166);
      END_STATE();
    case 1076:
      if (lookahead == '/') ADVANCE(1167);
      END_STATE();
    case 1077:
      if (lookahead == '/') ADVANCE(1168);
      END_STATE();
    case 1078:
      if (lookahead == '/') ADVANCE(1169);
      END_STATE();
    case 1079:
      if (lookahead == '/') ADVANCE(1170);
      END_STATE();
    case 1080:
      if (lookahead == '/') ADVANCE(1171);
      END_STATE();
    case 1081:
      if (lookahead == '/') ADVANCE(1172);
      END_STATE();
    case 1082:
      if (lookahead == '/') ADVANCE(1173);
      END_STATE();
    case 1083:
      if (lookahead == '/') ADVANCE(1174);
      END_STATE();
    case 1084:
      if (lookahead == '/') ADVANCE(1175);
      END_STATE();
    case 1085:
      if (lookahead == '/') ADVANCE(1176);
      END_STATE();
    case 1086:
      if (lookahead == '/') ADVANCE(1177);
      END_STATE();
    case 1087:
      if (lookahead == '/') ADVANCE(1178);
      END_STATE();
    case 1088:
      if (lookahead == '/') ADVANCE(1179);
      END_STATE();
    case 1089:
      if (lookahead == '/') ADVANCE(1180);
      END_STATE();
    case 1090:
      if (lookahead == '/') ADVANCE(1181);
      END_STATE();
    case 1091:
      if (lookahead == '/') ADVANCE(1182);
      END_STATE();
    case 1092:
      if (lookahead == '/') ADVANCE(1183);
      END_STATE();
    case 1093:
      if (lookahead == '/') ADVANCE(1184);
      END_STATE();
    case 1094:
      if (lookahead == '/') ADVANCE(1185);
      END_STATE();
    case 1095:
      if (lookahead == '/') ADVANCE(1186);
      END_STATE();
    case 1096:
      if (lookahead == '/') ADVANCE(1187);
      END_STATE();
    case 1097:
      if (lookahead == '/') ADVANCE(1188);
      END_STATE();
    case 1098:
      if (lookahead == '/') ADVANCE(1189);
      END_STATE();
    case 1099:
      if (lookahead == '/') ADVANCE(1190);
      END_STATE();
    case 1100:
      if (lookahead == '/') ADVANCE(1191);
      END_STATE();
    case 1101:
      if (lookahead == '/') ADVANCE(1192);
      END_STATE();
    case 1102:
      if (lookahead == '/') ADVANCE(1193);
      END_STATE();
    case 1103:
      if (lookahead == '/') ADVANCE(1194);
      END_STATE();
    case 1104:
      if (lookahead == '/') ADVANCE(1195);
      END_STATE();
    case 1105:
      if (lookahead == '/') ADVANCE(1196);
      END_STATE();
    case 1106:
      if (lookahead == '/') ADVANCE(1197);
      END_STATE();
    case 1107:
      if (lookahead == '/') ADVANCE(1198);
      END_STATE();
    case 1108:
      if (lookahead == '/') ADVANCE(1199);
      END_STATE();
    case 1109:
      if (lookahead == '/') ADVANCE(1200);
      END_STATE();
    case 1110:
      if (lookahead == '/') ADVANCE(1201);
      END_STATE();
    case 1111:
      if (lookahead == '/') ADVANCE(1202);
      END_STATE();
    case 1112:
      if (lookahead == '/') ADVANCE(1203);
      END_STATE();
    case 1113:
      if (lookahead == '/') ADVANCE(1204);
      END_STATE();
    case 1114:
      if (lookahead == '/') ADVANCE(1205);
      END_STATE();
    case 1115:
      if (lookahead == '/') ADVANCE(1206);
      END_STATE();
    case 1116:
      if (lookahead == '/') ADVANCE(1207);
      END_STATE();
    case 1117:
      if (lookahead == '/') ADVANCE(1208);
      END_STATE();
    case 1118:
      if (lookahead == '/') ADVANCE(1209);
      END_STATE();
    case 1119:
      if (lookahead == '/') ADVANCE(1210);
      END_STATE();
    case 1120:
      if (lookahead == '/') ADVANCE(1211);
      END_STATE();
    case 1121:
      if (lookahead == '/') ADVANCE(1212);
      END_STATE();
    case 1122:
      if (lookahead == '/') ADVANCE(1213);
      END_STATE();
    case 1123:
      if (lookahead == '/') ADVANCE(1214);
      END_STATE();
    case 1124:
      if (lookahead == '/') ADVANCE(1215);
      END_STATE();
    case 1125:
      if (lookahead == '/') ADVANCE(1216);
      END_STATE();
    case 1126:
      if (lookahead == '/') SKIP(1217);
      END_STATE();
    case 1127:
      if (lookahead == '/') SKIP(1218);
      END_STATE();
    case 1128:
      if (lookahead == '/') SKIP(1219);
      END_STATE();
    case 1129:
      if (lookahead == '/') SKIP(1220);
      END_STATE();
    case 1130:
      if (lookahead == '/') SKIP(1221);
      END_STATE();
    case 1131:
      if (lookahead == '/') SKIP(1222);
      END_STATE();
    case 1132:
      if (lookahead == '/') SKIP(1223);
      END_STATE();
    case 1133:
      if (lookahead == ':') ADVANCE(1224);
      END_STATE();
    case 1134:
      if (lookahead == ':') SKIP(1225);
      END_STATE();
    case 1135:
      if (lookahead == ':') ADVANCE(1228);
      END_STATE();
    case 1136:
      if (lookahead == ':') ADVANCE(1229);
      END_STATE();
    case 1137:
      if (lookahead == ':') ADVANCE(1230);
      END_STATE();
    case 1138:
      if (lookahead == ':') ADVANCE(1231);
      END_STATE();
    case 1139:
      if (lookahead == ':') ADVANCE(1232);
      END_STATE();
    case 1140:
      if (lookahead == ':') ADVANCE(1233);
      END_STATE();
    case 1141:
      if (lookahead == ':') ADVANCE(1234);
      END_STATE();
    case 1142:
      if (lookahead == ':') ADVANCE(1235);
      END_STATE();
    case 1143:
      if (lookahead == ':') ADVANCE(1236);
      END_STATE();
    case 1144:
      if (lookahead == ':') ADVANCE(1237);
      END_STATE();
    case 1145:
      if (lookahead == ':') ADVANCE(1238);
      END_STATE();
    case 1146:
      if (lookahead == ':') ADVANCE(1239);
      END_STATE();
    case 1147:
      if (lookahead == ':') ADVANCE(1240);
      END_STATE();
    case 1148:
      if (lookahead == ':') ADVANCE(1241);
      END_STATE();
    case 1149:
      if (lookahead == ':') ADVANCE(1242);
      END_STATE();
    case 1150:
      if (lookahead == ':') ADVANCE(1243);
      END_STATE();
    case 1151:
      if (lookahead == ':') ADVANCE(1244);
      END_STATE();
    case 1152:
      if (lookahead == ':') ADVANCE(1245);
      END_STATE();
    case 1153:
      if (lookahead == ':') ADVANCE(1246);
      END_STATE();
    case 1154:
      if (lookahead == ':') ADVANCE(1247);
      END_STATE();
    case 1155:
      if (lookahead == ':') ADVANCE(1248);
      END_STATE();
    case 1156:
      if (lookahead == ':') ADVANCE(1249);
      END_STATE();
    case 1157:
      if (lookahead == ':') ADVANCE(1250);
      END_STATE();
    case 1158:
      if (lookahead == ':') ADVANCE(1251);
      END_STATE();
    case 1159:
      if (lookahead == ':') ADVANCE(1252);
      END_STATE();
    case 1160:
      if (lookahead == ':') ADVANCE(1253);
      END_STATE();
    case 1161:
      if (lookahead == ':') ADVANCE(1254);
      END_STATE();
    case 1162:
      if (lookahead == ':') ADVANCE(1255);
      END_STATE();
    case 1163:
      if (lookahead == ':') ADVANCE(1256);
      END_STATE();
    case 1164:
      if (lookahead == ':') ADVANCE(1257);
      END_STATE();
    case 1165:
      if (lookahead == ':') ADVANCE(1258);
      END_STATE();
    case 1166:
      if (lookahead == ':') ADVANCE(1259);
      END_STATE();
    case 1167:
      if (lookahead == ':') ADVANCE(1260);
      END_STATE();
    case 1168:
      if (lookahead == ':') ADVANCE(1261);
      END_STATE();
    case 1169:
      if (lookahead == ':') ADVANCE(1262);
      END_STATE();
    case 1170:
      if (lookahead == ':') ADVANCE(1263);
      END_STATE();
    case 1171:
      if (lookahead == ':') ADVANCE(1264);
      END_STATE();
    case 1172:
      if (lookahead == ':') ADVANCE(1265);
      END_STATE();
    case 1173:
      if (lookahead == ':') ADVANCE(1266);
      END_STATE();
    case 1174:
      if (lookahead == ':') ADVANCE(1267);
      END_STATE();
    case 1175:
      if (lookahead == ':') ADVANCE(1268);
      END_STATE();
    case 1176:
      if (lookahead == ':') ADVANCE(1269);
      END_STATE();
    case 1177:
      if (lookahead == ':') ADVANCE(1270);
      END_STATE();
    case 1178:
      if (lookahead == ':') ADVANCE(1271);
      END_STATE();
    case 1179:
      if (lookahead == ':') ADVANCE(1272);
      END_STATE();
    case 1180:
      if (lookahead == ':') ADVANCE(1273);
      END_STATE();
    case 1181:
      if (lookahead == ':') ADVANCE(1274);
      END_STATE();
    case 1182:
      if (lookahead == ':') ADVANCE(1275);
      END_STATE();
    case 1183:
      if (lookahead == ':') ADVANCE(1276);
      END_STATE();
    case 1184:
      if (lookahead == ':') ADVANCE(1277);
      END_STATE();
    case 1185:
      if (lookahead == ':') ADVANCE(1278);
      END_STATE();
    case 1186:
      if (lookahead == ':') ADVANCE(1279);
      END_STATE();
    case 1187:
      if (lookahead == ':') ADVANCE(1280);
      END_STATE();
    case 1188:
      if (lookahead == ':') ADVANCE(1281);
      END_STATE();
    case 1189:
      if (lookahead == ':') ADVANCE(1282);
      END_STATE();
    case 1190:
      if (lookahead == ':') ADVANCE(1283);
      END_STATE();
    case 1191:
      if (lookahead == ':') ADVANCE(1284);
      END_STATE();
    case 1192:
      if (lookahead == ':') ADVANCE(1285);
      END_STATE();
    case 1193:
      if (lookahead == ':') ADVANCE(1286);
      END_STATE();
    case 1194:
      if (lookahead == ':') ADVANCE(1287);
      END_STATE();
    case 1195:
      if (lookahead == ':') ADVANCE(1288);
      END_STATE();
    case 1196:
      if (lookahead == ':') ADVANCE(1289);
      END_STATE();
    case 1197:
      if (lookahead == ':') ADVANCE(1290);
      END_STATE();
    case 1198:
      if (lookahead == ':') ADVANCE(1291);
      END_STATE();
    case 1199:
      if (lookahead == ':') ADVANCE(1292);
      END_STATE();
    case 1200:
      if (lookahead == ':') ADVANCE(1293);
      END_STATE();
    case 1201:
      if (lookahead == ':') ADVANCE(1294);
      END_STATE();
    case 1202:
      if (lookahead == ':') ADVANCE(1295);
      END_STATE();
    case 1203:
      if (lookahead == ':') ADVANCE(1296);
      END_STATE();
    case 1204:
      if (lookahead == ':') ADVANCE(1297);
      END_STATE();
    case 1205:
      if (lookahead == ':') ADVANCE(1298);
      END_STATE();
    case 1206:
      if (lookahead == ':') ADVANCE(1299);
      END_STATE();
    case 1207:
      if (lookahead == ':') ADVANCE(1300);
      END_STATE();
    case 1208:
      if (lookahead == ':') ADVANCE(1301);
      END_STATE();
    case 1209:
      if (lookahead == ':') ADVANCE(1302);
      END_STATE();
    case 1210:
      if (lookahead == ':') ADVANCE(1303);
      END_STATE();
    case 1211:
      if (lookahead == ':') ADVANCE(1304);
      END_STATE();
    case 1212:
      if (lookahead == ':') ADVANCE(1305);
      END_STATE();
    case 1213:
      if (lookahead == ':') ADVANCE(1306);
      END_STATE();
    case 1214:
      if (lookahead == ':') ADVANCE(1307);
      END_STATE();
    case 1215:
      if (lookahead == ':') ADVANCE(1308);
      END_STATE();
    case 1216:
      if (lookahead == ':') ADVANCE(1309);
      END_STATE();
    case 1217:
      if (lookahead == ':') SKIP(1310);
      END_STATE();
    case 1218:
      if (lookahead == ':') SKIP(1311);
      END_STATE();
    case 1219:
      if (lookahead == ':') SKIP(1312);
      END_STATE();
    case 1220:
      if (lookahead == ':') SKIP(1313);
      END_STATE();
    case 1221:
      if (lookahead == ':') SKIP(1314);
      END_STATE();
    case 1222:
      if (lookahead == ':') SKIP(1315);
      END_STATE();
    case 1223:
      if (lookahead == ':') SKIP(1316);
      END_STATE();
    case 1224:
      if (lookahead == '<') ADVANCE(1319);
      END_STATE();
    case 1225:
      if (lookahead == '<') SKIP(1317);
      END_STATE();
    case 1226:
      if (lookahead == '<') ADVANCE(2397);
      END_STATE();
    case 1227:
      if (lookahead == '<') ADVANCE(2397);
      if (lookahead == '=') ADVANCE(1226);
      if (lookahead == '>') ADVANCE(2410);
      END_STATE();
    case 1228:
      if (lookahead == '<') ADVANCE(1320);
      END_STATE();
    case 1229:
      if (lookahead == '<') ADVANCE(1321);
      END_STATE();
    case 1230:
      if (lookahead == '<') ADVANCE(1322);
      END_STATE();
    case 1231:
      if (lookahead == '<') ADVANCE(1323);
      END_STATE();
    case 1232:
      if (lookahead == '<') ADVANCE(1324);
      END_STATE();
    case 1233:
      if (lookahead == '<') ADVANCE(1325);
      END_STATE();
    case 1234:
      if (lookahead == '<') ADVANCE(1326);
      END_STATE();
    case 1235:
      if (lookahead == '<') ADVANCE(1327);
      END_STATE();
    case 1236:
      if (lookahead == '<') ADVANCE(1328);
      END_STATE();
    case 1237:
      if (lookahead == '<') ADVANCE(1329);
      END_STATE();
    case 1238:
      if (lookahead == '<') ADVANCE(1330);
      END_STATE();
    case 1239:
      if (lookahead == '<') ADVANCE(1331);
      END_STATE();
    case 1240:
      if (lookahead == '<') ADVANCE(1332);
      END_STATE();
    case 1241:
      if (lookahead == '<') ADVANCE(1333);
      END_STATE();
    case 1242:
      if (lookahead == '<') ADVANCE(1334);
      END_STATE();
    case 1243:
      if (lookahead == '<') ADVANCE(1335);
      END_STATE();
    case 1244:
      if (lookahead == '<') ADVANCE(1336);
      END_STATE();
    case 1245:
      if (lookahead == '<') ADVANCE(1337);
      END_STATE();
    case 1246:
      if (lookahead == '<') ADVANCE(1338);
      END_STATE();
    case 1247:
      if (lookahead == '<') ADVANCE(1339);
      END_STATE();
    case 1248:
      if (lookahead == '<') ADVANCE(1340);
      END_STATE();
    case 1249:
      if (lookahead == '<') ADVANCE(1341);
      END_STATE();
    case 1250:
      if (lookahead == '<') ADVANCE(1342);
      END_STATE();
    case 1251:
      if (lookahead == '<') ADVANCE(1343);
      END_STATE();
    case 1252:
      if (lookahead == '<') ADVANCE(1344);
      END_STATE();
    case 1253:
      if (lookahead == '<') ADVANCE(1345);
      END_STATE();
    case 1254:
      if (lookahead == '<') ADVANCE(1346);
      END_STATE();
    case 1255:
      if (lookahead == '<') ADVANCE(1347);
      END_STATE();
    case 1256:
      if (lookahead == '<') ADVANCE(1348);
      END_STATE();
    case 1257:
      if (lookahead == '<') ADVANCE(1349);
      END_STATE();
    case 1258:
      if (lookahead == '<') ADVANCE(1350);
      END_STATE();
    case 1259:
      if (lookahead == '<') ADVANCE(1351);
      END_STATE();
    case 1260:
      if (lookahead == '<') ADVANCE(1352);
      END_STATE();
    case 1261:
      if (lookahead == '<') ADVANCE(1353);
      END_STATE();
    case 1262:
      if (lookahead == '<') ADVANCE(1354);
      END_STATE();
    case 1263:
      if (lookahead == '<') ADVANCE(1355);
      END_STATE();
    case 1264:
      if (lookahead == '<') ADVANCE(1356);
      END_STATE();
    case 1265:
      if (lookahead == '<') ADVANCE(1357);
      END_STATE();
    case 1266:
      if (lookahead == '<') ADVANCE(1358);
      END_STATE();
    case 1267:
      if (lookahead == '<') ADVANCE(1359);
      END_STATE();
    case 1268:
      if (lookahead == '<') ADVANCE(1360);
      END_STATE();
    case 1269:
      if (lookahead == '<') ADVANCE(1361);
      END_STATE();
    case 1270:
      if (lookahead == '<') ADVANCE(1362);
      END_STATE();
    case 1271:
      if (lookahead == '<') ADVANCE(1363);
      END_STATE();
    case 1272:
      if (lookahead == '<') ADVANCE(1364);
      END_STATE();
    case 1273:
      if (lookahead == '<') ADVANCE(1365);
      END_STATE();
    case 1274:
      if (lookahead == '<') ADVANCE(1366);
      END_STATE();
    case 1275:
      if (lookahead == '<') ADVANCE(1367);
      END_STATE();
    case 1276:
      if (lookahead == '<') ADVANCE(1368);
      END_STATE();
    case 1277:
      if (lookahead == '<') ADVANCE(1369);
      END_STATE();
    case 1278:
      if (lookahead == '<') ADVANCE(1370);
      END_STATE();
    case 1279:
      if (lookahead == '<') ADVANCE(1371);
      END_STATE();
    case 1280:
      if (lookahead == '<') ADVANCE(1372);
      END_STATE();
    case 1281:
      if (lookahead == '<') ADVANCE(1373);
      END_STATE();
    case 1282:
      if (lookahead == '<') ADVANCE(1374);
      END_STATE();
    case 1283:
      if (lookahead == '<') ADVANCE(1375);
      END_STATE();
    case 1284:
      if (lookahead == '<') ADVANCE(1376);
      END_STATE();
    case 1285:
      if (lookahead == '<') ADVANCE(1377);
      END_STATE();
    case 1286:
      if (lookahead == '<') ADVANCE(1378);
      END_STATE();
    case 1287:
      if (lookahead == '<') ADVANCE(1379);
      END_STATE();
    case 1288:
      if (lookahead == '<') ADVANCE(1380);
      END_STATE();
    case 1289:
      if (lookahead == '<') ADVANCE(1381);
      END_STATE();
    case 1290:
      if (lookahead == '<') ADVANCE(1382);
      END_STATE();
    case 1291:
      if (lookahead == '<') ADVANCE(1383);
      END_STATE();
    case 1292:
      if (lookahead == '<') ADVANCE(1384);
      END_STATE();
    case 1293:
      if (lookahead == '<') ADVANCE(1385);
      END_STATE();
    case 1294:
      if (lookahead == '<') ADVANCE(1386);
      END_STATE();
    case 1295:
      if (lookahead == '<') ADVANCE(1387);
      END_STATE();
    case 1296:
      if (lookahead == '<') ADVANCE(1388);
      END_STATE();
    case 1297:
      if (lookahead == '<') ADVANCE(1389);
      END_STATE();
    case 1298:
      if (lookahead == '<') ADVANCE(1390);
      END_STATE();
    case 1299:
      if (lookahead == '<') ADVANCE(1391);
      END_STATE();
    case 1300:
      if (lookahead == '<') ADVANCE(1392);
      END_STATE();
    case 1301:
      if (lookahead == '<') ADVANCE(1393);
      END_STATE();
    case 1302:
      if (lookahead == '<') ADVANCE(1394);
      END_STATE();
    case 1303:
      if (lookahead == '<') ADVANCE(1395);
      END_STATE();
    case 1304:
      if (lookahead == '<') ADVANCE(1396);
      END_STATE();
    case 1305:
      if (lookahead == '<') ADVANCE(1397);
      END_STATE();
    case 1306:
      if (lookahead == '<') ADVANCE(1398);
      END_STATE();
    case 1307:
      if (lookahead == '<') ADVANCE(1399);
      END_STATE();
    case 1308:
      if (lookahead == '<') ADVANCE(1400);
      END_STATE();
    case 1309:
      if (lookahead == '<') ADVANCE(1401);
      END_STATE();
    case 1310:
      if (lookahead == '<') SKIP(1402);
      END_STATE();
    case 1311:
      if (lookahead == '<') SKIP(1403);
      END_STATE();
    case 1312:
      if (lookahead == '<') SKIP(1404);
      END_STATE();
    case 1313:
      if (lookahead == '<') SKIP(1405);
      END_STATE();
    case 1314:
      if (lookahead == '<') SKIP(1406);
      END_STATE();
    case 1315:
      if (lookahead == '<') SKIP(1407);
      END_STATE();
    case 1316:
      if (lookahead == '<') SKIP(1408);
      END_STATE();
    case 1317:
      if (lookahead == '=') SKIP(1411);
      END_STATE();
    case 1318:
      if (lookahead == '=') ADVANCE(2397);
      END_STATE();
    case 1319:
      if (lookahead == '=') ADVANCE(1410);
      END_STATE();
    case 1320:
      if (lookahead == '=') ADVANCE(1412);
      END_STATE();
    case 1321:
      if (lookahead == '=') ADVANCE(1414);
      END_STATE();
    case 1322:
      if (lookahead == '=') ADVANCE(1416);
      END_STATE();
    case 1323:
      if (lookahead == '=') ADVANCE(1418);
      END_STATE();
    case 1324:
      if (lookahead == '=') ADVANCE(1420);
      END_STATE();
    case 1325:
      if (lookahead == '=') ADVANCE(1422);
      END_STATE();
    case 1326:
      if (lookahead == '=') ADVANCE(1424);
      END_STATE();
    case 1327:
      if (lookahead == '=') ADVANCE(1426);
      END_STATE();
    case 1328:
      if (lookahead == '=') ADVANCE(1427);
      END_STATE();
    case 1329:
      if (lookahead == '=') ADVANCE(1428);
      END_STATE();
    case 1330:
      if (lookahead == '=') ADVANCE(1429);
      END_STATE();
    case 1331:
      if (lookahead == '=') ADVANCE(1430);
      END_STATE();
    case 1332:
      if (lookahead == '=') ADVANCE(1431);
      END_STATE();
    case 1333:
      if (lookahead == '=') ADVANCE(1432);
      END_STATE();
    case 1334:
      if (lookahead == '=') ADVANCE(1433);
      END_STATE();
    case 1335:
      if (lookahead == '=') ADVANCE(1434);
      END_STATE();
    case 1336:
      if (lookahead == '=') ADVANCE(1435);
      END_STATE();
    case 1337:
      if (lookahead == '=') ADVANCE(1436);
      END_STATE();
    case 1338:
      if (lookahead == '=') ADVANCE(1437);
      END_STATE();
    case 1339:
      if (lookahead == '=') ADVANCE(1438);
      END_STATE();
    case 1340:
      if (lookahead == '=') ADVANCE(1439);
      END_STATE();
    case 1341:
      if (lookahead == '=') ADVANCE(1440);
      END_STATE();
    case 1342:
      if (lookahead == '=') ADVANCE(1441);
      END_STATE();
    case 1343:
      if (lookahead == '=') ADVANCE(1442);
      END_STATE();
    case 1344:
      if (lookahead == '=') ADVANCE(1443);
      END_STATE();
    case 1345:
      if (lookahead == '=') ADVANCE(1444);
      END_STATE();
    case 1346:
      if (lookahead == '=') ADVANCE(1445);
      END_STATE();
    case 1347:
      if (lookahead == '=') ADVANCE(1446);
      END_STATE();
    case 1348:
      if (lookahead == '=') ADVANCE(1447);
      END_STATE();
    case 1349:
      if (lookahead == '=') ADVANCE(1448);
      END_STATE();
    case 1350:
      if (lookahead == '=') ADVANCE(1449);
      END_STATE();
    case 1351:
      if (lookahead == '=') ADVANCE(1450);
      END_STATE();
    case 1352:
      if (lookahead == '=') ADVANCE(1451);
      END_STATE();
    case 1353:
      if (lookahead == '=') ADVANCE(1452);
      END_STATE();
    case 1354:
      if (lookahead == '=') ADVANCE(1453);
      END_STATE();
    case 1355:
      if (lookahead == '=') ADVANCE(1454);
      END_STATE();
    case 1356:
      if (lookahead == '=') ADVANCE(1455);
      END_STATE();
    case 1357:
      if (lookahead == '=') ADVANCE(1456);
      END_STATE();
    case 1358:
      if (lookahead == '=') ADVANCE(1457);
      END_STATE();
    case 1359:
      if (lookahead == '=') ADVANCE(1458);
      END_STATE();
    case 1360:
      if (lookahead == '=') ADVANCE(1459);
      END_STATE();
    case 1361:
      if (lookahead == '=') ADVANCE(1460);
      END_STATE();
    case 1362:
      if (lookahead == '=') ADVANCE(1461);
      END_STATE();
    case 1363:
      if (lookahead == '=') ADVANCE(1462);
      END_STATE();
    case 1364:
      if (lookahead == '=') ADVANCE(1463);
      END_STATE();
    case 1365:
      if (lookahead == '=') ADVANCE(1464);
      END_STATE();
    case 1366:
      if (lookahead == '=') ADVANCE(1465);
      END_STATE();
    case 1367:
      if (lookahead == '=') ADVANCE(1466);
      END_STATE();
    case 1368:
      if (lookahead == '=') ADVANCE(1467);
      END_STATE();
    case 1369:
      if (lookahead == '=') ADVANCE(1468);
      END_STATE();
    case 1370:
      if (lookahead == '=') ADVANCE(1469);
      END_STATE();
    case 1371:
      if (lookahead == '=') ADVANCE(1470);
      END_STATE();
    case 1372:
      if (lookahead == '=') ADVANCE(1471);
      END_STATE();
    case 1373:
      if (lookahead == '=') ADVANCE(1472);
      END_STATE();
    case 1374:
      if (lookahead == '=') ADVANCE(1473);
      END_STATE();
    case 1375:
      if (lookahead == '=') ADVANCE(1474);
      END_STATE();
    case 1376:
      if (lookahead == '=') ADVANCE(1475);
      END_STATE();
    case 1377:
      if (lookahead == '=') ADVANCE(1476);
      END_STATE();
    case 1378:
      if (lookahead == '=') ADVANCE(1477);
      END_STATE();
    case 1379:
      if (lookahead == '=') ADVANCE(1478);
      END_STATE();
    case 1380:
      if (lookahead == '=') ADVANCE(1479);
      END_STATE();
    case 1381:
      if (lookahead == '=') ADVANCE(1480);
      END_STATE();
    case 1382:
      if (lookahead == '=') ADVANCE(1481);
      END_STATE();
    case 1383:
      if (lookahead == '=') ADVANCE(1482);
      END_STATE();
    case 1384:
      if (lookahead == '=') ADVANCE(1483);
      END_STATE();
    case 1385:
      if (lookahead == '=') ADVANCE(1484);
      END_STATE();
    case 1386:
      if (lookahead == '=') ADVANCE(1485);
      END_STATE();
    case 1387:
      if (lookahead == '=') ADVANCE(1486);
      END_STATE();
    case 1388:
      if (lookahead == '=') ADVANCE(1487);
      END_STATE();
    case 1389:
      if (lookahead == '=') ADVANCE(1488);
      END_STATE();
    case 1390:
      if (lookahead == '=') ADVANCE(1489);
      END_STATE();
    case 1391:
      if (lookahead == '=') ADVANCE(1490);
      END_STATE();
    case 1392:
      if (lookahead == '=') ADVANCE(1491);
      END_STATE();
    case 1393:
      if (lookahead == '=') ADVANCE(1492);
      END_STATE();
    case 1394:
      if (lookahead == '=') ADVANCE(1493);
      END_STATE();
    case 1395:
      if (lookahead == '=') ADVANCE(1494);
      END_STATE();
    case 1396:
      if (lookahead == '=') ADVANCE(1495);
      END_STATE();
    case 1397:
      if (lookahead == '=') ADVANCE(1496);
      END_STATE();
    case 1398:
      if (lookahead == '=') ADVANCE(1497);
      END_STATE();
    case 1399:
      if (lookahead == '=') ADVANCE(1498);
      END_STATE();
    case 1400:
      if (lookahead == '=') ADVANCE(1499);
      END_STATE();
    case 1401:
      if (lookahead == '=') ADVANCE(1500);
      END_STATE();
    case 1402:
      if (lookahead == '=') SKIP(1413);
      END_STATE();
    case 1403:
      if (lookahead == '=') SKIP(1415);
      END_STATE();
    case 1404:
      if (lookahead == '=') SKIP(1417);
      END_STATE();
    case 1405:
      if (lookahead == '=') SKIP(1419);
      END_STATE();
    case 1406:
      if (lookahead == '=') SKIP(1421);
      END_STATE();
    case 1407:
      if (lookahead == '=') SKIP(1423);
      END_STATE();
    case 1408:
      if (lookahead == '=') SKIP(1425);
      END_STATE();
    case 1409:
      if (lookahead == '>') ADVANCE(2382);
      END_STATE();
    case 1410:
      if (lookahead == '>') ADVANCE(1501);
      END_STATE();
    case 1411:
      if (lookahead == '>') SKIP(1502);
      END_STATE();
    case 1412:
      if (lookahead == '>') ADVANCE(1503);
      END_STATE();
    case 1413:
      if (lookahead == '>') SKIP(1504);
      END_STATE();
    case 1414:
      if (lookahead == '>') ADVANCE(1505);
      END_STATE();
    case 1415:
      if (lookahead == '>') SKIP(1506);
      END_STATE();
    case 1416:
      if (lookahead == '>') ADVANCE(1507);
      END_STATE();
    case 1417:
      if (lookahead == '>') SKIP(1508);
      END_STATE();
    case 1418:
      if (lookahead == '>') ADVANCE(1509);
      END_STATE();
    case 1419:
      if (lookahead == '>') SKIP(1510);
      END_STATE();
    case 1420:
      if (lookahead == '>') ADVANCE(1511);
      END_STATE();
    case 1421:
      if (lookahead == '>') SKIP(1512);
      END_STATE();
    case 1422:
      if (lookahead == '>') ADVANCE(1513);
      END_STATE();
    case 1423:
      if (lookahead == '>') SKIP(1514);
      END_STATE();
    case 1424:
      if (lookahead == '>') ADVANCE(1515);
      END_STATE();
    case 1425:
      if (lookahead == '>') SKIP(1516);
      END_STATE();
    case 1426:
      if (lookahead == '>') ADVANCE(1517);
      END_STATE();
    case 1427:
      if (lookahead == '>') ADVANCE(1518);
      END_STATE();
    case 1428:
      if (lookahead == '>') ADVANCE(1519);
      END_STATE();
    case 1429:
      if (lookahead == '>') ADVANCE(1520);
      END_STATE();
    case 1430:
      if (lookahead == '>') ADVANCE(1521);
      END_STATE();
    case 1431:
      if (lookahead == '>') ADVANCE(1522);
      END_STATE();
    case 1432:
      if (lookahead == '>') ADVANCE(1523);
      END_STATE();
    case 1433:
      if (lookahead == '>') ADVANCE(1524);
      END_STATE();
    case 1434:
      if (lookahead == '>') ADVANCE(1525);
      END_STATE();
    case 1435:
      if (lookahead == '>') ADVANCE(1526);
      END_STATE();
    case 1436:
      if (lookahead == '>') ADVANCE(1527);
      END_STATE();
    case 1437:
      if (lookahead == '>') ADVANCE(1528);
      END_STATE();
    case 1438:
      if (lookahead == '>') ADVANCE(1529);
      END_STATE();
    case 1439:
      if (lookahead == '>') ADVANCE(1530);
      END_STATE();
    case 1440:
      if (lookahead == '>') ADVANCE(1531);
      END_STATE();
    case 1441:
      if (lookahead == '>') ADVANCE(1532);
      END_STATE();
    case 1442:
      if (lookahead == '>') ADVANCE(1533);
      END_STATE();
    case 1443:
      if (lookahead == '>') ADVANCE(1534);
      END_STATE();
    case 1444:
      if (lookahead == '>') ADVANCE(1535);
      END_STATE();
    case 1445:
      if (lookahead == '>') ADVANCE(1536);
      END_STATE();
    case 1446:
      if (lookahead == '>') ADVANCE(1537);
      END_STATE();
    case 1447:
      if (lookahead == '>') ADVANCE(1538);
      END_STATE();
    case 1448:
      if (lookahead == '>') ADVANCE(1539);
      END_STATE();
    case 1449:
      if (lookahead == '>') ADVANCE(1540);
      END_STATE();
    case 1450:
      if (lookahead == '>') ADVANCE(1541);
      END_STATE();
    case 1451:
      if (lookahead == '>') ADVANCE(1542);
      END_STATE();
    case 1452:
      if (lookahead == '>') ADVANCE(1543);
      END_STATE();
    case 1453:
      if (lookahead == '>') ADVANCE(1544);
      END_STATE();
    case 1454:
      if (lookahead == '>') ADVANCE(1545);
      END_STATE();
    case 1455:
      if (lookahead == '>') ADVANCE(1546);
      END_STATE();
    case 1456:
      if (lookahead == '>') ADVANCE(1547);
      END_STATE();
    case 1457:
      if (lookahead == '>') ADVANCE(1548);
      END_STATE();
    case 1458:
      if (lookahead == '>') ADVANCE(1549);
      END_STATE();
    case 1459:
      if (lookahead == '>') ADVANCE(1550);
      END_STATE();
    case 1460:
      if (lookahead == '>') ADVANCE(1551);
      END_STATE();
    case 1461:
      if (lookahead == '>') ADVANCE(1552);
      END_STATE();
    case 1462:
      if (lookahead == '>') ADVANCE(1553);
      END_STATE();
    case 1463:
      if (lookahead == '>') ADVANCE(1554);
      END_STATE();
    case 1464:
      if (lookahead == '>') ADVANCE(1555);
      END_STATE();
    case 1465:
      if (lookahead == '>') ADVANCE(1556);
      END_STATE();
    case 1466:
      if (lookahead == '>') ADVANCE(1557);
      END_STATE();
    case 1467:
      if (lookahead == '>') ADVANCE(1558);
      END_STATE();
    case 1468:
      if (lookahead == '>') ADVANCE(1559);
      END_STATE();
    case 1469:
      if (lookahead == '>') ADVANCE(1560);
      END_STATE();
    case 1470:
      if (lookahead == '>') ADVANCE(1561);
      END_STATE();
    case 1471:
      if (lookahead == '>') ADVANCE(1562);
      END_STATE();
    case 1472:
      if (lookahead == '>') ADVANCE(1563);
      END_STATE();
    case 1473:
      if (lookahead == '>') ADVANCE(1564);
      END_STATE();
    case 1474:
      if (lookahead == '>') ADVANCE(1565);
      END_STATE();
    case 1475:
      if (lookahead == '>') ADVANCE(1566);
      END_STATE();
    case 1476:
      if (lookahead == '>') ADVANCE(1567);
      END_STATE();
    case 1477:
      if (lookahead == '>') ADVANCE(1568);
      END_STATE();
    case 1478:
      if (lookahead == '>') ADVANCE(1569);
      END_STATE();
    case 1479:
      if (lookahead == '>') ADVANCE(1570);
      END_STATE();
    case 1480:
      if (lookahead == '>') ADVANCE(1571);
      END_STATE();
    case 1481:
      if (lookahead == '>') ADVANCE(1572);
      END_STATE();
    case 1482:
      if (lookahead == '>') ADVANCE(1573);
      END_STATE();
    case 1483:
      if (lookahead == '>') ADVANCE(1574);
      END_STATE();
    case 1484:
      if (lookahead == '>') ADVANCE(1575);
      END_STATE();
    case 1485:
      if (lookahead == '>') ADVANCE(1576);
      END_STATE();
    case 1486:
      if (lookahead == '>') ADVANCE(1577);
      END_STATE();
    case 1487:
      if (lookahead == '>') ADVANCE(1578);
      END_STATE();
    case 1488:
      if (lookahead == '>') ADVANCE(1579);
      END_STATE();
    case 1489:
      if (lookahead == '>') ADVANCE(1580);
      END_STATE();
    case 1490:
      if (lookahead == '>') ADVANCE(1581);
      END_STATE();
    case 1491:
      if (lookahead == '>') ADVANCE(1582);
      END_STATE();
    case 1492:
      if (lookahead == '>') ADVANCE(1583);
      END_STATE();
    case 1493:
      if (lookahead == '>') ADVANCE(1584);
      END_STATE();
    case 1494:
      if (lookahead == '>') ADVANCE(1585);
      END_STATE();
    case 1495:
      if (lookahead == '>') ADVANCE(1586);
      END_STATE();
    case 1496:
      if (lookahead == '>') ADVANCE(1587);
      END_STATE();
    case 1497:
      if (lookahead == '>') ADVANCE(1588);
      END_STATE();
    case 1498:
      if (lookahead == '>') ADVANCE(1589);
      END_STATE();
    case 1499:
      if (lookahead == '>') ADVANCE(1590);
      END_STATE();
    case 1500:
      if (lookahead == '>') ADVANCE(1591);
      END_STATE();
    case 1501:
      if (lookahead == '?') ADVANCE(1592);
      END_STATE();
    case 1502:
      if (lookahead == '?') SKIP(1593);
      END_STATE();
    case 1503:
      if (lookahead == '?') ADVANCE(1594);
      END_STATE();
    case 1504:
      if (lookahead == '?') SKIP(1595);
      END_STATE();
    case 1505:
      if (lookahead == '?') ADVANCE(1596);
      END_STATE();
    case 1506:
      if (lookahead == '?') SKIP(1597);
      END_STATE();
    case 1507:
      if (lookahead == '?') ADVANCE(1598);
      END_STATE();
    case 1508:
      if (lookahead == '?') SKIP(1599);
      END_STATE();
    case 1509:
      if (lookahead == '?') ADVANCE(1600);
      END_STATE();
    case 1510:
      if (lookahead == '?') SKIP(1601);
      END_STATE();
    case 1511:
      if (lookahead == '?') ADVANCE(1602);
      END_STATE();
    case 1512:
      if (lookahead == '?') SKIP(1603);
      END_STATE();
    case 1513:
      if (lookahead == '?') ADVANCE(1604);
      END_STATE();
    case 1514:
      if (lookahead == '?') SKIP(1605);
      END_STATE();
    case 1515:
      if (lookahead == '?') ADVANCE(1606);
      END_STATE();
    case 1516:
      if (lookahead == '?') SKIP(1607);
      END_STATE();
    case 1517:
      if (lookahead == '?') ADVANCE(1608);
      END_STATE();
    case 1518:
      if (lookahead == '?') ADVANCE(1609);
      END_STATE();
    case 1519:
      if (lookahead == '?') ADVANCE(1610);
      END_STATE();
    case 1520:
      if (lookahead == '?') ADVANCE(1611);
      END_STATE();
    case 1521:
      if (lookahead == '?') ADVANCE(1612);
      END_STATE();
    case 1522:
      if (lookahead == '?') ADVANCE(1613);
      END_STATE();
    case 1523:
      if (lookahead == '?') ADVANCE(1614);
      END_STATE();
    case 1524:
      if (lookahead == '?') ADVANCE(1615);
      END_STATE();
    case 1525:
      if (lookahead == '?') ADVANCE(1616);
      END_STATE();
    case 1526:
      if (lookahead == '?') ADVANCE(1617);
      END_STATE();
    case 1527:
      if (lookahead == '?') ADVANCE(1618);
      END_STATE();
    case 1528:
      if (lookahead == '?') ADVANCE(1619);
      END_STATE();
    case 1529:
      if (lookahead == '?') ADVANCE(1620);
      END_STATE();
    case 1530:
      if (lookahead == '?') ADVANCE(1621);
      END_STATE();
    case 1531:
      if (lookahead == '?') ADVANCE(1622);
      END_STATE();
    case 1532:
      if (lookahead == '?') ADVANCE(1623);
      END_STATE();
    case 1533:
      if (lookahead == '?') ADVANCE(1624);
      END_STATE();
    case 1534:
      if (lookahead == '?') ADVANCE(1625);
      END_STATE();
    case 1535:
      if (lookahead == '?') ADVANCE(1626);
      END_STATE();
    case 1536:
      if (lookahead == '?') ADVANCE(1627);
      END_STATE();
    case 1537:
      if (lookahead == '?') ADVANCE(1628);
      END_STATE();
    case 1538:
      if (lookahead == '?') ADVANCE(1629);
      END_STATE();
    case 1539:
      if (lookahead == '?') ADVANCE(1630);
      END_STATE();
    case 1540:
      if (lookahead == '?') ADVANCE(1631);
      END_STATE();
    case 1541:
      if (lookahead == '?') ADVANCE(1632);
      END_STATE();
    case 1542:
      if (lookahead == '?') ADVANCE(1633);
      END_STATE();
    case 1543:
      if (lookahead == '?') ADVANCE(1634);
      END_STATE();
    case 1544:
      if (lookahead == '?') ADVANCE(1635);
      END_STATE();
    case 1545:
      if (lookahead == '?') ADVANCE(1636);
      END_STATE();
    case 1546:
      if (lookahead == '?') ADVANCE(1637);
      END_STATE();
    case 1547:
      if (lookahead == '?') ADVANCE(1638);
      END_STATE();
    case 1548:
      if (lookahead == '?') ADVANCE(1639);
      END_STATE();
    case 1549:
      if (lookahead == '?') ADVANCE(1640);
      END_STATE();
    case 1550:
      if (lookahead == '?') ADVANCE(1641);
      END_STATE();
    case 1551:
      if (lookahead == '?') ADVANCE(1642);
      END_STATE();
    case 1552:
      if (lookahead == '?') ADVANCE(1643);
      END_STATE();
    case 1553:
      if (lookahead == '?') ADVANCE(1644);
      END_STATE();
    case 1554:
      if (lookahead == '?') ADVANCE(1645);
      END_STATE();
    case 1555:
      if (lookahead == '?') ADVANCE(1646);
      END_STATE();
    case 1556:
      if (lookahead == '?') ADVANCE(1647);
      END_STATE();
    case 1557:
      if (lookahead == '?') ADVANCE(1648);
      END_STATE();
    case 1558:
      if (lookahead == '?') ADVANCE(1649);
      END_STATE();
    case 1559:
      if (lookahead == '?') ADVANCE(1650);
      END_STATE();
    case 1560:
      if (lookahead == '?') ADVANCE(1651);
      END_STATE();
    case 1561:
      if (lookahead == '?') ADVANCE(1652);
      END_STATE();
    case 1562:
      if (lookahead == '?') ADVANCE(1653);
      END_STATE();
    case 1563:
      if (lookahead == '?') ADVANCE(1654);
      END_STATE();
    case 1564:
      if (lookahead == '?') ADVANCE(1655);
      END_STATE();
    case 1565:
      if (lookahead == '?') ADVANCE(1656);
      END_STATE();
    case 1566:
      if (lookahead == '?') ADVANCE(1657);
      END_STATE();
    case 1567:
      if (lookahead == '?') ADVANCE(1658);
      END_STATE();
    case 1568:
      if (lookahead == '?') ADVANCE(1659);
      END_STATE();
    case 1569:
      if (lookahead == '?') ADVANCE(1660);
      END_STATE();
    case 1570:
      if (lookahead == '?') ADVANCE(1661);
      END_STATE();
    case 1571:
      if (lookahead == '?') ADVANCE(1662);
      END_STATE();
    case 1572:
      if (lookahead == '?') ADVANCE(1663);
      END_STATE();
    case 1573:
      if (lookahead == '?') ADVANCE(1664);
      END_STATE();
    case 1574:
      if (lookahead == '?') ADVANCE(1665);
      END_STATE();
    case 1575:
      if (lookahead == '?') ADVANCE(1666);
      END_STATE();
    case 1576:
      if (lookahead == '?') ADVANCE(1667);
      END_STATE();
    case 1577:
      if (lookahead == '?') ADVANCE(1668);
      END_STATE();
    case 1578:
      if (lookahead == '?') ADVANCE(1669);
      END_STATE();
    case 1579:
      if (lookahead == '?') ADVANCE(1670);
      END_STATE();
    case 1580:
      if (lookahead == '?') ADVANCE(1671);
      END_STATE();
    case 1581:
      if (lookahead == '?') ADVANCE(1672);
      END_STATE();
    case 1582:
      if (lookahead == '?') ADVANCE(1673);
      END_STATE();
    case 1583:
      if (lookahead == '?') ADVANCE(1674);
      END_STATE();
    case 1584:
      if (lookahead == '?') ADVANCE(1675);
      END_STATE();
    case 1585:
      if (lookahead == '?') ADVANCE(1676);
      END_STATE();
    case 1586:
      if (lookahead == '?') ADVANCE(1677);
      END_STATE();
    case 1587:
      if (lookahead == '?') ADVANCE(1678);
      END_STATE();
    case 1588:
      if (lookahead == '?') ADVANCE(1679);
      END_STATE();
    case 1589:
      if (lookahead == '?') ADVANCE(1680);
      END_STATE();
    case 1590:
      if (lookahead == '?') ADVANCE(1681);
      END_STATE();
    case 1591:
      if (lookahead == '?') ADVANCE(1682);
      END_STATE();
    case 1592:
      if (lookahead == '@') ADVANCE(1685);
      END_STATE();
    case 1593:
      if (lookahead == '@') SKIP(1686);
      END_STATE();
    case 1594:
      if (lookahead == '@') ADVANCE(1687);
      END_STATE();
    case 1595:
      if (lookahead == '@') SKIP(1688);
      END_STATE();
    case 1596:
      if (lookahead == '@') ADVANCE(1689);
      END_STATE();
    case 1597:
      if (lookahead == '@') SKIP(1690);
      END_STATE();
    case 1598:
      if (lookahead == '@') ADVANCE(1691);
      END_STATE();
    case 1599:
      if (lookahead == '@') SKIP(1746);
      END_STATE();
    case 1600:
      if (lookahead == '@') ADVANCE(1693);
      END_STATE();
    case 1601:
      if (lookahead == '@') SKIP(1692);
      END_STATE();
    case 1602:
      if (lookahead == '@') ADVANCE(1745);
      END_STATE();
    case 1603:
      if (lookahead == '@') SKIP(1750);
      END_STATE();
    case 1604:
      if (lookahead == '@') ADVANCE(1695);
      END_STATE();
    case 1605:
      if (lookahead == '@') SKIP(1694);
      END_STATE();
    case 1606:
      if (lookahead == '@') ADVANCE(1696);
      END_STATE();
    case 1607:
      if (lookahead == '@') SKIP(1752);
      END_STATE();
    case 1608:
      if (lookahead == '@') ADVANCE(1697);
      END_STATE();
    case 1609:
      if (lookahead == '@') ADVANCE(1749);
      END_STATE();
    case 1610:
      if (lookahead == '@') ADVANCE(1751);
      END_STATE();
    case 1611:
      if (lookahead == '@') ADVANCE(1698);
      END_STATE();
    case 1612:
      if (lookahead == '@') ADVANCE(1699);
      END_STATE();
    case 1613:
      if (lookahead == '@') ADVANCE(1700);
      END_STATE();
    case 1614:
      if (lookahead == '@') ADVANCE(1701);
      END_STATE();
    case 1615:
      if (lookahead == '@') ADVANCE(1702);
      END_STATE();
    case 1616:
      if (lookahead == '@') ADVANCE(1703);
      END_STATE();
    case 1617:
      if (lookahead == '@') ADVANCE(1753);
      END_STATE();
    case 1618:
      if (lookahead == '@') ADVANCE(1704);
      END_STATE();
    case 1619:
      if (lookahead == '@') ADVANCE(1754);
      END_STATE();
    case 1620:
      if (lookahead == '@') ADVANCE(1705);
      END_STATE();
    case 1621:
      if (lookahead == '@') ADVANCE(1706);
      END_STATE();
    case 1622:
      if (lookahead == '@') ADVANCE(1707);
      END_STATE();
    case 1623:
      if (lookahead == '@') ADVANCE(1708);
      END_STATE();
    case 1624:
      if (lookahead == '@') ADVANCE(1709);
      END_STATE();
    case 1625:
      if (lookahead == '@') ADVANCE(1755);
      END_STATE();
    case 1626:
      if (lookahead == '@') ADVANCE(1710);
      END_STATE();
    case 1627:
      if (lookahead == '@') ADVANCE(1711);
      END_STATE();
    case 1628:
      if (lookahead == '@') ADVANCE(1712);
      END_STATE();
    case 1629:
      if (lookahead == '@') ADVANCE(1756);
      END_STATE();
    case 1630:
      if (lookahead == '@') ADVANCE(1713);
      END_STATE();
    case 1631:
      if (lookahead == '@') ADVANCE(1714);
      END_STATE();
    case 1632:
      if (lookahead == '@') ADVANCE(1715);
      END_STATE();
    case 1633:
      if (lookahead == '@') ADVANCE(1716);
      END_STATE();
    case 1634:
      if (lookahead == '@') ADVANCE(1717);
      END_STATE();
    case 1635:
      if (lookahead == '@') ADVANCE(1747);
      END_STATE();
    case 1636:
      if (lookahead == '@') ADVANCE(1718);
      END_STATE();
    case 1637:
      if (lookahead == '@') ADVANCE(1757);
      END_STATE();
    case 1638:
      if (lookahead == '@') ADVANCE(1748);
      END_STATE();
    case 1639:
      if (lookahead == '@') ADVANCE(1758);
      END_STATE();
    case 1640:
      if (lookahead == '@') ADVANCE(1719);
      END_STATE();
    case 1641:
      if (lookahead == '@') ADVANCE(1720);
      END_STATE();
    case 1642:
      if (lookahead == '@') ADVANCE(1721);
      END_STATE();
    case 1643:
      if (lookahead == '@') ADVANCE(1722);
      END_STATE();
    case 1644:
      if (lookahead == '@') ADVANCE(1723);
      END_STATE();
    case 1645:
      if (lookahead == '@') ADVANCE(1759);
      END_STATE();
    case 1646:
      if (lookahead == '@') ADVANCE(1724);
      END_STATE();
    case 1647:
      if (lookahead == '@') ADVANCE(1725);
      END_STATE();
    case 1648:
      if (lookahead == '@') ADVANCE(1726);
      END_STATE();
    case 1649:
      if (lookahead == '@') ADVANCE(1727);
      END_STATE();
    case 1650:
      if (lookahead == '@') ADVANCE(1728);
      END_STATE();
    case 1651:
      if (lookahead == '@') ADVANCE(1729);
      END_STATE();
    case 1652:
      if (lookahead == '@') ADVANCE(1760);
      END_STATE();
    case 1653:
      if (lookahead == '@') ADVANCE(1730);
      END_STATE();
    case 1654:
      if (lookahead == '@') ADVANCE(1761);
      END_STATE();
    case 1655:
      if (lookahead == '@') ADVANCE(1731);
      END_STATE();
    case 1656:
      if (lookahead == '@') ADVANCE(1762);
      END_STATE();
    case 1657:
      if (lookahead == '@') ADVANCE(1732);
      END_STATE();
    case 1658:
      if (lookahead == '@') ADVANCE(1763);
      END_STATE();
    case 1659:
      if (lookahead == '@') ADVANCE(1733);
      END_STATE();
    case 1660:
      if (lookahead == '@') ADVANCE(1764);
      END_STATE();
    case 1661:
      if (lookahead == '@') ADVANCE(1734);
      END_STATE();
    case 1662:
      if (lookahead == '@') ADVANCE(1765);
      END_STATE();
    case 1663:
      if (lookahead == '@') ADVANCE(1735);
      END_STATE();
    case 1664:
      if (lookahead == '@') ADVANCE(1766);
      END_STATE();
    case 1665:
      if (lookahead == '@') ADVANCE(1736);
      END_STATE();
    case 1666:
      if (lookahead == '@') ADVANCE(1767);
      END_STATE();
    case 1667:
      if (lookahead == '@') ADVANCE(1737);
      END_STATE();
    case 1668:
      if (lookahead == '@') ADVANCE(1768);
      END_STATE();
    case 1669:
      if (lookahead == '@') ADVANCE(1738);
      END_STATE();
    case 1670:
      if (lookahead == '@') ADVANCE(1769);
      END_STATE();
    case 1671:
      if (lookahead == '@') ADVANCE(1739);
      END_STATE();
    case 1672:
      if (lookahead == '@') ADVANCE(1770);
      END_STATE();
    case 1673:
      if (lookahead == '@') ADVANCE(1740);
      END_STATE();
    case 1674:
      if (lookahead == '@') ADVANCE(1771);
      END_STATE();
    case 1675:
      if (lookahead == '@') ADVANCE(1741);
      END_STATE();
    case 1676:
      if (lookahead == '@') ADVANCE(1772);
      END_STATE();
    case 1677:
      if (lookahead == '@') ADVANCE(1742);
      END_STATE();
    case 1678:
      if (lookahead == '@') ADVANCE(1773);
      END_STATE();
    case 1679:
      if (lookahead == '@') ADVANCE(1743);
      END_STATE();
    case 1680:
      if (lookahead == '@') ADVANCE(1774);
      END_STATE();
    case 1681:
      if (lookahead == '@') ADVANCE(1744);
      END_STATE();
    case 1682:
      if (lookahead == '@') ADVANCE(1775);
      END_STATE();
    case 1683:
      if (lookahead == '\\') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1683);
      END_STATE();
    case 1684:
      if (lookahead == '\\') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      END_STATE();
    case 1685:
      if (lookahead == '^') ADVANCE(1783);
      END_STATE();
    case 1686:
      if (lookahead == '^') SKIP(1789);
      END_STATE();
    case 1687:
      if (lookahead == '^') ADVANCE(1784);
      END_STATE();
    case 1688:
      if (lookahead == '^') SKIP(1790);
      END_STATE();
    case 1689:
      if (lookahead == '^') ADVANCE(1786);
      END_STATE();
    case 1690:
      if (lookahead == '^') SKIP(1796);
      END_STATE();
    case 1691:
      if (lookahead == '^') ADVANCE(1793);
      END_STATE();
    case 1692:
      if (lookahead == '^') SKIP(1802);
      END_STATE();
    case 1693:
      if (lookahead == '^') ADVANCE(1785);
      END_STATE();
    case 1694:
      if (lookahead == '^') SKIP(1805);
      END_STATE();
    case 1695:
      if (lookahead == '^') ADVANCE(1798);
      END_STATE();
    case 1696:
      if (lookahead == '^') ADVANCE(1803);
      END_STATE();
    case 1697:
      if (lookahead == '^') ADVANCE(1788);
      END_STATE();
    case 1698:
      if (lookahead == '^') ADVANCE(1787);
      END_STATE();
    case 1699:
      if (lookahead == '^') ADVANCE(1809);
      END_STATE();
    case 1700:
      if (lookahead == '^') ADVANCE(1811);
      END_STATE();
    case 1701:
      if (lookahead == '^') ADVANCE(1801);
      END_STATE();
    case 1702:
      if (lookahead == '^') ADVANCE(1795);
      END_STATE();
    case 1703:
      if (lookahead == '^') ADVANCE(1800);
      END_STATE();
    case 1704:
      if (lookahead == '^') ADVANCE(1794);
      END_STATE();
    case 1705:
      if (lookahead == '^') ADVANCE(1799);
      END_STATE();
    case 1706:
      if (lookahead == '^') ADVANCE(1816);
      END_STATE();
    case 1707:
      if (lookahead == '^') ADVANCE(1813);
      END_STATE();
    case 1708:
      if (lookahead == '^') ADVANCE(1804);
      END_STATE();
    case 1709:
      if (lookahead == '^') ADVANCE(1815);
      END_STATE();
    case 1710:
      if (lookahead == '^') ADVANCE(1807);
      END_STATE();
    case 1711:
      if (lookahead == '^') ADVANCE(1819);
      END_STATE();
    case 1712:
      if (lookahead == '^') ADVANCE(1817);
      END_STATE();
    case 1713:
      if (lookahead == '^') ADVANCE(1806);
      END_STATE();
    case 1714:
      if (lookahead == '^') ADVANCE(1812);
      END_STATE();
    case 1715:
      if (lookahead == '^') ADVANCE(1820);
      END_STATE();
    case 1716:
      if (lookahead == '^') ADVANCE(1822);
      END_STATE();
    case 1717:
      if (lookahead == '^') ADVANCE(1821);
      END_STATE();
    case 1718:
      if (lookahead == '^') ADVANCE(1808);
      END_STATE();
    case 1719:
      if (lookahead == '^') ADVANCE(1814);
      END_STATE();
    case 1720:
      if (lookahead == '^') ADVANCE(1823);
      END_STATE();
    case 1721:
      if (lookahead == '^') ADVANCE(1825);
      END_STATE();
    case 1722:
      if (lookahead == '^') ADVANCE(1810);
      END_STATE();
    case 1723:
      if (lookahead == '^') ADVANCE(1827);
      END_STATE();
    case 1724:
      if (lookahead == '^') ADVANCE(1818);
      END_STATE();
    case 1725:
      if (lookahead == '^') ADVANCE(1831);
      END_STATE();
    case 1726:
      if (lookahead == '^') ADVANCE(1791);
      END_STATE();
    case 1727:
      if (lookahead == '^') ADVANCE(1792);
      END_STATE();
    case 1728:
      if (lookahead == '^') ADVANCE(1797);
      END_STATE();
    case 1729:
      if (lookahead == '^') ADVANCE(1824);
      END_STATE();
    case 1730:
      if (lookahead == '^') ADVANCE(1826);
      END_STATE();
    case 1731:
      if (lookahead == '^') ADVANCE(1828);
      END_STATE();
    case 1732:
      if (lookahead == '^') ADVANCE(1829);
      END_STATE();
    case 1733:
      if (lookahead == '^') ADVANCE(1830);
      END_STATE();
    case 1734:
      if (lookahead == '^') ADVANCE(1832);
      END_STATE();
    case 1735:
      if (lookahead == '^') ADVANCE(1833);
      END_STATE();
    case 1736:
      if (lookahead == '^') ADVANCE(1834);
      END_STATE();
    case 1737:
      if (lookahead == '^') ADVANCE(1835);
      END_STATE();
    case 1738:
      if (lookahead == '^') ADVANCE(1836);
      END_STATE();
    case 1739:
      if (lookahead == '^') ADVANCE(1837);
      END_STATE();
    case 1740:
      if (lookahead == '^') ADVANCE(1838);
      END_STATE();
    case 1741:
      if (lookahead == '^') ADVANCE(1839);
      END_STATE();
    case 1742:
      if (lookahead == '^') ADVANCE(1840);
      END_STATE();
    case 1743:
      if (lookahead == '^') ADVANCE(1841);
      END_STATE();
    case 1744:
      if (lookahead == '^') ADVANCE(1842);
      END_STATE();
    case 1745:
      if (lookahead == '^') ADVANCE(1843);
      END_STATE();
    case 1746:
      if (lookahead == '^') SKIP(1844);
      END_STATE();
    case 1747:
      if (lookahead == '^') ADVANCE(1845);
      END_STATE();
    case 1748:
      if (lookahead == '^') ADVANCE(1848);
      END_STATE();
    case 1749:
      if (lookahead == '^') ADVANCE(1846);
      END_STATE();
    case 1750:
      if (lookahead == '^') SKIP(1847);
      END_STATE();
    case 1751:
      if (lookahead == '^') ADVANCE(1849);
      END_STATE();
    case 1752:
      if (lookahead == '^') SKIP(1850);
      END_STATE();
    case 1753:
      if (lookahead == '^') ADVANCE(1851);
      END_STATE();
    case 1754:
      if (lookahead == '^') ADVANCE(1852);
      END_STATE();
    case 1755:
      if (lookahead == '^') ADVANCE(1853);
      END_STATE();
    case 1756:
      if (lookahead == '^') ADVANCE(1854);
      END_STATE();
    case 1757:
      if (lookahead == '^') ADVANCE(1855);
      END_STATE();
    case 1758:
      if (lookahead == '^') ADVANCE(1856);
      END_STATE();
    case 1759:
      if (lookahead == '^') ADVANCE(1857);
      END_STATE();
    case 1760:
      if (lookahead == '^') ADVANCE(1858);
      END_STATE();
    case 1761:
      if (lookahead == '^') ADVANCE(1859);
      END_STATE();
    case 1762:
      if (lookahead == '^') ADVANCE(1860);
      END_STATE();
    case 1763:
      if (lookahead == '^') ADVANCE(1861);
      END_STATE();
    case 1764:
      if (lookahead == '^') ADVANCE(1862);
      END_STATE();
    case 1765:
      if (lookahead == '^') ADVANCE(1863);
      END_STATE();
    case 1766:
      if (lookahead == '^') ADVANCE(1864);
      END_STATE();
    case 1767:
      if (lookahead == '^') ADVANCE(1865);
      END_STATE();
    case 1768:
      if (lookahead == '^') ADVANCE(1866);
      END_STATE();
    case 1769:
      if (lookahead == '^') ADVANCE(1867);
      END_STATE();
    case 1770:
      if (lookahead == '^') ADVANCE(1868);
      END_STATE();
    case 1771:
      if (lookahead == '^') ADVANCE(1869);
      END_STATE();
    case 1772:
      if (lookahead == '^') ADVANCE(1870);
      END_STATE();
    case 1773:
      if (lookahead == '^') ADVANCE(1871);
      END_STATE();
    case 1774:
      if (lookahead == '^') ADVANCE(1872);
      END_STATE();
    case 1775:
      if (lookahead == '^') ADVANCE(1873);
      END_STATE();
    case 1776:
      if (lookahead == '`') ADVANCE(2385);
      END_STATE();
    case 1777:
      if (lookahead == 'd') ADVANCE(2414);
      END_STATE();
    case 1778:
      if (lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 1779:
      if (lookahead == 'm') ADVANCE(2414);
      END_STATE();
    case 1780:
      if (lookahead == 'o') ADVANCE(1777);
      END_STATE();
    case 1781:
      if (lookahead == 's') ADVANCE(2397);
      END_STATE();
    case 1782:
      if (lookahead == 'x') ADVANCE(1880);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1683);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(348);
      END_STATE();
    case 1783:
      if (lookahead == '~') ADVANCE(78);
      END_STATE();
    case 1784:
      if (lookahead == '~') ADVANCE(345);
      END_STATE();
    case 1785:
      if (lookahead == '~') ADVANCE(348);
      END_STATE();
    case 1786:
      if (lookahead == '~') ADVANCE(2307);
      END_STATE();
    case 1787:
      if (lookahead == '~') ADVANCE(14);
      END_STATE();
    case 1788:
      if (lookahead == '~') ADVANCE(2262);
      END_STATE();
    case 1789:
      if (lookahead == '~') SKIP(250);
      END_STATE();
    case 1790:
      if (lookahead == '~') SKIP(424);
      END_STATE();
    case 1791:
      if (lookahead == '~') ADVANCE(2018);
      END_STATE();
    case 1792:
      if (lookahead == '~') ADVANCE(2019);
      END_STATE();
    case 1793:
      if (lookahead == '~') ADVANCE(87);
      END_STATE();
    case 1794:
      if (lookahead == '~') ADVANCE(37);
      END_STATE();
    case 1795:
      if (lookahead == '~') ADVANCE(2271);
      END_STATE();
    case 1796:
      if (lookahead == '~') SKIP(251);
      END_STATE();
    case 1797:
      if (lookahead == '~') ADVANCE(2020);
      END_STATE();
    case 1798:
      if (lookahead == '~') ADVANCE(89);
      END_STATE();
    case 1799:
      if (lookahead == '~') ADVANCE(43);
      END_STATE();
    case 1800:
      if (lookahead == '~') ADVANCE(2276);
      END_STATE();
    case 1801:
      if (lookahead == '~') ADVANCE(2229);
      END_STATE();
    case 1802:
      if (lookahead == '~') SKIP(199);
      END_STATE();
    case 1803:
      if (lookahead == '~') ADVANCE(90);
      END_STATE();
    case 1804:
      if (lookahead == '~') ADVANCE(2285);
      END_STATE();
    case 1805:
      if (lookahead == '~') SKIP(217);
      END_STATE();
    case 1806:
      if (lookahead == '~') ADVANCE(2290);
      END_STATE();
    case 1807:
      if (lookahead == '~') ADVANCE(52);
      END_STATE();
    case 1808:
      if (lookahead == '~') ADVANCE(2300);
      END_STATE();
    case 1809:
      if (lookahead == '~') ADVANCE(230);
      END_STATE();
    case 1810:
      if (lookahead == '~') ADVANCE(2305);
      END_STATE();
    case 1811:
      if (lookahead == '~') ADVANCE(239);
      END_STATE();
    case 1812:
      if (lookahead == '~') ADVANCE(56);
      END_STATE();
    case 1813:
      if (lookahead == '~') ADVANCE(2233);
      END_STATE();
    case 1814:
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 1815:
      if (lookahead == '~') ADVANCE(2237);
      END_STATE();
    case 1816:
      if (lookahead == '~') ADVANCE(267);
      END_STATE();
    case 1817:
      if (lookahead == '~') ADVANCE(279);
      END_STATE();
    case 1818:
      if (lookahead == '~') ADVANCE(72);
      END_STATE();
    case 1819:
      if (lookahead == '~') ADVANCE(2241);
      END_STATE();
    case 1820:
      if (lookahead == '~') ADVANCE(298);
      END_STATE();
    case 1821:
      if (lookahead == '~') ADVANCE(2245);
      END_STATE();
    case 1822:
      if (lookahead == '~') ADVANCE(307);
      END_STATE();
    case 1823:
      if (lookahead == '~') ADVANCE(323);
      END_STATE();
    case 1824:
      if (lookahead == '~') ADVANCE(109);
      END_STATE();
    case 1825:
      if (lookahead == '~') ADVANCE(2249);
      END_STATE();
    case 1826:
      if (lookahead == '~') ADVANCE(118);
      END_STATE();
    case 1827:
      if (lookahead == '~') ADVANCE(2253);
      END_STATE();
    case 1828:
      if (lookahead == '~') ADVANCE(127);
      END_STATE();
    case 1829:
      if (lookahead == '~') ADVANCE(137);
      END_STATE();
    case 1830:
      if (lookahead == '~') ADVANCE(147);
      END_STATE();
    case 1831:
      if (lookahead == '~') ADVANCE(2257);
      END_STATE();
    case 1832:
      if (lookahead == '~') ADVANCE(157);
      END_STATE();
    case 1833:
      if (lookahead == '~') ADVANCE(167);
      END_STATE();
    case 1834:
      if (lookahead == '~') ADVANCE(177);
      END_STATE();
    case 1835:
      if (lookahead == '~') ADVANCE(187);
      END_STATE();
    case 1836:
      if (lookahead == '~') ADVANCE(197);
      END_STATE();
    case 1837:
      if (lookahead == '~') ADVANCE(200);
      END_STATE();
    case 1838:
      if (lookahead == '~') ADVANCE(202);
      END_STATE();
    case 1839:
      if (lookahead == '~') ADVANCE(204);
      END_STATE();
    case 1840:
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 1841:
      if (lookahead == '~') ADVANCE(212);
      END_STATE();
    case 1842:
      if (lookahead == '~') ADVANCE(214);
      END_STATE();
    case 1843:
      if (lookahead == '~') ADVANCE(349);
      END_STATE();
    case 1844:
      if (lookahead == '~') SKIP(426);
      END_STATE();
    case 1845:
      if (lookahead == '~') ADVANCE(2295);
      END_STATE();
    case 1846:
      if (lookahead == '~') ADVANCE(355);
      END_STATE();
    case 1847:
      if (lookahead == '~') SKIP(427);
      END_STATE();
    case 1848:
      if (lookahead == '~') ADVANCE(61);
      END_STATE();
    case 1849:
      if (lookahead == '~') ADVANCE(357);
      END_STATE();
    case 1850:
      if (lookahead == '~') SKIP(429);
      END_STATE();
    case 1851:
      if (lookahead == '~') ADVANCE(361);
      END_STATE();
    case 1852:
      if (lookahead == '~') ADVANCE(363);
      END_STATE();
    case 1853:
      if (lookahead == '~') ADVANCE(366);
      END_STATE();
    case 1854:
      if (lookahead == '~') ADVANCE(369);
      END_STATE();
    case 1855:
      if (lookahead == '~') ADVANCE(373);
      END_STATE();
    case 1856:
      if (lookahead == '~') ADVANCE(375);
      END_STATE();
    case 1857:
      if (lookahead == '~') ADVANCE(378);
      END_STATE();
    case 1858:
      if (lookahead == '~') ADVANCE(380);
      END_STATE();
    case 1859:
      if (lookahead == '~') ADVANCE(381);
      END_STATE();
    case 1860:
      if (lookahead == '~') ADVANCE(383);
      END_STATE();
    case 1861:
      if (lookahead == '~') ADVANCE(386);
      END_STATE();
    case 1862:
      if (lookahead == '~') ADVANCE(389);
      END_STATE();
    case 1863:
      if (lookahead == '~') ADVANCE(392);
      END_STATE();
    case 1864:
      if (lookahead == '~') ADVANCE(395);
      END_STATE();
    case 1865:
      if (lookahead == '~') ADVANCE(398);
      END_STATE();
    case 1866:
      if (lookahead == '~') ADVANCE(401);
      END_STATE();
    case 1867:
      if (lookahead == '~') ADVANCE(404);
      END_STATE();
    case 1868:
      if (lookahead == '~') ADVANCE(407);
      END_STATE();
    case 1869:
      if (lookahead == '~') ADVANCE(410);
      END_STATE();
    case 1870:
      if (lookahead == '~') ADVANCE(413);
      END_STATE();
    case 1871:
      if (lookahead == '~') ADVANCE(416);
      END_STATE();
    case 1872:
      if (lookahead == '~') ADVANCE(419);
      END_STATE();
    case 1873:
      if (lookahead == '~') ADVANCE(422);
      END_STATE();
    case 1874:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1878);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2222);
      END_STATE();
    case 1875:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2218);
      END_STATE();
    case 1876:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2219);
      END_STATE();
    case 1877:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2221);
      END_STATE();
    case 1878:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2222);
      END_STATE();
    case 1879:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2220);
      END_STATE();
    case 1880:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1684);
      END_STATE();
    case 1881:
      if (eof) ADVANCE(1920);
      if (lookahead == '\n') ADVANCE(1972);
      if (lookahead == '%') SKIP(1885);
      if (lookahead == '/') SKIP(1893);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1881);
      END_STATE();
    case 1882:
      if (eof) ADVANCE(1920);
      if (lookahead == '\n') SKIP(1883);
      if (lookahead == '#') SKIP(1888);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(1882);
      END_STATE();
    case 1883:
      if (eof) ADVANCE(1920);
      if (lookahead == '\n') ADVANCE(1973);
      if (lookahead == '#') SKIP(1888);
      if (lookahead == '%') SKIP(1882);
      if (lookahead == '/') SKIP(1893);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1883);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(1881);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(1882);
      END_STATE();
    case 1884:
      if (eof) ADVANCE(1920);
      ADVANCE_MAP(
        '\n', 1974,
        '#', 434,
        '%', 347,
        '\'', 348,
        '(', 2036,
        '-', 2224,
        '/', 622,
        '0', 2216,
        ':', 822,
        '?', 823,
        '[', 2455,
        '\\', 2306,
        '_', 2362,
        '{', 2484,
        '\t', 219,
        ' ', 219,
        '!', 2225,
        ';', 2225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(1884);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 1885:
      if (eof) ADVANCE(1920);
      if (lookahead == '#') SKIP(1888);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(1882);
      END_STATE();
    case 1886:
      if (eof) ADVANCE(1920);
      if (lookahead == '#') SKIP(1889);
      if (lookahead == '*') SKIP(1901);
      if (set_contains(aux_sym__number_token1_character_set_3, 9, lookahead)) SKIP(1886);
      END_STATE();
    case 1887:
      if (eof) ADVANCE(1920);
      if (lookahead == '#') SKIP(1889);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(1886);
      END_STATE();
    case 1888:
      if (eof) ADVANCE(1920);
      if (lookahead == '$') SKIP(1890);
      END_STATE();
    case 1889:
      if (eof) ADVANCE(1920);
      if (lookahead == '$') SKIP(1891);
      END_STATE();
    case 1890:
      if (eof) ADVANCE(1920);
      if (lookahead == '&') SKIP(1892);
      END_STATE();
    case 1891:
      if (eof) ADVANCE(1920);
      if (lookahead == '&') SKIP(1894);
      END_STATE();
    case 1892:
      if (eof) ADVANCE(1920);
      if (lookahead == '*') SKIP(1895);
      END_STATE();
    case 1893:
      if (eof) ADVANCE(1920);
      if (lookahead == '*') SKIP(1887);
      END_STATE();
    case 1894:
      if (eof) ADVANCE(1920);
      if (lookahead == '*') SKIP(1896);
      END_STATE();
    case 1895:
      if (eof) ADVANCE(1920);
      if (lookahead == '+') SKIP(1897);
      END_STATE();
    case 1896:
      if (eof) ADVANCE(1920);
      if (lookahead == '+') SKIP(1898);
      END_STATE();
    case 1897:
      if (eof) ADVANCE(1920);
      if (lookahead == '-') SKIP(1899);
      END_STATE();
    case 1898:
      if (eof) ADVANCE(1920);
      if (lookahead == '-') SKIP(1900);
      END_STATE();
    case 1899:
      if (eof) ADVANCE(1920);
      if (lookahead == '.') SKIP(1902);
      END_STATE();
    case 1900:
      if (eof) ADVANCE(1920);
      if (lookahead == '.') SKIP(1903);
      END_STATE();
    case 1901:
      if (eof) ADVANCE(1920);
      if (lookahead == '/') SKIP(1881);
      END_STATE();
    case 1902:
      if (eof) ADVANCE(1920);
      if (lookahead == '/') SKIP(1904);
      END_STATE();
    case 1903:
      if (eof) ADVANCE(1920);
      if (lookahead == '/') SKIP(1905);
      END_STATE();
    case 1904:
      if (eof) ADVANCE(1920);
      if (lookahead == ':') SKIP(1906);
      END_STATE();
    case 1905:
      if (eof) ADVANCE(1920);
      if (lookahead == ':') SKIP(1907);
      END_STATE();
    case 1906:
      if (eof) ADVANCE(1920);
      if (lookahead == '<') SKIP(1908);
      END_STATE();
    case 1907:
      if (eof) ADVANCE(1920);
      if (lookahead == '<') SKIP(1909);
      END_STATE();
    case 1908:
      if (eof) ADVANCE(1920);
      if (lookahead == '=') SKIP(1910);
      END_STATE();
    case 1909:
      if (eof) ADVANCE(1920);
      if (lookahead == '=') SKIP(1911);
      END_STATE();
    case 1910:
      if (eof) ADVANCE(1920);
      if (lookahead == '>') SKIP(1912);
      END_STATE();
    case 1911:
      if (eof) ADVANCE(1920);
      if (lookahead == '>') SKIP(1913);
      END_STATE();
    case 1912:
      if (eof) ADVANCE(1920);
      if (lookahead == '?') SKIP(1914);
      END_STATE();
    case 1913:
      if (eof) ADVANCE(1920);
      if (lookahead == '?') SKIP(1915);
      END_STATE();
    case 1914:
      if (eof) ADVANCE(1920);
      if (lookahead == '@') SKIP(1916);
      END_STATE();
    case 1915:
      if (eof) ADVANCE(1920);
      if (lookahead == '@') SKIP(1917);
      END_STATE();
    case 1916:
      if (eof) ADVANCE(1920);
      if (lookahead == '^') SKIP(1918);
      END_STATE();
    case 1917:
      if (eof) ADVANCE(1920);
      if (lookahead == '^') SKIP(1919);
      END_STATE();
    case 1918:
      if (eof) ADVANCE(1920);
      if (lookahead == '~') SKIP(1882);
      END_STATE();
    case 1919:
      if (eof) ADVANCE(1920);
      if (lookahead == '~') SKIP(1886);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1932);
      if (lookahead == '\n') ADVANCE(1942);
      if (lookahead == ' ') ADVANCE(1922);
      if (lookahead == '%') ADVANCE(2013);
      if (lookahead == '/') SKIP(618);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 1933,
        '\n', 1943,
        ' ', 1923,
        '!', 2034,
        '"', 2102,
        '#', 481,
        '%', 2011,
        '\'', 2099,
        '(', 2054,
        ')', 2062,
        ',', 2065,
      );
      if (lookahead == '/') SKIP(618);
      if (lookahead == ';') ADVANCE(2078);
      if (lookahead == '[') ADVANCE(2081);
      if (lookahead == '\\') ADVANCE(2096);
      if (lookahead == ']') ADVANCE(2084);
      if (lookahead == '_') ADVANCE(2022);
      if (lookahead == '`') ADVANCE(2105);
      if (lookahead == '{') ADVANCE(2087);
      if (lookahead == '|') ADVANCE(2093);
      if (lookahead == '}') ADVANCE(2090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2031);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2025);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2028);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1934);
      if (lookahead == '\n') ADVANCE(1944);
      if (lookahead == ' ') ADVANCE(1924);
      if (lookahead == '%') ADVANCE(2016);
      if (lookahead == '/') ADVANCE(620);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 1935,
        '\n', 1945,
        ' ', 1925,
        '!', 2035,
        '"', 2103,
        '#', 482,
        '%', 2012,
        '\'', 2100,
        '(', 2055,
        ')', 2063,
        ',', 2066,
        '/', 620,
        ';', 2079,
        '[', 2082,
        '\\', 2097,
        ']', 2085,
        '_', 2023,
        '`', 2106,
        '{', 2088,
        '|', 2094,
        '}', 2091,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2032);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2026);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2029);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 1936,
        '\n', 1946,
        ' ', 1926,
        '#', 483,
        '%', 2008,
        ',', 2369,
        '/', 2426,
        ';', 2068,
        '\\', 102,
        '`', 101,
        'i', 108,
        'm', 107,
        'r', 105,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(109);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 1937,
        '\n', 1947,
        ' ', 1927,
        '#', 485,
        '%', 2009,
        '(', 2047,
        ',', 2370,
        '/', 2428,
        ';', 2069,
        '\\', 111,
        '`', 110,
        'i', 117,
        'm', 116,
        'r', 114,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(118);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1938);
      if (lookahead == '\n') ADVANCE(1948);
      if (lookahead == ' ') ADVANCE(1928);
      if (lookahead == '#') SKIP(518);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(199);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1939);
      if (lookahead == '\n') ADVANCE(1949);
      if (lookahead == ' ') ADVANCE(1929);
      if (lookahead == '%') ADVANCE(2014);
      if (lookahead == '/') ADVANCE(2426);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1940);
      if (lookahead == '\n') ADVANCE(1950);
      if (lookahead == ' ') ADVANCE(1930);
      if (lookahead == '%') ADVANCE(2015);
      if (lookahead == '/') ADVANCE(2428);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1941);
      if (lookahead == '\n') ADVANCE(1951);
      if (lookahead == ' ') ADVANCE(1931);
      if (lookahead == '%') ADVANCE(2017);
      if (lookahead == '/') ADVANCE(633);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1932);
      if (lookahead == '\n') ADVANCE(1942);
      if (lookahead == ' ') ADVANCE(1922);
      if (lookahead == '%') ADVANCE(2013);
      if (lookahead == '/') SKIP(618);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 1933,
        '\n', 1943,
        ' ', 1923,
        '!', 2034,
        '"', 2102,
        '#', 481,
        '%', 2011,
        '\'', 2099,
        '(', 2054,
        ')', 2062,
        ',', 2065,
      );
      if (lookahead == '/') SKIP(618);
      if (lookahead == ';') ADVANCE(2078);
      if (lookahead == '[') ADVANCE(2081);
      if (lookahead == '\\') ADVANCE(2096);
      if (lookahead == ']') ADVANCE(2084);
      if (lookahead == '_') ADVANCE(2022);
      if (lookahead == '`') ADVANCE(2105);
      if (lookahead == '{') ADVANCE(2087);
      if (lookahead == '|') ADVANCE(2093);
      if (lookahead == '}') ADVANCE(2090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2031);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2025);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2028);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1934);
      if (lookahead == '\n') ADVANCE(1944);
      if (lookahead == ' ') ADVANCE(1924);
      if (lookahead == '%') ADVANCE(2016);
      if (lookahead == '/') ADVANCE(620);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 1935,
        '\n', 1945,
        ' ', 1925,
        '!', 2035,
        '"', 2103,
        '#', 482,
        '%', 2012,
        '\'', 2100,
        '(', 2055,
        ')', 2063,
        ',', 2066,
        '/', 620,
        ';', 2079,
        '[', 2082,
        '\\', 2097,
        ']', 2085,
        '_', 2023,
        '`', 2106,
        '{', 2088,
        '|', 2094,
        '}', 2091,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2032);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2026);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2029);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 1936,
        '\n', 1946,
        ' ', 1926,
        '#', 483,
        '%', 2008,
        ',', 2369,
        '/', 2426,
        ';', 2068,
        '\\', 102,
        '`', 101,
        'i', 108,
        'm', 107,
        'r', 105,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(109);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 1937,
        '\n', 1947,
        ' ', 1927,
        '#', 485,
        '%', 2009,
        '(', 2047,
        ',', 2370,
        '/', 2428,
        ';', 2069,
        '\\', 111,
        '`', 110,
        'i', 117,
        'm', 116,
        'r', 114,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(118);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1938);
      if (lookahead == '\n') ADVANCE(1948);
      if (lookahead == ' ') ADVANCE(1928);
      if (lookahead == '#') SKIP(518);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(199);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1939);
      if (lookahead == '\n') ADVANCE(1949);
      if (lookahead == ' ') ADVANCE(1929);
      if (lookahead == '%') ADVANCE(2014);
      if (lookahead == '/') ADVANCE(2426);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1940);
      if (lookahead == '\n') ADVANCE(1950);
      if (lookahead == ' ') ADVANCE(1930);
      if (lookahead == '%') ADVANCE(2015);
      if (lookahead == '/') ADVANCE(2428);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(1941);
      if (lookahead == '\n') ADVANCE(1951);
      if (lookahead == ' ') ADVANCE(1931);
      if (lookahead == '%') ADVANCE(2017);
      if (lookahead == '/') ADVANCE(633);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1932);
      if (lookahead == '\n') ADVANCE(1942);
      if (lookahead == ' ') ADVANCE(1922);
      if (lookahead == '%') ADVANCE(2013);
      if (lookahead == '/') SKIP(618);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 1933,
        '\n', 1943,
        ' ', 1923,
        '!', 2034,
        '"', 2102,
        '#', 481,
        '%', 2011,
        '\'', 2099,
        '(', 2054,
        ')', 2062,
        ',', 2065,
      );
      if (lookahead == '/') SKIP(618);
      if (lookahead == ';') ADVANCE(2078);
      if (lookahead == '[') ADVANCE(2081);
      if (lookahead == '\\') ADVANCE(2096);
      if (lookahead == ']') ADVANCE(2084);
      if (lookahead == '_') ADVANCE(2022);
      if (lookahead == '`') ADVANCE(2105);
      if (lookahead == '{') ADVANCE(2087);
      if (lookahead == '|') ADVANCE(2093);
      if (lookahead == '}') ADVANCE(2090);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2031);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2025);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2028);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1934);
      if (lookahead == '\n') ADVANCE(1944);
      if (lookahead == ' ') ADVANCE(1924);
      if (lookahead == '%') ADVANCE(2016);
      if (lookahead == '/') ADVANCE(620);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 1935,
        '\n', 1945,
        ' ', 1925,
        '!', 2035,
        '"', 2103,
        '#', 482,
        '%', 2012,
        '\'', 2100,
        '(', 2055,
        ')', 2063,
        ',', 2066,
        '/', 620,
        ';', 2079,
        '[', 2082,
        '\\', 2097,
        ']', 2085,
        '_', 2023,
        '`', 2106,
        '{', 2088,
        '|', 2094,
        '}', 2091,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2032);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2026);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2029);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 1936,
        '\n', 1946,
        ' ', 1926,
        '#', 483,
        '%', 2008,
        ',', 2369,
        '/', 2426,
        ';', 2068,
        '\\', 102,
        '`', 101,
        'i', 108,
        'm', 107,
        'r', 105,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(109);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 1937,
        '\n', 1947,
        ' ', 1927,
        '#', 485,
        '%', 2009,
        '(', 2047,
        ',', 2370,
        '/', 2428,
        ';', 2069,
        '\\', 111,
        '`', 110,
        'i', 117,
        'm', 116,
        'r', 114,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(118);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1938);
      if (lookahead == '\n') ADVANCE(1948);
      if (lookahead == ' ') ADVANCE(1928);
      if (lookahead == '#') SKIP(518);
      if (lookahead == '%') ADVANCE(2010);
      if (lookahead == '/') ADVANCE(633);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(199);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1939);
      if (lookahead == '\n') ADVANCE(1949);
      if (lookahead == ' ') ADVANCE(1929);
      if (lookahead == '%') ADVANCE(2014);
      if (lookahead == '/') ADVANCE(2426);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1940);
      if (lookahead == '\n') ADVANCE(1950);
      if (lookahead == ' ') ADVANCE(1930);
      if (lookahead == '%') ADVANCE(2015);
      if (lookahead == '/') ADVANCE(2428);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(1941);
      if (lookahead == '\n') ADVANCE(1951);
      if (lookahead == ' ') ADVANCE(1931);
      if (lookahead == '%') ADVANCE(2017);
      if (lookahead == '/') ADVANCE(633);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1952);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '/') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1953,
        '#', 431,
        '%', 78,
        '(', 2045,
        '/', 621,
        '\\', 76,
        '\t', 79,
        ' ', 79,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(78);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1954,
        '#', 440,
        '%', 87,
        '\'', 14,
        '(', 2046,
        '/', 622,
        '0', 2162,
        '[', 2447,
        '\\', 2262,
        '_', 2354,
        '{', 2476,
        '\t', 88,
        ' ', 88,
        '!', 2261,
        ';', 2261,
        '"', 87,
        ')', 87,
        ',', 87,
        ']', 87,
        '`', 87,
        '|', 87,
        '}', 87,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1955,
        '#', 440,
        '%', 220,
        '\'', 14,
        '(', 2046,
        '/', 625,
        '0', 2162,
        '[', 2447,
        '\\', 2262,
        ']', 2319,
        '_', 2354,
        '{', 2476,
        '\t', 94,
        ' ', 94,
        '!', 2261,
        ';', 2261,
        '"', 87,
        ')', 87,
        ',', 87,
        '`', 87,
        '|', 87,
        '}', 87,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1956,
        '#', 440,
        '%', 253,
        '\'', 14,
        '(', 2046,
        '/', 626,
        '0', 2162,
        '[', 2447,
        '\\', 2262,
        '_', 2354,
        '{', 2476,
        '}', 2337,
        '\t', 95,
        ' ', 95,
        '!', 2261,
        ';', 2261,
        '"', 87,
        ')', 87,
        ',', 87,
        ']', 87,
        '`', 87,
        '|', 87,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1957,
        '#', 447,
        '%', 254,
        '\'', 37,
        '(', 2052,
        '/', 627,
        '0', 2174,
        '[', 2448,
        '\\', 2271,
        ']', 2321,
        '_', 2355,
        '{', 2477,
        '}', 2339,
        '\t', 98,
        ' ', 98,
        '!', 2270,
        ';', 2270,
        '"', 230,
        ')', 230,
        ',', 230,
        '`', 230,
        '|', 230,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1958,
        '#', 487,
        '%', 127,
        '(', 2048,
        ',', 2371,
        '/', 2427,
        ';', 2070,
        '\\', 120,
        ']', 2457,
        '`', 119,
        'i', 126,
        'm', 125,
        'r', 123,
        '|', 2465,
        '\t', 128,
        ' ', 128,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(127);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1959,
        '#', 489,
        '%', 137,
        ',', 2372,
        '/', 2429,
        ';', 2071,
        '\\', 130,
        ']', 2458,
        '`', 129,
        'i', 136,
        'm', 135,
        'r', 133,
        '|', 2466,
        '\t', 138,
        ' ', 138,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(137);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1960,
        '#', 491,
        '%', 147,
        '(', 2049,
        ',', 2373,
        '/', 2430,
        ';', 2072,
        '\\', 140,
        ']', 2459,
        '`', 139,
        'i', 146,
        'm', 145,
        'r', 143,
        '\t', 148,
        ' ', 148,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(147);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1961,
        '#', 493,
        '%', 157,
        '(', 2050,
        ',', 2374,
        '/', 2431,
        ';', 2073,
        '\\', 150,
        '`', 149,
        'i', 156,
        'm', 155,
        'r', 153,
        '}', 2486,
        '\t', 158,
        ' ', 158,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(157);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1962,
        '#', 495,
        '%', 167,
        '(', 2051,
        ')', 2364,
        ',', 2375,
        '/', 2432,
        ';', 2074,
        '\\', 160,
        '`', 159,
        'i', 166,
        'm', 165,
        'r', 163,
        '\t', 168,
        ' ', 168,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(167);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1963,
        '#', 497,
        '%', 177,
        ',', 2376,
        '/', 2433,
        ';', 2075,
        '\\', 170,
        '`', 169,
        'i', 176,
        'm', 175,
        'r', 173,
        '}', 2487,
        '\t', 178,
        ' ', 178,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(177);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1964,
        '#', 499,
        '%', 187,
        ',', 2377,
        '/', 2434,
        ';', 2076,
        '\\', 180,
        ']', 2460,
        '`', 179,
        'i', 186,
        'm', 185,
        'r', 183,
        '\t', 188,
        ' ', 188,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(187);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1965,
        '#', 501,
        '%', 197,
        ')', 2365,
        ',', 2378,
        '/', 2435,
        ';', 2077,
        '\\', 190,
        '`', 189,
        'i', 196,
        'm', 195,
        'r', 193,
        '\t', 198,
        ' ', 198,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(197);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1966,
        '#', 503,
        '%', 200,
        ',', 2379,
        '/', 634,
        ']', 2461,
        '|', 2467,
        '\t', 201,
        ' ', 201,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(200);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1967,
        '#', 505,
        '%', 202,
        ')', 2366,
        ',', 2380,
        '/', 635,
        '\t', 203,
        ' ', 203,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(202);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1968,
        '#', 507,
        '%', 204,
        ',', 2381,
        '/', 636,
        ']', 2462,
        '\t', 205,
        ' ', 205,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(204);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1969);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '%') ADVANCE(210);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == '0') ADVANCE(2168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2171);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(210);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1970);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '%') ADVANCE(212);
      if (lookahead == ')') ADVANCE(2367);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(212);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1971);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == ']') ADVANCE(2463);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(214);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1972);
      if (lookahead == '%') SKIP(428);
      if (lookahead == '/') SKIP(632);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1973);
      if (lookahead == '#') SKIP(520);
      if (lookahead == '%') SKIP(217);
      if (lookahead == '/') SKIP(632);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(218);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(217);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1974);
      if (lookahead == '%') ADVANCE(347);
      if (lookahead == '/') ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1975,
        '#', 462,
        '%', 279,
        '\'', 56,
        '(', 2057,
        '/', 628,
        '0', 2192,
        '[', 2451,
        '\\', 2290,
        '_', 2358,
        '{', 2480,
        '\t', 221,
        ' ', 221,
        '!', 2289,
        ';', 2289,
        '"', 279,
        ')', 279,
        ',', 279,
        ']', 279,
        '`', 279,
        '|', 279,
        '}', 279,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1976,
        '#', 447,
        '%', 230,
        '\'', 37,
        '(', 2052,
        '/', 625,
        '0', 2174,
        '[', 2448,
        '\\', 2271,
        ']', 2321,
        '_', 2355,
        '{', 2477,
        '\t', 242,
        ' ', 242,
        '!', 2270,
        ';', 2270,
        '"', 230,
        ')', 230,
        ',', 230,
        '`', 230,
        '|', 230,
        '}', 230,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2355);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1977,
        '#', 448,
        '%', 239,
        '\'', 43,
        '(', 2053,
        '/', 626,
        '0', 2180,
        '[', 2449,
        '\\', 2276,
        '_', 2356,
        '{', 2478,
        '}', 2340,
        '\t', 244,
        ' ', 244,
        '!', 2275,
        ';', 2275,
        '"', 239,
        ')', 239,
        ',', 239,
        ']', 239,
        '`', 239,
        '|', 239,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1978,
        '#', 448,
        '%', 255,
        '\'', 43,
        '(', 2053,
        '/', 627,
        '0', 2180,
        '[', 2449,
        '\\', 2276,
        ']', 2322,
        '_', 2356,
        '{', 2478,
        '}', 2340,
        '\t', 247,
        ' ', 247,
        '!', 2275,
        ';', 2275,
        '"', 239,
        ')', 239,
        ',', 239,
        '`', 239,
        '|', 239,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2356);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1979);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1980,
        '#', 462,
        '%', 289,
        '\'', 56,
        '(', 2057,
        '/', 629,
        '0', 2192,
        '[', 2451,
        '\\', 2290,
        ']', 2324,
        '_', 2358,
        '{', 2480,
        '\t', 256,
        ' ', 256,
        '!', 2289,
        ';', 2289,
        '"', 279,
        ')', 279,
        ',', 279,
        '`', 279,
        '|', 279,
        '}', 279,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1981,
        '#', 462,
        '%', 311,
        '\'', 56,
        '(', 2057,
        '/', 630,
        '0', 2192,
        '[', 2451,
        '\\', 2290,
        '_', 2358,
        '{', 2480,
        '}', 2342,
        '\t', 257,
        ' ', 257,
        '!', 2289,
        ';', 2289,
        '"', 279,
        ')', 279,
        ',', 279,
        ']', 279,
        '`', 279,
        '|', 279,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1982,
        '#', 455,
        '%', 267,
        '\'', 52,
        '(', 2056,
        '/', 627,
        '0', 2186,
        '[', 2450,
        '\\', 2285,
        ']', 2323,
        '_', 2357,
        '{', 2479,
        '}', 2341,
        '\t', 270,
        ' ', 270,
        '!', 2284,
        ';', 2284,
        '"', 267,
        ')', 267,
        ',', 267,
        '`', 267,
        '|', 267,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2357);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2283);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1983);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '/') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1984,
        '#', 467,
        '%', 298,
        '\'', 61,
        '(', 2058,
        '/', 629,
        '0', 2198,
        '[', 2452,
        '\\', 2295,
        ']', 2325,
        '_', 2359,
        '{', 2481,
        '\t', 283,
        ' ', 283,
        '!', 2294,
        ';', 2294,
        '"', 298,
        ')', 298,
        ',', 298,
        '`', 298,
        '|', 298,
        '}', 298,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1985,
        '#', 468,
        '%', 307,
        '\'', 65,
        '(', 2059,
        '/', 630,
        '0', 2204,
        '[', 2453,
        '\\', 2300,
        '_', 2360,
        '{', 2482,
        '}', 2344,
        '\t', 285,
        ' ', 285,
        '!', 2299,
        ';', 2299,
        '"', 307,
        ')', 307,
        ',', 307,
        ']', 307,
        '`', 307,
        '|', 307,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1986,
        '#', 467,
        '%', 312,
        '\'', 61,
        '(', 2058,
        '/', 631,
        '0', 2198,
        '[', 2452,
        '\\', 2295,
        ']', 2325,
        '_', 2359,
        '{', 2481,
        '}', 2343,
        '\t', 287,
        ' ', 287,
        '!', 2294,
        ';', 2294,
        '"', 298,
        ')', 298,
        ',', 298,
        '`', 298,
        '|', 298,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2359);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1987);
      if (lookahead == '%') ADVANCE(365);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1988,
        '#', 468,
        '%', 313,
        '\'', 65,
        '(', 2059,
        '/', 631,
        '0', 2204,
        '[', 2453,
        '\\', 2300,
        ']', 2326,
        '_', 2360,
        '{', 2482,
        '}', 2344,
        '\t', 309,
        ' ', 309,
        '!', 2299,
        ';', 2299,
        '"', 307,
        ')', 307,
        ',', 307,
        '`', 307,
        '|', 307,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1989);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 1990,
        '#', 475,
        '%', 323,
        '\'', 72,
        '(', 2060,
        '/', 631,
        '0', 2210,
        '[', 2454,
        '\\', 2305,
        ']', 2327,
        '_', 2361,
        '{', 2483,
        '}', 2345,
        '\t', 326,
        ' ', 326,
        '!', 2304,
        ';', 2304,
        '"', 323,
        ')', 323,
        ',', 323,
        '`', 323,
        '|', 323,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2303);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1991);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1992);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1993);
      if (lookahead == '%') ADVANCE(377);
      if (lookahead == '/') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1994);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '/') ADVANCE(2427);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1995);
      if (lookahead == '%') ADVANCE(385);
      if (lookahead == '/') ADVANCE(2429);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1996);
      if (lookahead == '%') ADVANCE(388);
      if (lookahead == '/') ADVANCE(2430);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1997);
      if (lookahead == '%') ADVANCE(391);
      if (lookahead == '/') ADVANCE(2431);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1998);
      if (lookahead == '%') ADVANCE(394);
      if (lookahead == '/') ADVANCE(2432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(334);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1999);
      if (lookahead == '%') ADVANCE(397);
      if (lookahead == '/') ADVANCE(2433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2000);
      if (lookahead == '%') ADVANCE(400);
      if (lookahead == '/') ADVANCE(2434);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2001);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '/') ADVANCE(2435);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2002);
      if (lookahead == '%') ADVANCE(406);
      if (lookahead == '/') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2003);
      if (lookahead == '%') ADVANCE(409);
      if (lookahead == '/') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2004);
      if (lookahead == '%') ADVANCE(412);
      if (lookahead == '/') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2005);
      if (lookahead == '%') ADVANCE(415);
      if (lookahead == '/') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2006);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2007);
      if (lookahead == '%') ADVANCE(421);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') SKIP(518);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(199);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(518);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(199);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '#') ADVANCE(431);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(78);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(432);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(250);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') SKIP(516);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(251);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(484);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(380);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(486);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(381);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') SKIP(517);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(426);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') SKIP(519);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) SKIP(427);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym__number_token1);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2114);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2115);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2116);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2117);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 87,
        '\n', 88,
        '#', 443,
        '\'', 2259,
        '\\', 93,
        'b', 11,
        'o', 12,
        'x', 13,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2116);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2120);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2121);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2122);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2123);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 230,
        '\n', 242,
        '#', 450,
        '\'', 2268,
        '\\', 97,
        'b', 34,
        'o', 35,
        'x', 36,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2122);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2126);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2127);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2128);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2129);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 239,
        '\n', 244,
        '#', 452,
        '\'', 2273,
        '\\', 99,
        'b', 40,
        'o', 41,
        'x', 42,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2128);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2132);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2133);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2134);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2135);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 267,
        '\n', 270,
        '#', 458,
        '\'', 2281,
        '\\', 100,
        'b', 49,
        'o', 50,
        'x', 51,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2134);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2138);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2139);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2141);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 279,
        '\n', 221,
        '#', 463,
        '\'', 2286,
        '\\', 240,
        'b', 53,
        'o', 54,
        'x', 55,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2144);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2145);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2147);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 298,
        '\n', 283,
        '#', 470,
        '\'', 2291,
        '\\', 246,
        'b', 58,
        'o', 59,
        'x', 60,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2150);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2151);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2152);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2153);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 307,
        '\n', 285,
        '#', 472,
        '\'', 2296,
        '\\', 248,
        'b', 62,
        'o', 63,
        'x', 64,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2152);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2156);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2157);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2158);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2159);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym__number_token1);
      ADVANCE_MAP(
        '\t', 323,
        '\n', 326,
        '#', 478,
        '\'', 2301,
        '\\', 249,
        'b', 69,
        'o', 70,
        'x', 71,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2158);
      if ((' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2163);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2164);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2165);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2166);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'x') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2171);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(210);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2169);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2170);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2171);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2172);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(210);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '#') ADVANCE(509);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(210);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'x') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2175);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2176);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2177);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2178);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2181);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2182);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2183);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2184);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == 'x') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2187);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2188);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2189);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2190);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2193);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2194);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2195);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2196);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 'x') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2199);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2200);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2201);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2202);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2205);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2206);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2207);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2208);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'x') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2211);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2212);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2213);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2214);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '\'') ADVANCE(615);
      if (lookahead == '.') ADVANCE(1877);
      if (lookahead == 'b') ADVANCE(1875);
      if (lookahead == 'o') ADVANCE(1876);
      if (lookahead == 'x') ADVANCE(1879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '.') ADVANCE(1877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2217);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2218);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2219);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym__number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2220);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(aux_sym__number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1874);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2221);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym__number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2222);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1409);
      if (lookahead == '>') ADVANCE(2384);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(2438);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2226);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2228);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(2263);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2230);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2232);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(454);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(2264);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2234);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2236);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(2265);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2238);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2240);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(2266);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2242);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2244);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(2277);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2246);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2248);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(474);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(2278);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2250);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2252);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(476);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(2279);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2256);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(2280);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(14);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(2118);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2260);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(2262);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(2229);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(14);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(87);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(2233);
      if (lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(224);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(37);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(230);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(2237);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(43);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(2241);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(52);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(267);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(37);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(2124);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2269);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(2271);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(43);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(2130);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2274);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(2276);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '#') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(2245);
      if (lookahead == 'x') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(56);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(279);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(2249);
      if (lookahead == 'x') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(292);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(61);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(298);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '#') ADVANCE(468);
      if (lookahead == '\\') ADVANCE(2253);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(65);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(2257);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(317);
      if (set_contains(aux_sym_atom_token1_character_set_2, 12, lookahead)) ADVANCE(72);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(323);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(2136);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(52);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2283);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(2285);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(2142);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '\'') ADVANCE(56);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2288);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(2290);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(2148);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '\'') ADVANCE(61);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2293);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(2295);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(2154);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(65);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2298);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(468);
      if (lookahead == '\\') ADVANCE(2300);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\'') ADVANCE(2160);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '\'') ADVANCE(72);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2303);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(2305);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '+') ADVANCE(2396);
      if (lookahead == '\\') ADVANCE(2307);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(2307);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(348);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2309);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym_empty_list);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(351);
      if (lookahead == '#') ADVANCE(438);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(89);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(14);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(52);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(56);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(61);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(72);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(87);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '#') ADVANCE(439);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(230);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(267);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(279);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(298);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(323);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(2258);
      if (lookahead == '\\') ADVANCE(93);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2346);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(2267);
      if (lookahead == '\\') ADVANCE(97);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2347);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(2272);
      if (lookahead == '\\') ADVANCE(99);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2348);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(2282);
      if (lookahead == '\\') ADVANCE(100);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2349);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(2287);
      if (lookahead == '\\') ADVANCE(240);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2350);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(298);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(2292);
      if (lookahead == '\\') ADVANCE(246);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2351);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(2297);
      if (lookahead == '\\') ADVANCE(248);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2352);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(2302);
      if (lookahead == '\\') ADVANCE(249);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2353);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '#') ADVANCE(435);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2354);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2355);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2356);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2357);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '#') ADVANCE(460);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2358);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2359);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2360);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_variable_term);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if ((set_contains(aux_sym__number_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2361);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2362);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(aux_sym_functional_notation_token1);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(aux_sym_functional_notation_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(aux_sym_functional_notation_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(aux_sym_functional_notation_token1);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '#') ADVANCE(505);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(aux_sym_functional_notation_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(212);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '#') ADVANCE(505);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(204);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(aux_sym_operation_1200xfx_token1);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(aux_sym_operation_1200fx_token1);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '.') ADVANCE(917);
      if (lookahead == ':') ADVANCE(1318);
      if (lookahead == '\\') ADVANCE(1318);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(2397);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '<') ADVANCE(2414);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '=') ADVANCE(2397);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(aux_sym_operation_700xfx_token1);
      if (lookahead == '=') ADVANCE(2397);
      if (lookahead == '>') ADVANCE(2414);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(aux_sym_operation_500yfx_token1);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(aux_sym_operation_500yfx_token1);
      if (lookahead == '-') ADVANCE(1409);
      if (lookahead == '>') ADVANCE(2384);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(483);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(485);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(118);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(495);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(167);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '#') ADVANCE(501);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(197);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2436);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2107);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2108);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(402);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym_operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '/') ADVANCE(2414);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(aux_sym_operation_200fy_token1);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 91,
        '\n', 94,
        ' ', 2,
        '#', 443,
        '%', 33,
        '\'', 2258,
        '/', 623,
        '\\', 93,
        ']', 2311,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(14);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 222,
        '\n', 242,
        ' ', 16,
        '#', 450,
        '%', 37,
        '\'', 2267,
        '/', 623,
        '\\', 97,
        ']', 2312,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(37);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 245,
        '\n', 247,
        ' ', 20,
        '#', 452,
        '%', 48,
        '\'', 2272,
        '/', 623,
        '\\', 99,
        ']', 2313,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(43);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 258,
        '\n', 270,
        ' ', 24,
        '#', 458,
        '%', 52,
        '\'', 2282,
        '/', 623,
        '\\', 100,
        ']', 2314,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(52);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 280,
        '\n', 256,
        ' ', 27,
        '#', 463,
        '%', 57,
        '\'', 2287,
        '/', 623,
        '\\', 240,
        ']', 2315,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(56);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 290,
        '\n', 283,
        ' ', 30,
        '#', 470,
        '%', 61,
        '\'', 2292,
        '/', 623,
        '\\', 246,
        ']', 2316,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(61);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 308,
        '\n', 309,
        ' ', 38,
        '#', 472,
        '%', 68,
        '\'', 2297,
        '/', 623,
        '\\', 248,
        ']', 2317,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(65);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      ADVANCE_MAP(
        '\t', 314,
        '\n', 326,
        ' ', 45,
        '#', 478,
        '%', 72,
        '\'', 2302,
        '/', 623,
        '\\', 249,
        ']', 2318,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(72);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2319);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(87);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(230);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2323);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(267);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(279);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2325);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(298);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(307);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(323);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_list_notation_token1);
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ']') ADVANCE(2310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(147);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(187);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(204);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(aux_sym_list_notation_token2);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '#') ADVANCE(513);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(214);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(487);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(127);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(137);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 92,
        '\n', 95,
        ' ', 3,
        '#', 443,
        '%', 44,
        '\'', 2258,
        '/', 624,
        '\\', 93,
        '}', 2329,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(14);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 96,
        '\n', 98,
        ' ', 18,
        '#', 450,
        '%', 47,
        '\'', 2267,
        '/', 624,
        '\\', 97,
        '}', 2330,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(37);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 231,
        '\n', 244,
        ' ', 21,
        '#', 452,
        '%', 43,
        '\'', 2272,
        '/', 624,
        '\\', 99,
        '}', 2331,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(43);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 259,
        '\n', 270,
        ' ', 25,
        '#', 458,
        '%', 52,
        '\'', 2282,
        '/', 624,
        '\\', 100,
        '}', 2332,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(52);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 281,
        '\n', 257,
        ' ', 29,
        '#', 463,
        '%', 66,
        '\'', 2287,
        '/', 624,
        '\\', 240,
        '}', 2333,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(56);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 286,
        '\n', 287,
        ' ', 31,
        '#', 470,
        '%', 67,
        '\'', 2292,
        '/', 624,
        '\\', 246,
        '}', 2334,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(61);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 299,
        '\n', 285,
        ' ', 39,
        '#', 472,
        '%', 65,
        '\'', 2297,
        '/', 624,
        '\\', 248,
        '}', 2335,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(65);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      ADVANCE_MAP(
        '\t', 315,
        '\n', 326,
        ' ', 46,
        '#', 478,
        '%', 72,
        '\'', 2302,
        '/', 624,
        '\\', 249,
        '}', 2336,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(72);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(435);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(87);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '%') ADVANCE(254);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2339);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(230);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(239);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(267);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(460);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(279);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '#') ADVANCE(464);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2343);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(298);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(307);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(323);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token1);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '}') ADVANCE(2328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(523);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token2);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token2);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(157);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym_curly_bracketed_notation_token2);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym__number_token1_character_set_1, 9, lookahead)) ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1884},
  [2] = {.lex_state = 1884},
  [3] = {.lex_state = 1884},
  [4] = {.lex_state = 310},
  [5] = {.lex_state = 310},
  [6] = {.lex_state = 310},
  [7] = {.lex_state = 310},
  [8] = {.lex_state = 310},
  [9] = {.lex_state = 310},
  [10] = {.lex_state = 310},
  [11] = {.lex_state = 310},
  [12] = {.lex_state = 310},
  [13] = {.lex_state = 310},
  [14] = {.lex_state = 310},
  [15] = {.lex_state = 310},
  [16] = {.lex_state = 310},
  [17] = {.lex_state = 310},
  [18] = {.lex_state = 310},
  [19] = {.lex_state = 310},
  [20] = {.lex_state = 310},
  [21] = {.lex_state = 310},
  [22] = {.lex_state = 310},
  [23] = {.lex_state = 310},
  [24] = {.lex_state = 310},
  [25] = {.lex_state = 310},
  [26] = {.lex_state = 310},
  [27] = {.lex_state = 310},
  [28] = {.lex_state = 310},
  [29] = {.lex_state = 310},
  [30] = {.lex_state = 310},
  [31] = {.lex_state = 310},
  [32] = {.lex_state = 310},
  [33] = {.lex_state = 310},
  [34] = {.lex_state = 310},
  [35] = {.lex_state = 310},
  [36] = {.lex_state = 310},
  [37] = {.lex_state = 310},
  [38] = {.lex_state = 310},
  [39] = {.lex_state = 310},
  [40] = {.lex_state = 310},
  [41] = {.lex_state = 310},
  [42] = {.lex_state = 310},
  [43] = {.lex_state = 310},
  [44] = {.lex_state = 310},
  [45] = {.lex_state = 310},
  [46] = {.lex_state = 310},
  [47] = {.lex_state = 310},
  [48] = {.lex_state = 310},
  [49] = {.lex_state = 310},
  [50] = {.lex_state = 310},
  [51] = {.lex_state = 310},
  [52] = {.lex_state = 310},
  [53] = {.lex_state = 310},
  [54] = {.lex_state = 310},
  [55] = {.lex_state = 310},
  [56] = {.lex_state = 310},
  [57] = {.lex_state = 310},
  [58] = {.lex_state = 310},
  [59] = {.lex_state = 310},
  [60] = {.lex_state = 310},
  [61] = {.lex_state = 310},
  [62] = {.lex_state = 310},
  [63] = {.lex_state = 310},
  [64] = {.lex_state = 310},
  [65] = {.lex_state = 310},
  [66] = {.lex_state = 310},
  [67] = {.lex_state = 310},
  [68] = {.lex_state = 310},
  [69] = {.lex_state = 310},
  [70] = {.lex_state = 310},
  [71] = {.lex_state = 310},
  [72] = {.lex_state = 310},
  [73] = {.lex_state = 310},
  [74] = {.lex_state = 310},
  [75] = {.lex_state = 310},
  [76] = {.lex_state = 310},
  [77] = {.lex_state = 310},
  [78] = {.lex_state = 310},
  [79] = {.lex_state = 310},
  [80] = {.lex_state = 310},
  [81] = {.lex_state = 310},
  [82] = {.lex_state = 310},
  [83] = {.lex_state = 310},
  [84] = {.lex_state = 310},
  [85] = {.lex_state = 310},
  [86] = {.lex_state = 310},
  [87] = {.lex_state = 310},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 1884},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 1884},
  [97] = {.lex_state = 73},
  [98] = {.lex_state = 1884},
  [99] = {.lex_state = 1884},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 73},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 330},
  [120] = {.lex_state = 330},
  [121] = {.lex_state = 330},
  [122] = {.lex_state = 331},
  [123] = {.lex_state = 331},
  [124] = {.lex_state = 332},
  [125] = {.lex_state = 331},
  [126] = {.lex_state = 333},
  [127] = {.lex_state = 334},
  [128] = {.lex_state = 331},
  [129] = {.lex_state = 331},
  [130] = {.lex_state = 331},
  [131] = {.lex_state = 331},
  [132] = {.lex_state = 331},
  [133] = {.lex_state = 331},
  [134] = {.lex_state = 331},
  [135] = {.lex_state = 331},
  [136] = {.lex_state = 331},
  [137] = {.lex_state = 331},
  [138] = {.lex_state = 331},
  [139] = {.lex_state = 331},
  [140] = {.lex_state = 331},
  [141] = {.lex_state = 333},
  [142] = {.lex_state = 331},
  [143] = {.lex_state = 332},
  [144] = {.lex_state = 332},
  [145] = {.lex_state = 331},
  [146] = {.lex_state = 334},
  [147] = {.lex_state = 332},
  [148] = {.lex_state = 334},
  [149] = {.lex_state = 335},
  [150] = {.lex_state = 336},
  [151] = {.lex_state = 335},
  [152] = {.lex_state = 335},
  [153] = {.lex_state = 335},
  [154] = {.lex_state = 336},
  [155] = {.lex_state = 337},
  [156] = {.lex_state = 337},
  [157] = {.lex_state = 337},
  [158] = {.lex_state = 337},
  [159] = {.lex_state = 337},
  [160] = {.lex_state = 337},
  [161] = {.lex_state = 335},
  [162] = {.lex_state = 335},
  [163] = {.lex_state = 335},
  [164] = {.lex_state = 335},
  [165] = {.lex_state = 335},
  [166] = {.lex_state = 335},
  [167] = {.lex_state = 335},
  [168] = {.lex_state = 335},
  [169] = {.lex_state = 335},
  [170] = {.lex_state = 335},
  [171] = {.lex_state = 337},
  [172] = {.lex_state = 335},
  [173] = {.lex_state = 335},
  [174] = {.lex_state = 337},
  [175] = {.lex_state = 337},
  [176] = {.lex_state = 337},
  [177] = {.lex_state = 337},
  [178] = {.lex_state = 337},
  [179] = {.lex_state = 336},
  [180] = {.lex_state = 336},
  [181] = {.lex_state = 336},
  [182] = {.lex_state = 336},
  [183] = {.lex_state = 335},
  [184] = {.lex_state = 337},
  [185] = {.lex_state = 337},
  [186] = {.lex_state = 337},
  [187] = {.lex_state = 337},
  [188] = {.lex_state = 337},
  [189] = {.lex_state = 337},
  [190] = {.lex_state = 336},
  [191] = {.lex_state = 337},
  [192] = {.lex_state = 336},
  [193] = {.lex_state = 336},
  [194] = {.lex_state = 336},
  [195] = {.lex_state = 336},
  [196] = {.lex_state = 335},
  [197] = {.lex_state = 336},
  [198] = {.lex_state = 336},
  [199] = {.lex_state = 336},
  [200] = {.lex_state = 336},
  [201] = {.lex_state = 336},
  [202] = {.lex_state = 336},
  [203] = {.lex_state = 336},
  [204] = {.lex_state = 336},
  [205] = {.lex_state = 335},
  [206] = {.lex_state = 337},
  [207] = {.lex_state = 337},
  [208] = {.lex_state = 335},
  [209] = {.lex_state = 335},
  [210] = {.lex_state = 337},
  [211] = {.lex_state = 335},
  [212] = {.lex_state = 337},
  [213] = {.lex_state = 74},
  [214] = {.lex_state = 74},
  [215] = {.lex_state = 74},
  [216] = {.lex_state = 74},
  [217] = {.lex_state = 338},
  [218] = {.lex_state = 339},
  [219] = {.lex_state = 340},
  [220] = {.lex_state = 339},
  [221] = {.lex_state = 339},
  [222] = {.lex_state = 340},
  [223] = {.lex_state = 341},
  [224] = {.lex_state = 341},
  [225] = {.lex_state = 340},
  [226] = {.lex_state = 341},
  [227] = {.lex_state = 341},
  [228] = {.lex_state = 339},
  [229] = {.lex_state = 341},
  [230] = {.lex_state = 342},
  [231] = {.lex_state = 342},
  [232] = {.lex_state = 343},
  [233] = {.lex_state = 342},
  [234] = {.lex_state = 342},
  [235] = {.lex_state = 343},
  [236] = {.lex_state = 343},
  [237] = {.lex_state = 343},
  [238] = {.lex_state = 343},
  [239] = {.lex_state = 343},
  [240] = {.lex_state = 342},
  [241] = {.lex_state = 1881},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_operation_1200xfx_token1] = ACTIONS(1),
    [aux_sym_operation_1200fx_token1] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS] = ACTIONS(1),
    [aux_sym_operation_500yfx_token1] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(241),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(95),
    [sym__compound_term] = STATE(95),
    [sym__atomic_term] = STATE(95),
    [sym__number] = STATE(95),
    [sym__negative_number] = STATE(95),
    [sym_atom] = STATE(101),
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
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [aux_sym__number_token1] = ACTIONS(11),
    [aux_sym__number_token2] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_atom_token1] = ACTIONS(15),
    [sym_empty_list] = ACTIONS(15),
    [sym_empty_curly_brackets] = ACTIONS(15),
    [sym_variable_term] = ACTIONS(11),
    [aux_sym__operator_notation_token1] = ACTIONS(9),
    [aux_sym_operation_1200fx_token1] = ACTIONS(17),
    [anon_sym_BSLASH_PLUS] = ACTIONS(19),
    [aux_sym_operation_200fy_token1] = ACTIONS(21),
    [aux_sym_list_notation_token1] = ACTIONS(23),
    [aux_sym_curly_bracketed_notation_token1] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_COLON_DASH,
    ACTIONS(38), 1,
      anon_sym_DASH,
    ACTIONS(44), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(47), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(50), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(53), 1,
      aux_sym_list_notation_token1,
    ACTIONS(56), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(32), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(35), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(41), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(2), 3,
      sym_directive_term,
      sym_clause_term,
      aux_sym_source_file_repeat1,
    STATE(95), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [73] = 15,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_COLON_DASH,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(11), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(2), 3,
      sym_directive_term,
      sym_clause_term,
      aux_sym_source_file_repeat1,
    STATE(95), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [146] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(119), 1,
      sym_atom,
    STATE(217), 1,
      sym__arg,
    STATE(238), 1,
      sym__list_notation_items,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(63), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(142), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [214] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(221), 1,
      sym__arg,
    STATE(233), 1,
      sym_arg_list,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [282] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(119), 1,
      sym_atom,
    STATE(217), 1,
      sym__arg,
    STATE(236), 1,
      sym__list_notation_items,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(63), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(142), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [350] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(119), 1,
      sym_atom,
    STATE(217), 1,
      sym__arg,
    STATE(232), 1,
      sym__list_notation_items,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(63), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(142), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [418] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(221), 1,
      sym__arg,
    STATE(234), 1,
      sym_arg_list,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [486] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(221), 1,
      sym__arg,
    STATE(240), 1,
      sym_arg_list,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [554] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(221), 1,
      sym__arg,
    STATE(230), 1,
      sym_arg_list,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [622] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(221), 1,
      sym__arg,
    STATE(231), 1,
      sym_arg_list,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [690] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(119), 1,
      sym_atom,
    STATE(217), 1,
      sym__arg,
    STATE(239), 1,
      sym__list_notation_items,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(63), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(142), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [758] = 14,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(119), 1,
      sym_atom,
    STATE(217), 1,
      sym__arg,
    STATE(235), 1,
      sym__list_notation_items,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(63), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(142), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [826] = 13,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(127), 1,
      sym_atom,
    STATE(228), 1,
      sym__arg,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(81), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(185), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [891] = 13,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(147), 1,
      sym_atom,
    STATE(237), 1,
      sym__arg,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(99), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(154), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [956] = 13,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(124), 1,
      sym_atom,
    STATE(225), 1,
      sym__arg,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(115), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(190), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1021] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(117), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(178), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1083] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(119), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(182), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1145] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(121), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(131), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1207] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(123), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(134), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1269] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(125), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(207), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1331] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(129), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(209), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1393] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(145), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(210), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1455] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(147), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(211), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1517] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(149), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(212), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1579] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(151), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(122), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1641] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(153), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(113), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1703] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(155), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(132), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1765] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(157), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(145), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1827] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(159), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(114), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1889] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(161), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(118), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1951] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(163), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(117), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2013] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(165), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(116), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2075] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(167), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(103), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2137] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(169), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(109), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2199] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(171), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(108), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2261] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(173), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(102), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2323] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(175), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(100), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2385] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(177), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(205), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2447] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(179), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(183), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2509] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(181), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(133), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2571] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(183), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(208), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2633] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(185), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(107), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2695] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(187), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(106), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2757] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(21), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(23), 1,
      aux_sym_list_notation_token1,
    ACTIONS(25), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(101), 1,
      sym_atom,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(15), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(189), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(105), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2819] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(191), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(206), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2881] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(193), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(123), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [2943] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(195), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(203), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3005] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(197), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(136), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3067] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(199), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(202), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3129] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(201), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(137), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3191] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(203), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(201), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3253] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(205), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(200), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3315] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(207), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(199), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3377] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(209), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(198), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3439] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(211), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(197), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3501] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(213), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(150), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3563] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(215), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(195), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3625] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(217), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(157), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3687] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(219), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(189), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3749] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(221), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(177), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3811] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(223), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(181), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3873] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(107), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(109), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(111), 1,
      aux_sym_list_notation_token1,
    ACTIONS(113), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(143), 1,
      sym_atom,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(103), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(225), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(180), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3935] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(227), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(176), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [3997] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(229), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(172), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4059] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(231), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(149), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4121] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(233), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(170), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4183] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(235), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(175), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4245] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(237), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(160), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4307] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(239), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(169), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4369] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(241), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(168), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4431] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(243), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(167), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4493] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(245), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(166), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4555] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(247), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(155), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4617] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(249), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(135), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4679] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(251), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(184), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4741] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(253), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(165), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4803] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(255), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(164), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4865] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(257), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(153), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4927] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(259), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(152), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [4989] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(139), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(141), 1,
      aux_sym_list_notation_token1,
    ACTIONS(143), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(126), 1,
      sym_atom,
    ACTIONS(127), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(133), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(261), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(151), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5051] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(263), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(139), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5113] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(73), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(75), 1,
      aux_sym_list_notation_token1,
    ACTIONS(77), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(120), 1,
      sym_atom,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(67), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(265), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(138), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5175] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(267), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(171), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5237] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(269), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(174), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5299] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(271), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(158), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5361] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      aux_sym_operation_1200fx_token1,
    ACTIONS(89), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(91), 1,
      aux_sym_operation_200fy_token1,
    ACTIONS(93), 1,
      aux_sym_list_notation_token1,
    ACTIONS(95), 1,
      aux_sym_curly_bracketed_notation_token1,
    STATE(146), 1,
      sym_atom,
    ACTIONS(79), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(85), 3,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(273), 3,
      aux_sym__number_token1,
      aux_sym__number_token2,
      sym_variable_term,
    STATE(159), 21,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym__negative_number,
      sym_functional_notation,
      sym__operator_notation,
      sym_operation_1200xfx,
      sym_operation_1200fx,
      sym_operation_1100xfy,
      sym_operation_1050xfy,
      sym_operation_1000xfy,
      sym_operation_900fy,
      sym_operation_700xfx,
      sym_operation_500yfx,
      sym_operation_400yfx,
      sym_operation_200xfx,
      sym_operation_200xfy,
      sym_operation_200fy,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [5423] = 3,
    ACTIONS(278), 1,
      anon_sym_STAR_SLASH,
    STATE(88), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(275), 23,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5455] = 2,
    ACTIONS(280), 6,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
    ACTIONS(282), 19,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5485] = 3,
    ACTIONS(286), 1,
      anon_sym_STAR_SLASH,
    STATE(88), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(284), 23,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5517] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(284), 22,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_PERCENT,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5548] = 2,
    STATE(90), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(290), 23,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5577] = 2,
    STATE(91), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(292), 23,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      aux_sym_directive_term_token1,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5606] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 15,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      aux_sym__number_token1,
      aux_sym__number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      aux_sym__operator_notation_token1,
      aux_sym_operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym_operation_200fy_token1,
      aux_sym_list_notation_token1,
      aux_sym_curly_bracketed_notation_token1,
  [5630] = 14,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(310), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    STATE(213), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(298), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [5676] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 15,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      aux_sym__number_token1,
      aux_sym__number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      aux_sym__operator_notation_token1,
      aux_sym_operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym_operation_200fy_token1,
      aux_sym_list_notation_token1,
      aux_sym_curly_bracketed_notation_token1,
  [5700] = 1,
    ACTIONS(328), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [5720] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 15,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      aux_sym__number_token1,
      aux_sym__number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      aux_sym__operator_notation_token1,
      aux_sym_operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym_operation_200fy_token1,
      aux_sym_list_notation_token1,
      aux_sym_curly_bracketed_notation_token1,
  [5744] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 15,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      aux_sym__number_token1,
      aux_sym__number_token2,
      anon_sym_DASH,
      aux_sym_atom_token1,
      sym_empty_list,
      sym_empty_curly_brackets,
      sym_variable_term,
      aux_sym__operator_notation_token1,
      aux_sym_operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym_operation_200fy_token1,
      aux_sym_list_notation_token1,
      aux_sym_curly_bracketed_notation_token1,
  [5768] = 14,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(340), 1,
      anon_sym_DOT,
    STATE(215), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(338), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [5814] = 2,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [5836] = 3,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(346), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [5859] = 4,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(348), 13,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
  [5884] = 1,
    ACTIONS(350), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [5903] = 9,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(352), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_operation_1200xfx_token1,
  [5938] = 6,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(354), 11,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [5967] = 3,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(356), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [5990] = 1,
    ACTIONS(358), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6009] = 3,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(360), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [6032] = 1,
    ACTIONS(362), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6051] = 1,
    ACTIONS(364), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6070] = 1,
    ACTIONS(366), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6089] = 9,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(368), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_operation_1200xfx_token1,
  [6124] = 7,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(370), 9,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
  [6155] = 1,
    ACTIONS(372), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6174] = 5,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(374), 12,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
  [6201] = 8,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(376), 8,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_operation_1200xfx_token1,
  [6234] = 9,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    ACTIONS(314), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(316), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(318), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(320), 1,
      anon_sym_STAR_STAR,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(308), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(378), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_operation_1200xfx_token1,
  [6269] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 3,
      aux_sym_arg_list_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
    ACTIONS(342), 9,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6292] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6313] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6332] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(386), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(378), 3,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6366] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(374), 8,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6392] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 2,
      aux_sym_arg_list_token1,
      aux_sym_list_notation_token2,
    ACTIONS(342), 9,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6414] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(350), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6432] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [6452] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 2,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
    ACTIONS(342), 9,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6474] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6492] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6510] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6528] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(386), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(368), 3,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6562] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(386), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(370), 5,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6592] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(354), 7,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6620] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(386), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(376), 4,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6652] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(386), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(352), 3,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6686] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(348), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6710] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(360), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6732] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(358), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6750] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(346), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6772] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(372), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6790] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [6808] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(388), 1,
      anon_sym_DASH_GT,
    ACTIONS(390), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(392), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(394), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(406), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(382), 3,
      aux_sym_arg_list_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6844] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [6864] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [6882] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_STAR_STAR,
    ACTIONS(398), 1,
      anon_sym_CARET,
    ACTIONS(356), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6904] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6924] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      aux_sym_list_notation_token2,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6946] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6964] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(358), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [6981] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(370), 4,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      aux_sym_list_notation_token2,
  [7010] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(352), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7043] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(354), 6,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_curly_bracketed_notation_token2,
  [7070] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7091] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      aux_sym_list_notation_token2,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7126] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(352), 2,
      aux_sym_functional_notation_token1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7159] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(350), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7176] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(458), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7211] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(378), 2,
      aux_sym_functional_notation_token1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7244] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(376), 3,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_operation_1200xfx_token1,
  [7275] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(374), 7,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
  [7300] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [7317] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [7334] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [7351] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(368), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7384] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(370), 4,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      aux_sym_curly_bracketed_notation_token2,
  [7413] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(378), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7446] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(376), 3,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7477] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(374), 7,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7502] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(348), 8,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7525] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(360), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7546] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(368), 2,
      aux_sym_functional_notation_token1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7579] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(346), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_curly_bracketed_notation_token2,
  [7600] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(372), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [7617] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(370), 4,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
  [7646] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(348), 8,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
  [7669] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(360), 9,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [7690] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(358), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7707] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(354), 6,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7734] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(350), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [7751] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(352), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7784] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(354), 6,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_list_notation_token2,
  [7811] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
  [7832] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(462), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(464), 1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7867] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [7888] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(382), 2,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
  [7923] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7940] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7957] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7974] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(346), 9,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
  [7995] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(382), 2,
      aux_sym_arg_list_token1,
      aux_sym_list_notation_token2,
  [8030] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(372), 11,
      anon_sym_SEMI,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8047] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [8064] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [8081] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [8098] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(368), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8131] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(350), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_curly_bracketed_notation_token2,
  [8148] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(378), 2,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8181] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(440), 1,
      anon_sym_DASH_GT,
    ACTIONS(408), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(376), 3,
      anon_sym_SEMI,
      aux_sym_operation_1200xfx_token1,
      aux_sym_list_notation_token2,
  [8212] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(374), 7,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_list_notation_token2,
  [8237] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(414), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(348), 8,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_list_notation_token2,
  [8260] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(360), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
  [8281] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(358), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [8298] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      anon_sym_STAR_STAR,
    ACTIONS(418), 1,
      anon_sym_CARET,
    ACTIONS(346), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      aux_sym_list_notation_token2,
  [8319] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(372), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym_operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym_operation_700xfx_token1,
      aux_sym_operation_500yfx_token1,
      aux_sym_operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym_list_notation_token2,
  [8336] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(462), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(466), 1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8371] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(468), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8406] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(470), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8441] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(462), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(472), 1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8476] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(462), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(474), 1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8511] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(476), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8546] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_DASH_GT,
    ACTIONS(426), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(428), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(430), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(432), 1,
      anon_sym_STAR_STAR,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(462), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(478), 1,
      aux_sym_curly_bracketed_notation_token2,
    ACTIONS(422), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8581] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      aux_sym_operation_700xfx_token1,
    ACTIONS(450), 1,
      aux_sym_operation_500yfx_token1,
    ACTIONS(452), 1,
      aux_sym_operation_400yfx_token1,
    ACTIONS(454), 1,
      anon_sym_STAR_STAR,
    ACTIONS(456), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      aux_sym_operation_1200xfx_token1,
    ACTIONS(480), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(444), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8616] = 5,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    ACTIONS(304), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(482), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [8634] = 5,
    ACTIONS(489), 1,
      anon_sym_PERCENT,
    ACTIONS(492), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(486), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [8652] = 5,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    ACTIONS(304), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(482), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [8670] = 1,
    ACTIONS(280), 6,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
  [8679] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      aux_sym_arg_list_token1,
    ACTIONS(501), 1,
      aux_sym_list_notation_token2,
    ACTIONS(503), 1,
      aux_sym__list_notation_items_token1,
    STATE(222), 1,
      aux_sym_arg_list_repeat1,
  [8695] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(505), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(507), 1,
      aux_sym_arg_list_token1,
    STATE(220), 1,
      aux_sym_arg_list_repeat1,
  [8708] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym_arg_list_token1,
    ACTIONS(512), 1,
      aux_sym_list_notation_token2,
    STATE(219), 1,
      aux_sym_arg_list_repeat1,
  [8721] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      aux_sym_functional_notation_token1,
    ACTIONS(514), 1,
      aux_sym_arg_list_token1,
    STATE(220), 1,
      aux_sym_arg_list_repeat1,
  [8734] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_arg_list_token1,
    ACTIONS(517), 1,
      aux_sym_functional_notation_token1,
    STATE(218), 1,
      aux_sym_arg_list_repeat1,
  [8747] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      aux_sym_arg_list_token1,
    ACTIONS(519), 1,
      aux_sym_list_notation_token2,
    STATE(219), 1,
      aux_sym_arg_list_repeat1,
  [8760] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(521), 2,
      aux_sym__number_token1,
      aux_sym__number_token2,
  [8768] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(523), 2,
      aux_sym__number_token1,
      aux_sym__number_token2,
  [8776] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(512), 2,
      aux_sym_arg_list_token1,
      aux_sym_list_notation_token2,
  [8784] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(525), 2,
      aux_sym__number_token1,
      aux_sym__number_token2,
  [8792] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(527), 2,
      aux_sym__number_token1,
      aux_sym__number_token2,
  [8800] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(512), 2,
      aux_sym_functional_notation_token1,
      aux_sym_arg_list_token1,
  [8808] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(529), 2,
      aux_sym__number_token1,
      aux_sym__number_token2,
  [8816] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      aux_sym_functional_notation_token1,
  [8823] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      aux_sym_functional_notation_token1,
  [8830] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_list_notation_token2,
  [8837] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      aux_sym_functional_notation_token1,
  [8844] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      aux_sym_functional_notation_token1,
  [8851] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      aux_sym_list_notation_token2,
  [8858] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      aux_sym_list_notation_token2,
  [8865] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_list_notation_token2,
  [8872] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      aux_sym_list_notation_token2,
  [8879] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_list_notation_token2,
  [8886] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      aux_sym_functional_notation_token1,
  [8893] = 2,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 282,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 418,
  [SMALL_STATE(9)] = 486,
  [SMALL_STATE(10)] = 554,
  [SMALL_STATE(11)] = 622,
  [SMALL_STATE(12)] = 690,
  [SMALL_STATE(13)] = 758,
  [SMALL_STATE(14)] = 826,
  [SMALL_STATE(15)] = 891,
  [SMALL_STATE(16)] = 956,
  [SMALL_STATE(17)] = 1021,
  [SMALL_STATE(18)] = 1083,
  [SMALL_STATE(19)] = 1145,
  [SMALL_STATE(20)] = 1207,
  [SMALL_STATE(21)] = 1269,
  [SMALL_STATE(22)] = 1331,
  [SMALL_STATE(23)] = 1393,
  [SMALL_STATE(24)] = 1455,
  [SMALL_STATE(25)] = 1517,
  [SMALL_STATE(26)] = 1579,
  [SMALL_STATE(27)] = 1641,
  [SMALL_STATE(28)] = 1703,
  [SMALL_STATE(29)] = 1765,
  [SMALL_STATE(30)] = 1827,
  [SMALL_STATE(31)] = 1889,
  [SMALL_STATE(32)] = 1951,
  [SMALL_STATE(33)] = 2013,
  [SMALL_STATE(34)] = 2075,
  [SMALL_STATE(35)] = 2137,
  [SMALL_STATE(36)] = 2199,
  [SMALL_STATE(37)] = 2261,
  [SMALL_STATE(38)] = 2323,
  [SMALL_STATE(39)] = 2385,
  [SMALL_STATE(40)] = 2447,
  [SMALL_STATE(41)] = 2509,
  [SMALL_STATE(42)] = 2571,
  [SMALL_STATE(43)] = 2633,
  [SMALL_STATE(44)] = 2695,
  [SMALL_STATE(45)] = 2757,
  [SMALL_STATE(46)] = 2819,
  [SMALL_STATE(47)] = 2881,
  [SMALL_STATE(48)] = 2943,
  [SMALL_STATE(49)] = 3005,
  [SMALL_STATE(50)] = 3067,
  [SMALL_STATE(51)] = 3129,
  [SMALL_STATE(52)] = 3191,
  [SMALL_STATE(53)] = 3253,
  [SMALL_STATE(54)] = 3315,
  [SMALL_STATE(55)] = 3377,
  [SMALL_STATE(56)] = 3439,
  [SMALL_STATE(57)] = 3501,
  [SMALL_STATE(58)] = 3563,
  [SMALL_STATE(59)] = 3625,
  [SMALL_STATE(60)] = 3687,
  [SMALL_STATE(61)] = 3749,
  [SMALL_STATE(62)] = 3811,
  [SMALL_STATE(63)] = 3873,
  [SMALL_STATE(64)] = 3935,
  [SMALL_STATE(65)] = 3997,
  [SMALL_STATE(66)] = 4059,
  [SMALL_STATE(67)] = 4121,
  [SMALL_STATE(68)] = 4183,
  [SMALL_STATE(69)] = 4245,
  [SMALL_STATE(70)] = 4307,
  [SMALL_STATE(71)] = 4369,
  [SMALL_STATE(72)] = 4431,
  [SMALL_STATE(73)] = 4493,
  [SMALL_STATE(74)] = 4555,
  [SMALL_STATE(75)] = 4617,
  [SMALL_STATE(76)] = 4679,
  [SMALL_STATE(77)] = 4741,
  [SMALL_STATE(78)] = 4803,
  [SMALL_STATE(79)] = 4865,
  [SMALL_STATE(80)] = 4927,
  [SMALL_STATE(81)] = 4989,
  [SMALL_STATE(82)] = 5051,
  [SMALL_STATE(83)] = 5113,
  [SMALL_STATE(84)] = 5175,
  [SMALL_STATE(85)] = 5237,
  [SMALL_STATE(86)] = 5299,
  [SMALL_STATE(87)] = 5361,
  [SMALL_STATE(88)] = 5423,
  [SMALL_STATE(89)] = 5455,
  [SMALL_STATE(90)] = 5485,
  [SMALL_STATE(91)] = 5517,
  [SMALL_STATE(92)] = 5548,
  [SMALL_STATE(93)] = 5577,
  [SMALL_STATE(94)] = 5606,
  [SMALL_STATE(95)] = 5630,
  [SMALL_STATE(96)] = 5676,
  [SMALL_STATE(97)] = 5700,
  [SMALL_STATE(98)] = 5720,
  [SMALL_STATE(99)] = 5744,
  [SMALL_STATE(100)] = 5768,
  [SMALL_STATE(101)] = 5814,
  [SMALL_STATE(102)] = 5836,
  [SMALL_STATE(103)] = 5859,
  [SMALL_STATE(104)] = 5884,
  [SMALL_STATE(105)] = 5903,
  [SMALL_STATE(106)] = 5938,
  [SMALL_STATE(107)] = 5967,
  [SMALL_STATE(108)] = 5990,
  [SMALL_STATE(109)] = 6009,
  [SMALL_STATE(110)] = 6032,
  [SMALL_STATE(111)] = 6051,
  [SMALL_STATE(112)] = 6070,
  [SMALL_STATE(113)] = 6089,
  [SMALL_STATE(114)] = 6124,
  [SMALL_STATE(115)] = 6155,
  [SMALL_STATE(116)] = 6174,
  [SMALL_STATE(117)] = 6201,
  [SMALL_STATE(118)] = 6234,
  [SMALL_STATE(119)] = 6269,
  [SMALL_STATE(120)] = 6292,
  [SMALL_STATE(121)] = 6313,
  [SMALL_STATE(122)] = 6332,
  [SMALL_STATE(123)] = 6366,
  [SMALL_STATE(124)] = 6392,
  [SMALL_STATE(125)] = 6414,
  [SMALL_STATE(126)] = 6432,
  [SMALL_STATE(127)] = 6452,
  [SMALL_STATE(128)] = 6474,
  [SMALL_STATE(129)] = 6492,
  [SMALL_STATE(130)] = 6510,
  [SMALL_STATE(131)] = 6528,
  [SMALL_STATE(132)] = 6562,
  [SMALL_STATE(133)] = 6592,
  [SMALL_STATE(134)] = 6620,
  [SMALL_STATE(135)] = 6652,
  [SMALL_STATE(136)] = 6686,
  [SMALL_STATE(137)] = 6710,
  [SMALL_STATE(138)] = 6732,
  [SMALL_STATE(139)] = 6750,
  [SMALL_STATE(140)] = 6772,
  [SMALL_STATE(141)] = 6790,
  [SMALL_STATE(142)] = 6808,
  [SMALL_STATE(143)] = 6844,
  [SMALL_STATE(144)] = 6864,
  [SMALL_STATE(145)] = 6882,
  [SMALL_STATE(146)] = 6904,
  [SMALL_STATE(147)] = 6924,
  [SMALL_STATE(148)] = 6946,
  [SMALL_STATE(149)] = 6964,
  [SMALL_STATE(150)] = 6981,
  [SMALL_STATE(151)] = 7010,
  [SMALL_STATE(152)] = 7043,
  [SMALL_STATE(153)] = 7070,
  [SMALL_STATE(154)] = 7091,
  [SMALL_STATE(155)] = 7126,
  [SMALL_STATE(156)] = 7159,
  [SMALL_STATE(157)] = 7176,
  [SMALL_STATE(158)] = 7211,
  [SMALL_STATE(159)] = 7244,
  [SMALL_STATE(160)] = 7275,
  [SMALL_STATE(161)] = 7300,
  [SMALL_STATE(162)] = 7317,
  [SMALL_STATE(163)] = 7334,
  [SMALL_STATE(164)] = 7351,
  [SMALL_STATE(165)] = 7384,
  [SMALL_STATE(166)] = 7413,
  [SMALL_STATE(167)] = 7446,
  [SMALL_STATE(168)] = 7477,
  [SMALL_STATE(169)] = 7502,
  [SMALL_STATE(170)] = 7525,
  [SMALL_STATE(171)] = 7546,
  [SMALL_STATE(172)] = 7579,
  [SMALL_STATE(173)] = 7600,
  [SMALL_STATE(174)] = 7617,
  [SMALL_STATE(175)] = 7646,
  [SMALL_STATE(176)] = 7669,
  [SMALL_STATE(177)] = 7690,
  [SMALL_STATE(178)] = 7707,
  [SMALL_STATE(179)] = 7734,
  [SMALL_STATE(180)] = 7751,
  [SMALL_STATE(181)] = 7784,
  [SMALL_STATE(182)] = 7811,
  [SMALL_STATE(183)] = 7832,
  [SMALL_STATE(184)] = 7867,
  [SMALL_STATE(185)] = 7888,
  [SMALL_STATE(186)] = 7923,
  [SMALL_STATE(187)] = 7940,
  [SMALL_STATE(188)] = 7957,
  [SMALL_STATE(189)] = 7974,
  [SMALL_STATE(190)] = 7995,
  [SMALL_STATE(191)] = 8030,
  [SMALL_STATE(192)] = 8047,
  [SMALL_STATE(193)] = 8064,
  [SMALL_STATE(194)] = 8081,
  [SMALL_STATE(195)] = 8098,
  [SMALL_STATE(196)] = 8131,
  [SMALL_STATE(197)] = 8148,
  [SMALL_STATE(198)] = 8181,
  [SMALL_STATE(199)] = 8212,
  [SMALL_STATE(200)] = 8237,
  [SMALL_STATE(201)] = 8260,
  [SMALL_STATE(202)] = 8281,
  [SMALL_STATE(203)] = 8298,
  [SMALL_STATE(204)] = 8319,
  [SMALL_STATE(205)] = 8336,
  [SMALL_STATE(206)] = 8371,
  [SMALL_STATE(207)] = 8406,
  [SMALL_STATE(208)] = 8441,
  [SMALL_STATE(209)] = 8476,
  [SMALL_STATE(210)] = 8511,
  [SMALL_STATE(211)] = 8546,
  [SMALL_STATE(212)] = 8581,
  [SMALL_STATE(213)] = 8616,
  [SMALL_STATE(214)] = 8634,
  [SMALL_STATE(215)] = 8652,
  [SMALL_STATE(216)] = 8670,
  [SMALL_STATE(217)] = 8679,
  [SMALL_STATE(218)] = 8695,
  [SMALL_STATE(219)] = 8708,
  [SMALL_STATE(220)] = 8721,
  [SMALL_STATE(221)] = 8734,
  [SMALL_STATE(222)] = 8747,
  [SMALL_STATE(223)] = 8760,
  [SMALL_STATE(224)] = 8768,
  [SMALL_STATE(225)] = 8776,
  [SMALL_STATE(226)] = 8784,
  [SMALL_STATE(227)] = 8792,
  [SMALL_STATE(228)] = 8800,
  [SMALL_STATE(229)] = 8808,
  [SMALL_STATE(230)] = 8816,
  [SMALL_STATE(231)] = 8823,
  [SMALL_STATE(232)] = 8830,
  [SMALL_STATE(233)] = 8837,
  [SMALL_STATE(234)] = 8844,
  [SMALL_STATE(235)] = 8851,
  [SMALL_STATE(236)] = 8858,
  [SMALL_STATE(237)] = 8865,
  [SMALL_STATE(238)] = 8872,
  [SMALL_STATE(239)] = 8879,
  [SMALL_STATE(240)] = 8886,
  [SMALL_STATE(241)] = 8893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfy, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_500yfx, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__negative_number, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1200fx, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_900fy, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200fy, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_200xfx, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_400yfx, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1100xfy, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1000xfy, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_700xfx, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1050xfy, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_1200xfx, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(214),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [553] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
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
