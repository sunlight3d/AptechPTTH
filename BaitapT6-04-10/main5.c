#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    float *mang; //con tro den phan tu dau tien trong mang float
    int N;//so phan tu mang
    int i;
    //Nhap gia tri cua N phan tu
    printf("Nhap N: ");scanf("%d", &N);
    //Cap phat N o nho float, "mang" chua dia chi phan tu dau tien
    mang = (float *)malloc(N * sizeof(float *));
    //Duyet cac phan tu va nhap du lieu    
    for (i = 0; i < N; ++i) {        
        printf("Nhap so thuc thu %d : ", i+1); scanf("%f", mang+i);
        //Kiem tra tinh tang dan/giam dan
        if(i > 0) {
            if(*(mang+i) > *(mang+i-1)){
                printf("Tang dan\n");
            } else {
                printf("Giam dan\n");
            }
        }
    }    
    //Tim gia tri lon nhat cua mang
    float max = *mang;//Tam goi gia tri phan tu 0 la lon nhat
    for (i = 1; i < N; ++i) { //Duyet tu phan tu 1 tro di
        if(*(mang+i) > max) {
            max = *(mang+i);
        }
    }
    printf("Gia tri lon nhat trong mang la : %0.2f\n", max);
    return 0;
}

Dear all,
Thầy gửi mọi người bài chữa 4,5:
https://github.com/sunlight3d/AptechPTTH/tree/master/BaitapT6-04-10
Bài 3 mọi người có thể nhìn đáp án bài 4 là làm được:
Thầy có một số yêu cầu như sau:
- Với các bạn đã làm mà chưa chạy hoặc chưa làm bài tập: Xem thật kỹ bài chữa, ghi ra giấy tất cả những câu hỏi liên quan. Thầy sẽ giải đáp cụ thể trên lớp, chúng ta có rất ít thời gian từ giờ đến lúc thi nên trên lớp đề nghị các bạn tập trung, ko làm việc riêng để thầy có thể giải đáp hết câu hỏi
- Code chữa thầy đã comment cụ thể nhật từng lệnh, những bạn nào hổng kiến thức nếu đọc kỹ vẫn có thể hiểu. 
- Thầy sẽ ko trả lời những câu hỏi như: "Em ko hiểu tất cả, thầy nói lại đi", "Thầy giảng lại từ đầu bài con trỏ, bài switch...case",...

