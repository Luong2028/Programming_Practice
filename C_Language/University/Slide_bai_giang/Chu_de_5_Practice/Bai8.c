/*
    Viết chương trình nhập vào một chuỗi, in ra chuỗi đã được chuẩn hóa (không có ký tự trắng ở đầu, cuối chuỗi, mỗi từ cách nhau 1 khoảng trắng)
    - input:   dai   hoc  Nha Trang
    - output: dai hoc Nha Trang
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') 
        strcpy(s, s + 1);
    while(strlen(s) > 0 && s[strlen(s)- 1] == ' ') 
        s[strlen(s) - 1] = '\0';
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
    // Goi ham chuan hoa
    ChuanHoa(s);
    printf("Chuoi da duoc chuan hoa: %s", s);
    return 0;
}