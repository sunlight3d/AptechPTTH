#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    float *mang; //con tro den phan tu dau tien trong mang float
    int N;//so phan tu mang
    int i;
    //Nhap gia tri cua N phan tu
    printf("Nhap N: ");scanf("%d", &N);
    //Cap phat N o nho float, "mang" chua dia chi phan tu dau tien
    mang = (float *)malloc(N * sizeof(float *));
    //Duyet cac phan tu va nhap du lieu    
    for (i = 0; i < N; ++i) {        
        printf("Nhap so thuc thu %d : ", i+1); scanf("%f", mang+i);
        //Kiem tra tinh tang dan/giam dan
        if(i > 0) {
            if(*(mang+i) > *(mang+i-1)){
                printf("Tang dan\n");
            } else {
                printf("Giam dan\n");
            }
        }
    }    
    //Tim gia tri lon nhat cua mang
    float max = *mang;//Tam goi gia tri phan tu 0 la lon nhat
    for (i = 1; i < N; ++i) { //Duyet tu phan tu 1 tro di
        if(*(mang+i) > max) {
            max = *(mang+i);
        }
    }
    printf("Gia tri lon nhat trong mang la : %0.2f\n", max);
    return 0;
}