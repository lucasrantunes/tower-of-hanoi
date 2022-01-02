#include <iostream>
#include <string>
#include "libs/fort.hpp"
#include "Stack.h"
#pragma once
namespace hanoi{
    class Displayer
    {
    private:
        std::string diskSpaces(int times);
    public:
        Displayer(std::vector<Stack> *stacks_ptr);
    };
}