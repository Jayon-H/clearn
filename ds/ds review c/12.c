#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"

int main (void){
    string s = get_string("Text: ");
    for (int i = 0 , len = strlen(s); i < len; i++)
    {
        printf("%c",toupper(s[i]));
    }
    printf("\n");
}