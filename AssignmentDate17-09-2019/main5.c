#include <stdio.h>
#include <stdlib.h>
/*
5. Ch?y do?n chuong trình sau và gi?i thích k?t qu?:
int count = 0;
while(count < 100)
{
printf(“This goes on forever, HELP!!!\n”);
count+=10;
printf(“\t%d”, count);
count-=10;
printf(“\t%d”, count);
printf(“\nCtrl-C will help”);
}
*/
int main(int argc, char *argv[]) {
	int count = 0;//Khai bao bien nguyen count
	while(count < 100) {
		//Neu count < 100 thi nhay vao day
		printf("This goes on forever, HELP!!!\n");
		count += 10; //Tang count len 10
		printf("\t%d", count);//In ra
		count -= 10;//Giam di 10
		printf("\t%d", count);
		printf("\nCtrl-C will help");//Thoat khoi vong while
	}
	return 0;
}
