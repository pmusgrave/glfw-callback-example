#include <GLFW/glfw3.h>
#include <stdio.h>

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
  printf("key: %d\tscancode: %d\taction: %d\tmods: %d\n", key, scancode, action, mods);
}


int main(void)
{
  GLFWwindow* window;

  if (!glfwInit())
    return -1;

  window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!window)
    {
      glfwTerminate();
      return -1;
    }

  glfwMakeContextCurrent(window);
  glfwSetKeyCallback(window, key_callback);

  while (!glfwWindowShouldClose(window))
    {
      glClear(GL_COLOR_BUFFER_BIT);

      glBegin(GL_TRIANGLES);
      glVertex2f(-0.5f, -0.5f);
      glVertex2f(-0.0f,  0.5f);
      glVertex2f( 0.5f, -0.5f);
      glEnd();

      glfwSwapBuffers(window);

      // glfwPollEvents();
      glfwWaitEvents();
    }

  glfwTerminate();
  return 0;
}
