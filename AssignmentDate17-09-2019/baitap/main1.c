#include <stdio.h>
#include <stdlib.h>
/*
1.Accept values in four variables and print the highest value
*/
int main1(int argc, char *argv[]) {
	double x1, x2, x3, x4, max;
	printf("x1 = "); scanf("%lf", &x1); //lf = long float
	printf("x2 = "); scanf("%lf", &x2);
	printf("x3 = "); scanf("%lf", &x3);
	printf("x4 = "); scanf("%lf", &x4);
	max = x4;//Goi 1 thang bat ky la max
	if(x2 > max){
		max = x2; //nhieu ban viet sai: x2 = max;
	} 
	if(x3 > max) {
		max = x3;
	}
	if(x1 > max) {
		max = x1;
	}
	//In ra ket qua 
	printf("So lon nhat la: %0.2f", max);
	return 0;
}
