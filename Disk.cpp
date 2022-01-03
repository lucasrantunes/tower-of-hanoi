#include "Disk.h"
#include "libs/fort.hpp"
namespace hanoi{
    Disk::Disk(int width) : width_(width){
        switch (width_)
        {
        case 1:
            color_ = fort::color::light_yellow;
            break;
        case 2:
            color_ = fort::color::light_blue;
            break;
        case 3:
            color_ = fort::color::light_red;
            break;
        default:
            color_ = fort::color::magenta;
            break;
        }        
    }
    unsigned int Disk::getWidth(){
        return width_;
    }
    fort::color Disk::getColor(){
        return color_;
    }
}