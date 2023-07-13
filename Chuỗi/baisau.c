#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j;
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; ++i) {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            for (j = i; s[j] != '\0'; ++j) {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
        }
    }
    printf("Chuoi sau khi xoa khoang trang: %s", s);
    return 0;
}
