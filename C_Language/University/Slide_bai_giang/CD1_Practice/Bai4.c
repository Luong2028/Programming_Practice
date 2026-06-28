/*
    Viết hàm TinhTichLe thực hiện tính tích các số lẻ từ 1 -> a (với a là tham số đầu vào của hàm)
    Viết chương trình và sử dụng hàm TinhTichLe thực hiện:
    - Nhập vào một số nguyên dương lẻ n (n <= 15).
    - Tính và in giá trị của biểu thức:
        T = 2/1 + 4/1*3 + 6/1*3*5 + 8/1*3*5*7 + ... + (n+1)/1*3*5*...*n.
*/
#include <stdio.h>
// Prototype
int TinhTichLe(int a);
// Chuong trinh chinh
int main(){
    // Khai bao bien
    int n;
    // Nhap du lieu dau vao
    do{
        printf("Nhap mot so nguyen duong le (n <= 15): ");
        scanf("%d", &n);
    }while(n <= 0 || n > 15 || n % 2 == 0);
    // Tinh gia tri bieu thuc
    int i;
    float T = 0;
    for(i = 1; i <= n; i = i + 2){
        T = T + (i + 1) * 1.0 / TinhTichLe(i);
    }
    // In gia tri dau ra
    printf("Gia tri cua bieu thuc la: %f\n", T);

    return 0;
}

int TinhTichLe(int a){
    int T = 1, i;
    for(i = 1; i <= a; i = i + 2){
        T = T * i;
    }
    return T;
}