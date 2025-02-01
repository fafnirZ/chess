#!/bin/bash

BUILD_FOLDER_NAME="build"

if [[ ! -d $BUILD_FOLDER_NAME ]]; then
    mkdir $BUILD_FOLDER_NAME
fi

cd $BUILD_FOLDER_NAME
cmake ..
make
