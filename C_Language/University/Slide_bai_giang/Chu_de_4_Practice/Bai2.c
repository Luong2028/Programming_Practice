/*
    Viết các hàm thực hiện các yêu cầu trên mảng 2 chiều:
    - Nhập vào ma trận số thực gồm nxn phần tử (1 < n <10) dùng cấp phát động;
    - In ra màn hình ma trận vừa nhập;
    - Tính và in ra tổng các phần tử nằm trong tam giác trên đường chéo chính của ma trận;
    - main() gọi các hàm trên để thực hiện kiểm tra kết quả.
*/
#include <stdio.h>
#include <stdlib.h>
// Ham nhap
void Nhap(float **a, int n){
    
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Nhap phan tu thu a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}
// Ham xuat
void Xuat(float **a, int n){
    printf("Cac phan tu vua nhap la:\n");
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}
// Ham tinh tong cac phan tu trong tam giac tren duong cheo chinh
void Tong(float **a , int n){
    int i, j;
    float S = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j ++){
            if(i < j)
                S += a[i][j];
        }
    }
    printf("Tong cac phan tu trong tam giac nam tren duong cheo chinh: %.2f\n", S);
}
// Ham chuong trinh chinh
int main(){
    float **a;
    int n;
    do{
        printf("Nhap ma tran so thuc gom nxn phan tu (1 < n < 10): ");
        scanf("%d", &n);
    }while(n <= 1 || n >= 10);
    a = (float **) calloc(n, sizeof(float *));
    int i, j;
    for(i = 0; i < n; i++){
        a[i] = (float *) calloc(n, sizeof(float));
    }
    // Goi ham nhap
    Nhap(a, n);
    // Goi ham xuat
    Xuat(a, n);
    // Goi ham tong
    Tong(a, n);
    free(a);
    return 0;
}