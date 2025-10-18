#!/bin/bash

#   Average of 15 input numbers

#   Method 1
#   access 1-9 args as $1, $2, ... . after that use ${n}, n>9

sum=$(($1+$2+$3+$4+$5+$6+$7+$8+$9+${10}+${11}+${12}+${13}+${14}+${15}))     # have to mention every inputs this way
average=$(($sum/15))

echo "$average"


