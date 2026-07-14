#include <stdio.h>
// Ham chuong trinh chinh
int main(){
    // Nhap n, m, p
    int n, m;
    float p;
    printf("Nhap n nam sau muon tinh: ");
    scanf("%d", &n);
    printf("Nhap so nguoi hien tai: ");
    scanf("%f", &p);
    printf("Nhap ti le tang dan so hang nam: ");
    scanf("%d", &m);
    float tile = 1.0 * m / 100;
    // Thuat toan
    int i;
    for(i = 1; i <= n; i++){
        p += p * tile;
    }
    // Input
    printf("Dan so cua thanh pho sau %d nam la: %.2f\n", n, p);
    return 0;
}