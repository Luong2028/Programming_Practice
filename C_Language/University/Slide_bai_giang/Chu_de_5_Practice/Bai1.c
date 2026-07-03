/*
    Viết hàm upper(char s[]) | lower(char s[]) đổi toàn bộ
    các ký tự sang ký tự hoa (giống hàm strupr) | sang ký tự
    thường (giống hàmstrlwr)
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') strcpy(&s[0], &s[1]);
    while(strlen(s)> 0 && s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';
    int i;
    for(i = 0; i < strlen(s); i++){
        if(s[i] == ' ' && s[i + 1] == ' '){
            strcpy(&s[i], &s[i + 1]);
            i--;
        }
    }
}
// Ham upper
void upper(char s[]){
    int i;
    int n = strlen(s);
    printf("Chuoi ky tu sau khi upper: ");
    for(i = 0; i < n; i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    puts(s);
}
// Ham lower
void lower(char s[]){
    int i;
    int n = strlen(s);
    printf("Chuoi ky tu sau khi lower: ");
    for(i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    puts(s);
}
// Chuong trinh chinh
int main(){
    char s[50];
    char s1[50], s2[50];
    
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    strcpy(s1, s);
    strcpy(s2, s);
    // Goi ham upper
    upper(s1);
    // Goi ham lower
    lower(s2);
    return 0;
}