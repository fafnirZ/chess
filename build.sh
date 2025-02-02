#!/bin/bash

################
# process args #
################

POSITIONAL_ARGS=()

while [[ $# -gt 0 ]]; do
    case "$1" in 
        --cmk-verbose)
            CMAKE_VERBOSE=true
            shift
            ;;
        --mk-verbose)
            MAKE_VERBOSE=true
            shift
            ;;
        -d|--debug)
            CMAKE_DEBUG=true
            shift
            ;;
        *)
            POSITIONAL_ARGS+=("$1")
            shift
            ;;
    esac
done

#########
# build #

BUILD_FOLDER_NAME="build"
if [[ ! -d "$BUILD_FOLDER_NAME" ]]; then
    mkdir "$BUILD_FOLDER_NAME"
fi

cd "$BUILD_FOLDER_NAME"

###############
# cmake flags #
###############
cmake_flags=() # array
if [[ $CMAKE_VERBOSE ]]; then
    cmake_flags+=("--trace-expand")
elif [[ $MAKE_VERBOSE ]]; then
    cmake_flags+=("-DCMAKE_VERBOSE_MAKEFILE=ON")
elif [[ $CMAKE_DEBUG ]]; then
    cmake_flags+=("-DCMAKE_BUILD_TYPE=Debug")
fi
cmake_flags_string="${cmake_flags[*]}" # space delimited

echo $cmake_flags_string
cmake $cmake_flags_string ..

##############
# make flags #
##############
make_flags=() # array
if [[ $MAKE_VERBOSE ]]; then
    make_flags+=("VERBOSE=1")
fi
make_flags_string="${make_flags[*]}" # space delimited
make $make_flags_string