/* Bai 7b Nhap n duong tinh:
	S = 1^2 + 2^2 + ... + n^2
*/
	
	#include<stdio.h>
	#include<math.h>
	long long tinhtong(int n) {
		if (pow(n,2) == 1 || pow(n,2) == 0)
			return 1;
		else return (pow(n,2)+ tinhtong(n-1));
	}
	/*
	Giai thich
	Cho n = 3
	pow(3,2) + tinhtong(2)
	pow(3,2) + pow(2,2) + tinhtong(1)
	pow(3,2) + pow(2,2) + pow(1,2)
	
	*/
	int main() {
		int n;
		printf("Nhap so n: ");
		scanf("%d", &n);
		long long tong = tinhtong(n);
		printf("\nTong = %lld", tong);
	return 0;
	}
