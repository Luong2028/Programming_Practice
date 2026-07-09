/*
    Khai báo kiểu dữ liệu học phần (HOCPHAN) gồm 3 thành
    phần: mã học phần, tên học phần, số tín chỉ. Thực hiện các
    yêu cầu sau:
    - Nhập / Xuất thông tin một học phần
    - Nhập nhọc phần (2 < n < 30)
    - Sắp xếp danh sách học phần theo chiều tăng dần của số tín
    chỉ.
    - Đếm số học phần có số tín chỉ bằng số tín chỉ cao nhất.
    - Xuất thông tin n học phần ra màn hình.
*/
#include <stdio.h>
#include <string.h>
#define MAX 30
// Cau truc hoc pham
typedef struct
{
    char mahocphan[20];
    char tenhocphan[100];
    int sotinchi;
} HOCPHAN;
// Prototype
// Prototy nhap
void Nhap(HOCPHAN dshp[], int *n);
// Ham xuat
void Xuat(HOCPHAN dshp[], int n);
// Ham sap xep
void Sapxep(HOCPHAN dshp[], int n);
// Ham Max
int Max(HOCPHAN dshp[], int n);
// Ham Dem
void Dem(HOCPHAN dshp[], int n);
int main()
{
    HOCPHAN dshp[MAX];
    int n;
    // Goi ham nhap
    Nhap(dshp, &n);
    // Goi ham sap xep tang dan theo so tin chi
    Sapxep(dshp, n);
    // Goi ham dem
    Dem(dshp, n);
    // Goi ham xuat
    Xuat(dshp, n);
    return 0;
}
// Ham nhap
void Nhap(HOCPHAN dshp[], int *n)
{
    do
    {
        printf("Nhap n hoc phan (2 < n < 30): ");
        scanf("%d", n);
    } while (*n <= 2 || *n >= 30);
    int i;
    for (i = 0; i < *n; i++)
    {
        getchar();
        printf("Nhap hoc phan thu %d\n", i + 1);
        printf("Ma hoc phan: ");
        fgets(dshp[i].mahocphan, sizeof(dshp[i].mahocphan), stdin);
        dshp[i].mahocphan[strcspn(dshp[i].mahocphan, "\n")] = '\0';
        printf("Ten hoc phan: ");
        fgets(dshp[i].tenhocphan, sizeof(dshp[i].tenhocphan), stdin);
        dshp[i].tenhocphan[strcspn(dshp[i].tenhocphan, "\n")] = '\0';
        printf("So tin chi: ");
        scanf("%d", &dshp[i].sotinchi);
    }
}
// Ham Xuat
void Xuat(HOCPHAN dshp[], int n)
{
    printf("Danh sach hoc phan sau khi sap xep:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\n", dshp[i].mahocphan, dshp[i].tenhocphan, dshp[i].sotinchi);
    }
}
// Ham sap xep
void Sapxep(HOCPHAN dshp[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (dshp[i].sotinchi > dshp[j].sotinchi)
            {
                HOCPHAN temp = dshp[i];
                dshp[i] = dshp[j];
                dshp[j] = temp;
            }
        }
    }
}
// Ham Max
int Max(HOCPHAN dshp[], int n)
{
    int i;
    int max = dshp[0].sotinchi;
    for (i = 1; i < n; i++)
    {
        if (max < dshp[i].sotinchi)
            max = dshp[i].sotinchi;
    }
    return max;
}
// Ham Dem
void Dem(HOCPHAN dshp[], int n)
{
    int i;
    int dem = 0;
    int max = Max(dshp, n);
    for (i = 0; i < n; i++)
    {
        if (dshp[i].sotinchi == max)
            dem++;
    }
    printf("So hoc phan co so tin chi bang tin chi cao nhat: %d\n", dem);
}