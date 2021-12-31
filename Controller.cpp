#include <iostream>
#include "Controller.h"
#include <iomanip>

namespace hanoi{
    Controller::Controller(std::vector<Stack> *stacks){
        stacks_ = stacks;
        std::cout << "Insert the moviments or type 666 to go back to the main menu." << std::endl;
        getCommand();
    }
    
    void Controller::moveDisk(int currentStack, int targetStack){
        Disk disk = (*stacks_)[currentStack].removeTop();
        (*stacks_)[targetStack].push_back(disk);
    }

    void Controller::getCommand(){
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
        

        moveDisk(currentStack - 1, targetStack - 1);    
        /*std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[0].size();
        std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[1].size();
        std::cout << std::left << std::setw(6) << std::setfill(' ') << (*stacks_)[2].size() << std::endl;*/
        //precisa mostrar quais os tamanhos dos discos de cada pilha
        goto command;
    }
}