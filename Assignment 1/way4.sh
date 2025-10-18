#!/bin/bash

sum=$(( $* ))
average=$(( $sum/$# ))
echo "$average"