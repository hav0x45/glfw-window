#include <iostream>
#include <windows.h>
#include <GLFW/glfw3.h>

int main() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, 0);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Title", 0, 0);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    bool running = true;

    while(running) {
        if (GetAsyncKeyState(VK_ESCAPE)) {
            glfwTerminate();
            return 1;
        }
    }

    Sleep(5000);

    return 0;
}