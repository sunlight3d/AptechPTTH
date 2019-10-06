#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void input(float *x, int N) {
	int i;	
	for(i = 0; i < N; i++){
		x+i = (float *)malloc(sizeof(float));
		printf("Nhap phan tu thu %d :\n", i+1); scanf("%f", x+i);
	}
}
void sort(float *x, char *sortType) {
	int i;
	int N = sizeof(x) / sizeof(*x);
		
}
int main(int argc, char const *argv[]) {
	float *x;
	int N;
	printf("Nhap so phan tu mang : \n");scanf("%f", &N);
	input(x, N);
	sort(x, "tang");

	return 0;
}