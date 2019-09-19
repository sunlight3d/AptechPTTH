#include <stdio.h>
#include <stdlib.h>
/*
2.In ra ket qua và giai thích doan chuong trình sau:
int i, j , max;
printf(“Please enter the maximum value \n”);
printf(“for which a table can be printed: ”);
scanf(“%d”, &max);
for(i = 0 , j = max ; i <=max ; i++, j--) {
printf(“\n%d + %d = %d”,i, j, i + j);
}
*/
int main2(int argc, char *argv[]) {
	int i, j , max;//khai bao cac bien nguyen
	printf("Please enter the maximum value \n");
	printf("for which a table can be printed: ");
	scanf("%d", &max);//nhap max tu ban phim
	for(i = 0 , j = max ; i <=max ; i++, j--) {
		//Duyet i tang dang, max giam dan
		//Neu i<=max => con nhay vao day
		printf("\n%d + %d = %d",i, j, i + j);
		//in ra tong cua i va j
	}
	return 0;
}
