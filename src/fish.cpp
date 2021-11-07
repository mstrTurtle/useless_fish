#include "fish.h"
#include <cstring>
using namespace turtle::animal;

int
Fish::flow(){
    return SUCCESS;
}

int
Fish::dive(){
    return SUCCESS;
}

int
Fish::give_name(char* _name){
    size_t len;
    if(name != nullptr){
        goto err;
    }
    delete[] name;
    len = strlen(_name);
    name = new char[len+1];
    strcpy(name,_name);
    return SUCCESS;
err:
    return FAILED;
}

int
Fish::get_name(char*& _name){
    if(name == nullptr){
        _name = "";
    }else{
        _name = name;
    }
    return SUCCESS;
}