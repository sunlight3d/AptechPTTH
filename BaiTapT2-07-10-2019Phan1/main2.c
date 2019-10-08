#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Product {
    char name[];
    unsigned int manufacture_year;
    char manufacture[];
};
void input(){
    printf("Numbers of products : ");
}
int main(int argc, char * argv[]) {
    //Tao menu
    printf("+--------------------------------------------------+");
    printf("+ 1.Input some Product  2.Sort  3.Display  4.Exit. +");
    printf("+--------------------------------------------------+");
    
    return 0;
}
