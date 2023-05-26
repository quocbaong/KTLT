#include<stdio.h>
//Ham nhap
void nhap(int &n, int &a, int &b) {
	do{
	printf("Nhap vao n: ");
	scanf("%d", &n);
	}while(n<0);
	do{
	printf("\nNhap vao hai a va b: ");
	scanf("%d%d", &a,&b);
	}while(a < 0 || b<0);
}
//Nhap Mang
void nhapMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
}
//Xuat Mang
void xuatMang(int A[], int n) {
	for(int i = 0; i < n; i++) {
		printf("A[%d] = %d", i, A[i]);
	}
}
//Tich cac so de quy
long long tich(int n) {
	if(n == 1) 
		return 1;
	return(n*tich(n-1));
}
/*  Vi du n=5
	tich(5) = 5*tich(4)
	tich(4) = 4*tich(3)
	tich(3) = 3*tich(2)
	tich(2) = 2*tich(1)
	tich(1) = 1
	1.2.3....n= 5*4*3*2*1= 120
	*/
//giai thua de quy
long long giaithua(int n) {
	if(n == 0 || n == 1)
		return 1;
	return(n*giaithua(n-1));
}
/*  Vi du n=5
	giaithua(5) = 5*giaithua(4)
	giaithua(4) = 4*giaithua(3)
	giaithua(3) = 3*giaithua(2)
	giaithua(2) = 2*giaithua(1)
	giaithua(1) = 1
	5! = 5*4*3*2*1
*/
//Tong cac so de quy
long tong(int n) {
	if(n == 1)
		return 1;
	return(n + tong(n-1));
}
//Mu mot so de quy
long mumotso(int n, int a) {
	if(n == 0) 
		return 1;
	return(a*mumotso(n-1,a));
}
//Uoc chung lon nhat de quy
int UCLN(int a, int b) {
	if(a*b == 0)
		return a + b;
	if(a == b)
		return a;
	if(a > b)
		return(a-b, b);
	else return(a, b-a);
}
//Boi chung nho nhat de quy
int BCNN(int a, int b) {
	int ucln = UCLN(a,b);
	int bcnn = (a*b) / ucln;
	return bcnn;
}
//Tong mot mang de quy
long tongMang(int A[], int n) {
	if(n == 1)
		return A[0];
	return A[n-1] + tongMang(A, n - 1);
}
/*  Vi du n = 5;
	tong = A[4] + tongMang(X,4)
	tongMang(X,4)= A[3] + tongMang(X,3)
	tongMang(X,3) = A[2] + tongMang(X,2)
	tongMang(X,2) = A[1] + tongMang(X,1)
	tongMang(X,1) = A[0]
	Tong = A[4] + A[3] + A[2] + A[1]+ A[0]
*/
//Tich mot mang de quy
long tichMang(int A[], int n) {
	if(n == 1)
		return A[0];
	return A[n-1]*tichMang(A,n-1);
}
int main() {
	int n, a, b, A[100];
	long long ti,gt, tog, uoc, mu, boi, tm, tim;
	nhap(n, a, b);
	nhapMang(A, n);
	tog = tong(n);
	gt = giaithua(n);
	uoc = UCLN(a,b);
	ti = tich(n);
	mu = mumotso(n, a);
	boi = BCNN(a, b);
	tm = tongMang(A, n);
	tim = tichMang(A, n);
	printf("Tong cac so la: %ld", tog);
	printf("\nTich cac so la: %ld", ti);
	printf("\nGia tri giai thua la %ld", gt);
	printf("\n%d mu %d la: %ld", a,n,mu);
	printf("\nUoc chung lon nhat cua hai so la: %d", uoc);
	printf("\nBoi chung nho nhat cua hai so la: %d", boi);
	printf("\nTong mang la: %d", tm);
	printf("\nTich mang la: %d", tim);
	return 0;
}
