#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[100];
    unsigned int age;
    char job[200];
};
int N;//bien toan cuc, co tac dung ben trong main.c
struct Person *input(){
    printf("Numbers of Persons : ");scanf("%d", &N);
    struct Person *Person = (struct Person *)malloc(N * sizeof(struct Person));
    int i;
    for (i = 0; i < N; i++){
        printf("Person number %d :\n", i+1);
    	printf("Enter Person's name : \n");scanf("%s", (*(Person+i)).name);
    	printf("Enter Person's age : \n");scanf("%d", &((*(Person+i)).age));
    	printf("Enter Person's job : \n");scanf("%s", (*(Person+i)).job);
    }
    return Person;
}
void save(struct Person *person){
	int i, j;
    char fileName[200];
    printf("Enter file name : "); scanf("%s", fileName);
    FILE *file = fopen(".\\test.bin","wb"); // w for write, b for binary
    fwrite(person, sizeof(struct Person *), 1, file);
    
    if (!file) {
        printf("Cannot open file %s\n", fileName);
        exit(1);
    } else {
        fwrite(person, sizeof(struct Person *), 1, file);
    }
    fclose(file);
    char* path = realpath(".\\test.bin", NULL);
    printf("Save finished\n");
}
void display(struct Person *Person) {
    int i;
    for(i = 0; i < N; i++){
        printf("Person's name : %s\n", (*(Person+i)).name);
        printf("Person's age : %d\n", (*(Person+i)).age);
        printf("Person's job : %s\n", (*(Person+i)).job);
    }
}

int main(int argc, char * argv[]) {
    //Tao menu
    printf("+-------------------------------------------------------+\n");
    printf("+ 1.Input some Persons  2.Save to file  3.Open  4.Exit. +\n");
    printf("+-------------------------------------------------------+\n");
    struct Person *person = NULL;
    char choice;
    LABEL1: printf("Enter your choice : "); choice = getchar();
    while (choice == '\n') {
        choice = getchar();
    }
    switch (choice) {
        case '1':
            person = input();
            goto LABEL1;
            break;
        case '2':
            save(person);
            goto LABEL1;
            break;
        case '3':
            display(person);
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
