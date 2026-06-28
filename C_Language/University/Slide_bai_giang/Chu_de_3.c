/*
    Viết chương trình thực hiện các yêu cầu:
    - Nhập 1 mảng số nguyên có n phần tử (5 <= n <= 100)
    - Đếm số phần tử chẵn trong mảng.
    - Tính tổng của các phần tử lẻ trong mảng.
    - Tính và in ra trung bình cộng các phần tử của mảng.
    - Tìm và in ra số dương lớn nhất của mảng và vị trí của nó.
    - Sắp xếp mảng theo chiều giảm dần.
    - Tách các số nguyên tố có trong mảng a đưa vào mảng b.
*/

#include <stdio.h>
// Dinh nghia
#define N 100
// Prototype
void Nhap(int a[], int n);
void Xuat(int a[], int n);
int DemChan(int a[], int n);
int DemLe(int a[], int n);
int TongLe(int a[], int n);
float TrungBinhCong(int a[], int n);
int Max(int a[], int n, int *vt);
void SapXepGiamDan(int a[], int n);
int KiemTraNguyenTo(int n);
void TachSNT(int a[], int n, int b[], int *nb);
// Chuong trinh chinh
int main(){
    int n, a[N];
    do{
        printf("Nhap mang so nguyen co n phan tu (5 <= n <= 100): ");
        scanf("%d", &n);
    }while(n < 5 || n > 100);
    // Nhap cac phan tu trong mang
    printf("Nhap cac phan tu trong mang:\n");
    Nhap(a, n);
    // In cac phan tu trong mang
    printf("Cac phan tu vua nhap la: ");
    Xuat(a, n);
    // Goi ham dem so phan tu chan trong mang
    int dc = DemChan(a,n);
    if(dc)
        printf("So phan tu chan trong mang la: %d\n", dc);
    else
        printf("Khong co phan tu chan nao trong mang!\n");
    // Goi ham tinh tong cac phan tu le trong mang
    int dl = DemLe(a, n);
    if(dl)
        printf("Tong cac phan tu le trong mang la: %d\n", TongLe(a, n));
    else
        printf("Khong co phan tu le nao trong mang!\n");
    // Goi ham tinh trung binh cong
    printf("Trung binh cong cac phan tu trong mang: %.2f\n", TrungBinhCong(a, n));
    // Goi ham tim so duong lon nhat cua mang va vi tri cua no
    int vt;
    int kq = Max(a, n, &vt);
    if(kq == -1)
        printf("Khong co phan tu duong trong mang!\n");
    else
        printf("%d la so duong lon nhat cua mang, vi tri la %d\n", kq, vt);
    // Goi ham sap xep mang 
    SapXepGiamDan(a, n);
    printf("Mang sau khi sap xep giam dan la: ");
    Xuat(a, n);
    // Goi ham tach cac so nguyen to
    int b[N], nb = 0;
    TachSNT(a, n, b, &nb);
    if(nb){
        printf("Mang b sau khi tach: ");
        Xuat(b, nb);
    }
    else
        printf("Khong co so nguyen to trong mang!\n");
    
    return 0;
}
// Ham nhap
void Nhap(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
// Ham xuat
void Xuat(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// Ham dem so phan tu chan trong mang
int DemChan(int a[], int n){
    int count = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            count++;
    }
    return count;
}
// Ham dem so phan tu le trong mang
int DemLe(int a[], int n){
    int count = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0)
            count++;
    }
    return count;
}
// Ham tinh tong cac phan tu le trong mang
int TongLe(int a[], int n){
    int i, S = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0)
            S += a[i];
    }
    return S;
}
// Ham tinh trung binh cong cac phan tu trong mang
float TrungBinhCong(int a[], int n){
    int S = 0, i;
    for(i = 0; i < n; i++){
        S += a[i];
    }
    return S * 1.0 / n;
}
// Tim so duong lon nhat trong mang
int Max(int a[], int n, int *vt){
    int max = -1, i;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            max = a[i];
            *vt = i;
            break;
        }
    }
    if(max == -1)
        return -1;
    for(i = *vt + 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
            *vt = i;
        }
    }
    return max;
}
// Sap xep mang theo chieu giam dan
void SapXepGiamDan(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// Ham kiem tra so nguyen to
int KiemTraNguyenTo(int n){
    if(n < 2)
        return 0;
    int i;
    for(i = 2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
// Tach cac so nguyen to co trong mang a dua vao mang b
void TachSNT(int a[], int n, int b[], int *nb){
    int i;
    for(i = 0; i < n; i++){
        if(KiemTraNguyenTo(a[i])){
            b[*nb] = a[i];
            (*nb)++;
        }
    }
}