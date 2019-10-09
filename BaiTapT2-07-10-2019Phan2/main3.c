#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[100];
    unsigned int manufacture_year;
    char manufacture[200];
};
int N;//bien toan cuc, co tac dung ben trong main.c
struct Product *input(){
    printf("Numbers of products : ");scanf("%d", &N);
    struct Product *product = (struct Product *)malloc(N * sizeof(struct Product));
    int i;
    for (i = 0; i < N; i++){
        printf("Product number %d :\n", i+1);
        printf("Enter product's name : \n");scanf("%s", (*(product+i)).name);
        printf("Enter product's year : \n");scanf("%d", &((*(product+i)).manufacture_year));
        printf("Enter product's manufacture : \n");scanf("%s", (*(product+i)).manufacture);
    }
    return product;
}
void sort(struct Product *product){
    int i, j;
    struct Product *ptr = product;
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if(strcmp((*(ptr+i)).name, (*(ptr+j)).name) > 0) {
                struct Product temp;
                temp = *(ptr +i);
                *(ptr +i) = *(ptr +j);
                *(ptr +j) = temp;
            }
        }
    }
    printf("Sort finished\n");
}
void display(struct Product *product) {
    int i;
    for(i = 0; i < N; i++){
        printf("Product's name : %s\n", (*(product+i)).name);
        printf("Product's manufacture_year : %d\n", (*(product+i)).manufacture_year);
        printf("Product's manufacture : %s\n", (*(product+i)).manufacture);
    }
}

int main(int argc, char * argv[]) {
    //Tao menu
    printf("+--------------------------------------------------+\n");
    printf("+ 1.Input some Product  2.Sort  3.Display  4.Exit. +\n");
    printf("+--------------------------------------------------+\n");
    struct Product *product = NULL;
    char choice;
    LABEL1: printf("Enter your choice : "); choice = getchar();
    while (choice == '\n') {
        choice = getchar();
    }
    switch (choice) {
        case '1':
            product = input();
            goto LABEL1;
            break;
        case '2':
            sort(product);
            goto LABEL1;
            break;
        case '3':
            display(product);
            goto LABEL1;
            break;
        case '4':
            break;
        default:
            goto LABEL1;
            break;
    }
    return 0;
}
