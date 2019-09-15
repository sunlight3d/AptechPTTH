//
//  main.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 9/16/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>
/*
 1.Write a program to accept 2 numbers and tell whether the product(tích) of the two
 numbers is equal to or greater than 1000.
 */
int main1(int argc, const char * argv[]) {
    int x,y;
    printf("Nhap x:"); scanf("%d",&x);
    printf("Nhap y:"); scanf("%d",&y);
    if(x*y >= 1000){
        printf("Tinh lon hon hoac bang 1000");
    }
    return 0;
}
