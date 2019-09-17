/*
 Bài tập ngày 13-09-2019 phần 1
 Viết chương trình nhập một số thực dương(x) từ bàn phím.
 In ra tất cả các số lẻ từ từ 1 đến x
 VD: nhập vào x = 5
 In ra 1,3,5

 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, i, tong;
    tong = 0;
    printf("Enter x = "); scanf("%d", &x);
    for(i = 0; i < x; i++) {
        if(i % 2 != 0) {
            tong = tong + i;
        }
    }
    printf("Tong cac so le la : %d\n", tong);
    return 0;
}
