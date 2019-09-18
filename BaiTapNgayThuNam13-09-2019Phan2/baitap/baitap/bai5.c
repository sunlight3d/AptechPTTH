/*
 Bài 5.
 Viết chương trình nhập 1 ký tự từ bàn phím.
 Nếu ký tự là "*", in ra: Đây là phép nhân
 Nếu ký tự là "/", in ra: Đây là phép chia
 Nếu ký tự là "+", in ra: Đây là phép cộng
 Nếu ký tự là "-", in ra: Đây là phép trừ
 
 */

#include <stdio.h>

int main5(int argc, const char * argv[]) {
    char ch;
    printf("Nhap 1 ky tu : "); ch = getchar();
    if(ch == '*') {
        printf("Đây là phép nhân\n");
    } else if(ch == '/') {
        printf("Đây là phép chia\n");
    } else if(ch == '+') {
        printf("Đây là phép cộng\n");
    } else if(ch == '/') {
        printf("Đây là phép trừ\n");
    } else {
        printf("Ko phải là các phép +, -, *, /");
    }
    return 0;
}
