#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void xxx(int x) {
	x = 5;
	printf("haha");
}


int main(int argc, char *argv[]) {
	int x;
	x = 100;
	xxx(x);
	printf("x = %d", x);
	return 0;
}
