//
//  main.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 9/16/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x , y;
    printf("Nhap X(X nho hon 2000 hoac lon hon 3000): \n");
    scanf("%d", &x);
    printf("Y trong khoang 100 den 500):: \n");
    scanf("%d", &y);
    
    if(x < 2000 || x > 3000 ){
        printf("\n x = %d" , x);
    }else{
        printf("\nnhap sai x");
    }
    if(y >= 100 && y <= 500 ){
        printf("\n y = %d" , y );
    }else{
        printf("\nnhap sai y");
    }
    return 0;
}
