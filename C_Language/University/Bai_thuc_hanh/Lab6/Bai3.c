#include <stdio.h>
#include <string.h>
#define N 100
// Cau truc HocVien
typedef struct{
    char maso[N];
    char hoten[N];
    char lop[N];
    float dtb;
}HocVien;
// Prototype Nhap
void Nhap(HocVien *n);
// Prototype Xuat
void Xuat(HocVien n);
// Chuong trinh chinh
int main(){
    HocVien n;
    // Goi ham Nhap
    printf("Nhap thong tin cua hoc vien:\n");
    Nhap(&n);
    // Goi ham Xuat
    printf("Thong tin hoc vien vua nhap:\n");
    Xuat(n);
    return 0;
}
// Ham Nhap
void Nhap(HocVien *n){
    printf("Nhap ma so: ");
    fgets(n->maso, N, stdin);
    n->maso[strcspn(n->maso, "\n")] = '\0';
    printf("Nhap ho ten: ");
    fgets(n->hoten, N, stdin);
    n->hoten[strcspn(n->hoten, "\n")] = '\0';
    printf("Nhap lop: ");
    fgets(n->lop, N, stdin);
    n->lop[strcspn(n->lop, "\n")] = '\0';
    printf("Nhap diem trung binh: ");
    scanf("%f", &n->dtb);
    getchar();
}
// Ham Xuat
void Xuat(HocVien n){
    printf("Ma so: %s\n", n.maso);
    printf("Ho ten: %s\n", n.hoten);
    printf("Lop: %s\n", n.lop);
    printf("Diem trung binh: %.2f\n", n.dtb);
}