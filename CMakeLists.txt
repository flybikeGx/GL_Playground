cmake_minimum_required(VERSION 3.9)
project(OpenGL_INIT)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/local/include)

find_package(OpenGL REQUIRED)
link_libraries(/usr/local/lib/libglfw.dylib /usr/local/lib/libGLEW.dylib /usr/local/lib/libassimp.dylib ${OPENGL_LIBRARY})

add_executable(OpenGL_INIT main.cpp constant.h utils.h shader.h mesh.h model.h stb_image.cpp stb_image.h camera.h)