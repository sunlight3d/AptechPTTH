#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*
4. Noi 2 string 
*/
int main4(int argc, char *argv[]) {
	char *s1, *s2, *s3;
	int i;
	s1 = (char *)malloc(100 * sizeof(char *));
	s2 = (char *)malloc(100 * sizeof(char *));
	printf("Enter s1 : "); gets(s1);
	printf("Enter s2 : "); gets(s2);
	int length = strlen(s1) + strlen(s2);
	s3 = (char *)malloc(length * sizeof(char *));
	strcat(s2, s1);
	strcat(s3, s2);
	printf("Result  : %s", s3);
	return 0;
}
