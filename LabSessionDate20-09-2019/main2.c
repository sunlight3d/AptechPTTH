
#include <stdio.h>
#include <stdlib.h>

/*
2.Write a program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
G?i ý: Tham kh?o bài "tam giác d?u *" dã h?c ? bài lý thuy?t for, while
*/
int main2(int argc, char *argv[]) {
	//Dau vao, ten va tuoi
	int rows, columns;
	int N;
	printf("Nhap N = "); scanf("%d", &N);
//	for(rows = 0; rows < N+1; rows++){
//		for(columns = 0;columns < rows; columns++) {
//			printf("%d", columns+1);
//		}
//		printf("\n");
//	}
	//Chuyen sang while
	rows = 0;
	while(rows < N+1) {
		columns = 0;
		while(columns < rows) {
			printf("%d", columns+1);
			columns++;
		}
		printf("\n");
		rows++;
	}
	return 0;
}
