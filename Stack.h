#include "Disk.h"
#include <vector>
#pragma once
namespace hanoi{
    class Stack
        {
        private:
            /* data */
            int amount_;
            std::vector<Disk> disks_;
        public:
            Stack(/* args */);
            Stack(int amount);
            int size();
            void push_back(Disk &disk);
    };
}