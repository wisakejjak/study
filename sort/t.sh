#!/bin/bash

for dir in */; do
    dir=${dir%*/}
    echo "#include <iostream>" > $dir/$dir.cpp
done
