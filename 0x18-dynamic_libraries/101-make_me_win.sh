#!/bin/bash
wget -p .. https://raw.githubusercontent.com/NedzunganiK/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD-"$PWD/../libhack.so"
