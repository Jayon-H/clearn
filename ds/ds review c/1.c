#include <stdio.h>
#include "cs50.h"

int main (void){
    int rows,cols;
    do
    {
    rows = get_int("rows: ");
    cols = get_int("cols: ");
    } while (rows < 0 || cols < 0);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        
}