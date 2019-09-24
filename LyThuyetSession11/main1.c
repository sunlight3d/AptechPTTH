#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	Insert an array of 4 integers, from Keyboard
	*/
	int x[4], i, highest, total;
	printf("Enter 4 integers:\n");
	for(i = 0; i < 4; i++){
		printf("Input an integer: "); scanf("%d", &x[i]);
	}
	//Find max value in an the array
	highest = x[0];
	for(i = 1; i < 4; i++){ //i = index, iterator
		if(x[i] > highest) {
			highest = x[i];
		}
	}
	printf("max value is : %d\n", highest);
	//Find total values of the array
	total = 0;
	int numberOfItems;
	for(i = 0; i < 4; i++){ //i = index
		total += x[i];// total = total + x[i];
	}
	//printf("i bay gio la : %d", i);
	numberOfItems = i;
	printf("total values : %d\n", total);
	//Calculate average 
	printf("Average = %0.2f\n", (float)total/(float)numberOfItems);
	return 0;
}
