#include <stdio.h>
#define N 10
// Prototype Nhap
void Nhap(float a[][N], int *m, int *n);
// Prototype In
void In(float a[][N], int m, int n);
// Prototype ChuyenVi
void ChuyenVi(float a[][N], float b[][N], int m, int n);
// Prototype Xoa
void Xoa(float a[][N], int *m, int n, int k);
// Chuong trinh chinh
int main()
{
    // Khai bao ma tran a, m hang va n cot
    float a[N][N];
    int m, n;
    // Goi ham Nhap
    printf("Nhap ma tran:\n");
    Nhap(a, &m, &n);
    // Goi ham In
    printf("Ma tran vua nhap:\n");
    In(a, m, n);
    // Goi ham ChuyenVi
    float b[N][N];
    ChuyenVi(a, b, m, n);
    printf("Ma tran chuyen vi:\n");
    In(b, n, m);
    // Goi ham Xoa
    int i;
    do{
        printf("Nhap hang de xoa (0 <= i < m): ");
        scanf("%d", &i);
    }while(i < 0 || i >= m);
    Xoa(a, &m, n, i);
    printf("Ma tran sau khi xoa:\n");
    In(a, m, n);
    return 0;
}
// Ham Nhap
void Nhap(float a[][N], int *m, int *n)
{
    do
    {
        printf("Nhap m hang (1 < m <= 10): ");
        scanf("%d", m);
    } while (*m <= 1 || *m > 10);
    do
    {
        printf("Nhap n cot (1 < n <= 10): ");
        scanf("%d", n);
    } while (*n <= 1 || *n > 10);
    int i, j;
    for (i = 0; i < *m; i++)
    {
        for (j = 0; j < *n; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("\n");
}
// Ham In
void In(float a[][N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// Ham ChuyenVi
void ChuyenVi(float a[][N], float b[][N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\n");
}
// Ham Xoa
void Xoa(float a[][N], int *m, int n, int k)
{
    int i, j;
    for(i = k; i < *m; i++){
        for(j = 0; j < n; j++){
            a[i][j] = a[i + 1][j];
        }
    }
    (*m)--;
    printf("\n");
}