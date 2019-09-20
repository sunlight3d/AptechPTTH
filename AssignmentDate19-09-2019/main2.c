#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
2.Vi?t chuong tr�nh t�nh t?ng can b?c 3 c?a N s? nguy�n d?u ti�n.
VD: Nh?p N = 5, t�nh ra can_b?c_ba(1) + can_b?c_ba(2)+...can_b?c_ba(5)
G?i �: can b?c 3 c?a 1 s? x trong C : pow(x, 1/3)
*/

int main(int argc, char *argv[]) {
	int i, N;
	float sum;
	printf("Enter N = "); scanf("%d", &N);
	sum = 0.0;
	for(i = 0; i<N; i++){
		sum += pow((float)(i+1), 1.00/3.00);
	}
	printf("sum = %3.2f", sum);
	return 0;
}
