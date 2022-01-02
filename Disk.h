#include "libs/fort.hpp"
#pragma once
namespace hanoi{
    class Disk
    {
    private:
        unsigned int const width_;
        fort::color color_;
    public:
        Disk(int width);
        unsigned int getWidth();
        fort::color getColor();
    };
}