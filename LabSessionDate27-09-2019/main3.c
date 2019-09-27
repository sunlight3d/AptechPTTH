#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Use POINTER
2.Calculate average 
*/

int main(int argc, char *argv[]) {
	int N,i;
	float *numbers, *sum;
	printf("Nhap N = "); scanf("%d", &N);
	numbers = (float *)malloc(N * sizeof(float));
	sum = (float *)malloc(1 * sizeof(float));
	//Nhap du lieu + tinh trung binh
	for(i = 0; i < N; i++) {
		printf("Enter element %d : ", i); scanf("%f", numbers);
		*sum += *numbers;
		numbers++;
	}
	float *average;
	average = (float *)malloc(1 * sizeof(float));
	*average = *sum / (float)N;
	printf("average = %3.2f", *average);
	return 0;
}
