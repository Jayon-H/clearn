#include <stdio.h>
#include "cs50.h"

int and (int a,int b);

int main (void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i",and(x,y));
}

int and (int a,int b){
    return a+b;
}