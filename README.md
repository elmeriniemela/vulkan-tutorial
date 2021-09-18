
## Vulkan Tutorial

Based on tutorial series by Brendan Galea: https://www.youtube.com/watch?v=Y9U9IE0gVHA&list=PL8327DO66nu9qYVKLDmdLW_84-yE4auCR

#### Install on Linux:
https://vulkan-tutorial.com/Development_environment#page_Vulkan-Packages

* Vulkan: `sudo pacman -S vulkan-headers vulkan-validation-layers vulkan-tools vulkan-icd-loader vulkan-intel`
* test with `vkcube`
* Window creation and display: `sudo pacman -S glfw-x11`
* Linear algebra: `sudo pacman -S glm`
* Shader compiler (glslc): `sudo pacman -S shaderc`

#### Run makefile:
* `make test`
