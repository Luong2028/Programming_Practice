#include <stdio.h>
#define MAX 50
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype In
void In(float a[], int n);
// Prototype SapXep
void SapXep(float a[], int n);
// Prototype TongViTriLe
float TongViTriLe(float a[], int n);
// Ham chuong trinh chinh
int main()
{
    // Khai bao mang va so luong phan tu
    int n;
    float a[MAX];
    // Goi ham Nhap

    Nhap(a, &n);
    // Goi ham In
    printf("Cac phan tu vua nhap: ");
    In(a, n);
    // Goi ham SapXep
    SapXep(a, n);
    // Goi ham In sau khi sap xep
    printf("Cac phan tu trong day sau khi sap xep: ");
    In(a, n);
    // Goi ham TongViTriLe
    printf("Tong cac phan tu o vi tri le: %.2f\n", TongViTriLe(a, n));
    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n)
{
    do
    {
        printf("Nhap n phan tu trong mang (3 < n <= 50): ");
        scanf("%d", n);
    } while (*n <= 3 || *n > 50);
    printf("Nhap cac phan tu trong day:\n");
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
// Ham SapXep
void SapXep(float a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// Ham TongViTriLe
float TongViTriLe(float a[], int n)
{
    int i;
    float s = 0;
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)
            s += a[i];
    }
    return s;
}