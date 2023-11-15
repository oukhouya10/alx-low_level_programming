#!/bin/bash
wget -P /tmp https://github.com/oukhouya10/alx-low_level_programming/raw/master/0xx18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
