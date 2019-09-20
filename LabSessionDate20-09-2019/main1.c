#include <stdio.h>
#include <stdlib.h>

/*
1.Declare a variable which has the age of the person. Print the user’s name as many
times as his age.
Ví d?:
Enter your name: Nguyen Van A
Enter your age: 98
Hi?n 98 l?n ch?: Nguyen Van A, m?i ch? 1 dòng
*/
int main1(int argc, char *argv[]) {
	//Dau vao, ten va tuoi
	char name[100];//maximum 100 characters
	unsigned int age;//unsigned = positive(>0)
	int i;
	printf("Nhap ten:"); gets(name);//gets = GET a String from your Keyboard
	printf("Nhap tuoi: "); scanf("%d", &age);
	for(i = 0; i < age;i++) {
		printf("%d. %s\n", i+1, name);//%s = string
	}
	return 0;
}
