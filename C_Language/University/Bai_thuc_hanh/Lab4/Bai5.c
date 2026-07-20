#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(int a[][N], int *m, int *n);
// Prototype In
void In(int a[][N], int m, int n);
// Prototype TongBien
int TongBien(int a[][N], int m, int n);
// Prototype LonNhat
int LonNhat(int a[][N], int m, int p);
// Prototype HoanDoi
void HoanDoi(int a[][N], int m, int j1, int j2);
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
    // Goi ham TongBien
    printf("Tong cac phan tu nam tren duong bien ngoai: %d\n", TongBien(a, m, n));
    // Goi ham LonNhat
    int p;
    do{
        printf("Nhap so cot muon tim (0 <= p < n): ");
        scanf("%d", &p);
    }while(p < 0 || p >= n);
    printf("Phan tu lon nhat trong cot %d: %d\n", p, LonNhat(a, m, p));
    // Goi ham HoanDoi
    int j1, j2;
    do{
        printf("Nhap 2 cot can hoan doi (0 <= j1, j2 < n): ");
        scanf("%d%d", &j1, &j2);
    }while(j1 < 0 || j1 >= n || j2 < 0 || j2 >= n);
    HoanDoi(a, m, j1, j2);
    printf("Ma Tran sau khi hoan doi:\n");
    In(a, m, n);
    return 0;
}
// Ham Nhap
void Nhap(int a[][N], int *m, int *n){
    do{
        printf("Nhap m hang (2 < m <= 10): ");
        scanf("%d", m);
    }while(*m <= 2 || *m > N);
    do{
        printf("Nhap n cot (2 < n <= 10): ");
        scanf("%d", n);
    }while(*n <= 2 || *n > N);
    int i, j;
    for(i = 0; i < *m; i++){
        for(j = 0; j < *n; j++){
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
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
// Ham TongBien
int TongBien(int a[][N], int m, int n){
     int i, j;
     int s = 0;
     for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(j == 0 || i == 0 || j == (n - 1) || i == (m - 1))
                s += a[i][j];
        }
    }
    return s;
}
// Ham LonNhat
int LonNhat(int a[][N], int m, int p){
    int i;
    int max = a[0][p];
    for(i = 1; i < m; i ++){
        if(a[i][p] > max)
            max = a[i][p];
    }
    return max;
}
// Ham HoanDoi
void HoanDoi(int a[][N], int m, int j1, int j2){
    int i;
    for(i = 0; i < m; i++){
        int temp = a[i][j1];
        a[i][j1] = a[i][j2];
        a[i][j2] = temp;
    }
}