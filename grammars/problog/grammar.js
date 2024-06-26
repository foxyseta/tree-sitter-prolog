/*
 * All section numbers refer to: "ISO/IEC 13211: Information technology –
 * Programming languages – Prolog. International Organization for
 * Standardization, Geneva.".
 *
 * ProbLog-specifi modifications follow L. De Raedt, A. Kimmig and H. Toivonen.
 * "ProbLog: A Probabilistic Prolog and its Application in Link Discovery".
 * IJCAI 2007, Proceedings of the 20th International Joint Conference on
 * Artificial Intelligence, pp. 2462 - 2467, 2007.
 */

const // 6.5.1 Graphic character
graphic_char = choice(/#\$\&\*\+-\.\/:<=>\?@\^~/),
  // 6.5.2 Alphanumeric characters
  small_letter_char = /[a-z]/,
  capital_letter_char = /[A-Z]/,
  decimal_digit_char = /[0-9]/,
  binary_digit_char = /[01]/,
  octal_digit_char = /[0-7]/,
  hexadecimal_digit_char = /[0-9A-Fa-f]/,
  underscore_char = "_",
  letter_char = choice(
    capital_letter_char,
    small_letter_char,
  ),
  alpha_char = choice(
    underscore_char,
    letter_char,
  ),
  alphanumeric_char = choice(
    alpha_char,
    decimal_digit_char,
  ),
  // 6.5.3 Solo characters
  cut_char = "!",
  open_char = "(",
  close_char = ")",
  comma_char = ",",
  semicolon_char = ";",
  open_list_char = "[",
  close_list_char = "]",
  open_curly_char = "{",
  close_curly_char = "}",
  head_tail_separator_char = "|",
  end_line_comment_char = "%",
  solo_char = choice(
    cut_char,
    open_char,
    close_char,
    comma_char,
    semicolon_char,
    open_list_char,
    close_list_char,
    open_curly_char,
    close_curly_char,
    head_tail_separator_char,
    end_line_comment_char,
  ),
  // 6.5.4 Layout characters
  space_char = " ",
  horizontal_tab_char = "\t",
  new_line_char = "\n",
  /* resonable assumption: there are no NULL characters within the file. Use
   * eof() instead once https://github.com/tree-sitter/tree-sitter/pull/2488 is
   * in production (tree-sitter v0.23). The ISO specification does not deal with
   * these, as it does not accept single line comments on the last line.
   */
  end_of_file_char = "\0",
  layout_char = choice(
    space_char,
    horizontal_tab_char,
    new_line_char,
    end_of_file_char,
  ),
  // 6.5.5 Meta characters
  backslash_char = "\\",
  single_quote_char = "'",
  double_quote_char = "\"",
  back_quote_char = "`",
  meta_char = choice(
    backslash_char,
    single_quote_char,
    double_quote_char,
    back_quote_char,
  ),
  // 6.4.1 Layout text
  single_line_comment = seq(
    end_line_comment_char,
    /.*/,
    choice(new_line_char, end_of_file_char),
  ),
  bracketed_comment = /\/\*(.|\n)*\*\//,
  // 6.4.2.1 Quoted characters
  meta_escape_sequence = seq(
    backslash_char,
    meta_char,
  ),
  symbolic_alert_char = "a",
  symbolic_backspace_char = "b",
  symbolic_carriage_return_char = "r",
  symbolic_form_feed_char = "f",
  symbolic_horizontal_tab_char = "t",
  symbolic_new_line_char = "n",
  symbolic_vertical_tab_char = "v",
  symbolic_control_char = choice(
    symbolic_alert_char,
    symbolic_backspace_char,
    symbolic_carriage_return_char,
    symbolic_form_feed_char,
    symbolic_horizontal_tab_char,
    symbolic_new_line_char,
    symbolic_vertical_tab_char,
  ),
  control_escape_sequence = seq(
    backslash_char,
    symbolic_control_char,
  ),
  octal_escape_sequence = seq(
    backslash_char,
    repeat1(octal_digit_char),
    backslash_char,
  ),
  symbolic_hexadecimal_char = "x",
  hexadecimal_escape_sequence = seq(
    backslash_char,
    symbolic_hexadecimal_char,
    repeat1(hexadecimal_digit_char),
    backslash_char,
  ),
  non_quote_char = choice(
    graphic_char,
    alphanumeric_char,
    solo_char,
    space_char,
    meta_escape_sequence,
    control_escape_sequence,
    octal_escape_sequence,
    hexadecimal_escape_sequence,
  ),
  single_quoted_character = choice(
    non_quote_char,
    seq(
      single_quote_char,
      single_quote_char,
    ),
    double_quote_char,
    back_quote_char,
  ),
  double_quoted_character = choice(
    non_quote_char,
    single_quote_char,
    seq(
      double_quote_char,
      double_quote_char,
    ),
    back_quote_char,
  ),
  back_quoted_character = choice(
    non_quote_char,
    single_quote_char,
    double_quote_char,
    seq(
      back_quote_char,
      back_quote_char,
    ),
  ),
  // 6.4.2 Names
  semicolon_token = semicolon_char,
  cut_token = cut_char,
  letter_digit_token = seq(
    small_letter_char,
    repeat(alphanumeric_char),
  ),
  graphic_token_char = choice(
    graphic_char,
    backslash_char,
  ),
  graphic_token = repeat1(graphic_token_char),
  continuation_escape_sequence = seq(
    backslash_char,
    new_line_char,
  ),
  single_quoted_item = choice(
    single_quoted_character,
    continuation_escape_sequence,
  ),
  quoted_token = seq(
    single_quote_char,
    repeat(single_quoted_item),
    single_quote_char,
  ),
  name_token = choice(
    letter_digit_token,
    graphic_token,
    quoted_token,
    semicolon_token,
    cut_token,
  ),
  // 6.4.3 Variables
  variable_indicator_char = underscore_char,
  anonymous_variable = variable_indicator_char,
  named_variable = choice(
    seq(
      variable_indicator_char,
      repeat1(alphanumeric_char),
    ),
    seq(
      capital_letter_char,
      repeat(alphanumeric_char),
    ),
  ),
  variable_token = choice(
    anonymous_variable,
    named_variable,
  ),
  // 6.4.4 Integer numbers
  integer_constant = repeat1(decimal_digit_char),
  character_code_constant = seq(
    "0",
    single_quote_char,
    single_quote_char,
  ),
  binary_constant_indicator = "0b",
  binary_constant = seq(
    binary_constant_indicator,
    repeat1(binary_digit_char),
  ),
  octal_constant_indicator = "0o",
  octal_constant = seq(
    octal_constant_indicator,
    repeat1(octal_digit_char),
  ),
  hexadecimal_constant_indicator = "0x",
  hexadecimal_constant = seq(
    hexadecimal_constant_indicator,
    repeat1(hexadecimal_digit_char),
  ),
  integer_token = choice(
    integer_constant,
    character_code_constant,
    binary_constant,
    octal_constant,
    hexadecimal_constant,
  ),
  // 6.4.5 Floating point numbers
  positive_sign_char = "+",
  negative_sign_char = "-",
  decimal_point_char = ".",
  exponent_char = choice("e", "E"),
  fraction = seq(
    decimal_point_char,
    repeat1(decimal_digit_char),
  ),
  sign = choice(
    negative_sign_char,
    optional(positive_sign_char),
  ),
  exponent = seq(
    exponent_char,
    optional(sign),
    integer_constant,
  ),
  float_number_token = seq(
    integer_constant,
    fraction,
    optional(exponent),
  ),
  // 6.4.6 Double quoted lists
  double_quoted_item = choice(
    double_quoted_character,
    continuation_escape_sequence,
  ),
  double_quoted_list_token = seq(
    double_quote_char,
    repeat(double_quoted_item),
    double_quote_char,
  ),
  // 6.4.7 Back quoted strings
  back_quoted_string = seq(
    back_quote_char,
    repeat(choice(
      back_quoted_character,
      continuation_escape_sequence,
    )),
    back_quote_char,
  ),
  // 6.4.8 Other tokens
  open_token = open_char,
  close_token = close_char,
  open_list_token = open_list_char,
  close_list_token = close_list_char,
  open_curly_token = open_curly_char,
  close_curly_token = close_curly_char,
  head_tail_separator_token = head_tail_separator_char,
  comma_token = comma_char,
  end_char = ".",
  end_token = end_char,
  // 6.4 Tokens
  name = token(name_token),
  variable = token(variable_token),
  double_quoted_list = token(double_quoted_list_token),
  ht_sep = token(head_tail_separator_token);

module.exports = grammar({
  name: "problog",
  extras: $ => [
    layout_char,
    $.comment,
  ],
  superTypes: $ => [
    $._term,
  ],
  rules: {
    // 6.2 Prolog text and data
    // 6.2.1 Prolog text
    source_file: $ =>
      repeat(
        choice(
          $.directive_term,
          $.clause_term,
        ),
      ),
    end: _ => token(seq(end_token)),
    // 6.2.1.1 Directives
    directive_term: $ =>
      seq(
        ":-",
        $._term,
        $.end,
      ),
    // 6.2.1.2 Clauses
    clause_term: $ =>
      prec(
        1201,
        seq(
          optional($.probability_label),
          $._term,
          $.end,
        ),
      ),
    // ProbLog extension to ISO Prolog
    probability_label: $ =>
      seq(
        $.probability,
        "::",
      ),
    probability: $ =>
      prec.left(choice(
        $.integer,
        $.float_number,
      )),
    // 6.3 Terms
    _term: $ =>
      choice(
        $._atomic_term,
        $.variable_term,
        $._compound_term,
      ),
    _compound_term: $ =>
      choice(
        $.functional_notation,
        $._operator_notation,
        $.list_notation,
        $.curly_bracketed_notation,
        $.double_quoted_list_notation,
      ),
    // 6.3.1 Atomic terms
    _atomic_term: $ =>
      choice(
        $.number,
        $.negative_number,
        $.atom,
      ),
    // 6.3.1.1 Numbers
    number: $ =>
      prec.left(choice(
        $.integer,
        $.float_number,
      )),
    // 6.3.1.2 Negative numbers
    negative_number: $ =>
      prec(
        200,
        seq(
          "-",
          choice(
            $.integer,
            $.float_number,
          ),
        ),
      ),
    // 6.3.1.3 Atoms
    atom: $ =>
      choice(
        name,
        $.empty_list,
        $.empty_curly_brackets,
      ),
    empty_list: $ => seq($.open_list, $.close_list),
    empty_curly_brackets: $ => seq($.open_curly, $.close_curly),
    // 6.3.2 Variables
    variable_term: _ => variable,
    // 6.3.3 Compound terms - functional notation
    functional_notation: $ =>
      seq(
        field("function", $.atom),
        $.open_ct,
        $.arg_list,
        $.close,
      ),
    arg_list: $ =>
      prec.right(seq(
        $._arg,
        repeat(seq(
          $.arg_list_separator,
          $._arg,
        )),
      )),
    arg_list_separator: $ => $.comma,
    // 6.3.3.1 Arguments
    _arg: $ =>
      prec(
        999,
        choice(
          $.atom,
          $._term,
        ),
      ),
    // 6.3.4 Compound terms - operator notation
    // 6.3.4.1 Operand
    // 6.3.4.2 Operators as functors
    _operator_notation: $ =>
      choice(
        seq(
          $.open,
          $._term,
          $.close,
        ),
        // ISO rule removed to prevent ambiguity:
        // seq(
        //  $.open_ct,
        //  $._term,
        //  $.close,
        // ),
        // Treesitter/Prolog ISO precedences are inverted.
        // Non-associative operators are set to left-associative
        $.operation_1200xfx,
        $.operation_1200fx,
        $.operation_1100xfy,
        $.operation_1050xfy,
        $.operation_1000xfy,
        $.operation_900fy,
        $.operation_700xfx,
        $.operation_500yfx,
        $.operation_400yfx,
        $.operation_200xfx,
        $.operation_200xfy,
        $.operation_200fy,
      ),
    operator_1200xfx: _ => /(:\-)|(\-\->)/,
    operation_1200xfx: $ =>
      prec.left(
        1,
        seq(
          $._term,
          $.operator_1200xfx,
          $._term,
        ),
      ),
    operator_1200fx: _ => /(:\-)|(\?-)/,
    operation_1200fx: $ =>
      prec.left(
        1,
        seq(
          $.operator_1200fx,
          $._term,
        ),
      ),
    operator_1100xfy: _ => ";",
    operation_1100xfy: $ =>
      prec.right(
        101,
        seq(
          $._term,
          $.operator_1100xfy,
          $._term,
        ),
      ),
    operator_1050xfy: _ => "->",
    operation_1050xfy: $ =>
      prec.right(
        151,
        seq(
          $._term,
          $.operator_1050xfy,
          $._term,
        ),
      ),
    operator_1000xfy: $ => choice("`,`", $.comma),
    operation_1000xfy: $ =>
      prec.right(
        201,
        seq(
          $._term,
          $.operator_1000xfy,
          $._term,
        ),
      ),
    operator_900fy: _ => "\\+",
    operation_900fy: $ =>
      prec.right(
        301,
        seq(
          $.operator_900fy,
          $._term,
        ),
      ),
    operator_700xfx: _ => /=|\\=|==|\\==|@<|@=<|@>|@>=|=\.\.|is|=:=|=\\=|<|=<|>|>=/,
    operation_700xfx: $ =>
      prec.left(
        501,
        seq(
          $._term,
          $.operator_700xfx,
          $._term,
        ),
      ),
    operator_500yfx: _ => /\+|\-|\/\\|\\\//,
    operation_500yfx: $ =>
      prec.left(
        701,
        seq(
          $._term,
          $.operator_500yfx,
          $._term,
        ),
      ),
    operator_400yfx: _ => /\*|\/|\/\/|rem|mod|<<|>>/,
    operation_400yfx: $ =>
      prec.left(
        801,
        seq(
          $._term,
          $.operator_400yfx,
          $._term,
        ),
      ),
    operator_200xfx: _ => "**",
    operation_200xfx: $ =>
      prec.left(
        1001,
        seq(
          $._term,
          $.operator_200xfx,
          $._term,
        ),
      ),
    operator_200xfy: _ => "^",
    operation_200xfy: $ =>
      prec.right(
        1001,
        seq(
          $._term,
          $.operator_200xfy,
          $._term,
        ),
      ),
    operator_200fy: _ => /\-\\/,
    operation_200fy: $ =>
      prec.right(
        1001,
        seq(
          $.operator_200fy,
          $._term,
        ),
      ),
    // 6.3.5 Compound terms - list notation
    list_notation: $ =>
      seq(
        $.open_list,
        $._list_notation_items,
        $.close_list,
      ),
    _list_notation_items: $ =>
      choice(
        prec.right(seq(
          $._arg,
          repeat(seq(
            $.list_notation_separator,
            $._arg,
          )),
        )),
        seq($._arg, ht_sep, $._arg),
      ),
    list_notation_separator: $ => $.comma,
    // 6.3.6 Compount terms - curly bracketed forms
    curly_bracketed_notation: $ =>
      seq(
        $.open_curly,
        $._term,
        $.close_curly,
      ),
    // 6.3.7 Double quoted list notation
    double_quoted_list_notation: _ => double_quoted_list,
    // 6.4 Tokens
    open: _ => token(open_token),
    open_ct: _ => token(open_token),
    close: _ => token(close_token),
    open_list: _ => token(open_list_token),
    close_list: _ => token(close_list_token),
    open_curly: _ => token(open_curly_token),
    close_curly: _ => token(close_curly_token),
    comma: _ => token(comma_token),
    integer: _ => token(integer_token),
    float_number: _ => token(float_number_token),
    // 6.4.1 Layout text
    comment: _ => token(choice(single_line_comment, bracketed_comment)),
  },
});