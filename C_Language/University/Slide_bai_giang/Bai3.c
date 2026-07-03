/*
    Viết hàm standard(char s[]) bỏ toàn bộ khoảng trắng
    đầu chuỗi, cuối chuỗi và giữa 2 từ trong s chỉ còn 1 khoảng
    trắng.
*/
#include <stdio.h>
#include <string.h>
// Ham standard
void Standard(char s[]){
    while(s[0] == ' ') strcpy(&s[0], &s[1]);
    while(strlen(s) > 0 && s[strlen(s) - 1] == ' ') s[strlen(s)- 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' ')
            strcpy(&s[i], &s[i + 1]);
        else
            i++;
    }
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham standard
    Standard(s);
    printf("Chuoi ky tu sau khi chuan hoa: ");
    puts(s);
    return 0;
}