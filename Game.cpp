#include "Game.h"
#include "Stack.h"
#include <vector>
namespace hanoi{
    Game::Game(int difficulty){
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
            break;
        }
        default:
            break;
        }
    }
}