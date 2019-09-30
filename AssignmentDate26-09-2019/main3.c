#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
3. Sap xep 1 day so thuc
*/
int main(int argc, char *argv[]) {
	float *numbers;
	int N, i, j;
	printf("Nhap N = "); scanf("%d", &N);
	numbers = (float *) malloc(N * sizeof(float *));
	for(i = 0; i< N; i++) {
		printf("Enter a float : "); scanf("%f", numbers+i);	
	}
	for(i = 0; i < N - 1; i++) {
		for(j = i+1; j < N; j++) {
			if(*(numbers + i) > *(numbers + j)) {
				float temp;
				temp = *(numbers + i);
				*(numbers + i) = *(numbers + j);
				*(numbers + j) = temp;
			}
		}
	}
	for(i = 0; i< N; i++) {
		printf("%f\n", *(numbers + i)); 	
	}
	/*
	printf("Sap xep nguoc lai: \n");
	for(i = N-1; i >= 0; i--) {
		printf("%f\n", *(numbers + i)); 	
	}
	*/
	return 0;
}
