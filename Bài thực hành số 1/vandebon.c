#include<stdio.h>
#include<math.h>
#include<string.h>
//Lãi suất cố định là 10%
float lai_kep(float y, int n) {
    if (n == 0 )
        return y;
    else 
        return lai_kep(y,n-1)*(1 + 0.1);
}
int main() {
    float y;
    int n;
    printf("So von ban dau: ");
    scanf("%f", &y);
    printf("So nam: ");
    scanf("%d", &n);
    double tienthu = lai_kep(y,n);
    printf("P(%d) = %0.0lf", n, tienthu);
    return 0;
}