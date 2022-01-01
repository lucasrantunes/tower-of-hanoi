#include "libs/fort.h"
#pragma once
namespace hanoi{
    class Disk
    {
    private:
        unsigned int const width_;
    public:
        Disk(int width);
        unsigned int getWidth();
    };
}