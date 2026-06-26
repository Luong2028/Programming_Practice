/*
    Cho biết điểm quá trình (mark_1), điểm thi giữa kỳ (mark_2), điểm thi cuối kỳ (mark_3), tỷ lệ điểm quá trình (rate_1), tỷ lệ điểm thi giữa
    kỳ (rate_2) học phần “Nhập môn lập trình” (HP NMLT) của 1 sinh viên. Hỏi sinh viên đó có đạt HP NMLT không? Biết:
    Điểm trung bình (TB) đượctính:
    TB = mark_1 * rate_1 + mark_2 * rate_2 + (1 - rate_1 - rate_2) * mark_3
    Nếu TB ≥5: đạt; ngược lại không đạt.
*/

#include <stdio.h>

int main(){
    // Khai bao bien 
    float mark_1, mark_2, mark_3, rate_1, rate_2;
    // Nhap du lieu dau vao
    printf("Nhap diem qua trinh: ");
    scanf("%f", &mark_1);
    printf("Nhap diem thi giua ky: ");
    scanf("%f", &mark_2);
    printf("Nhap diem thi cuoi ky: ");
    scanf("%f", &mark_3);
    printf("Nhap ty le diem qua trinh: ");
    scanf("%f", &rate_1);
    printf("Nhap ty le diem thi giua ky: ");
    scanf("%f", &rate_2);
    // Kiem tra dieu kien
    if(mark_1 < 0 || mark_1 > 10 ||
        mark_2 < 0 || mark_2 > 10 ||
        mark_3 < 0 || mark_3 > 10){
        printf("Diem nhap khong hop le!");
        return 0;
    }
    if(rate_1 < 0 || rate_2 < 0 || rate_1 + rate_2 > 1){
        printf("Ty le diem nhap khong hop le!");
        return 0;
    }
    // Tinh diem trung binh
    float TB = mark_1 * rate_1 + mark_2 * rate_2 + mark_3 * (1 - rate_1 - rate_2);
    // In dau ra
    printf("%.2f\n",TB);
    if(TB >= 5)
        printf("dat!\n");
    else
        printf("khong dat!\n");

    return 0;
}