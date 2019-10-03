#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*
float multiply(float x, float y) {
	return x * y;
}

float squared(float x) {
	y = 11;
	return x * x;
}*/
int sum(int x, int y) {
	//int => gia tri tra ve(type_specify), 
	//sum = ten ham, (int x, int y) = arguments = params = tham so dau vao
	//
	int temp = x + y;
	return temp; //Gia tri cua ham la temp
}
//Ham ko co tham so(no-args), ko co gia tri tra ve
void saySomething() { //void => ko co return
	printf("hello, how are you ?\n");
	printf("haha");
}

int main(int argc, char *argv[]) {
	printf("tong la: %d\n", sum(3, 1));
	saySomething();
	/*
	printf("tich la : %3.2f\n", multiply(5.0, 3.0));
	
	int i;
	for(i = 1; i <=100; i++){
		printf("Binh phuong cua %d = %3.2f\n",i,squared(i));
	}
	*/
	return 0;
}
