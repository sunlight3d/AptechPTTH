/*
Viết chương trình cho phép:
- Nhập vào 1 số nguyên.VD: 100
- In ra các số chẵn từ 0 đến 100, sử dụng vòng lặp for
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int N, i;
    printf("Enter a number: ");scanf("%d", &N);
    for(i = 0; i < N; i++) {
        if(i%2 == 0) {
            printf("%d, ", i);
        }
    }
    return 0;
}
