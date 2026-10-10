#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main (void){
    string s = get_string("Text: ");
    for (int i = 0 , len = strlen(s); i < len; i++)
    {
        printf("%c = %i \n",s[i],s[i]);
    }
    
}