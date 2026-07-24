#include <stdio.h>
#include <string.h>
#define N 29
#define M 100
// Cau truc Sach
typedef struct
{
    char tensach[M];
    char tacgia[M];
    char nhaxuatban[M];
    int namxuatban;
    float dongia;
} Sach;

// Prototype Nhap
void Nhap(Sach ds[], int *n);
// Prototype Xuat
void Xuat(Sach ds[], int n);
// Prototype SapXepGiamDan
void SapXepGiamDan(Sach ds[], int n);
// Prototype Dem
int Dem(Sach ds[], int n);
// Chuong trinh chinh
int main()
{
    Sach ds[N];
    int n;
    // Goi ham Nhap
    Nhap(ds, &n);
    // Goi ham Xuat 
    Xuat(ds, n);
    // Goi ham SapXepGiamDan
    SapXepGiamDan(ds, n);
    printf("Danh sach quyen sach sau khi sap xep:\n");
    Xuat(ds, n);
    // Goi ham dem
    printf("So luong sach co nam xuat ban truoc nam 2022: %d\n", Dem(ds, n));
    return 0;
}
// Ham Nhap
void Nhap(Sach ds[], int *n)
{
    do
    {
        printf("Nhap so luong sach (1 < n < 30): ");
        scanf("%d", n);
        getchar();
    } while (*n <= 1 || *n >= 30);
    int i;
    for (i = 0; i < *n; i++)
    {
        printf("Nhap thong tin quyen sach thu %d:\n", i + 1);
        printf("Nhap ten sach: ");
        fgets(ds[i].tensach, M, stdin);
        ds[i].tensach[strcspn(ds[i].tensach, "\n")] = '\0';
        printf("Nhap tac gia: ");
        fgets(ds[i].tacgia, M, stdin);
        ds[i].tacgia[strcspn(ds[i].tacgia, "\n")] = '\0';
        printf("Nhap nha xuat ban: ");
        fgets(ds[i].nhaxuatban, M, stdin);
        ds[i].nhaxuatban[strcspn(ds[i].nhaxuatban, "\n")] = '\0';
        printf("Nhap nam xuat ban: ");
        scanf("%d", &ds[i].namxuatban);
        getchar();
        printf("Nhap don gia: ");
        scanf("%f", &ds[i].dongia);
        getchar();
    }
}
// Ham Xuat
void Xuat(Sach ds[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Thong tin quyen thu %d:\n", i + 1);
        printf("Ten sach: %s\n", ds[i].tensach);
        printf("Tac gia: %s\n", ds[i]. tacgia);
        printf("Nha xuat ban: %s\n", ds[i].nhaxuatban);
        printf("Nam xuat ban: %d\n", ds[i].namxuatban);
        printf("Don gia: %.2f\n", ds[i].dongia);
    }
}
// Ham SapXepGiamDan
void SapXepGiamDan(Sach ds[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(ds[i].dongia < ds[j].dongia){
                Sach temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
int Dem(Sach ds[], int n){
    int i;
    int dem = 0;
    for(i = 0; i < n; i ++){
        if(ds[i].namxuatban < 2022)
            dem++;
    }
    return dem;
}
