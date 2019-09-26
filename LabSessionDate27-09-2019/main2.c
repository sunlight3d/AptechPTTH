#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Use POINTER
2 Write a C program to count the number of vowels and the number of consonants
in a word. 
*/

int main(int argc, char *argv[]) {
	char *word;
	word = (char *)malloc(50 * sizeof(char));
	printf("Enter a string : ");gets(word);
	int i,numberOfVowels;
	numberOfVowels = 0;
	int length = strlen(word);
	for(i = 0; i < length; i++) {
		if(*word == 'a' || *word == 'A' ||
			*word == 'e' || *word == 'E' ||
			*word == 'i' || *word == 'I' ||
			*word == 'o' || *word == 'O' ||
			*word == 'u' || *word == 'U') {
				numberOfVowels++;
			}
		word++;
	}
	printf("Number of vowels : %d", numberOfVowels);
	return 0;
}
