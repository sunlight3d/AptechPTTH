#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int x, int y) {
	return x + y;
}
int main(int argc, char *argv[]) {
	int i, j;
	int n;
	/*
	printf("nhap n ="); scanf("%d", &n);
	for(i = 0; i < n; i++){
		if(i%2 != 0) {
			printf("i = %d\n", i);
		}	
	}
	*/
	//Reverse
	/*
	for(j = 100; j > 0; j--){
		printf("j = %d\n", j);
	}
	*/
	/*
	j = 1000;
	while(j > -100) {
		printf("j = %d\n", j);
		j--;
	}
	*/
	/*	
	int rows;
	rows = 0;
	printf("Enter no. of rows :");
	scanf("%d", &rows);
	printf("\n");
	for (i = 0; i < rows ; i++){
		printf("\n");
		for (j = 0; j <= i ; j++) {
			printf("*");
		}
	}
	*/
	
	int num;
	/*
	for(num = 1;num <=100; num++){
		//Khong chia het cho 9 thi hien ra
		if(num % 2 == 0) {
			continue;
		} 
		printf("%d\n",num);
	}
	*/
	num = 0;
	int a;
	printf("nhap a ="); scanf("%d", &a);
	while(num < a) {
		num++;
		if(num % 2 == 0) {
			continue;
		} 
		printf("%d\n",num);
	}

	return 0;
}
