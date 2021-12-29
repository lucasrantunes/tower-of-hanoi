#include "Stack.h"
#include <iostream>
namespace hanoi{
    Stack::Stack() : amount_(0){}
    Stack::Stack(int amount) : amount_(amount){
        for (int i = 0; i < amount_; i++)
        {
            int width = amount_ - i;
            Disk disk(width);
            disks_.push_back(disk);
        }
    }
    int Stack::size(){
        return disks_.size();
    }

    void Stack::push_back(Disk &disk){
        disks_.push_back(disk);
    }

    Disk & Stack::peekTop(){
        return disks_[disks_.size() - 1];
    }

    Disk Stack::removeTop() {
        Disk disk = peekTop();
        disks_.pop_back();
        return disk;
    }
}