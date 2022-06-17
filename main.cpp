#include <cstdlib>
#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (glfwInit() == GL_FALSE)
    {
        std::cerr << "Can't initialize GLFW" << std::endl;
        return 1;
    }
    atexit(glfwTerminate);

    GLFWwindow *const window(glfwCreateWindow(640, 480, "Hello!", NULL, NULL));
    if (window == NULL)
    {
        std::cerr << "Can't create GLFW window." << std::endl;
        return 1;
    }

    glfwMakeContextCurrent(window);

    glClearColor(0.2f, 0.2f, 0.2f, 0.0f);

    // loop

    while (glfwWindowShouldClose(window) == GL_FALSE)
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwWaitEvents();
    }
    glfwTerminate();
    return 0;
}