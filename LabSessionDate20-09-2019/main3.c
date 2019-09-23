
#include <stdio.h>
#include <stdlib.h>

/*
3.Write a program to print a multiplication table for a given number.
Bài này là hi?n ra "b?n c?u chuong"
VD: B?n mu?n xem b?ng c?u chuong m?y: 5
In ra: 5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
....
5 x 10 = 50
*/
int main(int argc, char *argv[]) {
	//Input: N
	int N, rows, columns;
	printf("Enter N ="); scanf("%d", &N);
	for(rows = 1; rows <= 10; rows++){
		int multiply = N * rows;
		printf("%d x %d = %d\n",N, rows, multiply);
	}
	
	return 0;
}
