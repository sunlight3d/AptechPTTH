#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 5.Viết chương trình tính dân số của 1 thành phố sau 10 năm nữa, biết rằng dân số hiện nay là 6.000.000 người, tốc độ tăng dân số là 1.6%/năm
 Gợi ý: dân số lưu biến double, sử dụng vòng while hoặc for
 */

int main(int argc, char *argv[]) {
    double population;
    int i;
    population = 6000000.0;
    for(i = 0; i < 10; i++) {
        population += (1.6/100.0)*population;
    }
    printf("min = %0.1f\n", population);
    return 0;
}
