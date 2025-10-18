#!/bin/bash

#   Average of N input numbers

#   Method 2
#   Get the total no of args with $# and access every arguments that are given using ${!i}

echo "Number of arguments is: $#"

sum=0
for(( i=1; i<=$#; i++ )); do
    (( sum = sum + ${!i}))
done
average=$(( $sum/$# ))

echo "Average of given $# numbers: $average" 