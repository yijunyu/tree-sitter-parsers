# Tree-sitter parsers

The crate ```tree-sitter-parsers``` preinstalls the tree-sitter parsers for a number of programming languages.

Usage:

```rust
use tree_sitter_parsers::parse;

fn main() {
    let tree = parse("fn main() { }", "rust");
    assert_eq!(tree.root_node().to_sexp(), "(source_file (function_item name: (identifier) parameters: (parameters) body: (block)))");
}
```

In the above invocation of `parse` function, a string of the code is the first argument, and a string of the programming language is the second argument.
Then as a result, the `tree-sitter::Tree` will be returned, where we can access it through the tree-sitter's API. 

The list of supported languages are:
```
bash
c
cpp
c sharp
css
elm
go
html
java
javascript
kotlin
lua
php
python
ruby
rust
scala
solidity
verilog
yaml
```
