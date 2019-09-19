#include <stdio.h>
#include <stdlib.h>
/*
 Bài 1
 Viết chương trình nhập 2 số nguyên num1 và num2.
 Tính tổng các số lẻ trong khoảng từ num1 đến num2
 Sử dụng vòng lặp for
*/
int main1(int argc, char *argv[]) {
    int num1, num2, i, total;
    printf("Nhap so thu nhat: "); scanf("%d", &num1);
    printf("Nhap so thu hai: "); scanf("%d", &num2);
    total = 0;
    for(i = num1; i <= num2; i++) {
        if(i % 2 != 0) {
            total += i;
        }
    }
    printf("Tong cac so le = %d\n", total);
	return 0;
}
