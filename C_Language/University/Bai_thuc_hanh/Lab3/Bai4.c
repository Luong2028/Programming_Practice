#include <stdio.h>
#define N 30
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype In
void In(float a[], int n);
// Prototype TimKiem
void TimKiem(float a[], int n, float x);
// Prototype XuatHien
int XuatHien(float a[], int n, int j);
// Prototype TimXuatHienNhieu
void TimXuatHienNhieu(float a[], int n);
// Prototype Xoa
void Xoa(float a[], int *n, int p);
// Chuong trinh chinh
int main()
{
    // Khai bao mang a va n phan tu trong mang
    float a[N];
    int n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi In
    In(a, n);
    // Goi ham TimKiem
    float x;
    printf("Nhap so thuc can tim vi tri dau tien trong mang: ");
    scanf("%f", &x);
    TimKiem(a, n, x);
    // Goi ham TimXuatHienNhieu
    TimXuatHienNhieu(a, n);
    // Goi ham Xoa
    int p;
    do{
        printf("Nhap phan tu tai vi tri p can xoa (0 <= p < n): ");
        scanf("%d", &p);
    }while(p < 0 || p >= n);
    Xoa(a, &n, p);
    printf("Day sau khi xoa: ");
    In(a, n);
    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n)
{
    do
    {
        printf("Nhap n phan tu trong mang (2 < n <= 30): ");
        scanf("%d", n);
    } while (*n <= 2 || *n > 30);
    int i;
    for (i = 0; i < *n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
// Ham In
void In(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
// Ham TimKiem
void TimKiem(float a[], int n, float x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("Vi tri dau tien cua %.2f trong day so la %d\n", x, i + 1);
            return;
        }
    }
    printf("Khong tim thay!\n");
}
// Ham XuatHien
int XuatHien(float a[], int n, int j)
{
    int i;
    int dem = 0;
    for (i = j + 1; i < n; i++)
    {
        if (a[j] == a[i])
            dem++;
    }
    return dem;
}
// Ham TimXuatHienNhieu
void TimXuatHienNhieu(float a[], int n)
{
    int i, kt = 0;
    printf("Cac phan tu xuat hien nhieu hon 1 lan trong mang la: ");
    for(i = 0; i < n; i++){
        if(XuatHien(a, n, i) > 0){
            printf("%.2f ", a[i]);
            kt = 1;
        }
    }
    if(kt == 0)
        printf("Khong tim thay");
    printf("\n");
}
// Ham Xoa
void Xoa(float a[], int *n, int p)
{
    int i;
    for (i = p; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}