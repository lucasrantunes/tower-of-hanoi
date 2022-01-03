#include "iostream"
#include <vector>
#include "Game.h"
#include "Stack.h"
#include "Controller.h"
#include "Disk.h"

namespace hanoi{
    Game::Game(int difficulty) : difficulty_(difficulty) {
        Stack stack1(difficulty_);
        stacks_.push_back(stack1);
        Stack stack;
        stacks_.push_back(stack); stacks_.push_back(stack);
        Controller controller(&stacks_, difficulty_);
        controller.getCommand(controller);
    }
}