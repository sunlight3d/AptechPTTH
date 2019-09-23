#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2(int argc, char *argv[]) {
	/*
	Insert an array of 5 characters, from Keyboard
	*/
	char name[5], i;
	for(i = 0; i < 5; i++) {
		printf("Enter a char: "); 
		name[i] = getchar();
		getchar();
	}
	printf("You entered : %s", name);
	for(i = 0; i < 5; i++){
		//printf(" %d, ", name[i]);
		printf(" %c, ", name[i]);
	}
	return 0;
}
