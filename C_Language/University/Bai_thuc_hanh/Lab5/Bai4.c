#include <stdio.h>
#include <string.h>
#define N 100
// Prototype Nhap
void Nhap(char s[]);
// Prototype ChuanHoa
void ChuanHoa(char s[]);
// Prototype In
void In(char s[]);
// Prototype DemTu
int DemTu(char s[]);
// Prototype InTen
void InTen(char s[]);
// Prototype DemKyTu
int DemKyTu(char s[], char x);
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
    printf("Chuoi ky tu vua nhap: ");
    In(s);
    // Goi ham DemTu
    printf("So tu co trong chuoi: %d\n", DemTu(s));
    // Goi ham InTen
    printf("Ten cua sinh vien: ");
    InTen(s);
    // Goi ham DemKyTu
    char x;
    printf("Nhap ky tu can dem: ");
    scanf(" %c", &x);
    printf("So luong ky tu can dem: %d\n", DemKyTu(s, x));
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
// Ham DemTu
int DemTu(char s[])
{
    int i = 1, dem = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
            dem++;
        i++;
    }
    return dem + 1;
}
// Ham InTen
void InTen(char s[])
{
    int i = strlen(s) - 1;
    int j = 0;
    char s1[N];
    while (i >= 0)
    {
        if (s[i] == ' ')
            break;
        s1[j] = s[i];
        i--;
        j++;
    }
    s1[j] = '\0';
    strrev(s1);
    puts(s1);
}
// Ham DemKyTu
int DemKyTu(char s[], char x)
{
    int i = 0, dem =0;
    while (s[i] != '\0')
    {
        if(s[i] == x){
            dem++;
        }
        i++;
    }
    return dem;
}