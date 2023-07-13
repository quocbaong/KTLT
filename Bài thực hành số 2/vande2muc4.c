#include<stdio.h>
#include<string.h>
void proper(char S[]) {
    for(int i = 1; i < strlen(S); i++) {
        if(S[i] == ' ' && S[i+1] >= 'a' && S[i+1] <='z')
            S[i+1] = S[i+1] - 32;
    }
}
int main() {
    char S[100];
    printf("Nhap chuoi: ");
    fflush(stdin); gets(S);
    strlwr(S);
    S[0] = (S[0] >= 'a' && S[0] <='z') ? S[0] = S[0] - 32: S[0];
    proper(S);
    printf("Chuoi sau khi bien doi: %s", S);
    return 0;
}