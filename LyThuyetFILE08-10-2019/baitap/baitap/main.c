//
//  main.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 10/8/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void saveToAFile(FILE *file, char ch[], char fileName[]) {
    file = fopen(fileName, "w+");
    fputs(ch, file);
    fclose(file);
}
int main(int argc, const char * argv[]) {
    FILE *file = NULL;
    saveToAFile(file, "Chuyhy bbgg 7777777iiyy yuyuao cac ban nhe\n. Gi the ban ?",
                "/Users/nguyenduchoang/Documents/code/AptechPTTH/chaoban.txt");
    //Windows
    //saveToAFile(file, "Chao cac ban nhe\n. Gi the ban ?","D:\chaoban.txt");
    int *p=0;
    p = (int *)malloc(sizeof(int));
    *p=5;
    int i;
    i=*p;
    *p=6;
    int *p1;
    p1 = &i;
    return 0;
}
