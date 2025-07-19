//tối ưu tài nguyên chương trình
//thoát khỏi vòng lặp nhiều cấp
//Sumary: goto giúp nhảy từ vị trí này của chương trình sang vị trí khác thông qua nhãn đã khai báo

#include <stdio.h>

int main(){
    int i = 0;

    start:
    if (i > 5) goto end;

    printf("i = %d\n", i);
    i++;

    goto start;

    end:

    return 0;
}