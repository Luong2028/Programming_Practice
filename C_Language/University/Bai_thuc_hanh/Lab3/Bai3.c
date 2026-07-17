#include <stdio.h>
#define N 40
// Prototype Nhap
void Nhap(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype ThayThe
void ThayThe(int a[], int n);
// Prototype TrungBinh
float TrungBinh(int a[], int n);
// Prototype Dem
int Dem(int a[], int n);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu
    int a[N], n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    printf("Mang vua nhap: ");
    In(a, n);
    // Goi ham ThayThe
    ThayThe(a, n);
    printf("Mang sau khi thay the: ");
    In(a, n);
    // Goi ham TrungBinh
    printf("Trung binh cac phan tu trong mang la: %.2f\n", TrungBinh(a, n));
    // Goi ham Dem
    printf("So luong phan tu co gia tri lon hon trung binh mang: %d\n", Dem(a, n));
    return 0;
}
// Ham Nhap
void Nhap(int a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (2 < n <= 40): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 40);
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
// Ham ThayThe
void ThayThe(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 3 == 0)
            a[i] = 5;
    }
}
// Ham TrungBinh
float TrungBinh(int a[], int n){
    int i;
    int s = 0;
    for(i = 0; i < n; i++){
        s += a[i];
    }
    return (float)s / n;
}
// Ham Dem
int Dem(int a[], int n){
    int i;
    int dem = 0;
    float tb = TrungBinh(a, n);
    for(i = 0; i < n; i++){
        if(a[i] > tb)
            dem++;
    }
    return dem;
}