#include<stdio.h>
#include<math.h>
#include<string.h>
#include<Data.h>
struct phanso
{
    int tuso,mauso;
};
void Nhap(Phanso &ps) {
    printf("\n\tNhap tu so:\t");
    scanf("%d", &ps.tuso);
    printf("\n\tNhap mau so:\t");
    scanf("%d", &ps.mauso);
}
