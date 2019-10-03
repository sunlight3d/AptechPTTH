#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int *x, int length, int sortType) {
	int i, j;
	for(i = 0; i < length - 1; i++) {		
		for(j = i + 1; j < length; j++) {
			if(sortType == 0){//sap xep tang dan
				if(*(x + i) > *(x+j)){
					int temp;
					temp = *(x + i);	
					*(x + i) = *(x + j);	
					*(x + j) = temp;
				}	
			} else if(sortType == 1){//sap xep giam dan
				if(*(x + i) < *(x+j)){
					int temp;
					temp = *(x + i);	
					*(x + i) = *(x + j);	
					*(x + j) = temp;
				}	
			}
		}	
	}
}

int main3(int argc, char *argv[]) {
	int *x;
	int N, i; 
	printf("Nhap so phan tu : "); scanf("%d", &N);
	x = (int *)malloc(N * sizeof(int));
	for(i = 0; i < N; i++){
		printf("Nhap x[%d] = ", i); scanf("%d", (x+i));
	}
	//int *y;
	//sortType = 0: tang dan, sortType = 1: giam dan
	sort(x, N, 1);//giam dan
	for(i = 0; i < N; i++){
		printf("x[%d] = %d\n",i, *(x+i));
	}
	return 0;
}
