#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void nhap(int *x, int *y) {
    printf("Nhap x = "); scanf("%d", x);
    printf("Nhap y = "); scanf("%d", y);
}
void tinhTong(int *x, int *y) {
    int ketqua = *x + *y;
    printf("Tong cua 2 so la : %d\n", ketqua);
}
void tinhHieu(int *x, int *y) {
    int ketqua = *x - *y;
    printf("Hieu cua 2 so la : %d\n", ketqua);
}

int main() {
    int *x, *y, chon;
    x = (int *)malloc(1 * sizeof(int));
    y = (int *)malloc(1 * sizeof(int));
    
    printf("1. Nhap 2 so nguyen\n");
    printf("2. Tinh tong\n");
    printf("3. Tinh hieu\n");
    printf("4. Thoat\n");
    CHON: printf("Moi ban chon 1 -> 4\n");
    scanf("%d", &chon);
    switch (chon) {
        case 1:
            nhap(x, y);
            goto CHON;
            break;
        case 2:
            tinhTong(x, y);
            goto CHON;
            break;
        case 3:
            tinhHieu(x, y);
            goto CHON;
            break;
        case 4:
            break;
        default:
            goto CHON;
            break;
    }
    return 0;
}