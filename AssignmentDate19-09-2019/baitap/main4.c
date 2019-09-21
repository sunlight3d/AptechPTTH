#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 4.Viết chương trình nhập vào N số nguyên, tìm số nhỏ nhất
 */

int main(int argc, char *argv[]) {
    int i, N;
    int min;
    int x;
    printf("Enter N = "); scanf("%d", &N);
    min = 65535;
    for(i = 0; i < N; i++){
        printf("Nhap x: "); scanf("%d", &x);
        if(x < min) {
            min = x;
        }
    }
    printf("min = %d\n", min);
    return 0;
}
