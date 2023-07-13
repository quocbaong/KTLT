#include <stdio.h>

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    char c;
    printf("Nhap ky tu hoa: ");
    scanf("%c", &c);
    char lower = toLower(c);
    printf("Ky tu thuong tuong ung: %c\n", lower);
    return 0;
}

