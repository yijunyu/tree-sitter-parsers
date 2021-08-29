from os import path
from tree_sitter import Language, Parser
from pathlib import Path
import glob, os
language = "c"
Languages = {}
home = str(Path.home())
cd = os.getcwd()
p = path.join(home, ".tree-sitter", "bin")
os.chdir(p)
for file in glob.glob("*.so"):
    try:
       lang = os.path.splitext(file)[0]
       print(path.join(p, file))
       Languages[lang] = Language(path.join(p, file), lang)
    except:
       print("An exception occurred to {}".format(lang))
os.chdir(cd)
parser = Parser()
lang = Languages.get(language)
parser.set_language(lang)
