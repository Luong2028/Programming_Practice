/*
    Viết các hàm thực hiện các yêu cầu sau:
    - Nhập vào một ma trận có mxn phần tử là số nguyên  (2 < m < 10; 2< n < 10)
    - Xuất ra màn hình ma trận vừa nhập;
    - Tính tổng các phần tử nằm ở dòng đầu tiên của ma trận;
    - Đếm số phần tử dương nằm ở cột thứ i trong ma trận, với i là tham số truyền vào hàm;
    - Hàm main() gọi các hàm trên thực hiện để xem kết quả.
*/
#include <stdio.h>
#define maxd 100
#define maxc 100
// Prototype
void Nhap(int a[][maxc], int *m, int *n);
void Xuat(int a[][maxc], int m, int n);
int Tong(int a[][maxc], int n);
int Dem(int a[][maxc], int m, int i);

int main(){
    int a[maxd][maxc], m, n, i;
    // Goi ham nhap ma tran
    Nhap(a, &m, &n);
    // Goi ham xuat
    Xuat(a, m, n);
    // Goi ham tinh tong cac phan tu o dong dau tien
    printf("Tong cac phan tu o dong dau tien: %d\n", Tong(a, n));
    // Goi ham dem cac phan tu duong o cot i
    do{
        printf("Nhap cot i can dem (0 -> %d): ", n - 1);
        scanf("%d", &i);
    }while(i < 0 || i > n - 1);
    int dem = Dem(a, m, i);
    if(dem == 0)
        printf("Khong co phan tu duong tren cot i!\n");
    else
        printf("So luong phan tu duong tren cot i la: %d\n", dem);

    return 0;
}
// Ham nhap ma tran
void Nhap(int a[][maxc], int *m, int *n){
    do{
        printf("Nhap so luong hang cua ma tran (2 < m < 10): ");
        scanf("%d", m);
    }while(*m <= 2 || *m >= 10);
    do{
        printf("Nhap so luong cot cua ma tran (2 < n < 10): ");
        scanf("%d", n);
    }while(*n <= 2 || *n >= 10);
    int i, j;
    for (i = 0; i < *m; i++)
    {
        for (j = 0; j < *n; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
// Ham xuat ma tran
void Xuat(int a[][maxc], int m, int n){
    printf("Ma tran sau khi nhap:\n");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
// Ham tinh tong cac phan tu nam dong dau tien
int Tong(int a[][maxc], int n){
    int i;
    int S = 0;
    for (i = 0; i < n; i++)
    {
        S += a[0][i];
    }
    return S;
}
// Ham dem phan tu duong tren cot i
int Dem(int a[][maxc], int m, int i){
    int j;
    int dem = 0;
    for (j = 0; j < m; j++)
    {
        if(a[j][i] > 0)
            dem++;
    }
    return dem;
}