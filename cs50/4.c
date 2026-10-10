/*
#include <stdio.h>
#include "cs50.h"

int main(void){
    string name = get_string("Name: ");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n",n);

}
*/

#include<stdio.h>
#include <string.h>
#include "cs50.h"

int main (void){
    string name = get_string("Name: ");
    int n = strlen(name);
    printf("%i\n",n);  /* maybe we can just printf("%i\n",strlen(name)); */
}