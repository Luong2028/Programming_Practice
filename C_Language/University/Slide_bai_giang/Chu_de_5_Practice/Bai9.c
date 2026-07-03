/*
    Nhập vào một chuỗi chuẩn, đếm và xuất ra màn hình số từ trong chuỗi.
    - input: dai hoc Nha Trang
    - output: 4
*/
#include <stdio.h>
#include <string.h>
// Ham dem so tu trong chuoi
void Dem(char s[]){
    int i;
    int n = strlen(s), dem = 0;
    if(n == 0){
        printf("So tu trong chuoi la: 0\n");
        return;
    }
    for(i = 0; i < n; i++){
        if(s[i] == ' ')
            dem++;
    }
    printf("So tu trong chuoi la: %d\n", dem + 1);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap mot chuoi chuan: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham dem
    Dem(s);

    return 0;
}