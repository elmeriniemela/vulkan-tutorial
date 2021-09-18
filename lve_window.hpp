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
        VkExtent2D getExtent() { return {static_cast<uint32_t>(width), static_cast<uint32_t>(height)}; };
        void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

    private:
        void initWindow();
        const int width;
        const int height;
        std::string windowName;
        GLFWwindow *window;
    };
}
