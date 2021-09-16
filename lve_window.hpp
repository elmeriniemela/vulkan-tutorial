#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve {
    class LveWindow {
        public:
            LveWindow(int w, int h, std::string name);
            ~LveWindow();

            // disable copy constructor
            // were adhearing to RAII (Resource acquisition is initialization). Destructors handle cleanup.
            LveWindow(const LveWindow &) = delete;
            // disalble copy operator
            LveWindow &operator=(const LveWindow &) = delete;
            bool shouldClose() { return glfwWindowShouldClose(window); };

        private:
            void initWindow();
            const int width;
            const int height;
            std::string windowName;
            GLFWwindow *window;
    };
}
