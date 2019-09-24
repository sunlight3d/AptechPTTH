#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2(int argc, char *argv[]) {
	//Initialize array
	char text[100];
	int i;
	int numberOfVowels;
	numberOfVowels = 0;
	printf("Enter a line of text: "); gets(text);
	for(i = 0; i < strlen(text); i++) {
		if(text[i] == 'a' || text[i] == 'A'  ||
			text[i] == 'e' || text[i] == 'E' ||
			text[i] == 'i' || text[i] == 'I' ||
			text[i] == 'o'|| text[i] == 'O' ||
			text[i] == 'u' || text[i] == 'U'){
			numberOfVowels++;
		}
	}
	printf("Number of vowels: %d\n", numberOfVowels);
	return 0;
}
