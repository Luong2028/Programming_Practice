/*
    Viết chương trình nhập vào một số n (100 > n > 10), hiển thị các số chính phương có hai chữ số, nhỏ hơn hoặc bằng n,
    và tổng hai chữ số của số đó phải nhỏ hơn 10.
*/
#include <stdio.h>
#include <math.h>
// Prototype ChinhPhuong
int ChinhPhuong(int n);
// Prototype Tong
int Tong(int n);
// Ham chuong trinh chinh
int main()
{
    int n;
    printf("Nhap n (10 < n < 100): ");
    scanf("%d", &n);
    if (n > 10 && n < 100)
    {
        int i;
        for (i = 10; i <= n; i++)
        {
            if (ChinhPhuong(i) && Tong(i))
                printf("%d ", i);
        }
    }
    else
        printf("Err\n");
    return 0;
}
// Ham ChinhPhuong
int ChinhPhuong(int n)
{
    if (n < 2)
        return 0;
    int temp = sqrt(n);
    if (temp * temp == n)
        return 1;
    return 0;
}
// Ham Tong
int Tong(int n){
    int s = 0;
    while(n != 0){
        s += n % 10;
        n /= 10;
    }
    if(s < 10)
        return 1;
    return 0;
}