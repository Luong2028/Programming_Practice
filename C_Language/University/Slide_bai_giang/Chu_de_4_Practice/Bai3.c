/*
    Viết các hàm thực hiện các yêu cầu trên mảng 1 chiều:
    - Nhập vào dãy số thực gồm n phần tử (2 < n <50) dùng cấp phát động;
    - In dãy số vừa nhập ra màn hình;
    - Tính và in ra tổng các phần tử dương trong mảng;
    - main() gọi các hàm trên để thực hiện kiểm tra kết quả.
*/
#include <stdio.h>
#include <stdlib.h>
// Ham nhap(
void Nhap(float *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", a + i);
    }
}
// Ham xuat
void Xuat(float *a, int n){
    printf("Day so thuc vua nhap: ");
    int i;
    for(i = 0; i < n; i++){
        printf("%.2f ", *(a + i));
    }
    printf("\n");
}
// Ham tong
void Tong(float *a, int n){
    int i;
    float S = 0;
    for(i = 0; i < n; i++){
        if(a[i] > 0)
            S += a[i];
    }
    printf("Tong cac phan tu duong trong mang: %.2f", S);
}
// Ham chuong trinh chinh
int main(){
    float *a;
    int n;
    do{
        printf("Nhap day so thuc gom n phan tu (2 < n < 50): ");
        scanf("%d", &n);
    }while(n <= 2 || n >= 50);
    a = (float *) calloc(n, sizeof(float));
    // Goi ham nhap
    Nhap(a, n);
    // Goi ham xuat
    Xuat(a, n);
    // Goi ham tinh tong cac phan tu duong
    Tong(a, n);
    free(a);
    return 0;
}