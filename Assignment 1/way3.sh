#!/bin/bash

#   Average of N input numbers

#   Method 3
#   Get the list of arguments using $@ and iterate through them

echo "List of arguments is: $@"

sum=0
for num in "$@"; do
    (( sum = sum + $num))
done
average=$(( $sum/$# ))

echo "Average of given $# numbers: $average" 