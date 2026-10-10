#include <stdio.h>
#include "cs50.h"

int main (void){
    int num[] = {3,7,1,9,4};
    int n = get_int("number: ");
    for (int i = 0; i < 5; i++)
    {
        if (n == num[i]){
        printf("Found:%i",num[i]);
        return 0;
        }
    }
    printf("Not Found");
    return 1;
}