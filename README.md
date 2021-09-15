# Tree-sitter parsers

The crate ```tree-sitter-parsers``` preinstalls the tree-sitter parsers for a number of programming languages.

Usage:

```rust
use tree_sitter_parsers::parse;

fn main() {
    let tree = parse("fn main() { }", "rust");
    println!("{}", tree.root_node().to_sexp());
    assert_eq!(tree.root_node().to_sexp(), "(source_file (function_item name: (identifier) parameters: (parameters) body: (block)))");
}

```
In the above invocation of `parse` function, a string of the code is the first argument, and a string of the programming language is the second argument.
Then as a result, the `tree-sitter::Tree` will be returned, where we can access it through the tree-sitter's API. 

The crate can also be run as a command: 
```bash
tree_sitter_parsers <file1>.<ext1> [ <file2>.<ext2> ... ]
```
where `<file>` and `<ext>` are respectively the filename and extension names. The command will turn the input argument files into the ASTs corresponding to the file extension names.

The list of supported languages are:
```
bash
c
cpp
c sharp
css
elm
go
haskell
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
