#include<stdio.h>
#include<string.h>

int main() {
    //Chuoi chi nhan cac chu cai va ki tu trang
    char s[50];
    char c;
    int i=0;
    printf("Enter a string: ");
    do {
        c = getchar();
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == ' ')
            s[i++] = c;
    }while(c != '\n');
    s[i] = '\0';
    printf("s = %s\n", s);
    return 0;
}