#include "iostream"
#include <vector>
#include "Game.h"
#include "Stack.h"
#include "Controller.h"
#include "Disk.h"

namespace hanoi{
    Game::Game(int difficulty) : difficulty_(difficulty) {
        switch (difficulty)
        {
        case 1:{
            /* easy mode */
            // future objective: use array for stacks, since they are always 3
            Stack stack1(3);
            stacks_.push_back(stack1);
            Stack stack2;
            stacks_.push_back(stack2);
            Stack stack3;
            stacks_.push_back(stack3);
            Controller controller(&stacks_);
            getCommand(controller);
            break;
        }
        default:
            break;
        }
    }

    void Game::getCommand(Controller &controller){
        command:
        int currentStack = 0;
        do
        {
            std::cout << "Actual stack (1-3): ";
            std::cin >> currentStack;
            if (currentStack == 666)
            {
                return;
            }
        } while ( !(currentStack >= 1 && currentStack <= 3) );

        int targetStack;
        do
        {
            std::cout << "Target stack (1-3): ";
            std::cin >> targetStack;  
            if (targetStack == 666)
            {
                return;
            }
        } while ( !(targetStack >= 1 && targetStack <= 3) );
        

        controller.legalMove(currentStack - 1, targetStack - 1);  

        goto command;
    }
}