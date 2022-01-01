#include "Disk.h"
#include <vector>
#pragma once
namespace hanoi{
    class Stack
        {
        private:
            /* data */
            unsigned int amount_;
            std::vector<Disk> disks_;
        public:
            Stack(/* args */);
            Stack(int amount);
            int size();
            void push_back(Disk &disk);
            Disk & peekTop();
            Disk removeTop();
            std::vector<Disk> stackStatus();
    };
}