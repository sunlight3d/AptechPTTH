#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 1.Viết chương trình tính giai thừa của một số nguyên dương.
 VD: nhập vào 4, tính ra kết quả: 24(là 1*2*3*4)
 */

int main1(int argc, char *argv[]) {
    int i, N;
    double kq = 1;
    printf("Nhap N = "); scanf("%d", &N);
    i = 0;
    while (i < N) {
        i++;
        kq = kq * i;
    }
    printf("Giai thua cua %d la: %1.0f\n", N, kq);
    return 0;
}
