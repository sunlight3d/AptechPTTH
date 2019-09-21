#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 3.Viết chương trình tính tổng nghịch đảo của N số nguyên đầu tiên theo công thức:
 S = 1 + 1/2 + 1/3 + ... + 1/N
 */

int main3(int argc, char *argv[]) {
    int i, N;
    float sum;
    printf("Enter N = "); scanf("%d", &N);
    sum = 0.0;
    for(i = 1; i<=N; i++){
        sum += 1.00/(float)i;
    }
    printf("sum = %3.2f\n", sum);
    return 0;
}
