#include <stdio.h>
#include <string.h>
#define N 100
#define M 49
// Cau truc HocVien
typedef struct{
    char maso[N];
    char hoten[N];
    char lop[N];
    float dtb;
}HocVien;
// Prototype Nhap
void Nhap(HocVien ds[], int *n);
// Prototype Xuat
void Xuat(HocVien ds[], int n);
// Prototype SapXepTangDan
void SapXepTangDan(HocVien ds[], int n);
// Prototype TrungBinhCong
float TrungBinhCong(HocVien ds[], int n);
// Chuong trinh chinh
int main(){
    HocVien ds[M];
    int n;
    // Goi ham Nhap
    Nhap(ds, &n);
    // Goi ham SapXepTangDan
    SapXepTangDan(ds, n);
    // Goi ham Xuat
    printf("Danh sach hoc vien sau khi sap xep:\n");
    Xuat(ds, n);
    // Goi ham TrungBinhCong
    printf("Trung binh cong cua %d hoc vien: %.2f\n", n, TrungBinhCong(ds, n));
    return 0;
}
// Ham Nhap
void Nhap(HocVien ds[], int *n){
    do{
        printf("Nhap so luong hoc vien (2 < n < 50): ");
        scanf("%d", n);
        getchar();
    }while(*n <= 2 || *n >= 50);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap thong tin hoc vien thu %d:\n", i + 1);
        printf("Nhap ma so: ");
        fgets(ds[i].maso, N, stdin);
        ds[i].maso[strcspn(ds[i].maso, "\n")] = '\0';
        printf("Nhap ho ten: ");
        fgets(ds[i].hoten, N, stdin);
        ds[i].hoten[strcspn(ds[i].hoten, "\n")] = '\0';
        printf("Nhap lop: ");
        fgets(ds[i].lop, N, stdin);
        ds[i].lop[strcspn(ds[i].lop, "\n")] = '\0';
        printf("Nhap diem trung binh: ");
        scanf("%f", &ds[i].dtb);
        getchar();
        printf("\n");
    }
}
// Ham Xuat
void Xuat(HocVien ds[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Thong tin hoc vien thu %d:\n", i + 1);
        printf("Ma so: %s\n", ds[i].maso);
        printf("Ho ten: %s\n", ds[i]. hoten);
        printf("Lop: %s\n", ds[i].lop);
        printf("Diem trung binh: %.2f\n", ds[i].dtb);
        printf("\n");
    }
}
// Ham SapXepTangDan
void SapXepTangDan(HocVien ds[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(ds[i].dtb > ds[j].dtb){
                HocVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
// Ham TrungBinhCong
float TrungBinhCong(HocVien ds[], int n){
    int i;
    float s = 0;
    for(i = 0; i < n; i++){
        s += ds[i].dtb;
    }
    return s / n;
}