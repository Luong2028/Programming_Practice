#include <stdio.h>
#define N 30
// Prototype Nhap
void Nhap(int *a, int *n);
// Prototype In
void In(int *a, int n);
// Chuong trinh chinh
int main(){
    // Khai bao mang a, n phan tu trong mang va con tro p
    int a[N], n, *p;
    // Con tro tro toi mang
    p = &a[0];
    // Goi ham Nhap
    Nhap(p, &n);
    // Goi ham In
    In(p, n);

    return 0;
}
// Ham Nhap
void Nhap(int *a, int *n){
    do{
        printf("Nhap n phan tu trong day so (3 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 3 || *n > 30);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", a + i);
    }
}
// Ham In
void In(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
}