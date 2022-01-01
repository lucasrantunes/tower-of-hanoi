#include <iostream>
#include <vector>
#include "Stack.h"
#include "Displayer.h"
#pragma once
namespace hanoi{
    class Controller
    {
    private:
        std::vector<Stack> *stacks_ptr_;
        Displayer display_;
    public:
        Controller(std::vector<Stack> *stacks_ptr);
        void moveDisk(int currentStack, int targetStack);
        void legalMove(int currentStack, int targetStack);
        void showStatus();
    };
}