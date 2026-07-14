#include <stdio.h>
#define MAX 100
// Prototype Nhap
void Nhap(int a[], int n);
// Prototype Tong
int Tong(int n);
// Prototype Tich
int Tich(int n);
// Ham chuong trinh chinh
int main(){
    // Nhap mang va so luong n 
    int a[MAX], n;
    printf("Nhap n so nguyen can kiem tra: ");
    scanf("%d", &n);
    // Goi ham nhap
    Nhap(a, n);
    // Kiem tra
    int i;
    printf("Cac so nguyen thoa dieu kien: ");
    for(i = 0; i < n; i++){
        if(Tong(a[i]) == Tich(a[i]))
            printf("%d ", a[i]);
    }
    return 0;
}
// Ham Nhap
void Nhap(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        do{
            printf("Nhap a[%d] gom 4 chu so: ", i + 1);
            scanf("%d", &a[i]);
        }while(a[i] <= 999 || a[i] >= 10000);
    }
}
// Ham Tong
int Tong(int n){
    int s = 0;
    while(n != 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}
// Ham Tich
int Tich(int n){
    int s = 1;
    while(n != 0){
        s *= n % 10;
        n /= 10;
    }
    return s;
}