//
//  bai4.c
//  baitap
//
//  Created by Nguyen Duc Hoang on 9/16/19.
//  Copyright © 2019 Nguyen Duc Hoang. All rights reserved.
//

#include <stdio.h>
/*
 4.Viết chương trình nhập vào số giây từ 0 đến 86399, đổi số giây nhập vào thành dạng
 "gio:phut:giay", mỗi thành phần là một số nguyên có 2 chữ số.
 Gợi ý: Lấy tổng số giây chia(ko lấy dư) cho 3600 ra số giờ, số giây còn dư lại tiếp tục đổi sang phút(chia cho 60), còn dư bao nhiêu chính là số giây còn lại
 */
int main(int argc, const char * argv[]) {
    long seconds, hours, minutes, remainSeconds;
    do {
        printf("Enter seconds: ");
        scanf("%ld", &seconds);
        hours = seconds / 3600;
        minutes = (seconds % 3600)/60;
        remainSeconds = seconds - 3600 * hours - 60 * minutes;
        printf("%ld: %ld: %ld\n", hours, minutes, remainSeconds);
    } while(seconds < 0 || seconds > 86399);
    return 0;
}
