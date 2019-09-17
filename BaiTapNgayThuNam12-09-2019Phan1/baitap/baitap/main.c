/*
 Bài tập ngày thứ năm-12-09-2019 phần 1
 Viết chương trình nhập số giờ làm và lương giờ rồi tính số tiền lương tổng cộng.
 Nếu số giờ làm lớn hơn 40 thì những giờ làm dôi ra được tính 1,5 lần.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float sogiolam, luongtongcong, luongtheogio;
    printf("Nhap so gio : ");scanf("%f", &sogiolam);
    printf("Nhap luong theo gio : ");scanf("%f", &luongtheogio);
    luongtongcong = 0.0;
    if(sogiolam > 40) {
        luongtongcong = 40 * luongtheogio + (sogiolam -40) * luongtheogio * 1.5;
    } else {
        luongtongcong = sogiolam * luongtheogio;
    }
    printf("Luong tong cong la : %.2f\n", luongtongcong);
    return 0;
}
