#include "Disk.h"
namespace hanoi{
    Disk::Disk(int width) : width_(width){}
    unsigned int Disk::getWidth(){
        return width_;
    }
}