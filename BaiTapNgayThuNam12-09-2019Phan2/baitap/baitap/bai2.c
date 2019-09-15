//
//  main.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 9/16/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>
/*
 2.Declare two variables x and y. Assign values to these variables. Number x should
 be printed only if it is less than 2000 or greater than 3000, and number y should
 be printed only if it is between 100 and 500.
 */
int main2(int argc, const char * argv[]) {
    int x , y;
    printf("Nhap X(X nho hon 2000 hoac lon hon 3000): \n");
    scanf("%d", &x);
    printf("Y trong khoang 100 den 500):: \n");
    scanf("%d", &y);
    /*Có thể gán 2 giá trị(ko cần %f):
     x = 2100;
     y = 122
     */
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
