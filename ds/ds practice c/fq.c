#include <stdio.h>

int add(int x,int y);

int main(void){
    int a,b;
    printf("a: ");
    scanf("%i",&a);
    printf("b: ");
    scanf("%i",&b);

    add(a,b);
}

int add(int x,int y){
    printf("%i\n",x + y);
}