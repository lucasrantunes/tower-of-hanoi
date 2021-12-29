#include <iostream>
#include "Controller.h"
#include <iomanip>

namespace hanoi{
    Controller::Controller(std::vector<Stack> *stacks){
        stacks_ = stacks;
        std::cout << "Just type 666 if you want to go back to the main menu.\n" << std::endl;
        getCommand();
    }

    void Controller::moveDisk(int currentStack, int targetStack){
        Disk disk = (*stacks_)[currentStack].removeTop();
        (*stacks_)[targetStack].push_back(disk);
    }

    void Controller::getCommand(){
        command:
        std::cout << "Insert the moviment: " << std::endl;
        int currentStack;
        std::cin >> currentStack;
        int targetStack;
        std::cin >> targetStack;    
        if (targetStack == 666 || currentStack == 666)
        {
            return;
        }
        moveDisk(currentStack - 1, targetStack - 1);    
        std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[0].size();
        std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[1].size();
        std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[2].size() << std::endl;
        //precisa mostrar quais os tamanhos dos discos de cada pilha
        goto command;
    }
}