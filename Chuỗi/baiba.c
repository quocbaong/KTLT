#include<stdio.h>
#include<string.h>
void lower(char s[]) {
    for (int i = 0; i <= strlen(s);i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] +32;
        }
    }
}
int main() {
    char s[50];
    printf("\nNhap chuoi: ");
    fflush(stdin);
    gets(s);
    lower(s);
    printf("\nChuoi ky tu thuong: %s", s);
    return 0;

}