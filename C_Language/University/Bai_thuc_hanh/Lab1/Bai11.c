#include <stdio.h>
#include <math.h>
// Prototype HoanHao
int HoanHao(int n);
// Prototype Armstrong
int Armstrong(int n);
// Ham chuong trinh chinh
int main(){
    // Nhap x
    int x;
    printf("Nhap mot so de kiem tra so hoan hao: ");
    scanf("%d", &x);
    // Goi ham HoanHao
    if(HoanHao(x))
        printf("La so hoan hao!\n");
    else    
        printf("Khong phai so hoan hao\n");
    // Nhap y
    int y;
    printf("Nhap mot so de kiem tra so Armstrong: ");
    scanf("%d", &y);
    // Goi ham Armstrong
    if(Armstrong(y))
        printf("La so Armstrong!\n");
    else
        printf("Khong la Armstrong!\n");
    return 0;
}
// Ham HoanHao
int HoanHao(int n){
    if(n <= 1)
        return 0;
    int i;
    int s = 0;
    for(i = 1; i < n; i++){
        if(n % i == 0)
            s += i;
    }
    if(s == n)
        return 1;
    return 0;
}
// Ham Armstrong
int Armstrong(int n){
    int s = 0;
    int temp = n;
    while(temp != 0){
        s += pow(temp % 10, 3);
        temp /= 10;
    }
    if(s == n)
        return 1;
    return 0;
}