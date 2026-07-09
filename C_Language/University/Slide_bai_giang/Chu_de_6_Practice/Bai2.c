/*
    Khai báo kiểu dữ liệu ngày (NGAY) gồm 3 thành phần:
    ngày, tháng, năm. Thực hiện các yêu cầu sau:
    - Nhập / Xuất ngày (ngày / tháng / năm)
    - Kiểm tra năm nhuận
    - Tính khoảng cách giữa hai ngày
    - So sánh hai ngày
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
// Cau truc NGAY
typedef struct
{
    int ngay;
    int thang;
    int nam;
} NGAY;
// Prototype Nhap
void Nhap(NGAY *ngay);
// Prototype Xuat
void Xuat(NGAY ngay);
// Prototype Kiem tra nam nhuan
int KiemTra(int nam);
// Prototype So ngay
int SoNgay(NGAY ngay);
// Prototype Tinh khoang cach
void KhoangCach(NGAY ngay1, NGAY ngay2);
// Prototype So sanh
void SoSanh(NGAY ngay1, NGAY ngay2);
// Ham chuong trinh chinh
int main()
{
    NGAY ngay;
    // Goi ham nhap
    Nhap(&ngay);
    // Goi ham xuat
    Xuat(ngay);
    // Goi ham kiem tra
    if(KiemTra(ngay.nam))
        printf("Ngay vua nhap co nam la nam nhuan!\n");
    else
        printf("Ngay vua nhap co nam khong phai la nam nhuan!\n");
    // Goi ham khoang cach
    NGAY ngay1;
    Nhap(&ngay1);
    KhoangCach(ngay, ngay1);
    // Goi ham so sanh
    SoSanh(ngay, ngay1);
    return 0;
}
// Ham nhap
void Nhap(NGAY *ngay)
{
    printf("Nhap ngay: ");
    scanf("%d", &ngay->ngay);
    printf("Nhap thang: ");
    scanf("%d", &ngay->thang);
    printf("Nhap nam: ");
    scanf("%d", &ngay->nam);
}
// Ham xuat
void Xuat(NGAY ngay)
{
    printf("Ngay ban vua nhap: %d/%d/%d\n", ngay.ngay, ngay.thang, ngay.nam);
}
// Ham kiem tra
int KiemTra(int nam)
{
    if (nam % 400 == 0)
        return 1;
    if (nam % 100 == 0)
        return 0;
    if (nam % 4 == 0)
        return 1;
    return 0;
}
// Ham tinh so ngay
int SoNgay(NGAY ngay)
{
    int s = 0;
    int i;
    for(i = 1; i < ngay.nam; i++){
        if(KiemTra(i))
            s += 366;
        else
            s += 365;
    }
    for(i = 1; i < ngay.thang; i++){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            s += 31;
        else if(i == 4 || i == 6 || i == 9 || i == 11)
            s += 30;
        else{
            if(KiemTra(ngay.nam))
                s += 29;
            else
                s += 28;
        }

    }
    s += ngay.ngay;
    return s;
}
// Ham tinh khoang cach
void KhoangCach(NGAY ngay1, NGAY ngay2){
    int s = 0;
    s = abs(SoNgay(ngay1) - SoNgay(ngay2));
    printf("Khoang cach giua 2 ngay: %d\n", s);
}
// Ham so sanh
void SoSanh(NGAY ngay1, NGAY ngay2){
    int s1 = SoNgay(ngay1);
    int s2 = SoNgay(ngay2);
    if(s1 > s2)
        printf("Ngay 1 nhieu ngay hon ngay 2!\n");
    else if(s1 < s2)
        printf("Ngay 2 nhieu ngay hon ngay 1!\n");
    else
        printf("Ca 2 ngay co so ngay bang nhau!\n");
}