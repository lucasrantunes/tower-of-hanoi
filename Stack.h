#include "Disk.h"
#include <vector>
#pragma once
namespace hanoi{
    class Stack
        {
        private:
            /* data */
            int amount_ = 0;
            std::vector<Disk> disks_;
        public:
            Stack(/* args */);
            Stack(int amount);
    };
}