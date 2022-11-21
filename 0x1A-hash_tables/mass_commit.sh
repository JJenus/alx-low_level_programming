#!/bin/bash

files="$(ls)"

for file in $files; do
	git add "$file"
	git commit -m "added $file"
done
