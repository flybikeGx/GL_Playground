//
// Created by He Peijian on 2018/2/9.
//

#ifndef OPENGL_INIT_UTILS_H
#define OPENGL_INIT_UTILS_H

#include <iostream>

#include "GLFW/glfw3.h"

using namespace std;

void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void error_callback(int error, const char *description) {
    cout << description << endl;
}

#endif //OPENGL_INIT_UTILS_H
