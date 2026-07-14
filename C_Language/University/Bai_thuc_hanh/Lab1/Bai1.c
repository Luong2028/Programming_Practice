#include <stdio.h>
// Ham chuong trinh chinh
int main(){
    // Khai bao bien
    float luonggio, tienluong;
    int giolam;
    // Input
    do{
        printf("Nhap so luong gio (0 <= luong gio <= 50): ");
        scanf("%f", &luonggio);
    }while(luonggio < 0 || luonggio > 50);
    printf("Nhap so gio lam trong ngay: ");
    scanf("%d", &giolam);
    // Output
    if(giolam > 8){
        tienluong = 8 * luonggio + (giolam - 8) * 1.5 * luonggio;
        printf("Tien luong mot ngay cua nhan vien: %.2f", tienluong);
    }
    else{
        tienluong = giolam * luonggio;
        printf("Tien luong mot ngay cua nhan vien: %.2f", tienluong);
    }
    return 0;
}