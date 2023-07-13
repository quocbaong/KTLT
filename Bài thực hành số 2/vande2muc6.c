#include<stdio.h>
#include<string.h>

int main() {
    char S[100];
    int dodai;
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(S);
    dodai = strlen(S);
    for(int i = 0; i < dodai; i++) {
        if(S[i] == ' ') {                   //Neu ki tu la khoang trang thi doi sang trai 1 vi tri
            for(int j=i; j<dodai; j++) {
                S[j] = S[j+1];
            }
            dodai--;                        //Giam do dai chuoi di 1
            i--;                            //Giam i xuong 1 de xet tiep vi tri hien tai
        }
    }
    printf("Chuoi sau khi xu ly: %s", S);

    return 0;
}