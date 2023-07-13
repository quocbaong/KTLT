#include<stdio.h>
void nhapDiem(Point &P) {
    printf("Nhap x: ");
    scanf("%d", &P.x);
    printf("Nhap y: ");
    scanf("%d", &P.y);
}
void Nhap(PointArray &A, int &n) {
    printf("Nhap vao n dinh(3 <= n <= 1000): ");
    do {
        scanf("%d", &n);
        if(n < 3 || n > 1000)
            printf("Nhap lai: ");
    }while(n < 3);
    for(int i = 0; i < n; i++) {
        printf("Toa do dinh thu %d: \n", i+1);
        nhapDiem(A[i]);
    }
}
