#include <stdio.h>
#define N 50
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype Xoa
void XoaNhap(int a[], int *n, int x);
// Prototype ThemDau
void ThemDau(int a[], int *n, int y);
// Prototype Xoa
void Xoa(int a[] , int *n, int x);
// Prototype TrungLap
void TrungLap(int a[], int *n);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    int a[N], n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    In(a, n);
    // Goi ham XoaNhap
    int x;
    printf("Nhap so nguyen can xoa: ");
    scanf("%d", &x);
    XoaNhap(a, &n, x);
    printf("Day so sau khi xoa: ");
    In(a, n);
    // Goi ham them dau
    int y;
    printf("Nhap so nguyen can them: ");
    scanf("%d", &y);
    ThemDau(a, &n, y);
    printf("Day so sau khi them: ");
    In(a, n);
    // Goi ham TrungLap
    TrungLap(a, &n);
    printf("Day so sau khi xoa trung lap: ");
    In(a, n);
    return 0;
}
// Ham Nhap
void Nhap(int a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (2 < n <= 50): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 50);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap a[%d]: ", i);
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
// Ham XoaNhap
void XoaNhap(int a[], int *n, int x){
    int i, j;
    for(i = 0; i < *n; i++){
        if(a[i] == x){
            for(j = i; j < *n - 1; j++){
                a[j] = a[j + 1];
            }
            (*n)--;
            i--;
        }
    }
}
// Ham ThemDau
void ThemDau(int a[], int *n, int y){
    int i;
    for(i = *n; i >= 1; i--){
        a[i] = a[i - 1];
    }
    a[0] = y;
    (*n)++;
}
// Ham Xoa
void Xoa(int a[], int *n, int x){
    int i;
    for(i = x; i < *n - 1; i++){
        a[i] = a[i + 1];
    }
    (*n)--;
}
// Ham TrungLap
void TrungLap(int a[], int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < i; j++){
            if(a[i] == a[j]){
                Xoa(a, n, i);
                i--;
                break;
            }
        }
    }
}