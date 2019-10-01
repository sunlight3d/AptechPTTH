#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
1.Enter a string
then check if it is a Palindrome,
-chua lam duoc, se post sau
*/
int main(int argc, char *argv[]) {
	char **animals;
	char *startPointer;
	int M,N, i,j;
	M = 3; //10 animals
	N = 100; //animal's name length
	animals = (char *)malloc(M * N * sizeof(char *));
	startPointer = animals;
	for(i =0; i < M; i++) {
		//*animals = (char *)malloc(N * sizeof(char *));
		char eachAnimal[100];
		printf("Nhap animal: "); gets(eachAnimal);
		j = 0;
		while(eachAnimal[j] != '\0') {
			animals++;
			j++;			
		}
		
		animals++;
	}
	for(i =0; i < M; i++) {
		printf("%s\n", *(animals + i*N));
		startPointer ++;
	}
	return 0;
}
