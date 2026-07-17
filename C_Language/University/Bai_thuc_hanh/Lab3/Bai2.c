#include <stdio.h>
#include <math.h>
#define N 50
// Prototype Nhap
void Nhap(int a[],  int *n);
// Prototype In
void In(int a[], int n);
// Prototype ChinhPhuong
int ChinhPhuong(int n);
// Prototype KiemTraChinhPhuong
int KiemTraChinhPhuong(int a[], int n);
// Prototype LeDuong
int LeDuong(int a[], int n);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu
    int a[N], n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    printf("Mang vua nhap: ");
    In(a, n);
    // Goi ham KiemTraChinhPhuong
    if(KiemTraChinhPhuong(a, n))
        printf("Trong mang toan la so chinh phuong\n");
    else
        printf("Trong mang khong toan la so chinh phuong\n");
    // Goi ham LeDuong
    if(LeDuong(a, n))
        printf("Tat ca cac phan tu o vi tri le deu la so nguyen duong\n");
    else
        printf("Tat ca cac phan tu o vi tri le khong la so nguyen duong\n");
    return 0;
}
// Ham Nhap
void Nhap(int a[], int *n){
    do{
        printf("Nhap n phan trong mang (2 < n <= 50): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 50);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
// Ham In
void In(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// Ham ChinhPhuong
int ChinhPhuong(int n){
    if(n < 0)
        return 0;
    int temp = sqrt(n);
    return temp * temp == n;
}
// Ham KiemTraChinhPhuong
int KiemTraChinhPhuong(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(ChinhPhuong(a[i]) == 0)
            return 0;
    }
    return 1;
}
// Ham LeDuong
int LeDuong(int a[], int n){
    int i;
    for(i = 0; i < n; i += 2){
        if(a[i] <= 0)
            return 0;
    }
    return 1;
}