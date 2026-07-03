/*
    Viết chương trình nhập vào một chuỗi dạng, thay thế các ký tự số trong chuỗi bằng ký tự ?.
    - input: Nha Trang 370 nam
    - output: Nha Trang ??? nam
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ')
        strcpy(s, s + 1);
    while(s[0] != '\0' && s[strlen(s) - 1] == ' ')
        s[strlen(s) - 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' ')
            strcpy(&s[i], &s[i + 1]);
        else
            i++;
    }
}
// Ham thay the
void ThayThe(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9')
            s[i] = '?';
        i++;
    }
    printf("Chuoi ky tu sau khi thay the la: %s", s);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap mot chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    // Goi ham thay the
    ThayThe(s);
    return 0;
}