#include <stdio.h>
#include <stdlib.h>

int mainxx(int argc, char *argv[]) {
	int i;
	for(i = 100; i > 0; i+=5) {
		printf("%d, ", i);
	} 
	return 0;
}
