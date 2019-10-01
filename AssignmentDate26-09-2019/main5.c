#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
5. Sum 2 vectors using pointer
*/
int main5(int argc, char *argv[]) {
	float vx[2];
    float *v1, *v2, *v3;
    //v1 = (float *)malloc(2 * sizeof(float));
    v1 = &vx;
    v2 = (float *)malloc(2 * sizeof(float));
    v3 = (float *)malloc(2 * sizeof(float));
    printf("Enter x of v1: "); scanf("%f", v1);
    printf("Enter y of v1: "); scanf("%f", v1+1);
    
    printf("Enter x of v2: "); scanf("%f", v2);
    printf("Enter y of v2: "); scanf("%f", v2+1);
    *v3 = *v1 + *v2;
    *(v3+1) = *(v1+1) + *(v2+1);
    printf("x of v3 = %0.2f\n", *v3);
    printf("y of v3 = %0.2f\n", *(v3+1));
    return 0;
}
