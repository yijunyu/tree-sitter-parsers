#!/bin/bash
p=$(dirname $0)
tree-sitter parse $1 -xq | xsltproc $p/tokens.xsl - | sed -e 's/ //g' -e '/^$/d'
