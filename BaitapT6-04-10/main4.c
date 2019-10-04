#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void nhapHaiso(int *x, int *y) {
    printf("Nhap x = "); scanf("%d", x);
    printf("Nhap y = "); scanf("%d", y);
}
void tongHaiSo(int *x, int *y) {
    int ketqua = *x + *y;
    printf("Tong cua 2 so la : %d\n", ketqua);
}
void hieuHaiSo(int *x, int *y) {
    int ketqua = *x - *y;
    printf("Hieu cua 2 so la : %d\n", ketqua);
}

int main() {
    int *x, *y, chon;
    //Cap phat bo nho tai 2 dia chi x, y
    x = (int *)malloc(1 * sizeof(int));
    y = (int *)malloc(1 * sizeof(int));
    //In ra man hinh cho nguoi dung biet phai lam gi
    printf("1. Nhap 2 so nguyen\n");
    printf("2. Tinh tong\n");
    printf("3. Tinh hieu\n");
    printf("4. Thoat\n");
    //CHON la 1 label, co the dat ten khac
    CHON: printf("Moi ban chon 1 -> 4\n");
    scanf("%d", &chon);
    switch (chon) {
        case 1:
            nhapHaiso(x, y);
            goto CHON; //Lenh goto nhay den label "CHON"
            break;
        case 2:
            tongHaiSo(x, y);
            goto CHON;
            break;
        case 3:
            hieuHaiSo(x, y);
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