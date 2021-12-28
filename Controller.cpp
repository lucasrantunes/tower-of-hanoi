#include "Controller.h"
namespace hanoi{
    Controller::Controller(Stack &current_stack, Stack &target_stack){
        current_stack_ = current_stack;
        target_stack_ = target_stack;
    }
}