/*
 * All section numbers refer to: "ISO/IEC 13211: Information technology –
 * Programming languages – Prolog. International Organization for
 * Standardization, Geneva."
 */

const precedence = {
    clause: 1201, // xfx
    dcg: 1200, // xfx

    directive: 1201, // fx
    qh_operator: 1200, // fx

    dynamic: 1150, // fx
    discontiguous: 1150, // fx
    initialization: 1150, // fx
    meta_predicate: 1150, // fx
    module_transparent: 1150, // fx
    multifile: 1150, // fx
    public: 1150, // fx
    thread_local: 1150, // fx
    thread_initialization: 1150, // fx
    volitile: 1150, // fx

    list_sperator: 1105, // xfy

    disjunction: 1100, // xfy

    implies: 1050, // xfy
    soft_cut_implies: 1050, // xfy

    conjunction: 1000, // xfy

    colon_equals: 990, // xfx

    negation: 900, // fy

    less_than: 700, // xfx
    assign: 700, // xfx
    univ: 700, // xfx
    compund_equals: 700, // xfx
    compund_not_equals: 700, // xfx
    equation_equals: 700, // xfx
    less_than_equals: 700, // xfx
    equals: 700, // xfx
    equation_not_equals: 700, // xfx
    greater_than: 700, // xfx
    greater_than_equals: 700, // xfx
    compound_less_than: 700, // xfx
    compound_less_than_equals: 700, // xfx
    compound_greater_than: 700, // xfx
    compound_greater_than_equals: 700, // xfx
    not_assigned: 700, // xfx
    not_equals: 700, // xfx
    as: 700, // xfx
    is: 700, // xfx
    partial_unification_dict: 700, // xfx
    sub_dict: 700, // xfx
    cql_table: 700, // xfx

    coloun: 600, // xfy
    addition: 500, // yfx
    subtraction: 500, // yfx
    bitwise_or: 500, // yfx
    bitwise_and: 500, // yfx
    bitwise_xor: 500, // yfx

    question_mark: 500, // fx

    multipcation: 400, // yfx
    divistion: 400, // yfx
    integer_division: 400, // yfx
    div: 400, // yfx
    rdiv: 400, // yfx
    bitwise_shift_left: 400, // yfx
    bitwise_shift_right: 400, // yfx
    mod: 400, // yfx
    rem: 400, // yfx

    exponentiation_float: 200, // xfx

    exponentiation: 200, // xfy

    bitwise_negation: 200, // fy
    positive: 200, // fy
    negative: 200, // fy

    dict_inspection: 100, // yfx

    remander_deterministic: 1, // fx
  },
  ops = [
    "-->",
    "?-",
    "dynamic",
    "discontiguous",
    "initialization",
    "meta_predicate",
    "module_transparent",
    "multifile",
    "public",
    "thread_local",
    "thread_initialization",
    "volatile",
    "|",
    ";",
    "->",
    "*->",
    // No ','
    ":=",
    "\\+",
    "<",
    "=",
    "=..",
    "=@=",
    "\\=@=",
    "=:=",
    "=<",
    "==",
    "=\\=",
    ">",
    ">=",
    "@<",
    "@=<",
    "@>",
    "@>=",
    "\\=",
    "\\==",
    "as",
    "is",
    ">:<",
    ":<",
    ":",
    "+",
    "-",
    "/\\",
    "\\/",
    "xor",
    "?",
    "*",
    "/",
    "//",
    "div",
    "rdiv",
    "<<",
    ">>",
    "mod",
    "rem",
    "**",
    "^",
    "\\",
    ".",
    "$",
  ],
  // 6.5.1 Graphic character
  graphic_char = /#\$\&\*\+-\.\/:<=>\?@\^~/,
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
  layout_char = choice(
    space_char,
    horizontal_tab_char,
    new_line_char,
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
  // 6.5 Processor character set
  char = choice(
    graphic_char,
    alphanumeric_char,
    solo_char,
    layout_char,
    meta_char,
  ),
  // 6.4.1 Layout text
  comment_open = "/*",
  comment_close = "*/",
  // rules matching empty text are unsupported by tree-siter
  comment_text = repeat1(char),
  single_line_comment = seq(
    end_line_comment_char,
    comment_text,
    new_line_char,
  ),
  bracketed_comment = seq(
    comment_open,
    comment_text,
    comment_close,
  ),
  comment = prec(
    1,
    choice(
      single_line_comment,
      bracketed_comment,
    ),
  ),
  layout_text = choice(
    layout_char,
    comment,
  ),
  layout_text_sequence = repeat1(layout_text),
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
    // rules matching the empty string are unsupported by tree-sitter
    positive_sign_char,
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
  name = token(seq(
    optional(layout_text_sequence),
    name_token,
  )),
  variable = token(seq(
    optional(layout_text_sequence),
    variable_token,
  )),
  integer = token(seq(
    optional(layout_text_sequence),
    integer_token,
  )),
  float_number = token(seq(
    optional(layout_text_sequence),
    float_number_token,
  )),
  double_quoted_list = token(seq(
    optional(layout_text_sequence),
    double_quoted_list_token,
  )),
  open = token(seq(
    optional(layout_text_sequence),
    open_token,
  )),
  open_ct = token(open_token),
  close = token(seq(
    optional(layout_text_sequence),
    close_token,
  )),
  open_list = token(seq(
    optional(layout_text_sequence),
    open_list_token,
  )),
  close_list = token(seq(
    optional(layout_text_sequence),
    close_list_token,
  )),
  open_curly = token(seq(
    optional(layout_text_sequence),
    open_curly_token,
  )),
  close_curly = token(seq(
    optional(layout_text_sequence),
    close_curly_token,
  )),
  ht_sep = token(seq(
    optional(layout_text_sequence),
    head_tail_separator_token,
  )),
  comma = token(seq(
    optional(layout_text_sequence),
    comma_token,
  )),
  end = seq(
    optional(layout_text_sequence),
    end_token,
  );

module.exports = grammar({
  name: "prolog",
  extras: _ => [
    /\s/,
    "\n",
    "\r",
    comment,
  ],
  conflicts: $ => [
    [$.infix_operator, $.infix_operator],
    [$.infix_operator, $._prefix_non_associative],
  ],
  superTypes: $ => [
    $.term,
    variable,
    $.compound_term,
    $._curly_bracketed_notation,
    end,
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
    // 6.2.1.1 Directives
    directive_term: $ =>
      seq(
        ":-",
        $.term,
        end,
      ),
    // 6.2.1.2 Clauses
    clause_term: $ =>
      prec(
        precedence.clause,
        seq(
          $.term,
          end,
        ),
      ),
    // 6.3 Terms
    term: $ =>
      prec(
        1,
        choice(
          $.atomic_term,
          variable,
          $.compound_term,
        ),
      ),
    compound_term: $ =>
      choice(
        $._functional_notation,
        $._operator_notation,
        $._list_notation,
      ),
    // 6.3.1 Atomic terms
    atomic_term: $ =>
      choice(
        $.number,
        $.negative_number,
        $.atom,
      ),
    // 6.3.1.1 Numbers
    number: _ =>
      prec.left(choice(
        integer,
        float_number,
      )),
    // 6.3.1.2 Negative numbers
    negative_number: _ =>
      prec(
        200,
        seq(
          "-",
          choice(
            integer,
            float_number,
          ),
        ),
      ),
    // 6.3.1.3 Atoms
    atom: $ =>
      choice(
        name_token,
        $.empty_list,
        $.empty_curly_brackets,
      ),
    empty_list: _ => token(seq(open_list, close_list)),
    empty_curly_brackets: _ => token(seq(open_curly, close_curly)),
    // 6.3.3 Compound terms - functional notation
    _functional_notation: $ =>
      seq(
        $.atom,
        open_ct,
        $.arg_list,
        close,
      ),
    arg_list: $ =>
      prec.right(seq(
        $.arg,
        repeat(seq(
          comma,
          $.arg,
        )),
      )),
    // 6.3.3.1 Arguments
    arg: $ =>
      prec(
        999,
        choice(
          $.atom,
          $.term,
        ),
      ),
    // 6.3.4 Compound terms - operator notation
    _operator_notation: $ =>
      choice(
        $._prefix_notation,
        $._infix_notation,
        $._postfix_notation,
      ),
    // 6.3.5 Compound terms - list notation
    _list_notation: $ =>
      seq(
        open_list,
        $._list_notation_items,
        close_list,
      ),
    _list_notation_items: $ =>
      choice(
        prec.right(seq(
          $.arg,
          repeat(seq(
            comma,
            $.arg,
          )),
        )),
        seq($.arg, ht_sep, $.arg),
      ),
    // 6.3.6 Compount terms - curly bracketed forms
    _curly_bracketed_notation: $ =>
      seq(
        open_curly,
        $.term,
        close_curly,
      ),
    _prefix_notation: $ =>
      field(
        "prefix",
        alias(
          choice(
            // Define prefx notation`
            $._prefix_non_associative, // fx
            $._prefix_right_associative, // fy
          ),
          $.prefix_operator,
        ),
      ),
    _infix_notation: $ => (
      // Define infix notation
      field("infix", $.infix_operator)
    ),
    _postfix_notation: $ =>
      field(
        "postfix",
        alias(
          choice(
            // Define postfix notation
            // Need dynamic defintion of operators
            // $._postfix_non_associative,         // xf
            // $._postfix_left_associative         // yf
          ),
          $.postfix_operator,
        ),
      ),
    infix_operator: $ => { // xfx
      const table = [
        // [prec, precedence.clause, ':-'], // xfx
        [prec, precedence.dcg, "-->"], // xfx
        [prec.right, precedence.list_sperator, "|"], // xfy
        [prec.right, precedence.disjunction, ";"], // xfy
        [prec.right, precedence.implies, "->"], // xfy
        [prec.right, precedence.soft_cut_implies, "*->"], // xfy
        [prec, precedence.colon_equals, ":="], // xfx
        [prec, precedence.less_than, "<"], // xfx
        [prec, precedence.assign, "="], // xfx
        [prec, precedence.univ, "=.."], // xfx
        [prec, precedence.compund_equals, "=@="], // xfx
        [prec, precedence.compund_not_equals, "\\=@="], // xfx
        [prec, precedence.equation_equals, "=:="], // xfx
        [prec, precedence.less_than_equals, "=<"], // xfx
        [prec, precedence.equals, "=="], // xfx
        [prec, precedence.equation_not_equals, "=\\="], // xfx
        [prec, precedence.greater_than, ">"], // xfx
        [prec, precedence.greater_than_equals, ">="], // xfx
        [prec, precedence.compound_less_than, "@<"], // xfx
        [prec, precedence.compound_less_than_equals, "@=<"], // xfx
        [prec, precedence.compound_greater_than, "@>"], // xfx
        [prec, precedence.compound_greater_than_equals, "@>="], // xfx
        [prec, precedence.not_assigned, "\\="], // xfx
        [prec, precedence.not_equals, "\\=="], // xfx
        [prec, precedence.as, "as"], // xfx
        [prec, precedence.is, "is"], // xfx
        [prec, precedence.partial_unification_dict, ">:<"], // xfx
        [prec, precedence.sub_dict, ":<"], // xfx
        [prec, precedence.cql_table, "::"], // xfx
        [prec.right, precedence.coloun, ":"], // xfy
        [prec.left, precedence.addition, "+"], // yfx
        [prec.left, precedence.subtraction, "-"], // yfx
        [prec.left, precedence.bitwise_or, "\\/"], // yfx
        [prec.left, precedence.bitwise_and, "/\\"], // yfx
        [prec.left, precedence.bitwise_xor, "xor"], // yfx
        [prec.left, precedence.multipcation, "*"], // yfx
        [prec.left, precedence.divistion, "/"], // yfx
        [prec.left, precedence.integer_division, "//"], // yfx
        [prec.left, precedence.div, "div"], // yfx
        [prec.left, precedence.rdiv, "rdiv"], // yfx
        [prec.left, precedence.bitwise_shift_left, "<<"], // yfx
        [prec.left, precedence.bitwise_shift_right, ">>"], // yfx
        [prec.left, precedence.mod, "mod"], // yfx
        [prec.left, precedence.rem, "rem"], // yfx
        [prec, precedence.exponentiation_float, "**"], // xfx
        [prec.right, precedence.exponentiation, "^"], // xfy
        [prec.left, precedence.dict_inspection, "."], // yfx
      ];
      return choice(...table.map(([fn, precedence, operator]) =>
        fn(
          precedence,
          seq(
            field("left", $.term),
            operator,
            field("right", $.term),
          ),
        )
      ));
    },
    _non_arg_operator: $ =>
      prec.right(
        precedence.conjunction,
        seq(
          field("left", $.term),
          ",",
          field("right", $.term),
        ),
      ),
    _prefix_non_associative: $ => {
      const table = [
        [precedence.dynamic, "dynamic"],
        [precedence.discontiguous, "discontiguous"], // fx
        [precedence.initialization, "initialization"], // fx
        [precedence.meta_predicate, "meta_predicate"], // fx
        [precedence.module_transparent, "module_transparent"], // fx
        [precedence.multifile, "multifile"], // fx
        [precedence.public, "public"], // fx
        [precedence.thread_local, "thread_local"], // fx
        [precedence.thread_initialization, "thread_initialization"], // fx
        [precedence.volitile, "volitile"],
        [precedence.directive, "directive"],
        [precedence.qh_operator, "?-"],
        [precedence.directive, ':-'], // fx
        [precedence.question_mark, "?"],
        [precedence.remander_deterministic, "$"], // fx
      ];
      return choice(...table.map(([precedence, operator]) =>
        prec(
          precedence,
          seq(
            operator,
            field("right", $.term),
          ),
        )
      ));
    },
    _prefix_right_associative: $ => {
      const table = [
        [precedence.negation, "/+"], // fy
        [precedence.bitwise_negation, "/"], // fy
        [precedence.positive, "+"], // fy
        [precedence.negative, "-"], // fy
      ];
      return choice(...table.map(([precedence, operator]) =>
        prec.right(
          precedence,
          seq(
            operator,
            field("right", $.term),
          ),
        )
      ));
    },
    _operator_pred_list: $ => {
      return choice(...ops.map((op) => op));
    },
  },
});
