cmake_minimum_required(VERSION 3.9)
project(OpenGL_INIT)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenGL REQUIRED)
link_libraries(glfw glew ${OPENGL_LIBRARY})

add_executable(OpenGL_INIT main.cpp constant.h)