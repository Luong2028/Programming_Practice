/*
    Viết hàm KiemTraNguyenTo thực hiện kiểm tra số a có phải là nguyên
    tố hay không (a là tham số đầu vào của hàm): nếu là số nguyên tố 
    thì hàm trả về 1, ngược lại trả về 0.
    Viết chương trình thực hiện:
    - Nhập vào một số nguyên dương (1000 >= n >= 2).
    - Tính và in tổng các số nguyên tố từ 2 đến n (sử dụng hàm KiemTraNguyenTo).
*/

#include <stdio.h>
// Prototype
int KiemTraNguyenTo(int a);
// Chuong trinh chinh
int main(){
    // Khai bao bien
    int n;
    // Nhap du lieu dau vao
    do{
        printf("Nhap mot so nguyen duong (1000 >= n >= 2): ");
        scanf("%d", &n);
    }while(n < 2 || n > 1000);
    // Tinh va in ra tong cac so nguyen to tu 2 den n
    int S = 0, i;
    for(i = 2; i <= n; i ++){
        if(KiemTraNguyenTo(i)){
            S = S + i;
        }
    }
    // In du lieu dau ra
    printf("Tong cac so nguyen to la: %d\n", S);

    return 0;
}
// Viet ham kiem tra so nguyen to
int KiemTraNguyenTo(int a){
    int i;
    if(a < 2){
        return 0;
    }
    for(i = 2; i*i <= a; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}