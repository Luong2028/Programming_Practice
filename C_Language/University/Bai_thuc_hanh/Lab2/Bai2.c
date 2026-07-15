#include <stdio.h>
// Prototype ThayDoi
void ThayDoi(int **p);
// Ham chuong trinh chinh
int main(){
    // Khai bao a va gan gia tri
    int a = 5;
    // Khai bao con tro cap 1 tro den a
    int *pa = &a;
    // Khai bao con tro cap 2 tro den a
    int **p = &pa;
    // Goi ham ThayDoi
    ThayDoi(p);
    // In gia tri moi cua a
    printf("Gia tri sau khi doi: %d\n", a);
    return 0;
}
// Ham ThayDoi
void ThayDoi(int **p){
    **p = 10;
}