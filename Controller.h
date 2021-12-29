#include "Stack.h"
#include <vector>
#include <iostream>
#pragma once
namespace hanoi{
    class Controller
    {
    private:
        std::vector<Stack> *stacks_;
    public:
        Controller(std::vector<Stack> *stacks);
        void moveDisk(int currentStack, int targetStack);
        void getCommand();
    };
}