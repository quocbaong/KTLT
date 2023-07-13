#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, i;

    printf("Nhap so phan tu muon in ra: ");
    scanf("%d", &n);

    printf("Day Fibonacci voi %d phan tu la: ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

