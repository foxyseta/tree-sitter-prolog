import XCTest
import SwiftTreeSitter
import TreeSitterProlog

final class TreeSitterPrologTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_prolog())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Prolog grammar")
    }
}
