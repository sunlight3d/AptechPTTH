#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num; 
	
 	printf("Nhap mot so: "); scanf("%d", &num);
	if(num % 2 == 0) {
		goto SO_CHAN;  
	}
    else{
    	goto SO_LE;  
	} 
    SO_CHAN: 
    	printf("%d la so chan", num); 
       
	SO_LE: 
    	printf("%d la so le", num); 
	return 0;
}
