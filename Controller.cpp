#include <iostream>
#include "Controller.h"

namespace hanoi{
    Controller::Controller(std::vector<Stack> &stacks) : stacks_(stacks){
        std::cout << "Just type 666 if you want to go back to the main menu.\n" << std::endl;
        getCommand();
    }
    int Controller::moveDisk(int currentStack, int targetStack){
        Disk &disk = peekTop((*stacks_)[currentStack]);
        (*stacks_)[targetStack].push_back(disk);
        return 0;
    }
    void Controller::getCommand(){
        command:
        int currentStack;
        std::cin >> currentStack;
        int targetStack;
        std::cin >> targetStack;    
        if (targetStack == 666 || currentStack == 666)
        {
            return;
        }
        moveDisk(currentStack, targetStack);    
        goto command;
    }
    Disk & peekTop(Stack &stack){
        return stack[stack.size() - 1];
    }
}