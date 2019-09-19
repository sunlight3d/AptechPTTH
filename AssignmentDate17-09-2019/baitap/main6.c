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
 Thay đoạn chương trình trên thành do-while.
 */
int main(int argc, char *argv[]) {
    int num ;
//    label1: printf("\nEnter a number (1) :");
//    scanf("%d",&num);
//    if(num == 1)
//        goto Test;
//    else
//        goto label1;
//    Test: printf("All done...");
    //Thay đoạn chương trình trên thành do-while.
    do {
        printf("\nEnter a number (1) :");
        scanf("%d",&num);
    }while (num != 16);
    printf("All done...");
    return 0;
}
