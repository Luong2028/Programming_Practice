/*
     Viết hàm proper(char s[]) đổi các ký tự đầu tiên của
    mỗi từ sang ký tự hoa.
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') strcpy(&s[0], &s[1]);
    while(strlen(s) > 0 && s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';
    int i;
    for(i = 0; i < strlen(s); i ++){
        if(s[i] == ' ' && s[i + 1] == ' '){
            strcpy(&s[i], &s[i + 1]);
            i--;
        }
    }
}
// Ham proper
void Proper(char s[]){
    int i;
    int n = strlen(s);
    for(i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for(i = 0; i < n - 1; i++){
        if(s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            s[i + 1] -= 32;
    }
    printf("Doi cac ky tu dau tien moi tu sang ky tu hoa: ");
    puts(s);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    // Goi ham proper
    Proper(s);
    return 0;
}