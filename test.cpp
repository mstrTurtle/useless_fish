#include "fish.h"
#include <cassert>

using namespace turtle::animal;

int main(){
    const int SUCCESS_RET = 0;
    const int FAILED_RET = 1;

    Fish fish_obj;
    assert(fish_obj.flow() == SUCCESS_RET);
    assert(fish_obj.dive() == SUCCESS_RET);
    assert(fish_obj.give_name("hello_fish") == SUCCESS_RET);
    assert(fish_obj.give_name("another_name") == FAILED_RET);

    return SUCCESS_RET;
}