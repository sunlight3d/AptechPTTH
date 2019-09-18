/*
 Bài 7(nâng cao của bài 6).
 Sử dụng vòng lặp do..while nhập liên tiếp nhiều số thực từ bàn phím
 Quá trình nhập kết thúc nếu người dùng gõ -1
 In ra kết quả giá trị trung bình các số vừa nhập
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x;
    int i = 0;
    float tong, giatritrungbinh;
    tong = 0;
    do {
        printf("Nhap gia tri x: "); scanf("%f", &x);
        if(x == -1) {
            break;
        }
        tong = tong + x;
        i++;
    }while (x != -1);
    giatritrungbinh = tong / i;
    printf("Gia tri trung binh = %0.2f\n", giatritrungbinh);
    return 0;
}
