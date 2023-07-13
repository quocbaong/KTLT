/* Bai 7d Nhap so duong n va thuc hien 
	S = 1 * 2 * ... * n
	*/
	
	#include<stdio.h>
	#include<math.h>
	long long tich(int n) {
		if (n == 1) 
			return 1;
		else return n*tich(n-1);
	}
	int main() {
		int n;
		printf("Nhap so n: ");
		scanf("%d", &n);
		printf("\nTich S = %lld", tich(n));
	return 0;
		
	}
