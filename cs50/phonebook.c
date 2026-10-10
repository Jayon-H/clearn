#include <stdio.h>
#include <string.h>
#include "cs50.h"

typedef struct
{
    string name;
    string number;
}person;

int main (void){
    person people[3];

    people[0].name = "Kelly";
    people[0].number = "123";

    people[1].name = "David";
    people[1].number = "234";

    people[2].name = "Jahn";
    people[2].number = "345";

    string n = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name,n) == 0)
        {
            printf("Found %s\n",people[i].number);
            return 0;
        }
        
    }
    printf("Not Found\n");
    return 1;
}