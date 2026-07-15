#include <stdio.h>
#define MAX 30
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype DaoNguoc
void InDaoNguoc(int a[], int n);
// Prototype Tong
int Tong(int a[], int n);
// Prototype LonNhat
int LonNhat(int a[], int n);
// Prototype DemChan
int DemChan(int a[], int n);
// Ham chuong trinh chinh
int main(){
    // Khai bao mang a va so luong phan tu n
    int a[MAX], n;
    // Goi ham Nhap
    printf("Nhap cac phan tu trong day so nguyen:\n");
    Nhap(a, &n);
    // Goi ham InDaoNguoc
    InDaoNguoc(a, n);
    // Goi ham Tong
    printf("Tong cac phan tu trong day: %d\n", Tong(a, n));
    // Goi ham LonNhat
    printf("Phan tu lon nhat trong day: %d\n", LonNhat(a, n));
    // Goi ham DemChan
    printf("So luong phan tu chan trong day: %d\n", DemChan(a, n));
    return 0;
}
// Ham Nhap
void Nhap(int a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (2 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 30);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
// Ham In
void InDaoNguoc(int a[], int n){
    int i;
    for(i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// Ham Tong
int Tong(int a[], int n){
    int i, s = 0;
    for(i = 0; i < n; i++){
        s += a[i];
    }
    return s;
}
// Ham LonNhat
int LonNhat(int a[], int n){
    int i;
    int max = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
// Ham DemChan
int DemChan(int a[], int n){
    int i;
    int dem = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            dem++;
    }
    return dem;
}