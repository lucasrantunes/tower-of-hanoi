#include <iostream>
#include "Controller.h"

namespace hanoi{
    Controller::Controller(std::vector<Stack> *stacks_ptr) : stacks_ptr_(stacks_ptr) {
        display_.setStacks(stacks_ptr);
        std::cout << "Insert the moviments or type 666 to go back to the main menu." << std::endl;
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
    }

    void Controller::showStatus(){
        for (int stack = 0; stack < 3; stack++)
        {
            for (int disk = 0; disk < stacks_ptr_->at(stack).size(); stack++)
            {
                /* code */
            }
        }
    }

}