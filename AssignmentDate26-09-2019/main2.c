#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
2. Nhap 1 mang cac string
*/
int main2(int argc, char *argv[]) {
	char **animals;
	//char animals[3][100];
	char *startPointer;
	int M,N, i,j;
	M = 3; //3 animals
	N = 100; //animal's name length
	animals = malloc(M * sizeof(char *));
	for(i =0; i < M; i++) {
		*(animals + i) = (char *)malloc(N * sizeof(char *));
        printf("Enter animal's name : ");gets(*(animals + i));		
	}
	for(i =0; i < M; i++) {
		printf("%s\n", *(animals + i));		
	}
	return 0;
}
