/*
    Đếm xem có bao nhiêu từ trong s. Xuất các từ trên
    các dòng liên tiếp.
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ')
        strcpy(s, s + 1);
    while(strlen(s) > 0 && s[strlen(s) - 1] == ' ') 
        s[strlen(s) - 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' ')
            strcpy(&s[i], &s[i + 1]);
        else
            i++;
    }
}
// Ham dem cac tu trong chuoi
void Dem(char s[]){
    if(strlen(s) == 0){
        printf("So tu trong chuoi la: 0");
        return;
    }
    int i, dem = 0;
    int n = strlen(s);
    for(i = 0; i < n; i++){
        if(s[i] == ' '){
            dem++;
            printf("\n");
        }
        if(s[i] != ' '){
            printf("%c", s[i]);
        }
    }
    printf("\nSo tu trong chuoi la: %d", dem + 1);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    // Goi ham dem
    Dem(s);

    return 0;
}