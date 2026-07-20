#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(float a[][N], int *m, int *n);
// Prototype In
void In(float a[][N], int m, int n);
// Prtototype Dem
int Dem(float a[][N], int m, int n, float x);
// Prototype HoanDoi
void HoanDoi(float a[][N], int i1, int i2, int n);
// Prototype TinhTongTungHang
void TinhTongTungHang(float a[][N], int m, int n);
// Chuong trinh chinh
int main(){
    // Khai bao ma tran a, m hang va n cot
    float a[N][N];
    int m, n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &m, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, m, n);
    // Goi ham Dem
    float x;
    printf("Nhap so thuc can dem: ");
    scanf("%f", &x);
    printf("So luong phan tu co gia tri %.2f: %d\n", x, Dem(a, m, n, x));
    // Goi ham HoanDoi
    int i1, i2;
    do{
        printf("Nhap 2 hang can hoan doi (0 <= i1,i2 < m): ");
        scanf("%d%d", &i1, &i2);
    }while(i1 < 0 || i1 >= m || i2 < 0 || i2 >= m);
    HoanDoi(a, i1, i2, n);
    printf("Ma tran sau khi hoan doi:\n");
    In(a, m, n);
    // Goi ham TinhTongTungHang
    TinhTongTungHang(a, m, n);
    return 0;
}
// Ham Nhap
void Nhap(float a[][N], int *m, int *n){
    do{
        printf("Nhap m hang (1 < m <= 10): ");
        scanf("%d", m);
    }while(*m <= 1 || *m > N);
    do{
        printf("Nhap n cot (1 < m <= 10): ");
        scanf("%d", n);
    }while(*n <= 1 || *n > N);
    int i, j;
    for(i = 0; i < *m; i++){
        for(j = 0; j < *n; j++){
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\n");
}
// Ham In
void In(float a[][N], int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham Dem
int Dem(float a[][N], int m, int n, float x){
    int i, j, dem = 0;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] == x)
                dem++;
        }
    }
    return dem;
}
// Ham HoanDoi
void HoanDoi(float a[][N], int i1, int i2, int n){
    int i;
    for(i = 0; i < n; i++){
        float temp = a[i1][i];
        a[i1][i] = a[i2][i];
        a[i2][i] = temp;
    }
}
// Ham TinhTongTungHang
void TinhTongTungHang(float a[][N], int m, int n){
    printf("Tong tung hang:\n");
    int i, j;
    for(i = 0; i < m; i++){
        float s = 0;
        for(j = 0; j < n; j++){
            s += a[i][j];
        }
        printf("Tong hang %d: %.2f\n", i, s);
    }
}