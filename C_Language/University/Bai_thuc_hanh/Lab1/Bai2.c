#include <stdio.h>
// Ham chuong trinh chinh
int main()
{
    char c = 'a';
    // In ki tu thuong xuoi
    printf("In ki tu thuong xuoi: ");
    while (c <= 'z')
    {
        printf("%c ", c);
        c++;
    }
    printf("\n");
    c--;
    // In ki tu thuong nguoc
    printf("In ki tu thuong nguoc: ");
    while (c >= 'a')
    {
        printf("%c ", c);
        c--;
    }
    printf("\n");
    c = 'A';
    // In ki tu hoa xuoi
    printf("In ki tu hoa xuoi: ");
    while (c <= 'Z')
    {
        printf("%c ", c);
        c++;
    }
    c--;
    printf("\n");
    // In ki tu hoa nguoc
    printf("In ki tu hoa nguoc: ");
    while (c >= 'A')
    {
        printf("%c ", c);
        c--;
    }
    return 0;
}