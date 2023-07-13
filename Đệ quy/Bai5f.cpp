#include<stdio.h> 

void sapxep(int *a, int *b) {
	if (a>b) {
		int t;
		t=a;
		a=b;
		b=t;
	}

int main() {
	int a,b,c,d;
	printf("Nhap 4 so: ");
	scanf("%d%d%d%d", &a, &b,&c,&d);
	
	
}
