#include <stdio.h>
#include <string.h>

int main(void){
    char *name1;
    printf("Name1: ");
    scanf("%s",name1);

    char *name2;
    printf("Name2: ");
    scanf("%s",name2);

    if (strcmp(name1,name2) == 0)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }
    
}