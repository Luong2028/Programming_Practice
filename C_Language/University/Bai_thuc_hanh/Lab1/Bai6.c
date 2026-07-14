#include <stdio.h>
#include <math.h>
// Prototype KiemTra
int KiemTra(float a, float b, float c);
// Prototype DienTich
float DienTich(float a, float b, float c);
// Ham chuong trinh chinh
int main(){
    // Nhap 3 canh tam giac
    float a, b, c;
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%f%f%f", &a, &b, &c);
    // Kiem tra va in ra dien tich
    if(KiemTra(a, b, c))
        printf("Dien tich tam giac la: %.2f", DienTich(a, b, c));
    else
        printf("Loi!");
    return 0;
}
// Ham KiemTra
int KiemTra(float a, float b, float c){
    if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
        return 1;
    return 0;
}
// Ham DienTich
float DienTich(float a, float b, float c){
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}