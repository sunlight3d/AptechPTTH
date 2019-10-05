#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char mang[100];
    char ch;
    printf("Input a string: "); scanf("%s", mang);
    getchar();//Lenh nay giai phong ky tu enter cua dong truoc
    printf("Enter a char to find: "); ch = getchar();
    int i;
    int sum = 0;
    //kiem tra xem da den phan tu cuoi cung trong string chua ?
    //Phan tu ket thuc 1 string la '\0'
    for(i =0; mang[i] != '\0'; i++) {
        if(mang[i] == ch) {
            sum++;
        }
    }
    //Hien thi sum(tong so phan tu bang phan tu ch)
    printf("Tong so phan tu %c la : %d", ch, sum);
    return 0;    
}