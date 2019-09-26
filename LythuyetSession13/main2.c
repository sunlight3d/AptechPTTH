#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Pointer
*/

int main(int argc, char *argv[]) {
	int x; 
	x = 10;//Khai bao bien x gia tri 10
	int *y;//Khai bao bien y chua dia chi cua 1 so nguyen(int) 
	y = &x;//Bien y chua dia chi cua x => y ="dia chi cua x"
	printf("value at y = %d", *y); //*y = gia tri tai dia chi y
	printf("\ny = %p", y);
	x = -19;
	printf("\nvalue at y = %d", *y);

	int *z;
	z = y;
	printf("\nvalue at z = %d", *z);
	
	*z = 12; //Gia tri tai z = 12
	printf("\nvalue at y = %d", *y);
	
	printf("z = %p", z);
	z++;
	printf("\nvalue at z = %d", *z);
	printf("z = %p", z);
	
	int numbers[] = {11,6,9,8};
	int *p;
	p = numbers;
	//p = &numbers[0];
	printf("\nvalue at p = %d", *p);
	//printf("\nvalue at pX = %d", *(--p));
	printf("\nnumbers at 1 : %d", *(++p));	
	printf("\nnumbers at 2 : %d", *(++p));
	printf("\nnumbers at 3 : %d", *(++p));
	printf("\nnumbers at 4 : %d", *(++p));
		
	int *k;
	k = (int *) malloc(1 * sizeof(int)); //memory allocation
	*k = 120;
	printf("\nk = %d", *k);
	
	
	//Tinh tong 2 so nguyen x, y, dung 100% pointer
	float *a, *b;
	a = (float *)malloc(1 * sizeof(float));
	b = (float *)malloc(1 * sizeof(float));
	printf("Nhap a: "); scanf("%f", a);
	printf("Nhap b: "); scanf("%f", b);
	float *total;
	total = (float *)malloc(1 * sizeof(float));
	*total = *a + *b;
	printf("total = %f", *total); 
	return 0;
}
