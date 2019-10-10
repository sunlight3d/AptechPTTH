#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* BAI NAY CHUA XONG...*/
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
    char fileName[100];
    char filePath[250];
    printf("Enter file name : "); scanf("%s", fileName);
    //strcat(filePath, "/Users/hoangnd/Documents/tutorials/AptechPTTH/"); //MacOS+Linux
    strcat(filePath, "D:\\");//Windows
    strcat(filePath, fileName);
    FILE *file = fopen(filePath,"wb"); // w for write, b for binary
    if (!file) {
        printf("Cannot open file %s\n", fileName);
        exit(1);
    } else {
        fwrite(person, sizeof(struct Person *), N, file);
    }
    fclose(file);
    printf("Save finished\n");
}
void display(struct Person *person) {
    int i;
    for(i = 0; i < N; i++){
        printf("Person's name : %s\n", (*(person+i)).name);
        printf("Person's age : %d\n", (*(person+i)).age);
        printf("Person's job : %s\n", (*(person+i)).job);
    }
}

void openFile(struct Person *person) {
    char fileName[100];
    char filePath[250];
    printf("Enter file name to open : "); scanf("%s", fileName);
    //strcat(filePath, "/Users/hoangnd/Documents/tutorials/AptechPTTH/"); //MacOS+Linux
    strcat(filePath, "D:\\");//Windows
    strcat(filePath, fileName);
    FILE *file = fopen(filePath,"rb"); // w for write, b for binary
    
    if (!file) {
        printf("Cannot open file %s\n", fileName);
        exit(1);
    } else {
        fread(person, sizeof(struct Person), N, file);
    }
    fclose(file);
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
            openFile(person);
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

