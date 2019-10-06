#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
	int *p;
	p = (int *)malloc(sizeof(int *));
	*p=5;
	int i;
	i=*p;
	*p=6;
	printf("*p = %d\n", *p);
	printf("*p = %p\n", p);
	return 0;
}