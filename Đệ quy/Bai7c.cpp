//Bai 7c c. S = 1 + 1/2 + ... + 1/n

	#include<stdio.h>
	#include<math.h>
	float tongphanso(int n) {
		if (1/n == 1 ) 
			return 1;
		else return (1/n + tongphanso(n-1));
	}
	
	int main() {
		int n;
		printf("Nhap vao n: ");
		scanf("%d", &n);
		float kq = tongphanso(n);
		printf("\nTong S = %.3f", kq);
	return 0;
	}
