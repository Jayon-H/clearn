#include <stdio.h>
#include "cs50.h"

int main (int argc,string argv[]){
    if (argc != 2)
    {
        printf("use ./13.exe name");
        return 1;
    }
    printf("hello,%s",argv[1]);
    return 0;
}