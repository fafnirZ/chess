
cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(chess CXX)

add_executable(chess opengl_example.cpp)
target_link_libraries(chess glfw glew)