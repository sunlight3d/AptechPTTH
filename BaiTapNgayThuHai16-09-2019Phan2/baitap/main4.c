#include <stdio.h>
#include <stdlib.h>
/*
 Bài 4.
 Viết chương trình nhập vào N số nguyên, đếm xem có bao nhiêu số âm, bao nhiêu số
 dương và bao nhiêu số không.
 */
int main(int argc, char *argv[]) {
    int N, i, x;
    int tong_so_am, tong_so_duong, tong_so_khong;
    tong_so_am = 0;
    tong_so_duong = 0;
    tong_so_khong = 0;
    printf("Nhap N: "); scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Nhap 1 so: "); scanf("%d", &x);
        if (x > 0) {
            tong_so_duong++;
        } else if(x < 0) {
            tong_so_am++;
        } else {
            tong_so_khong++;
        }
    }
    printf("Tong so duong: %d\n", tong_so_duong);
    printf("Tong so am: %d\n", tong_so_am);
    printf("Tong so khong: %d\n", tong_so_khong);
    return 0;
}
