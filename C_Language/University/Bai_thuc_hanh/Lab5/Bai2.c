#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype In
void In(char s[]);
// Prototype ChuanHoa
void ChuanHoa(char s[]);
// Prototype InHoa
void InHoa(char s[]);
// Prototype InThuTu
void InThuTu(char s[]);
// Chuong trinh chinh
int main(){
    char s[N];
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(s);
    // Goi ham ChuanHoa
    ChuanHoa(s);
    // Goi ham In
    printf("Chuoi sau khi chuan hoa: ");
    In(s);
    // Goi ham InHoa
    printf("Chuoi in hoa ky tu dau tien moi tu: ");
    InHoa(s);
    In(s);
    // Goi ham InThuTu
    InThuTu(s);
    return 0;
}
// Ham Nhap
void Nhap(char s[]){
    fgets(s, N, stdin);
    s[strcspn(s, "\n")] = '\0';
}
// Ham In
void In(char s[]){
    printf("%s\n", s);
}
// Ham ChuanHoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') strcpy(&s[0], &s[1]);
    while(strlen(s) > 0 && strlen(s) - 1 == ' ') s[strlen(s) - 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' '){
            strcpy(&s[i], &s[i + 1]);
            i--;
        }

        i++;
    }
}
// Ham InHoa
void InHoa(char s[]){
    int i = 1;
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    while(s[i] != '\0'){
        if(s[i] == ' '){
            i++;
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        i++;
    } 
}
// Ham InThuTu
void InThuTu(char s[]){
    int i = 0, so = 1;
    while(s[i] != '\0'){
        printf("%d. ", so);
        while(s[i] != ' ' && s[i] != '\0'){
            printf("%c", s[i]);
            i++;
        }
        printf("\n");
        so++;
        i++;
    }
}