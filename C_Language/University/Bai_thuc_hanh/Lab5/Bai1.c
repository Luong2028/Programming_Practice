#include <stdio.h>
#include <string.h>
#define N 50
// Prototype Nhap
void Nhap(char a[]);
// Prototype In
void In(char a[]);
// Prototype InNguoc
void InNguoc(char a[]);
// Chuong trinh chinh
int main(){
    char a[N];
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(a);
    // Goi ham In
    printf("Chuoi vua nhap: ");
    In(a);
    // Goi ham InNguoc
    printf("Chuoi nguoc lai: ");
    InNguoc(a);
    return 0;
}
// Ham Nhap
void Nhap(char a[]){
    fgets(a, N, stdin);
    a[strcspn(a, "\n")] = '\0';
}
// Ham In
void In(char a[]){
    printf("%s\n", a);
}
// Ham InNguoc
void InNguoc(char a[]){
    int i, len = strlen(a);
    for(i = len - 1; i >= 0; i--){
        printf("%c", a[i]);
    }
    printf("\n");
}