#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*

*/
int main6(int argc, char *argv[]) {
	//Doan1 <=> Doan 2
	int x = 10;
	printf("address of x = %p\n", &x);
	
	int *p;
	printf("p = %p\n", p);
	p = &x;
	/*
	*p = 11;
	printf(" x = %d", x);
	x = 12;
	int y = 13;
	printf("value at p : %d", *p);
	p = &y;
	printf("value at p : %d", *p);
	*/
	//Doan2
	/*
	int *p;
	p = (int *)malloc(1 * sizeof(int *));
	*p = 10;
	*/
	/*
	printf("p = %p\n", p);
	printf("address p = %p\n", &p);
	printf("value at p = %d", *p);
	*/
	return 0;
}
