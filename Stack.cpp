#include "Stack.h"
namespace hanoi{
    Stack::Stack(){
        amount_ = 0;
    }
    Stack::Stack(int amount){
        amount_ = amount;
        for (int i = 0; i < amount_; i++)
        {
            int width = amount_ - i;
            Disk disk(width);
            disks_.push_back(disk);
        }
    }
}