#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Input: v1, v2
Output: v3 = v1 + v2
*/
int main(int argc, char *argv[]) {
	float v1[2], v2[2], v3[2];
	printf("Input v1(x, y)\n");
	printf("x of v1: "); scanf("%f", &v1[0]);
	printf("y of v1: "); scanf("%f", &v1[1]);
	printf("Input v2(x, y)\n");
	printf("x of v2: "); scanf("%f", &v2[0]);
	printf("y of v2: "); scanf("%f", &v2[1]);
	v3[0] = v1[0] + v2[0];
	v3[1] = v1[1] + v2[1];
	printf("x of v3 = %0.2f", v3[0]);
	printf("\ny of v3 = %0.2f", v3[1]);
	
	return 0;
}
