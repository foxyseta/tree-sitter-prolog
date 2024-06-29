(comment) @comment @spell

(atom) @constant

((atom) @boolean
  (#eq? @boolean "true"))

((atom) @boolean
  (#eq? @boolean "false"))

(functional_notation
  function: (atom) @function.call)

(integer) @number

(float_number) @number.float

[
  (directive_head)
  (operator_1200xfx)
  (operator_1200fx)
  (operator_1050xfy)
  (operator_1000xfy)
  (operator_900fy)
  (operator_700xfx)
  (operator_500yfx)
  (operator_400yfx)
  (operator_200xfx)
  (operator_200xfy)
  (operator_200fy)
] @operator

[
 (open)
 (open_ct)
 (close)
 (open_list)
 "|"
 (close_list)
 (open_curly)
 (close_curly)
] @punctuation.bracket

[
 (arg_list_separator)
 (comma)
 (end)
 (list_notation_separator)
 (operator_1100xfy)
] @punctuation.delimiter

(double_quoted_list_notation) @string

(variable_term) @variable
