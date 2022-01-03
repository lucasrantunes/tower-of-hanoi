#include <iostream>
#include "Controller.h"
#include "Displayer.h"

namespace hanoi{
    Controller::Controller(std::vector<Stack> *stacks_ptr, int difficulty) : stacks_ptr_(stacks_ptr), difficulty_(difficulty) {
        std::cout << "Insert the moviments or type 666 to go back to the main menu." << std::endl;
        Displayer displayer(stacks_ptr_, difficulty_);
    }
    
    void Controller::getCommand(Controller &controller){
        while(1){
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
            
            legalMove(currentStack - 1, targetStack - 1);  
        }
    }

    void Controller::legalMove(int currentStack, int targetStack){
        //  check if actual stack is not empty:
        if (stacks_ptr_->at(currentStack).size() > 0)
        {
            // check if target stack is not empty
            if (stacks_ptr_->at(targetStack).size() > 0)
            {
                // check if is not an attempt to put a large disk on top of a small one
                if (stacks_ptr_->at(targetStack).peekTop().getWidth() > stacks_ptr_->at(currentStack).peekTop().getWidth())
                {
                    moveDisk(currentStack, targetStack);
                }else{
                    std::cout << "Invalid move: attempt to put a large disk on top of a small one." << std::endl;
                }
            }else{
                moveDisk(currentStack, targetStack);
            }
        }else{
            std::cout << "Invalid move: actual stack is empty." << std::endl;
        }
    }

    void Controller::moveDisk(int currentStack, int targetStack){
        Disk disk = stacks_ptr_->at(currentStack).removeTop();
        stacks_ptr_->at(targetStack).push_back(disk);
        Displayer displayer(stacks_ptr_, difficulty_);
    }

}