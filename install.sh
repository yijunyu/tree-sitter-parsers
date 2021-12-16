#!/bin/bash
for l in bash c cpp c-sharp css elm go haskell html java javascript kotlin lua markdown php python ruby rust scala solidity verilog yaml; do
    npm pack tree-sitter-$l
done
for l in *.tgz; do
    f=${l/.tgz/}
    mkdir -p $f
    tar xvfz $l --strip-components=1 -C $f
done
