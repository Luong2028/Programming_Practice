#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype DemNguyenAm
int DemNguyenAm(char s[], char na[]);
// Prototype ThayThe
void ThayThe(char s[]);
// Prototype In
void In(char s[]);
// Chuong trinh chinh
int main(){
    char s[N];
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(s);
    // Goi ham DemNguyenAm
    char na[6] = "ueoai";
    printf("So luong nguyen am trong chuoi: %d\n", DemNguyenAm(s, na));
    // Goi ham ThayThe
    ThayThe(s);
    // Goi ham In
    printf("Chuoi ky tu sau khi thay the: ");
    In(s);
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
// Ham DemNguyenAm
int DemNguyenAm(char s[], char na[]){
    int i = 0, dem = 0;
    while(s[i] != '\0'){
        if(strchr(na, s[i]) != NULL)
            dem++;
        i++;
    }
    return dem;
}
// Ham ThayThe
void ThayThe(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9')
            s[i] = '*';
        i++;
    }
}