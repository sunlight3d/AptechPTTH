#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[120];
    unsigned int age;
};
int N;//this is a "Global Variable"
struct Student* inputStudent() {//this is a function
    printf("Enter number of students: "); scanf("%d", &N);
    struct Student* student = (struct Student *)malloc(N * sizeof(struct Student));
    int i;
    for (i = 0; i < N; i++) {
        printf("student number %d : \n", i+1);
        printf("Enter student's name : ");scanf("%s", (student+i)->name);
        printf("Enter student's age: "); scanf("%d", &(student+i)->age);
    }
    return student;
}
void maxAge(struct Student* student){
    //sap xep tang hoac giam dan
    int i, j;
    for(i = 0; i < N-1; i++){
        for(j = i+1; j < N; j++){
            if((student+i)->age < (student+j)->age){
                struct Student temp;
                temp = *(student+i);
                *(student+i) = *(student+j);
                *(student+j) = temp;
            }
        }
    }
    //lay ra phan tu dau tien
    printf("Ten sinh vien co tuoi cao nhat: %s, tuoi: %d\n", student->name, student->age);
}
//How to display
int main(int argc, const char * argv[]) {
    struct Student* student = NULL;
LABEL1:
    printf("+-------------------------------------------------------------------------+\n");
    printf("|                         Quan ly sinh vien                               |\n");
    printf("+-------------------------------------------------------------------------+\n");
    printf("+ 1.Nhap danh sach hoc vien. +\n");
    printf("+ 2.In ra hoc vien co tuoi cao nhat. +\n");
    printf("+ 3.Ket thuc. +\n");
    printf("+-------------------------------------------------------------------------+\n");
    char choice;
    printf("Enter your choice: "); choice = getchar();
    while (choice == '\n') {
        choice = getchar();
    }
    switch (choice) {
        case '1':
            student = inputStudent();
            //Now test "display" function
            //display(display);
            goto LABEL1;
            break;
        case '2':
            maxAge(student);
            goto LABEL1;
            break;
        case '3':
            break;
        case '4':
            return 0;
            break;
            
        default:
            goto LABEL1;
            break;
    }
    //You can add multiple Labels as you like
    return 0;
}
