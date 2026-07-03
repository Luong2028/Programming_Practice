/*
    Viết chương trình nhập vào họ tên của một sinh viên. In ra màn hình họ tên sinh viên vừa nhập.
    - input: Nguyen Van Nam
    - output: Nguyen Van Nam
*/
#include <stdio.h>
#include <string.h>
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap ho ten sinh vien: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Ten sinh vien vua nhap: %s", s);
    return 0;
}