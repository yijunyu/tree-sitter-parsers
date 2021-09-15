extern crate cc;

use std::path::PathBuf;
use std::fs;

fn canonical_to_path(p: &PathBuf) -> String {
   let path = p.to_str().unwrap();
   // workaround for UNC path see https://github.com/rust-lang/rust/issues/42869
   if path.starts_with(r"\\?\") {
       String::from(&path[r"\\?\".len()..])
   } else {
       String::from(path)
   }
}

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
                let p: PathBuf = std::fs::canonicalize::<PathBuf>([s, "src"].iter().collect()).unwrap();
                let path = & canonical_to_path(&p);
                let parser_path = canonical_to_path(&p.join("parser.c"));
                cc::Build::new().include(path).file(parser_path).warnings(false).compile(format!("tree-sitter-{}", lang).as_str());
                if p.join("scanner.cc").exists() {
                    let scanner_path = canonical_to_path(&p.join("scanner.cc"));
                    cc::Build::new().cpp(true).include(path).file(scanner_path).warnings(false).compile(format!("tree-sitter-{}-scanner", lang).as_str());
                }
                if p.join("scanner.c").exists() {
                    let scanner_path = canonical_to_path(&p.join("scanner.c"));
                    cc::Build::new().include(path).file(scanner_path).warnings(false).compile(format!("tree-sitter-{}-scanner", lang).as_str());
                }
            }
        }
    }
}

fn main() {
    add_languages();
}
