#!/bin/bash
wget -P .. https://raw.githubusercontent.com/PCalurie/0x18-dynamic_libraries/inject-code.so
export LD_PRELOAD="$PWD/../inject-code.so"
