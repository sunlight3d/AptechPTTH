#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
factorial(n) = 1 * 2 * 3...n
*/

unsigned long factorial(unsigned int n){
	int i;
	unsigned long kq = 1;
	for(i = 1; i <=n; i++){
		//kq *= (unsigned long)i;
		kq = kq * (unsigned long)i;
	}
	return kq;
}

int main2(int argc, char *argv[]) {
	unsigned int n;
	printf("Enter n = ");scanf("%d", &n);
	printf("factorial of n = %ld", factorial(n));
	return 0;
}
