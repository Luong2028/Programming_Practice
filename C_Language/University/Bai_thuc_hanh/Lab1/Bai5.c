#include <stdio.h>
#include <math.h>
// Prototype Tong
int Tong(int n);
// Ham chuong trinh chinh
int main(){
    // Nhap x va n
    int n, x;
    printf("Nhap x va n: ");
    scanf("%d%d", &x, &n);
    // Tinh gia tri chuoi
    float s = 0;
    int i;
    for(i = 1; i <= n; i++){
        s += pow(-1, i) * (pow(x, i) * 1.0 / Tong(i));
    }
    // Input
    printf("Ket qua: %.2f\n", s);
    return 0;
}
// Ham Tong
int Tong(int n){
    int i, s = 0;
    for(i = 1; i <= n; i++){
        s += i;
    }
    return s;
}