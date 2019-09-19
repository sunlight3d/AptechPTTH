#include <stdio.h>
#include <stdlib.h>
/*
 6. Viết đoạn chương trình sau và chạy thử :
 int num ;
 label1:
 printf("\nEnter a number (1) :”);
 scanf("%d”,&num);
 if(num==1)
 goto Test;
 else
 goto label1:
 Test: printf("All done...”);
 */
int main(int argc, char *argv[]) {
    int num ;
    label1: printf("\nEnter a number (1) :");
    scanf("%d",&num);
    if(num == 1)
        goto Test;
    else
        goto label1;
    Test: printf("All done...");
    return 0;
}
