#include"data.h"
#include"hamnhap.h"
#include"check.h"
#include"canh.h"
#include"dientichtamgiac.h"
#include"dientichdagiacloi.h"
int main() {
    PointArray A;
    int n;
    Nhap(A, n);
    isCovex(A, n);
    printf("Dien tich da giac loi la: %.2f", S(A,n));
    return 0;
}