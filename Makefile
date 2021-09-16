CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: *.cpp *.hpp shaders/*.spv
	g++ $(CFLAGS) -o VulkanTest *.cpp $(LDFLAGS)
	./compile.sh

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest
	rm -f shaders/*.spv