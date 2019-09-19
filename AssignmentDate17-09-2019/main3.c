#include <stdio.h>
#include <stdlib.h>
/*
3.Ðo?n chuong trình sau dây s? làm gì?. Gi?i thích:
*/
int main3(int argc, char *argv[]) {
	int num;//khai bao bien so nguyen ten la num
	for(num = 0; num != 255;) {
		//Vong for chay khi num khac 255
		printf("Enter no. "); scanf("%d", &num);//Yeu cau nhap num tu ban phim
	}
	//Neu thay bang num thi :
	num = 0;
	do {
		printf("Enter no. "); scanf("%d", &num);//Yeu cau nhap num tu ban phim
	}while(num != 255);
	return 0;
}
