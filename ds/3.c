#include <stdio.h>
#include "cs50.h"

int main (void){
    int a,b;
    do
    {
        a = get_int("a: ");        
    } while (a <= 0);
    do
    {
        b = get_int("b: ");
    } while (b <= 0);
    
    
    //算术运算
    printf("Sum: %i\n", a + b);      // 和
    printf("Diff: %i\n", a - b);     // 差
    printf("Product: %i\n", a * b);  // 积
    printf("Quotient: %i\n", a / b); // 整数除法，会丢小数
    printf("Remainder: %i\n", a % b); // 余数
    //比较运算
    if (a > b)
    {
        printf("a>b");
    }
    if (a < b)
    {
        printf("a<b");
    }
    else
    {
        printf("a=b");
    }
    
    return 0;
    
}