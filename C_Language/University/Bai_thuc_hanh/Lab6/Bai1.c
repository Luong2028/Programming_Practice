#include <stdio.h>
#include <string.h>
#define N 100
// Cau truc Sach
typedef struct
{
    char tensach[N];
    char tacgia[N];
    char nhaxuatban[N];
    int namxuatban;
    float dongia;
} Sach;

// Prototype Nhap
void Nhap(Sach *n);
// Prototypr Xuat
void Xuat(Sach n);
// Chuong trinh chinh
int main(){
    Sach s1;
    // Goi ham Nhap
    printf("Nhap thong tin sach:\n");
    Nhap(&s1);
    // GOi ham Xuat
    printf("Thong tin sach vua nhap:\n");
    Xuat(s1);
    return 0;
}
// Ham Nhap
void Nhap(Sach *n){
    printf("Nhap ten sach: ");
    fgets(n->tensach, N, stdin);
    n->tensach[strcspn(n->tensach, "\n")] = '\0';
    printf("Nhap tac gia: ");
    fgets(n->tacgia, N, stdin);
    n->tacgia[strcspn(n->tacgia, "\n")] = '\0';
    printf("Nhap nha xuat ban: ");
    fgets(n->nhaxuatban, N, stdin);
    n->nhaxuatban[strcspn(n->nhaxuatban, "\n")] = '\0';
    printf("Nhap nam xuat ban: ");
    scanf("%d", &n->namxuatban);
    printf("Nhap don gia: ");
    scanf("%f", &n->dongia);
}
// Ham Xuat
void Xuat(Sach n){
    printf("Ten sach: %s\n", n.tensach);
    printf("Tac gia: %s\n",n.tacgia);
    printf("Nha xuat ban: %s\n", n.nhaxuatban);
    printf("Nam xuat ban: %d\n", n.namxuatban);
    printf("Don gia: %.2f\n", n.dongia);
}