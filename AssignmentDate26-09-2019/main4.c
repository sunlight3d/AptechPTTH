#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
4. Noi 2 string 
*/
int main4(int argc, char *argv[]) {
	char *s1, *s2, *s3;
	s1 = (char *)malloc(100 * sizeof(char *));
	s2 = (char *)malloc(100 * sizeof(char *));
	printf("Enter s1 : "); gets(s1);
	printf("Enter s2 : "); gets(s2);
	unsigned long length = strlen(s1) + strlen(s2);
	s3 = (char *)malloc(length * sizeof(char *));
	strcat(s3, s1);//s3 + s1 => s3
	strcat(s3, s2);//s3 + s2 => s3
	printf("Result  : %s", s3);
	return 0;
}
