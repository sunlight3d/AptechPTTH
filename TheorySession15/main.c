#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int x, int y) {
	//int => gia tri tra ve(type_specify), 
	//sum = ten ham, (int x, int y) = arguments = params = tham so dau vao
	//
	int temp = x + y;
	return temp;
}
float multiply(float x, float y) {
	return x * y;
}
//Ham ko co tham so(no-args)
void saySomething() {
	int y = 10;//local variable = bien cuc bo
	printf("hello, how are you ?");
}
float squared(float x) {
	y = 11;
	return x * x;
}
int main(int argc, char *argv[]) {
	printf("tong la: %d\n", sum(1, 1));
	printf("tich la : %3.2f\n", multiply(5.0, 3.0));
	saySomething();
	int i;
	for(i = 1; i <=100; i++){
		printf("Binh phuong cua %d = %3.2f\n",i,squared(i));
	}
	return 0;
}
