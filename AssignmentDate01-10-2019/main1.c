#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

float getArea(float r){
	return PI*pow(r, 2);
}
float getCircumference(float r) {
	return 2*PI*r;//chu vi hinh tron = 2.pi.r
}

int main1(int argc, char *argv[]) {
	float bankinh;
	printf("Nhap r = ");scanf("%f", &bankinh);
	printf("area = %0.2f\n", getArea(bankinh));
	printf("curcumference = %0.2f", getCircumference(bankinh));
	return 0;
}
