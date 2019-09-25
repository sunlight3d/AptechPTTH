#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Examples of strcmp(string compare), strcpy(string copy)
*/

int main(int argc, char *argv[]) {
	char name1[100];
	char name2[100];
	printf("name1 = ");gets(name1);
	printf("name2 = ");gets(name2);
	if(strcmp(name1, name2) > 0) {
	//VD: name2="Khanh", name1="Hoang" => name2 > name1
		printf("name1 > name2\n");
	} else if(strcmp(name1, name2) < 0) {
		printf("name1 < name2\n");
	} else {
		printf("name1 = name2\n");
	}
	char name3[100];
	strcpy(name3, name1);
	printf("name3 = %s", name3);
	return 0;
}
