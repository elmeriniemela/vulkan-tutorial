#pragma once

#include "lve_device.hpp"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>

#include <vector>

namespace lve
{
    class LveModel
    {
    public:
        struct Vertex
        {
            glm::vec3 position{};
            glm::vec3 color{};
            static std::vector<VkVertexInputBindingDescription> getBindingDescriptions();
            static std::vector<VkVertexInputAttributeDescription> getAttributeDescriptions();
        };

        LveModel(LveDevice &device, const std::vector<Vertex> &vertices);
        ~LveModel();

        LveModel(const LveModel &) = delete;            // disable copy constructor
        LveModel &operator=(const LveModel &) = delete; // disalble copy operator

        void bind(VkCommandBuffer commandBuffer);
        void draw(VkCommandBuffer commandBuffer);

    private:
        void createVertexBuffers(const std::vector<Vertex> &verticies);

        LveDevice &lveDevice;
        VkBuffer vertexBuffer;
        VkDeviceMemory vertexBufferMemory;
        uint32_t vertexCount;
    };
}
