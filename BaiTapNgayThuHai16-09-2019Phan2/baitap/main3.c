#include <stdio.h>
#include <stdlib.h>
/*
 Bài 3.
 Viết chương trình in ra các số từ 1 đến 100,mỗi số cách nhau 2 đơn vị
 VD: 1, 3, 5, 7,...
 */
int main3(int argc, char *argv[]) {
    int i;
    for (i = 1; i < 100; i+=2) {
        printf("%d, ", i);
    }
    return 0;
}
