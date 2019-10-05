#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char mang[5][10];
    int i, j;
    //Nhap 5 string tu ban phim
    for(i = 0; i < 5; i++){
        printf("Enter string %d :", i + 1); scanf("%s", mang[i]);
    }
    //Sap xep theo thu tu tang dan(alphabet)
    for(i = 0; i < 4; i++){
        for(j = i; j < 5; j++){
            if(strcmp(mang[i], mang[j]) > 0){
                char temp[10];
                strcpy(temp, mang[i]);
                strcpy(mang[i], mang[j]);
                strcpy(mang[j], temp);
            }
        }    
    }
    //Hien thi mang sau khi da sap xep
    for(i = 0; i < 5; i++){
        printf("Phan tu %d la: %s\n", i+1, mang[i]);
    }
    return 0;    
}