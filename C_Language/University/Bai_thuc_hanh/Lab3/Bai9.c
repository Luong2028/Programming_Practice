#include <stdio.h>
#define N 50
#define M 100
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype SapXepTangDan
void SapXepTangDan(int a[], int n);
// Prototype Ghep
void Ghep(int a[], int *n, int b[], int nb, int c[], int nc);
// Prototype Them
void Them(int a[], int *n, int x, int y);
// Prototype ThemNhap
void ThemNhap(int a[], int *n, int x);
// Chuong trinh chinh
int main(){
    // Khai bao 2 mang arr1, arr2 va so luong phan tu n1, n2 tuong ung
    int arr1[N], arr2[N], n1, n2;
    // Goi ham Nhap
    printf("Nhap day so arr1:\n");
    Nhap(arr1, &n1);
    printf("Nhap day so arr2:\n");
    Nhap(arr2, &n2);
    // Goi ham In
    printf("Day so arr1: ");
    In(arr1, n1);
    printf("Day so arr2: ");
    In(arr2, n2);
    // Goi ham SapXepTangDan
    SapXepTangDan(arr1, n1);
    SapXepTangDan(arr2, n2);
    printf("Day so arr1 sau khi sap xep: ");
    In(arr1, n1);
    printf("Day so arr2 sau khi sap xep: ");
    In(arr2, n2);
    // Goi ham Ghep
    int arr[M], n = 0;
    Ghep(arr, &n, arr1, n1, arr2, n2);
    printf("Day so sau khi ghep: ");
    In(arr, n);
    // Goi ham ThemNhap
    int x;
    printf("Nhap so nguyen can them: ");
    scanf("%d", &x);
    ThemNhap(arr, &n, x);
    printf("Day so sau khi them: ");
    In(arr, n);
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
        printf("Nhap arr[%d]: ", i);
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
// Ham SapXepTangDan
void SapXepTangDan(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// Ham Ghep
void Ghep(int a[], int *n, int b[], int nb, int c[], int nc){
    int i, j;
    for(i = 0; i < nb; i++){
        a[*n] = b[i];
        (*n)++;
    }
    for(j = 0; j < nc; j++){
        a[*n] = c[j];
        (*n)++;
    }
    SapXepTangDan(a, *n);
}
// Ham Them
void Them(int a[], int *n, int x, int y){
    if(*n == M){
        printf("Mang da day\n");
        return;
    }
    int i;
    for(i = *n; i > x; i--){
        a[i] = a[i - 1];
    }
    a[x] = y;
    (*n)++;
}   
// Ham ThemNhap
void ThemNhap(int a[], int *n, int x){
    int i;
    for(i = 0; i < *n; i++){
        if(x < a[i]){
            Them(a, n, i, x);
            return;
        }
    }
    a[*n] = x;
    (*n)++;
}