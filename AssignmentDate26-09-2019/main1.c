#include <stdio.h>
#include <stdlib.h>
/*
1.Vi?t chuong tr�nh nh?p v�o 1 string 
v� ki?m tra xem d� c� ph?i l� tring d?i x?ng kh�ng?
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
