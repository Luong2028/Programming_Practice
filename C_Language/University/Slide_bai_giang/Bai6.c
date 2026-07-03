/*
    Tìm từ có chiều dài dài nhất và in ra
*/
#include <stdio.h>
#include <string.h>
// Ham chuan hoa
void ChuanHoa(char s[]){
    while(s[0] == ' ') strcpy(s, s + 1);
    while(strlen(s) > 0 && s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == ' ' && s[i + 1] == ' ')
            strcpy(&s[i], &s[i + 1]);
        else
            i++;
    }
}
// Ham tim
void Tim(char s[]){
    if(strlen(s) == 0){
        printf("Chuoi rong!");
        return;
    }
    int i = 0;
    int max = 0;
    char s1[50], s2[50];
    while(s[i] != '\0'){
        int j = 0;
        while(s[i] != ' ' && s[i] != '\0'){
            s1[j] = s[i];
            i++;
            j++;
        }
        s1[j] = '\0';
        if(j > max){
            max = j;
            strcpy(s2, s1);
        }
        if(s[i] == ' '){
            i++;
        }
    }
    printf("Tu co do dai dai nhat la: %s\n", s2);
}
// Ham chuong trinh chinh
int main(){
    char s[50];
    printf("Nhap chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    // Goi ham chuan hoa
    ChuanHoa(s);
    // Goi ham tim
    Tim(s);
    return 0;
}