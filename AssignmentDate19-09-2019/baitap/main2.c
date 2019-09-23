#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 1.Viết chương trình tính giai thừa của một số nguyên dương.
 VD: nhập vào 4, tính ra kết quả: 24(là 1*2*3*4)
 Gợi ý: sử dụng while hoặc for
 */

int main2(int argc, char *argv[]) {
    int i, N;
    float sum;
    printf("Enter N = "); scanf("%d", &N);
    sum = 0.0;
    for(i = 0; i<N; i++){
        sum += pow((float)(i+1), 1.00/3.00);
    }
    printf("sum = %3.2f", sum);
    return 0;
}
