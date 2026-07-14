#include <stdio.h>
#include <math.h>
// Ham NguyenTo
int UCLN(int x, int y){
    x = abs(x);
    y = abs(y);

    if(x == 0) return y;
    if(y == 0) return x;

    while(y != 0){
        int a = x % y;
        x = y;
        y = a;
    }
    return x;
}
// Ham KiemTra
int KiemTra(int x, int y){
    return UCLN(x, y) == 1;
}
// Ham Tong
int Tong(int x, int y){
    int i, s = 0;
    for(i = x; i <= y; i++){
        s += i;
    }
    return s;
}
// Ham Tinh 
int Tinh(int x, int y){
    int i, s = 1;
    for(i = 1; i <= y; i++ ){
        s *= x;
    }
    return s;
}
// Ham KiemTraChinhPhuong
int KiemTraChinhPhuong(int x){
    if(x <= 0)
        return 0;
    int n = sqrt(x);
    if(n * n == x)
        return 1;
    return 0;
}
// Ham chuong trinh chinh
int main(){
    // Nhap 2 so nguyen x va y
    int x, y;
    printf("Nhap 2 so nguyen x va y: ");
    scanf("%d%d", &x, &y);
    // Goi ham KiemTra
    if(KiemTra(x, y))
        printf("2 so deu la so nguyen to cung nhau!\n");
    else
        printf("2 so khong cung la so nguyen to!\n");
    // Goi ham Tong
    printf("Tong cac so nguyen tu x toi y: %d\n", Tong(x, y));
    // Goi ham Tinh
    printf("Ket qua x^y: %d\n", Tinh(x, y));
    // Goi ham KiemTraChinhPhuong
    if(KiemTraChinhPhuong(x))
        printf("Nguyen duong x la so chinh phuong!\n");
    else
        printf("Khong thoa yeu cau!\n");
    return 0;
}