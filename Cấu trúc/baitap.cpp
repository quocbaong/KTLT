//Quản lí điểm KTLT các sv: hoTen, msSV, tk, gk, ck, th, dtb
//tạo struct, đọc data từ bàn phím, tính dtb, hien thi sv có dtb<4
//tùm thông tin sv có msSV là X, sap xep sv có điểm dtb giảm dần.

#include<stdio.h>
struct DiemKTLT
{
    char hoTen[31], msSV[9];
    float tk, gk, ck, th, dtb;
};
void DocDataTuBanPhim(DiemKTLT sv[], int n) {
    for(int k = 0; k < n; k++) {
        printf("\nData sv thu %d: ", k);
        printf("\tHo ten: "); fflush(stdin); gets(sv[k].hoTen);
        printf("\tMa sinh vien: "); fflush(stdin); gets(sv[k].msSV);
        printf("\tTk GK CK TH: "); 
        scanf("%f %f %f %f", &sv[k].tk, &sv[k].gk, &sv[k].ck, &sv[k].th);
    }
}
void TinhDTB(DiemKTLT sv[], int n) {
    for(int k=0; k<n;k++) {
        float tk=sv[k].tk, gk=sv[k].gk, ck=sv[k].ck, th=sv[k].th;
        sv[k].dtb = ((2*tk + 3*gk + 5*ck)/10*2 + th)/3; 
    }
}
void HienThiDS(DiemKTLT sv[], int n){
    printf("\n\t|-----------------------------------------------------------------|");
    printf("\n\t| STT |          HO VA TEN        |   MA SV   | TK | GK | CK | TH |        ");
    printf("\n\t|-----------------------------------------------------------------|");
    for(int k = 0; k<n; k++) {
        printf("\n%d", k+1);
    }
}
int main() {
    int n;
    do {
        printf("\n\t So luong sv: ");
        scanf("%d", &n);
    }while(n<0);
    DiemKTLT TH18QN[n];
    DocDataTuBanPhim(TH18QN,n);
    TinhDTB(TH18QN,n);
    HienThiDS(TH18QN,n);
}
