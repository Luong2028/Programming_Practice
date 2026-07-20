#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(int a[][N], int *m, int *n);
// Prototype In
void In(int a[][N], int m, int n);
// Prototype Tong
int Tong(int a[][N], int m, int n);
// Prototpe LonNhat
int LonNhat(int a[][N], int m, int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a, m hang va n cot
    int a[N][N], m, n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &m, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, m, n);
    // Goi ham Tong
    printf("Tong cac phan tu trong ma tran la: %d\n", Tong(a, m, n));
    // Goi ham LonNhat
    printf("Phan tu lon nhat trong ma tran la: %d\n", LonNhat(a, m, n));
    return 0;
}
// Ham Nhap
void Nhap(int a[][N], int *m, int *n){
    do{
        printf("Nhap m hang: ");
        scanf("%d", m);
    }while(*m <= 1 || *m > 10);
    do{
        printf("Nhap n cot: ");
        scanf("%d", n);
    }while(*n <= 1 || *n > 10);
    int i, j;
    for(i = 0; i < *m; i++){
        for(j = 0; j < *n; j++){
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
// Ham In
void In(int a[][N], int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham Tong
int Tong(int a[][N], int m, int n){
    int i, j, s = 0;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            s += a[i][j];
        }
    }
    return s;
}
// Ham LonNhat
int LonNhat(int a[][N], int m, int n){
    int i, j;
    int max = a[0][0];
    for(i =  0; i < m; i++){
        for(j = 0; j < n; j++){
            if(max < a[i][j])
                max = a[i][j];
        }
    }
    return max;
}