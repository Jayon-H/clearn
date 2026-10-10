#include <stdio.h>
#include "cs50.h"

int main(void){
    printf("what's your name?  ");
    string name;
    name = get_string("");
    printf("hello,%s",name);
    return 0;
}