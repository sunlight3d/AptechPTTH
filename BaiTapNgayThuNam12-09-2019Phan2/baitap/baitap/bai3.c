//
//  bai3.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 9/16/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>
/*
 3.Write a program which will take the input as a floating number. This number
 represents the centimeters. Print out the equivalent number of feet(floating, 1
 decimal) and inches (floating, 1 decimal), with feet and the inches given to an
 accuracy of one decimal place.
 */
int main3(int argc, const char * argv[]) {
    float feet;
    float inches, cm;
    printf("Enter number (cm): ");
    scanf("%f", &cm);
    
    inches = cm / 2.54;
    feet = inches / 12.0;
    printf("%0.3f centimeters is %0.1f feet\n", cm, feet);
    printf("%0.3f centimeters is %0.1f inches\n", cm, inches);
    return 0;
}
