#include <stdio.h>
#define MAX 50
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype In
void In(float *a, int n);
// Ham chuong trinh chinh
int main(){
    // Khai bao mang a va so luong phan tu n
    float a[MAX];
    int n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    In(a, n);
    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n){
    do{
        printf("Nhap so luong n trong day so thuc (3 < n <= 50): ");
        scanf("%d", n);
    }while(*n <= 3 || *n > 50);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
// Ham In
void In(float *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%.2f ", *(a + i));
    }
    printf("\n");
}