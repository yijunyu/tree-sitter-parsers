#!/bin/bash
p=$(dirname $0)
grep type $p/src/node-types.json  | cut -d" " -f6 | cut -d'"' -f2 | sort | uniq | sed -e '/^$/d' > types.txt
