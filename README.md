
## Vulkan Tutorial

Based on tutorial series by Brendan Galea: https://www.youtube.com/watch?v=Y9U9IE0gVHA&list=PL8327DO66nu9qYVKLDmdLW_84-yE4auCR

#### Install on Arch based Linux distro:
https://vulkan-tutorial.com/Development_environment#page_Vulkan-Packages

* Vulkan: `sudo pacman -S vulkan-headers vulkan-validation-layers vulkan-tools vulkan-icd-loader vulkan-intel`
* Test Vulkan with `vkcube`
* Window creation and display: `sudo pacman -S glfw-x11`
* Linear algebra: `sudo pacman -S glm`
* Shader compiler (glslc): `sudo pacman -S shaderc`
* tinyobjloader: `yay -S tinyobjloader`

#### Setup VS-Code for development:
* VS-code extensions: `ms-vscode.cpptools` `slevesque.shader` `cadenas.vscode-glsllint` `xaver.clang-format`
* clang-format to auto format shader code: `sudo pacman -S clang`
* glslint vulkan syntax (settings.json): `"glsllint.glslangValidatorArgs": "-V"`


#### Run makefile:
* `make test`
