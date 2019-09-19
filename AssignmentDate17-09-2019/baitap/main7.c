#include <stdio.h>
#include <stdlib.h>
/*
 7. Write a program to generate the following pattern:
 ******
 *****
 ****
 ***
 **
 *
 
 */
int main7(int argc, char *argv[]) {
    int row, column, i;
    for (row = 0 ;row < 6 ; row++) {
        column = 6 - row;
        for (i = 0; i < column; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
