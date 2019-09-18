/*
 Bài 4
 Công ty X quy định mức thưởng cho nhân viên như sau:
 Nhân viên đạt loại A: 300K
 Nhân viên đạt loại B: 250K
 Loại B trở xuống ko được thưởng
 Nhập vào số điểm thành tích(marks) của nhân viên(giá trị từ 0 đến 100)
 In ra xếp loại và phần thưởng tương ứng
 If marks > 75 – grade A
 If 60 < marks < 75 – grade B
 If 45 < marks<60 – grade C
 If 35 < marks<45 - grade D
 If marks < 35 – grade E
 
 */

#include <stdio.h>

int main4(int argc, const char * argv[]) {
    int marks;
    printf("Nhap diem thanh tich: "); scanf("%d", &marks);
    if(marks >= 75) {
        printf("grade A, thuong 300K\n");
    } else if(marks >= 60 && marks < 75) {
        printf("grade B, thuong 250K\n");
    } else if(marks >= 45 && marks < 60) {
        printf("grade C, ko duoc thuong");
    } else if(marks >= 35 && marks < 45) {
        printf("grade D, ko duoc thuong\n");
    } else if(marks < 35) {
        printf("grade E, ko duoc thuong\n");
    }
    return 0;
}
