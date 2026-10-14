#include <stdio.h>
#include "cs50.h"

int main (void){
    int n;
    do
    {
        n = get_int("n: ");
    } while (n <= 0);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = get_float("scores%i: ",i+1);
    }

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float average = sum / (float)n;
    printf("average:%.2f",average);
}
