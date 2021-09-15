use tree_sitter_parsers::parse;
use std::path::Path;
use std::env;

pub fn main() {
    for argument in env::args() {
        let path = Path::new(&argument);
        if path.extension() != None {
            let lang = match path.extension().unwrap().to_str().unwrap() {
                ".c" => "c",
                ".cs"=> "c_sharp",
                ".cc"=> "cpp",
                ".cpp"=> "cpp",
                ".css"=> "css",
                ".elm"=> "elm",
                ".go"=> "go",
                ".html"=> "html",
                ".hs"=> "haskell",
                ".java"=> "java",
                ".js"=> "javascript",
                ".kt"=> "kotlin",
                ".lua"=> "lua",
                ".php"=> "php",
                ".py"=> "python",
                ".rb"=> "ruby",
                ".rs"=> "rust",
                ".scala"=> "scala",
                ".sol"=> "solidity",
                ".sh"=> "bash",
                ".v"=> "verilog",
                ".yaml"=> "yaml",
                ".yml"=> "yaml",
                _ => "c"
            };
            let code = std::fs::read_to_string(argument).unwrap();
            let tree = parse(code.as_str(), lang);
            println!("{}", tree.root_node().to_sexp());
        }
    }
}
