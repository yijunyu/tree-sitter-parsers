#[allow(dead_code)]
use tree_sitter::{Parser, Language, Tree};
extern "C" { fn tree_sitter_bash() -> Language; }
extern "C" { fn tree_sitter_c() -> Language; }
extern "C" { fn tree_sitter_cpp() -> Language; }
extern "C" { fn tree_sitter_c_sharp() -> Language; }
extern "C" { fn tree_sitter_css() -> Language; }
extern "C" { fn tree_sitter_elm() -> Language; }
extern "C" { fn tree_sitter_go() -> Language; }
extern "C" { fn tree_sitter_html() -> Language; }
extern "C" { fn tree_sitter_java() -> Language; }
extern "C" { fn tree_sitter_javascript() -> Language; }
extern "C" { fn tree_sitter_kotlin() -> Language; }
extern "C" { fn tree_sitter_lua() -> Language; }
extern "C" { fn tree_sitter_php() -> Language; }
extern "C" { fn tree_sitter_python() -> Language; }
extern "C" { fn tree_sitter_ruby() -> Language; }
extern "C" { fn tree_sitter_rust() -> Language; }
extern "C" { fn tree_sitter_scala() -> Language; }
extern "C" { fn tree_sitter_solidity() -> Language; }
extern "C" { fn tree_sitter_verilog() -> Language; }
extern "C" { fn tree_sitter_yaml() -> Language; }

pub fn parse(code: &str, lang: &str) -> Tree {
    let mut parser = Parser::new();
    let language = match &lang[..] {
        "bash" => unsafe { tree_sitter_bash() },
        "c" => unsafe { tree_sitter_c() },
        "cpp" => unsafe { tree_sitter_cpp() },
        "c_sharp" => unsafe { tree_sitter_c_sharp() },
        "css" => unsafe { tree_sitter_css() },
        "elm" => unsafe { tree_sitter_elm() },
        "go" => unsafe { tree_sitter_go() },
        "html" => unsafe { tree_sitter_html() },
        "java" => unsafe { tree_sitter_java() },
        "javascript" => unsafe { tree_sitter_javascript() },
        "kotlin" => unsafe { tree_sitter_kotlin() },
        "lua" => unsafe { tree_sitter_lua() },
        "php" => unsafe { tree_sitter_php() },
        "python" => unsafe { tree_sitter_python() },
        "ruby" => unsafe { tree_sitter_ruby() },
        "rust" => unsafe { tree_sitter_rust() },
        "scala" => unsafe { tree_sitter_scala() },
        "solidity" => unsafe { tree_sitter_solidity() },
        "verilog" => unsafe { tree_sitter_verilog() },
        "yaml" => unsafe { tree_sitter_yaml() },
        _ => unsafe { tree_sitter_bash() }
    };
    parser.set_language(language).unwrap();
    parser.parse(code, None).unwrap()
}
