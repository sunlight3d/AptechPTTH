/*
 Bài 1. Viết chương trình nhận 1 ký tự từ bàn phím.Kiểm tra ký tự nhập vào(dùng switch-case):
 Nếu ký tự là c hoặc C => hiện ra "Ngôn ngữ C, C#, C++"
 Nếu ký tự là p hoặc P => hiện ra "Ngôn ngữ PHP hoặc Python"
 Nếu ký tự là j hoặc J => hiện ra "Ngôn ngữ Java"
 Nếu ký tự là r hoặc R => hiện ra "Ngôn ngữ Ruby"
 Nếu ko phải các ký tự trên, hiện ra: "Ko phải ngôn ngữ lập trình đã học"

 */

#include <stdio.h>

int main1(int argc, const char * argv[]) {
    char ch;
    printf("Nhap 1 ky tu: "); ch = getchar();
    switch (ch) {
        case 'c':
        case 'C':
            printf("Ngôn ngữ C, C#, C++\n");
            break;
        
        case 'p':
        case 'P':
            printf("Ngôn ngữ PHP hoặc Python\n");
            break;
        
        case 'j':
        case 'J':
            printf("Ngôn ngữ Java\n");
            break;
        
        case 'r':
        case 'R':
            printf("Ngôn ngữ Ruby\n");
            break;
            
        default:
            printf("Ko phải ngôn ngữ lập trình đã học\n");
            break;
    }
    return 0;
}
