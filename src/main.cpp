#include <iostream>
#include <vulkan/vulkan.h>

int main()
{
    std::cout << "xrPhoton booting...\n";

    uint32_t instanceVersion = VK_API_VERSION_1_0;
    const VkResult result = vkEnumerateInstanceVersion(&instanceVersion);

    if (result != VK_SUCCESS) {
        std::cerr << "Failed to enumerate Vulkan instance version.\n";
        return 1;
    }

    std::cout << "Vulkan instance version: "
              << VK_VERSION_MAJOR(instanceVersion) << '.'
              << VK_VERSION_MINOR(instanceVersion) << '.'
              << VK_VERSION_PATCH(instanceVersion) << '\n';

    return 0;
}
