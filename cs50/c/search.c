#include <stdio.h>
#include "cs50.h"

int main (void){
    int numbers[] = {20,30,500,100,40};

    int n = get_int("Number: ");
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    
    printf("Not Found\n");
    return 1;
}