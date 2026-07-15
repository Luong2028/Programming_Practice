#include <stdio.h>
#define MAX 30
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype SapXepGiamDan
void SapXepGiamDan(float a[], int n);
// Prototype In
void In(float a[], int n);
// Prototype TrungBinhCong
float TrungBinhCong(float a[], int n);
// Prototype TongViTriChan
float TongViTriChan(float a[], int n);
// Prototype TichChiSoChan
float TichChiSoChan(float a[], int n);
// Ham chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu
    float a[MAX];
    int n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham SapXepGiamDan
    SapXepGiamDan(a, n);
    // Goi ham In
    printf("Day so sau khi sap xep: ");
    In(a, n);
    // Goi ham TrungBinhCong
    printf("Trung binh cong cac phan tu duong trong day: %.2f\n", TrungBinhCong(a, n));
    // Goi ham TongViTriChan
    printf("Tong cac phan tu o vi tri chan trong day: %.2f\n", TongViTriChan(a, n));
    // Goi ham TichChiSoChan
    printf("Tich cac phan tu o chi so chan trong day: %.2f\n", TichChiSoChan(a, n));

    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n){
    do{
        printf("Nhap n phan tu trong day so (2 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 30);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
// Ham SapXepGiamDan
void SapXepGiamDan(float a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
// Ham TrungBinhCong
float TrungBinhCong(float a[], int n){
    int i;
    float s = 0;
    int dem = 0;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            dem++;
            s += a[i];
        }
    }
    if(dem == 0)
        return 0;
    return s / dem;
}
// Ham TongViTriChan
float TongViTriChan(float a[], int n){
    int i;
    float s = 0;
    for(i = 0; i < n; i++){
        if((i + 1) % 2 == 0)
            s += a[i];
    }
    return s;
}
// Ham TichChiSoChan
float TichChiSoChan(float a[], int n){
    int i;
    float p = 1;
    for(i = 0; i < n; i++){
        if(i % 2 == 0)
            p *= a[i];
    }
    return p;
}