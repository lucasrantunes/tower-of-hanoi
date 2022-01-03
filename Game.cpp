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
        getCommand(controller);
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