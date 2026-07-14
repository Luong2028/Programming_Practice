#include <stdio.h>
// Ham chuong trinh chinh
int main()
{
    // Nhap n
    int n;
    do
    {
        printf("Nhap day Fibonacci gom n so (0 < n < 30): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 30);
    // In day so Fibonacci
    int F0 = 0, F1 = 1;
    if (n == 1)
        printf("%d ", F0);
    else
        printf("%d %d ", F0, F1);
    int i = 2;

    if (n >= 2)
    {
        while (i < n)
        {
            int Fn = F0 + F1;
            F0 = F1;
            F1 = Fn;
            printf("%d ", Fn);
            i++;
        }
    }
    return 0;
}