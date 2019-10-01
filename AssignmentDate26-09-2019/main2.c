#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
2. Nhap 1 mang cac string
*/
<<<<<<< HEAD
int main(int argc, char *argv[]) {
	char **animals;
	char *startPointer;
	int M,N, i,j;
=======
int main2(int argc, char *argv[]) {
	char **animals; //array of array
	int M,N, i;
>>>>>>> 03be5d1abf4be2e6a98917eff97e27128ab93e8d
	M = 3; //10 animals
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
