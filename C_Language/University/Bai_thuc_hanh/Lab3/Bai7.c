#include <stdio.h>
#define N 30
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype In
void In(float a[], int n);
// Prototype TimTong
void TimTong(float a[], int n);
// Prototype Dem
int Dem(float a[], int n, float x);
// Prototype DemNhieuNhat
int DemNhieuNhat(float a[], int n);
// Prototype XuatHienNhieu
void XuatHienNhieu(float a[], int n);
// Prototype DemKhacNhau
int DemKhacNhau(float a[], int n);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    float a[N];
    int n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    In(a, n);
    // Goi ham TimTong
    TimTong(a, n);
    // Goi ham XuatHienNhieu
    XuatHienNhieu(a, n);
    // Goi ham DemKhacNhau
    printf("So luong phan tu co gia tri khac nhau trong day so: %d\n", DemKhacNhau(a, n));
    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (2 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 30);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
// Ham In
void In(float a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
// Ham TimTong
void TimTong(float a[], int n){
    int i;
    printf("Cac phan tu co gia tri bang tong 2 gia tri lien truoc va lien sau: ");
    for(i = 1; i < n - 1; i++){
        if(a[i] == (a[i - 1] + a[i + 1]))
            printf("%.2f ", a[i]);
    }
    printf("\n");
}
// Ham Dem
int Dem(float a[], int n, float x){
    int i;
    int dem = 0;
    for(i = 0; i < n; i++){
        if(a[i] == x)
            dem++;
    }
    return dem;
}
// Ham DemNhieuNhat
int DemNhieuNhat(float a[], int n){
    int i, max = Dem(a, n, a[0]);
    for(i = 1; i < n; i++){
        if(max < Dem(a, n, a[i])){
            max = Dem(a, n, a[i]);
        }
    }
    return max;
}
// Ham XuatHienNhieuNhat
void XuatHienNhieu(float a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(Dem(a, n, a[i]) == DemNhieuNhat(a, n)){
            printf("Phan tu dau tien xuat hien nhieu nhat: %.2f\n", a[i]);
            return;
        }
    }
}
// Ham DemKhacNhau
int DemKhacNhau(float a[], int n){
    int i, j;
    int s = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            if(a[i] == a[j])
                break;
        }
        if(i == j)
            s++;
    }
    return s;
}