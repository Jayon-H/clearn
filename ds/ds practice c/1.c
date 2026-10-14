#include <stdio.h>

int main(void){
    int a;
    printf("please input a number:");
    scanf("%d",&a);

    if (a > 0)
    {
        printf("+\n");
    }
    else if (a < 0)
    {
        printf("-\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}