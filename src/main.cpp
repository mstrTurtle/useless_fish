#include "fish.h"
#include <cassert>
#include <cstdio>
#include <cstring>

int main(int argc, char* argv[]){
    char* comm;
    comm = new char[100];
    if(argc == 1){
        printf("Please specify a file.\n");
        goto err;
    }else if(strcmp(argv[1],"-h") == 0){
        printf("Specify a file to do something.\n");
    }else{
        printf("\"%s\" has been loaded.\n",argv[1]);
    }
    turtle::animal::Fish fish;
    printf("Now you have a fish.");
    while(true){
        if(!gets(comm)) goto err;
        if(strcmp(comm,"flow") == 0){
            fish.flow();
            printf("Fish flowed.\n");
        }else if(strcmp(comm,"dive") == 0){
            fish.dive();
            printf("Fish dived.\n");
        }else if(strcmp(comm,"getname") == 0){
            char* t = new char[100];
            fish.get_name(t);
            printf("Fish name: %s.\n",t);
            delete[] t;
        }else if(strcmp(comm,"givename") == 0){
            char* t = new char[100];
            printf("New name: ");
            gets(t);
            if(fish.give_name(t)){
                printf("Fish name given: %s.\n",t);
            }else{
                fish.get_name(t);
                printf("Fish name unchanged: %s.\n",t);
            }
            delete[] t;
        }
    }
    delete[] comm;
    return 0;
err:
    return 1;
}