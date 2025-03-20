/*
 * All section numbers refer to: "ISO/IEC 13211: Information technology –
 * Programming languages – Prolog. International Organization for
 * Standardization, Geneva.".
 *
 * ProbLog-specific modifications follow L. De Raedt, A. Kimmig and H. Toivonen.
 * "ProbLog: A Probabilistic Prolog and its Application in Link Discovery".
 * IJCAI 2007, Proceedings of the 20th International Joint Conference on
 * Artificial Intelligence, pp. 2462 - 2467, 2007.
 */

module.exports = grammar(require("../prolog/grammar"), {
  name: "problog",
  rules: {
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
        $._number,
        "::",
      ),
  },
});
