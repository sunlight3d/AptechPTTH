#include <stdio.h>
#include <stdlib.h>

/*
1.Write a C program to find the minimum and the maximum value in an array.
*/
int main(int argc, char** argv) {
	//Input N numbers(int, float) from your Keyboard
	int N, numbers[20],i;
	int max, min;
	printf("Enter number of integers : "); scanf("%d", &N);
	if(N > 20){
		printf("Cannot calculate");
		return 0;
	}
	for(i = 0; i < N; i++){
		printf("Enter an integer : "); scanf("%d", &numbers[i]);
	}
	//Initialize values for max, min
	max = numbers[0];
	min = numbers[0];
	//Calculate max, min
	for(i = 1; i < N; i++) {
		if(numbers[i] > max) {
			max = numbers[i];
		}
		if(numbers[i] < min){
			min = numbers[i];
		}
	}
	//Print max, min
	printf("Max is : %d, min is : %d", max, min);
	return 0;
}
