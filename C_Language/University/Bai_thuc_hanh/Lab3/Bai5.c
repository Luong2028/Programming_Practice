#include <stdio.h>
#define N 30
// Prototype Nhap
void Nhap(float a[], int *n);
// Prototype In
void In(float a[], int n);
// Prototype Them
void Them(float a[], int *n, float x, int p);
// Prototype Xoa 
void Xoa(float a[], int *n);
// Prototype Tach
void Tach(float a[], int n, float b[], int *nb, float c[], int *nc);
// Chuong trinh chinh
int main(){
    // Khai bao mang a va n phan tu trong mang
    float a[N];
    int n;
    // Goi ham Nhap
    Nhap(a, &n);
    // Goi ham In
    printf("Mang vua nhap: ");
    In(a, n);
    // Goi ham Them
    float x;
    printf("Nhap so thuc can them: ");
    scanf("%f", &x);
    int p;
    do{
        printf("Nhap vi tri can them so thuc vua nhap (0 <= p < n): ");
        scanf("%d", &p);
    }while(p < 0 || p >= n);
    Them(a, &n, x, p);
    printf("Day so sau khi them: ");
    In(a, n);
    // Goi ham Tach
    float b[N], c[N];
    int nb = 0, nc = 0;
    Tach(a, n, b, &nb, c, &nc);
    // Goi ham Xoa
    Xoa(b, &nb);
    Xoa(c, &nc);
    printf("Mang duong: ");
    In(b, nb);
    printf("Mang am: ");
    In(c, nc);
    return 0;
}
// Ham Nhap
void Nhap(float a[], int *n){
    do{
        printf("Nhap n phan tu trong mang (3 < n <= 30): ");
        scanf("%d", n);
    }while(*n <= 3 || *n > 30);
    int i;
    for(i = 0; i < *n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
// Ham In
void In(float a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
// Ham Them
void Them(float a[], int *n, float x, int p){
    int i;
    for(i = *n; i > p; i--){
        a[i] = a[i - 1];
    }
    a[p] = x;
    (*n)++;
}
// Ham Xoa
void Xoa(float a[], int *n){
    int i, j;
    for(i = 0; i < *n - 1; i++){
        if(a[i] == 0){
            for(j = i; j < *n - 1; j++){
                a[j] = a[j + 1];
            }
            (*n)--;
            i--;
        }
    }
}
// Ham Tach
void Tach(float a[], int n, float b[], int *nb, float c[], int *nc){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            b[*nb] = a[i];
            (*nb)++;
        }
        else if(a[i] < 0){
            c[*nc] = a[i];
            (*nc)++;
        }
    }
}