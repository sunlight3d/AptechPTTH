#include <stdio.h>
#include <stdlib.h>

/* 
In for loop, you can use float
*/

int main3(int argc, char *argv[]) {
	float x;
	for(x = 9; x < 90 ; x++) {
		printf("x = %0.0f\n", x);
	}
	return 0;
}
