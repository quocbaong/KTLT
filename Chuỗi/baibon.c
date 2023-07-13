#include<stdio.h>
#include<string.h>
void proper(char s[]) {
    for (int i = 1; i <= strlen(s)-1; i++) {
        if (s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z') {
            s[i+1] = s[i+1] - 32;
        } 
    }
}
int main() {
    char s[50];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(s);
    strlwr(s); //Dùng lệnh strlwr để đưa chuỗi về kí tự thường trước.
    s[0] = (s[0] >= 'a' && s[0] <= 'z') ? s[0] = s[0] -32 : s[0]; //Nếu kí tự đầu tiên s[0] nằm trong khoản a-z thì viết hoa ngược lại không.
    proper(s);
    printf("\nChuoi moi: %s", s);
    return 0;
}