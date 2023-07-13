#include<stdio.h>
#include"nhapxuattaphop.h"
#include"cacpheptoansosanhtrentaphop1.h"
#include"cacpheptoansosanhtrentaphop2.h"
int main(){
	int n,m;
		printf("Nhap so luong phan tu: ");
	do{
		scanf("%d",&n);
	}while (n<=0);
	int a[n];
	nhap(a,n);
		printf("Nhap so luong phan tu: ");
	do{
		scanf("%d",&m);
	}while (m<=0);
	int b[m];
	nhap(b,m);
	xuat(a,n);
	xuat(b,m);
	if(kiemtracobangnhaukhong(a,n,b,m)==1)
		printf("a va b bang nhau");
	else
		printf("a va b khong bang nhau");
	
	
	if(taphopcon(a,n,b,m)==1)
		printf("\na la con cua  b");
	else
		printf("\na khong la con cua b ");
	if(roinhaukhong(a,n,b,m)==1)
		printf("\na va b roi nhau");
	else
		printf("\na va b khong roi nhau");
}

