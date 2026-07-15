#include <stdio.h>
// Ham chuong trinh chinh
int main(){
    // Khai bao bien x va gan gia tri
    int x = 5;
    // Khai bao con tro p tro den x;
    int *p = &x;
    // Khai bao con tro cap 2 q tro den p
    int **q = &p;
    // In gia tri x thong qua p
    printf("Gia tri x thong qua p: %d\n", *p);
    // In dia chi x thong qua p
    printf("Dia chi cua x thong qua p: %p\n", p);
    // In gia tri x thong qua q
    printf("Gia tri x thong qua q: %d\n", **q);
    // In dia chi x thong qua q
    printf("Dia chi x thong qua q: %p\n", *q);
    return 0;
}