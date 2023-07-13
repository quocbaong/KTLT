#include<stdio.h>
#include<math.h>
#include<string.h>
double capsocong(int n, int a, int r) {
    if (n == 1)
        return a;
    else return r + capsocong(n-1, a,r);
}
/* Ví dụ cho n=3, r =2, a= 1
    n != 1 nên sẽ ra 
    r + u(n-1)= 2 + U2= 2 +r +U1
    = 2 + 2 + 1=5
    
*/
double capsonhan(int n, int a, int q) {
    if (n == 1 )
        return a;
    else return q * capsonhan(n-1, a, q);
}
int main() {
    int n,a,r,q;
    printf("Nhap phan tu thu n: ");
    scanf("%d", &n);
    printf("Nhap so hang dau tien: ");
    scanf("%d", &a);
    printf("Nhap cong sai: ");
    scanf("%d", &r);
    printf("Nhap cong boi: ");
    scanf("%d", &q);
    printf("In ra cap so cong:\n ");
    for (int i = 1; i <= n; i++) {
        printf("%.0f\t", capsocong(i,a,r));
    }
    printf("\nIn ra cap so nhan:\n ");
    for (int j = 1; j <= n; j++) {
        printf("%.0f\t", capsonhan(j,a,q));
    }

    return 0;
}