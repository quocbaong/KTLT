//Dem so tu trong chuoi
#include<stdio.h>
#include<string.h>
int main() {
    char s[50];
    char c;
    int i=0;
    printf("\nNhap chuoi: ");
    gets(s);
    int sotu = 0;
    if(strlen(s) > 0)
        sotu = 1;
    for(i = 1; i <strlen(s); i++) 
        if(s[i] == ' ')
            sotu++;
    printf("\nSo tu = %d", sotu);
    printf("\nXuat cac tu tren ca dong lien tiep: \n");
    for (int j = 0; s[j] != '\0'; j++) {
        if (s[j] == ' ' || s[j] == '\n') {
            printf("\n");
        } else {
            printf("%c", s[j]);
        }
    }
    return 0;
}