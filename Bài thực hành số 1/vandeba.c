#include<stdio.h>
#include<math.h>
#include<string.h>
void xuatnhiphan(int n) {
    if (n == 0)
        return;
    else {
        int r = n%2;
        xuatnhiphan(n/2);
        printf("%d", r);
    } 
}
int main() {
    int n;
    do {
        printf("Nhap so n>0: ");
        scanf("%d", &n);
    } while (n < 0);
    printf("Nhi phan cua n: "); 
    xuatnhiphan(n);
    return 0;
}