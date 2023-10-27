#!/bin/bash

for file in *.c; do
	filename="${file%.*}"
	gcc -c "$file" -o "$filename.o"
done
