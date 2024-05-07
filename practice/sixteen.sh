#!/bin/bash

echo "Enter a string:"
read input_string

reversed_string=""
len=${#input_string}
i=$((len - 1))

while [ $i -ge 0 ]; do
    # Extract a single character at index $i
    char=${input_string:i:1}
    reversed_string="$reversed_string$char"
    i=$((i - 1))
done

echo "Reversed string: $reversed_string"
