#include "Stack.h"
#pragma once
namespace hanoi{
    class Controller
    {
    private:
        Stack &current_stack_;
        Stack &target_stack_;
    public:
        Controller(Stack &current_stack, Stack &target_stack);
    };
}