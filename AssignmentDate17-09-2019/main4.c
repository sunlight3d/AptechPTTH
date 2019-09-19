#include <stdio.h>
#include <stdlib.h>
/*
4. Ch?y th? do?n chuong trình sau và gi?i thích k?t qu?:
char i;
for( ; ; )
{
printf(“This will go on and on”);
i = getchar();
if(i == ‘X’ || i == ‘x’){
break;
}
}
*/
int main(int argc, char *argv[]) {
	char i; //khai bai bien i kieu character
	for( ; ; ) {
		//Vong lap vo tan(chay mai)
		printf("This will go on and on");
		i = getchar();
		if(i == 'X' || i == 'x'){
			//Neu go chua X hoac chu x thi thoat khoi vong for
			break;//Thoai khoi vong for
		}
	}
	return 0;
}
