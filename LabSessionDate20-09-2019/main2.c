
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
G?i �: Tham kh?o b�i "tam gi�c d?u *" d� h?c ? b�i l� thuy?t for, while
*/
int main2(int argc, char *argv[]) {
	//Dau vao, ten va tuoi
	int rows, columns,i;
	int N;
	printf("Nhap N = "); scanf("%d", &N);
	for(i = 0; i< 30;i++){
		//rows = 0
		for(rows = N; rows > 0; rows--){
			//In nguoc lai thi sao ?
			for(columns = 0;columns < rows; columns++) {
				printf("%d", columns+1);
				if(columns == rows-1){
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);printf("%d", columns+1);
				}
			}
			printf("\n");
		}
		for(rows = 0; rows <= N; rows++){
			//In xuoi
			for(columns = 0;columns < rows; columns++) {
				printf("%d", columns+1);
				if(columns == rows-1){
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);
					printf("%d", columns+1);printf("%d", columns+1);
				}
			}
			printf("\n");
		}
	}
	
	
	//Chuyen sang while
//	rows = 0;
//	while(rows < N+1) {
//		columns = 0;
//		while(columns < rows) {
//			printf("%d", columns+1);
//			columns++;
//		}
//		printf("\n");
//		rows++;
//	}
	return 0;
}
