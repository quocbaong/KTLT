//Bai 7e S = 1! + 2! + ... + n!

#include<stdio.h>
#include<math.h>
	long long giaithua(int n) {
		if (n == 0 || n == 1)
			return 1;
		else return n*giaithua(n-1);
	} 

	int main() {
		int n;
		long long tong = 0;
		printf("Nhap so n: ");
		scanf("%d", &n);
		for(int i = 1; i <=n; i++) {
			tong = tong + giaithua(i);
		}
		
		printf("\nTong S = %lld", tong);
	return 0;
	}
