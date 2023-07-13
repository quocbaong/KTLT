#include<stdio.h>
#include<string.h>

int main() {
    char S[100];
    char A[100];
    printf("Nhap chuoi: ");   //Nhap chuoi theo kieu scanf
    scanf("%s", S);
    printf("\nS = %s", S);
    printf("\nNhap chuoi lan 2: ");   //Nhap chuoi theo gets()
    fflush(stdin); gets(A);
    printf("A = %s", A);
    return 0;
}