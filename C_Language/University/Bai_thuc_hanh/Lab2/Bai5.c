#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30
// Prototype Nhap
void TaoMang(int a[], int *n);
// Prototype In
void In(int a[], int n);
// Prototype DoanSo
void DoanSo(int a[], int n, int x);
// Ham chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    int a[MAX], n;
    // Goi ham TaoMang
    TaoMang(a, &n);
    // Goi ham DoanSo
    int x;
    do{
        printf("Nhap 1 so de doan co trong mang hay khong (0 <= x < 100): ");
        scanf("%d", &x);
    }while(x < 0 || x >= 100);
    DoanSo(a, n, x);
    // Goi ham In
    printf("Mang ngau nhien: ");
    In(a, n);
    return 0;
}
// Ham TaoMang
void TaoMang(int a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (2 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > 30);
    srand(time(NULL));
    int i;
    for(i = 0; i < *n; i++){
        a[i] = rand() % 100;
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
// Ham DoanSo
void DoanSo(int a[], int n, int x){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == x){
            printf("Doan dung roi\n");
            return;
        }
    }
    printf("Chuc ban may man lan sau\n");
}