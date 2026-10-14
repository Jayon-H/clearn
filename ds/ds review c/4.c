#include <stdio.h>
#include "cs50.h"

int main (void){
    //逻辑运算
    int a = get_int("a: ");
    int b = get_int("b: ");
    if ( a>b && a>0 && b>0 )
    {
        printf("111");
    }
    else if ( a<b && a>0 && b>0 )
    {
        printf("222");
    }
    else
    {
        printf("333");
    }
    
}