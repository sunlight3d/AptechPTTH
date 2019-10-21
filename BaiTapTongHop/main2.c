#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person_all{
	char id[100];
	char name[50];
	unsigned int salary [100];
	char date [50];
	unsigned int years;
};
// 
int main2(int argc, char *argv[]) {
	unsigned select,i, N;
	printf("1.thong tin tang luong");
	printf("\n2.nhung nguoi lam viec 10 nam");
	printf("nhap so nguoi: "); scanf("&d", &N);
			struct person_all *nhanvien = (struct person_all *)malloc(N * sizeof(struct person_all));
			for(i = 0; i < N; i++){
				printf("nhap nguoi thu [%d]", i+1);
				printf("nhap id: "); gets((*(nhanvien + i)).id);//scanf("%s", (*(person+i).id));
				printf("nhap ten: ");  gets((*(nhanvien + i)).name); //scanf("%s", (*(person+i).name));
				printf("nhap luong: "); gets((*(nhanvien+i)).salary);  //scanf("%d", &((*(person_all+i)).salary));
				printf("nhap thoi gian tham gia: "); gets((*(nhanvien + i)).date);//scanf("%s", (*(person+i).date));
				printf("nhap nam: "); gets((*(nhanvien+i)).years);//scanf("%d", (*(person+i).years));
			}
	printf("nhap so: "); scanf("%d", &select);
	switch(select){
		case 1: if((((*(person_all+i)).salary)) <= 2000){
				printf("tang them 15%");
				puts(*(nhanvien).id);
				puts(*(nhanvien).name);
		} else if((((*(person_all+i)).salary)) > 2000 && (((*(person_all+i)).salary)) <= 5000){
			printf("tang them 10%");
			puts(*(nhanvien).id);
			puts(*(nhanvien).name);
		} else if ((((*(person_all+i)).salary)) > 5000){
			printf("ko tang luong them: ");
			put(*(nhanvien).id);
			puts(*(nhanvien).name);
		}		
			case 2: if ((*(nhanvien).years) >= 10 ){
					puts(*(nhanvien).id);
					puts(*(nhanvien).name);
			}
	return 0;
}
