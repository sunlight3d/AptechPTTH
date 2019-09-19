#include <stdio.h>
#include <stdlib.h>
/*
 Bài 2.
 Viết lại bài 1 sử dụng vòng lặp while
 */
int main2(int argc, char *argv[]) {
    int num1, num2, i, total;
    printf("Nhap so thu nhat: "); scanf("%d", &num1);
    printf("Nhap so thu hai: "); scanf("%d", &num2);
    total = 0;
    i = num1;
    while (i <= num2) {
        if(i % 2 != 0) {
            total += i;
        }
        i++;
    }
    printf("Tong cac so le = %d\n", total);
    return 0;
}
