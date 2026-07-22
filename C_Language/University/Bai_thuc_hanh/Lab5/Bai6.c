#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype In
void In(char s[]);
// Prototype KiemTraXuatHien
int KiemTraXuatHien(char s[], char s1[]);
// Prototype KiemTraKyTu
void KiemTraKyTu(char s[], char c);
// Prototype DemDacBiet
int DemDacBiet(char s[]);
// Chuong trinh chinh
int main(){
    char s[N];
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(s);
    // Goi ham In
    printf("Chuoi ky tu vua nhap: ");
    In(s);
    // Goi ham KiemTraXuatHien
    char s1[N];
    printf("Nhap chuoi ky tu kiem tra: ");
    Nhap(s1);
    if(KiemTraXuatHien(s, s1))
        printf("Chuoi s1 co trong chuoi s\n");
    else 
        printf("Chuoi s1 khong co trong chuoi s\n");
    // Goi ham KiemTraKyTu
    char c;
    printf("Nhap ky tu can kiem tra: ");
    scanf(" %c", &c);
    if(strchr(s, c) != NULL){
        printf("Cac vi tri xuat hien cua ky tu %c trong chuoi: ", c);
        KiemTraKyTu(s, c);
    }
    else
        printf("Khong co ky tu %c tron chuoi\n", c);
    // Goi ham DemDacBiet
    printf("So luong ky tu dac biet trong chuoi: %d\n", DemDacBiet(s));
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
// Ham KiemTraXuatHien
int KiemTraXuatHien(char s[], char s1[]){
    if(strstr(s, s1) != NULL)
        return 1;
    return 0;
}
// Ham KiemTraKyTu
void KiemTraKyTu(char s[], char c){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c)
            printf("%d ", i);
        i++;
    }
    printf("\n");
}
// Ham DemDacBiet
int DemDacBiet(char s[]){
    int i = 0, dem = 0;
    while(s[i] != '\0'){
        if((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && s[i] != ' ')
            dem++;
        i++;
    }
    return dem;
}