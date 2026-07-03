/*
    Viết chương trình nhập vào một chuỗi, in ra màn hình từ đầu tiên và từ cuối cùng. Lưu ý: hai từ này cách nhau bằng khoảng trắng.
    - input: DH Nha Trang
    - output: DH Trang
*/
#include <stdio.h>
#include <string.h>
// Ham in tu dau va tu cuoi
void Xuat(char s[])
{
    int i, j = 0;
    int n = strlen(s);
    char s1[50], s2[50];
    for (i = 0; i < n; i++)
    {
        if (s[i] == ' ')
            break;
        s1[j] = s[i];
        j++;
    }
    s1[j] = '\0';
    j = 0;
    i = n - 1;

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    for (; i >= 0; i--)
    {
        if (s[i] == ' ')
            break;
        s2[j] = s[i];
        j++;
    }
    s2[j] = '\0';

    int do_dai_s2 = strlen(s2);
    for (i = 0; i < do_dai_s2 / 2; i++)
    {
        char temp = s2[i];
        s2[i] = s2[do_dai_s2 - 1 - i];
        s2[do_dai_s2 - 1 - i] = temp;
    }

    printf("In tu dau tien va cuoi cung: %s %s\n", s1, s2);
}
//  Ham chuong trinh chinh
int main()
{
    char s[50];
    printf("Nhap mot chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham Xuat
    Xuat(s);
    return 0;
}