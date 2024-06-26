//! This crate provides Prolog language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(tree_sitter_YOUR_LANGUAGE_NAME::language()).expect("Error loading YOUR_LANGUAGE_NAME grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_prolog() -> Language;
    fn tree_sitter_problog() -> Language;
}

/// Get the tree-sitter [Language][] for ISO Prolog.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn prolog() -> Language {
    unsafe { tree_sitter_prolog() }
}

/// Get the tree-sitter [Language][] for Problog.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn problog() -> Language {
    unsafe { tree_sitter_problog() }
}

/// The content of the [`node-types.json`][] file for ISO Prolog.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../grammars/prolog/src/node-types.json");

/// The content of the [`node-types.json`][] file for Problog.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../grammars/problog/src/node-types.json");

// Uncomment these to include any queries that this grammar contains

// pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &'static str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_prolog() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::prolog())
            .expect("Error loading Prolog language");
    }

    #[test]
    fn test_can_load_problog() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(super::problog())
            .expect("Error loading Problog language");
    }
}
