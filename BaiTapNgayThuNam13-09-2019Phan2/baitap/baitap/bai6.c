/*
 Bài 6.
 Nhập 3 số thực và tính trung bình của 3 số này
 
 */

#include <stdio.h>

int main6(int argc, const char * argv[]) {
    float x, y, z, average;
    printf("Nhap so thu nhat : "); scanf("%f", &x);
    printf("Nhap so thu hai : "); scanf("%f", &y);
    printf("Nhap so thu ba : "); scanf("%f", &z);
    average = (x + y + z) / 3;
    printf("Gia trị trung binh: %3.2f\n", average);
    return 0;
}
