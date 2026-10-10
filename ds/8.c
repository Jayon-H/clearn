#include <stdio.h>
#include "cs50.h"

int main (void){
    // int scores[3];
    // scores[0] = 1;
    // scores[1] = 2;
    // scores[2] = 3;
    // printf(" %i\n %i\n %i\n",scores[0],scores[1],scores[2]);
    int n;
    int scores[n];
    do
    {
        n = get_int("n: ");
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("scores%i: ",i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("scores%i:%i\n",i+1,scores[i]);
    }
    
    
    
}