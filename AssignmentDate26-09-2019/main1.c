#include <stdio.h>
#include <stdlib.h>
/*
1.Vi?t chuong trình nh?p vào 1 string 
và ki?m tra xem dó có ph?i là tring d?i x?ng không?
*/
int main(int argc, char *argv[]) {
	char *name;
	name = (char *)malloc(50 * sizeof(char));
	printf("Input name: "); gets(name);
	int length = strlen(name);
	int i;
	for(i = 0; i < length/2; i++) {
		
	}
	return 0;
}
