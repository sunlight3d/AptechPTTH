#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3(int argc, char *argv[]) {
	//Initialize array
	int numbers[5] = { 34, 45, 56, 67, 89 };
	int i,j; 
	//Sort
	for (i = 0; i < 4; i++) {
		for (j = i+1; j < 5; j++) {
			//Swap 2 numbers
			if(numbers[i] < numbers[j]) {
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; ++i) {
		printf("%d\n", numbers[i]);
	}
	return 0;
}
