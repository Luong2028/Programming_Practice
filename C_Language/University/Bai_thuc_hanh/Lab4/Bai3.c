#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(int a[][N], int *n);
// Prototype In
void In(int a[][N], int n);
// Prototype InLe
void InLe(int a[][N], int n);
// Prototype TrenCheoChinh
void TrenCheoChinh(int a[][N], int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a, n hang va n cot
    int a[N][N], n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &n);
    // Goi ham In
    printf("Ma Tran vua nhap:\n");
    In(a, n);
    // Goi ham InLe
    printf("Ma tran sau khi thay doi:\n");
    InLe(a, n);
    // Goi ham TrenCheoChinh
    printf("In cac phan tu tren duong cheo chinh:\n");
    TrenCheoChinh(a, n);
    return 0;
}
// Ham Nhap
void Nhap(int a[][N], int *n){
    do{
        printf("Nhap n hang va n cot (3 <= n <= 10): ");
        scanf("%d", n);
    }while(*n < 3 || *n > N);
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
// Ham InLe
void InLe(int a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] % 2 != 0)
                printf("*\t");
            else
                printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham TrenCheoChinh
void TrenCheoChinh(int a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if((i == j) || (i < j))
                printf("%d\t", a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
    printf("\n");
}