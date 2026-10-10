#include <stdio.h>
#include "cs50.h"

int main (void){
    int num;
    do
    {
        num = get_int("height: ");
    } while (num < 0);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num-i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}