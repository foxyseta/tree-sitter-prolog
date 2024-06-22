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
#define STATE_COUNT 253
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  aux_sym_term_token1 = 28,
  aux_sym_number_token1 = 29,
  aux_sym_number_token2 = 30,
  anon_sym_DASH = 31,
  anon_sym_a = 32,
  anon_sym_b = 33,
  anon_sym_r = 34,
  anon_sym_f = 35,
  anon_sym_t = 36,
  anon_sym_n = 37,
  anon_sym_v = 38,
  aux_sym_atom_token1 = 39,
  anon_sym_x = 40,
  aux_sym_atom_token2 = 41,
  sym_empty_list = 42,
  sym_empty_curly_brackets = 43,
  aux_sym__functional_notation_token1 = 44,
  aux_sym_arg_list_token1 = 45,
  aux_sym__operator_notation_token1 = 46,
  aux_sym__operation_1200xfx_token1 = 47,
  aux_sym__operation_1200fx_token1 = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_BQUOTE_COMMA_BQUOTE = 50,
  anon_sym_BSLASH_PLUS = 51,
  aux_sym__operation_700xfx_token1 = 52,
  aux_sym__operation_500yfx_token1 = 53,
  aux_sym__operation_400yfx_token1 = 54,
  anon_sym_STAR_STAR = 55,
  anon_sym_CARET = 56,
  aux_sym__operation_200fy_token1 = 57,
  aux_sym__list_notation_token1 = 58,
  aux_sym__list_notation_token2 = 59,
  aux_sym__list_notation_items_token1 = 60,
  sym_source_file = 61,
  sym_directive_term = 62,
  sym_clause_term = 63,
  sym_term = 64,
  sym_compound_term = 65,
  sym_atomic_term = 66,
  sym_number = 67,
  sym_negative_number = 68,
  sym_atom = 69,
  sym__functional_notation = 70,
  sym_arg_list = 71,
  sym_arg = 72,
  sym__operator_notation = 73,
  sym__operation_1200xfx = 74,
  sym__operation_1200fx = 75,
  sym__operation_1100xfy = 76,
  sym__operation_1050xfy = 77,
  sym__operation_1000xfy = 78,
  sym__operation_900fy = 79,
  sym__operation_700xfx = 80,
  sym__operation_500yfx = 81,
  sym__operation_400yfx = 82,
  sym__operation_200xfx = 83,
  sym__operation_200xfy = 84,
  sym__operation_200fy = 85,
  sym__list_notation = 86,
  sym__list_notation_items = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_directive_term_repeat1 = 89,
  aux_sym_directive_term_repeat2 = 90,
  aux_sym_atom_repeat1 = 91,
  aux_sym_atom_repeat2 = 92,
  aux_sym_atom_repeat3 = 93,
  aux_sym_atom_repeat4 = 94,
  aux_sym_atom_repeat5 = 95,
  aux_sym_arg_list_repeat1 = 96,
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
  [aux_sym_term_token1] = "term_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DASH] = "-",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_r] = "r",
  [anon_sym_f] = "f",
  [anon_sym_t] = "t",
  [anon_sym_n] = "n",
  [anon_sym_v] = "v",
  [aux_sym_atom_token1] = "atom_token1",
  [anon_sym_x] = "x",
  [aux_sym_atom_token2] = "atom_token2",
  [sym_empty_list] = "empty_list",
  [sym_empty_curly_brackets] = "empty_curly_brackets",
  [aux_sym__functional_notation_token1] = "_functional_notation_token1",
  [aux_sym_arg_list_token1] = "arg_list_token1",
  [aux_sym__operator_notation_token1] = "_operator_notation_token1",
  [aux_sym__operation_1200xfx_token1] = "_operation_1200xfx_token1",
  [aux_sym__operation_1200fx_token1] = "_operation_1200fx_token1",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_BQUOTE_COMMA_BQUOTE] = "`,`",
  [anon_sym_BSLASH_PLUS] = "\\+",
  [aux_sym__operation_700xfx_token1] = "_operation_700xfx_token1",
  [aux_sym__operation_500yfx_token1] = "_operation_500yfx_token1",
  [aux_sym__operation_400yfx_token1] = "_operation_400yfx_token1",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET] = "^",
  [aux_sym__operation_200fy_token1] = "_operation_200fy_token1",
  [aux_sym__list_notation_token1] = "_list_notation_token1",
  [aux_sym__list_notation_token2] = "_list_notation_token2",
  [aux_sym__list_notation_items_token1] = "_list_notation_items_token1",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym_term] = "term",
  [sym_compound_term] = "compound_term",
  [sym_atomic_term] = "atomic_term",
  [sym_number] = "number",
  [sym_negative_number] = "negative_number",
  [sym_atom] = "atom",
  [sym__functional_notation] = "_functional_notation",
  [sym_arg_list] = "arg_list",
  [sym_arg] = "arg",
  [sym__operator_notation] = "_operator_notation",
  [sym__operation_1200xfx] = "_operation_1200xfx",
  [sym__operation_1200fx] = "_operation_1200fx",
  [sym__operation_1100xfy] = "_operation_1100xfy",
  [sym__operation_1050xfy] = "_operation_1050xfy",
  [sym__operation_1000xfy] = "_operation_1000xfy",
  [sym__operation_900fy] = "_operation_900fy",
  [sym__operation_700xfx] = "_operation_700xfx",
  [sym__operation_500yfx] = "_operation_500yfx",
  [sym__operation_400yfx] = "_operation_400yfx",
  [sym__operation_200xfx] = "_operation_200xfx",
  [sym__operation_200xfy] = "_operation_200xfy",
  [sym__operation_200fy] = "_operation_200fy",
  [sym__list_notation] = "_list_notation",
  [sym__list_notation_items] = "_list_notation_items",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_term_repeat1] = "directive_term_repeat1",
  [aux_sym_directive_term_repeat2] = "directive_term_repeat2",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_atom_repeat2] = "atom_repeat2",
  [aux_sym_atom_repeat3] = "atom_repeat3",
  [aux_sym_atom_repeat4] = "atom_repeat4",
  [aux_sym_atom_repeat5] = "atom_repeat5",
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
  [aux_sym_term_token1] = aux_sym_term_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_atom_token2] = aux_sym_atom_token2,
  [sym_empty_list] = sym_empty_list,
  [sym_empty_curly_brackets] = sym_empty_curly_brackets,
  [aux_sym__functional_notation_token1] = aux_sym__functional_notation_token1,
  [aux_sym_arg_list_token1] = aux_sym_arg_list_token1,
  [aux_sym__operator_notation_token1] = aux_sym__operator_notation_token1,
  [aux_sym__operation_1200xfx_token1] = aux_sym__operation_1200xfx_token1,
  [aux_sym__operation_1200fx_token1] = aux_sym__operation_1200fx_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_BQUOTE_COMMA_BQUOTE] = anon_sym_BQUOTE_COMMA_BQUOTE,
  [anon_sym_BSLASH_PLUS] = anon_sym_BSLASH_PLUS,
  [aux_sym__operation_700xfx_token1] = aux_sym__operation_700xfx_token1,
  [aux_sym__operation_500yfx_token1] = aux_sym__operation_500yfx_token1,
  [aux_sym__operation_400yfx_token1] = aux_sym__operation_400yfx_token1,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym__operation_200fy_token1] = aux_sym__operation_200fy_token1,
  [aux_sym__list_notation_token1] = aux_sym__list_notation_token1,
  [aux_sym__list_notation_token2] = aux_sym__list_notation_token2,
  [aux_sym__list_notation_items_token1] = aux_sym__list_notation_items_token1,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym_term] = sym_term,
  [sym_compound_term] = sym_compound_term,
  [sym_atomic_term] = sym_atomic_term,
  [sym_number] = sym_number,
  [sym_negative_number] = sym_negative_number,
  [sym_atom] = sym_atom,
  [sym__functional_notation] = sym__functional_notation,
  [sym_arg_list] = sym_arg_list,
  [sym_arg] = sym_arg,
  [sym__operator_notation] = sym__operator_notation,
  [sym__operation_1200xfx] = sym__operation_1200xfx,
  [sym__operation_1200fx] = sym__operation_1200fx,
  [sym__operation_1100xfy] = sym__operation_1100xfy,
  [sym__operation_1050xfy] = sym__operation_1050xfy,
  [sym__operation_1000xfy] = sym__operation_1000xfy,
  [sym__operation_900fy] = sym__operation_900fy,
  [sym__operation_700xfx] = sym__operation_700xfx,
  [sym__operation_500yfx] = sym__operation_500yfx,
  [sym__operation_400yfx] = sym__operation_400yfx,
  [sym__operation_200xfx] = sym__operation_200xfx,
  [sym__operation_200xfy] = sym__operation_200xfy,
  [sym__operation_200fy] = sym__operation_200fy,
  [sym__list_notation] = sym__list_notation,
  [sym__list_notation_items] = sym__list_notation_items,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_term_repeat1] = aux_sym_directive_term_repeat1,
  [aux_sym_directive_term_repeat2] = aux_sym_directive_term_repeat2,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [aux_sym_atom_repeat2] = aux_sym_atom_repeat2,
  [aux_sym_atom_repeat3] = aux_sym_atom_repeat3,
  [aux_sym_atom_repeat4] = aux_sym_atom_repeat4,
  [aux_sym_atom_repeat5] = aux_sym_atom_repeat5,
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
  [aux_sym_term_token1] = {
    .visible = false,
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
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atom_token2] = {
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
  [aux_sym__functional_notation_token1] = {
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
  [aux_sym__operation_1200xfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operation_1200fx_token1] = {
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
  [aux_sym__operation_700xfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operation_500yfx_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__operation_400yfx_token1] = {
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
  [aux_sym__operation_200fy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_notation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_notation_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_notation_items_token1] = {
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
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_term] = {
    .visible = true,
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
  [sym__functional_notation] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_1200xfx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_1200fx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_1100xfy] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_1050xfy] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_1000xfy] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_900fy] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_700xfx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_500yfx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_400yfx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_200xfx] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_200xfy] = {
    .visible = false,
    .named = true,
  },
  [sym__operation_200fy] = {
    .visible = false,
    .named = true,
  },
  [sym__list_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__list_notation_items] = {
    .visible = false,
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
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat5] = {
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
  [8] = 4,
  [9] = 5,
  [10] = 5,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 17,
  [24] = 17,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 15,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 18,
  [33] = 31,
  [34] = 25,
  [35] = 31,
  [36] = 20,
  [37] = 37,
  [38] = 38,
  [39] = 19,
  [40] = 18,
  [41] = 38,
  [42] = 42,
  [43] = 37,
  [44] = 17,
  [45] = 30,
  [46] = 31,
  [47] = 47,
  [48] = 27,
  [49] = 38,
  [50] = 42,
  [51] = 37,
  [52] = 42,
  [53] = 16,
  [54] = 30,
  [55] = 30,
  [56] = 25,
  [57] = 15,
  [58] = 16,
  [59] = 25,
  [60] = 37,
  [61] = 15,
  [62] = 42,
  [63] = 27,
  [64] = 38,
  [65] = 18,
  [66] = 19,
  [67] = 20,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 75,
  [78] = 74,
  [79] = 79,
  [80] = 74,
  [81] = 75,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 88,
  [96] = 86,
  [97] = 87,
  [98] = 88,
  [99] = 99,
  [100] = 86,
  [101] = 88,
  [102] = 102,
  [103] = 87,
  [104] = 86,
  [105] = 87,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 94,
  [110] = 93,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 93,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 93,
  [128] = 94,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 94,
  [136] = 136,
  [137] = 102,
  [138] = 99,
  [139] = 107,
  [140] = 102,
  [141] = 99,
  [142] = 102,
  [143] = 111,
  [144] = 144,
  [145] = 99,
  [146] = 107,
  [147] = 118,
  [148] = 134,
  [149] = 149,
  [150] = 111,
  [151] = 107,
  [152] = 133,
  [153] = 131,
  [154] = 130,
  [155] = 113,
  [156] = 144,
  [157] = 144,
  [158] = 117,
  [159] = 125,
  [160] = 126,
  [161] = 116,
  [162] = 115,
  [163] = 114,
  [164] = 132,
  [165] = 129,
  [166] = 124,
  [167] = 123,
  [168] = 144,
  [169] = 112,
  [170] = 111,
  [171] = 121,
  [172] = 120,
  [173] = 119,
  [174] = 113,
  [175] = 121,
  [176] = 114,
  [177] = 129,
  [178] = 124,
  [179] = 179,
  [180] = 117,
  [181] = 118,
  [182] = 119,
  [183] = 120,
  [184] = 121,
  [185] = 125,
  [186] = 126,
  [187] = 112,
  [188] = 149,
  [189] = 132,
  [190] = 113,
  [191] = 134,
  [192] = 130,
  [193] = 131,
  [194] = 133,
  [195] = 133,
  [196] = 131,
  [197] = 130,
  [198] = 123,
  [199] = 149,
  [200] = 179,
  [201] = 134,
  [202] = 149,
  [203] = 132,
  [204] = 126,
  [205] = 125,
  [206] = 116,
  [207] = 179,
  [208] = 179,
  [209] = 123,
  [210] = 124,
  [211] = 129,
  [212] = 112,
  [213] = 114,
  [214] = 115,
  [215] = 120,
  [216] = 119,
  [217] = 118,
  [218] = 117,
  [219] = 116,
  [220] = 115,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 231,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 235,
  [240] = 236,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 243,
  [245] = 242,
  [246] = 246,
  [247] = 242,
  [248] = 242,
  [249] = 243,
  [250] = 243,
  [251] = 251,
  [252] = 252,
};

static TSCharacterRange aux_sym_term_token1_character_set_1[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym_term_token1_character_set_2[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'/', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym_term_token1_character_set_3[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', '*'}, {',', ','}, {'0', '9'}, {';', ';'}, {'A', ']'},
  {'_', '}'},
};

static TSCharacterRange aux_sym_number_token2_character_set_1[] = {
  {'\t', '\n'}, {' ', '#'}, {'%', '%'}, {'\'', ')'}, {',', ','}, {'.', '.'}, {'0', '9'}, {';', ';'},
  {'A', ']'}, {'_', '}'},
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
      if (eof) ADVANCE(2292);
      ADVANCE_MAP(
        '\n', 2345,
        '#', 486,
        '%', 359,
        '\'', 2642,
        '(', 2529,
        '*', 711,
        '+', 2877,
        '-', 2751,
        '.', 2679,
        '/', 716,
        ':', 962,
        ';', 2566,
        '?', 963,
        '\\', 2640,
        '^', 2922,
        '\t', 18,
        ' ', 18,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1076);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 2312,
        '\n', 2328,
        ' ', 2294,
        '!', 2517,
        '"', 2661,
        '#', 486,
        '%', 2435,
        '\'', 2642,
        '(', 2529,
        ')', 2558,
        '*', 1191,
        ',', 2562,
      );
      if (lookahead == '/') SKIP(713);
      if (lookahead == ';') ADVANCE(2566);
      if (lookahead == '[') ADVANCE(2599);
      if (lookahead == '\\') ADVANCE(2619);
      if (lookahead == ']') ADVANCE(2603);
      if (lookahead == '_') ADVANCE(2461);
      if (lookahead == '`') ADVANCE(2666);
      if (lookahead == '{') ADVANCE(2607);
      if (lookahead == '|') ADVANCE(2615);
      if (lookahead == '}') ADVANCE(2611);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\t', 2313,
        '\n', 2329,
        ' ', 2295,
        '!', 2522,
        '"', 2664,
        '#', 519,
        '%', 2432,
        '\'', 2654,
        '(', 2547,
        ')', 2560,
        '*', 1191,
        ',', 2564,
      );
      if (lookahead == '/') SKIP(713);
      if (lookahead == ';') ADVANCE(2588);
      if (lookahead == '[') ADVANCE(2601);
      if (lookahead == '\\') ADVANCE(2632);
      if (lookahead == ']') ADVANCE(2605);
      if (lookahead == '_') ADVANCE(2467);
      if (lookahead == '`') ADVANCE(2669);
      if (lookahead == '{') ADVANCE(2609);
      if (lookahead == '|') ADVANCE(2617);
      if (lookahead == '}') ADVANCE(2613);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2515);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2475);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2499);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 2314,
        '\n', 2330,
        ' ', 2296,
        '!', 2517,
        '"', 2661,
        '#', 486,
        '%', 2441,
        '\'', 2642,
        '(', 2529,
        ')', 2558,
        ',', 2562,
        '.', 2679,
        '/', 715,
        ';', 2566,
        '[', 2599,
        '\\', 2619,
        ']', 2603,
        '_', 2461,
        '`', 2666,
        '{', 2607,
        '|', 2615,
        '}', 2611,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 2315,
        '\n', 2331,
        ' ', 2297,
        '!', 2523,
        '"', 2665,
        '#', 520,
        '%', 2433,
        '\'', 2655,
        '(', 2548,
        ')', 2561,
        ',', 2565,
        '.', 2679,
        '/', 715,
        ';', 2589,
        '[', 2602,
        '\\', 2633,
        ']', 2606,
        '_', 2468,
        '`', 2670,
        '{', 2610,
        '|', 2618,
        '}', 2614,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2516);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2476);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2500);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5);
      if (lookahead == '\n') ADVANCE(2332);
      if (lookahead == ' ') ADVANCE(2298);
      if (lookahead == '!') ADVANCE(2519);
      if (lookahead == '"') ADVANCE(2662);
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == '%') ADVANCE(2426);
      if (lookahead == '\'') ADVANCE(2645);
      if (lookahead == '(') ADVANCE(2532);
      if (lookahead == ')') ADVANCE(2559);
      if (lookahead == ',') ADVANCE(2563);
      if (lookahead == '/') SKIP(727);
      if (lookahead == ';') ADVANCE(2569);
      if (lookahead == '[') ADVANCE(2600);
      if (lookahead == '\\') ADVANCE(2622);
      if (lookahead == ']') ADVANCE(2604);
      if (lookahead == '_') ADVANCE(2462);
      if (lookahead == '`') ADVANCE(2667);
      if (lookahead == '{') ADVANCE(2608);
      if (lookahead == '|') ADVANCE(2616);
      if (lookahead == '}') ADVANCE(2612);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2510);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2470);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2480);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 2316,
        '\n', 2333,
        ' ', 2299,
        '#', 522,
        '%', 2427,
        '(', 2533,
        '*', 2900,
        '+', 2877,
        ',', 2804,
        '-', 2878,
        '.', 2679,
        '/', 2901,
        ':', 964,
        ';', 2570,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 39,
        '^', 2922,
        '_', 2463,
        '`', 38,
        'i', 2483,
        'm', 2482,
        'r', 2481,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(11);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2484);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2471);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 2317,
        '\n', 2334,
        ' ', 2300,
        '#', 526,
        '%', 2428,
        '(', 2534,
        '*', 2900,
        '+', 2877,
        ',', 2805,
        '-', 2878,
        '.', 2679,
        '/', 2903,
        ':', 964,
        ';', 2571,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2623,
        '^', 2922,
        '`', 44,
        'i', 50,
        'm', 49,
        'r', 47,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(51);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\t', 2318,
        '\n', 2335,
        ' ', 2301,
        '#', 531,
        '%', 2429,
        '\'', 2646,
        '(', 2537,
        '*', 2900,
        '+', 2877,
        ',', 2808,
        '-', 2878,
        '.', 2679,
        '/', 2905,
        ':', 964,
        ';', 2574,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 67,
        '^', 2922,
        '`', 66,
        'i', 73,
        'm', 72,
        'r', 70,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(14);
      if (lookahead == '!' ||
          lookahead == '"' ||
          (')' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(74);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\t', 2319,
        '\n', 2336,
        ' ', 2302,
        '#', 535,
        '%', 2430,
        '*', 2900,
        '+', 2877,
        ',', 2810,
        '-', 2878,
        '.', 2679,
        '/', 2907,
        ':', 964,
        ';', 2576,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 83,
        '^', 2922,
        '`', 82,
        'i', 89,
        'm', 88,
        'r', 86,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(2320);
      if (lookahead == '\n') ADVANCE(2337);
      if (lookahead == ' ') ADVANCE(2303);
      if (lookahead == '#') SKIP(585);
      if (lookahead == '%') ADVANCE(2431);
      if (lookahead == '.') ADVANCE(2679);
      if (lookahead == '/') ADVANCE(728);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(17);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(181);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\t', 2321,
        '\n', 2338,
        ' ', 2304,
        '%', 2436,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '.', 2679,
        '/', 2901,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '_', 2461,
        '`', 961,
        'i', 2508,
        'm', 2507,
        'r', 2506,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\t', 2322,
        '\n', 2339,
        ' ', 2305,
        '#', 537,
        '%', 2434,
        '(', 2549,
        '*', 2900,
        '+', 2877,
        ',', 2823,
        '-', 2878,
        '.', 2679,
        '/', 2909,
        ':', 964,
        ';', 2590,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 232,
        '^', 2922,
        '`', 231,
        'i', 238,
        'm', 237,
        'r', 235,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(16);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\t', 2323,
        '\n', 2340,
        ' ', 2306,
        '#', 486,
        '%', 2437,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '.', 2679,
        '/', 2903,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2641,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\t', 2324,
        '\n', 2341,
        ' ', 2307,
        '%', 2438,
        '\'', 2642,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '.', 2679,
        '/', 2905,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(14);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\t', 2325,
        '\n', 2342,
        ' ', 2308,
        '%', 2439,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '.', 2679,
        '/', 2907,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\t', 2326,
        '\n', 2343,
        ' ', 2309,
        '%', 2440,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '.', 2679,
        '/', 2909,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(2327);
      if (lookahead == '\n') ADVANCE(2344);
      if (lookahead == ' ') ADVANCE(2310);
      if (lookahead == '%') ADVANCE(2443);
      if (lookahead == '.') ADVANCE(2679);
      if (lookahead == '/') ADVANCE(728);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(17);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 2345,
        '#', 486,
        '%', 359,
        '\'', 2642,
        '(', 2529,
        '*', 711,
        '+', 2877,
        '-', 2751,
        '.', 2679,
        '/', 716,
        ':', 962,
        ';', 2566,
        '?', 963,
        '\\', 2640,
        '^', 2922,
        '\t', 18,
        ' ', 18,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1076);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '.') ADVANCE(2250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (set_contains(aux_sym_number_token2_character_set_1, 10, lookahead)) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 2346,
        '#', 490,
        '%', 20,
        '\'', 2643,
        '(', 2530,
        '*', 711,
        '+', 2877,
        '-', 2751,
        '.', 2679,
        '/', 716,
        ':', 962,
        ';', 2567,
        '?', 963,
        '\\', 2620,
        '^', 2922,
        '\t', 21,
        ' ', 21,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2478);
      if (lookahead == '!' ||
          lookahead == '"' ||
          (')' <= lookahead && lookahead <= ',') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(2695);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2691);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2692);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2694);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 2347,
        '!', 2518,
        '#', 495,
        '%', 26,
        '\'', 2644,
        '(', 2531,
        '-', 2752,
        '/', 717,
        '0', 2690,
        ':', 962,
        ';', 2568,
        '?', 963,
        '[', 2924,
        '\\', 2621,
        '_', 2680,
        '{', 31,
        '\t', 27,
        ' ', 27,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(367);
      if (lookahead == '#') ADVANCE(494);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '%') ADVANCE(271);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2786);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(26);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '\n', 2348,
        '!', 2518,
        '#', 495,
        '%', 209,
        '\'', 2644,
        '(', 2531,
        '-', 2752,
        '/', 720,
        '0', 2690,
        ':', 962,
        ';', 2568,
        '?', 963,
        '[', 2924,
        '\\', 2621,
        ']', 2776,
        '_', 2680,
        '{', 31,
        '\t', 32,
        ' ', 32,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '\n', 2349,
        '!', 2518,
        '#', 495,
        '%', 271,
        '\'', 2644,
        '(', 2531,
        '-', 2752,
        '/', 721,
        '0', 2690,
        ':', 962,
        ';', 2568,
        '?', 963,
        '[', 2924,
        '\\', 2621,
        '_', 2680,
        '{', 31,
        '}', 2786,
        '\t', 33,
        ' ', 33,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '%') ADVANCE(272);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2788);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(216);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '\n', 2350,
        '!', 2520,
        '#', 500,
        '%', 272,
        '\'', 2652,
        '(', 2545,
        '-', 2752,
        '/', 722,
        '0', 2702,
        ':', 962,
        ';', 2586,
        '?', 963,
        '[', 2925,
        '\\', 2630,
        ']', 2778,
        '_', 2681,
        '{', 34,
        '}', 2788,
        '\t', 35,
        ' ', 35,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2497);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 2351,
        ' ', 2311,
        '!', 2517,
        '"', 2661,
        '#', 486,
        '%', 2442,
        '\'', 2642,
        '(', 2529,
        ')', 2558,
        ',', 2562,
      );
      if (lookahead == '/') SKIP(727);
      if (lookahead == ';') ADVANCE(2566);
      if (lookahead == '[') ADVANCE(2599);
      if (lookahead == '\\') ADVANCE(2619);
      if (lookahead == ']') ADVANCE(2603);
      if (lookahead == '_') ADVANCE(2461);
      if (lookahead == '`') ADVANCE(2666);
      if (lookahead == '{') ADVANCE(2607);
      if (lookahead == '|') ADVANCE(2615);
      if (lookahead == '}') ADVANCE(2611);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == ',') ADVANCE(40);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '`') ADVANCE(2831);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(2880);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(2880);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == ',') ADVANCE(45);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '`') ADVANCE(2832);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(2881);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'e') ADVANCE(48);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'm') ADVANCE(2881);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(46);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == 's') ADVANCE(2854);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == ',') ADVANCE(54);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == '`') ADVANCE(2833);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(2882);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(2882);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '\n', 2352,
        '#', 527,
        '%', 57,
        '(', 2535,
        '*', 2900,
        '+', 2877,
        ',', 2806,
        '-', 2878,
        '/', 2902,
        ':', 964,
        ';', 2572,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 53,
        ']', 2934,
        '^', 2922,
        '_', 2464,
        '`', 52,
        'i', 2487,
        'm', 2486,
        'r', 2485,
        '|', 2948,
        '\t', 58,
        ' ', 58,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(333);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '[' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2512);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2488);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2472);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == ',') ADVANCE(61);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == '`') ADVANCE(2834);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(2883);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(2883);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        '\n', 2353,
        '#', 529,
        '%', 64,
        '(', 2536,
        '*', 2900,
        '+', 2877,
        ',', 2807,
        '-', 2878,
        '/', 2904,
        ':', 964,
        ';', 2573,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 60,
        ']', 2935,
        '^', 2922,
        '_', 2465,
        '`', 59,
        'i', 2491,
        'm', 2490,
        'r', 2489,
        '\t', 65,
        ' ', 65,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(334);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '[' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2513);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2492);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2473);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == ',') ADVANCE(68);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == '`') ADVANCE(2835);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(2884);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(71);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == 'm') ADVANCE(2884);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(69);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (lookahead == 's') ADVANCE(2857);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == ',') ADVANCE(77);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '`') ADVANCE(2836);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(2885);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(2885);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        '\n', 2354,
        '#', 533,
        '%', 80,
        '(', 2538,
        ')', 2796,
        '*', 2900,
        '+', 2877,
        ',', 2809,
        '-', 2878,
        '/', 2906,
        ':', 964,
        ';', 2575,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 76,
        '^', 2922,
        '_', 2466,
        '`', 75,
        'i', 2495,
        'm', 2494,
        'r', 2493,
        '\t', 81,
        ' ', 81,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(335);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2514);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2496);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2474);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == ',') ADVANCE(84);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == '`') ADVANCE(2837);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(2886);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(87);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == 'm') ADVANCE(2886);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == 'o') ADVANCE(85);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (lookahead == 's') ADVANCE(2859);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == ',') ADVANCE(92);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == '`') ADVANCE(2838);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == 'd') ADVANCE(2887);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(95);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == 'm') ADVANCE(2887);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(93);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (lookahead == 's') ADVANCE(2860);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        '\n', 2355,
        '#', 541,
        '%', 98,
        '(', 2539,
        '*', 2900,
        '+', 2877,
        ',', 2811,
        '-', 2878,
        '/', 2908,
        ':', 964,
        ';', 2577,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2624,
        ']', 2936,
        '^', 2922,
        '`', 91,
        'i', 97,
        'm', 96,
        'r', 94,
        '|', 2949,
        '\t', 99,
        ' ', 99,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(336);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == ',') ADVANCE(101);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '`') ADVANCE(2839);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'd') ADVANCE(2888);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(104);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'm') ADVANCE(2888);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(102);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 's') ADVANCE(2861);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ADVANCE_MAP(
        '\n', 2356,
        '#', 544,
        '%', 107,
        '(', 2540,
        ')', 2797,
        '*', 2900,
        '+', 2877,
        ',', 2812,
        '-', 2878,
        '/', 2910,
        ':', 964,
        ';', 2578,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2625,
        '^', 2922,
        '`', 100,
        'i', 106,
        'm', 105,
        'r', 103,
        '\t', 108,
        ' ', 108,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(337);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == ',') ADVANCE(110);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == '`') ADVANCE(2840);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == 'd') ADVANCE(2889);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(113);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == 'm') ADVANCE(2889);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(111);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (lookahead == 's') ADVANCE(2862);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        '\n', 2357,
        '#', 547,
        '%', 116,
        '(', 2541,
        '*', 2900,
        '+', 2877,
        ',', 2813,
        '-', 2878,
        '/', 2911,
        ':', 964,
        ';', 2579,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2626,
        ']', 2937,
        '^', 2922,
        '`', 109,
        'i', 115,
        'm', 114,
        'r', 112,
        '\t', 117,
        ' ', 117,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(338);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(2358);
      if (lookahead == '"') ADVANCE(2661);
      if (lookahead == '%') SKIP(467);
      if (lookahead == '\'') ADVANCE(2642);
      if (lookahead == '/') SKIP(729);
      if (lookahead == '\\') ADVANCE(2619);
      if (lookahead == '`') ADVANCE(2666);
      if (lookahead == 'a') ADVANCE(2753);
      if (lookahead == 'b') ADVANCE(2755);
      if (lookahead == 'f') ADVANCE(2759);
      if (lookahead == 'n') ADVANCE(2763);
      if (lookahead == 'r') ADVANCE(2757);
      if (lookahead == 't') ADVANCE(2761);
      if (lookahead == 'v') ADVANCE(2765);
      if (lookahead == 'x') ADVANCE(2770);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(118);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2767);
      END_STATE();
    case 119:
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(2359);
      if (lookahead == '"') ADVANCE(2663);
      if (lookahead == '#') SKIP(583);
      if (lookahead == '%') SKIP(119);
      if (lookahead == '\'') ADVANCE(2647);
      if (lookahead == '/') SKIP(729);
      if (lookahead == '\\') ADVANCE(2627);
      if (lookahead == '`') ADVANCE(2668);
      if (lookahead == 'a') ADVANCE(2754);
      if (lookahead == 'b') ADVANCE(2756);
      if (lookahead == 'f') ADVANCE(2760);
      if (lookahead == 'n') ADVANCE(2764);
      if (lookahead == 'r') ADVANCE(2758);
      if (lookahead == 't') ADVANCE(2762);
      if (lookahead == 'v') ADVANCE(2766);
      if (lookahead == 'x') ADVANCE(2771);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(118);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2768);
      if (lookahead == '!' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(119);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == ',') ADVANCE(123);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '`') ADVANCE(2841);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(2890);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(126);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(2890);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(124);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == 's') ADVANCE(2863);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ADVANCE_MAP(
        '\n', 2360,
        '#', 548,
        '%', 129,
        '\'', 2648,
        '(', 2542,
        '*', 2900,
        '+', 2877,
        ',', 2814,
        '-', 2878,
        '/', 2912,
        ':', 964,
        ';', 2580,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 122,
        ']', 2938,
        '^', 2922,
        '`', 121,
        'i', 128,
        'm', 127,
        'r', 125,
        '|', 2950,
        '\t', 130,
        ' ', 130,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(339);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == ',') ADVANCE(133);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == '`') ADVANCE(2842);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == 'd') ADVANCE(2891);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(136);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(2891);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(134);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == 's') ADVANCE(2864);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        '\n', 2361,
        '#', 552,
        '%', 139,
        '\'', 2649,
        '(', 2543,
        ')', 2798,
        '*', 2900,
        '+', 2877,
        ',', 2815,
        '-', 2878,
        '/', 2914,
        ':', 964,
        ';', 2581,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 132,
        '^', 2922,
        '`', 131,
        'i', 138,
        'm', 137,
        'r', 135,
        '\t', 140,
        ' ', 140,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(341);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == ',') ADVANCE(143);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '`') ADVANCE(2843);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(2892);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 145:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(146);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(2892);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(144);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == 's') ADVANCE(2865);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 150:
      ADVANCE_MAP(
        '\n', 2362,
        '#', 554,
        '%', 149,
        '\'', 2650,
        '(', 2544,
        '*', 2900,
        '+', 2877,
        ',', 2816,
        '-', 2878,
        '/', 2915,
        ':', 964,
        ';', 2582,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 142,
        ']', 2939,
        '^', 2922,
        '`', 141,
        'i', 148,
        'm', 147,
        'r', 145,
        '\t', 150,
        ' ', 150,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(342);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(149);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == ',') ADVANCE(153);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '`') ADVANCE(2844);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(2893);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(156);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 156:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(2893);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(154);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == 's') ADVANCE(2866);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        '\n', 2363,
        '#', 558,
        '%', 159,
        '*', 2900,
        '+', 2877,
        ',', 2817,
        '-', 2878,
        '/', 2917,
        ':', 964,
        ';', 2583,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 152,
        ']', 2940,
        '^', 2922,
        '`', 151,
        'i', 158,
        'm', 157,
        'r', 155,
        '|', 2951,
        '\t', 160,
        ' ', 160,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(344);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(159);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == ',') ADVANCE(163);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '`') ADVANCE(2845);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 164:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(2894);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(166);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 166:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 'm') ADVANCE(2894);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 167:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(164);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 's') ADVANCE(2867);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 170:
      ADVANCE_MAP(
        '\n', 2364,
        '#', 562,
        '%', 169,
        '*', 2900,
        '+', 2877,
        ',', 2818,
        '-', 2878,
        '/', 2919,
        ':', 964,
        ';', 2584,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 162,
        ']', 2941,
        '^', 2922,
        '`', 161,
        'i', 168,
        'm', 167,
        'r', 165,
        '\t', 170,
        ' ', 170,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(346);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == ',') ADVANCE(173);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == '`') ADVANCE(2846);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(2895);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == 'e') ADVANCE(176);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == 'm') ADVANCE(2895);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(174);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 178:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == 's') ADVANCE(2868);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        '\n', 2365,
        '#', 564,
        '%', 179,
        ')', 2799,
        '*', 2900,
        '+', 2877,
        ',', 2819,
        '-', 2878,
        '/', 2920,
        ':', 964,
        ';', 2585,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 172,
        '^', 2922,
        '`', 171,
        'i', 178,
        'm', 177,
        'r', 175,
        '\t', 180,
        ' ', 180,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(347);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') SKIP(585);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(181);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(566);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(182);
      END_STATE();
    case 183:
      ADVANCE_MAP(
        '\n', 2366,
        '#', 566,
        '%', 182,
        ',', 2820,
        '/', 735,
        ']', 2942,
        '|', 2952,
        '\t', 183,
        ' ', 183,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(348);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '#') ADVANCE(568);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(184);
      END_STATE();
    case 185:
      ADVANCE_MAP(
        '\n', 2367,
        '#', 568,
        '%', 184,
        ')', 2800,
        ',', 2821,
        '/', 736,
        '\t', 185,
        ' ', 185,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(349);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == '\n') SKIP(187);
      if (lookahead == '#') SKIP(587);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(186);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(2368);
      if (lookahead == '#') SKIP(587);
      if (lookahead == '%') SKIP(186);
      if (lookahead == '/') SKIP(730);
      if (lookahead == '\\') ADVANCE(2628);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(354);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2769);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(186);
      END_STATE();
    case 188:
      if (lookahead == '\n') SKIP(189);
      if (lookahead == '#') SKIP(589);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(188);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(2369);
      if (lookahead == '#') SKIP(589);
      if (lookahead == '%') SKIP(188);
      if (lookahead == '/') SKIP(731);
      if (lookahead == '\\') ADVANCE(2629);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(189);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2773);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(188);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '#') ADVANCE(570);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(190);
      END_STATE();
    case 191:
      ADVANCE_MAP(
        '\n', 2370,
        '#', 570,
        '%', 190,
        ',', 2822,
        '/', 737,
        ']', 2943,
        '\t', 191,
        ' ', 191,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(350);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '\'') ADVANCE(2701);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2697);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2698);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2700);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '\n') ADVANCE(2371);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '0') ADVANCE(2696);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(197);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(351);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2699);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(196);
      END_STATE();
    case 198:
      if (lookahead == '\n') SKIP(199);
      if (lookahead == '#') SKIP(591);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(198);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(2372);
      if (lookahead == '#') SKIP(591);
      if (lookahead == '%') SKIP(198);
      if (lookahead == '/') SKIP(732);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(199);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2774);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(198);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(574);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(2373);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == ']') ADVANCE(2944);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(352);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(200);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '#') ADVANCE(576);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(2374);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == ')') ADVANCE(2801);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(353);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(202);
      END_STATE();
    case 204:
      if (lookahead == '\n') SKIP(205);
      if (lookahead == '#') SKIP(593);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(204);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(2375);
      if (lookahead == '#') SKIP(593);
      if (lookahead == '%') SKIP(204);
      if (lookahead == '\'') ADVANCE(2651);
      if (lookahead == '/') SKIP(733);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(205);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(357);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(204);
      END_STATE();
    case 206:
      if (lookahead == '\n') SKIP(207);
      if (lookahead == '#') SKIP(595);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(206);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(2376);
      if (lookahead == '#') SKIP(595);
      if (lookahead == '%') SKIP(206);
      if (lookahead == '/') SKIP(734);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(207);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(358);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(206);
      END_STATE();
    case 208:
      ADVANCE_MAP(
        '\n', 2377,
        '!', 2517,
        '#', 486,
        '%', 362,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 717,
        '0', 2744,
        ':', 962,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        '_', 2688,
        '{', 598,
        '\t', 208,
        ' ', 208,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 210:
      ADVANCE_MAP(
        '\n', 2378,
        '!', 2525,
        '#', 509,
        '%', 291,
        '\'', 2657,
        '(', 2554,
        '-', 2752,
        '/', 723,
        '0', 2720,
        ':', 963,
        ';', 2595,
        '?', 963,
        '[', 2928,
        '\\', 2635,
        '_', 2684,
        '{', 293,
        '\t', 210,
        ' ', 210,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(291);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2778);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(216);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '\'') ADVANCE(2707);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2703);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2704);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2706);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(222);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2789);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(222);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(2713);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2709);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2710);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2712);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 223:
      ADVANCE_MAP(
        '\n', 2379,
        '!', 2520,
        '#', 500,
        '%', 216,
        '\'', 2652,
        '(', 2545,
        '-', 2752,
        '/', 717,
        '0', 2702,
        ':', 962,
        ';', 2586,
        '?', 963,
        '[', 2925,
        '\\', 2630,
        '_', 2681,
        '{', 34,
        '\t', 223,
        ' ', 223,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2497);
      END_STATE();
    case 224:
      ADVANCE_MAP(
        '\n', 2379,
        '!', 2520,
        '#', 500,
        '%', 216,
        '\'', 2652,
        '(', 2545,
        '-', 2752,
        '/', 720,
        '0', 2702,
        ':', 962,
        ';', 2586,
        '?', 963,
        '[', 2925,
        '\\', 2630,
        ']', 2778,
        '_', 2681,
        '{', 34,
        '\t', 224,
        ' ', 224,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2497);
      END_STATE();
    case 225:
      ADVANCE_MAP(
        '\n', 2380,
        '!', 2521,
        '#', 501,
        '%', 222,
        '\'', 2653,
        '(', 2546,
        '-', 2752,
        '/', 717,
        '0', 2708,
        ':', 962,
        ';', 2587,
        '?', 963,
        '[', 2926,
        '\\', 2631,
        '_', 2682,
        '{', 217,
        '\t', 225,
        ' ', 225,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(222);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2498);
      END_STATE();
    case 226:
      ADVANCE_MAP(
        '\n', 2380,
        '!', 2521,
        '#', 501,
        '%', 222,
        '\'', 2653,
        '(', 2546,
        '-', 2752,
        '/', 721,
        '0', 2708,
        ':', 962,
        ';', 2587,
        '?', 963,
        '[', 2926,
        '\\', 2631,
        '_', 2682,
        '{', 217,
        '}', 2789,
        '\t', 226,
        ' ', 226,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(222);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2498);
      END_STATE();
    case 227:
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2779);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(222);
      END_STATE();
    case 228:
      ADVANCE_MAP(
        '\n', 2381,
        '!', 2521,
        '#', 501,
        '%', 273,
        '\'', 2653,
        '(', 2546,
        '-', 2752,
        '/', 722,
        '0', 2708,
        ':', 962,
        ';', 2587,
        '?', 963,
        '[', 2926,
        '\\', 2631,
        ']', 2779,
        '_', 2682,
        '{', 217,
        '}', 2789,
        '\t', 228,
        ' ', 228,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(222);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2498);
      END_STATE();
    case 229:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 230:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == ',') ADVANCE(233);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == '`') ADVANCE(2847);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(2896);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(236);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == 'm') ADVANCE(2896);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 237:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == 'o') ADVANCE(234);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (lookahead == 's') ADVANCE(2869);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == ',') ADVANCE(242);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '`') ADVANCE(2848);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == 'd') ADVANCE(2897);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(245);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == 'm') ADVANCE(2897);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(243);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 247:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == 's') ADVANCE(2870);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ADVANCE_MAP(
        '\n', 2382,
        '#', 550,
        '%', 248,
        '(', 2550,
        '*', 2900,
        '+', 2877,
        ',', 2824,
        '-', 2878,
        '/', 2913,
        ':', 964,
        ';', 2591,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 241,
        ']', 2945,
        '^', 2922,
        '`', 240,
        'i', 247,
        'm', 246,
        'r', 244,
        '|', 2953,
        '\t', 249,
        ' ', 249,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(340);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == ',') ADVANCE(252);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '`') ADVANCE(2849);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(2898);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(255);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 255:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(2898);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(253);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == 's') ADVANCE(2871);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 259:
      ADVANCE_MAP(
        '\n', 2383,
        '#', 560,
        '%', 258,
        '(', 2551,
        ')', 2802,
        '*', 2900,
        '+', 2877,
        ',', 2825,
        '-', 2878,
        '/', 2918,
        ':', 964,
        ';', 2592,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 251,
        '^', 2922,
        '`', 250,
        'i', 257,
        'm', 256,
        'r', 254,
        '\t', 259,
        ' ', 259,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(345);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == ',') ADVANCE(262);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      if (set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '`') ADVANCE(2850);
      if (set_contains(extras_character_set_3, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 263:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(2899);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(265);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == 'm') ADVANCE(2899);
      if (set_contains(extras_character_set_10, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(263);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == 's') ADVANCE(2872);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 269:
      ADVANCE_MAP(
        '\n', 2384,
        '#', 556,
        '%', 268,
        '(', 2552,
        '*', 2900,
        '+', 2877,
        ',', 2826,
        '-', 2878,
        '/', 2916,
        ':', 964,
        ';', 2593,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 261,
        ']', 2946,
        '^', 2922,
        '`', 260,
        'i', 267,
        'm', 266,
        'r', 264,
        '\t', 269,
        ' ', 269,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(343);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '}')) ADVANCE(268);
      END_STATE();
    case 270:
      ADVANCE_MAP(
        '\n', 2385,
        '!', 2517,
        '#', 486,
        '%', 373,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 720,
        '0', 2744,
        ':', 962,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        ']', 2775,
        '_', 2688,
        '{', 598,
        '\t', 270,
        ' ', 270,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 274:
      ADVANCE_MAP(
        '\n', 2386,
        '!', 2525,
        '#', 509,
        '%', 301,
        '\'', 2657,
        '(', 2554,
        '-', 2752,
        '/', 724,
        '0', 2720,
        ':', 963,
        ';', 2595,
        '?', 963,
        '[', 2928,
        '\\', 2635,
        ']', 2781,
        '_', 2684,
        '{', 293,
        '\t', 274,
        ' ', 274,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(291);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 275:
      ADVANCE_MAP(
        '\n', 2387,
        '!', 2525,
        '#', 509,
        '%', 317,
        '\'', 2657,
        '(', 2554,
        '-', 2752,
        '/', 725,
        '0', 2720,
        ':', 963,
        ';', 2595,
        '?', 963,
        '[', 2928,
        '\\', 2635,
        '_', 2684,
        '{', 293,
        '}', 2791,
        '\t', 275,
        ' ', 275,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(291);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2780);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(282);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2790);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(282);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(2719);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2715);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2716);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2718);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 283:
      ADVANCE_MAP(
        '\n', 2388,
        '!', 2524,
        '#', 505,
        '%', 282,
        '\'', 2656,
        '(', 2553,
        '-', 2752,
        '/', 720,
        '0', 2714,
        ':', 962,
        ';', 2594,
        '?', 963,
        '[', 2927,
        '\\', 2634,
        ']', 2780,
        '_', 2683,
        '{', 277,
        '\t', 283,
        ' ', 283,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2683);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2501);
      END_STATE();
    case 284:
      ADVANCE_MAP(
        '\n', 2388,
        '!', 2524,
        '#', 505,
        '%', 282,
        '\'', 2656,
        '(', 2553,
        '-', 2752,
        '/', 721,
        '0', 2714,
        ':', 962,
        ';', 2594,
        '?', 963,
        '[', 2927,
        '\\', 2634,
        '_', 2683,
        '{', 277,
        '}', 2790,
        '\t', 284,
        ' ', 284,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2683);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2501);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        '\n', 2388,
        '!', 2524,
        '#', 505,
        '%', 282,
        '\'', 2656,
        '(', 2553,
        '-', 2752,
        '/', 722,
        '0', 2714,
        ':', 962,
        ';', 2594,
        '?', 963,
        '[', 2927,
        '\\', 2634,
        ']', 2780,
        '_', 2683,
        '{', 277,
        '}', 2790,
        '\t', 285,
        ' ', 285,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2683);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2501);
      END_STATE();
    case 286:
      ADVANCE_MAP(
        '\n', 2389,
        '!', 2517,
        '#', 486,
        '%', 374,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 721,
        '0', 2744,
        ':', 962,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        '_', 2688,
        '{', 598,
        '}', 2785,
        '\t', 286,
        ' ', 286,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 287:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(2725);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2721);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2722);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2724);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2791);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(291);
      END_STATE();
    case 294:
      ADVANCE_MAP(
        '\n', 2390,
        '!', 2526,
        '#', 512,
        '%', 307,
        '\'', 2658,
        '(', 2555,
        '-', 2752,
        '/', 723,
        '0', 2726,
        ':', 963,
        ';', 2596,
        '?', 963,
        '[', 2929,
        '\\', 2636,
        '_', 2685,
        '{', 298,
        '\t', 294,
        ' ', 294,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2503);
      END_STATE();
    case 295:
      ADVANCE_MAP(
        '\n', 2390,
        '!', 2526,
        '#', 512,
        '%', 307,
        '\'', 2658,
        '(', 2555,
        '-', 2752,
        '/', 724,
        '0', 2726,
        ':', 963,
        ';', 2596,
        '?', 963,
        '[', 2929,
        '\\', 2636,
        ']', 2782,
        '_', 2685,
        '{', 298,
        '\t', 295,
        ' ', 295,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2503);
      END_STATE();
    case 296:
      ADVANCE_MAP(
        '\n', 2391,
        '!', 2527,
        '#', 513,
        '%', 313,
        '\'', 2659,
        '(', 2556,
        '-', 2752,
        '/', 723,
        '0', 2732,
        ':', 963,
        ';', 2597,
        '?', 963,
        '[', 2930,
        '\\', 2637,
        '_', 2686,
        '{', 308,
        '\t', 296,
        ' ', 296,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(313);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2504);
      END_STATE();
    case 297:
      ADVANCE_MAP(
        '\n', 2391,
        '!', 2527,
        '#', 513,
        '%', 313,
        '\'', 2659,
        '(', 2556,
        '-', 2752,
        '/', 725,
        '0', 2732,
        ':', 963,
        ';', 2597,
        '?', 963,
        '[', 2930,
        '\\', 2637,
        '_', 2686,
        '{', 308,
        '}', 2793,
        '\t', 297,
        ' ', 297,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(313);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2504);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2792);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(307);
      END_STATE();
    case 299:
      ADVANCE_MAP(
        '\n', 2392,
        '!', 2526,
        '#', 512,
        '%', 318,
        '\'', 2658,
        '(', 2555,
        '-', 2752,
        '/', 726,
        '0', 2726,
        ':', 963,
        ';', 2596,
        '?', 963,
        '[', 2929,
        '\\', 2636,
        ']', 2782,
        '_', 2685,
        '{', 298,
        '}', 2792,
        '\t', 299,
        ' ', 299,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2503);
      END_STATE();
    case 300:
      ADVANCE_MAP(
        '\n', 2393,
        '!', 2517,
        '#', 486,
        '%', 379,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 722,
        '0', 2744,
        ':', 962,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        ']', 2775,
        '_', 2688,
        '{', 598,
        '}', 2785,
        '\t', 300,
        ' ', 300,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(208);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2782);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(2731);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2727);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2728);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2730);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2793);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(313);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '\'') ADVANCE(2737);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2733);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2734);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2736);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2783);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(313);
      END_STATE();
    case 315:
      ADVANCE_MAP(
        '\n', 2394,
        '!', 2527,
        '#', 513,
        '%', 319,
        '\'', 2659,
        '(', 2556,
        '-', 2752,
        '/', 726,
        '0', 2732,
        ':', 963,
        ';', 2597,
        '?', 963,
        '[', 2930,
        '\\', 2637,
        ']', 2783,
        '_', 2686,
        '{', 308,
        '}', 2793,
        '\t', 315,
        ' ', 315,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(313);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2504);
      END_STATE();
    case 316:
      ADVANCE_MAP(
        '\n', 2395,
        '!', 2517,
        '#', 486,
        '%', 382,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 723,
        '0', 2744,
        ':', 963,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        '_', 2688,
        '{', 598,
        '\t', 316,
        ' ', 316,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '%') ADVANCE(326);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(326);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '%') ADVANCE(326);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2794);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(326);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(2743);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2739);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2740);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2742);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 327:
      ADVANCE_MAP(
        '\n', 2396,
        '!', 2528,
        '#', 517,
        '%', 326,
        '\'', 2660,
        '(', 2557,
        '-', 2752,
        '/', 724,
        '0', 2738,
        ':', 963,
        ';', 2598,
        '?', 963,
        '[', 2931,
        '\\', 2638,
        ']', 2784,
        '_', 2687,
        '{', 321,
        '\t', 327,
        ' ', 327,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(326);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2505);
      END_STATE();
    case 328:
      ADVANCE_MAP(
        '\n', 2396,
        '!', 2528,
        '#', 517,
        '%', 326,
        '\'', 2660,
        '(', 2557,
        '-', 2752,
        '/', 725,
        '0', 2738,
        ':', 963,
        ';', 2598,
        '?', 963,
        '[', 2931,
        '\\', 2638,
        '_', 2687,
        '{', 321,
        '}', 2794,
        '\t', 328,
        ' ', 328,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(326);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2505);
      END_STATE();
    case 329:
      ADVANCE_MAP(
        '\n', 2396,
        '!', 2528,
        '#', 517,
        '%', 326,
        '\'', 2660,
        '(', 2557,
        '-', 2752,
        '/', 726,
        '0', 2738,
        ':', 963,
        ';', 2598,
        '?', 963,
        '[', 2931,
        '\\', 2638,
        ']', 2784,
        '_', 2687,
        '{', 321,
        '}', 2794,
        '\t', 329,
        ' ', 329,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(326);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2505);
      END_STATE();
    case 330:
      ADVANCE_MAP(
        '\n', 2397,
        '!', 2517,
        '#', 486,
        '%', 385,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 724,
        '0', 2744,
        ':', 963,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        ']', 2775,
        '_', 2688,
        '{', 598,
        '\t', 330,
        ' ', 330,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 331:
      ADVANCE_MAP(
        '\n', 2398,
        '!', 2517,
        '#', 486,
        '%', 386,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 725,
        '0', 2744,
        ':', 963,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        '_', 2688,
        '{', 598,
        '}', 2785,
        '\t', 331,
        ' ', 331,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 332:
      ADVANCE_MAP(
        '\n', 2399,
        '!', 2517,
        '#', 486,
        '%', 391,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 726,
        '0', 2744,
        ':', 963,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        ']', 2775,
        '_', 2688,
        '{', 598,
        '}', 2785,
        '\t', 332,
        ' ', 332,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 333:
      ADVANCE_MAP(
        '\n', 2400,
        '%', 396,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2902,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '_', 2461,
        '`', 961,
        'i', 2508,
        'm', 2507,
        'r', 2506,
        '|', 2947,
        '\t', 333,
        ' ', 333,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      END_STATE();
    case 334:
      ADVANCE_MAP(
        '\n', 2401,
        '%', 399,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2904,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '_', 2461,
        '`', 961,
        'i', 2508,
        'm', 2507,
        'r', 2506,
        '\t', 334,
        ' ', 334,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      END_STATE();
    case 335:
      ADVANCE_MAP(
        '\n', 2402,
        '%', 403,
        '(', 2529,
        ')', 2795,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2906,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '_', 2461,
        '`', 961,
        'i', 2508,
        'm', 2507,
        'r', 2506,
        '\t', 335,
        ' ', 335,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2469);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        '\n', 2403,
        '#', 486,
        '%', 408,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2908,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2641,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '|', 2947,
        '\t', 336,
        ' ', 336,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(336);
      END_STATE();
    case 337:
      ADVANCE_MAP(
        '\n', 2404,
        '#', 486,
        '%', 411,
        '(', 2529,
        ')', 2795,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2910,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2641,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 337,
        ' ', 337,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(337);
      END_STATE();
    case 338:
      ADVANCE_MAP(
        '\n', 2405,
        '#', 486,
        '%', 414,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2911,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 2641,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 338,
        ' ', 338,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(338);
      END_STATE();
    case 339:
      ADVANCE_MAP(
        '\n', 2406,
        '%', 417,
        '\'', 2642,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2912,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '|', 2947,
        '\t', 339,
        ' ', 339,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(339);
      END_STATE();
    case 340:
      ADVANCE_MAP(
        '\n', 2407,
        '%', 420,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2913,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '|', 2947,
        '\t', 340,
        ' ', 340,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(340);
      END_STATE();
    case 341:
      ADVANCE_MAP(
        '\n', 2408,
        '%', 423,
        '\'', 2642,
        '(', 2529,
        ')', 2795,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2914,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 341,
        ' ', 341,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(341);
      END_STATE();
    case 342:
      ADVANCE_MAP(
        '\n', 2409,
        '%', 426,
        '\'', 2642,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2915,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 342,
        ' ', 342,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(342);
      END_STATE();
    case 343:
      ADVANCE_MAP(
        '\n', 2410,
        '%', 429,
        '(', 2529,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2916,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 343,
        ' ', 343,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(343);
      END_STATE();
    case 344:
      ADVANCE_MAP(
        '\n', 2411,
        '%', 432,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2917,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '|', 2947,
        '\t', 344,
        ' ', 344,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(344);
      END_STATE();
    case 345:
      ADVANCE_MAP(
        '\n', 2412,
        '%', 435,
        '(', 2529,
        ')', 2795,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2918,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 345,
        ' ', 345,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(345);
      END_STATE();
    case 346:
      ADVANCE_MAP(
        '\n', 2413,
        '%', 438,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2919,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        ']', 2933,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 346,
        ' ', 346,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(346);
      END_STATE();
    case 347:
      ADVANCE_MAP(
        '\n', 2414,
        '%', 441,
        ')', 2795,
        '*', 2900,
        '+', 2877,
        ',', 2803,
        '-', 2878,
        '/', 2920,
        ':', 964,
        ';', 2566,
        '<', 2874,
        '=', 2873,
        '>', 2876,
        '@', 1463,
        '\\', 1189,
        '^', 2922,
        '`', 961,
        'i', 2135,
        'm', 2134,
        'r', 2132,
        '\t', 347,
        ' ', 347,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(347);
      END_STATE();
    case 348:
      ADVANCE_MAP(
        '\n', 2415,
        '%', 444,
        ',', 2803,
        '/', 735,
        ']', 2933,
        '|', 2947,
        '\t', 348,
        ' ', 348,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(348);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(2416);
      if (lookahead == '%') ADVANCE(447);
      if (lookahead == ')') ADVANCE(2795);
      if (lookahead == ',') ADVANCE(2803);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(349);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(349);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(2417);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == ',') ADVANCE(2803);
      if (lookahead == '/') ADVANCE(737);
      if (lookahead == ']') ADVANCE(2933);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(350);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(350);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(2418);
      if (lookahead == '%') ADVANCE(453);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '0') ADVANCE(2744);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(351);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(2419);
      if (lookahead == '%') ADVANCE(456);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == ']') ADVANCE(2933);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(352);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(2420);
      if (lookahead == '%') ADVANCE(459);
      if (lookahead == ')') ADVANCE(2795);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(353);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(2421);
      if (lookahead == '%') SKIP(471);
      if (lookahead == '/') SKIP(730);
      if (lookahead == '\\') ADVANCE(2619);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(354);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2767);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(2422);
      if (lookahead == '%') SKIP(474);
      if (lookahead == '/') SKIP(731);
      if (lookahead == '\\') ADVANCE(2619);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2772);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(2423);
      if (lookahead == '%') SKIP(477);
      if (lookahead == '/') SKIP(732);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2772);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(2424);
      if (lookahead == '%') SKIP(480);
      if (lookahead == '\'') ADVANCE(2642);
      if (lookahead == '/') SKIP(733);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(357);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(2425);
      if (lookahead == '%') SKIP(483);
      if (lookahead == '/') SKIP(734);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(358);
      END_STATE();
    case 359:
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 360:
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '*') ADVANCE(1190);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(360);
      END_STATE();
    case 361:
      if (lookahead == '#') ADVANCE(489);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 363:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '*') ADVANCE(1194);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(363);
      END_STATE();
    case 364:
      if (lookahead == '#') ADVANCE(492);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(363);
      END_STATE();
    case 365:
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(28);
      END_STATE();
    case 366:
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(28);
      END_STATE();
    case 367:
      if (lookahead == '#') ADVANCE(494);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2787);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(29);
      END_STATE();
    case 368:
      if (lookahead == '#') ADVANCE(494);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(29);
      END_STATE();
    case 369:
      if (lookahead == '#') ADVANCE(496);
      if (lookahead == '*') ADVANCE(1195);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == '#') ADVANCE(496);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '*') ADVANCE(1193);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '#') ADVANCE(497);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(371);
      END_STATE();
    case 373:
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 374:
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 375:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '*') ADVANCE(1196);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == '#') ADVANCE(502);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(375);
      END_STATE();
    case 377:
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '*') ADVANCE(1197);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(377);
      END_STATE();
    case 378:
      if (lookahead == '#') ADVANCE(503);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(377);
      END_STATE();
    case 379:
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 380:
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '*') ADVANCE(1198);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(380);
      END_STATE();
    case 381:
      if (lookahead == '#') ADVANCE(506);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(380);
      END_STATE();
    case 382:
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 383:
      if (lookahead == '#') ADVANCE(508);
      if (lookahead == '*') ADVANCE(1236);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(383);
      END_STATE();
    case 384:
      if (lookahead == '#') ADVANCE(508);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 386:
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 387:
      if (lookahead == '#') ADVANCE(514);
      if (lookahead == '*') ADVANCE(1237);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(387);
      END_STATE();
    case 388:
      if (lookahead == '#') ADVANCE(514);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(387);
      END_STATE();
    case 389:
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '*') ADVANCE(1238);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(389);
      END_STATE();
    case 390:
      if (lookahead == '#') ADVANCE(515);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(389);
      END_STATE();
    case 391:
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 392:
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '*') ADVANCE(1239);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(392);
      END_STATE();
    case 393:
      if (lookahead == '#') ADVANCE(518);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(392);
      END_STATE();
    case 394:
      if (lookahead == '#') ADVANCE(523);
      if (lookahead == '*') ADVANCE(1203);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(394);
      END_STATE();
    case 395:
      if (lookahead == '#') ADVANCE(525);
      if (lookahead == '*') ADVANCE(1204);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(395);
      END_STATE();
    case 396:
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 397:
      if (lookahead == '#') ADVANCE(528);
      if (lookahead == '*') ADVANCE(1205);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(397);
      END_STATE();
    case 398:
      if (lookahead == '#') ADVANCE(528);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(397);
      END_STATE();
    case 399:
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 400:
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '*') ADVANCE(1206);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(400);
      END_STATE();
    case 401:
      if (lookahead == '#') ADVANCE(530);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(400);
      END_STATE();
    case 402:
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '*') ADVANCE(1207);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(402);
      END_STATE();
    case 403:
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 404:
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '*') ADVANCE(1208);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(404);
      END_STATE();
    case 405:
      if (lookahead == '#') ADVANCE(534);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(404);
      END_STATE();
    case 406:
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '*') ADVANCE(1209);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(406);
      END_STATE();
    case 407:
      if (lookahead == '#') ADVANCE(538);
      if (lookahead == '*') ADVANCE(1210);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(407);
      END_STATE();
    case 408:
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 409:
      if (lookahead == '#') ADVANCE(540);
      if (lookahead == '*') ADVANCE(1211);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(409);
      END_STATE();
    case 410:
      if (lookahead == '#') ADVANCE(540);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(409);
      END_STATE();
    case 411:
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 412:
      if (lookahead == '#') ADVANCE(543);
      if (lookahead == '*') ADVANCE(1212);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(412);
      END_STATE();
    case 413:
      if (lookahead == '#') ADVANCE(543);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(412);
      END_STATE();
    case 414:
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 415:
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '*') ADVANCE(1213);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(415);
      END_STATE();
    case 416:
      if (lookahead == '#') ADVANCE(546);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(415);
      END_STATE();
    case 417:
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 418:
      if (lookahead == '#') ADVANCE(549);
      if (lookahead == '*') ADVANCE(1215);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(418);
      END_STATE();
    case 419:
      if (lookahead == '#') ADVANCE(549);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(418);
      END_STATE();
    case 420:
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 421:
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '*') ADVANCE(1216);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(421);
      END_STATE();
    case 422:
      if (lookahead == '#') ADVANCE(551);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(421);
      END_STATE();
    case 423:
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 424:
      if (lookahead == '#') ADVANCE(553);
      if (lookahead == '*') ADVANCE(1217);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(424);
      END_STATE();
    case 425:
      if (lookahead == '#') ADVANCE(553);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(424);
      END_STATE();
    case 426:
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 427:
      if (lookahead == '#') ADVANCE(555);
      if (lookahead == '*') ADVANCE(1218);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(427);
      END_STATE();
    case 428:
      if (lookahead == '#') ADVANCE(555);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(427);
      END_STATE();
    case 429:
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 430:
      if (lookahead == '#') ADVANCE(557);
      if (lookahead == '*') ADVANCE(1219);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(430);
      END_STATE();
    case 431:
      if (lookahead == '#') ADVANCE(557);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(430);
      END_STATE();
    case 432:
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 433:
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '*') ADVANCE(1220);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(433);
      END_STATE();
    case 434:
      if (lookahead == '#') ADVANCE(559);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(433);
      END_STATE();
    case 435:
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 436:
      if (lookahead == '#') ADVANCE(561);
      if (lookahead == '*') ADVANCE(1221);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == '#') ADVANCE(561);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(436);
      END_STATE();
    case 438:
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 439:
      if (lookahead == '#') ADVANCE(563);
      if (lookahead == '*') ADVANCE(1222);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(439);
      END_STATE();
    case 440:
      if (lookahead == '#') ADVANCE(563);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(439);
      END_STATE();
    case 441:
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 442:
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '*') ADVANCE(1223);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(442);
      END_STATE();
    case 443:
      if (lookahead == '#') ADVANCE(565);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(442);
      END_STATE();
    case 444:
      if (lookahead == '#') ADVANCE(566);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(182);
      END_STATE();
    case 445:
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '*') ADVANCE(1225);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(445);
      END_STATE();
    case 446:
      if (lookahead == '#') ADVANCE(567);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(445);
      END_STATE();
    case 447:
      if (lookahead == '#') ADVANCE(568);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(184);
      END_STATE();
    case 448:
      if (lookahead == '#') ADVANCE(569);
      if (lookahead == '*') ADVANCE(1226);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(448);
      END_STATE();
    case 449:
      if (lookahead == '#') ADVANCE(569);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(448);
      END_STATE();
    case 450:
      if (lookahead == '#') ADVANCE(570);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(190);
      END_STATE();
    case 451:
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '*') ADVANCE(1229);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(451);
      END_STATE();
    case 452:
      if (lookahead == '#') ADVANCE(571);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(451);
      END_STATE();
    case 453:
      if (lookahead == '#') ADVANCE(572);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 454:
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '*') ADVANCE(1230);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(454);
      END_STATE();
    case 455:
      if (lookahead == '#') ADVANCE(573);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(454);
      END_STATE();
    case 456:
      if (lookahead == '#') ADVANCE(574);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 457:
      if (lookahead == '#') ADVANCE(575);
      if (lookahead == '*') ADVANCE(1232);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(457);
      END_STATE();
    case 458:
      if (lookahead == '#') ADVANCE(575);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(457);
      END_STATE();
    case 459:
      if (lookahead == '#') ADVANCE(576);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 460:
      if (lookahead == '#') ADVANCE(577);
      if (lookahead == '*') ADVANCE(1233);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) ADVANCE(460);
      END_STATE();
    case 461:
      if (lookahead == '#') ADVANCE(577);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(460);
      END_STATE();
    case 462:
      if (lookahead == '#') SKIP(578);
      if (lookahead == '*') SKIP(1199);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(462);
      END_STATE();
    case 463:
      if (lookahead == '#') SKIP(578);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(462);
      END_STATE();
    case 464:
      if (lookahead == '#') SKIP(580);
      if (lookahead == '*') SKIP(1201);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(464);
      END_STATE();
    case 465:
      if (lookahead == '#') SKIP(582);
      if (lookahead == '*') SKIP(1202);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(465);
      END_STATE();
    case 466:
      if (lookahead == '#') SKIP(582);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(465);
      END_STATE();
    case 467:
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 468:
      if (lookahead == '#') SKIP(584);
      if (lookahead == '*') SKIP(1214);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(468);
      END_STATE();
    case 469:
      if (lookahead == '#') SKIP(584);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(468);
      END_STATE();
    case 470:
      if (lookahead == '#') SKIP(586);
      if (lookahead == '*') SKIP(1224);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(470);
      END_STATE();
    case 471:
      if (lookahead == '#') SKIP(587);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(186);
      END_STATE();
    case 472:
      if (lookahead == '#') SKIP(588);
      if (lookahead == '*') SKIP(1227);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(472);
      END_STATE();
    case 473:
      if (lookahead == '#') SKIP(588);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(472);
      END_STATE();
    case 474:
      if (lookahead == '#') SKIP(589);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(188);
      END_STATE();
    case 475:
      if (lookahead == '#') SKIP(590);
      if (lookahead == '*') SKIP(1228);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(475);
      END_STATE();
    case 476:
      if (lookahead == '#') SKIP(590);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(475);
      END_STATE();
    case 477:
      if (lookahead == '#') SKIP(591);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(198);
      END_STATE();
    case 478:
      if (lookahead == '#') SKIP(592);
      if (lookahead == '*') SKIP(1231);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(478);
      END_STATE();
    case 479:
      if (lookahead == '#') SKIP(592);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(478);
      END_STATE();
    case 480:
      if (lookahead == '#') SKIP(593);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(204);
      END_STATE();
    case 481:
      if (lookahead == '#') SKIP(594);
      if (lookahead == '*') SKIP(1234);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(481);
      END_STATE();
    case 482:
      if (lookahead == '#') SKIP(594);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(481);
      END_STATE();
    case 483:
      if (lookahead == '#') SKIP(595);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(206);
      END_STATE();
    case 484:
      if (lookahead == '#') SKIP(596);
      if (lookahead == '*') SKIP(1235);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(484);
      END_STATE();
    case 485:
      if (lookahead == '#') SKIP(596);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(484);
      END_STATE();
    case 486:
      if (lookahead == '$') ADVANCE(599);
      END_STATE();
    case 487:
      if (lookahead == '$') SKIP(600);
      END_STATE();
    case 488:
      if (lookahead == '$') ADVANCE(601);
      END_STATE();
    case 489:
      if (lookahead == '$') ADVANCE(602);
      END_STATE();
    case 490:
      if (lookahead == '$') ADVANCE(603);
      END_STATE();
    case 491:
      if (lookahead == '$') ADVANCE(604);
      END_STATE();
    case 492:
      if (lookahead == '$') ADVANCE(605);
      END_STATE();
    case 493:
      if (lookahead == '$') ADVANCE(606);
      END_STATE();
    case 494:
      if (lookahead == '$') ADVANCE(607);
      END_STATE();
    case 495:
      if (lookahead == '$') ADVANCE(608);
      END_STATE();
    case 496:
      if (lookahead == '$') ADVANCE(609);
      END_STATE();
    case 497:
      if (lookahead == '$') ADVANCE(610);
      END_STATE();
    case 498:
      if (lookahead == '$') ADVANCE(611);
      END_STATE();
    case 499:
      if (lookahead == '$') ADVANCE(612);
      END_STATE();
    case 500:
      if (lookahead == '$') ADVANCE(613);
      END_STATE();
    case 501:
      if (lookahead == '$') ADVANCE(614);
      END_STATE();
    case 502:
      if (lookahead == '$') ADVANCE(615);
      END_STATE();
    case 503:
      if (lookahead == '$') ADVANCE(616);
      END_STATE();
    case 504:
      if (lookahead == '$') ADVANCE(617);
      END_STATE();
    case 505:
      if (lookahead == '$') ADVANCE(618);
      END_STATE();
    case 506:
      if (lookahead == '$') ADVANCE(619);
      END_STATE();
    case 507:
      if (lookahead == '$') ADVANCE(620);
      END_STATE();
    case 508:
      if (lookahead == '$') ADVANCE(621);
      END_STATE();
    case 509:
      if (lookahead == '$') ADVANCE(622);
      END_STATE();
    case 510:
      if (lookahead == '$') ADVANCE(623);
      END_STATE();
    case 511:
      if (lookahead == '$') ADVANCE(624);
      END_STATE();
    case 512:
      if (lookahead == '$') ADVANCE(625);
      END_STATE();
    case 513:
      if (lookahead == '$') ADVANCE(626);
      END_STATE();
    case 514:
      if (lookahead == '$') ADVANCE(627);
      END_STATE();
    case 515:
      if (lookahead == '$') ADVANCE(628);
      END_STATE();
    case 516:
      if (lookahead == '$') ADVANCE(629);
      END_STATE();
    case 517:
      if (lookahead == '$') ADVANCE(630);
      END_STATE();
    case 518:
      if (lookahead == '$') ADVANCE(631);
      END_STATE();
    case 519:
      if (lookahead == '$') ADVANCE(632);
      END_STATE();
    case 520:
      if (lookahead == '$') ADVANCE(633);
      END_STATE();
    case 521:
      if (lookahead == '$') ADVANCE(634);
      END_STATE();
    case 522:
      if (lookahead == '$') ADVANCE(635);
      END_STATE();
    case 523:
      if (lookahead == '$') ADVANCE(636);
      END_STATE();
    case 524:
      if (lookahead == '$') ADVANCE(637);
      END_STATE();
    case 525:
      if (lookahead == '$') ADVANCE(638);
      END_STATE();
    case 526:
      if (lookahead == '$') ADVANCE(639);
      END_STATE();
    case 527:
      if (lookahead == '$') ADVANCE(640);
      END_STATE();
    case 528:
      if (lookahead == '$') ADVANCE(641);
      END_STATE();
    case 529:
      if (lookahead == '$') ADVANCE(642);
      END_STATE();
    case 530:
      if (lookahead == '$') ADVANCE(643);
      END_STATE();
    case 531:
      if (lookahead == '$') ADVANCE(644);
      END_STATE();
    case 532:
      if (lookahead == '$') ADVANCE(645);
      END_STATE();
    case 533:
      if (lookahead == '$') ADVANCE(646);
      END_STATE();
    case 534:
      if (lookahead == '$') ADVANCE(647);
      END_STATE();
    case 535:
      if (lookahead == '$') ADVANCE(648);
      END_STATE();
    case 536:
      if (lookahead == '$') ADVANCE(649);
      END_STATE();
    case 537:
      if (lookahead == '$') ADVANCE(650);
      END_STATE();
    case 538:
      if (lookahead == '$') ADVANCE(651);
      END_STATE();
    case 539:
      if (lookahead == '$') ADVANCE(652);
      END_STATE();
    case 540:
      if (lookahead == '$') ADVANCE(653);
      END_STATE();
    case 541:
      if (lookahead == '$') ADVANCE(654);
      END_STATE();
    case 542:
      if (lookahead == '$') ADVANCE(655);
      END_STATE();
    case 543:
      if (lookahead == '$') ADVANCE(656);
      END_STATE();
    case 544:
      if (lookahead == '$') ADVANCE(657);
      END_STATE();
    case 545:
      if (lookahead == '$') ADVANCE(658);
      END_STATE();
    case 546:
      if (lookahead == '$') ADVANCE(659);
      END_STATE();
    case 547:
      if (lookahead == '$') ADVANCE(660);
      END_STATE();
    case 548:
      if (lookahead == '$') ADVANCE(661);
      END_STATE();
    case 549:
      if (lookahead == '$') ADVANCE(662);
      END_STATE();
    case 550:
      if (lookahead == '$') ADVANCE(663);
      END_STATE();
    case 551:
      if (lookahead == '$') ADVANCE(664);
      END_STATE();
    case 552:
      if (lookahead == '$') ADVANCE(665);
      END_STATE();
    case 553:
      if (lookahead == '$') ADVANCE(666);
      END_STATE();
    case 554:
      if (lookahead == '$') ADVANCE(667);
      END_STATE();
    case 555:
      if (lookahead == '$') ADVANCE(668);
      END_STATE();
    case 556:
      if (lookahead == '$') ADVANCE(669);
      END_STATE();
    case 557:
      if (lookahead == '$') ADVANCE(670);
      END_STATE();
    case 558:
      if (lookahead == '$') ADVANCE(671);
      END_STATE();
    case 559:
      if (lookahead == '$') ADVANCE(672);
      END_STATE();
    case 560:
      if (lookahead == '$') ADVANCE(673);
      END_STATE();
    case 561:
      if (lookahead == '$') ADVANCE(674);
      END_STATE();
    case 562:
      if (lookahead == '$') ADVANCE(675);
      END_STATE();
    case 563:
      if (lookahead == '$') ADVANCE(676);
      END_STATE();
    case 564:
      if (lookahead == '$') ADVANCE(677);
      END_STATE();
    case 565:
      if (lookahead == '$') ADVANCE(678);
      END_STATE();
    case 566:
      if (lookahead == '$') ADVANCE(679);
      END_STATE();
    case 567:
      if (lookahead == '$') ADVANCE(680);
      END_STATE();
    case 568:
      if (lookahead == '$') ADVANCE(681);
      END_STATE();
    case 569:
      if (lookahead == '$') ADVANCE(682);
      END_STATE();
    case 570:
      if (lookahead == '$') ADVANCE(683);
      END_STATE();
    case 571:
      if (lookahead == '$') ADVANCE(684);
      END_STATE();
    case 572:
      if (lookahead == '$') ADVANCE(685);
      END_STATE();
    case 573:
      if (lookahead == '$') ADVANCE(686);
      END_STATE();
    case 574:
      if (lookahead == '$') ADVANCE(687);
      END_STATE();
    case 575:
      if (lookahead == '$') ADVANCE(688);
      END_STATE();
    case 576:
      if (lookahead == '$') ADVANCE(689);
      END_STATE();
    case 577:
      if (lookahead == '$') ADVANCE(690);
      END_STATE();
    case 578:
      if (lookahead == '$') SKIP(691);
      END_STATE();
    case 579:
      if (lookahead == '$') SKIP(692);
      END_STATE();
    case 580:
      if (lookahead == '$') SKIP(693);
      END_STATE();
    case 581:
      if (lookahead == '$') SKIP(694);
      END_STATE();
    case 582:
      if (lookahead == '$') SKIP(695);
      END_STATE();
    case 583:
      if (lookahead == '$') SKIP(696);
      END_STATE();
    case 584:
      if (lookahead == '$') SKIP(697);
      END_STATE();
    case 585:
      if (lookahead == '$') SKIP(698);
      END_STATE();
    case 586:
      if (lookahead == '$') SKIP(699);
      END_STATE();
    case 587:
      if (lookahead == '$') SKIP(700);
      END_STATE();
    case 588:
      if (lookahead == '$') SKIP(701);
      END_STATE();
    case 589:
      if (lookahead == '$') SKIP(702);
      END_STATE();
    case 590:
      if (lookahead == '$') SKIP(703);
      END_STATE();
    case 591:
      if (lookahead == '$') SKIP(704);
      END_STATE();
    case 592:
      if (lookahead == '$') SKIP(705);
      END_STATE();
    case 593:
      if (lookahead == '$') SKIP(706);
      END_STATE();
    case 594:
      if (lookahead == '$') SKIP(707);
      END_STATE();
    case 595:
      if (lookahead == '$') SKIP(708);
      END_STATE();
    case 596:
      if (lookahead == '$') SKIP(709);
      END_STATE();
    case 597:
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2775);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(597);
      END_STATE();
    case 598:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '}') ADVANCE(2785);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(598);
      END_STATE();
    case 599:
      if (lookahead == '&') ADVANCE(712);
      END_STATE();
    case 600:
      if (lookahead == '&') SKIP(714);
      END_STATE();
    case 601:
      if (lookahead == '&') ADVANCE(741);
      END_STATE();
    case 602:
      if (lookahead == '&') ADVANCE(742);
      END_STATE();
    case 603:
      if (lookahead == '&') ADVANCE(743);
      END_STATE();
    case 604:
      if (lookahead == '&') ADVANCE(744);
      END_STATE();
    case 605:
      if (lookahead == '&') ADVANCE(745);
      END_STATE();
    case 606:
      if (lookahead == '&') ADVANCE(746);
      END_STATE();
    case 607:
      if (lookahead == '&') ADVANCE(747);
      END_STATE();
    case 608:
      if (lookahead == '&') ADVANCE(748);
      END_STATE();
    case 609:
      if (lookahead == '&') ADVANCE(749);
      END_STATE();
    case 610:
      if (lookahead == '&') ADVANCE(750);
      END_STATE();
    case 611:
      if (lookahead == '&') ADVANCE(751);
      END_STATE();
    case 612:
      if (lookahead == '&') ADVANCE(752);
      END_STATE();
    case 613:
      if (lookahead == '&') ADVANCE(753);
      END_STATE();
    case 614:
      if (lookahead == '&') ADVANCE(754);
      END_STATE();
    case 615:
      if (lookahead == '&') ADVANCE(755);
      END_STATE();
    case 616:
      if (lookahead == '&') ADVANCE(756);
      END_STATE();
    case 617:
      if (lookahead == '&') ADVANCE(757);
      END_STATE();
    case 618:
      if (lookahead == '&') ADVANCE(758);
      END_STATE();
    case 619:
      if (lookahead == '&') ADVANCE(759);
      END_STATE();
    case 620:
      if (lookahead == '&') ADVANCE(760);
      END_STATE();
    case 621:
      if (lookahead == '&') ADVANCE(761);
      END_STATE();
    case 622:
      if (lookahead == '&') ADVANCE(762);
      END_STATE();
    case 623:
      if (lookahead == '&') ADVANCE(763);
      END_STATE();
    case 624:
      if (lookahead == '&') ADVANCE(764);
      END_STATE();
    case 625:
      if (lookahead == '&') ADVANCE(765);
      END_STATE();
    case 626:
      if (lookahead == '&') ADVANCE(766);
      END_STATE();
    case 627:
      if (lookahead == '&') ADVANCE(767);
      END_STATE();
    case 628:
      if (lookahead == '&') ADVANCE(768);
      END_STATE();
    case 629:
      if (lookahead == '&') ADVANCE(769);
      END_STATE();
    case 630:
      if (lookahead == '&') ADVANCE(770);
      END_STATE();
    case 631:
      if (lookahead == '&') ADVANCE(771);
      END_STATE();
    case 632:
      if (lookahead == '&') ADVANCE(772);
      END_STATE();
    case 633:
      if (lookahead == '&') ADVANCE(773);
      END_STATE();
    case 634:
      if (lookahead == '&') ADVANCE(774);
      END_STATE();
    case 635:
      if (lookahead == '&') ADVANCE(775);
      END_STATE();
    case 636:
      if (lookahead == '&') ADVANCE(776);
      END_STATE();
    case 637:
      if (lookahead == '&') ADVANCE(777);
      END_STATE();
    case 638:
      if (lookahead == '&') ADVANCE(778);
      END_STATE();
    case 639:
      if (lookahead == '&') ADVANCE(779);
      END_STATE();
    case 640:
      if (lookahead == '&') ADVANCE(780);
      END_STATE();
    case 641:
      if (lookahead == '&') ADVANCE(781);
      END_STATE();
    case 642:
      if (lookahead == '&') ADVANCE(782);
      END_STATE();
    case 643:
      if (lookahead == '&') ADVANCE(783);
      END_STATE();
    case 644:
      if (lookahead == '&') ADVANCE(784);
      END_STATE();
    case 645:
      if (lookahead == '&') ADVANCE(785);
      END_STATE();
    case 646:
      if (lookahead == '&') ADVANCE(786);
      END_STATE();
    case 647:
      if (lookahead == '&') ADVANCE(787);
      END_STATE();
    case 648:
      if (lookahead == '&') ADVANCE(788);
      END_STATE();
    case 649:
      if (lookahead == '&') ADVANCE(789);
      END_STATE();
    case 650:
      if (lookahead == '&') ADVANCE(790);
      END_STATE();
    case 651:
      if (lookahead == '&') ADVANCE(791);
      END_STATE();
    case 652:
      if (lookahead == '&') ADVANCE(792);
      END_STATE();
    case 653:
      if (lookahead == '&') ADVANCE(793);
      END_STATE();
    case 654:
      if (lookahead == '&') ADVANCE(794);
      END_STATE();
    case 655:
      if (lookahead == '&') ADVANCE(795);
      END_STATE();
    case 656:
      if (lookahead == '&') ADVANCE(796);
      END_STATE();
    case 657:
      if (lookahead == '&') ADVANCE(797);
      END_STATE();
    case 658:
      if (lookahead == '&') ADVANCE(798);
      END_STATE();
    case 659:
      if (lookahead == '&') ADVANCE(799);
      END_STATE();
    case 660:
      if (lookahead == '&') ADVANCE(800);
      END_STATE();
    case 661:
      if (lookahead == '&') ADVANCE(801);
      END_STATE();
    case 662:
      if (lookahead == '&') ADVANCE(802);
      END_STATE();
    case 663:
      if (lookahead == '&') ADVANCE(803);
      END_STATE();
    case 664:
      if (lookahead == '&') ADVANCE(804);
      END_STATE();
    case 665:
      if (lookahead == '&') ADVANCE(805);
      END_STATE();
    case 666:
      if (lookahead == '&') ADVANCE(806);
      END_STATE();
    case 667:
      if (lookahead == '&') ADVANCE(807);
      END_STATE();
    case 668:
      if (lookahead == '&') ADVANCE(808);
      END_STATE();
    case 669:
      if (lookahead == '&') ADVANCE(809);
      END_STATE();
    case 670:
      if (lookahead == '&') ADVANCE(810);
      END_STATE();
    case 671:
      if (lookahead == '&') ADVANCE(811);
      END_STATE();
    case 672:
      if (lookahead == '&') ADVANCE(812);
      END_STATE();
    case 673:
      if (lookahead == '&') ADVANCE(813);
      END_STATE();
    case 674:
      if (lookahead == '&') ADVANCE(814);
      END_STATE();
    case 675:
      if (lookahead == '&') ADVANCE(815);
      END_STATE();
    case 676:
      if (lookahead == '&') ADVANCE(816);
      END_STATE();
    case 677:
      if (lookahead == '&') ADVANCE(817);
      END_STATE();
    case 678:
      if (lookahead == '&') ADVANCE(818);
      END_STATE();
    case 679:
      if (lookahead == '&') ADVANCE(819);
      END_STATE();
    case 680:
      if (lookahead == '&') ADVANCE(820);
      END_STATE();
    case 681:
      if (lookahead == '&') ADVANCE(821);
      END_STATE();
    case 682:
      if (lookahead == '&') ADVANCE(822);
      END_STATE();
    case 683:
      if (lookahead == '&') ADVANCE(823);
      END_STATE();
    case 684:
      if (lookahead == '&') ADVANCE(824);
      END_STATE();
    case 685:
      if (lookahead == '&') ADVANCE(825);
      END_STATE();
    case 686:
      if (lookahead == '&') ADVANCE(826);
      END_STATE();
    case 687:
      if (lookahead == '&') ADVANCE(827);
      END_STATE();
    case 688:
      if (lookahead == '&') ADVANCE(828);
      END_STATE();
    case 689:
      if (lookahead == '&') ADVANCE(829);
      END_STATE();
    case 690:
      if (lookahead == '&') ADVANCE(830);
      END_STATE();
    case 691:
      if (lookahead == '&') SKIP(831);
      END_STATE();
    case 692:
      if (lookahead == '&') SKIP(832);
      END_STATE();
    case 693:
      if (lookahead == '&') SKIP(833);
      END_STATE();
    case 694:
      if (lookahead == '&') SKIP(834);
      END_STATE();
    case 695:
      if (lookahead == '&') SKIP(835);
      END_STATE();
    case 696:
      if (lookahead == '&') SKIP(836);
      END_STATE();
    case 697:
      if (lookahead == '&') SKIP(837);
      END_STATE();
    case 698:
      if (lookahead == '&') SKIP(838);
      END_STATE();
    case 699:
      if (lookahead == '&') SKIP(839);
      END_STATE();
    case 700:
      if (lookahead == '&') SKIP(840);
      END_STATE();
    case 701:
      if (lookahead == '&') SKIP(841);
      END_STATE();
    case 702:
      if (lookahead == '&') SKIP(842);
      END_STATE();
    case 703:
      if (lookahead == '&') SKIP(843);
      END_STATE();
    case 704:
      if (lookahead == '&') SKIP(844);
      END_STATE();
    case 705:
      if (lookahead == '&') SKIP(845);
      END_STATE();
    case 706:
      if (lookahead == '&') SKIP(846);
      END_STATE();
    case 707:
      if (lookahead == '&') SKIP(847);
      END_STATE();
    case 708:
      if (lookahead == '&') SKIP(848);
      END_STATE();
    case 709:
      if (lookahead == '&') SKIP(849);
      END_STATE();
    case 710:
      if (lookahead == '\'') ADVANCE(2689);
      END_STATE();
    case 711:
      if (lookahead == '*') ADVANCE(2921);
      if (lookahead == '/') ADVANCE(2678);
      END_STATE();
    case 712:
      if (lookahead == '*') ADVANCE(851);
      END_STATE();
    case 713:
      if (lookahead == '*') SKIP(463);
      END_STATE();
    case 714:
      if (lookahead == '*') SKIP(850);
      END_STATE();
    case 715:
      if (lookahead == '*') ADVANCE(2676);
      END_STATE();
    case 716:
      if (lookahead == '*') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(2877);
      END_STATE();
    case 717:
      if (lookahead == '*') ADVANCE(364);
      END_STATE();
    case 718:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 719:
      if (lookahead == '*') ADVANCE(372);
      END_STATE();
    case 720:
      if (lookahead == '*') ADVANCE(376);
      END_STATE();
    case 721:
      if (lookahead == '*') ADVANCE(378);
      END_STATE();
    case 722:
      if (lookahead == '*') ADVANCE(381);
      END_STATE();
    case 723:
      if (lookahead == '*') ADVANCE(384);
      END_STATE();
    case 724:
      if (lookahead == '*') ADVANCE(388);
      END_STATE();
    case 725:
      if (lookahead == '*') ADVANCE(390);
      END_STATE();
    case 726:
      if (lookahead == '*') ADVANCE(393);
      END_STATE();
    case 727:
      if (lookahead == '*') SKIP(466);
      END_STATE();
    case 728:
      if (lookahead == '*') ADVANCE(2677);
      END_STATE();
    case 729:
      if (lookahead == '*') SKIP(469);
      END_STATE();
    case 730:
      if (lookahead == '*') SKIP(473);
      END_STATE();
    case 731:
      if (lookahead == '*') SKIP(476);
      END_STATE();
    case 732:
      if (lookahead == '*') SKIP(479);
      END_STATE();
    case 733:
      if (lookahead == '*') SKIP(482);
      END_STATE();
    case 734:
      if (lookahead == '*') SKIP(485);
      END_STATE();
    case 735:
      if (lookahead == '*') ADVANCE(446);
      END_STATE();
    case 736:
      if (lookahead == '*') ADVANCE(449);
      END_STATE();
    case 737:
      if (lookahead == '*') ADVANCE(452);
      END_STATE();
    case 738:
      if (lookahead == '*') ADVANCE(455);
      END_STATE();
    case 739:
      if (lookahead == '*') ADVANCE(458);
      END_STATE();
    case 740:
      if (lookahead == '*') ADVANCE(461);
      END_STATE();
    case 741:
      if (lookahead == '*') ADVANCE(852);
      END_STATE();
    case 742:
      if (lookahead == '*') ADVANCE(853);
      END_STATE();
    case 743:
      if (lookahead == '*') ADVANCE(854);
      END_STATE();
    case 744:
      if (lookahead == '*') ADVANCE(855);
      END_STATE();
    case 745:
      if (lookahead == '*') ADVANCE(856);
      END_STATE();
    case 746:
      if (lookahead == '*') ADVANCE(857);
      END_STATE();
    case 747:
      if (lookahead == '*') ADVANCE(858);
      END_STATE();
    case 748:
      if (lookahead == '*') ADVANCE(859);
      END_STATE();
    case 749:
      if (lookahead == '*') ADVANCE(860);
      END_STATE();
    case 750:
      if (lookahead == '*') ADVANCE(861);
      END_STATE();
    case 751:
      if (lookahead == '*') ADVANCE(862);
      END_STATE();
    case 752:
      if (lookahead == '*') ADVANCE(863);
      END_STATE();
    case 753:
      if (lookahead == '*') ADVANCE(864);
      END_STATE();
    case 754:
      if (lookahead == '*') ADVANCE(865);
      END_STATE();
    case 755:
      if (lookahead == '*') ADVANCE(866);
      END_STATE();
    case 756:
      if (lookahead == '*') ADVANCE(867);
      END_STATE();
    case 757:
      if (lookahead == '*') ADVANCE(868);
      END_STATE();
    case 758:
      if (lookahead == '*') ADVANCE(869);
      END_STATE();
    case 759:
      if (lookahead == '*') ADVANCE(870);
      END_STATE();
    case 760:
      if (lookahead == '*') ADVANCE(871);
      END_STATE();
    case 761:
      if (lookahead == '*') ADVANCE(872);
      END_STATE();
    case 762:
      if (lookahead == '*') ADVANCE(873);
      END_STATE();
    case 763:
      if (lookahead == '*') ADVANCE(874);
      END_STATE();
    case 764:
      if (lookahead == '*') ADVANCE(875);
      END_STATE();
    case 765:
      if (lookahead == '*') ADVANCE(876);
      END_STATE();
    case 766:
      if (lookahead == '*') ADVANCE(877);
      END_STATE();
    case 767:
      if (lookahead == '*') ADVANCE(878);
      END_STATE();
    case 768:
      if (lookahead == '*') ADVANCE(879);
      END_STATE();
    case 769:
      if (lookahead == '*') ADVANCE(880);
      END_STATE();
    case 770:
      if (lookahead == '*') ADVANCE(881);
      END_STATE();
    case 771:
      if (lookahead == '*') ADVANCE(882);
      END_STATE();
    case 772:
      if (lookahead == '*') ADVANCE(883);
      END_STATE();
    case 773:
      if (lookahead == '*') ADVANCE(884);
      END_STATE();
    case 774:
      if (lookahead == '*') ADVANCE(885);
      END_STATE();
    case 775:
      if (lookahead == '*') ADVANCE(886);
      END_STATE();
    case 776:
      if (lookahead == '*') ADVANCE(887);
      END_STATE();
    case 777:
      if (lookahead == '*') ADVANCE(888);
      END_STATE();
    case 778:
      if (lookahead == '*') ADVANCE(889);
      END_STATE();
    case 779:
      if (lookahead == '*') ADVANCE(890);
      END_STATE();
    case 780:
      if (lookahead == '*') ADVANCE(891);
      END_STATE();
    case 781:
      if (lookahead == '*') ADVANCE(892);
      END_STATE();
    case 782:
      if (lookahead == '*') ADVANCE(893);
      END_STATE();
    case 783:
      if (lookahead == '*') ADVANCE(894);
      END_STATE();
    case 784:
      if (lookahead == '*') ADVANCE(895);
      END_STATE();
    case 785:
      if (lookahead == '*') ADVANCE(896);
      END_STATE();
    case 786:
      if (lookahead == '*') ADVANCE(897);
      END_STATE();
    case 787:
      if (lookahead == '*') ADVANCE(898);
      END_STATE();
    case 788:
      if (lookahead == '*') ADVANCE(899);
      END_STATE();
    case 789:
      if (lookahead == '*') ADVANCE(900);
      END_STATE();
    case 790:
      if (lookahead == '*') ADVANCE(901);
      END_STATE();
    case 791:
      if (lookahead == '*') ADVANCE(902);
      END_STATE();
    case 792:
      if (lookahead == '*') ADVANCE(903);
      END_STATE();
    case 793:
      if (lookahead == '*') ADVANCE(904);
      END_STATE();
    case 794:
      if (lookahead == '*') ADVANCE(905);
      END_STATE();
    case 795:
      if (lookahead == '*') ADVANCE(906);
      END_STATE();
    case 796:
      if (lookahead == '*') ADVANCE(907);
      END_STATE();
    case 797:
      if (lookahead == '*') ADVANCE(908);
      END_STATE();
    case 798:
      if (lookahead == '*') ADVANCE(909);
      END_STATE();
    case 799:
      if (lookahead == '*') ADVANCE(910);
      END_STATE();
    case 800:
      if (lookahead == '*') ADVANCE(911);
      END_STATE();
    case 801:
      if (lookahead == '*') ADVANCE(912);
      END_STATE();
    case 802:
      if (lookahead == '*') ADVANCE(913);
      END_STATE();
    case 803:
      if (lookahead == '*') ADVANCE(914);
      END_STATE();
    case 804:
      if (lookahead == '*') ADVANCE(915);
      END_STATE();
    case 805:
      if (lookahead == '*') ADVANCE(916);
      END_STATE();
    case 806:
      if (lookahead == '*') ADVANCE(917);
      END_STATE();
    case 807:
      if (lookahead == '*') ADVANCE(918);
      END_STATE();
    case 808:
      if (lookahead == '*') ADVANCE(919);
      END_STATE();
    case 809:
      if (lookahead == '*') ADVANCE(920);
      END_STATE();
    case 810:
      if (lookahead == '*') ADVANCE(921);
      END_STATE();
    case 811:
      if (lookahead == '*') ADVANCE(922);
      END_STATE();
    case 812:
      if (lookahead == '*') ADVANCE(923);
      END_STATE();
    case 813:
      if (lookahead == '*') ADVANCE(924);
      END_STATE();
    case 814:
      if (lookahead == '*') ADVANCE(925);
      END_STATE();
    case 815:
      if (lookahead == '*') ADVANCE(926);
      END_STATE();
    case 816:
      if (lookahead == '*') ADVANCE(927);
      END_STATE();
    case 817:
      if (lookahead == '*') ADVANCE(928);
      END_STATE();
    case 818:
      if (lookahead == '*') ADVANCE(929);
      END_STATE();
    case 819:
      if (lookahead == '*') ADVANCE(930);
      END_STATE();
    case 820:
      if (lookahead == '*') ADVANCE(931);
      END_STATE();
    case 821:
      if (lookahead == '*') ADVANCE(932);
      END_STATE();
    case 822:
      if (lookahead == '*') ADVANCE(933);
      END_STATE();
    case 823:
      if (lookahead == '*') ADVANCE(934);
      END_STATE();
    case 824:
      if (lookahead == '*') ADVANCE(935);
      END_STATE();
    case 825:
      if (lookahead == '*') ADVANCE(936);
      END_STATE();
    case 826:
      if (lookahead == '*') ADVANCE(937);
      END_STATE();
    case 827:
      if (lookahead == '*') ADVANCE(938);
      END_STATE();
    case 828:
      if (lookahead == '*') ADVANCE(939);
      END_STATE();
    case 829:
      if (lookahead == '*') ADVANCE(940);
      END_STATE();
    case 830:
      if (lookahead == '*') ADVANCE(941);
      END_STATE();
    case 831:
      if (lookahead == '*') SKIP(942);
      END_STATE();
    case 832:
      if (lookahead == '*') SKIP(943);
      END_STATE();
    case 833:
      if (lookahead == '*') SKIP(944);
      END_STATE();
    case 834:
      if (lookahead == '*') SKIP(945);
      END_STATE();
    case 835:
      if (lookahead == '*') SKIP(946);
      END_STATE();
    case 836:
      if (lookahead == '*') SKIP(947);
      END_STATE();
    case 837:
      if (lookahead == '*') SKIP(948);
      END_STATE();
    case 838:
      if (lookahead == '*') SKIP(949);
      END_STATE();
    case 839:
      if (lookahead == '*') SKIP(950);
      END_STATE();
    case 840:
      if (lookahead == '*') SKIP(951);
      END_STATE();
    case 841:
      if (lookahead == '*') SKIP(952);
      END_STATE();
    case 842:
      if (lookahead == '*') SKIP(953);
      END_STATE();
    case 843:
      if (lookahead == '*') SKIP(954);
      END_STATE();
    case 844:
      if (lookahead == '*') SKIP(955);
      END_STATE();
    case 845:
      if (lookahead == '*') SKIP(956);
      END_STATE();
    case 846:
      if (lookahead == '*') SKIP(957);
      END_STATE();
    case 847:
      if (lookahead == '*') SKIP(958);
      END_STATE();
    case 848:
      if (lookahead == '*') SKIP(959);
      END_STATE();
    case 849:
      if (lookahead == '*') SKIP(960);
      END_STATE();
    case 850:
      if (lookahead == '+') SKIP(966);
      END_STATE();
    case 851:
      if (lookahead == '+') ADVANCE(965);
      END_STATE();
    case 852:
      if (lookahead == '+') ADVANCE(967);
      END_STATE();
    case 853:
      if (lookahead == '+') ADVANCE(968);
      END_STATE();
    case 854:
      if (lookahead == '+') ADVANCE(969);
      END_STATE();
    case 855:
      if (lookahead == '+') ADVANCE(970);
      END_STATE();
    case 856:
      if (lookahead == '+') ADVANCE(971);
      END_STATE();
    case 857:
      if (lookahead == '+') ADVANCE(972);
      END_STATE();
    case 858:
      if (lookahead == '+') ADVANCE(973);
      END_STATE();
    case 859:
      if (lookahead == '+') ADVANCE(974);
      END_STATE();
    case 860:
      if (lookahead == '+') ADVANCE(975);
      END_STATE();
    case 861:
      if (lookahead == '+') ADVANCE(976);
      END_STATE();
    case 862:
      if (lookahead == '+') ADVANCE(977);
      END_STATE();
    case 863:
      if (lookahead == '+') ADVANCE(978);
      END_STATE();
    case 864:
      if (lookahead == '+') ADVANCE(979);
      END_STATE();
    case 865:
      if (lookahead == '+') ADVANCE(980);
      END_STATE();
    case 866:
      if (lookahead == '+') ADVANCE(981);
      END_STATE();
    case 867:
      if (lookahead == '+') ADVANCE(982);
      END_STATE();
    case 868:
      if (lookahead == '+') ADVANCE(983);
      END_STATE();
    case 869:
      if (lookahead == '+') ADVANCE(984);
      END_STATE();
    case 870:
      if (lookahead == '+') ADVANCE(985);
      END_STATE();
    case 871:
      if (lookahead == '+') ADVANCE(986);
      END_STATE();
    case 872:
      if (lookahead == '+') ADVANCE(987);
      END_STATE();
    case 873:
      if (lookahead == '+') ADVANCE(988);
      END_STATE();
    case 874:
      if (lookahead == '+') ADVANCE(989);
      END_STATE();
    case 875:
      if (lookahead == '+') ADVANCE(990);
      END_STATE();
    case 876:
      if (lookahead == '+') ADVANCE(991);
      END_STATE();
    case 877:
      if (lookahead == '+') ADVANCE(992);
      END_STATE();
    case 878:
      if (lookahead == '+') ADVANCE(993);
      END_STATE();
    case 879:
      if (lookahead == '+') ADVANCE(994);
      END_STATE();
    case 880:
      if (lookahead == '+') ADVANCE(995);
      END_STATE();
    case 881:
      if (lookahead == '+') ADVANCE(996);
      END_STATE();
    case 882:
      if (lookahead == '+') ADVANCE(997);
      END_STATE();
    case 883:
      if (lookahead == '+') ADVANCE(998);
      END_STATE();
    case 884:
      if (lookahead == '+') ADVANCE(999);
      END_STATE();
    case 885:
      if (lookahead == '+') ADVANCE(1000);
      END_STATE();
    case 886:
      if (lookahead == '+') ADVANCE(1001);
      END_STATE();
    case 887:
      if (lookahead == '+') ADVANCE(1002);
      END_STATE();
    case 888:
      if (lookahead == '+') ADVANCE(1003);
      END_STATE();
    case 889:
      if (lookahead == '+') ADVANCE(1004);
      END_STATE();
    case 890:
      if (lookahead == '+') ADVANCE(1005);
      END_STATE();
    case 891:
      if (lookahead == '+') ADVANCE(1006);
      END_STATE();
    case 892:
      if (lookahead == '+') ADVANCE(1007);
      END_STATE();
    case 893:
      if (lookahead == '+') ADVANCE(1008);
      END_STATE();
    case 894:
      if (lookahead == '+') ADVANCE(1009);
      END_STATE();
    case 895:
      if (lookahead == '+') ADVANCE(1010);
      END_STATE();
    case 896:
      if (lookahead == '+') ADVANCE(1011);
      END_STATE();
    case 897:
      if (lookahead == '+') ADVANCE(1012);
      END_STATE();
    case 898:
      if (lookahead == '+') ADVANCE(1013);
      END_STATE();
    case 899:
      if (lookahead == '+') ADVANCE(1014);
      END_STATE();
    case 900:
      if (lookahead == '+') ADVANCE(1015);
      END_STATE();
    case 901:
      if (lookahead == '+') ADVANCE(1016);
      END_STATE();
    case 902:
      if (lookahead == '+') ADVANCE(1017);
      END_STATE();
    case 903:
      if (lookahead == '+') ADVANCE(1018);
      END_STATE();
    case 904:
      if (lookahead == '+') ADVANCE(1019);
      END_STATE();
    case 905:
      if (lookahead == '+') ADVANCE(1020);
      END_STATE();
    case 906:
      if (lookahead == '+') ADVANCE(1021);
      END_STATE();
    case 907:
      if (lookahead == '+') ADVANCE(1022);
      END_STATE();
    case 908:
      if (lookahead == '+') ADVANCE(1023);
      END_STATE();
    case 909:
      if (lookahead == '+') ADVANCE(1024);
      END_STATE();
    case 910:
      if (lookahead == '+') ADVANCE(1025);
      END_STATE();
    case 911:
      if (lookahead == '+') ADVANCE(1026);
      END_STATE();
    case 912:
      if (lookahead == '+') ADVANCE(1027);
      END_STATE();
    case 913:
      if (lookahead == '+') ADVANCE(1028);
      END_STATE();
    case 914:
      if (lookahead == '+') ADVANCE(1029);
      END_STATE();
    case 915:
      if (lookahead == '+') ADVANCE(1030);
      END_STATE();
    case 916:
      if (lookahead == '+') ADVANCE(1031);
      END_STATE();
    case 917:
      if (lookahead == '+') ADVANCE(1032);
      END_STATE();
    case 918:
      if (lookahead == '+') ADVANCE(1033);
      END_STATE();
    case 919:
      if (lookahead == '+') ADVANCE(1034);
      END_STATE();
    case 920:
      if (lookahead == '+') ADVANCE(1035);
      END_STATE();
    case 921:
      if (lookahead == '+') ADVANCE(1036);
      END_STATE();
    case 922:
      if (lookahead == '+') ADVANCE(1037);
      END_STATE();
    case 923:
      if (lookahead == '+') ADVANCE(1038);
      END_STATE();
    case 924:
      if (lookahead == '+') ADVANCE(1039);
      END_STATE();
    case 925:
      if (lookahead == '+') ADVANCE(1040);
      END_STATE();
    case 926:
      if (lookahead == '+') ADVANCE(1041);
      END_STATE();
    case 927:
      if (lookahead == '+') ADVANCE(1042);
      END_STATE();
    case 928:
      if (lookahead == '+') ADVANCE(1043);
      END_STATE();
    case 929:
      if (lookahead == '+') ADVANCE(1044);
      END_STATE();
    case 930:
      if (lookahead == '+') ADVANCE(1045);
      END_STATE();
    case 931:
      if (lookahead == '+') ADVANCE(1046);
      END_STATE();
    case 932:
      if (lookahead == '+') ADVANCE(1047);
      END_STATE();
    case 933:
      if (lookahead == '+') ADVANCE(1048);
      END_STATE();
    case 934:
      if (lookahead == '+') ADVANCE(1049);
      END_STATE();
    case 935:
      if (lookahead == '+') ADVANCE(1050);
      END_STATE();
    case 936:
      if (lookahead == '+') ADVANCE(1051);
      END_STATE();
    case 937:
      if (lookahead == '+') ADVANCE(1052);
      END_STATE();
    case 938:
      if (lookahead == '+') ADVANCE(1053);
      END_STATE();
    case 939:
      if (lookahead == '+') ADVANCE(1054);
      END_STATE();
    case 940:
      if (lookahead == '+') ADVANCE(1055);
      END_STATE();
    case 941:
      if (lookahead == '+') ADVANCE(1056);
      END_STATE();
    case 942:
      if (lookahead == '+') SKIP(1057);
      END_STATE();
    case 943:
      if (lookahead == '+') SKIP(1058);
      END_STATE();
    case 944:
      if (lookahead == '+') SKIP(1059);
      END_STATE();
    case 945:
      if (lookahead == '+') SKIP(1060);
      END_STATE();
    case 946:
      if (lookahead == '+') SKIP(1061);
      END_STATE();
    case 947:
      if (lookahead == '+') SKIP(1062);
      END_STATE();
    case 948:
      if (lookahead == '+') SKIP(1063);
      END_STATE();
    case 949:
      if (lookahead == '+') SKIP(1064);
      END_STATE();
    case 950:
      if (lookahead == '+') SKIP(1065);
      END_STATE();
    case 951:
      if (lookahead == '+') SKIP(1066);
      END_STATE();
    case 952:
      if (lookahead == '+') SKIP(1067);
      END_STATE();
    case 953:
      if (lookahead == '+') SKIP(1068);
      END_STATE();
    case 954:
      if (lookahead == '+') SKIP(1069);
      END_STATE();
    case 955:
      if (lookahead == '+') SKIP(1070);
      END_STATE();
    case 956:
      if (lookahead == '+') SKIP(1071);
      END_STATE();
    case 957:
      if (lookahead == '+') SKIP(1072);
      END_STATE();
    case 958:
      if (lookahead == '+') SKIP(1073);
      END_STATE();
    case 959:
      if (lookahead == '+') SKIP(1074);
      END_STATE();
    case 960:
      if (lookahead == '+') SKIP(1075);
      END_STATE();
    case 961:
      if (lookahead == ',') ADVANCE(2130);
      END_STATE();
    case 962:
      if (lookahead == '-') ADVANCE(2293);
      END_STATE();
    case 963:
      if (lookahead == '-') ADVANCE(2828);
      END_STATE();
    case 964:
      if (lookahead == '-') ADVANCE(2827);
      END_STATE();
    case 965:
      if (lookahead == '-') ADVANCE(1078);
      END_STATE();
    case 966:
      if (lookahead == '-') SKIP(1079);
      END_STATE();
    case 967:
      if (lookahead == '-') ADVANCE(1080);
      END_STATE();
    case 968:
      if (lookahead == '-') ADVANCE(1081);
      END_STATE();
    case 969:
      if (lookahead == '-') ADVANCE(1082);
      END_STATE();
    case 970:
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 971:
      if (lookahead == '-') ADVANCE(1084);
      END_STATE();
    case 972:
      if (lookahead == '-') ADVANCE(1085);
      END_STATE();
    case 973:
      if (lookahead == '-') ADVANCE(1086);
      END_STATE();
    case 974:
      if (lookahead == '-') ADVANCE(1087);
      END_STATE();
    case 975:
      if (lookahead == '-') ADVANCE(1088);
      END_STATE();
    case 976:
      if (lookahead == '-') ADVANCE(1089);
      END_STATE();
    case 977:
      if (lookahead == '-') ADVANCE(1090);
      END_STATE();
    case 978:
      if (lookahead == '-') ADVANCE(1091);
      END_STATE();
    case 979:
      if (lookahead == '-') ADVANCE(1092);
      END_STATE();
    case 980:
      if (lookahead == '-') ADVANCE(1093);
      END_STATE();
    case 981:
      if (lookahead == '-') ADVANCE(1094);
      END_STATE();
    case 982:
      if (lookahead == '-') ADVANCE(1095);
      END_STATE();
    case 983:
      if (lookahead == '-') ADVANCE(1096);
      END_STATE();
    case 984:
      if (lookahead == '-') ADVANCE(1097);
      END_STATE();
    case 985:
      if (lookahead == '-') ADVANCE(1098);
      END_STATE();
    case 986:
      if (lookahead == '-') ADVANCE(1099);
      END_STATE();
    case 987:
      if (lookahead == '-') ADVANCE(1100);
      END_STATE();
    case 988:
      if (lookahead == '-') ADVANCE(1101);
      END_STATE();
    case 989:
      if (lookahead == '-') ADVANCE(1102);
      END_STATE();
    case 990:
      if (lookahead == '-') ADVANCE(1103);
      END_STATE();
    case 991:
      if (lookahead == '-') ADVANCE(1104);
      END_STATE();
    case 992:
      if (lookahead == '-') ADVANCE(1105);
      END_STATE();
    case 993:
      if (lookahead == '-') ADVANCE(1106);
      END_STATE();
    case 994:
      if (lookahead == '-') ADVANCE(1107);
      END_STATE();
    case 995:
      if (lookahead == '-') ADVANCE(1108);
      END_STATE();
    case 996:
      if (lookahead == '-') ADVANCE(1109);
      END_STATE();
    case 997:
      if (lookahead == '-') ADVANCE(1110);
      END_STATE();
    case 998:
      if (lookahead == '-') ADVANCE(1111);
      END_STATE();
    case 999:
      if (lookahead == '-') ADVANCE(1112);
      END_STATE();
    case 1000:
      if (lookahead == '-') ADVANCE(1113);
      END_STATE();
    case 1001:
      if (lookahead == '-') ADVANCE(1114);
      END_STATE();
    case 1002:
      if (lookahead == '-') ADVANCE(1115);
      END_STATE();
    case 1003:
      if (lookahead == '-') ADVANCE(1116);
      END_STATE();
    case 1004:
      if (lookahead == '-') ADVANCE(1117);
      END_STATE();
    case 1005:
      if (lookahead == '-') ADVANCE(1118);
      END_STATE();
    case 1006:
      if (lookahead == '-') ADVANCE(1119);
      END_STATE();
    case 1007:
      if (lookahead == '-') ADVANCE(1120);
      END_STATE();
    case 1008:
      if (lookahead == '-') ADVANCE(1121);
      END_STATE();
    case 1009:
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 1010:
      if (lookahead == '-') ADVANCE(1123);
      END_STATE();
    case 1011:
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 1012:
      if (lookahead == '-') ADVANCE(1125);
      END_STATE();
    case 1013:
      if (lookahead == '-') ADVANCE(1126);
      END_STATE();
    case 1014:
      if (lookahead == '-') ADVANCE(1127);
      END_STATE();
    case 1015:
      if (lookahead == '-') ADVANCE(1128);
      END_STATE();
    case 1016:
      if (lookahead == '-') ADVANCE(1129);
      END_STATE();
    case 1017:
      if (lookahead == '-') ADVANCE(1130);
      END_STATE();
    case 1018:
      if (lookahead == '-') ADVANCE(1131);
      END_STATE();
    case 1019:
      if (lookahead == '-') ADVANCE(1132);
      END_STATE();
    case 1020:
      if (lookahead == '-') ADVANCE(1133);
      END_STATE();
    case 1021:
      if (lookahead == '-') ADVANCE(1134);
      END_STATE();
    case 1022:
      if (lookahead == '-') ADVANCE(1135);
      END_STATE();
    case 1023:
      if (lookahead == '-') ADVANCE(1136);
      END_STATE();
    case 1024:
      if (lookahead == '-') ADVANCE(1137);
      END_STATE();
    case 1025:
      if (lookahead == '-') ADVANCE(1138);
      END_STATE();
    case 1026:
      if (lookahead == '-') ADVANCE(1139);
      END_STATE();
    case 1027:
      if (lookahead == '-') ADVANCE(1140);
      END_STATE();
    case 1028:
      if (lookahead == '-') ADVANCE(1141);
      END_STATE();
    case 1029:
      if (lookahead == '-') ADVANCE(1142);
      END_STATE();
    case 1030:
      if (lookahead == '-') ADVANCE(1143);
      END_STATE();
    case 1031:
      if (lookahead == '-') ADVANCE(1144);
      END_STATE();
    case 1032:
      if (lookahead == '-') ADVANCE(1145);
      END_STATE();
    case 1033:
      if (lookahead == '-') ADVANCE(1146);
      END_STATE();
    case 1034:
      if (lookahead == '-') ADVANCE(1147);
      END_STATE();
    case 1035:
      if (lookahead == '-') ADVANCE(1148);
      END_STATE();
    case 1036:
      if (lookahead == '-') ADVANCE(1149);
      END_STATE();
    case 1037:
      if (lookahead == '-') ADVANCE(1150);
      END_STATE();
    case 1038:
      if (lookahead == '-') ADVANCE(1151);
      END_STATE();
    case 1039:
      if (lookahead == '-') ADVANCE(1152);
      END_STATE();
    case 1040:
      if (lookahead == '-') ADVANCE(1153);
      END_STATE();
    case 1041:
      if (lookahead == '-') ADVANCE(1154);
      END_STATE();
    case 1042:
      if (lookahead == '-') ADVANCE(1155);
      END_STATE();
    case 1043:
      if (lookahead == '-') ADVANCE(1156);
      END_STATE();
    case 1044:
      if (lookahead == '-') ADVANCE(1157);
      END_STATE();
    case 1045:
      if (lookahead == '-') ADVANCE(1158);
      END_STATE();
    case 1046:
      if (lookahead == '-') ADVANCE(1159);
      END_STATE();
    case 1047:
      if (lookahead == '-') ADVANCE(1160);
      END_STATE();
    case 1048:
      if (lookahead == '-') ADVANCE(1161);
      END_STATE();
    case 1049:
      if (lookahead == '-') ADVANCE(1162);
      END_STATE();
    case 1050:
      if (lookahead == '-') ADVANCE(1163);
      END_STATE();
    case 1051:
      if (lookahead == '-') ADVANCE(1164);
      END_STATE();
    case 1052:
      if (lookahead == '-') ADVANCE(1165);
      END_STATE();
    case 1053:
      if (lookahead == '-') ADVANCE(1166);
      END_STATE();
    case 1054:
      if (lookahead == '-') ADVANCE(1167);
      END_STATE();
    case 1055:
      if (lookahead == '-') ADVANCE(1168);
      END_STATE();
    case 1056:
      if (lookahead == '-') ADVANCE(1169);
      END_STATE();
    case 1057:
      if (lookahead == '-') SKIP(1170);
      END_STATE();
    case 1058:
      if (lookahead == '-') SKIP(1171);
      END_STATE();
    case 1059:
      if (lookahead == '-') SKIP(1172);
      END_STATE();
    case 1060:
      if (lookahead == '-') SKIP(1173);
      END_STATE();
    case 1061:
      if (lookahead == '-') SKIP(1174);
      END_STATE();
    case 1062:
      if (lookahead == '-') SKIP(1175);
      END_STATE();
    case 1063:
      if (lookahead == '-') SKIP(1176);
      END_STATE();
    case 1064:
      if (lookahead == '-') SKIP(1177);
      END_STATE();
    case 1065:
      if (lookahead == '-') SKIP(1178);
      END_STATE();
    case 1066:
      if (lookahead == '-') SKIP(1179);
      END_STATE();
    case 1067:
      if (lookahead == '-') SKIP(1180);
      END_STATE();
    case 1068:
      if (lookahead == '-') SKIP(1181);
      END_STATE();
    case 1069:
      if (lookahead == '-') SKIP(1182);
      END_STATE();
    case 1070:
      if (lookahead == '-') SKIP(1183);
      END_STATE();
    case 1071:
      if (lookahead == '-') SKIP(1184);
      END_STATE();
    case 1072:
      if (lookahead == '-') SKIP(1185);
      END_STATE();
    case 1073:
      if (lookahead == '-') SKIP(1186);
      END_STATE();
    case 1074:
      if (lookahead == '-') SKIP(1187);
      END_STATE();
    case 1075:
      if (lookahead == '-') SKIP(1188);
      END_STATE();
    case 1076:
      if (lookahead == '.') ADVANCE(2250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1076);
      END_STATE();
    case 1077:
      if (lookahead == '.') ADVANCE(2852);
      END_STATE();
    case 1078:
      if (lookahead == '.') ADVANCE(1192);
      END_STATE();
    case 1079:
      if (lookahead == '.') SKIP(1200);
      END_STATE();
    case 1080:
      if (lookahead == '.') ADVANCE(1240);
      END_STATE();
    case 1081:
      if (lookahead == '.') ADVANCE(1241);
      END_STATE();
    case 1082:
      if (lookahead == '.') ADVANCE(1242);
      END_STATE();
    case 1083:
      if (lookahead == '.') ADVANCE(1243);
      END_STATE();
    case 1084:
      if (lookahead == '.') ADVANCE(1244);
      END_STATE();
    case 1085:
      if (lookahead == '.') ADVANCE(1245);
      END_STATE();
    case 1086:
      if (lookahead == '.') ADVANCE(1246);
      END_STATE();
    case 1087:
      if (lookahead == '.') ADVANCE(1247);
      END_STATE();
    case 1088:
      if (lookahead == '.') ADVANCE(1248);
      END_STATE();
    case 1089:
      if (lookahead == '.') ADVANCE(1249);
      END_STATE();
    case 1090:
      if (lookahead == '.') ADVANCE(1250);
      END_STATE();
    case 1091:
      if (lookahead == '.') ADVANCE(1251);
      END_STATE();
    case 1092:
      if (lookahead == '.') ADVANCE(1252);
      END_STATE();
    case 1093:
      if (lookahead == '.') ADVANCE(1253);
      END_STATE();
    case 1094:
      if (lookahead == '.') ADVANCE(1254);
      END_STATE();
    case 1095:
      if (lookahead == '.') ADVANCE(1255);
      END_STATE();
    case 1096:
      if (lookahead == '.') ADVANCE(1256);
      END_STATE();
    case 1097:
      if (lookahead == '.') ADVANCE(1257);
      END_STATE();
    case 1098:
      if (lookahead == '.') ADVANCE(1258);
      END_STATE();
    case 1099:
      if (lookahead == '.') ADVANCE(1259);
      END_STATE();
    case 1100:
      if (lookahead == '.') ADVANCE(1260);
      END_STATE();
    case 1101:
      if (lookahead == '.') ADVANCE(1261);
      END_STATE();
    case 1102:
      if (lookahead == '.') ADVANCE(1262);
      END_STATE();
    case 1103:
      if (lookahead == '.') ADVANCE(1263);
      END_STATE();
    case 1104:
      if (lookahead == '.') ADVANCE(1264);
      END_STATE();
    case 1105:
      if (lookahead == '.') ADVANCE(1265);
      END_STATE();
    case 1106:
      if (lookahead == '.') ADVANCE(1266);
      END_STATE();
    case 1107:
      if (lookahead == '.') ADVANCE(1267);
      END_STATE();
    case 1108:
      if (lookahead == '.') ADVANCE(1268);
      END_STATE();
    case 1109:
      if (lookahead == '.') ADVANCE(1269);
      END_STATE();
    case 1110:
      if (lookahead == '.') ADVANCE(1270);
      END_STATE();
    case 1111:
      if (lookahead == '.') ADVANCE(1271);
      END_STATE();
    case 1112:
      if (lookahead == '.') ADVANCE(1272);
      END_STATE();
    case 1113:
      if (lookahead == '.') ADVANCE(1273);
      END_STATE();
    case 1114:
      if (lookahead == '.') ADVANCE(1274);
      END_STATE();
    case 1115:
      if (lookahead == '.') ADVANCE(1275);
      END_STATE();
    case 1116:
      if (lookahead == '.') ADVANCE(1276);
      END_STATE();
    case 1117:
      if (lookahead == '.') ADVANCE(1277);
      END_STATE();
    case 1118:
      if (lookahead == '.') ADVANCE(1278);
      END_STATE();
    case 1119:
      if (lookahead == '.') ADVANCE(1279);
      END_STATE();
    case 1120:
      if (lookahead == '.') ADVANCE(1280);
      END_STATE();
    case 1121:
      if (lookahead == '.') ADVANCE(1281);
      END_STATE();
    case 1122:
      if (lookahead == '.') ADVANCE(1282);
      END_STATE();
    case 1123:
      if (lookahead == '.') ADVANCE(1283);
      END_STATE();
    case 1124:
      if (lookahead == '.') ADVANCE(1284);
      END_STATE();
    case 1125:
      if (lookahead == '.') ADVANCE(1285);
      END_STATE();
    case 1126:
      if (lookahead == '.') ADVANCE(1286);
      END_STATE();
    case 1127:
      if (lookahead == '.') ADVANCE(1287);
      END_STATE();
    case 1128:
      if (lookahead == '.') ADVANCE(1288);
      END_STATE();
    case 1129:
      if (lookahead == '.') ADVANCE(1289);
      END_STATE();
    case 1130:
      if (lookahead == '.') ADVANCE(1290);
      END_STATE();
    case 1131:
      if (lookahead == '.') ADVANCE(1291);
      END_STATE();
    case 1132:
      if (lookahead == '.') ADVANCE(1292);
      END_STATE();
    case 1133:
      if (lookahead == '.') ADVANCE(1293);
      END_STATE();
    case 1134:
      if (lookahead == '.') ADVANCE(1294);
      END_STATE();
    case 1135:
      if (lookahead == '.') ADVANCE(1295);
      END_STATE();
    case 1136:
      if (lookahead == '.') ADVANCE(1296);
      END_STATE();
    case 1137:
      if (lookahead == '.') ADVANCE(1297);
      END_STATE();
    case 1138:
      if (lookahead == '.') ADVANCE(1298);
      END_STATE();
    case 1139:
      if (lookahead == '.') ADVANCE(1299);
      END_STATE();
    case 1140:
      if (lookahead == '.') ADVANCE(1300);
      END_STATE();
    case 1141:
      if (lookahead == '.') ADVANCE(1301);
      END_STATE();
    case 1142:
      if (lookahead == '.') ADVANCE(1302);
      END_STATE();
    case 1143:
      if (lookahead == '.') ADVANCE(1303);
      END_STATE();
    case 1144:
      if (lookahead == '.') ADVANCE(1304);
      END_STATE();
    case 1145:
      if (lookahead == '.') ADVANCE(1305);
      END_STATE();
    case 1146:
      if (lookahead == '.') ADVANCE(1306);
      END_STATE();
    case 1147:
      if (lookahead == '.') ADVANCE(1307);
      END_STATE();
    case 1148:
      if (lookahead == '.') ADVANCE(1308);
      END_STATE();
    case 1149:
      if (lookahead == '.') ADVANCE(1309);
      END_STATE();
    case 1150:
      if (lookahead == '.') ADVANCE(1310);
      END_STATE();
    case 1151:
      if (lookahead == '.') ADVANCE(1311);
      END_STATE();
    case 1152:
      if (lookahead == '.') ADVANCE(1312);
      END_STATE();
    case 1153:
      if (lookahead == '.') ADVANCE(1313);
      END_STATE();
    case 1154:
      if (lookahead == '.') ADVANCE(1314);
      END_STATE();
    case 1155:
      if (lookahead == '.') ADVANCE(1315);
      END_STATE();
    case 1156:
      if (lookahead == '.') ADVANCE(1316);
      END_STATE();
    case 1157:
      if (lookahead == '.') ADVANCE(1317);
      END_STATE();
    case 1158:
      if (lookahead == '.') ADVANCE(1318);
      END_STATE();
    case 1159:
      if (lookahead == '.') ADVANCE(1319);
      END_STATE();
    case 1160:
      if (lookahead == '.') ADVANCE(1320);
      END_STATE();
    case 1161:
      if (lookahead == '.') ADVANCE(1321);
      END_STATE();
    case 1162:
      if (lookahead == '.') ADVANCE(1322);
      END_STATE();
    case 1163:
      if (lookahead == '.') ADVANCE(1323);
      END_STATE();
    case 1164:
      if (lookahead == '.') ADVANCE(1324);
      END_STATE();
    case 1165:
      if (lookahead == '.') ADVANCE(1325);
      END_STATE();
    case 1166:
      if (lookahead == '.') ADVANCE(1326);
      END_STATE();
    case 1167:
      if (lookahead == '.') ADVANCE(1327);
      END_STATE();
    case 1168:
      if (lookahead == '.') ADVANCE(1328);
      END_STATE();
    case 1169:
      if (lookahead == '.') ADVANCE(1329);
      END_STATE();
    case 1170:
      if (lookahead == '.') SKIP(1330);
      END_STATE();
    case 1171:
      if (lookahead == '.') SKIP(1331);
      END_STATE();
    case 1172:
      if (lookahead == '.') SKIP(1332);
      END_STATE();
    case 1173:
      if (lookahead == '.') SKIP(1333);
      END_STATE();
    case 1174:
      if (lookahead == '.') SKIP(1334);
      END_STATE();
    case 1175:
      if (lookahead == '.') SKIP(1335);
      END_STATE();
    case 1176:
      if (lookahead == '.') SKIP(1336);
      END_STATE();
    case 1177:
      if (lookahead == '.') SKIP(1337);
      END_STATE();
    case 1178:
      if (lookahead == '.') SKIP(1338);
      END_STATE();
    case 1179:
      if (lookahead == '.') SKIP(1339);
      END_STATE();
    case 1180:
      if (lookahead == '.') SKIP(1340);
      END_STATE();
    case 1181:
      if (lookahead == '.') SKIP(1341);
      END_STATE();
    case 1182:
      if (lookahead == '.') SKIP(1342);
      END_STATE();
    case 1183:
      if (lookahead == '.') SKIP(1343);
      END_STATE();
    case 1184:
      if (lookahead == '.') SKIP(1344);
      END_STATE();
    case 1185:
      if (lookahead == '.') SKIP(1345);
      END_STATE();
    case 1186:
      if (lookahead == '.') SKIP(1346);
      END_STATE();
    case 1187:
      if (lookahead == '.') SKIP(1347);
      END_STATE();
    case 1188:
      if (lookahead == '.') SKIP(1348);
      END_STATE();
    case 1189:
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      END_STATE();
    case 1190:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 1191:
      if (lookahead == '/') ADVANCE(2678);
      END_STATE();
    case 1192:
      if (lookahead == '/') ADVANCE(1349);
      END_STATE();
    case 1193:
      if (lookahead == '/') ADVANCE(598);
      END_STATE();
    case 1194:
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 1195:
      if (lookahead == '/') ADVANCE(597);
      END_STATE();
    case 1196:
      if (lookahead == '/') ADVANCE(270);
      END_STATE();
    case 1197:
      if (lookahead == '/') ADVANCE(286);
      END_STATE();
    case 1198:
      if (lookahead == '/') ADVANCE(300);
      END_STATE();
    case 1199:
      if (lookahead == '/') SKIP(1);
      END_STATE();
    case 1200:
      if (lookahead == '/') SKIP(1350);
      END_STATE();
    case 1201:
      if (lookahead == '/') SKIP(3);
      END_STATE();
    case 1202:
      if (lookahead == '/') SKIP(36);
      END_STATE();
    case 1203:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 1204:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 1205:
      if (lookahead == '/') ADVANCE(333);
      END_STATE();
    case 1206:
      if (lookahead == '/') ADVANCE(334);
      END_STATE();
    case 1207:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 1208:
      if (lookahead == '/') ADVANCE(335);
      END_STATE();
    case 1209:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 1210:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 1211:
      if (lookahead == '/') ADVANCE(336);
      END_STATE();
    case 1212:
      if (lookahead == '/') ADVANCE(337);
      END_STATE();
    case 1213:
      if (lookahead == '/') ADVANCE(338);
      END_STATE();
    case 1214:
      if (lookahead == '/') SKIP(118);
      END_STATE();
    case 1215:
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 1216:
      if (lookahead == '/') ADVANCE(340);
      END_STATE();
    case 1217:
      if (lookahead == '/') ADVANCE(341);
      END_STATE();
    case 1218:
      if (lookahead == '/') ADVANCE(342);
      END_STATE();
    case 1219:
      if (lookahead == '/') ADVANCE(343);
      END_STATE();
    case 1220:
      if (lookahead == '/') ADVANCE(344);
      END_STATE();
    case 1221:
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    case 1222:
      if (lookahead == '/') ADVANCE(346);
      END_STATE();
    case 1223:
      if (lookahead == '/') ADVANCE(347);
      END_STATE();
    case 1224:
      if (lookahead == '/') SKIP(17);
      END_STATE();
    case 1225:
      if (lookahead == '/') ADVANCE(348);
      END_STATE();
    case 1226:
      if (lookahead == '/') ADVANCE(349);
      END_STATE();
    case 1227:
      if (lookahead == '/') SKIP(354);
      END_STATE();
    case 1228:
      if (lookahead == '/') SKIP(355);
      END_STATE();
    case 1229:
      if (lookahead == '/') ADVANCE(350);
      END_STATE();
    case 1230:
      if (lookahead == '/') ADVANCE(351);
      END_STATE();
    case 1231:
      if (lookahead == '/') SKIP(356);
      END_STATE();
    case 1232:
      if (lookahead == '/') ADVANCE(352);
      END_STATE();
    case 1233:
      if (lookahead == '/') ADVANCE(353);
      END_STATE();
    case 1234:
      if (lookahead == '/') SKIP(357);
      END_STATE();
    case 1235:
      if (lookahead == '/') SKIP(358);
      END_STATE();
    case 1236:
      if (lookahead == '/') ADVANCE(316);
      END_STATE();
    case 1237:
      if (lookahead == '/') ADVANCE(330);
      END_STATE();
    case 1238:
      if (lookahead == '/') ADVANCE(331);
      END_STATE();
    case 1239:
      if (lookahead == '/') ADVANCE(332);
      END_STATE();
    case 1240:
      if (lookahead == '/') ADVANCE(1351);
      END_STATE();
    case 1241:
      if (lookahead == '/') ADVANCE(1352);
      END_STATE();
    case 1242:
      if (lookahead == '/') ADVANCE(1353);
      END_STATE();
    case 1243:
      if (lookahead == '/') ADVANCE(1354);
      END_STATE();
    case 1244:
      if (lookahead == '/') ADVANCE(1355);
      END_STATE();
    case 1245:
      if (lookahead == '/') ADVANCE(1356);
      END_STATE();
    case 1246:
      if (lookahead == '/') ADVANCE(1357);
      END_STATE();
    case 1247:
      if (lookahead == '/') ADVANCE(1358);
      END_STATE();
    case 1248:
      if (lookahead == '/') ADVANCE(1359);
      END_STATE();
    case 1249:
      if (lookahead == '/') ADVANCE(1360);
      END_STATE();
    case 1250:
      if (lookahead == '/') ADVANCE(1361);
      END_STATE();
    case 1251:
      if (lookahead == '/') ADVANCE(1362);
      END_STATE();
    case 1252:
      if (lookahead == '/') ADVANCE(1363);
      END_STATE();
    case 1253:
      if (lookahead == '/') ADVANCE(1364);
      END_STATE();
    case 1254:
      if (lookahead == '/') ADVANCE(1365);
      END_STATE();
    case 1255:
      if (lookahead == '/') ADVANCE(1366);
      END_STATE();
    case 1256:
      if (lookahead == '/') ADVANCE(1367);
      END_STATE();
    case 1257:
      if (lookahead == '/') ADVANCE(1368);
      END_STATE();
    case 1258:
      if (lookahead == '/') ADVANCE(1369);
      END_STATE();
    case 1259:
      if (lookahead == '/') ADVANCE(1370);
      END_STATE();
    case 1260:
      if (lookahead == '/') ADVANCE(1371);
      END_STATE();
    case 1261:
      if (lookahead == '/') ADVANCE(1372);
      END_STATE();
    case 1262:
      if (lookahead == '/') ADVANCE(1373);
      END_STATE();
    case 1263:
      if (lookahead == '/') ADVANCE(1374);
      END_STATE();
    case 1264:
      if (lookahead == '/') ADVANCE(1375);
      END_STATE();
    case 1265:
      if (lookahead == '/') ADVANCE(1376);
      END_STATE();
    case 1266:
      if (lookahead == '/') ADVANCE(1377);
      END_STATE();
    case 1267:
      if (lookahead == '/') ADVANCE(1378);
      END_STATE();
    case 1268:
      if (lookahead == '/') ADVANCE(1379);
      END_STATE();
    case 1269:
      if (lookahead == '/') ADVANCE(1380);
      END_STATE();
    case 1270:
      if (lookahead == '/') ADVANCE(1381);
      END_STATE();
    case 1271:
      if (lookahead == '/') ADVANCE(1382);
      END_STATE();
    case 1272:
      if (lookahead == '/') ADVANCE(1383);
      END_STATE();
    case 1273:
      if (lookahead == '/') ADVANCE(1384);
      END_STATE();
    case 1274:
      if (lookahead == '/') ADVANCE(1385);
      END_STATE();
    case 1275:
      if (lookahead == '/') ADVANCE(1386);
      END_STATE();
    case 1276:
      if (lookahead == '/') ADVANCE(1387);
      END_STATE();
    case 1277:
      if (lookahead == '/') ADVANCE(1388);
      END_STATE();
    case 1278:
      if (lookahead == '/') ADVANCE(1389);
      END_STATE();
    case 1279:
      if (lookahead == '/') ADVANCE(1390);
      END_STATE();
    case 1280:
      if (lookahead == '/') ADVANCE(1391);
      END_STATE();
    case 1281:
      if (lookahead == '/') ADVANCE(1392);
      END_STATE();
    case 1282:
      if (lookahead == '/') ADVANCE(1393);
      END_STATE();
    case 1283:
      if (lookahead == '/') ADVANCE(1394);
      END_STATE();
    case 1284:
      if (lookahead == '/') ADVANCE(1395);
      END_STATE();
    case 1285:
      if (lookahead == '/') ADVANCE(1396);
      END_STATE();
    case 1286:
      if (lookahead == '/') ADVANCE(1397);
      END_STATE();
    case 1287:
      if (lookahead == '/') ADVANCE(1398);
      END_STATE();
    case 1288:
      if (lookahead == '/') ADVANCE(1399);
      END_STATE();
    case 1289:
      if (lookahead == '/') ADVANCE(1400);
      END_STATE();
    case 1290:
      if (lookahead == '/') ADVANCE(1401);
      END_STATE();
    case 1291:
      if (lookahead == '/') ADVANCE(1402);
      END_STATE();
    case 1292:
      if (lookahead == '/') ADVANCE(1403);
      END_STATE();
    case 1293:
      if (lookahead == '/') ADVANCE(1404);
      END_STATE();
    case 1294:
      if (lookahead == '/') ADVANCE(1405);
      END_STATE();
    case 1295:
      if (lookahead == '/') ADVANCE(1406);
      END_STATE();
    case 1296:
      if (lookahead == '/') ADVANCE(1407);
      END_STATE();
    case 1297:
      if (lookahead == '/') ADVANCE(1408);
      END_STATE();
    case 1298:
      if (lookahead == '/') ADVANCE(1409);
      END_STATE();
    case 1299:
      if (lookahead == '/') ADVANCE(1410);
      END_STATE();
    case 1300:
      if (lookahead == '/') ADVANCE(1411);
      END_STATE();
    case 1301:
      if (lookahead == '/') ADVANCE(1412);
      END_STATE();
    case 1302:
      if (lookahead == '/') ADVANCE(1413);
      END_STATE();
    case 1303:
      if (lookahead == '/') ADVANCE(1414);
      END_STATE();
    case 1304:
      if (lookahead == '/') ADVANCE(1415);
      END_STATE();
    case 1305:
      if (lookahead == '/') ADVANCE(1416);
      END_STATE();
    case 1306:
      if (lookahead == '/') ADVANCE(1417);
      END_STATE();
    case 1307:
      if (lookahead == '/') ADVANCE(1418);
      END_STATE();
    case 1308:
      if (lookahead == '/') ADVANCE(1419);
      END_STATE();
    case 1309:
      if (lookahead == '/') ADVANCE(1420);
      END_STATE();
    case 1310:
      if (lookahead == '/') ADVANCE(1421);
      END_STATE();
    case 1311:
      if (lookahead == '/') ADVANCE(1422);
      END_STATE();
    case 1312:
      if (lookahead == '/') ADVANCE(1423);
      END_STATE();
    case 1313:
      if (lookahead == '/') ADVANCE(1424);
      END_STATE();
    case 1314:
      if (lookahead == '/') ADVANCE(1425);
      END_STATE();
    case 1315:
      if (lookahead == '/') ADVANCE(1426);
      END_STATE();
    case 1316:
      if (lookahead == '/') ADVANCE(1427);
      END_STATE();
    case 1317:
      if (lookahead == '/') ADVANCE(1428);
      END_STATE();
    case 1318:
      if (lookahead == '/') ADVANCE(1429);
      END_STATE();
    case 1319:
      if (lookahead == '/') ADVANCE(1430);
      END_STATE();
    case 1320:
      if (lookahead == '/') ADVANCE(1431);
      END_STATE();
    case 1321:
      if (lookahead == '/') ADVANCE(1432);
      END_STATE();
    case 1322:
      if (lookahead == '/') ADVANCE(1433);
      END_STATE();
    case 1323:
      if (lookahead == '/') ADVANCE(1434);
      END_STATE();
    case 1324:
      if (lookahead == '/') ADVANCE(1435);
      END_STATE();
    case 1325:
      if (lookahead == '/') ADVANCE(1436);
      END_STATE();
    case 1326:
      if (lookahead == '/') ADVANCE(1437);
      END_STATE();
    case 1327:
      if (lookahead == '/') ADVANCE(1438);
      END_STATE();
    case 1328:
      if (lookahead == '/') ADVANCE(1439);
      END_STATE();
    case 1329:
      if (lookahead == '/') ADVANCE(1440);
      END_STATE();
    case 1330:
      if (lookahead == '/') SKIP(1441);
      END_STATE();
    case 1331:
      if (lookahead == '/') SKIP(1442);
      END_STATE();
    case 1332:
      if (lookahead == '/') SKIP(1443);
      END_STATE();
    case 1333:
      if (lookahead == '/') SKIP(1444);
      END_STATE();
    case 1334:
      if (lookahead == '/') SKIP(1445);
      END_STATE();
    case 1335:
      if (lookahead == '/') SKIP(1446);
      END_STATE();
    case 1336:
      if (lookahead == '/') SKIP(1447);
      END_STATE();
    case 1337:
      if (lookahead == '/') SKIP(1448);
      END_STATE();
    case 1338:
      if (lookahead == '/') SKIP(1449);
      END_STATE();
    case 1339:
      if (lookahead == '/') SKIP(1450);
      END_STATE();
    case 1340:
      if (lookahead == '/') SKIP(1451);
      END_STATE();
    case 1341:
      if (lookahead == '/') SKIP(1452);
      END_STATE();
    case 1342:
      if (lookahead == '/') SKIP(1453);
      END_STATE();
    case 1343:
      if (lookahead == '/') SKIP(1454);
      END_STATE();
    case 1344:
      if (lookahead == '/') SKIP(1455);
      END_STATE();
    case 1345:
      if (lookahead == '/') SKIP(1456);
      END_STATE();
    case 1346:
      if (lookahead == '/') SKIP(1457);
      END_STATE();
    case 1347:
      if (lookahead == '/') SKIP(1458);
      END_STATE();
    case 1348:
      if (lookahead == '/') SKIP(1459);
      END_STATE();
    case 1349:
      if (lookahead == ':') ADVANCE(1460);
      END_STATE();
    case 1350:
      if (lookahead == ':') SKIP(1461);
      END_STATE();
    case 1351:
      if (lookahead == ':') ADVANCE(1464);
      END_STATE();
    case 1352:
      if (lookahead == ':') ADVANCE(1465);
      END_STATE();
    case 1353:
      if (lookahead == ':') ADVANCE(1466);
      END_STATE();
    case 1354:
      if (lookahead == ':') ADVANCE(1467);
      END_STATE();
    case 1355:
      if (lookahead == ':') ADVANCE(1468);
      END_STATE();
    case 1356:
      if (lookahead == ':') ADVANCE(1469);
      END_STATE();
    case 1357:
      if (lookahead == ':') ADVANCE(1470);
      END_STATE();
    case 1358:
      if (lookahead == ':') ADVANCE(1471);
      END_STATE();
    case 1359:
      if (lookahead == ':') ADVANCE(1472);
      END_STATE();
    case 1360:
      if (lookahead == ':') ADVANCE(1473);
      END_STATE();
    case 1361:
      if (lookahead == ':') ADVANCE(1474);
      END_STATE();
    case 1362:
      if (lookahead == ':') ADVANCE(1475);
      END_STATE();
    case 1363:
      if (lookahead == ':') ADVANCE(1476);
      END_STATE();
    case 1364:
      if (lookahead == ':') ADVANCE(1477);
      END_STATE();
    case 1365:
      if (lookahead == ':') ADVANCE(1478);
      END_STATE();
    case 1366:
      if (lookahead == ':') ADVANCE(1479);
      END_STATE();
    case 1367:
      if (lookahead == ':') ADVANCE(1480);
      END_STATE();
    case 1368:
      if (lookahead == ':') ADVANCE(1481);
      END_STATE();
    case 1369:
      if (lookahead == ':') ADVANCE(1482);
      END_STATE();
    case 1370:
      if (lookahead == ':') ADVANCE(1483);
      END_STATE();
    case 1371:
      if (lookahead == ':') ADVANCE(1484);
      END_STATE();
    case 1372:
      if (lookahead == ':') ADVANCE(1485);
      END_STATE();
    case 1373:
      if (lookahead == ':') ADVANCE(1486);
      END_STATE();
    case 1374:
      if (lookahead == ':') ADVANCE(1487);
      END_STATE();
    case 1375:
      if (lookahead == ':') ADVANCE(1488);
      END_STATE();
    case 1376:
      if (lookahead == ':') ADVANCE(1489);
      END_STATE();
    case 1377:
      if (lookahead == ':') ADVANCE(1490);
      END_STATE();
    case 1378:
      if (lookahead == ':') ADVANCE(1491);
      END_STATE();
    case 1379:
      if (lookahead == ':') ADVANCE(1492);
      END_STATE();
    case 1380:
      if (lookahead == ':') ADVANCE(1493);
      END_STATE();
    case 1381:
      if (lookahead == ':') ADVANCE(1494);
      END_STATE();
    case 1382:
      if (lookahead == ':') ADVANCE(1495);
      END_STATE();
    case 1383:
      if (lookahead == ':') ADVANCE(1496);
      END_STATE();
    case 1384:
      if (lookahead == ':') ADVANCE(1497);
      END_STATE();
    case 1385:
      if (lookahead == ':') ADVANCE(1498);
      END_STATE();
    case 1386:
      if (lookahead == ':') ADVANCE(1499);
      END_STATE();
    case 1387:
      if (lookahead == ':') ADVANCE(1500);
      END_STATE();
    case 1388:
      if (lookahead == ':') ADVANCE(1501);
      END_STATE();
    case 1389:
      if (lookahead == ':') ADVANCE(1502);
      END_STATE();
    case 1390:
      if (lookahead == ':') ADVANCE(1503);
      END_STATE();
    case 1391:
      if (lookahead == ':') ADVANCE(1504);
      END_STATE();
    case 1392:
      if (lookahead == ':') ADVANCE(1505);
      END_STATE();
    case 1393:
      if (lookahead == ':') ADVANCE(1506);
      END_STATE();
    case 1394:
      if (lookahead == ':') ADVANCE(1507);
      END_STATE();
    case 1395:
      if (lookahead == ':') ADVANCE(1508);
      END_STATE();
    case 1396:
      if (lookahead == ':') ADVANCE(1509);
      END_STATE();
    case 1397:
      if (lookahead == ':') ADVANCE(1510);
      END_STATE();
    case 1398:
      if (lookahead == ':') ADVANCE(1511);
      END_STATE();
    case 1399:
      if (lookahead == ':') ADVANCE(1512);
      END_STATE();
    case 1400:
      if (lookahead == ':') ADVANCE(1513);
      END_STATE();
    case 1401:
      if (lookahead == ':') ADVANCE(1514);
      END_STATE();
    case 1402:
      if (lookahead == ':') ADVANCE(1515);
      END_STATE();
    case 1403:
      if (lookahead == ':') ADVANCE(1516);
      END_STATE();
    case 1404:
      if (lookahead == ':') ADVANCE(1517);
      END_STATE();
    case 1405:
      if (lookahead == ':') ADVANCE(1518);
      END_STATE();
    case 1406:
      if (lookahead == ':') ADVANCE(1519);
      END_STATE();
    case 1407:
      if (lookahead == ':') ADVANCE(1520);
      END_STATE();
    case 1408:
      if (lookahead == ':') ADVANCE(1521);
      END_STATE();
    case 1409:
      if (lookahead == ':') ADVANCE(1522);
      END_STATE();
    case 1410:
      if (lookahead == ':') ADVANCE(1523);
      END_STATE();
    case 1411:
      if (lookahead == ':') ADVANCE(1524);
      END_STATE();
    case 1412:
      if (lookahead == ':') ADVANCE(1525);
      END_STATE();
    case 1413:
      if (lookahead == ':') ADVANCE(1526);
      END_STATE();
    case 1414:
      if (lookahead == ':') ADVANCE(1527);
      END_STATE();
    case 1415:
      if (lookahead == ':') ADVANCE(1528);
      END_STATE();
    case 1416:
      if (lookahead == ':') ADVANCE(1529);
      END_STATE();
    case 1417:
      if (lookahead == ':') ADVANCE(1530);
      END_STATE();
    case 1418:
      if (lookahead == ':') ADVANCE(1531);
      END_STATE();
    case 1419:
      if (lookahead == ':') ADVANCE(1532);
      END_STATE();
    case 1420:
      if (lookahead == ':') ADVANCE(1533);
      END_STATE();
    case 1421:
      if (lookahead == ':') ADVANCE(1534);
      END_STATE();
    case 1422:
      if (lookahead == ':') ADVANCE(1535);
      END_STATE();
    case 1423:
      if (lookahead == ':') ADVANCE(1536);
      END_STATE();
    case 1424:
      if (lookahead == ':') ADVANCE(1537);
      END_STATE();
    case 1425:
      if (lookahead == ':') ADVANCE(1538);
      END_STATE();
    case 1426:
      if (lookahead == ':') ADVANCE(1539);
      END_STATE();
    case 1427:
      if (lookahead == ':') ADVANCE(1540);
      END_STATE();
    case 1428:
      if (lookahead == ':') ADVANCE(1541);
      END_STATE();
    case 1429:
      if (lookahead == ':') ADVANCE(1542);
      END_STATE();
    case 1430:
      if (lookahead == ':') ADVANCE(1543);
      END_STATE();
    case 1431:
      if (lookahead == ':') ADVANCE(1544);
      END_STATE();
    case 1432:
      if (lookahead == ':') ADVANCE(1545);
      END_STATE();
    case 1433:
      if (lookahead == ':') ADVANCE(1546);
      END_STATE();
    case 1434:
      if (lookahead == ':') ADVANCE(1547);
      END_STATE();
    case 1435:
      if (lookahead == ':') ADVANCE(1548);
      END_STATE();
    case 1436:
      if (lookahead == ':') ADVANCE(1549);
      END_STATE();
    case 1437:
      if (lookahead == ':') ADVANCE(1550);
      END_STATE();
    case 1438:
      if (lookahead == ':') ADVANCE(1551);
      END_STATE();
    case 1439:
      if (lookahead == ':') ADVANCE(1552);
      END_STATE();
    case 1440:
      if (lookahead == ':') ADVANCE(1553);
      END_STATE();
    case 1441:
      if (lookahead == ':') SKIP(1554);
      END_STATE();
    case 1442:
      if (lookahead == ':') SKIP(1555);
      END_STATE();
    case 1443:
      if (lookahead == ':') SKIP(1556);
      END_STATE();
    case 1444:
      if (lookahead == ':') SKIP(1557);
      END_STATE();
    case 1445:
      if (lookahead == ':') SKIP(1558);
      END_STATE();
    case 1446:
      if (lookahead == ':') SKIP(1559);
      END_STATE();
    case 1447:
      if (lookahead == ':') SKIP(1560);
      END_STATE();
    case 1448:
      if (lookahead == ':') SKIP(1561);
      END_STATE();
    case 1449:
      if (lookahead == ':') SKIP(1562);
      END_STATE();
    case 1450:
      if (lookahead == ':') SKIP(1563);
      END_STATE();
    case 1451:
      if (lookahead == ':') SKIP(1564);
      END_STATE();
    case 1452:
      if (lookahead == ':') SKIP(1565);
      END_STATE();
    case 1453:
      if (lookahead == ':') SKIP(1566);
      END_STATE();
    case 1454:
      if (lookahead == ':') SKIP(1567);
      END_STATE();
    case 1455:
      if (lookahead == ':') SKIP(1568);
      END_STATE();
    case 1456:
      if (lookahead == ':') SKIP(1569);
      END_STATE();
    case 1457:
      if (lookahead == ':') SKIP(1570);
      END_STATE();
    case 1458:
      if (lookahead == ':') SKIP(1571);
      END_STATE();
    case 1459:
      if (lookahead == ':') SKIP(1572);
      END_STATE();
    case 1460:
      if (lookahead == '<') ADVANCE(1575);
      END_STATE();
    case 1461:
      if (lookahead == '<') SKIP(1573);
      END_STATE();
    case 1462:
      if (lookahead == '<') ADVANCE(2852);
      END_STATE();
    case 1463:
      if (lookahead == '<') ADVANCE(2852);
      if (lookahead == '=') ADVANCE(1462);
      if (lookahead == '>') ADVANCE(2875);
      END_STATE();
    case 1464:
      if (lookahead == '<') ADVANCE(1576);
      END_STATE();
    case 1465:
      if (lookahead == '<') ADVANCE(1577);
      END_STATE();
    case 1466:
      if (lookahead == '<') ADVANCE(1578);
      END_STATE();
    case 1467:
      if (lookahead == '<') ADVANCE(1579);
      END_STATE();
    case 1468:
      if (lookahead == '<') ADVANCE(1580);
      END_STATE();
    case 1469:
      if (lookahead == '<') ADVANCE(1581);
      END_STATE();
    case 1470:
      if (lookahead == '<') ADVANCE(1582);
      END_STATE();
    case 1471:
      if (lookahead == '<') ADVANCE(1583);
      END_STATE();
    case 1472:
      if (lookahead == '<') ADVANCE(1584);
      END_STATE();
    case 1473:
      if (lookahead == '<') ADVANCE(1585);
      END_STATE();
    case 1474:
      if (lookahead == '<') ADVANCE(1586);
      END_STATE();
    case 1475:
      if (lookahead == '<') ADVANCE(1587);
      END_STATE();
    case 1476:
      if (lookahead == '<') ADVANCE(1588);
      END_STATE();
    case 1477:
      if (lookahead == '<') ADVANCE(1589);
      END_STATE();
    case 1478:
      if (lookahead == '<') ADVANCE(1590);
      END_STATE();
    case 1479:
      if (lookahead == '<') ADVANCE(1591);
      END_STATE();
    case 1480:
      if (lookahead == '<') ADVANCE(1592);
      END_STATE();
    case 1481:
      if (lookahead == '<') ADVANCE(1593);
      END_STATE();
    case 1482:
      if (lookahead == '<') ADVANCE(1594);
      END_STATE();
    case 1483:
      if (lookahead == '<') ADVANCE(1595);
      END_STATE();
    case 1484:
      if (lookahead == '<') ADVANCE(1596);
      END_STATE();
    case 1485:
      if (lookahead == '<') ADVANCE(1597);
      END_STATE();
    case 1486:
      if (lookahead == '<') ADVANCE(1598);
      END_STATE();
    case 1487:
      if (lookahead == '<') ADVANCE(1599);
      END_STATE();
    case 1488:
      if (lookahead == '<') ADVANCE(1600);
      END_STATE();
    case 1489:
      if (lookahead == '<') ADVANCE(1601);
      END_STATE();
    case 1490:
      if (lookahead == '<') ADVANCE(1602);
      END_STATE();
    case 1491:
      if (lookahead == '<') ADVANCE(1603);
      END_STATE();
    case 1492:
      if (lookahead == '<') ADVANCE(1604);
      END_STATE();
    case 1493:
      if (lookahead == '<') ADVANCE(1605);
      END_STATE();
    case 1494:
      if (lookahead == '<') ADVANCE(1606);
      END_STATE();
    case 1495:
      if (lookahead == '<') ADVANCE(1607);
      END_STATE();
    case 1496:
      if (lookahead == '<') ADVANCE(1608);
      END_STATE();
    case 1497:
      if (lookahead == '<') ADVANCE(1609);
      END_STATE();
    case 1498:
      if (lookahead == '<') ADVANCE(1610);
      END_STATE();
    case 1499:
      if (lookahead == '<') ADVANCE(1611);
      END_STATE();
    case 1500:
      if (lookahead == '<') ADVANCE(1612);
      END_STATE();
    case 1501:
      if (lookahead == '<') ADVANCE(1613);
      END_STATE();
    case 1502:
      if (lookahead == '<') ADVANCE(1614);
      END_STATE();
    case 1503:
      if (lookahead == '<') ADVANCE(1615);
      END_STATE();
    case 1504:
      if (lookahead == '<') ADVANCE(1616);
      END_STATE();
    case 1505:
      if (lookahead == '<') ADVANCE(1617);
      END_STATE();
    case 1506:
      if (lookahead == '<') ADVANCE(1618);
      END_STATE();
    case 1507:
      if (lookahead == '<') ADVANCE(1619);
      END_STATE();
    case 1508:
      if (lookahead == '<') ADVANCE(1620);
      END_STATE();
    case 1509:
      if (lookahead == '<') ADVANCE(1621);
      END_STATE();
    case 1510:
      if (lookahead == '<') ADVANCE(1622);
      END_STATE();
    case 1511:
      if (lookahead == '<') ADVANCE(1623);
      END_STATE();
    case 1512:
      if (lookahead == '<') ADVANCE(1624);
      END_STATE();
    case 1513:
      if (lookahead == '<') ADVANCE(1625);
      END_STATE();
    case 1514:
      if (lookahead == '<') ADVANCE(1626);
      END_STATE();
    case 1515:
      if (lookahead == '<') ADVANCE(1627);
      END_STATE();
    case 1516:
      if (lookahead == '<') ADVANCE(1628);
      END_STATE();
    case 1517:
      if (lookahead == '<') ADVANCE(1629);
      END_STATE();
    case 1518:
      if (lookahead == '<') ADVANCE(1630);
      END_STATE();
    case 1519:
      if (lookahead == '<') ADVANCE(1631);
      END_STATE();
    case 1520:
      if (lookahead == '<') ADVANCE(1632);
      END_STATE();
    case 1521:
      if (lookahead == '<') ADVANCE(1633);
      END_STATE();
    case 1522:
      if (lookahead == '<') ADVANCE(1634);
      END_STATE();
    case 1523:
      if (lookahead == '<') ADVANCE(1635);
      END_STATE();
    case 1524:
      if (lookahead == '<') ADVANCE(1636);
      END_STATE();
    case 1525:
      if (lookahead == '<') ADVANCE(1637);
      END_STATE();
    case 1526:
      if (lookahead == '<') ADVANCE(1638);
      END_STATE();
    case 1527:
      if (lookahead == '<') ADVANCE(1639);
      END_STATE();
    case 1528:
      if (lookahead == '<') ADVANCE(1640);
      END_STATE();
    case 1529:
      if (lookahead == '<') ADVANCE(1641);
      END_STATE();
    case 1530:
      if (lookahead == '<') ADVANCE(1642);
      END_STATE();
    case 1531:
      if (lookahead == '<') ADVANCE(1643);
      END_STATE();
    case 1532:
      if (lookahead == '<') ADVANCE(1644);
      END_STATE();
    case 1533:
      if (lookahead == '<') ADVANCE(1645);
      END_STATE();
    case 1534:
      if (lookahead == '<') ADVANCE(1646);
      END_STATE();
    case 1535:
      if (lookahead == '<') ADVANCE(1647);
      END_STATE();
    case 1536:
      if (lookahead == '<') ADVANCE(1648);
      END_STATE();
    case 1537:
      if (lookahead == '<') ADVANCE(1649);
      END_STATE();
    case 1538:
      if (lookahead == '<') ADVANCE(1650);
      END_STATE();
    case 1539:
      if (lookahead == '<') ADVANCE(1651);
      END_STATE();
    case 1540:
      if (lookahead == '<') ADVANCE(1652);
      END_STATE();
    case 1541:
      if (lookahead == '<') ADVANCE(1653);
      END_STATE();
    case 1542:
      if (lookahead == '<') ADVANCE(1654);
      END_STATE();
    case 1543:
      if (lookahead == '<') ADVANCE(1655);
      END_STATE();
    case 1544:
      if (lookahead == '<') ADVANCE(1656);
      END_STATE();
    case 1545:
      if (lookahead == '<') ADVANCE(1657);
      END_STATE();
    case 1546:
      if (lookahead == '<') ADVANCE(1658);
      END_STATE();
    case 1547:
      if (lookahead == '<') ADVANCE(1659);
      END_STATE();
    case 1548:
      if (lookahead == '<') ADVANCE(1660);
      END_STATE();
    case 1549:
      if (lookahead == '<') ADVANCE(1661);
      END_STATE();
    case 1550:
      if (lookahead == '<') ADVANCE(1662);
      END_STATE();
    case 1551:
      if (lookahead == '<') ADVANCE(1663);
      END_STATE();
    case 1552:
      if (lookahead == '<') ADVANCE(1664);
      END_STATE();
    case 1553:
      if (lookahead == '<') ADVANCE(1665);
      END_STATE();
    case 1554:
      if (lookahead == '<') SKIP(1666);
      END_STATE();
    case 1555:
      if (lookahead == '<') SKIP(1667);
      END_STATE();
    case 1556:
      if (lookahead == '<') SKIP(1668);
      END_STATE();
    case 1557:
      if (lookahead == '<') SKIP(1669);
      END_STATE();
    case 1558:
      if (lookahead == '<') SKIP(1670);
      END_STATE();
    case 1559:
      if (lookahead == '<') SKIP(1671);
      END_STATE();
    case 1560:
      if (lookahead == '<') SKIP(1672);
      END_STATE();
    case 1561:
      if (lookahead == '<') SKIP(1673);
      END_STATE();
    case 1562:
      if (lookahead == '<') SKIP(1674);
      END_STATE();
    case 1563:
      if (lookahead == '<') SKIP(1675);
      END_STATE();
    case 1564:
      if (lookahead == '<') SKIP(1676);
      END_STATE();
    case 1565:
      if (lookahead == '<') SKIP(1677);
      END_STATE();
    case 1566:
      if (lookahead == '<') SKIP(1678);
      END_STATE();
    case 1567:
      if (lookahead == '<') SKIP(1679);
      END_STATE();
    case 1568:
      if (lookahead == '<') SKIP(1680);
      END_STATE();
    case 1569:
      if (lookahead == '<') SKIP(1681);
      END_STATE();
    case 1570:
      if (lookahead == '<') SKIP(1682);
      END_STATE();
    case 1571:
      if (lookahead == '<') SKIP(1683);
      END_STATE();
    case 1572:
      if (lookahead == '<') SKIP(1684);
      END_STATE();
    case 1573:
      if (lookahead == '=') SKIP(1687);
      END_STATE();
    case 1574:
      if (lookahead == '=') ADVANCE(2852);
      END_STATE();
    case 1575:
      if (lookahead == '=') ADVANCE(1686);
      END_STATE();
    case 1576:
      if (lookahead == '=') ADVANCE(1688);
      END_STATE();
    case 1577:
      if (lookahead == '=') ADVANCE(1690);
      END_STATE();
    case 1578:
      if (lookahead == '=') ADVANCE(1692);
      END_STATE();
    case 1579:
      if (lookahead == '=') ADVANCE(1694);
      END_STATE();
    case 1580:
      if (lookahead == '=') ADVANCE(1696);
      END_STATE();
    case 1581:
      if (lookahead == '=') ADVANCE(1698);
      END_STATE();
    case 1582:
      if (lookahead == '=') ADVANCE(1700);
      END_STATE();
    case 1583:
      if (lookahead == '=') ADVANCE(1702);
      END_STATE();
    case 1584:
      if (lookahead == '=') ADVANCE(1704);
      END_STATE();
    case 1585:
      if (lookahead == '=') ADVANCE(1706);
      END_STATE();
    case 1586:
      if (lookahead == '=') ADVANCE(1708);
      END_STATE();
    case 1587:
      if (lookahead == '=') ADVANCE(1710);
      END_STATE();
    case 1588:
      if (lookahead == '=') ADVANCE(1712);
      END_STATE();
    case 1589:
      if (lookahead == '=') ADVANCE(1714);
      END_STATE();
    case 1590:
      if (lookahead == '=') ADVANCE(1716);
      END_STATE();
    case 1591:
      if (lookahead == '=') ADVANCE(1718);
      END_STATE();
    case 1592:
      if (lookahead == '=') ADVANCE(1720);
      END_STATE();
    case 1593:
      if (lookahead == '=') ADVANCE(1722);
      END_STATE();
    case 1594:
      if (lookahead == '=') ADVANCE(1724);
      END_STATE();
    case 1595:
      if (lookahead == '=') ADVANCE(1726);
      END_STATE();
    case 1596:
      if (lookahead == '=') ADVANCE(1727);
      END_STATE();
    case 1597:
      if (lookahead == '=') ADVANCE(1728);
      END_STATE();
    case 1598:
      if (lookahead == '=') ADVANCE(1729);
      END_STATE();
    case 1599:
      if (lookahead == '=') ADVANCE(1730);
      END_STATE();
    case 1600:
      if (lookahead == '=') ADVANCE(1731);
      END_STATE();
    case 1601:
      if (lookahead == '=') ADVANCE(1732);
      END_STATE();
    case 1602:
      if (lookahead == '=') ADVANCE(1733);
      END_STATE();
    case 1603:
      if (lookahead == '=') ADVANCE(1734);
      END_STATE();
    case 1604:
      if (lookahead == '=') ADVANCE(1735);
      END_STATE();
    case 1605:
      if (lookahead == '=') ADVANCE(1736);
      END_STATE();
    case 1606:
      if (lookahead == '=') ADVANCE(1737);
      END_STATE();
    case 1607:
      if (lookahead == '=') ADVANCE(1738);
      END_STATE();
    case 1608:
      if (lookahead == '=') ADVANCE(1739);
      END_STATE();
    case 1609:
      if (lookahead == '=') ADVANCE(1740);
      END_STATE();
    case 1610:
      if (lookahead == '=') ADVANCE(1741);
      END_STATE();
    case 1611:
      if (lookahead == '=') ADVANCE(1742);
      END_STATE();
    case 1612:
      if (lookahead == '=') ADVANCE(1743);
      END_STATE();
    case 1613:
      if (lookahead == '=') ADVANCE(1744);
      END_STATE();
    case 1614:
      if (lookahead == '=') ADVANCE(1745);
      END_STATE();
    case 1615:
      if (lookahead == '=') ADVANCE(1746);
      END_STATE();
    case 1616:
      if (lookahead == '=') ADVANCE(1747);
      END_STATE();
    case 1617:
      if (lookahead == '=') ADVANCE(1748);
      END_STATE();
    case 1618:
      if (lookahead == '=') ADVANCE(1749);
      END_STATE();
    case 1619:
      if (lookahead == '=') ADVANCE(1750);
      END_STATE();
    case 1620:
      if (lookahead == '=') ADVANCE(1751);
      END_STATE();
    case 1621:
      if (lookahead == '=') ADVANCE(1752);
      END_STATE();
    case 1622:
      if (lookahead == '=') ADVANCE(1753);
      END_STATE();
    case 1623:
      if (lookahead == '=') ADVANCE(1754);
      END_STATE();
    case 1624:
      if (lookahead == '=') ADVANCE(1755);
      END_STATE();
    case 1625:
      if (lookahead == '=') ADVANCE(1756);
      END_STATE();
    case 1626:
      if (lookahead == '=') ADVANCE(1757);
      END_STATE();
    case 1627:
      if (lookahead == '=') ADVANCE(1758);
      END_STATE();
    case 1628:
      if (lookahead == '=') ADVANCE(1759);
      END_STATE();
    case 1629:
      if (lookahead == '=') ADVANCE(1760);
      END_STATE();
    case 1630:
      if (lookahead == '=') ADVANCE(1761);
      END_STATE();
    case 1631:
      if (lookahead == '=') ADVANCE(1762);
      END_STATE();
    case 1632:
      if (lookahead == '=') ADVANCE(1763);
      END_STATE();
    case 1633:
      if (lookahead == '=') ADVANCE(1764);
      END_STATE();
    case 1634:
      if (lookahead == '=') ADVANCE(1765);
      END_STATE();
    case 1635:
      if (lookahead == '=') ADVANCE(1766);
      END_STATE();
    case 1636:
      if (lookahead == '=') ADVANCE(1767);
      END_STATE();
    case 1637:
      if (lookahead == '=') ADVANCE(1768);
      END_STATE();
    case 1638:
      if (lookahead == '=') ADVANCE(1769);
      END_STATE();
    case 1639:
      if (lookahead == '=') ADVANCE(1770);
      END_STATE();
    case 1640:
      if (lookahead == '=') ADVANCE(1771);
      END_STATE();
    case 1641:
      if (lookahead == '=') ADVANCE(1772);
      END_STATE();
    case 1642:
      if (lookahead == '=') ADVANCE(1773);
      END_STATE();
    case 1643:
      if (lookahead == '=') ADVANCE(1774);
      END_STATE();
    case 1644:
      if (lookahead == '=') ADVANCE(1775);
      END_STATE();
    case 1645:
      if (lookahead == '=') ADVANCE(1776);
      END_STATE();
    case 1646:
      if (lookahead == '=') ADVANCE(1777);
      END_STATE();
    case 1647:
      if (lookahead == '=') ADVANCE(1778);
      END_STATE();
    case 1648:
      if (lookahead == '=') ADVANCE(1779);
      END_STATE();
    case 1649:
      if (lookahead == '=') ADVANCE(1780);
      END_STATE();
    case 1650:
      if (lookahead == '=') ADVANCE(1781);
      END_STATE();
    case 1651:
      if (lookahead == '=') ADVANCE(1782);
      END_STATE();
    case 1652:
      if (lookahead == '=') ADVANCE(1783);
      END_STATE();
    case 1653:
      if (lookahead == '=') ADVANCE(1784);
      END_STATE();
    case 1654:
      if (lookahead == '=') ADVANCE(1785);
      END_STATE();
    case 1655:
      if (lookahead == '=') ADVANCE(1786);
      END_STATE();
    case 1656:
      if (lookahead == '=') ADVANCE(1787);
      END_STATE();
    case 1657:
      if (lookahead == '=') ADVANCE(1788);
      END_STATE();
    case 1658:
      if (lookahead == '=') ADVANCE(1789);
      END_STATE();
    case 1659:
      if (lookahead == '=') ADVANCE(1790);
      END_STATE();
    case 1660:
      if (lookahead == '=') ADVANCE(1791);
      END_STATE();
    case 1661:
      if (lookahead == '=') ADVANCE(1792);
      END_STATE();
    case 1662:
      if (lookahead == '=') ADVANCE(1793);
      END_STATE();
    case 1663:
      if (lookahead == '=') ADVANCE(1794);
      END_STATE();
    case 1664:
      if (lookahead == '=') ADVANCE(1795);
      END_STATE();
    case 1665:
      if (lookahead == '=') ADVANCE(1796);
      END_STATE();
    case 1666:
      if (lookahead == '=') SKIP(1689);
      END_STATE();
    case 1667:
      if (lookahead == '=') SKIP(1691);
      END_STATE();
    case 1668:
      if (lookahead == '=') SKIP(1693);
      END_STATE();
    case 1669:
      if (lookahead == '=') SKIP(1695);
      END_STATE();
    case 1670:
      if (lookahead == '=') SKIP(1697);
      END_STATE();
    case 1671:
      if (lookahead == '=') SKIP(1699);
      END_STATE();
    case 1672:
      if (lookahead == '=') SKIP(1701);
      END_STATE();
    case 1673:
      if (lookahead == '=') SKIP(1703);
      END_STATE();
    case 1674:
      if (lookahead == '=') SKIP(1705);
      END_STATE();
    case 1675:
      if (lookahead == '=') SKIP(1707);
      END_STATE();
    case 1676:
      if (lookahead == '=') SKIP(1709);
      END_STATE();
    case 1677:
      if (lookahead == '=') SKIP(1711);
      END_STATE();
    case 1678:
      if (lookahead == '=') SKIP(1713);
      END_STATE();
    case 1679:
      if (lookahead == '=') SKIP(1715);
      END_STATE();
    case 1680:
      if (lookahead == '=') SKIP(1717);
      END_STATE();
    case 1681:
      if (lookahead == '=') SKIP(1719);
      END_STATE();
    case 1682:
      if (lookahead == '=') SKIP(1721);
      END_STATE();
    case 1683:
      if (lookahead == '=') SKIP(1723);
      END_STATE();
    case 1684:
      if (lookahead == '=') SKIP(1725);
      END_STATE();
    case 1685:
      if (lookahead == '>') ADVANCE(2827);
      END_STATE();
    case 1686:
      if (lookahead == '>') ADVANCE(1797);
      END_STATE();
    case 1687:
      if (lookahead == '>') SKIP(1798);
      END_STATE();
    case 1688:
      if (lookahead == '>') ADVANCE(1799);
      END_STATE();
    case 1689:
      if (lookahead == '>') SKIP(1800);
      END_STATE();
    case 1690:
      if (lookahead == '>') ADVANCE(1801);
      END_STATE();
    case 1691:
      if (lookahead == '>') SKIP(1802);
      END_STATE();
    case 1692:
      if (lookahead == '>') ADVANCE(1803);
      END_STATE();
    case 1693:
      if (lookahead == '>') SKIP(1804);
      END_STATE();
    case 1694:
      if (lookahead == '>') ADVANCE(1805);
      END_STATE();
    case 1695:
      if (lookahead == '>') SKIP(1806);
      END_STATE();
    case 1696:
      if (lookahead == '>') ADVANCE(1807);
      END_STATE();
    case 1697:
      if (lookahead == '>') SKIP(1808);
      END_STATE();
    case 1698:
      if (lookahead == '>') ADVANCE(1809);
      END_STATE();
    case 1699:
      if (lookahead == '>') SKIP(1810);
      END_STATE();
    case 1700:
      if (lookahead == '>') ADVANCE(1811);
      END_STATE();
    case 1701:
      if (lookahead == '>') SKIP(1812);
      END_STATE();
    case 1702:
      if (lookahead == '>') ADVANCE(1813);
      END_STATE();
    case 1703:
      if (lookahead == '>') SKIP(1814);
      END_STATE();
    case 1704:
      if (lookahead == '>') ADVANCE(1815);
      END_STATE();
    case 1705:
      if (lookahead == '>') SKIP(1816);
      END_STATE();
    case 1706:
      if (lookahead == '>') ADVANCE(1817);
      END_STATE();
    case 1707:
      if (lookahead == '>') SKIP(1818);
      END_STATE();
    case 1708:
      if (lookahead == '>') ADVANCE(1819);
      END_STATE();
    case 1709:
      if (lookahead == '>') SKIP(1820);
      END_STATE();
    case 1710:
      if (lookahead == '>') ADVANCE(1821);
      END_STATE();
    case 1711:
      if (lookahead == '>') SKIP(1822);
      END_STATE();
    case 1712:
      if (lookahead == '>') ADVANCE(1823);
      END_STATE();
    case 1713:
      if (lookahead == '>') SKIP(1824);
      END_STATE();
    case 1714:
      if (lookahead == '>') ADVANCE(1825);
      END_STATE();
    case 1715:
      if (lookahead == '>') SKIP(1826);
      END_STATE();
    case 1716:
      if (lookahead == '>') ADVANCE(1827);
      END_STATE();
    case 1717:
      if (lookahead == '>') SKIP(1828);
      END_STATE();
    case 1718:
      if (lookahead == '>') ADVANCE(1829);
      END_STATE();
    case 1719:
      if (lookahead == '>') SKIP(1830);
      END_STATE();
    case 1720:
      if (lookahead == '>') ADVANCE(1831);
      END_STATE();
    case 1721:
      if (lookahead == '>') SKIP(1832);
      END_STATE();
    case 1722:
      if (lookahead == '>') ADVANCE(1833);
      END_STATE();
    case 1723:
      if (lookahead == '>') SKIP(1834);
      END_STATE();
    case 1724:
      if (lookahead == '>') ADVANCE(1835);
      END_STATE();
    case 1725:
      if (lookahead == '>') SKIP(1836);
      END_STATE();
    case 1726:
      if (lookahead == '>') ADVANCE(1837);
      END_STATE();
    case 1727:
      if (lookahead == '>') ADVANCE(1838);
      END_STATE();
    case 1728:
      if (lookahead == '>') ADVANCE(1839);
      END_STATE();
    case 1729:
      if (lookahead == '>') ADVANCE(1840);
      END_STATE();
    case 1730:
      if (lookahead == '>') ADVANCE(1841);
      END_STATE();
    case 1731:
      if (lookahead == '>') ADVANCE(1842);
      END_STATE();
    case 1732:
      if (lookahead == '>') ADVANCE(1843);
      END_STATE();
    case 1733:
      if (lookahead == '>') ADVANCE(1844);
      END_STATE();
    case 1734:
      if (lookahead == '>') ADVANCE(1845);
      END_STATE();
    case 1735:
      if (lookahead == '>') ADVANCE(1846);
      END_STATE();
    case 1736:
      if (lookahead == '>') ADVANCE(1847);
      END_STATE();
    case 1737:
      if (lookahead == '>') ADVANCE(1848);
      END_STATE();
    case 1738:
      if (lookahead == '>') ADVANCE(1849);
      END_STATE();
    case 1739:
      if (lookahead == '>') ADVANCE(1850);
      END_STATE();
    case 1740:
      if (lookahead == '>') ADVANCE(1851);
      END_STATE();
    case 1741:
      if (lookahead == '>') ADVANCE(1852);
      END_STATE();
    case 1742:
      if (lookahead == '>') ADVANCE(1853);
      END_STATE();
    case 1743:
      if (lookahead == '>') ADVANCE(1854);
      END_STATE();
    case 1744:
      if (lookahead == '>') ADVANCE(1855);
      END_STATE();
    case 1745:
      if (lookahead == '>') ADVANCE(1856);
      END_STATE();
    case 1746:
      if (lookahead == '>') ADVANCE(1857);
      END_STATE();
    case 1747:
      if (lookahead == '>') ADVANCE(1858);
      END_STATE();
    case 1748:
      if (lookahead == '>') ADVANCE(1859);
      END_STATE();
    case 1749:
      if (lookahead == '>') ADVANCE(1860);
      END_STATE();
    case 1750:
      if (lookahead == '>') ADVANCE(1861);
      END_STATE();
    case 1751:
      if (lookahead == '>') ADVANCE(1862);
      END_STATE();
    case 1752:
      if (lookahead == '>') ADVANCE(1863);
      END_STATE();
    case 1753:
      if (lookahead == '>') ADVANCE(1864);
      END_STATE();
    case 1754:
      if (lookahead == '>') ADVANCE(1865);
      END_STATE();
    case 1755:
      if (lookahead == '>') ADVANCE(1866);
      END_STATE();
    case 1756:
      if (lookahead == '>') ADVANCE(1867);
      END_STATE();
    case 1757:
      if (lookahead == '>') ADVANCE(1868);
      END_STATE();
    case 1758:
      if (lookahead == '>') ADVANCE(1869);
      END_STATE();
    case 1759:
      if (lookahead == '>') ADVANCE(1870);
      END_STATE();
    case 1760:
      if (lookahead == '>') ADVANCE(1871);
      END_STATE();
    case 1761:
      if (lookahead == '>') ADVANCE(1872);
      END_STATE();
    case 1762:
      if (lookahead == '>') ADVANCE(1873);
      END_STATE();
    case 1763:
      if (lookahead == '>') ADVANCE(1874);
      END_STATE();
    case 1764:
      if (lookahead == '>') ADVANCE(1875);
      END_STATE();
    case 1765:
      if (lookahead == '>') ADVANCE(1876);
      END_STATE();
    case 1766:
      if (lookahead == '>') ADVANCE(1877);
      END_STATE();
    case 1767:
      if (lookahead == '>') ADVANCE(1878);
      END_STATE();
    case 1768:
      if (lookahead == '>') ADVANCE(1879);
      END_STATE();
    case 1769:
      if (lookahead == '>') ADVANCE(1880);
      END_STATE();
    case 1770:
      if (lookahead == '>') ADVANCE(1881);
      END_STATE();
    case 1771:
      if (lookahead == '>') ADVANCE(1882);
      END_STATE();
    case 1772:
      if (lookahead == '>') ADVANCE(1883);
      END_STATE();
    case 1773:
      if (lookahead == '>') ADVANCE(1884);
      END_STATE();
    case 1774:
      if (lookahead == '>') ADVANCE(1885);
      END_STATE();
    case 1775:
      if (lookahead == '>') ADVANCE(1886);
      END_STATE();
    case 1776:
      if (lookahead == '>') ADVANCE(1887);
      END_STATE();
    case 1777:
      if (lookahead == '>') ADVANCE(1888);
      END_STATE();
    case 1778:
      if (lookahead == '>') ADVANCE(1889);
      END_STATE();
    case 1779:
      if (lookahead == '>') ADVANCE(1890);
      END_STATE();
    case 1780:
      if (lookahead == '>') ADVANCE(1891);
      END_STATE();
    case 1781:
      if (lookahead == '>') ADVANCE(1892);
      END_STATE();
    case 1782:
      if (lookahead == '>') ADVANCE(1893);
      END_STATE();
    case 1783:
      if (lookahead == '>') ADVANCE(1894);
      END_STATE();
    case 1784:
      if (lookahead == '>') ADVANCE(1895);
      END_STATE();
    case 1785:
      if (lookahead == '>') ADVANCE(1896);
      END_STATE();
    case 1786:
      if (lookahead == '>') ADVANCE(1897);
      END_STATE();
    case 1787:
      if (lookahead == '>') ADVANCE(1898);
      END_STATE();
    case 1788:
      if (lookahead == '>') ADVANCE(1899);
      END_STATE();
    case 1789:
      if (lookahead == '>') ADVANCE(1900);
      END_STATE();
    case 1790:
      if (lookahead == '>') ADVANCE(1901);
      END_STATE();
    case 1791:
      if (lookahead == '>') ADVANCE(1902);
      END_STATE();
    case 1792:
      if (lookahead == '>') ADVANCE(1903);
      END_STATE();
    case 1793:
      if (lookahead == '>') ADVANCE(1904);
      END_STATE();
    case 1794:
      if (lookahead == '>') ADVANCE(1905);
      END_STATE();
    case 1795:
      if (lookahead == '>') ADVANCE(1906);
      END_STATE();
    case 1796:
      if (lookahead == '>') ADVANCE(1907);
      END_STATE();
    case 1797:
      if (lookahead == '?') ADVANCE(1908);
      END_STATE();
    case 1798:
      if (lookahead == '?') SKIP(1909);
      END_STATE();
    case 1799:
      if (lookahead == '?') ADVANCE(1910);
      END_STATE();
    case 1800:
      if (lookahead == '?') SKIP(1911);
      END_STATE();
    case 1801:
      if (lookahead == '?') ADVANCE(1912);
      END_STATE();
    case 1802:
      if (lookahead == '?') SKIP(1913);
      END_STATE();
    case 1803:
      if (lookahead == '?') ADVANCE(1914);
      END_STATE();
    case 1804:
      if (lookahead == '?') SKIP(1915);
      END_STATE();
    case 1805:
      if (lookahead == '?') ADVANCE(1916);
      END_STATE();
    case 1806:
      if (lookahead == '?') SKIP(1917);
      END_STATE();
    case 1807:
      if (lookahead == '?') ADVANCE(1918);
      END_STATE();
    case 1808:
      if (lookahead == '?') SKIP(1919);
      END_STATE();
    case 1809:
      if (lookahead == '?') ADVANCE(1920);
      END_STATE();
    case 1810:
      if (lookahead == '?') SKIP(1921);
      END_STATE();
    case 1811:
      if (lookahead == '?') ADVANCE(1922);
      END_STATE();
    case 1812:
      if (lookahead == '?') SKIP(1923);
      END_STATE();
    case 1813:
      if (lookahead == '?') ADVANCE(1924);
      END_STATE();
    case 1814:
      if (lookahead == '?') SKIP(1925);
      END_STATE();
    case 1815:
      if (lookahead == '?') ADVANCE(1926);
      END_STATE();
    case 1816:
      if (lookahead == '?') SKIP(1927);
      END_STATE();
    case 1817:
      if (lookahead == '?') ADVANCE(1928);
      END_STATE();
    case 1818:
      if (lookahead == '?') SKIP(1929);
      END_STATE();
    case 1819:
      if (lookahead == '?') ADVANCE(1930);
      END_STATE();
    case 1820:
      if (lookahead == '?') SKIP(1931);
      END_STATE();
    case 1821:
      if (lookahead == '?') ADVANCE(1932);
      END_STATE();
    case 1822:
      if (lookahead == '?') SKIP(1933);
      END_STATE();
    case 1823:
      if (lookahead == '?') ADVANCE(1934);
      END_STATE();
    case 1824:
      if (lookahead == '?') SKIP(1935);
      END_STATE();
    case 1825:
      if (lookahead == '?') ADVANCE(1936);
      END_STATE();
    case 1826:
      if (lookahead == '?') SKIP(1937);
      END_STATE();
    case 1827:
      if (lookahead == '?') ADVANCE(1938);
      END_STATE();
    case 1828:
      if (lookahead == '?') SKIP(1939);
      END_STATE();
    case 1829:
      if (lookahead == '?') ADVANCE(1940);
      END_STATE();
    case 1830:
      if (lookahead == '?') SKIP(1941);
      END_STATE();
    case 1831:
      if (lookahead == '?') ADVANCE(1942);
      END_STATE();
    case 1832:
      if (lookahead == '?') SKIP(1943);
      END_STATE();
    case 1833:
      if (lookahead == '?') ADVANCE(1944);
      END_STATE();
    case 1834:
      if (lookahead == '?') SKIP(1945);
      END_STATE();
    case 1835:
      if (lookahead == '?') ADVANCE(1946);
      END_STATE();
    case 1836:
      if (lookahead == '?') SKIP(1947);
      END_STATE();
    case 1837:
      if (lookahead == '?') ADVANCE(1948);
      END_STATE();
    case 1838:
      if (lookahead == '?') ADVANCE(1949);
      END_STATE();
    case 1839:
      if (lookahead == '?') ADVANCE(1950);
      END_STATE();
    case 1840:
      if (lookahead == '?') ADVANCE(1951);
      END_STATE();
    case 1841:
      if (lookahead == '?') ADVANCE(1952);
      END_STATE();
    case 1842:
      if (lookahead == '?') ADVANCE(1953);
      END_STATE();
    case 1843:
      if (lookahead == '?') ADVANCE(1954);
      END_STATE();
    case 1844:
      if (lookahead == '?') ADVANCE(1955);
      END_STATE();
    case 1845:
      if (lookahead == '?') ADVANCE(1956);
      END_STATE();
    case 1846:
      if (lookahead == '?') ADVANCE(1957);
      END_STATE();
    case 1847:
      if (lookahead == '?') ADVANCE(1958);
      END_STATE();
    case 1848:
      if (lookahead == '?') ADVANCE(1959);
      END_STATE();
    case 1849:
      if (lookahead == '?') ADVANCE(1960);
      END_STATE();
    case 1850:
      if (lookahead == '?') ADVANCE(1961);
      END_STATE();
    case 1851:
      if (lookahead == '?') ADVANCE(1962);
      END_STATE();
    case 1852:
      if (lookahead == '?') ADVANCE(1963);
      END_STATE();
    case 1853:
      if (lookahead == '?') ADVANCE(1964);
      END_STATE();
    case 1854:
      if (lookahead == '?') ADVANCE(1965);
      END_STATE();
    case 1855:
      if (lookahead == '?') ADVANCE(1966);
      END_STATE();
    case 1856:
      if (lookahead == '?') ADVANCE(1967);
      END_STATE();
    case 1857:
      if (lookahead == '?') ADVANCE(1968);
      END_STATE();
    case 1858:
      if (lookahead == '?') ADVANCE(1969);
      END_STATE();
    case 1859:
      if (lookahead == '?') ADVANCE(1970);
      END_STATE();
    case 1860:
      if (lookahead == '?') ADVANCE(1971);
      END_STATE();
    case 1861:
      if (lookahead == '?') ADVANCE(1972);
      END_STATE();
    case 1862:
      if (lookahead == '?') ADVANCE(1973);
      END_STATE();
    case 1863:
      if (lookahead == '?') ADVANCE(1974);
      END_STATE();
    case 1864:
      if (lookahead == '?') ADVANCE(1975);
      END_STATE();
    case 1865:
      if (lookahead == '?') ADVANCE(1976);
      END_STATE();
    case 1866:
      if (lookahead == '?') ADVANCE(1977);
      END_STATE();
    case 1867:
      if (lookahead == '?') ADVANCE(1978);
      END_STATE();
    case 1868:
      if (lookahead == '?') ADVANCE(1979);
      END_STATE();
    case 1869:
      if (lookahead == '?') ADVANCE(1980);
      END_STATE();
    case 1870:
      if (lookahead == '?') ADVANCE(1981);
      END_STATE();
    case 1871:
      if (lookahead == '?') ADVANCE(1982);
      END_STATE();
    case 1872:
      if (lookahead == '?') ADVANCE(1983);
      END_STATE();
    case 1873:
      if (lookahead == '?') ADVANCE(1984);
      END_STATE();
    case 1874:
      if (lookahead == '?') ADVANCE(1985);
      END_STATE();
    case 1875:
      if (lookahead == '?') ADVANCE(1986);
      END_STATE();
    case 1876:
      if (lookahead == '?') ADVANCE(1987);
      END_STATE();
    case 1877:
      if (lookahead == '?') ADVANCE(1988);
      END_STATE();
    case 1878:
      if (lookahead == '?') ADVANCE(1989);
      END_STATE();
    case 1879:
      if (lookahead == '?') ADVANCE(1990);
      END_STATE();
    case 1880:
      if (lookahead == '?') ADVANCE(1991);
      END_STATE();
    case 1881:
      if (lookahead == '?') ADVANCE(1992);
      END_STATE();
    case 1882:
      if (lookahead == '?') ADVANCE(1993);
      END_STATE();
    case 1883:
      if (lookahead == '?') ADVANCE(1994);
      END_STATE();
    case 1884:
      if (lookahead == '?') ADVANCE(1995);
      END_STATE();
    case 1885:
      if (lookahead == '?') ADVANCE(1996);
      END_STATE();
    case 1886:
      if (lookahead == '?') ADVANCE(1997);
      END_STATE();
    case 1887:
      if (lookahead == '?') ADVANCE(1998);
      END_STATE();
    case 1888:
      if (lookahead == '?') ADVANCE(1999);
      END_STATE();
    case 1889:
      if (lookahead == '?') ADVANCE(2000);
      END_STATE();
    case 1890:
      if (lookahead == '?') ADVANCE(2001);
      END_STATE();
    case 1891:
      if (lookahead == '?') ADVANCE(2002);
      END_STATE();
    case 1892:
      if (lookahead == '?') ADVANCE(2003);
      END_STATE();
    case 1893:
      if (lookahead == '?') ADVANCE(2004);
      END_STATE();
    case 1894:
      if (lookahead == '?') ADVANCE(2005);
      END_STATE();
    case 1895:
      if (lookahead == '?') ADVANCE(2006);
      END_STATE();
    case 1896:
      if (lookahead == '?') ADVANCE(2007);
      END_STATE();
    case 1897:
      if (lookahead == '?') ADVANCE(2008);
      END_STATE();
    case 1898:
      if (lookahead == '?') ADVANCE(2009);
      END_STATE();
    case 1899:
      if (lookahead == '?') ADVANCE(2010);
      END_STATE();
    case 1900:
      if (lookahead == '?') ADVANCE(2011);
      END_STATE();
    case 1901:
      if (lookahead == '?') ADVANCE(2012);
      END_STATE();
    case 1902:
      if (lookahead == '?') ADVANCE(2013);
      END_STATE();
    case 1903:
      if (lookahead == '?') ADVANCE(2014);
      END_STATE();
    case 1904:
      if (lookahead == '?') ADVANCE(2015);
      END_STATE();
    case 1905:
      if (lookahead == '?') ADVANCE(2016);
      END_STATE();
    case 1906:
      if (lookahead == '?') ADVANCE(2017);
      END_STATE();
    case 1907:
      if (lookahead == '?') ADVANCE(2018);
      END_STATE();
    case 1908:
      if (lookahead == '@') ADVANCE(2019);
      END_STATE();
    case 1909:
      if (lookahead == '@') SKIP(2020);
      END_STATE();
    case 1910:
      if (lookahead == '@') ADVANCE(2021);
      END_STATE();
    case 1911:
      if (lookahead == '@') SKIP(2022);
      END_STATE();
    case 1912:
      if (lookahead == '@') ADVANCE(2023);
      END_STATE();
    case 1913:
      if (lookahead == '@') SKIP(2024);
      END_STATE();
    case 1914:
      if (lookahead == '@') ADVANCE(2025);
      END_STATE();
    case 1915:
      if (lookahead == '@') SKIP(2085);
      END_STATE();
    case 1916:
      if (lookahead == '@') ADVANCE(2027);
      END_STATE();
    case 1917:
      if (lookahead == '@') SKIP(2026);
      END_STATE();
    case 1918:
      if (lookahead == '@') ADVANCE(2086);
      END_STATE();
    case 1919:
      if (lookahead == '@') SKIP(2087);
      END_STATE();
    case 1920:
      if (lookahead == '@') ADVANCE(2029);
      END_STATE();
    case 1921:
      if (lookahead == '@') SKIP(2028);
      END_STATE();
    case 1922:
      if (lookahead == '@') ADVANCE(2031);
      END_STATE();
    case 1923:
      if (lookahead == '@') SKIP(2089);
      END_STATE();
    case 1924:
      if (lookahead == '@') ADVANCE(2033);
      END_STATE();
    case 1925:
      if (lookahead == '@') SKIP(2030);
      END_STATE();
    case 1926:
      if (lookahead == '@') ADVANCE(2088);
      END_STATE();
    case 1927:
      if (lookahead == '@') SKIP(2091);
      END_STATE();
    case 1928:
      if (lookahead == '@') ADVANCE(2090);
      END_STATE();
    case 1929:
      if (lookahead == '@') SKIP(2032);
      END_STATE();
    case 1930:
      if (lookahead == '@') ADVANCE(2035);
      END_STATE();
    case 1931:
      if (lookahead == '@') SKIP(2093);
      END_STATE();
    case 1932:
      if (lookahead == '@') ADVANCE(2037);
      END_STATE();
    case 1933:
      if (lookahead == '@') SKIP(2034);
      END_STATE();
    case 1934:
      if (lookahead == '@') ADVANCE(2039);
      END_STATE();
    case 1935:
      if (lookahead == '@') SKIP(2095);
      END_STATE();
    case 1936:
      if (lookahead == '@') ADVANCE(2041);
      END_STATE();
    case 1937:
      if (lookahead == '@') SKIP(2036);
      END_STATE();
    case 1938:
      if (lookahead == '@') ADVANCE(2092);
      END_STATE();
    case 1939:
      if (lookahead == '@') SKIP(2097);
      END_STATE();
    case 1940:
      if (lookahead == '@') ADVANCE(2094);
      END_STATE();
    case 1941:
      if (lookahead == '@') SKIP(2038);
      END_STATE();
    case 1942:
      if (lookahead == '@') ADVANCE(2042);
      END_STATE();
    case 1943:
      if (lookahead == '@') SKIP(2099);
      END_STATE();
    case 1944:
      if (lookahead == '@') ADVANCE(2043);
      END_STATE();
    case 1945:
      if (lookahead == '@') SKIP(2040);
      END_STATE();
    case 1946:
      if (lookahead == '@') ADVANCE(2096);
      END_STATE();
    case 1947:
      if (lookahead == '@') SKIP(2101);
      END_STATE();
    case 1948:
      if (lookahead == '@') ADVANCE(2044);
      END_STATE();
    case 1949:
      if (lookahead == '@') ADVANCE(2098);
      END_STATE();
    case 1950:
      if (lookahead == '@') ADVANCE(2045);
      END_STATE();
    case 1951:
      if (lookahead == '@') ADVANCE(2046);
      END_STATE();
    case 1952:
      if (lookahead == '@') ADVANCE(2047);
      END_STATE();
    case 1953:
      if (lookahead == '@') ADVANCE(2048);
      END_STATE();
    case 1954:
      if (lookahead == '@') ADVANCE(2049);
      END_STATE();
    case 1955:
      if (lookahead == '@') ADVANCE(2100);
      END_STATE();
    case 1956:
      if (lookahead == '@') ADVANCE(2102);
      END_STATE();
    case 1957:
      if (lookahead == '@') ADVANCE(2050);
      END_STATE();
    case 1958:
      if (lookahead == '@') ADVANCE(2051);
      END_STATE();
    case 1959:
      if (lookahead == '@') ADVANCE(2103);
      END_STATE();
    case 1960:
      if (lookahead == '@') ADVANCE(2052);
      END_STATE();
    case 1961:
      if (lookahead == '@') ADVANCE(2053);
      END_STATE();
    case 1962:
      if (lookahead == '@') ADVANCE(2054);
      END_STATE();
    case 1963:
      if (lookahead == '@') ADVANCE(2055);
      END_STATE();
    case 1964:
      if (lookahead == '@') ADVANCE(2104);
      END_STATE();
    case 1965:
      if (lookahead == '@') ADVANCE(2056);
      END_STATE();
    case 1966:
      if (lookahead == '@') ADVANCE(2105);
      END_STATE();
    case 1967:
      if (lookahead == '@') ADVANCE(2057);
      END_STATE();
    case 1968:
      if (lookahead == '@') ADVANCE(2058);
      END_STATE();
    case 1969:
      if (lookahead == '@') ADVANCE(2106);
      END_STATE();
    case 1970:
      if (lookahead == '@') ADVANCE(2059);
      END_STATE();
    case 1971:
      if (lookahead == '@') ADVANCE(2107);
      END_STATE();
    case 1972:
      if (lookahead == '@') ADVANCE(2060);
      END_STATE();
    case 1973:
      if (lookahead == '@') ADVANCE(2108);
      END_STATE();
    case 1974:
      if (lookahead == '@') ADVANCE(2061);
      END_STATE();
    case 1975:
      if (lookahead == '@') ADVANCE(2109);
      END_STATE();
    case 1976:
      if (lookahead == '@') ADVANCE(2062);
      END_STATE();
    case 1977:
      if (lookahead == '@') ADVANCE(2110);
      END_STATE();
    case 1978:
      if (lookahead == '@') ADVANCE(2063);
      END_STATE();
    case 1979:
      if (lookahead == '@') ADVANCE(2111);
      END_STATE();
    case 1980:
      if (lookahead == '@') ADVANCE(2064);
      END_STATE();
    case 1981:
      if (lookahead == '@') ADVANCE(2112);
      END_STATE();
    case 1982:
      if (lookahead == '@') ADVANCE(2065);
      END_STATE();
    case 1983:
      if (lookahead == '@') ADVANCE(2066);
      END_STATE();
    case 1984:
      if (lookahead == '@') ADVANCE(2113);
      END_STATE();
    case 1985:
      if (lookahead == '@') ADVANCE(2067);
      END_STATE();
    case 1986:
      if (lookahead == '@') ADVANCE(2068);
      END_STATE();
    case 1987:
      if (lookahead == '@') ADVANCE(2114);
      END_STATE();
    case 1988:
      if (lookahead == '@') ADVANCE(2069);
      END_STATE();
    case 1989:
      if (lookahead == '@') ADVANCE(2070);
      END_STATE();
    case 1990:
      if (lookahead == '@') ADVANCE(2115);
      END_STATE();
    case 1991:
      if (lookahead == '@') ADVANCE(2071);
      END_STATE();
    case 1992:
      if (lookahead == '@') ADVANCE(2116);
      END_STATE();
    case 1993:
      if (lookahead == '@') ADVANCE(2072);
      END_STATE();
    case 1994:
      if (lookahead == '@') ADVANCE(2117);
      END_STATE();
    case 1995:
      if (lookahead == '@') ADVANCE(2073);
      END_STATE();
    case 1996:
      if (lookahead == '@') ADVANCE(2118);
      END_STATE();
    case 1997:
      if (lookahead == '@') ADVANCE(2074);
      END_STATE();
    case 1998:
      if (lookahead == '@') ADVANCE(2119);
      END_STATE();
    case 1999:
      if (lookahead == '@') ADVANCE(2075);
      END_STATE();
    case 2000:
      if (lookahead == '@') ADVANCE(2120);
      END_STATE();
    case 2001:
      if (lookahead == '@') ADVANCE(2076);
      END_STATE();
    case 2002:
      if (lookahead == '@') ADVANCE(2121);
      END_STATE();
    case 2003:
      if (lookahead == '@') ADVANCE(2077);
      END_STATE();
    case 2004:
      if (lookahead == '@') ADVANCE(2122);
      END_STATE();
    case 2005:
      if (lookahead == '@') ADVANCE(2078);
      END_STATE();
    case 2006:
      if (lookahead == '@') ADVANCE(2123);
      END_STATE();
    case 2007:
      if (lookahead == '@') ADVANCE(2079);
      END_STATE();
    case 2008:
      if (lookahead == '@') ADVANCE(2124);
      END_STATE();
    case 2009:
      if (lookahead == '@') ADVANCE(2080);
      END_STATE();
    case 2010:
      if (lookahead == '@') ADVANCE(2125);
      END_STATE();
    case 2011:
      if (lookahead == '@') ADVANCE(2081);
      END_STATE();
    case 2012:
      if (lookahead == '@') ADVANCE(2126);
      END_STATE();
    case 2013:
      if (lookahead == '@') ADVANCE(2082);
      END_STATE();
    case 2014:
      if (lookahead == '@') ADVANCE(2127);
      END_STATE();
    case 2015:
      if (lookahead == '@') ADVANCE(2083);
      END_STATE();
    case 2016:
      if (lookahead == '@') ADVANCE(2128);
      END_STATE();
    case 2017:
      if (lookahead == '@') ADVANCE(2084);
      END_STATE();
    case 2018:
      if (lookahead == '@') ADVANCE(2129);
      END_STATE();
    case 2019:
      if (lookahead == '^') ADVANCE(2138);
      END_STATE();
    case 2020:
      if (lookahead == '^') SKIP(2140);
      END_STATE();
    case 2021:
      if (lookahead == '^') ADVANCE(2136);
      END_STATE();
    case 2022:
      if (lookahead == '^') SKIP(2141);
      END_STATE();
    case 2023:
      if (lookahead == '^') ADVANCE(2137);
      END_STATE();
    case 2024:
      if (lookahead == '^') SKIP(2145);
      END_STATE();
    case 2025:
      if (lookahead == '^') ADVANCE(2139);
      END_STATE();
    case 2026:
      if (lookahead == '^') SKIP(2149);
      END_STATE();
    case 2027:
      if (lookahead == '^') ADVANCE(2143);
      END_STATE();
    case 2028:
      if (lookahead == '^') SKIP(2153);
      END_STATE();
    case 2029:
      if (lookahead == '^') ADVANCE(2147);
      END_STATE();
    case 2030:
      if (lookahead == '^') SKIP(2155);
      END_STATE();
    case 2031:
      if (lookahead == '^') ADVANCE(2151);
      END_STATE();
    case 2032:
      if (lookahead == '^') SKIP(2157);
      END_STATE();
    case 2033:
      if (lookahead == '^') ADVANCE(2144);
      END_STATE();
    case 2034:
      if (lookahead == '^') SKIP(2160);
      END_STATE();
    case 2035:
      if (lookahead == '^') ADVANCE(2158);
      END_STATE();
    case 2036:
      if (lookahead == '^') SKIP(2163);
      END_STATE();
    case 2037:
      if (lookahead == '^') ADVANCE(2161);
      END_STATE();
    case 2038:
      if (lookahead == '^') SKIP(2165);
      END_STATE();
    case 2039:
      if (lookahead == '^') ADVANCE(2148);
      END_STATE();
    case 2040:
      if (lookahead == '^') SKIP(2167);
      END_STATE();
    case 2041:
      if (lookahead == '^') ADVANCE(2152);
      END_STATE();
    case 2042:
      if (lookahead == '^') ADVANCE(2168);
      END_STATE();
    case 2043:
      if (lookahead == '^') ADVANCE(2154);
      END_STATE();
    case 2044:
      if (lookahead == '^') ADVANCE(2170);
      END_STATE();
    case 2045:
      if (lookahead == '^') ADVANCE(2156);
      END_STATE();
    case 2046:
      if (lookahead == '^') ADVANCE(2173);
      END_STATE();
    case 2047:
      if (lookahead == '^') ADVANCE(2174);
      END_STATE();
    case 2048:
      if (lookahead == '^') ADVANCE(2159);
      END_STATE();
    case 2049:
      if (lookahead == '^') ADVANCE(2162);
      END_STATE();
    case 2050:
      if (lookahead == '^') ADVANCE(2175);
      END_STATE();
    case 2051:
      if (lookahead == '^') ADVANCE(2164);
      END_STATE();
    case 2052:
      if (lookahead == '^') ADVANCE(2142);
      END_STATE();
    case 2053:
      if (lookahead == '^') ADVANCE(2146);
      END_STATE();
    case 2054:
      if (lookahead == '^') ADVANCE(2150);
      END_STATE();
    case 2055:
      if (lookahead == '^') ADVANCE(2176);
      END_STATE();
    case 2056:
      if (lookahead == '^') ADVANCE(2177);
      END_STATE();
    case 2057:
      if (lookahead == '^') ADVANCE(2166);
      END_STATE();
    case 2058:
      if (lookahead == '^') ADVANCE(2178);
      END_STATE();
    case 2059:
      if (lookahead == '^') ADVANCE(2179);
      END_STATE();
    case 2060:
      if (lookahead == '^') ADVANCE(2180);
      END_STATE();
    case 2061:
      if (lookahead == '^') ADVANCE(2181);
      END_STATE();
    case 2062:
      if (lookahead == '^') ADVANCE(2182);
      END_STATE();
    case 2063:
      if (lookahead == '^') ADVANCE(2183);
      END_STATE();
    case 2064:
      if (lookahead == '^') ADVANCE(2184);
      END_STATE();
    case 2065:
      if (lookahead == '^') ADVANCE(2169);
      END_STATE();
    case 2066:
      if (lookahead == '^') ADVANCE(2185);
      END_STATE();
    case 2067:
      if (lookahead == '^') ADVANCE(2171);
      END_STATE();
    case 2068:
      if (lookahead == '^') ADVANCE(2186);
      END_STATE();
    case 2069:
      if (lookahead == '^') ADVANCE(2172);
      END_STATE();
    case 2070:
      if (lookahead == '^') ADVANCE(2187);
      END_STATE();
    case 2071:
      if (lookahead == '^') ADVANCE(2188);
      END_STATE();
    case 2072:
      if (lookahead == '^') ADVANCE(2189);
      END_STATE();
    case 2073:
      if (lookahead == '^') ADVANCE(2190);
      END_STATE();
    case 2074:
      if (lookahead == '^') ADVANCE(2191);
      END_STATE();
    case 2075:
      if (lookahead == '^') ADVANCE(2192);
      END_STATE();
    case 2076:
      if (lookahead == '^') ADVANCE(2193);
      END_STATE();
    case 2077:
      if (lookahead == '^') ADVANCE(2194);
      END_STATE();
    case 2078:
      if (lookahead == '^') ADVANCE(2195);
      END_STATE();
    case 2079:
      if (lookahead == '^') ADVANCE(2196);
      END_STATE();
    case 2080:
      if (lookahead == '^') ADVANCE(2197);
      END_STATE();
    case 2081:
      if (lookahead == '^') ADVANCE(2198);
      END_STATE();
    case 2082:
      if (lookahead == '^') ADVANCE(2199);
      END_STATE();
    case 2083:
      if (lookahead == '^') ADVANCE(2200);
      END_STATE();
    case 2084:
      if (lookahead == '^') ADVANCE(2201);
      END_STATE();
    case 2085:
      if (lookahead == '^') SKIP(2203);
      END_STATE();
    case 2086:
      if (lookahead == '^') ADVANCE(2202);
      END_STATE();
    case 2087:
      if (lookahead == '^') SKIP(2205);
      END_STATE();
    case 2088:
      if (lookahead == '^') ADVANCE(2204);
      END_STATE();
    case 2089:
      if (lookahead == '^') SKIP(2207);
      END_STATE();
    case 2090:
      if (lookahead == '^') ADVANCE(2206);
      END_STATE();
    case 2091:
      if (lookahead == '^') SKIP(2209);
      END_STATE();
    case 2092:
      if (lookahead == '^') ADVANCE(2208);
      END_STATE();
    case 2093:
      if (lookahead == '^') SKIP(2211);
      END_STATE();
    case 2094:
      if (lookahead == '^') ADVANCE(2210);
      END_STATE();
    case 2095:
      if (lookahead == '^') SKIP(2213);
      END_STATE();
    case 2096:
      if (lookahead == '^') ADVANCE(2212);
      END_STATE();
    case 2097:
      if (lookahead == '^') SKIP(2215);
      END_STATE();
    case 2098:
      if (lookahead == '^') ADVANCE(2214);
      END_STATE();
    case 2099:
      if (lookahead == '^') SKIP(2217);
      END_STATE();
    case 2100:
      if (lookahead == '^') ADVANCE(2216);
      END_STATE();
    case 2101:
      if (lookahead == '^') SKIP(2219);
      END_STATE();
    case 2102:
      if (lookahead == '^') ADVANCE(2218);
      END_STATE();
    case 2103:
      if (lookahead == '^') ADVANCE(2220);
      END_STATE();
    case 2104:
      if (lookahead == '^') ADVANCE(2221);
      END_STATE();
    case 2105:
      if (lookahead == '^') ADVANCE(2222);
      END_STATE();
    case 2106:
      if (lookahead == '^') ADVANCE(2223);
      END_STATE();
    case 2107:
      if (lookahead == '^') ADVANCE(2224);
      END_STATE();
    case 2108:
      if (lookahead == '^') ADVANCE(2225);
      END_STATE();
    case 2109:
      if (lookahead == '^') ADVANCE(2226);
      END_STATE();
    case 2110:
      if (lookahead == '^') ADVANCE(2227);
      END_STATE();
    case 2111:
      if (lookahead == '^') ADVANCE(2228);
      END_STATE();
    case 2112:
      if (lookahead == '^') ADVANCE(2229);
      END_STATE();
    case 2113:
      if (lookahead == '^') ADVANCE(2230);
      END_STATE();
    case 2114:
      if (lookahead == '^') ADVANCE(2231);
      END_STATE();
    case 2115:
      if (lookahead == '^') ADVANCE(2232);
      END_STATE();
    case 2116:
      if (lookahead == '^') ADVANCE(2233);
      END_STATE();
    case 2117:
      if (lookahead == '^') ADVANCE(2234);
      END_STATE();
    case 2118:
      if (lookahead == '^') ADVANCE(2235);
      END_STATE();
    case 2119:
      if (lookahead == '^') ADVANCE(2236);
      END_STATE();
    case 2120:
      if (lookahead == '^') ADVANCE(2237);
      END_STATE();
    case 2121:
      if (lookahead == '^') ADVANCE(2238);
      END_STATE();
    case 2122:
      if (lookahead == '^') ADVANCE(2239);
      END_STATE();
    case 2123:
      if (lookahead == '^') ADVANCE(2240);
      END_STATE();
    case 2124:
      if (lookahead == '^') ADVANCE(2241);
      END_STATE();
    case 2125:
      if (lookahead == '^') ADVANCE(2242);
      END_STATE();
    case 2126:
      if (lookahead == '^') ADVANCE(2243);
      END_STATE();
    case 2127:
      if (lookahead == '^') ADVANCE(2244);
      END_STATE();
    case 2128:
      if (lookahead == '^') ADVANCE(2245);
      END_STATE();
    case 2129:
      if (lookahead == '^') ADVANCE(2246);
      END_STATE();
    case 2130:
      if (lookahead == '`') ADVANCE(2830);
      END_STATE();
    case 2131:
      if (lookahead == 'd') ADVANCE(2879);
      END_STATE();
    case 2132:
      if (lookahead == 'e') ADVANCE(2133);
      END_STATE();
    case 2133:
      if (lookahead == 'm') ADVANCE(2879);
      END_STATE();
    case 2134:
      if (lookahead == 'o') ADVANCE(2131);
      END_STATE();
    case 2135:
      if (lookahead == 's') ADVANCE(2852);
      END_STATE();
    case 2136:
      if (lookahead == '~') ADVANCE(20);
      END_STATE();
    case 2137:
      if (lookahead == '~') ADVANCE(360);
      END_STATE();
    case 2138:
      if (lookahead == '~') ADVANCE(2444);
      END_STATE();
    case 2139:
      if (lookahead == '~') ADVANCE(2445);
      END_STATE();
    case 2140:
      if (lookahead == '~') SKIP(229);
      END_STATE();
    case 2141:
      if (lookahead == '~') SKIP(462);
      END_STATE();
    case 2142:
      if (lookahead == '~') ADVANCE(2454);
      END_STATE();
    case 2143:
      if (lookahead == '~') ADVANCE(26);
      END_STATE();
    case 2144:
      if (lookahead == '~') ADVANCE(2446);
      END_STATE();
    case 2145:
      if (lookahead == '~') SKIP(230);
      END_STATE();
    case 2146:
      if (lookahead == '~') ADVANCE(2455);
      END_STATE();
    case 2147:
      if (lookahead == '~') ADVANCE(28);
      END_STATE();
    case 2148:
      if (lookahead == '~') ADVANCE(2452);
      END_STATE();
    case 2149:
      if (lookahead == '~') SKIP(37);
      END_STATE();
    case 2150:
      if (lookahead == '~') ADVANCE(2447);
      END_STATE();
    case 2151:
      if (lookahead == '~') ADVANCE(29);
      END_STATE();
    case 2152:
      if (lookahead == '~') ADVANCE(2453);
      END_STATE();
    case 2153:
      if (lookahead == '~') SKIP(119);
      END_STATE();
    case 2154:
      if (lookahead == '~') ADVANCE(2456);
      END_STATE();
    case 2155:
      if (lookahead == '~') SKIP(181);
      END_STATE();
    case 2156:
      if (lookahead == '~') ADVANCE(2457);
      END_STATE();
    case 2157:
      if (lookahead == '~') SKIP(186);
      END_STATE();
    case 2158:
      if (lookahead == '~') ADVANCE(216);
      END_STATE();
    case 2159:
      if (lookahead == '~') ADVANCE(2458);
      END_STATE();
    case 2160:
      if (lookahead == '~') SKIP(188);
      END_STATE();
    case 2161:
      if (lookahead == '~') ADVANCE(222);
      END_STATE();
    case 2162:
      if (lookahead == '~') ADVANCE(2459);
      END_STATE();
    case 2163:
      if (lookahead == '~') SKIP(198);
      END_STATE();
    case 2164:
      if (lookahead == '~') ADVANCE(2460);
      END_STATE();
    case 2165:
      if (lookahead == '~') SKIP(204);
      END_STATE();
    case 2166:
      if (lookahead == '~') ADVANCE(2448);
      END_STATE();
    case 2167:
      if (lookahead == '~') SKIP(206);
      END_STATE();
    case 2168:
      if (lookahead == '~') ADVANCE(282);
      END_STATE();
    case 2169:
      if (lookahead == '~') ADVANCE(2449);
      END_STATE();
    case 2170:
      if (lookahead == '~') ADVANCE(291);
      END_STATE();
    case 2171:
      if (lookahead == '~') ADVANCE(2450);
      END_STATE();
    case 2172:
      if (lookahead == '~') ADVANCE(2451);
      END_STATE();
    case 2173:
      if (lookahead == '~') ADVANCE(307);
      END_STATE();
    case 2174:
      if (lookahead == '~') ADVANCE(313);
      END_STATE();
    case 2175:
      if (lookahead == '~') ADVANCE(326);
      END_STATE();
    case 2176:
      if (lookahead == '~') ADVANCE(43);
      END_STATE();
    case 2177:
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 2178:
      if (lookahead == '~') ADVANCE(57);
      END_STATE();
    case 2179:
      if (lookahead == '~') ADVANCE(64);
      END_STATE();
    case 2180:
      if (lookahead == '~') ADVANCE(74);
      END_STATE();
    case 2181:
      if (lookahead == '~') ADVANCE(80);
      END_STATE();
    case 2182:
      if (lookahead == '~') ADVANCE(90);
      END_STATE();
    case 2183:
      if (lookahead == '~') ADVANCE(239);
      END_STATE();
    case 2184:
      if (lookahead == '~') ADVANCE(98);
      END_STATE();
    case 2185:
      if (lookahead == '~') ADVANCE(107);
      END_STATE();
    case 2186:
      if (lookahead == '~') ADVANCE(116);
      END_STATE();
    case 2187:
      if (lookahead == '~') ADVANCE(129);
      END_STATE();
    case 2188:
      if (lookahead == '~') ADVANCE(248);
      END_STATE();
    case 2189:
      if (lookahead == '~') ADVANCE(139);
      END_STATE();
    case 2190:
      if (lookahead == '~') ADVANCE(149);
      END_STATE();
    case 2191:
      if (lookahead == '~') ADVANCE(268);
      END_STATE();
    case 2192:
      if (lookahead == '~') ADVANCE(159);
      END_STATE();
    case 2193:
      if (lookahead == '~') ADVANCE(258);
      END_STATE();
    case 2194:
      if (lookahead == '~') ADVANCE(169);
      END_STATE();
    case 2195:
      if (lookahead == '~') ADVANCE(179);
      END_STATE();
    case 2196:
      if (lookahead == '~') ADVANCE(182);
      END_STATE();
    case 2197:
      if (lookahead == '~') ADVANCE(184);
      END_STATE();
    case 2198:
      if (lookahead == '~') ADVANCE(190);
      END_STATE();
    case 2199:
      if (lookahead == '~') ADVANCE(196);
      END_STATE();
    case 2200:
      if (lookahead == '~') ADVANCE(200);
      END_STATE();
    case 2201:
      if (lookahead == '~') ADVANCE(202);
      END_STATE();
    case 2202:
      if (lookahead == '~') ADVANCE(363);
      END_STATE();
    case 2203:
      if (lookahead == '~') SKIP(464);
      END_STATE();
    case 2204:
      if (lookahead == '~') ADVANCE(369);
      END_STATE();
    case 2205:
      if (lookahead == '~') SKIP(465);
      END_STATE();
    case 2206:
      if (lookahead == '~') ADVANCE(371);
      END_STATE();
    case 2207:
      if (lookahead == '~') SKIP(468);
      END_STATE();
    case 2208:
      if (lookahead == '~') ADVANCE(375);
      END_STATE();
    case 2209:
      if (lookahead == '~') SKIP(470);
      END_STATE();
    case 2210:
      if (lookahead == '~') ADVANCE(377);
      END_STATE();
    case 2211:
      if (lookahead == '~') SKIP(472);
      END_STATE();
    case 2212:
      if (lookahead == '~') ADVANCE(380);
      END_STATE();
    case 2213:
      if (lookahead == '~') SKIP(475);
      END_STATE();
    case 2214:
      if (lookahead == '~') ADVANCE(383);
      END_STATE();
    case 2215:
      if (lookahead == '~') SKIP(478);
      END_STATE();
    case 2216:
      if (lookahead == '~') ADVANCE(387);
      END_STATE();
    case 2217:
      if (lookahead == '~') SKIP(481);
      END_STATE();
    case 2218:
      if (lookahead == '~') ADVANCE(389);
      END_STATE();
    case 2219:
      if (lookahead == '~') SKIP(484);
      END_STATE();
    case 2220:
      if (lookahead == '~') ADVANCE(392);
      END_STATE();
    case 2221:
      if (lookahead == '~') ADVANCE(394);
      END_STATE();
    case 2222:
      if (lookahead == '~') ADVANCE(395);
      END_STATE();
    case 2223:
      if (lookahead == '~') ADVANCE(397);
      END_STATE();
    case 2224:
      if (lookahead == '~') ADVANCE(400);
      END_STATE();
    case 2225:
      if (lookahead == '~') ADVANCE(402);
      END_STATE();
    case 2226:
      if (lookahead == '~') ADVANCE(404);
      END_STATE();
    case 2227:
      if (lookahead == '~') ADVANCE(406);
      END_STATE();
    case 2228:
      if (lookahead == '~') ADVANCE(407);
      END_STATE();
    case 2229:
      if (lookahead == '~') ADVANCE(409);
      END_STATE();
    case 2230:
      if (lookahead == '~') ADVANCE(412);
      END_STATE();
    case 2231:
      if (lookahead == '~') ADVANCE(415);
      END_STATE();
    case 2232:
      if (lookahead == '~') ADVANCE(418);
      END_STATE();
    case 2233:
      if (lookahead == '~') ADVANCE(421);
      END_STATE();
    case 2234:
      if (lookahead == '~') ADVANCE(424);
      END_STATE();
    case 2235:
      if (lookahead == '~') ADVANCE(427);
      END_STATE();
    case 2236:
      if (lookahead == '~') ADVANCE(430);
      END_STATE();
    case 2237:
      if (lookahead == '~') ADVANCE(433);
      END_STATE();
    case 2238:
      if (lookahead == '~') ADVANCE(436);
      END_STATE();
    case 2239:
      if (lookahead == '~') ADVANCE(439);
      END_STATE();
    case 2240:
      if (lookahead == '~') ADVANCE(442);
      END_STATE();
    case 2241:
      if (lookahead == '~') ADVANCE(445);
      END_STATE();
    case 2242:
      if (lookahead == '~') ADVANCE(448);
      END_STATE();
    case 2243:
      if (lookahead == '~') ADVANCE(451);
      END_STATE();
    case 2244:
      if (lookahead == '~') ADVANCE(454);
      END_STATE();
    case 2245:
      if (lookahead == '~') ADVANCE(457);
      END_STATE();
    case 2246:
      if (lookahead == '~') ADVANCE(460);
      END_STATE();
    case 2247:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2750);
      END_STATE();
    case 2248:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2746);
      END_STATE();
    case 2249:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2747);
      END_STATE();
    case 2250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2749);
      END_STATE();
    case 2251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2750);
      END_STATE();
    case 2252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2748);
      END_STATE();
    case 2253:
      if (eof) ADVANCE(2292);
      if (lookahead == '\n') SKIP(2254);
      if (lookahead == '#') SKIP(2260);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(2253);
      END_STATE();
    case 2254:
      if (eof) ADVANCE(2292);
      if (lookahead == '\n') ADVANCE(2376);
      if (lookahead == '#') SKIP(2260);
      if (lookahead == '%') SKIP(2253);
      if (lookahead == '/') SKIP(2265);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2254);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2256);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(2253);
      END_STATE();
    case 2255:
      if (eof) ADVANCE(2292);
      ADVANCE_MAP(
        '\n', 2377,
        '!', 2517,
        '#', 486,
        '%', 362,
        '\'', 2642,
        '(', 2529,
        '-', 2752,
        '/', 717,
        '0', 2744,
        ':', 962,
        ';', 2566,
        '?', 963,
        '[', 2932,
        '\\', 2639,
        '_', 2688,
        '{', 598,
        '\t', 208,
        ' ', 208,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(2255);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2688);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2477);
      END_STATE();
    case 2256:
      if (eof) ADVANCE(2292);
      if (lookahead == '\n') ADVANCE(2425);
      if (lookahead == '%') SKIP(2257);
      if (lookahead == '/') SKIP(2265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2256);
      END_STATE();
    case 2257:
      if (eof) ADVANCE(2292);
      if (lookahead == '#') SKIP(2260);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(2253);
      END_STATE();
    case 2258:
      if (eof) ADVANCE(2292);
      if (lookahead == '#') SKIP(2261);
      if (lookahead == '*') SKIP(2273);
      if (set_contains(aux_sym_term_token1_character_set_3, 9, lookahead)) SKIP(2258);
      END_STATE();
    case 2259:
      if (eof) ADVANCE(2292);
      if (lookahead == '#') SKIP(2261);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(2258);
      END_STATE();
    case 2260:
      if (eof) ADVANCE(2292);
      if (lookahead == '$') SKIP(2262);
      END_STATE();
    case 2261:
      if (eof) ADVANCE(2292);
      if (lookahead == '$') SKIP(2263);
      END_STATE();
    case 2262:
      if (eof) ADVANCE(2292);
      if (lookahead == '&') SKIP(2264);
      END_STATE();
    case 2263:
      if (eof) ADVANCE(2292);
      if (lookahead == '&') SKIP(2266);
      END_STATE();
    case 2264:
      if (eof) ADVANCE(2292);
      if (lookahead == '*') SKIP(2267);
      END_STATE();
    case 2265:
      if (eof) ADVANCE(2292);
      if (lookahead == '*') SKIP(2259);
      END_STATE();
    case 2266:
      if (eof) ADVANCE(2292);
      if (lookahead == '*') SKIP(2268);
      END_STATE();
    case 2267:
      if (eof) ADVANCE(2292);
      if (lookahead == '+') SKIP(2269);
      END_STATE();
    case 2268:
      if (eof) ADVANCE(2292);
      if (lookahead == '+') SKIP(2270);
      END_STATE();
    case 2269:
      if (eof) ADVANCE(2292);
      if (lookahead == '-') SKIP(2271);
      END_STATE();
    case 2270:
      if (eof) ADVANCE(2292);
      if (lookahead == '-') SKIP(2272);
      END_STATE();
    case 2271:
      if (eof) ADVANCE(2292);
      if (lookahead == '.') SKIP(2274);
      END_STATE();
    case 2272:
      if (eof) ADVANCE(2292);
      if (lookahead == '.') SKIP(2275);
      END_STATE();
    case 2273:
      if (eof) ADVANCE(2292);
      if (lookahead == '/') SKIP(2256);
      END_STATE();
    case 2274:
      if (eof) ADVANCE(2292);
      if (lookahead == '/') SKIP(2276);
      END_STATE();
    case 2275:
      if (eof) ADVANCE(2292);
      if (lookahead == '/') SKIP(2277);
      END_STATE();
    case 2276:
      if (eof) ADVANCE(2292);
      if (lookahead == ':') SKIP(2278);
      END_STATE();
    case 2277:
      if (eof) ADVANCE(2292);
      if (lookahead == ':') SKIP(2279);
      END_STATE();
    case 2278:
      if (eof) ADVANCE(2292);
      if (lookahead == '<') SKIP(2280);
      END_STATE();
    case 2279:
      if (eof) ADVANCE(2292);
      if (lookahead == '<') SKIP(2281);
      END_STATE();
    case 2280:
      if (eof) ADVANCE(2292);
      if (lookahead == '=') SKIP(2282);
      END_STATE();
    case 2281:
      if (eof) ADVANCE(2292);
      if (lookahead == '=') SKIP(2283);
      END_STATE();
    case 2282:
      if (eof) ADVANCE(2292);
      if (lookahead == '>') SKIP(2284);
      END_STATE();
    case 2283:
      if (eof) ADVANCE(2292);
      if (lookahead == '>') SKIP(2285);
      END_STATE();
    case 2284:
      if (eof) ADVANCE(2292);
      if (lookahead == '?') SKIP(2286);
      END_STATE();
    case 2285:
      if (eof) ADVANCE(2292);
      if (lookahead == '?') SKIP(2287);
      END_STATE();
    case 2286:
      if (eof) ADVANCE(2292);
      if (lookahead == '@') SKIP(2288);
      END_STATE();
    case 2287:
      if (eof) ADVANCE(2292);
      if (lookahead == '@') SKIP(2289);
      END_STATE();
    case 2288:
      if (eof) ADVANCE(2292);
      if (lookahead == '^') SKIP(2290);
      END_STATE();
    case 2289:
      if (eof) ADVANCE(2292);
      if (lookahead == '^') SKIP(2291);
      END_STATE();
    case 2290:
      if (eof) ADVANCE(2292);
      if (lookahead == '~') SKIP(2253);
      END_STATE();
    case 2291:
      if (eof) ADVANCE(2292);
      if (lookahead == '~') SKIP(2258);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2312);
      if (lookahead == '\n') ADVANCE(2328);
      if (lookahead == ' ') ADVANCE(2294);
      if (lookahead == '%') ADVANCE(2435);
      if (lookahead == '/') SKIP(713);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2313,
        '\n', 2329,
        ' ', 2295,
        '!', 2522,
        '"', 2664,
        '#', 519,
        '%', 2432,
        '\'', 2654,
        '(', 2547,
        ')', 2560,
        ',', 2564,
      );
      if (lookahead == '/') SKIP(713);
      if (lookahead == ';') ADVANCE(2588);
      if (lookahead == '[') ADVANCE(2601);
      if (lookahead == '\\') ADVANCE(2632);
      if (lookahead == ']') ADVANCE(2605);
      if (lookahead == '_') ADVANCE(2467);
      if (lookahead == '`') ADVANCE(2669);
      if (lookahead == '{') ADVANCE(2609);
      if (lookahead == '|') ADVANCE(2617);
      if (lookahead == '}') ADVANCE(2613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2515);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2475);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2499);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2314);
      if (lookahead == '\n') ADVANCE(2330);
      if (lookahead == ' ') ADVANCE(2296);
      if (lookahead == '%') ADVANCE(2441);
      if (lookahead == '/') ADVANCE(715);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2315,
        '\n', 2331,
        ' ', 2297,
        '!', 2523,
        '"', 2665,
        '#', 520,
        '%', 2433,
        '\'', 2655,
        '(', 2548,
        ')', 2561,
        ',', 2565,
        '/', 715,
        ';', 2589,
        '[', 2602,
        '\\', 2633,
        ']', 2606,
        '_', 2468,
        '`', 2670,
        '{', 2610,
        '|', 2618,
        '}', 2614,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2516);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2476);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2500);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') SKIP(5);
      if (lookahead == '\n') ADVANCE(2332);
      if (lookahead == ' ') ADVANCE(2298);
      if (lookahead == '!') ADVANCE(2519);
      if (lookahead == '"') ADVANCE(2662);
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == '%') ADVANCE(2426);
      if (lookahead == '\'') ADVANCE(2645);
      if (lookahead == '(') ADVANCE(2532);
      if (lookahead == ')') ADVANCE(2559);
      if (lookahead == ',') ADVANCE(2563);
      if (lookahead == '/') SKIP(727);
      if (lookahead == ';') ADVANCE(2569);
      if (lookahead == '[') ADVANCE(2600);
      if (lookahead == '\\') ADVANCE(2622);
      if (lookahead == ']') ADVANCE(2604);
      if (lookahead == '_') ADVANCE(2462);
      if (lookahead == '`') ADVANCE(2667);
      if (lookahead == '{') ADVANCE(2608);
      if (lookahead == '|') ADVANCE(2616);
      if (lookahead == '}') ADVANCE(2612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2510);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2470);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2480);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2316,
        '\n', 2333,
        ' ', 2299,
        '#', 522,
        '%', 2427,
        '(', 2533,
        ',', 2804,
        '/', 2901,
        ';', 2570,
        '\\', 39,
        '_', 2463,
        '`', 38,
        'i', 2483,
        'm', 2482,
        'r', 2481,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2484);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2471);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2317,
        '\n', 2334,
        ' ', 2300,
        '#', 526,
        '%', 2428,
        '(', 2534,
        ',', 2805,
        '/', 2903,
        ';', 2571,
        '\\', 2623,
        '`', 44,
        'i', 50,
        'm', 49,
        'r', 47,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(51);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2318,
        '\n', 2335,
        ' ', 2301,
        '#', 531,
        '%', 2429,
        '\'', 2646,
        '(', 2537,
        ',', 2808,
        '/', 2905,
        ';', 2574,
        '\\', 67,
        '`', 66,
        'i', 73,
        'm', 72,
        'r', 70,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(74);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2319,
        '\n', 2336,
        ' ', 2302,
        '#', 535,
        '%', 2430,
        ',', 2810,
        '/', 2907,
        ';', 2576,
        '\\', 83,
        '`', 82,
        'i', 89,
        'm', 88,
        'r', 86,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(90);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2320);
      if (lookahead == '\n') ADVANCE(2337);
      if (lookahead == ' ') ADVANCE(2303);
      if (lookahead == '#') SKIP(585);
      if (lookahead == '%') ADVANCE(2431);
      if (lookahead == '/') ADVANCE(728);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(181);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2321);
      if (lookahead == '\n') ADVANCE(2338);
      if (lookahead == ' ') ADVANCE(2304);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == '/') ADVANCE(2901);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(anon_sym_SPACE);
      ADVANCE_MAP(
        '\t', 2322,
        '\n', 2339,
        ' ', 2305,
        '#', 537,
        '%', 2434,
        '(', 2549,
        ',', 2823,
        '/', 2909,
        ';', 2590,
        '\\', 232,
        '`', 231,
        'i', 238,
        'm', 237,
        'r', 235,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2323);
      if (lookahead == '\n') ADVANCE(2340);
      if (lookahead == ' ') ADVANCE(2306);
      if (lookahead == '%') ADVANCE(2437);
      if (lookahead == '/') ADVANCE(2903);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2324);
      if (lookahead == '\n') ADVANCE(2341);
      if (lookahead == ' ') ADVANCE(2307);
      if (lookahead == '%') ADVANCE(2438);
      if (lookahead == '/') ADVANCE(2905);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2325);
      if (lookahead == '\n') ADVANCE(2342);
      if (lookahead == ' ') ADVANCE(2308);
      if (lookahead == '%') ADVANCE(2439);
      if (lookahead == '/') ADVANCE(2907);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2326);
      if (lookahead == '\n') ADVANCE(2343);
      if (lookahead == ' ') ADVANCE(2309);
      if (lookahead == '%') ADVANCE(2440);
      if (lookahead == '/') ADVANCE(2909);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(2327);
      if (lookahead == '\n') ADVANCE(2344);
      if (lookahead == ' ') ADVANCE(2310);
      if (lookahead == '%') ADVANCE(2443);
      if (lookahead == '/') ADVANCE(728);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(2351);
      if (lookahead == ' ') ADVANCE(2311);
      if (lookahead == '%') ADVANCE(2442);
      if (lookahead == '/') SKIP(727);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2312);
      if (lookahead == '\n') ADVANCE(2328);
      if (lookahead == ' ') ADVANCE(2294);
      if (lookahead == '%') ADVANCE(2435);
      if (lookahead == '/') SKIP(713);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2313,
        '\n', 2329,
        ' ', 2295,
        '!', 2522,
        '"', 2664,
        '#', 519,
        '%', 2432,
        '\'', 2654,
        '(', 2547,
        ')', 2560,
        ',', 2564,
      );
      if (lookahead == '/') SKIP(713);
      if (lookahead == ';') ADVANCE(2588);
      if (lookahead == '[') ADVANCE(2601);
      if (lookahead == '\\') ADVANCE(2632);
      if (lookahead == ']') ADVANCE(2605);
      if (lookahead == '_') ADVANCE(2467);
      if (lookahead == '`') ADVANCE(2669);
      if (lookahead == '{') ADVANCE(2609);
      if (lookahead == '|') ADVANCE(2617);
      if (lookahead == '}') ADVANCE(2613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2515);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2475);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2499);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2314);
      if (lookahead == '\n') ADVANCE(2330);
      if (lookahead == ' ') ADVANCE(2296);
      if (lookahead == '%') ADVANCE(2441);
      if (lookahead == '/') ADVANCE(715);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2315,
        '\n', 2331,
        ' ', 2297,
        '!', 2523,
        '"', 2665,
        '#', 520,
        '%', 2433,
        '\'', 2655,
        '(', 2548,
        ')', 2561,
        ',', 2565,
        '/', 715,
        ';', 2589,
        '[', 2602,
        '\\', 2633,
        ']', 2606,
        '_', 2468,
        '`', 2670,
        '{', 2610,
        '|', 2618,
        '}', 2614,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2516);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2476);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2500);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2316,
        '\n', 2333,
        ' ', 2299,
        '#', 522,
        '%', 2427,
        '(', 2533,
        ',', 2804,
        '/', 2901,
        ';', 2570,
        '\\', 39,
        '_', 2463,
        '`', 38,
        'i', 2483,
        'm', 2482,
        'r', 2481,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2484);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2471);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2317,
        '\n', 2334,
        ' ', 2300,
        '#', 526,
        '%', 2428,
        '(', 2534,
        ',', 2805,
        '/', 2903,
        ';', 2571,
        '\\', 2623,
        '`', 44,
        'i', 50,
        'm', 49,
        'r', 47,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(51);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2318,
        '\n', 2335,
        ' ', 2301,
        '#', 531,
        '%', 2429,
        '\'', 2646,
        '(', 2537,
        ',', 2808,
        '/', 2905,
        ';', 2574,
        '\\', 67,
        '`', 66,
        'i', 73,
        'm', 72,
        'r', 70,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(74);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2319,
        '\n', 2336,
        ' ', 2302,
        '#', 535,
        '%', 2430,
        ',', 2810,
        '/', 2907,
        ';', 2576,
        '\\', 83,
        '`', 82,
        'i', 89,
        'm', 88,
        'r', 86,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(90);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2320);
      if (lookahead == '\n') ADVANCE(2337);
      if (lookahead == ' ') ADVANCE(2303);
      if (lookahead == '#') SKIP(585);
      if (lookahead == '%') ADVANCE(2431);
      if (lookahead == '/') ADVANCE(728);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(181);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2321);
      if (lookahead == '\n') ADVANCE(2338);
      if (lookahead == ' ') ADVANCE(2304);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == '/') ADVANCE(2901);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(anon_sym_TAB);
      ADVANCE_MAP(
        '\t', 2322,
        '\n', 2339,
        ' ', 2305,
        '#', 537,
        '%', 2434,
        '(', 2549,
        ',', 2823,
        '/', 2909,
        ';', 2590,
        '\\', 232,
        '`', 231,
        'i', 238,
        'm', 237,
        'r', 235,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2323);
      if (lookahead == '\n') ADVANCE(2340);
      if (lookahead == ' ') ADVANCE(2306);
      if (lookahead == '%') ADVANCE(2437);
      if (lookahead == '/') ADVANCE(2903);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2324);
      if (lookahead == '\n') ADVANCE(2341);
      if (lookahead == ' ') ADVANCE(2307);
      if (lookahead == '%') ADVANCE(2438);
      if (lookahead == '/') ADVANCE(2905);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2325);
      if (lookahead == '\n') ADVANCE(2342);
      if (lookahead == ' ') ADVANCE(2308);
      if (lookahead == '%') ADVANCE(2439);
      if (lookahead == '/') ADVANCE(2907);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2326);
      if (lookahead == '\n') ADVANCE(2343);
      if (lookahead == ' ') ADVANCE(2309);
      if (lookahead == '%') ADVANCE(2440);
      if (lookahead == '/') ADVANCE(2909);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(2327);
      if (lookahead == '\n') ADVANCE(2344);
      if (lookahead == ' ') ADVANCE(2310);
      if (lookahead == '%') ADVANCE(2443);
      if (lookahead == '/') ADVANCE(728);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2312);
      if (lookahead == '\n') ADVANCE(2328);
      if (lookahead == ' ') ADVANCE(2294);
      if (lookahead == '%') ADVANCE(2435);
      if (lookahead == '/') SKIP(713);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2313,
        '\n', 2329,
        ' ', 2295,
        '!', 2522,
        '"', 2664,
        '#', 519,
        '%', 2432,
        '\'', 2654,
        '(', 2547,
        ')', 2560,
        ',', 2564,
      );
      if (lookahead == '/') SKIP(713);
      if (lookahead == ';') ADVANCE(2588);
      if (lookahead == '[') ADVANCE(2601);
      if (lookahead == '\\') ADVANCE(2632);
      if (lookahead == ']') ADVANCE(2605);
      if (lookahead == '_') ADVANCE(2467);
      if (lookahead == '`') ADVANCE(2669);
      if (lookahead == '{') ADVANCE(2609);
      if (lookahead == '|') ADVANCE(2617);
      if (lookahead == '}') ADVANCE(2613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2515);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2475);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2499);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2314);
      if (lookahead == '\n') ADVANCE(2330);
      if (lookahead == ' ') ADVANCE(2296);
      if (lookahead == '%') ADVANCE(2441);
      if (lookahead == '/') ADVANCE(715);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2315,
        '\n', 2331,
        ' ', 2297,
        '!', 2523,
        '"', 2665,
        '#', 520,
        '%', 2433,
        '\'', 2655,
        '(', 2548,
        ')', 2561,
        ',', 2565,
        '/', 715,
        ';', 2589,
        '[', 2602,
        '\\', 2633,
        ']', 2606,
        '_', 2468,
        '`', 2670,
        '{', 2610,
        '|', 2618,
        '}', 2614,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2516);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2476);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2500);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') SKIP(5);
      if (lookahead == '\n') ADVANCE(2332);
      if (lookahead == ' ') ADVANCE(2298);
      if (lookahead == '!') ADVANCE(2519);
      if (lookahead == '"') ADVANCE(2662);
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == '%') ADVANCE(2426);
      if (lookahead == '\'') ADVANCE(2645);
      if (lookahead == '(') ADVANCE(2532);
      if (lookahead == ')') ADVANCE(2559);
      if (lookahead == ',') ADVANCE(2563);
      if (lookahead == '/') SKIP(727);
      if (lookahead == ';') ADVANCE(2569);
      if (lookahead == '[') ADVANCE(2600);
      if (lookahead == '\\') ADVANCE(2622);
      if (lookahead == ']') ADVANCE(2604);
      if (lookahead == '_') ADVANCE(2462);
      if (lookahead == '`') ADVANCE(2667);
      if (lookahead == '{') ADVANCE(2608);
      if (lookahead == '|') ADVANCE(2616);
      if (lookahead == '}') ADVANCE(2612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2510);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2470);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2480);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2316,
        '\n', 2333,
        ' ', 2299,
        '#', 522,
        '%', 2427,
        '(', 2533,
        ',', 2804,
        '/', 2901,
        ';', 2570,
        '\\', 39,
        '_', 2463,
        '`', 38,
        'i', 2483,
        'm', 2482,
        'r', 2481,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2511);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2484);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2471);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2317,
        '\n', 2334,
        ' ', 2300,
        '#', 526,
        '%', 2428,
        '(', 2534,
        ',', 2805,
        '/', 2903,
        ';', 2571,
        '\\', 2623,
        '`', 44,
        'i', 50,
        'm', 49,
        'r', 47,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(51);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2318,
        '\n', 2335,
        ' ', 2301,
        '#', 531,
        '%', 2429,
        '\'', 2646,
        '(', 2537,
        ',', 2808,
        '/', 2905,
        ';', 2574,
        '\\', 67,
        '`', 66,
        'i', 73,
        'm', 72,
        'r', 70,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(74);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2319,
        '\n', 2336,
        ' ', 2302,
        '#', 535,
        '%', 2430,
        ',', 2810,
        '/', 2907,
        ';', 2576,
        '\\', 83,
        '`', 82,
        'i', 89,
        'm', 88,
        'r', 86,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(90);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2320);
      if (lookahead == '\n') ADVANCE(2337);
      if (lookahead == ' ') ADVANCE(2303);
      if (lookahead == '#') SKIP(585);
      if (lookahead == '%') ADVANCE(2431);
      if (lookahead == '/') ADVANCE(728);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(181);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2321);
      if (lookahead == '\n') ADVANCE(2338);
      if (lookahead == ' ') ADVANCE(2304);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == '/') ADVANCE(2901);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\t', 2322,
        '\n', 2339,
        ' ', 2305,
        '#', 537,
        '%', 2434,
        '(', 2549,
        ',', 2823,
        '/', 2909,
        ';', 2590,
        '\\', 232,
        '`', 231,
        'i', 238,
        'm', 237,
        'r', 235,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(239);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2323);
      if (lookahead == '\n') ADVANCE(2340);
      if (lookahead == ' ') ADVANCE(2306);
      if (lookahead == '%') ADVANCE(2437);
      if (lookahead == '/') ADVANCE(2903);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2324);
      if (lookahead == '\n') ADVANCE(2341);
      if (lookahead == ' ') ADVANCE(2307);
      if (lookahead == '%') ADVANCE(2438);
      if (lookahead == '/') ADVANCE(2905);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2325);
      if (lookahead == '\n') ADVANCE(2342);
      if (lookahead == ' ') ADVANCE(2308);
      if (lookahead == '%') ADVANCE(2439);
      if (lookahead == '/') ADVANCE(2907);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2326);
      if (lookahead == '\n') ADVANCE(2343);
      if (lookahead == ' ') ADVANCE(2309);
      if (lookahead == '%') ADVANCE(2440);
      if (lookahead == '/') ADVANCE(2909);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(2327);
      if (lookahead == '\n') ADVANCE(2344);
      if (lookahead == ' ') ADVANCE(2310);
      if (lookahead == '%') ADVANCE(2443);
      if (lookahead == '/') ADVANCE(728);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2345);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '/') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2346,
        '#', 490,
        '%', 20,
        '\'', 2643,
        '(', 2530,
        '/', 716,
        ';', 2567,
        '\\', 2620,
        '\t', 21,
        ' ', 21,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2478);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(20);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2347,
        '!', 2518,
        '#', 495,
        '%', 26,
        '\'', 2644,
        '(', 2531,
        '/', 717,
        '0', 2690,
        ';', 2568,
        '[', 2924,
        '\\', 2621,
        '_', 2680,
        '{', 31,
        '\t', 27,
        ' ', 27,
        '"', 26,
        ')', 26,
        ',', 26,
        ']', 26,
        '`', 26,
        '|', 26,
        '}', 26,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2348,
        '!', 2518,
        '#', 495,
        '%', 209,
        '\'', 2644,
        '(', 2531,
        '/', 720,
        '0', 2690,
        ';', 2568,
        '[', 2924,
        '\\', 2621,
        ']', 2776,
        '_', 2680,
        '{', 31,
        '\t', 32,
        ' ', 32,
        '"', 26,
        ')', 26,
        ',', 26,
        '`', 26,
        '|', 26,
        '}', 26,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2349,
        '!', 2518,
        '#', 495,
        '%', 271,
        '\'', 2644,
        '(', 2531,
        '/', 721,
        '0', 2690,
        ';', 2568,
        '[', 2924,
        '\\', 2621,
        '_', 2680,
        '{', 31,
        '}', 2786,
        '\t', 33,
        ' ', 33,
        '"', 26,
        ')', 26,
        ',', 26,
        ']', 26,
        '`', 26,
        '|', 26,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2479);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2350,
        '!', 2520,
        '#', 500,
        '%', 272,
        '\'', 2652,
        '(', 2545,
        '/', 722,
        '0', 2702,
        ';', 2586,
        '[', 2925,
        '\\', 2630,
        ']', 2778,
        '_', 2681,
        '{', 34,
        '}', 2788,
        '\t', 35,
        ' ', 35,
        '"', 216,
        ')', 216,
        ',', 216,
        '`', 216,
        '|', 216,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2497);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2351);
      if (lookahead == ' ') ADVANCE(2311);
      if (lookahead == '%') ADVANCE(2442);
      if (lookahead == '/') SKIP(727);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2352,
        '#', 527,
        '%', 57,
        '(', 2535,
        ',', 2806,
        '/', 2902,
        ';', 2572,
        '\\', 53,
        ']', 2934,
        '_', 2464,
        '`', 52,
        'i', 2487,
        'm', 2486,
        'r', 2485,
        '|', 2948,
        '\t', 58,
        ' ', 58,
        '!', 57,
        '"', 57,
        '\'', 57,
        ')', 57,
        '[', 57,
        '{', 57,
        '}', 57,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2512);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2488);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2472);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2353,
        '#', 529,
        '%', 64,
        '(', 2536,
        ',', 2807,
        '/', 2904,
        ';', 2573,
        '\\', 60,
        ']', 2935,
        '_', 2465,
        '`', 59,
        'i', 2491,
        'm', 2490,
        'r', 2489,
        '\t', 65,
        ' ', 65,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '[' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2513);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2492);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2473);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2354,
        '#', 533,
        '%', 80,
        '(', 2538,
        ')', 2796,
        ',', 2809,
        '/', 2906,
        ';', 2575,
        '\\', 76,
        '_', 2466,
        '`', 75,
        'i', 2495,
        'm', 2494,
        'r', 2493,
        '\t', 81,
        ' ', 81,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2514);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2496);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2474);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2355,
        '#', 541,
        '%', 98,
        '(', 2539,
        ',', 2811,
        '/', 2908,
        ';', 2577,
        '\\', 2624,
        ']', 2936,
        '`', 91,
        'i', 97,
        'm', 96,
        'r', 94,
        '|', 2949,
        '\t', 99,
        ' ', 99,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(98);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2356,
        '#', 544,
        '%', 107,
        '(', 2540,
        ')', 2797,
        ',', 2812,
        '/', 2910,
        ';', 2578,
        '\\', 2625,
        '`', 100,
        'i', 106,
        'm', 105,
        'r', 103,
        '\t', 108,
        ' ', 108,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(107);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2357,
        '#', 547,
        '%', 116,
        '(', 2541,
        ',', 2813,
        '/', 2911,
        ';', 2579,
        '\\', 2626,
        ']', 2937,
        '`', 109,
        'i', 115,
        'm', 114,
        'r', 112,
        '\t', 117,
        ' ', 117,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(116);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2358);
      if (lookahead == '%') SKIP(467);
      if (lookahead == '/') SKIP(729);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2359);
      if (lookahead == '"') ADVANCE(2663);
      if (lookahead == '#') SKIP(583);
      if (lookahead == '%') SKIP(119);
      if (lookahead == '\'') ADVANCE(2647);
      if (lookahead == '/') SKIP(729);
      if (lookahead == '\\') ADVANCE(2627);
      if (lookahead == '`') ADVANCE(2668);
      if (lookahead == 'a') ADVANCE(2754);
      if (lookahead == 'b') ADVANCE(2756);
      if (lookahead == 'f') ADVANCE(2760);
      if (lookahead == 'n') ADVANCE(2764);
      if (lookahead == 'r') ADVANCE(2758);
      if (lookahead == 't') ADVANCE(2762);
      if (lookahead == 'v') ADVANCE(2766);
      if (lookahead == 'x') ADVANCE(2771);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2768);
      if (lookahead == '!' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(119);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2360,
        '#', 548,
        '%', 129,
        '\'', 2648,
        '(', 2542,
        ',', 2814,
        '/', 2912,
        ';', 2580,
        '\\', 122,
        ']', 2938,
        '`', 121,
        'i', 128,
        'm', 127,
        'r', 125,
        '|', 2950,
        '\t', 130,
        ' ', 130,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(129);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2361,
        '#', 552,
        '%', 139,
        '\'', 2649,
        '(', 2543,
        ')', 2798,
        ',', 2815,
        '/', 2914,
        ';', 2581,
        '\\', 132,
        '`', 131,
        'i', 138,
        'm', 137,
        'r', 135,
        '\t', 140,
        ' ', 140,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(139);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2362,
        '#', 554,
        '%', 149,
        '\'', 2650,
        '(', 2544,
        ',', 2816,
        '/', 2915,
        ';', 2582,
        '\\', 142,
        ']', 2939,
        '`', 141,
        'i', 148,
        'm', 147,
        'r', 145,
        '\t', 150,
        ' ', 150,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(149);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2363,
        '#', 558,
        '%', 159,
        ',', 2817,
        '/', 2917,
        ';', 2583,
        '\\', 152,
        ']', 2940,
        '`', 151,
        'i', 158,
        'm', 157,
        'r', 155,
        '|', 2951,
        '\t', 160,
        ' ', 160,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(159);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2364,
        '#', 562,
        '%', 169,
        ',', 2818,
        '/', 2919,
        ';', 2584,
        '\\', 162,
        ']', 2941,
        '`', 161,
        'i', 168,
        'm', 167,
        'r', 165,
        '\t', 170,
        ' ', 170,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(169);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2365,
        '#', 564,
        '%', 179,
        ')', 2799,
        ',', 2819,
        '/', 2920,
        ';', 2585,
        '\\', 172,
        '`', 171,
        'i', 178,
        'm', 177,
        'r', 175,
        '\t', 180,
        ' ', 180,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(179);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2366,
        '#', 566,
        '%', 182,
        ',', 2820,
        '/', 735,
        ']', 2942,
        '|', 2952,
        '\t', 183,
        ' ', 183,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(182);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2367,
        '#', 568,
        '%', 184,
        ')', 2800,
        ',', 2821,
        '/', 736,
        '\t', 185,
        ' ', 185,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(184);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2368);
      if (lookahead == '#') SKIP(587);
      if (lookahead == '%') SKIP(186);
      if (lookahead == '/') SKIP(730);
      if (lookahead == '\\') ADVANCE(2628);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2769);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(186);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2369);
      if (lookahead == '#') SKIP(589);
      if (lookahead == '%') SKIP(188);
      if (lookahead == '/') SKIP(731);
      if (lookahead == '\\') ADVANCE(2629);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2773);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(188);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2370,
        '#', 570,
        '%', 190,
        ',', 2822,
        '/', 737,
        ']', 2943,
        '\t', 191,
        ' ', 191,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(190);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2371);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '0') ADVANCE(2696);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(197);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2699);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(196);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2372);
      if (lookahead == '#') SKIP(591);
      if (lookahead == '%') SKIP(198);
      if (lookahead == '/') SKIP(732);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2774);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('G' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(198);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2373);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '%') ADVANCE(200);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == ']') ADVANCE(2944);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(200);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2374);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == ')') ADVANCE(2801);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(202);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2375);
      if (lookahead == '#') SKIP(593);
      if (lookahead == '%') SKIP(204);
      if (lookahead == '\'') ADVANCE(2651);
      if (lookahead == '/') SKIP(733);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(205);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(204);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2376);
      if (lookahead == '#') SKIP(595);
      if (lookahead == '%') SKIP(206);
      if (lookahead == '/') SKIP(734);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(207);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) SKIP(206);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2377);
      if (lookahead == '%') ADVANCE(362);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2378,
        '!', 2525,
        '#', 509,
        '%', 291,
        '\'', 2657,
        '(', 2554,
        '/', 723,
        '0', 2720,
        ';', 2595,
        '[', 2928,
        '\\', 2635,
        '_', 2684,
        '{', 293,
        '\t', 210,
        ' ', 210,
        '"', 291,
        ')', 291,
        ',', 291,
        ']', 291,
        '`', 291,
        '|', 291,
        '}', 291,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2379,
        '!', 2520,
        '#', 500,
        '%', 216,
        '\'', 2652,
        '(', 2545,
        '/', 720,
        '0', 2702,
        ';', 2586,
        '[', 2925,
        '\\', 2630,
        ']', 2778,
        '_', 2681,
        '{', 34,
        '\t', 224,
        ' ', 224,
        '"', 216,
        ')', 216,
        ',', 216,
        '`', 216,
        '|', 216,
        '}', 216,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2497);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2380,
        '!', 2521,
        '#', 501,
        '%', 222,
        '\'', 2653,
        '(', 2546,
        '/', 721,
        '0', 2708,
        ';', 2587,
        '[', 2926,
        '\\', 2631,
        '_', 2682,
        '{', 217,
        '}', 2789,
        '\t', 226,
        ' ', 226,
        '"', 222,
        ')', 222,
        ',', 222,
        ']', 222,
        '`', 222,
        '|', 222,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2498);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2381,
        '!', 2521,
        '#', 501,
        '%', 273,
        '\'', 2653,
        '(', 2546,
        '/', 722,
        '0', 2708,
        ';', 2587,
        '[', 2926,
        '\\', 2631,
        ']', 2779,
        '_', 2682,
        '{', 217,
        '}', 2789,
        '\t', 228,
        ' ', 228,
        '"', 222,
        ')', 222,
        ',', 222,
        '`', 222,
        '|', 222,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2682);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2498);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2382,
        '#', 550,
        '%', 248,
        '(', 2550,
        ',', 2824,
        '/', 2913,
        ';', 2591,
        '\\', 241,
        ']', 2945,
        '`', 240,
        'i', 247,
        'm', 246,
        'r', 244,
        '|', 2953,
        '\t', 249,
        ' ', 249,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(248);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2383,
        '#', 560,
        '%', 258,
        '(', 2551,
        ')', 2802,
        ',', 2825,
        '/', 2918,
        ';', 2592,
        '\\', 251,
        '`', 250,
        'i', 257,
        'm', 256,
        'r', 254,
        '\t', 259,
        ' ', 259,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(258);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2384,
        '#', 556,
        '%', 268,
        '(', 2552,
        ',', 2826,
        '/', 2916,
        ';', 2593,
        '\\', 261,
        ']', 2946,
        '`', 260,
        'i', 267,
        'm', 266,
        'r', 264,
        '\t', 269,
        ' ', 269,
      );
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(268);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2385);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2386,
        '!', 2525,
        '#', 509,
        '%', 301,
        '\'', 2657,
        '(', 2554,
        '/', 724,
        '0', 2720,
        ';', 2595,
        '[', 2928,
        '\\', 2635,
        ']', 2781,
        '_', 2684,
        '{', 293,
        '\t', 274,
        ' ', 274,
        '"', 291,
        ')', 291,
        ',', 291,
        '`', 291,
        '|', 291,
        '}', 291,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2387,
        '!', 2525,
        '#', 509,
        '%', 317,
        '\'', 2657,
        '(', 2554,
        '/', 725,
        '0', 2720,
        ';', 2595,
        '[', 2928,
        '\\', 2635,
        '_', 2684,
        '{', 293,
        '}', 2791,
        '\t', 275,
        ' ', 275,
        '"', 291,
        ')', 291,
        ',', 291,
        ']', 291,
        '`', 291,
        '|', 291,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2684);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2502);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2388,
        '!', 2524,
        '#', 505,
        '%', 282,
        '\'', 2656,
        '(', 2553,
        '/', 722,
        '0', 2714,
        ';', 2594,
        '[', 2927,
        '\\', 2634,
        ']', 2780,
        '_', 2683,
        '{', 277,
        '}', 2790,
        '\t', 285,
        ' ', 285,
        '"', 282,
        ')', 282,
        ',', 282,
        '`', 282,
        '|', 282,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2683);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2501);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2389);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == '/') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2390,
        '!', 2526,
        '#', 512,
        '%', 307,
        '\'', 2658,
        '(', 2555,
        '/', 724,
        '0', 2726,
        ';', 2596,
        '[', 2929,
        '\\', 2636,
        ']', 2782,
        '_', 2685,
        '{', 298,
        '\t', 295,
        ' ', 295,
        '"', 307,
        ')', 307,
        ',', 307,
        '`', 307,
        '|', 307,
        '}', 307,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2503);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2391,
        '!', 2527,
        '#', 513,
        '%', 313,
        '\'', 2659,
        '(', 2556,
        '/', 725,
        '0', 2732,
        ';', 2597,
        '[', 2930,
        '\\', 2637,
        '_', 2686,
        '{', 308,
        '}', 2793,
        '\t', 297,
        ' ', 297,
        '"', 313,
        ')', 313,
        ',', 313,
        ']', 313,
        '`', 313,
        '|', 313,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2504);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2392,
        '!', 2526,
        '#', 512,
        '%', 318,
        '\'', 2658,
        '(', 2555,
        '/', 726,
        '0', 2726,
        ';', 2596,
        '[', 2929,
        '\\', 2636,
        ']', 2782,
        '_', 2685,
        '{', 298,
        '}', 2792,
        '\t', 299,
        ' ', 299,
        '"', 307,
        ')', 307,
        ',', 307,
        '`', 307,
        '|', 307,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2685);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2503);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2393);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2394,
        '!', 2527,
        '#', 513,
        '%', 319,
        '\'', 2659,
        '(', 2556,
        '/', 726,
        '0', 2732,
        ';', 2597,
        '[', 2930,
        '\\', 2637,
        ']', 2783,
        '_', 2686,
        '{', 308,
        '}', 2793,
        '\t', 315,
        ' ', 315,
        '"', 313,
        ')', 313,
        ',', 313,
        '`', 313,
        '|', 313,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2686);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2504);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2395);
      if (lookahead == '%') ADVANCE(382);
      if (lookahead == '/') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(anon_sym_LF);
      ADVANCE_MAP(
        '\n', 2396,
        '!', 2528,
        '#', 517,
        '%', 326,
        '\'', 2660,
        '(', 2557,
        '/', 726,
        '0', 2738,
        ';', 2598,
        '[', 2931,
        '\\', 2638,
        ']', 2784,
        '_', 2687,
        '{', 321,
        '}', 2794,
        '\t', 329,
        ' ', 329,
        '"', 326,
        ')', 326,
        ',', 326,
        '`', 326,
        '|', 326,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2505);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2397);
      if (lookahead == '%') ADVANCE(385);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2398);
      if (lookahead == '%') ADVANCE(386);
      if (lookahead == '/') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2399);
      if (lookahead == '%') ADVANCE(391);
      if (lookahead == '/') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2400);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '/') ADVANCE(2902);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2401);
      if (lookahead == '%') ADVANCE(399);
      if (lookahead == '/') ADVANCE(2904);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(334);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2402);
      if (lookahead == '%') ADVANCE(403);
      if (lookahead == '/') ADVANCE(2906);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2403);
      if (lookahead == '%') ADVANCE(408);
      if (lookahead == '/') ADVANCE(2908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2404);
      if (lookahead == '%') ADVANCE(411);
      if (lookahead == '/') ADVANCE(2910);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2405);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '/') ADVANCE(2911);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2406);
      if (lookahead == '%') ADVANCE(417);
      if (lookahead == '/') ADVANCE(2912);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2407);
      if (lookahead == '%') ADVANCE(420);
      if (lookahead == '/') ADVANCE(2913);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2408);
      if (lookahead == '%') ADVANCE(423);
      if (lookahead == '/') ADVANCE(2914);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2409);
      if (lookahead == '%') ADVANCE(426);
      if (lookahead == '/') ADVANCE(2915);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2410);
      if (lookahead == '%') ADVANCE(429);
      if (lookahead == '/') ADVANCE(2916);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2411);
      if (lookahead == '%') ADVANCE(432);
      if (lookahead == '/') ADVANCE(2917);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2412);
      if (lookahead == '%') ADVANCE(435);
      if (lookahead == '/') ADVANCE(2918);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2413);
      if (lookahead == '%') ADVANCE(438);
      if (lookahead == '/') ADVANCE(2919);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(346);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2414);
      if (lookahead == '%') ADVANCE(441);
      if (lookahead == '/') ADVANCE(2920);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2415);
      if (lookahead == '%') ADVANCE(444);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2416);
      if (lookahead == '%') ADVANCE(447);
      if (lookahead == '/') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2417);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '/') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2418);
      if (lookahead == '%') ADVANCE(453);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2419);
      if (lookahead == '%') ADVANCE(456);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2420);
      if (lookahead == '%') ADVANCE(459);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2421);
      if (lookahead == '%') SKIP(471);
      if (lookahead == '/') SKIP(730);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2422);
      if (lookahead == '%') SKIP(474);
      if (lookahead == '/') SKIP(731);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2423);
      if (lookahead == '%') SKIP(477);
      if (lookahead == '/') SKIP(732);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2424);
      if (lookahead == '%') SKIP(480);
      if (lookahead == '/') SKIP(733);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(2425);
      if (lookahead == '%') SKIP(483);
      if (lookahead == '/') SKIP(734);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '#') SKIP(585);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(181);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') SKIP(585);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(181);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_directive_term_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym_directive_term_token2);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(42);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(41);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == 's') ADVANCE(2853);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(43);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(56);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(55);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (lookahead == 's') ADVANCE(2855);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(57);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(63);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(62);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (lookahead == 's') ADVANCE(2856);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(64);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(79);
      if (set_contains(extras_character_set_8, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(78);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == 's') ADVANCE(2858);
      if (set_contains(extras_character_set_5, 10, lookahead)) ADVANCE(80);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == 'e') ADVANCE(2133);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == 'o') ADVANCE(2131);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(aux_sym_directive_term_token3);
      if (lookahead == 's') ADVANCE(2852);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(aux_sym_directive_term_token4);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(187);
      if (lookahead == '#') SKIP(587);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(186);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(189);
      if (lookahead == '#') SKIP(589);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(188);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '+') ADVANCE(2851);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '+') ADVANCE(2851);
      if (lookahead == '/') ADVANCE(2877);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '/') ADVANCE(2877);
      if (lookahead == '=') ADVANCE(2875);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(488);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(20);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(205);
      if (lookahead == '#') SKIP(593);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(204);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '#') SKIP(581);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(37);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') SKIP(487);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(229);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') SKIP(579);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(230);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(523);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(394);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(525);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(395);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(532);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(402);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(536);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(406);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') ADVANCE(538);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(407);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') SKIP(580);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(464);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '#') SKIP(586);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(470);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2680);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2681);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2682);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2683);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2684);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2685);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2686);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if ((set_contains(aux_sym_term_token1_character_set_2, 9, lookahead)) &&
          (lookahead < '/' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2687);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2688);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(26);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2691);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2692);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2693);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2694);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(26);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2699);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(196);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2697);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2698);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2699);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2700);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(196);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '#') ADVANCE(572);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(196);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'x') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(216);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2703);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2704);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2705);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2706);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(216);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(222);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2709);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2710);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2711);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2712);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(222);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'x') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(282);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2715);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2716);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2717);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2718);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(282);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == 'x') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(291);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2721);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2722);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2723);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2724);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(291);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2727);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2728);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2729);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2730);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(307);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'x') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(313);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2733);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2734);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2735);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2736);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(313);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'x') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (set_contains(extras_character_set_7, 10, lookahead)) ADVANCE(326);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2739);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2740);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2741);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2742);
      if (set_contains(extras_character_set_9, 10, lookahead)) ADVANCE(326);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\'') ADVANCE(710);
      if (lookahead == '.') ADVANCE(2250);
      if (lookahead == 'b') ADVANCE(2248);
      if (lookahead == 'o') ADVANCE(2249);
      if (lookahead == 'x') ADVANCE(2252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(2250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2745);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2746);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2747);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2748);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2749);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2750);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1685);
      if (lookahead == '>') ADVANCE(2829);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(2923);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') SKIP(187);
      if (lookahead == '#') SKIP(587);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(186);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '#') SKIP(583);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(119);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead == '\n') SKIP(189);
      if (lookahead == '#') SKIP(589);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(188);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead == '\n') SKIP(199);
      if (lookahead == '#') SKIP(591);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) SKIP(198);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(sym_empty_list);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '#') ADVANCE(493);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(28);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(sym_empty_list);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(491);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(26);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(367);
      if (lookahead == '#') ADVANCE(494);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(29);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(216);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '#') ADVANCE(499);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(222);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(282);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '#') ADVANCE(507);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(291);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(307);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '#') ADVANCE(511);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(313);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(sym_empty_curly_brackets);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(326);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '#') ADVANCE(568);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(184);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '#') ADVANCE(576);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(202);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(aux_sym__functional_notation_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(566);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(182);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '#') ADVANCE(568);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(184);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '#') ADVANCE(570);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(190);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(aux_sym_arg_list_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(aux_sym__operation_1200xfx_token1);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(aux_sym__operation_1200fx_token1);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '.') ADVANCE(1077);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '\\') ADVANCE(1574);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(2852);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '<') ADVANCE(2879);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '=') ADVANCE(2852);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(aux_sym__operation_700xfx_token1);
      if (lookahead == '=') ADVANCE(2852);
      if (lookahead == '>') ADVANCE(2879);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(aux_sym__operation_500yfx_token1);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(aux_sym__operation_500yfx_token1);
      if (lookahead == '-') ADVANCE(1685);
      if (lookahead == '>') ADVANCE(2829);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(522);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(43);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '#') ADVANCE(524);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(51);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(531);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(74);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(533);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(80);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(535);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '#') ADVANCE(542);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(107);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(552);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(139);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '#') ADVANCE(564);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(179);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(537);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(239);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '#') ADVANCE(560);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(258);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2921);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2671);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2672);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2673);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2674);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(2675);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(425);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(431);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(434);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(aux_sym__operation_400yfx_token1);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '/') ADVANCE(2879);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(aux_sym__operation_200fy_token1);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(26);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#') ADVANCE(498);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2778);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(216);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2779);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(222);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2780);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(282);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2781);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(291);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2782);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(307);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2783);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(313);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '%') ADVANCE(326);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= '\\') ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(326);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(aux_sym__list_notation_token1);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == ']') ADVANCE(2775);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(597);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '#') ADVANCE(529);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(64);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(545);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(116);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(554);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(149);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(562);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(169);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(566);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(182);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '#') ADVANCE(570);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(190);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '#') ADVANCE(574);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(200);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym__list_notation_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '#') ADVANCE(556);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(268);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(527);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(57);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(539);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(98);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '#') ADVANCE(548);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(558);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(159);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(566);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(182);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(aux_sym__list_notation_items_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '#') ADVANCE(550);
      if (set_contains(aux_sym_term_token1_character_set_1, 9, lookahead)) ADVANCE(248);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2255},
  [2] = {.lex_state = 2255},
  [3] = {.lex_state = 2255},
  [4] = {.lex_state = 316},
  [5] = {.lex_state = 316},
  [6] = {.lex_state = 316},
  [7] = {.lex_state = 316},
  [8] = {.lex_state = 316},
  [9] = {.lex_state = 316},
  [10] = {.lex_state = 316},
  [11] = {.lex_state = 316},
  [12] = {.lex_state = 316},
  [13] = {.lex_state = 316},
  [14] = {.lex_state = 316},
  [15] = {.lex_state = 316},
  [16] = {.lex_state = 316},
  [17] = {.lex_state = 316},
  [18] = {.lex_state = 316},
  [19] = {.lex_state = 316},
  [20] = {.lex_state = 316},
  [21] = {.lex_state = 316},
  [22] = {.lex_state = 316},
  [23] = {.lex_state = 316},
  [24] = {.lex_state = 316},
  [25] = {.lex_state = 316},
  [26] = {.lex_state = 316},
  [27] = {.lex_state = 316},
  [28] = {.lex_state = 316},
  [29] = {.lex_state = 316},
  [30] = {.lex_state = 316},
  [31] = {.lex_state = 316},
  [32] = {.lex_state = 316},
  [33] = {.lex_state = 316},
  [34] = {.lex_state = 316},
  [35] = {.lex_state = 316},
  [36] = {.lex_state = 316},
  [37] = {.lex_state = 316},
  [38] = {.lex_state = 316},
  [39] = {.lex_state = 316},
  [40] = {.lex_state = 316},
  [41] = {.lex_state = 316},
  [42] = {.lex_state = 316},
  [43] = {.lex_state = 316},
  [44] = {.lex_state = 316},
  [45] = {.lex_state = 316},
  [46] = {.lex_state = 316},
  [47] = {.lex_state = 316},
  [48] = {.lex_state = 316},
  [49] = {.lex_state = 316},
  [50] = {.lex_state = 316},
  [51] = {.lex_state = 316},
  [52] = {.lex_state = 316},
  [53] = {.lex_state = 316},
  [54] = {.lex_state = 316},
  [55] = {.lex_state = 316},
  [56] = {.lex_state = 316},
  [57] = {.lex_state = 316},
  [58] = {.lex_state = 316},
  [59] = {.lex_state = 316},
  [60] = {.lex_state = 316},
  [61] = {.lex_state = 316},
  [62] = {.lex_state = 316},
  [63] = {.lex_state = 316},
  [64] = {.lex_state = 316},
  [65] = {.lex_state = 316},
  [66] = {.lex_state = 316},
  [67] = {.lex_state = 316},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 2255},
  [90] = {.lex_state = 2255},
  [91] = {.lex_state = 2255},
  [92] = {.lex_state = 2255},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 333},
  [96] = {.lex_state = 333},
  [97] = {.lex_state = 333},
  [98] = {.lex_state = 334},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 334},
  [101] = {.lex_state = 335},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 334},
  [104] = {.lex_state = 335},
  [105] = {.lex_state = 335},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 336},
  [110] = {.lex_state = 336},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 337},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 338},
  [128] = {.lex_state = 338},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 337},
  [136] = {.lex_state = 118},
  [137] = {.lex_state = 339},
  [138] = {.lex_state = 339},
  [139] = {.lex_state = 340},
  [140] = {.lex_state = 341},
  [141] = {.lex_state = 342},
  [142] = {.lex_state = 342},
  [143] = {.lex_state = 340},
  [144] = {.lex_state = 340},
  [145] = {.lex_state = 341},
  [146] = {.lex_state = 343},
  [147] = {.lex_state = 344},
  [148] = {.lex_state = 344},
  [149] = {.lex_state = 344},
  [150] = {.lex_state = 345},
  [151] = {.lex_state = 345},
  [152] = {.lex_state = 344},
  [153] = {.lex_state = 344},
  [154] = {.lex_state = 344},
  [155] = {.lex_state = 344},
  [156] = {.lex_state = 343},
  [157] = {.lex_state = 343},
  [158] = {.lex_state = 344},
  [159] = {.lex_state = 344},
  [160] = {.lex_state = 344},
  [161] = {.lex_state = 344},
  [162] = {.lex_state = 344},
  [163] = {.lex_state = 344},
  [164] = {.lex_state = 344},
  [165] = {.lex_state = 344},
  [166] = {.lex_state = 344},
  [167] = {.lex_state = 344},
  [168] = {.lex_state = 345},
  [169] = {.lex_state = 344},
  [170] = {.lex_state = 343},
  [171] = {.lex_state = 344},
  [172] = {.lex_state = 344},
  [173] = {.lex_state = 344},
  [174] = {.lex_state = 346},
  [175] = {.lex_state = 346},
  [176] = {.lex_state = 347},
  [177] = {.lex_state = 347},
  [178] = {.lex_state = 347},
  [179] = {.lex_state = 347},
  [180] = {.lex_state = 347},
  [181] = {.lex_state = 347},
  [182] = {.lex_state = 347},
  [183] = {.lex_state = 347},
  [184] = {.lex_state = 347},
  [185] = {.lex_state = 346},
  [186] = {.lex_state = 346},
  [187] = {.lex_state = 347},
  [188] = {.lex_state = 347},
  [189] = {.lex_state = 346},
  [190] = {.lex_state = 347},
  [191] = {.lex_state = 346},
  [192] = {.lex_state = 347},
  [193] = {.lex_state = 347},
  [194] = {.lex_state = 347},
  [195] = {.lex_state = 346},
  [196] = {.lex_state = 346},
  [197] = {.lex_state = 346},
  [198] = {.lex_state = 347},
  [199] = {.lex_state = 346},
  [200] = {.lex_state = 347},
  [201] = {.lex_state = 347},
  [202] = {.lex_state = 346},
  [203] = {.lex_state = 347},
  [204] = {.lex_state = 347},
  [205] = {.lex_state = 347},
  [206] = {.lex_state = 347},
  [207] = {.lex_state = 347},
  [208] = {.lex_state = 347},
  [209] = {.lex_state = 346},
  [210] = {.lex_state = 346},
  [211] = {.lex_state = 346},
  [212] = {.lex_state = 346},
  [213] = {.lex_state = 346},
  [214] = {.lex_state = 347},
  [215] = {.lex_state = 346},
  [216] = {.lex_state = 346},
  [217] = {.lex_state = 346},
  [218] = {.lex_state = 346},
  [219] = {.lex_state = 346},
  [220] = {.lex_state = 346},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 348},
  [226] = {.lex_state = 349},
  [227] = {.lex_state = 354},
  [228] = {.lex_state = 355},
  [229] = {.lex_state = 349},
  [230] = {.lex_state = 355},
  [231] = {.lex_state = 350},
  [232] = {.lex_state = 349},
  [233] = {.lex_state = 350},
  [234] = {.lex_state = 354},
  [235] = {.lex_state = 351},
  [236] = {.lex_state = 350},
  [237] = {.lex_state = 356},
  [238] = {.lex_state = 351},
  [239] = {.lex_state = 351},
  [240] = {.lex_state = 349},
  [241] = {.lex_state = 351},
  [242] = {.lex_state = 352},
  [243] = {.lex_state = 353},
  [244] = {.lex_state = 353},
  [245] = {.lex_state = 352},
  [246] = {.lex_state = 352},
  [247] = {.lex_state = 352},
  [248] = {.lex_state = 352},
  [249] = {.lex_state = 353},
  [250] = {.lex_state = 353},
  [251] = {.lex_state = 357},
  [252] = {.lex_state = 2256},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_directive_term_token1] = ACTIONS(1),
    [aux_sym_directive_term_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__operation_1200xfx_token1] = ACTIONS(1),
    [aux_sym__operation_1200fx_token1] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS] = ACTIONS(1),
    [aux_sym__operation_500yfx_token1] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(252),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym_term] = STATE(106),
    [sym_compound_term] = STATE(125),
    [sym_atomic_term] = STATE(125),
    [sym_number] = STATE(132),
    [sym_negative_number] = STATE(132),
    [sym_atom] = STATE(107),
    [sym__functional_notation] = STATE(134),
    [sym__operator_notation] = STATE(134),
    [sym__operation_1200xfx] = STATE(134),
    [sym__operation_1200fx] = STATE(134),
    [sym__operation_1100xfy] = STATE(134),
    [sym__operation_1050xfy] = STATE(134),
    [sym__operation_1000xfy] = STATE(134),
    [sym__operation_900fy] = STATE(134),
    [sym__operation_700xfx] = STATE(134),
    [sym__operation_500yfx] = STATE(134),
    [sym__operation_400yfx] = STATE(134),
    [sym__operation_200xfx] = STATE(134),
    [sym__operation_200xfy] = STATE(134),
    [sym__operation_200fy] = STATE(134),
    [sym__list_notation] = STATE(134),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_atom_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_directive_term_token1] = ACTIONS(9),
    [aux_sym_directive_term_token3] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_term_token1] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_empty_list] = ACTIONS(13),
    [sym_empty_curly_brackets] = ACTIONS(13),
    [aux_sym__operator_notation_token1] = ACTIONS(15),
    [aux_sym__operation_1200fx_token1] = ACTIONS(25),
    [anon_sym_BSLASH_PLUS] = ACTIONS(27),
    [aux_sym__operation_200fy_token1] = ACTIONS(29),
    [aux_sym__list_notation_token1] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_COLON_DASH,
    ACTIONS(41), 1,
      aux_sym_directive_term_token3,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_term_token1,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(62), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(65), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(68), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(71), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(106), 1,
      sym_term,
    STATE(107), 1,
      sym_atom,
    ACTIONS(38), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(47), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(56), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    STATE(2), 3,
      sym_directive_term,
      sym_clause_term,
      aux_sym_source_file_repeat1,
    ACTIONS(44), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [91] = 22,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      anon_sym_COLON_DASH,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(106), 1,
      sym_term,
    STATE(107), 1,
      sym_atom,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    STATE(2), 3,
      sym_directive_term,
      sym_clause_term,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [182] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(168), 1,
      sym_atom,
    STATE(188), 1,
      sym_term,
    STATE(229), 1,
      sym_arg,
    STATE(244), 1,
      sym_arg_list,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [268] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(144), 1,
      sym_atom,
    STATE(149), 1,
      sym_term,
    STATE(225), 1,
      sym_arg,
    STATE(242), 1,
      sym__list_notation_items,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [354] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(168), 1,
      sym_atom,
    STATE(188), 1,
      sym_term,
    STATE(229), 1,
      sym_arg,
    STATE(249), 1,
      sym_arg_list,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [440] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(168), 1,
      sym_atom,
    STATE(188), 1,
      sym_term,
    STATE(229), 1,
      sym_arg,
    STATE(243), 1,
      sym_arg_list,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [526] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(168), 1,
      sym_atom,
    STATE(188), 1,
      sym_term,
    STATE(229), 1,
      sym_arg,
    STATE(250), 1,
      sym_arg_list,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [612] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(144), 1,
      sym_atom,
    STATE(149), 1,
      sym_term,
    STATE(225), 1,
      sym_arg,
    STATE(247), 1,
      sym__list_notation_items,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [698] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(144), 1,
      sym_atom,
    STATE(149), 1,
      sym_term,
    STATE(225), 1,
      sym_arg,
    STATE(248), 1,
      sym__list_notation_items,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [784] = 21,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(144), 1,
      sym_atom,
    STATE(149), 1,
      sym_term,
    STATE(225), 1,
      sym_arg,
    STATE(245), 1,
      sym__list_notation_items,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [870] = 20,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(168), 1,
      sym_atom,
    STATE(188), 1,
      sym_term,
    STATE(240), 1,
      sym_arg,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [953] = 20,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(156), 1,
      sym_atom,
    STATE(199), 1,
      sym_term,
    STATE(246), 1,
      sym_arg,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1036] = 20,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(157), 1,
      sym_atom,
    STATE(202), 1,
      sym_term,
    STATE(236), 1,
      sym_arg,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1119] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(154), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1199] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(114), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1279] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(113), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1359] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(147), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1439] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(173), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1519] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(172), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1599] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(215), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1679] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(216), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1759] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(155), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1839] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(190), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1919] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(200), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [1999] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(163), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2079] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(153), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2159] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(192), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2239] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(193), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2319] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(165), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2399] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(166), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2479] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(217), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2559] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(178), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2639] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(207), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2719] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(210), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2799] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(120), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2879] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(162), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [2959] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(218), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3039] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(119), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3119] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(118), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3199] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(117), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3279] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(116), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3359] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(115), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3439] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(174), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3519] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(129), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3599] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(124), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3679] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(108), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3759] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(131), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3839] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(158), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3919] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(219), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [3999] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(220), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4079] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_directive_term_token3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_term_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(120), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(122), 1,
      aux_sym__list_notation_token1,
    STATE(109), 1,
      aux_sym_atom_repeat2,
    STATE(139), 1,
      sym_atom,
    STATE(161), 1,
      sym_term,
    ACTIONS(100), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(106), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(112), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(159), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(164), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(104), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(148), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4159] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(213), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4239] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(177), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4319] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(211), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4399] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(208), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4479] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      aux_sym_directive_term_token3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_term_token1,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(27), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(29), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(31), 1,
      aux_sym__list_notation_token1,
    STATE(94), 1,
      aux_sym_atom_repeat2,
    STATE(107), 1,
      sym_atom,
    STATE(130), 1,
      sym_term,
    ACTIONS(9), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(21), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(125), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(132), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(13), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(134), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4559] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(176), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4639] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(179), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4719] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(214), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4799] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(197), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4879] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(206), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [4959] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      aux_sym_directive_term_token3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_term_token1,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(144), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(146), 1,
      aux_sym__list_notation_token1,
    STATE(128), 1,
      aux_sym_atom_repeat2,
    STATE(146), 1,
      sym_atom,
    STATE(196), 1,
      sym_term,
    ACTIONS(124), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(130), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(136), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(185), 2,
      sym_compound_term,
      sym_atomic_term,
    STATE(189), 2,
      sym_number,
      sym_negative_number,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(191), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [5039] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(180), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [5119] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(181), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [5199] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(182), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [5279] = 19,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_directive_term_token3,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      aux_sym_term_token1,
    ACTIONS(90), 1,
      anon_sym_DASH,
    ACTIONS(92), 1,
      aux_sym__operation_1200fx_token1,
    ACTIONS(94), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(96), 1,
      aux_sym__operation_200fy_token1,
    ACTIONS(98), 1,
      aux_sym__list_notation_token1,
    STATE(135), 1,
      aux_sym_atom_repeat2,
    STATE(151), 1,
      sym_atom,
    STATE(183), 1,
      sym_term,
    ACTIONS(76), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(82), 2,
      anon_sym_LPAREN,
      aux_sym__operator_notation_token1,
    ACTIONS(88), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(203), 2,
      sym_number,
      sym_negative_number,
    STATE(205), 2,
      sym_compound_term,
      sym_atomic_term,
    ACTIONS(80), 4,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_empty_list,
      sym_empty_curly_brackets,
    STATE(201), 15,
      sym__functional_notation,
      sym__operator_notation,
      sym__operation_1200xfx,
      sym__operation_1200fx,
      sym__operation_1100xfy,
      sym__operation_1050xfy,
      sym__operation_1000xfy,
      sym__operation_900fy,
      sym__operation_700xfx,
      sym__operation_500yfx,
      sym__operation_400yfx,
      sym__operation_200xfx,
      sym__operation_200xfy,
      sym__operation_200fy,
      sym__list_notation,
  [5359] = 3,
    ACTIONS(150), 1,
      anon_sym_STAR_SLASH,
    STATE(69), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(148), 23,
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
  [5391] = 3,
    ACTIONS(155), 1,
      anon_sym_STAR_SLASH,
    STATE(69), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(152), 23,
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
  [5423] = 2,
    ACTIONS(157), 6,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
    ACTIONS(159), 19,
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
  [5453] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(148), 22,
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
  [5484] = 2,
    STATE(68), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(163), 23,
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
  [5513] = 2,
    STATE(71), 1,
      aux_sym_directive_term_repeat1,
    ACTIONS(165), 23,
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
  [5542] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_atom_repeat5,
    ACTIONS(167), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5576] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      aux_sym_atom_repeat5,
    ACTIONS(173), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5610] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_atom_repeat5,
    ACTIONS(167), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5644] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      aux_sym_atom_repeat5,
    ACTIONS(179), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5678] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_atom_repeat5,
    ACTIONS(167), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5712] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_atom_repeat5,
    ACTIONS(185), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5746] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_atom_repeat5,
    ACTIONS(167), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5780] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym_atom_repeat5,
    ACTIONS(196), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5814] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      aux_sym_atom_repeat5,
    ACTIONS(200), 19,
      anon_sym_SPACE,
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
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [5848] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(204), 21,
      anon_sym_SPACE,
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
  [5875] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(206), 21,
      anon_sym_SPACE,
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
  [5902] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(208), 21,
      anon_sym_SPACE,
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
  [5929] = 3,
    STATE(86), 1,
      aux_sym_atom_repeat1,
    ACTIONS(212), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(210), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [5958] = 3,
    STATE(88), 1,
      aux_sym_atom_repeat1,
    ACTIONS(217), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(215), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [5987] = 3,
    STATE(86), 1,
      aux_sym_atom_repeat1,
    ACTIONS(221), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(219), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6016] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 19,
      anon_sym_COLON_DASH,
      aux_sym_directive_term_token1,
      aux_sym_directive_term_token3,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_term_token1,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      sym_empty_list,
      sym_empty_curly_brackets,
      aux_sym__operator_notation_token1,
      aux_sym__operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym__operation_200fy_token1,
      aux_sym__list_notation_token1,
  [6044] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 19,
      anon_sym_COLON_DASH,
      aux_sym_directive_term_token1,
      aux_sym_directive_term_token3,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_term_token1,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      sym_empty_list,
      sym_empty_curly_brackets,
      aux_sym__operator_notation_token1,
      aux_sym__operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym__operation_200fy_token1,
      aux_sym__list_notation_token1,
  [6072] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 19,
      anon_sym_COLON_DASH,
      aux_sym_directive_term_token1,
      aux_sym_directive_term_token3,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_term_token1,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      sym_empty_list,
      sym_empty_curly_brackets,
      aux_sym__operator_notation_token1,
      aux_sym__operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym__operation_200fy_token1,
      aux_sym__list_notation_token1,
  [6100] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 19,
      anon_sym_COLON_DASH,
      aux_sym_directive_term_token1,
      aux_sym_directive_term_token3,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_term_token1,
      aux_sym_number_token1,
      aux_sym_number_token2,
      anon_sym_DASH,
      sym_empty_list,
      sym_empty_curly_brackets,
      aux_sym__operator_notation_token1,
      aux_sym__operation_1200fx_token1,
      anon_sym_BSLASH_PLUS,
      aux_sym__operation_200fy_token1,
      aux_sym__list_notation_token1,
  [6128] = 3,
    STATE(93), 1,
      aux_sym_atom_repeat2,
    ACTIONS(241), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(239), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6155] = 3,
    STATE(93), 1,
      aux_sym_atom_repeat2,
    ACTIONS(244), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(215), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6182] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_atom_repeat1,
    ACTIONS(246), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(219), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6210] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_atom_repeat1,
    ACTIONS(248), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(210), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6238] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_atom_repeat1,
    ACTIONS(251), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(215), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6266] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(100), 1,
      aux_sym_atom_repeat1,
    ACTIONS(253), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(219), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [6293] = 2,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6316] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(100), 1,
      aux_sym_atom_repeat1,
    ACTIONS(259), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(210), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [6343] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_atom_repeat1,
    ACTIONS(262), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(219), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6370] = 2,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6393] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(98), 1,
      aux_sym_atom_repeat1,
    ACTIONS(264), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [6420] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_atom_repeat1,
    ACTIONS(266), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(210), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6447] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym_atom_repeat1,
    ACTIONS(269), 4,
      anon_sym__,
      aux_sym_directive_term_token2,
      aux_sym_directive_term_token3,
      aux_sym_directive_term_token4,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6474] = 14,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    STATE(221), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(271), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [6520] = 2,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6542] = 14,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(223), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(301), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [6588] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_atom_repeat2,
    ACTIONS(305), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(215), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6614] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_atom_repeat2,
    ACTIONS(307), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(239), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [6640] = 1,
    ACTIONS(215), 17,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6660] = 1,
    ACTIONS(310), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6679] = 3,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(312), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [6702] = 3,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(314), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [6725] = 4,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(316), 13,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
  [6750] = 5,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(318), 12,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
  [6777] = 8,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 8,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym__operation_1200xfx_token1,
  [6810] = 9,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(322), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym__operation_1200xfx_token1,
  [6845] = 7,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(324), 9,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
  [6876] = 9,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(326), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym__operation_1200xfx_token1,
  [6911] = 1,
    ACTIONS(328), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6930] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(122), 1,
      aux_sym_atom_repeat2,
    ACTIONS(330), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(239), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6955] = 1,
    ACTIONS(333), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [6974] = 3,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(335), 14,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [6997] = 1,
    ACTIONS(337), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7016] = 1,
    ACTIONS(339), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7035] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(127), 1,
      aux_sym_atom_repeat2,
    ACTIONS(341), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(239), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [7060] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(127), 1,
      aux_sym_atom_repeat2,
    ACTIONS(344), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [7085] = 1,
    ACTIONS(346), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7104] = 6,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(348), 11,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [7133] = 9,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_DASH_GT,
    ACTIONS(287), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(289), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(291), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(293), 1,
      anon_sym_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_CARET,
    ACTIONS(281), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(350), 7,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym__operation_1200xfx_token1,
  [7168] = 1,
    ACTIONS(297), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7187] = 1,
    ACTIONS(352), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7206] = 1,
    ACTIONS(354), 16,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7225] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(122), 1,
      aux_sym_atom_repeat2,
    ACTIONS(356), 2,
      aux_sym_directive_term_token1,
      anon_sym_BSLASH,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7250] = 4,
    ACTIONS(358), 1,
      aux_sym_atom_token1,
    ACTIONS(360), 1,
      anon_sym_x,
    STATE(234), 1,
      aux_sym_atom_repeat3,
    ACTIONS(257), 12,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_a,
      anon_sym_b,
      anon_sym_r,
      anon_sym_f,
      anon_sym_t,
      anon_sym_n,
      anon_sym_v,
  [7274] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7296] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7318] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7339] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7360] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [7381] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [7402] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(215), 13,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7421] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 3,
      aux_sym_arg_list_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
    ACTIONS(297), 9,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7444] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7465] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [7485] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(370), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(322), 3,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7519] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(354), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7537] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(384), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(364), 3,
      aux_sym_arg_list_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7573] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7591] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7611] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(352), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7629] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(370), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(350), 3,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7663] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(348), 7,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7691] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(312), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7713] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      aux_sym__list_notation_token2,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7735] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 2,
      aux_sym_arg_list_token1,
      aux_sym__list_notation_token2,
    ACTIONS(297), 9,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7757] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(370), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 4,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7789] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(337), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7807] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(339), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7825] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(318), 8,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7851] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(316), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7875] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(314), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7897] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(297), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7915] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(346), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7933] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(335), 10,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7955] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(333), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [7973] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 2,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
    ACTIONS(297), 9,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [7995] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(310), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [8013] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(215), 12,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8031] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 12,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [8049] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(370), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(326), 3,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [8083] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(374), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(376), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(378), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(380), 1,
      anon_sym_STAR_STAR,
    ACTIONS(382), 1,
      anon_sym_CARET,
    ACTIONS(370), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(324), 5,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      aux_sym__list_notation_token2,
      aux_sym__list_notation_items_token1,
  [8113] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(312), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
  [8134] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8151] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(314), 9,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [8172] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(346), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8189] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(335), 9,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [8210] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(402), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8245] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 3,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym__operation_1200xfx_token1,
  [8276] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(322), 2,
      aux_sym__functional_notation_token1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8309] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(324), 4,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
  [8338] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(326), 2,
      aux_sym__functional_notation_token1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8371] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(328), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8388] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(337), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8405] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(339), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8422] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(310), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8439] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(402), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(364), 2,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
  [8474] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(297), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8491] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(312), 9,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
  [8512] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(354), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8529] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(348), 6,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8556] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(350), 2,
      aux_sym__functional_notation_token1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8589] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(352), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8606] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(352), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8623] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(350), 2,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8656] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(348), 6,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__list_notation_token2,
  [8683] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(333), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8700] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      aux_sym__list_notation_token2,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(424), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8735] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(426), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8770] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(354), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8787] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(424), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(364), 2,
      aux_sym_arg_list_token1,
      aux_sym__list_notation_token2,
  [8822] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(297), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8839] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(339), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8856] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(337), 11,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [8873] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(318), 7,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
  [8898] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(428), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8933] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      aux_sym__operation_1200xfx_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_GT,
    ACTIONS(406), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(408), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(430), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(400), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [8968] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(333), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [8985] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(335), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
  [9006] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(346), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [9023] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(310), 11,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      aux_sym__list_notation_token2,
  [9040] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(314), 9,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__operation_400yfx_token1,
      aux_sym__list_notation_token2,
  [9061] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_STAR_STAR,
    ACTIONS(394), 1,
      anon_sym_CARET,
    ACTIONS(410), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(316), 8,
      anon_sym_SEMI,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
  [9084] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(326), 2,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [9117] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(324), 4,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      aux_sym__list_notation_token2,
  [9146] = 10,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(322), 2,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
  [9179] = 9,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    ACTIONS(418), 1,
      aux_sym__operation_700xfx_token1,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(414), 2,
      aux_sym_arg_list_token1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(320), 3,
      anon_sym_SEMI,
      aux_sym__operation_1200xfx_token1,
      aux_sym__list_notation_token2,
  [9210] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(420), 1,
      aux_sym__operation_500yfx_token1,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(318), 7,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__list_notation_token2,
  [9235] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_STAR_STAR,
    ACTIONS(390), 1,
      anon_sym_CARET,
    ACTIONS(422), 1,
      aux_sym__operation_400yfx_token1,
    ACTIONS(316), 8,
      anon_sym_SEMI,
      aux_sym_arg_list_token1,
      aux_sym__operation_1200xfx_token1,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      aux_sym__operation_700xfx_token1,
      aux_sym__operation_500yfx_token1,
      aux_sym__list_notation_token2,
  [9258] = 5,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(277), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(432), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [9276] = 5,
    ACTIONS(439), 1,
      anon_sym_PERCENT,
    ACTIONS(442), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(436), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [9294] = 5,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(277), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(447), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_directive_term_repeat2,
    ACTIONS(432), 3,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
  [9312] = 1,
    ACTIONS(157), 6,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_LF,
      anon_sym_PERCENT,
      anon_sym_SLASH_STAR,
      anon_sym_DOT,
  [9321] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(449), 1,
      aux_sym_arg_list_token1,
    ACTIONS(451), 1,
      aux_sym__list_notation_token2,
    ACTIONS(453), 1,
      aux_sym__list_notation_items_token1,
    STATE(233), 1,
      aux_sym_arg_list_repeat1,
  [9337] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(457), 1,
      aux_sym_arg_list_token1,
    STATE(232), 1,
      aux_sym_arg_list_repeat1,
  [9350] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(459), 1,
      anon_sym_BSLASH,
    ACTIONS(461), 1,
      aux_sym_atom_token1,
    STATE(227), 1,
      aux_sym_atom_repeat3,
  [9363] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      anon_sym_BSLASH,
    ACTIONS(466), 1,
      aux_sym_atom_token2,
    STATE(230), 1,
      aux_sym_atom_repeat4,
  [9376] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      aux_sym_arg_list_token1,
    ACTIONS(468), 1,
      aux_sym__functional_notation_token1,
    STATE(226), 1,
      aux_sym_arg_list_repeat1,
  [9389] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      anon_sym_BSLASH,
    ACTIONS(472), 1,
      aux_sym_atom_token2,
    STATE(230), 1,
      aux_sym_atom_repeat4,
  [9402] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      aux_sym_arg_list_token1,
    ACTIONS(478), 1,
      aux_sym__list_notation_token2,
    STATE(231), 1,
      aux_sym_arg_list_repeat1,
  [9415] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(478), 1,
      aux_sym__functional_notation_token1,
    ACTIONS(480), 1,
      aux_sym_arg_list_token1,
    STATE(232), 1,
      aux_sym_arg_list_repeat1,
  [9428] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(449), 1,
      aux_sym_arg_list_token1,
    ACTIONS(483), 1,
      aux_sym__list_notation_token2,
    STATE(231), 1,
      aux_sym_arg_list_repeat1,
  [9441] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      aux_sym_atom_token1,
    STATE(227), 1,
      aux_sym_atom_repeat3,
  [9454] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(489), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [9462] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(478), 2,
      aux_sym_arg_list_token1,
      aux_sym__list_notation_token2,
  [9470] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      aux_sym_atom_token2,
    STATE(228), 1,
      aux_sym_atom_repeat4,
  [9480] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(493), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [9488] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(495), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [9496] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(478), 2,
      aux_sym__functional_notation_token1,
      aux_sym_arg_list_token1,
  [9504] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(497), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
  [9512] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      aux_sym__list_notation_token2,
  [9519] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(501), 1,
      aux_sym__functional_notation_token1,
  [9526] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      aux_sym__functional_notation_token1,
  [9533] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(505), 1,
      aux_sym__list_notation_token2,
  [9540] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym__list_notation_token2,
  [9547] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym__list_notation_token2,
  [9554] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(511), 1,
      aux_sym__list_notation_token2,
  [9561] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      aux_sym__functional_notation_token1,
  [9568] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      aux_sym__functional_notation_token1,
  [9575] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
  [9582] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(519), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 268,
  [SMALL_STATE(6)] = 354,
  [SMALL_STATE(7)] = 440,
  [SMALL_STATE(8)] = 526,
  [SMALL_STATE(9)] = 612,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 784,
  [SMALL_STATE(12)] = 870,
  [SMALL_STATE(13)] = 953,
  [SMALL_STATE(14)] = 1036,
  [SMALL_STATE(15)] = 1119,
  [SMALL_STATE(16)] = 1199,
  [SMALL_STATE(17)] = 1279,
  [SMALL_STATE(18)] = 1359,
  [SMALL_STATE(19)] = 1439,
  [SMALL_STATE(20)] = 1519,
  [SMALL_STATE(21)] = 1599,
  [SMALL_STATE(22)] = 1679,
  [SMALL_STATE(23)] = 1759,
  [SMALL_STATE(24)] = 1839,
  [SMALL_STATE(25)] = 1919,
  [SMALL_STATE(26)] = 1999,
  [SMALL_STATE(27)] = 2079,
  [SMALL_STATE(28)] = 2159,
  [SMALL_STATE(29)] = 2239,
  [SMALL_STATE(30)] = 2319,
  [SMALL_STATE(31)] = 2399,
  [SMALL_STATE(32)] = 2479,
  [SMALL_STATE(33)] = 2559,
  [SMALL_STATE(34)] = 2639,
  [SMALL_STATE(35)] = 2719,
  [SMALL_STATE(36)] = 2799,
  [SMALL_STATE(37)] = 2879,
  [SMALL_STATE(38)] = 2959,
  [SMALL_STATE(39)] = 3039,
  [SMALL_STATE(40)] = 3119,
  [SMALL_STATE(41)] = 3199,
  [SMALL_STATE(42)] = 3279,
  [SMALL_STATE(43)] = 3359,
  [SMALL_STATE(44)] = 3439,
  [SMALL_STATE(45)] = 3519,
  [SMALL_STATE(46)] = 3599,
  [SMALL_STATE(47)] = 3679,
  [SMALL_STATE(48)] = 3759,
  [SMALL_STATE(49)] = 3839,
  [SMALL_STATE(50)] = 3919,
  [SMALL_STATE(51)] = 3999,
  [SMALL_STATE(52)] = 4079,
  [SMALL_STATE(53)] = 4159,
  [SMALL_STATE(54)] = 4239,
  [SMALL_STATE(55)] = 4319,
  [SMALL_STATE(56)] = 4399,
  [SMALL_STATE(57)] = 4479,
  [SMALL_STATE(58)] = 4559,
  [SMALL_STATE(59)] = 4639,
  [SMALL_STATE(60)] = 4719,
  [SMALL_STATE(61)] = 4799,
  [SMALL_STATE(62)] = 4879,
  [SMALL_STATE(63)] = 4959,
  [SMALL_STATE(64)] = 5039,
  [SMALL_STATE(65)] = 5119,
  [SMALL_STATE(66)] = 5199,
  [SMALL_STATE(67)] = 5279,
  [SMALL_STATE(68)] = 5359,
  [SMALL_STATE(69)] = 5391,
  [SMALL_STATE(70)] = 5423,
  [SMALL_STATE(71)] = 5453,
  [SMALL_STATE(72)] = 5484,
  [SMALL_STATE(73)] = 5513,
  [SMALL_STATE(74)] = 5542,
  [SMALL_STATE(75)] = 5576,
  [SMALL_STATE(76)] = 5610,
  [SMALL_STATE(77)] = 5644,
  [SMALL_STATE(78)] = 5678,
  [SMALL_STATE(79)] = 5712,
  [SMALL_STATE(80)] = 5746,
  [SMALL_STATE(81)] = 5780,
  [SMALL_STATE(82)] = 5814,
  [SMALL_STATE(83)] = 5848,
  [SMALL_STATE(84)] = 5875,
  [SMALL_STATE(85)] = 5902,
  [SMALL_STATE(86)] = 5929,
  [SMALL_STATE(87)] = 5958,
  [SMALL_STATE(88)] = 5987,
  [SMALL_STATE(89)] = 6016,
  [SMALL_STATE(90)] = 6044,
  [SMALL_STATE(91)] = 6072,
  [SMALL_STATE(92)] = 6100,
  [SMALL_STATE(93)] = 6128,
  [SMALL_STATE(94)] = 6155,
  [SMALL_STATE(95)] = 6182,
  [SMALL_STATE(96)] = 6210,
  [SMALL_STATE(97)] = 6238,
  [SMALL_STATE(98)] = 6266,
  [SMALL_STATE(99)] = 6293,
  [SMALL_STATE(100)] = 6316,
  [SMALL_STATE(101)] = 6343,
  [SMALL_STATE(102)] = 6370,
  [SMALL_STATE(103)] = 6393,
  [SMALL_STATE(104)] = 6420,
  [SMALL_STATE(105)] = 6447,
  [SMALL_STATE(106)] = 6474,
  [SMALL_STATE(107)] = 6520,
  [SMALL_STATE(108)] = 6542,
  [SMALL_STATE(109)] = 6588,
  [SMALL_STATE(110)] = 6614,
  [SMALL_STATE(111)] = 6640,
  [SMALL_STATE(112)] = 6660,
  [SMALL_STATE(113)] = 6679,
  [SMALL_STATE(114)] = 6702,
  [SMALL_STATE(115)] = 6725,
  [SMALL_STATE(116)] = 6750,
  [SMALL_STATE(117)] = 6777,
  [SMALL_STATE(118)] = 6810,
  [SMALL_STATE(119)] = 6845,
  [SMALL_STATE(120)] = 6876,
  [SMALL_STATE(121)] = 6911,
  [SMALL_STATE(122)] = 6930,
  [SMALL_STATE(123)] = 6955,
  [SMALL_STATE(124)] = 6974,
  [SMALL_STATE(125)] = 6997,
  [SMALL_STATE(126)] = 7016,
  [SMALL_STATE(127)] = 7035,
  [SMALL_STATE(128)] = 7060,
  [SMALL_STATE(129)] = 7085,
  [SMALL_STATE(130)] = 7104,
  [SMALL_STATE(131)] = 7133,
  [SMALL_STATE(132)] = 7168,
  [SMALL_STATE(133)] = 7187,
  [SMALL_STATE(134)] = 7206,
  [SMALL_STATE(135)] = 7225,
  [SMALL_STATE(136)] = 7250,
  [SMALL_STATE(137)] = 7274,
  [SMALL_STATE(138)] = 7296,
  [SMALL_STATE(139)] = 7318,
  [SMALL_STATE(140)] = 7339,
  [SMALL_STATE(141)] = 7360,
  [SMALL_STATE(142)] = 7381,
  [SMALL_STATE(143)] = 7402,
  [SMALL_STATE(144)] = 7421,
  [SMALL_STATE(145)] = 7444,
  [SMALL_STATE(146)] = 7465,
  [SMALL_STATE(147)] = 7485,
  [SMALL_STATE(148)] = 7519,
  [SMALL_STATE(149)] = 7537,
  [SMALL_STATE(150)] = 7573,
  [SMALL_STATE(151)] = 7591,
  [SMALL_STATE(152)] = 7611,
  [SMALL_STATE(153)] = 7629,
  [SMALL_STATE(154)] = 7663,
  [SMALL_STATE(155)] = 7691,
  [SMALL_STATE(156)] = 7713,
  [SMALL_STATE(157)] = 7735,
  [SMALL_STATE(158)] = 7757,
  [SMALL_STATE(159)] = 7789,
  [SMALL_STATE(160)] = 7807,
  [SMALL_STATE(161)] = 7825,
  [SMALL_STATE(162)] = 7851,
  [SMALL_STATE(163)] = 7875,
  [SMALL_STATE(164)] = 7897,
  [SMALL_STATE(165)] = 7915,
  [SMALL_STATE(166)] = 7933,
  [SMALL_STATE(167)] = 7955,
  [SMALL_STATE(168)] = 7973,
  [SMALL_STATE(169)] = 7995,
  [SMALL_STATE(170)] = 8013,
  [SMALL_STATE(171)] = 8031,
  [SMALL_STATE(172)] = 8049,
  [SMALL_STATE(173)] = 8083,
  [SMALL_STATE(174)] = 8113,
  [SMALL_STATE(175)] = 8134,
  [SMALL_STATE(176)] = 8151,
  [SMALL_STATE(177)] = 8172,
  [SMALL_STATE(178)] = 8189,
  [SMALL_STATE(179)] = 8210,
  [SMALL_STATE(180)] = 8245,
  [SMALL_STATE(181)] = 8276,
  [SMALL_STATE(182)] = 8309,
  [SMALL_STATE(183)] = 8338,
  [SMALL_STATE(184)] = 8371,
  [SMALL_STATE(185)] = 8388,
  [SMALL_STATE(186)] = 8405,
  [SMALL_STATE(187)] = 8422,
  [SMALL_STATE(188)] = 8439,
  [SMALL_STATE(189)] = 8474,
  [SMALL_STATE(190)] = 8491,
  [SMALL_STATE(191)] = 8512,
  [SMALL_STATE(192)] = 8529,
  [SMALL_STATE(193)] = 8556,
  [SMALL_STATE(194)] = 8589,
  [SMALL_STATE(195)] = 8606,
  [SMALL_STATE(196)] = 8623,
  [SMALL_STATE(197)] = 8656,
  [SMALL_STATE(198)] = 8683,
  [SMALL_STATE(199)] = 8700,
  [SMALL_STATE(200)] = 8735,
  [SMALL_STATE(201)] = 8770,
  [SMALL_STATE(202)] = 8787,
  [SMALL_STATE(203)] = 8822,
  [SMALL_STATE(204)] = 8839,
  [SMALL_STATE(205)] = 8856,
  [SMALL_STATE(206)] = 8873,
  [SMALL_STATE(207)] = 8898,
  [SMALL_STATE(208)] = 8933,
  [SMALL_STATE(209)] = 8968,
  [SMALL_STATE(210)] = 8985,
  [SMALL_STATE(211)] = 9006,
  [SMALL_STATE(212)] = 9023,
  [SMALL_STATE(213)] = 9040,
  [SMALL_STATE(214)] = 9061,
  [SMALL_STATE(215)] = 9084,
  [SMALL_STATE(216)] = 9117,
  [SMALL_STATE(217)] = 9146,
  [SMALL_STATE(218)] = 9179,
  [SMALL_STATE(219)] = 9210,
  [SMALL_STATE(220)] = 9235,
  [SMALL_STATE(221)] = 9258,
  [SMALL_STATE(222)] = 9276,
  [SMALL_STATE(223)] = 9294,
  [SMALL_STATE(224)] = 9312,
  [SMALL_STATE(225)] = 9321,
  [SMALL_STATE(226)] = 9337,
  [SMALL_STATE(227)] = 9350,
  [SMALL_STATE(228)] = 9363,
  [SMALL_STATE(229)] = 9376,
  [SMALL_STATE(230)] = 9389,
  [SMALL_STATE(231)] = 9402,
  [SMALL_STATE(232)] = 9415,
  [SMALL_STATE(233)] = 9428,
  [SMALL_STATE(234)] = 9441,
  [SMALL_STATE(235)] = 9454,
  [SMALL_STATE(236)] = 9462,
  [SMALL_STATE(237)] = 9470,
  [SMALL_STATE(238)] = 9480,
  [SMALL_STATE(239)] = 9488,
  [SMALL_STATE(240)] = 9496,
  [SMALL_STATE(241)] = 9504,
  [SMALL_STATE(242)] = 9512,
  [SMALL_STATE(243)] = 9519,
  [SMALL_STATE(244)] = 9526,
  [SMALL_STATE(245)] = 9533,
  [SMALL_STATE(246)] = 9540,
  [SMALL_STATE(247)] = 9547,
  [SMALL_STATE(248)] = 9554,
  [SMALL_STATE(249)] = 9561,
  [SMALL_STATE(250)] = 9568,
  [SMALL_STATE(251)] = 9575,
  [SMALL_STATE(252)] = 9582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 2, 0, 0), SHIFT_REPEAT(79),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 2, 0, 0), SHIFT_REPEAT(136),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 2, 0, 0), SHIFT_REPEAT(251),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat5, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat2, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_term, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat2, 2, 0, 0), SHIFT_REPEAT(110),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_200fy, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_400yfx, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_500yfx, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_700xfx, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_1050xfy, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_1200xfx, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_1000xfy, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_1100xfy, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation, 3, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat2, 2, 0, 0), SHIFT_REPEAT(122),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_notation, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_200xfy, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_200xfx, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_900fy, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operation_1200fx, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_number, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_term, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(222),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_term_repeat2, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat3, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat3, 2, 0, 0), SHIFT_REPEAT(227),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat4, 2, 0, 0),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat4, 2, 0, 0), SHIFT_REPEAT(230),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arg_list_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_notation_items, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [517] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
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
