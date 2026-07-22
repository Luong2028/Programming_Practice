#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype In
void In(char s[]);
// Prototype DemKyTu
int DemKyTu(char s[]);
// Prototype ThayThe
void ThayThe(char s[], char na[]);
// Prototype DoiXung
int DoiXung(char s[]);
// Chuong trinh chinh
int main(){
    char s[N];
    char na[6] = "ueoai";
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(s);
    // Goi ham In
    printf("Chuoi ky tu vua nhap: ");
    In(s);
    // Goi ham DemKyTu
    printf("So ky tu trong chuoi: %d\n", DemKyTu(s));
    // Goi ham ThayThe
    ThayThe(s, na);
    printf("Chuoi ky tu sau khi thay the: ");
    In(s);
    // Goi ham DoiXung
    if(DoiXung(s))
        printf("Chuoi ky tu doi xung\n");
    else
        printf("Chuoi ky tu khong doi xung\n");
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
// Ham DemKyTu
int DemKyTu(char s[]){
    int i = 0, dem = 0;
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9')
            dem++;
        i++;
    }
    return dem;
}
// Ham ThayThe
void ThayThe(char s[], char na[]){
    int i = 0;
    while(s[i] != '\0'){
        if(strchr(na, s[i]) != NULL)
            s[i] = '0';
        i++;
    }
}
// Ham DoiXung
int DoiXung(char s[]){
    int i;
    int n = strlen(s) - 1;
    for(i = 0; i <= n / 2; i++){
        if(s[i] != s[n - i]){
            return 0;
        }
    }
    return 1;
}