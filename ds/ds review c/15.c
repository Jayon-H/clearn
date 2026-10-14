#include <stdio.h>
#include "cs50.h"

int main (void){
    int num[] = {2,4,6,8,10,12,14};
    int n = get_int("number: ");
    int a = 7;
    int left = 0;
    int right = n-1;

    while (left <= right)
    {
        int mid = (left + right)/2;
        if (num[mid] == n)
        {
            printf("Found: %i",mid);
            return 0;
        }
        else if (num[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        
    }
    
    printf("Not Found\n");
    return 1;
}