#include <stdio.h>
// Ham chuong trinh chinh
int main(){
    // Nhap c
    char c;
    printf("Cu phap khai bao 1 bien so nguyen trong C:\n");
    printf("A. int     1a;\n");
    printf("B. float   n;\n ");
    printf("C. long    b1;\n ");
    printf("D. double  c;\n ");
    printf("Ban lua chon dap an:");
    scanf(" %c", &c);
    // In dap an
    if(c == 'C' || c == 'c')
        printf("Chuc mung ban da chon dung!\n");
    else
        printf("Lua chon khong dung!\n");
    return 0;
}