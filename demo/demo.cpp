#include "..\src\fish.h"
#include "cassert"

#include <cstdio>

using namespace turtle::animal;

int main(){
    char* name;

    Fish fish;
    if(!fish.flow()) goto err;
    printf("Fish flows.\n");

    if(!fish.dive()) goto err;
    printf("Fish dives.\n");

    if(!fish.give_name("Nancy")) goto err;
    printf("Fish named \"Nancy\" .\n");

    if(!fish.get_name(name)) goto err;
    printf("Fish's name is %s .\n",name);

    return EXIT_SUCCESS;
err:
    return EXIT_FAILURE;
}