#include <stdio.h>
#include "cs50.h"

int diamond(int a,char b);

int main (void){
    int n = get_int("number: ");
    char ch = get_char("char: ");
    diamond(n,ch);
}

int diamond(int a,char b){
    if (a%2 == 0)
    {
        printf("counldn't draw");
        return 1;
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < a-1; k++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}