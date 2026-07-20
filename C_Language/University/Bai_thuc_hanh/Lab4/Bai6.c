#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(int a[][N], int *n);
// Prototype In
void In(int a[][N], int n);
// Prototype InChan
void InChan(int a[][N], int n);
// Prototype DuoiCheoPhu
void DuoiCheoPhu(int a[][N], int n);
// Prototype TongChanCheoChinh
int TongChanCheoChinh(int a[][N], int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a va n cot n hang
    int a[N][N], n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, n);
    // Goi ham InChan
    InChan(a, n);
    // Goi ham DuoiCheoPhu
    DuoiCheoPhu(a, n);
    // Goi ham TongChanCheoChinh
    printf("Tong cac phan tu chan tren duong cheo chinh: %d\n", TongChanCheoChinh(a, n));
    return 0;
}
// Ham Nhap
void Nhap(int a[][N], int *n){
    do{
        printf("Nhap n cot va n hang (2 <= n <= 10): ");
        scanf("%d", n);
    }while(*n < 2 || *n > 10);
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++){
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
}
// Ham In
void In(int a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham InChan
void InChan(int a[][N], int n){
    int i, j;
    printf("Ma tran sau khi thay doi:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] % 2 == 0)
                printf("?\t");
            else 
                printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham DuoiCheoPhu
void DuoiCheoPhu(int a[][N], int n){
    int i, j;
    printf("Cac phan tu nam duoi duong cheo phu:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(((i + j) >= n - 1))
                printf("%d\t", a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
}
// Ham TongChanCheoChinh
int TongChanCheoChinh(int a[][N], int n){
    int i;
    int s = 0;
    for(i = 0; i < n; i++){
        if(a[i][i] % 2 == 0)
         s += a[i][i];
    }
    return s;
}