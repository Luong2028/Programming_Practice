/*
    Viết chương trình nhập vào một chuỗi dạng chuẩn, đếm và in ra số ký tự nguyên âm có trong chuỗi.
    - input: dai hoc Nha Trang
    - output:5
*/
#include <stdio.h>
#include <string.h>
// Ham dem ky tu nguyen am trong chuoi
void Dem(char s[], char s1[]){
    int i = 0, dem = 0;
    while(s[i] != '\0'){
        if(strchr(s1, s[i]) != NULL)
            dem++;
        i++;
    }
    printf("So ky tu nguyen am trong chuoi: %d", dem);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    char s1[] = "ueoai";
    printf("Nhap mot chuoi dang chuan: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham dem
    Dem(s, s1);
    return 0;
}