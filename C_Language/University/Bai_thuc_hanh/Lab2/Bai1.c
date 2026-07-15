#include <stdio.h>
// Ham chuong trinh chinh
int main(){
    // Khai bao a va gan gia tri
    float a = 5;
    // Khai bao con tro tro den a
    float *p = &a;
    // In ra gia tri cua a thong qua con tro p
    printf("%.2f\n", *p);
    // In ra dia chi cua a thong qua con tro p
    printf("%p\n", p);
    // Thay doi gia tri cua a thong qua con tro p
    *p = 10;
    // In gia tri moi cua a
    printf("%.2f\n", a);

    return 0;
}