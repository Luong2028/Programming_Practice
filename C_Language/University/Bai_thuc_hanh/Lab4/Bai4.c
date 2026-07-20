#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(float a[][N], int *n);
// Prototype In
void In(float a[][N], int n);
// Prototype TBCCheoChinh
float TBCCheoChinh(float a[][N], int n);
// Prototype KiemTra
int KiemTra(float a[][N], int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a, n hang va n cot
    float a[N][N];
    int n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, n);
    // Goi ham TBCCheoChinh
    printf("Trung binh cong cac phan tu nam tren duong cheo chinh: %.2f\n", TBCCheoChinh(a, n));
    // Goi ham KiemTra
    if(KiemTra(a, n))
        printf("Ma tran toan so duong\n");
    else
        printf("Ma tran khong toan so duong\n");
    return 0;
}
// Ham Nhap
void Nhap(float a[][N], int *n){
    do{
        printf("Nhap n hang va n cot (2 <= n <= 10): ");
        scanf("%d", n);
    }while(*n < 2 || *n > N);
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++){
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\n");
}
// Ham In
void In(float a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham TBCCheoChinh
float TBCCheoChinh(float a[][N], int n){
    int i;
    float s = 0;
    for(i = 0; i < n; i++){
        s += a[i][i];
    }
    return s / n;
}
// Ham KiemTra
int KiemTra(float a[][N], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] <= 0)
                return 0;
        }
    }
    return 1;
}