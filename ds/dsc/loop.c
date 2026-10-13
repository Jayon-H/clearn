#include <stdio.h>

int main(void){
    //n1
    for (int i = 1; i <= 5; i++)
    {
        printf("%i",i);
    }
    printf("\n");

    //n2
    int a = 1;
    while (a <= 5)
    {
        printf("%i",a);
        a++;
    }
    printf("\n");

    //n3
    int b = 1;
    do
    {
        printf("%i",b);
        b++;
    } while (b <= 5);
    printf("\n");
    
    
    
}