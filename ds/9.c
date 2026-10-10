#include <stdio.h>
#include "cs50.h"

int max (int a[],int n);

int main (void){
    int n;
    do
    {
        n = get_int("n: ");
    } while (n <= 0);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = get_int("scoers: ");
    }
    printf("the max is %i",max(a,n));
}

int max (int a[],int n){
    int m = a[0];
    for (int  i = 0; i < m; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
        
    }
    
    return m;

}