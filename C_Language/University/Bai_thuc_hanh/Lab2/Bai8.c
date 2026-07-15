#include <stdio.h>
#define MAX 50
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype NhoNhat
int NhoNhat(int a[], int n);
// Prototype NguyenTo
int NguyenTo(int n);
// Prototype KiemTraNguyenTo
void KiemTraNguyenTo(int a[], int n);
// Prototype DemLe
int DemLe(int a[], int n);
// Prototype DemTrungBinh
int DemTrungBinh(int a[], int n);
// Prototype TimKiem
void TimKiem(int a[], int n);
// Ham chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    int a[MAX], n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    printf("Mang vua nhap: ");
    In(a, n);
    // Goi ham NhoNhat
    printf("Phan tu nho nhat trong day so: %d\n", NhoNhat(a, n));
    // Goi ham KiemTraNguyenTo
    KiemTraNguyenTo(a, n);
    // Goi ham DemLe
    printf("So luong cac phan tu le trong day: %d\n", DemLe(a, n));
    // Goi ham DemTrungBinh
    printf("So luong phan tu co gia tri bang trung binh phan tu lien truoc va lien sau: %d\n", DemTrungBinh(a, n));
    // Goi ham TimKiem
    TimKiem(a, n);

    return 0;
}
// Ham Nhap
void Nhap(int a[], int *n){
    do{
        printf("Nhap n phan tu (3 < n <= 50): ");
        scanf("%d", n);
    }while(*n <= 3 || *n > 50);
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
// Ham NhoNhat
int NhoNhat(int a[], int n){
    int i;
    int min = a[0];
    for(i = 0; i < n; i++){
        if(min > a[i])
            min = a[i];
    }
    return min;
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
void KiemTraNguyenTo(int a[], int n){
    int i;
    printf("Cac so nguyen to trong day: ");
    for(i = 0; i < n; i++){
        if(NguyenTo(a[i]))
            printf("%d ", a[i]);
    }
    printf("\n");
}
// Ham DemLe
int DemLe(int a[], int n){
    int i;
    int dem = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0)
            dem++;
    }
    return dem;
}
// Ham DemTrungBinh
int DemTrungBinh(int a[], int n){
    int i;
    int dem = 0;
    for(i = 1; i < n - 1; i++){
        float s = 1.0 * (a[i - 1] + a[i + 1]) / 2;
        if(s == a[i])
            dem++;
    }   
    return dem;
}
// Ham TimKiem
void TimKiem(int a[], int n){
    int x;
    printf("Nhap gia tri can tim vi tri dau tien: ");
    scanf("%d", &x);
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == x){
            printf("Vi tri can tim la: %d\n", i + 1);
            return;
        }
    }
    printf("Khong tim thay\n");
}