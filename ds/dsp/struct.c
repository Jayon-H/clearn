#include <stdio.h>

typedef struct
{
    char *name;
    int number;
}person;

int main(void){
    person arr[2];

    arr[0].name = "David";
    arr[0].number = 114514;

    arr[1].name = "Kill";
    arr[1].number = 8989810;

    printf("%s\t%i\n%s\t%i\n",arr[0].name,arr[0].number,arr[1].name,arr[1].number);
}