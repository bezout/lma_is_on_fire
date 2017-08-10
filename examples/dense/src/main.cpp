#include <iostream>
#include <array>

#include <lma/lma.hpp>

template<typename Type, int Channels>
struct Pixel{
    std::array<Type, Channels> data;
};

struct Image{
    size_t width;
    size_t height;

    size_t size() const { return width * height; }
};

int main()
{
    std::cout << "Hello" << std::endl;

    return 0;
}
