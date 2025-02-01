
cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(chess CXX)

# headers
include_directories(include)

add_subdirectory(src)