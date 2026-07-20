#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(int a[][N], int *n);
// Prototype In
void In(int a[][N], int n);
// Prototype KiemTra
int KiemTra(int a[][N], int n);
// Prototype DoiXung
int DoiXung(int a[][N], int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a va n cot va n mang
    int a[N][N], n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, n);
    // Goi ham KiemTra
    if(KiemTra(a, n))
        printf("La ma tran don vi\n");
    else
        printf("Khong phai ma tran don vi\n");
    // Goi ham DoiXung
    if(DoiXung(a, n))
        printf("La ma tran doi xung\n");
    else
        printf("Khong phai ma tran doi xung\n");
    return 0;
}
// Ham Nhap
void Nhap(int a[][N], int *n){
    do{
        printf("Nhap n cot va n hang (3 <= n <= 10): ");
        scanf("%d", n);
    }while(*n < 3 || *n > 10);
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
// Ham KiemTra
int KiemTra(int a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j)
                if(a[i][j] != 1)
                    return 0;
            else
                if(a[i][j] != 0)
                    return 0;
        }
    }
    return 1;
}
// Ham DoiXung
int DoiXung(int a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i][j] != a[j][i])
                return 0;
        }
    }
    return 1;
}