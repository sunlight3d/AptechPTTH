#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
	int *p,*q;
	int i=3;
	p=q=&i;
	*p=4;
	return 0;
}

