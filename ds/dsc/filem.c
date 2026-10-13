#include <stdio.h>

int main(void){
    FILE *file = fopen("input.txt","r");
    if (file == NULL)
    {
        printf("can't open the file");
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
    }

    fclose(file);
    return 0;
}