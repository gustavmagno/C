#include <GLFW/glfw3.h>
#include <stdio.h>
#include <leif/leif.h>

static void on_error(int code, const char* msg) {
    printf("GLFW erro %d: %s\n", code, msg);
}

int main(void) {
    glfwSetErrorCallback(on_error);

    if (!glfwInit()) {
        printf("falha no glfwInit\n");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Todo", NULL, NULL);
    if (!window) {
        printf("falha ao criar a janela\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    printf("OpenGL: %s\n", glGetString(GL_VERSION));
    printf("GPU: %s\n", glGetString(GL_RENDERER));

    lf_init_glfw(1280, 720, window);

    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

        lf_begin();
        lf_text("Hello World!");
        lf_end();

        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}