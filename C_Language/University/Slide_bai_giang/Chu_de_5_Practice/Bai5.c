/*
    Tính độ dài của chuỗi không dùng hàm có sẵn
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') strcpy(s, s + 1);
    while(strlen(s) > 0 && s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' ')
            strcpy(&s[i], &s[i + 1]);
        else
            i++;
    }
}
// Ham tinh do dai cua chuoi
int Tinh(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }  
    return i;
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    // Goi ham tinh 
    printf("Do dai cua chuoi la: %d", Tinh(s));
    return 0;
}