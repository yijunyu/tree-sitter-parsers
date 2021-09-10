#[cfg(test)]
use tree_sitter_parsers::{parse};
#[test]
fn it_works() {
    let tree = parse("fn main() { }", "rust");
    assert_eq!(tree.root_node().to_sexp(), "(source_file (function_item name: (identifier) parameters: (parameters) body: (block)))");
}
