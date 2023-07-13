#include<stdio.h>
#include<string.h>
void upper(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if ( s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] -32;
        }
    }
}
int main() {
    char s[50];
    printf("\nNhap chuoi: ");
    fflush(stdin);
    gets(s);
    upper(s);
    printf("\nChuoi ky tu hoa: %s", s);
    return 0;
}