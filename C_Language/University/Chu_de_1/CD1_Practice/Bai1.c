/*
    Nhập bán kính hình tròn. Tính và in ra màn hình chu vi diện tích của hình tròn đó.
*/
#include <stdio.h>

int main(){
    // Khai bao bien ban kinh
    float r;
    // Nhap du lieu dau vao
    printf("Nhap ban kinh r: ");
    scanf("%f", &r);
    // Kiem tra dieu kien
    if(r < 0){
        printf("Ban kinh khong hop le!");
        return 0;
    }
    // Tinh chu vi va dien tich
    float P = 2 * r * 3.14;
    float S = r * r * 3.14;
    // In du lieu dau ra
    printf("Chu vi cua hinh tron la: %f\n", P);
    printf("Dien tich cua hinh tron la: %f\n", S);

    return 0;
}