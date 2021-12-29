#include "iostream"
#include <vector>
#include "Game.h"
#include "Stack.h"
#include "Controller.h"

namespace hanoi{
    Game::Game(int difficulty) : difficulty_(difficulty) {
        switch (difficulty)
        {
        case 1:{
            /* easy mode */
            Stack stack1(3);
            stacks_.push_back(stack1);
            Stack stack2;
            stacks_.push_back(stack2);
            Stack stack3;
            stacks_.push_back(stack3);
            Controller controller(&stacks_);
            break;
        }
        default:
            break;
        }
    }

}