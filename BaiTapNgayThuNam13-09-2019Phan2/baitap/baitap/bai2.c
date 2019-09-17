/*
 Bài 2.
 Viết chương trình in ra màn hình 100, 95 , 90, 85,..., 5.
 Chú ý: dùng vòng lặp, ko copy/paste một loạt các lệnh printf

*/

#include <stdio.h>

int main2(int argc, const char * argv[]) {
    int i = 100;
    while (i > 0) {
        printf("%d, ", i);
        i -= 5;//Hoac i = i -5;
    }
    return 0;
}
