#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve
{
    class LveWindow
    {
    public:
        LveWindow(int w, int h, std::string name);
        ~LveWindow();

        // were adhearing to RAII (Resource acquisition is initialization). Destructors handle cleanup.

        LveWindow(const LveWindow &) = delete;            // disable copy constructor
        LveWindow &operator=(const LveWindow &) = delete; // disalble copy operator

        bool shouldClose() { return glfwWindowShouldClose(window); };
        bool wasWindowResized() { return framebufferResized; }
        void resetWindowResizedFlag() { framebufferResized = false; }
        GLFWwindow *getGLFWwindow() const { return window; }

        void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);
        VkExtent2D getExtent() { return {static_cast<uint32_t>(width), static_cast<uint32_t>(height)}; };

    private:
        static void framebufferResizeCallback(GLFWwindow *window, int width, int height);
        void initWindow();
        int width;
        int height;
        int framebufferResized;
        std::string windowName;
        GLFWwindow *window;
    };
}
