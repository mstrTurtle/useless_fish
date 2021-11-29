#include "fish.h"
#include <cassert>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#define PRINT_NAME(fish_obj) \
    if(!fish.get_name(t))\
        printf("Fish's name: %s.\n",t);\
    else\
        printf("Name not exists.");

using turtle::animal::Fish;

int main(int argc, char* argv[]){
    char* comm;
    char* t = new char[100];
    Fish fish;
    comm = new char[100];
    if(argc == 1){
        printf("Please specify a file.\n");
        goto err;
    }else if(strcmp(argv[1],"-h") == 0){
        printf("Specify a file to do something.\n");
    }else{
        printf("\"%s\" has been loaded.\n",argv[1]);
    }
    printf("Now you have a fish.\n");
    while(true){
        if(!fgets(comm,99,stdin)) goto err;
        if(strcmp(comm,"flow") == 0){
            fish.flow();
            printf("Fish flowed.\n");
        }else if(strcmp(comm,"dive") == 0){
            fish.dive();
            printf("Fish dived.\n");
        }else if(strcmp(comm,"getname") == 0){
            PRINT_NAME(fish);
        }else if(strcmp(comm,"givename") == 0){
            printf("New name: ");
            if(!fgets(t,99,stdin)) goto err;
            if(!fish.give_name(t)){
                printf("[success]");
            }else{
                printf("[unchanged]");
            }
                PRINT_NAME(fish);
        }else{
            printf("Invalid command.\n");
        }
    }
    delete[] comm;
    delete[] t;
    return EXIT_SUCCESS;
err:
    return EXIT_FAILURE;
}