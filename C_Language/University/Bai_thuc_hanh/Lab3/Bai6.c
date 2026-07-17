#include <stdio.h>
#define N 50
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype NguyenTo
int NguyenTo(int n);
// Prototype KiemTraNguyenTo
int KiemTraNguyenTo(int a[], int n);
// Prototype DoiXung
int DoiXung(int a[], int n);
// Prototype HoanHao
int HoanHao(int n);
// Prototype DemHoanHao
int DemHoanHao(int a[], int n);
// Prototype TimKiem
void TimKiem(int a[], int n, int x);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    int a[N], n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    printf("Day vua nhap: ");
    In(a, n);
    // Goi ham KiemTraNguyenTo
    if(KiemTraNguyenTo(a, n))
        printf("Mang toan so nguyen to\n");
    else
        printf("Mang khong toan la so nguyen to\n");
    // Goi ham DoiXung
    if(DoiXung(a, n))
        printf("Mang co doi xung\n");
    else
        printf("Mang khong doi xung\n");
    // Goi ham DemHoanHao
    printf("So luong so hoan hao co trong mang: %d\n", DemHoanHao(a, n));
    // Goi ham TimKiem
    int x;
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    TimKiem(a, n, x);
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
// Ham NguyenTo
int NguyenTo(int n){
    if(n < 2)
        return 0;
    int i;
    for(i = 2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
// Ham KiemTraNguyenTo
int KiemTraNguyenTo(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(NguyenTo(a[i]) == 0)
            return 0;
    }
    return 1;
}
// Ham DoiXung
int DoiXung(int a[], int n){
    int i;
    for(i = 0; i < n / 2; i++){
        if(a[i] != a[n - 1 - i])
            return 0;
    }
    return 1;
}
// Ham HoanHao
int HoanHao(int n){
    if(n <= 0)
        return 0;
    int i;
    int s = 0;
    for(i = 1; i <= n / 2; i++){
        if(n % i == 0)
            s += i;
    }
    return s == n;
}
// Ham DemHoanHao
int DemHoanHao(int a[], int n){
    int i;
    int dem = 0;
    for(i = 0; i < n; i++){
        if(HoanHao(a[i]))
            dem++;
    }
    return dem;
}
// Ham TimKiem
void TimKiem(int a[], int n, int x){
    int i;
    printf("Vi tri cuoi cung cua %d trong mang: ", x);
    for(i = n - 1; i >= 0; i--){
        if(a[i] == x){
            printf("%d\n", i);
            return;
        }
    }
    printf("Khong tim thay\n");
}