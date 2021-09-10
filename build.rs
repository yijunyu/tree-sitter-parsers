extern crate cc;

use std::path::PathBuf;
use std::fs;

fn add_languages() {
    let paths = fs::read_dir("./").unwrap();
    for entry in paths {
        if let Ok(entry) = entry {
            let p = entry.path();
            let s = &p.to_string_lossy();
            if entry.file_type().unwrap().is_dir() && s.starts_with("./tree-sitter-") {
                let v: Vec<&str> = s.strip_prefix("./tree-sitter-").unwrap().split(|c: char| c.is_numeric()).collect();
                let mut lang: &str = v[0].strip_suffix("-").unwrap();
                if lang == "c-sharp" {
                    lang = "c_sharp";
                }
                let path: PathBuf = std::fs::canonicalize::<PathBuf>([s, "src"].iter().collect()).unwrap();
                cc::Build::new().file(path.join("parser.c")).compile(format!("tree-sitter-{}", lang).as_str());
                if path.join("scanner.cc").exists() {
                    cc::Build::new().cpp(true).file(path.join("scanner.cc")).compile(format!("tree-sitter-{}-scanner", lang).as_str());
                }
                if path.join("scanner.c").exists() {
                    cc::Build::new().file(path.join("scanner.c")).compile(format!("tree-sitter-{}-scanner", lang).as_str());
                }
            }
        }
    }
}

fn main() {
    add_languages();
}
