#pragma once
#include "Stack.h"
#include <vector>
namespace hanoi{
    class Game
    {
    private:
        int difficulty_;
        std::vector<Stack> stacks_;
    public:
        Game(int difficulty);
    };
}