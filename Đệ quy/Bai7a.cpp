/*7a Ham nhan vao mot so nguyen duong n va thuc hien:
	S = 1 + 2 + ... +n
*/

#include<stdio.h>
	long tong(int n) {
		if (n == 1) 
			return 1;
		else return n+tong(n-1);
	}
	/* 
	Giai thich
	Cho n = 5 thi
	5 + tong(4)
	5 + 4 + tong(3)
	5 + 4 + 3 + tong(2)
	5 + 4 + 3 + 2 + tong (1)
	5+ 4 + 3 + 2 + 1 = 15
	*/
	int main() {
		int n;
		printf("Nhap vao so duong n: ");
		scanf("%d", &n);
		long kq = tong(n);
		printf("\nS = %ld", kq);
	return 0;
	}
