#include <stdio.h>
#include <math.h>
// Prototype KiemTra
int KiemTra(int x, int y);
// Prototype HoanDoi
void HoanDoi(int *x, int *y);
// Prototype DoiSo
int DoiSo(int x, int y);
// Prototype UCLN
int UCLN(int x, int y);
// Prototype BCNN
int BCNN(int x, int y);
// Ham chuong trinh chinh
int main(){
    // Nhap x va y
    int x, y;
    printf("Nhap 2 so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    // Goi ham KiemTra
    if(KiemTra(x, y))
        printf("x la boi so cua y!\n");
    else
        printf("x khong la boi so cua y!\n");
    // Goi ham HoanDoi
    HoanDoi(&x, &y);
    printf("2 so sau khi hoan doi: x = %d, y = %d\n", x, y);
    // Goi ham DoiSo
    if(DoiSo(x, y))
        printf("x la doi so cua y\n");
    else
        printf("x khong la doi so cua y\n");
    // Goi ham UCLN
    printf("Uoc chung lon nhat cua 2 so x va y: %d\n", UCLN(x, y));
    // Goi ham BCNN
    printf("Boi chung nho nhat cua 2 so x va y: %d\n", BCNN(x, y));
    return 0;
}
// Ham KiemTra
int KiemTra(int x, int y){
    if(y == 0)
        return 0;
    return x % y == 0;
}
// Ham HoanDoi
void HoanDoi(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
// Ham DoiSo
int DoiSo(int x, int y){
    if(x == -y)
        return 1;
    return 0;
}
// Ham UCLN
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
// Ham BCNN
int BCNN(int x, int y){
    if(x == 0 || y == 0)
        return 0;
    return abs(x * y) / UCLN(x, y);
}