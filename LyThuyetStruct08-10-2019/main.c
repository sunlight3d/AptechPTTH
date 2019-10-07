#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //VD1: tao ra mot struct Mobile
struct Mobile {
    char name[200];
    unsigned int year;
    char osName[100];
    char producer[200];
};
int main(int argc, char * argv[]) {
    //Khai bao 1 bien phone1 kieu Mobile
    struct Mobile phone1;
    //Gan cac gia tri cac truong(fields) trong struct
    strcpy(phone1.name, "iphone 6");
    strcpy(phone1.osName, "ios");
    phone1.year = 2016;
    strcpy(phone1.producer, "Apple");
    printf("Ten dien thoai la : %s\n", phone1.name); //Hien thi noi dung 1 truong bat ky
    //Nhan ban 1 doi tuong
    struct Mobile phone2;
    phone2 = phone1; //phone2 giong het phone1
    memcpy( & phone2, & phone1, sizeof(struct Mobile)); //copy phone1, paste to phone2

    printf("Ten dien thoai phone2 la : %s\n", phone2.name);
    //Thay doi 1 thuoc tinh cua phone1
    strcpy(phone1.name, "iphone 7");
    printf("Ten dien thoai phone2 la : %s\n", phone2.name);
    //Mang(array) cac struct
    struct Mobile * phone;
    phone = (Mobile * ) malloc(sizeof(Mobile * ));
    printf("Nhap ten : ");
    scanf("%s", & (( * phone).name));
    printf("Nhap nam sx : ");
    scanf("%d", & (( * phone).year));
    //In ra man hinh
    printf("Ten san pham : %s", ( * phone).name);
    return 0;
}