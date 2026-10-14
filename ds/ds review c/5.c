#include <stdio.h>
#include "cs50.h"

int main (void){
    int n;
    int i = 1;
    do
    {
        n = get_int("n: ");
    } while (n<=0 || n>=5);
    
    // while (i <= n)
    // {
    //     printf("%i \n",i);
    //     i++;
    // }
    
    // do
    // {
    //     printf("%i \n",i);
    //     i++;
    // } while (i <= n);

    for (int i = 0; i <= n; i++)
    {
        printf("%i \n",i);
    }
    
    
    
}