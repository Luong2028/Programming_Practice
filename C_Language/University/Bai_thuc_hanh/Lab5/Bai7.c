#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype ChuanHoa
void ChuanHoa(char s[]);
// Prototype In
void In(char s[]);
// Prototype Max
int Max(char s[]);
// Prototype Tim
void Tim(char s[]);
// Chuong trinh chinh
int main()
{
    char s[N];
    // Goi ham Nhap
    printf("Nhap chuoi ky tu: ");
    Nhap(s);
    // Goi ham ChuanHoa
    ChuanHoa(s);
    // Goi ham In
    printf("Chuoi sau khi chuan hoa: ");
    In(s);
    // Goi ham Tim
    Tim(s);
    return 0;
}
// Ham Nhap
void Nhap(char s[])
{
    fgets(s, N, stdin);
    s[strcspn(s, "\n")] = '\0';
}
// Ham ChuanHoa
void ChuanHoa(char s[])
{
    while (s[0] == ' ')
        strcpy(&s[0], &s[1]);
    while (strlen(s) > 0 && s[strlen(s) - 1] == ' ')
        s[strlen(s) - 1] = '\0';
    int i = 1;
    while (s[i] != '\0')
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            strcpy(&s[i], &s[i + 1]);
            i--;
        }
        i++;
    }
}
// Ham In
void In(char s[])
{
    printf("%s\n", s);
}
// Ham Max
int Max(char s[])
{
    int i = 0;
    int max = 0;
    int dem = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (dem > max)
                max = dem;
            dem = 0;
        }
        else
        {
            dem++;
        }
        i++;
    }
    if (dem > max)
        max = dem;
    return max;
}
// Ham Tim
void Tim(char s[])
{
    int i = 0;
    int max = Max(s);
    char s1[N];
    int j = 0;
    int dem = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (dem == max)
            {
                s1[j] = '\0';
                printf("Tu dai nhat la %s co %d ky tu\n", s1, max);
                return;
            }
            dem = 0;
            j = 0;
        }
        else
        {
            s1[j] = s[i];
            dem++;
            j++;
        }
        i++;
    }
    if(dem == max){
        s1[j] = '\0';
        printf("Tu dai nhat la %s co %d ky tu\n", s1, max);
    }
}