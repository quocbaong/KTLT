#include<stdio.h>

void nhap(int a[], int &n){

	for(int i=0;i<n;i++){
		printf("\na[%d]=",i+1);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++) {
			if(a[i]==a[j])	{
				printf("nhap lai phan tu a[%d]: ", i+1);
				scanf("%d",&a[i]);
			}
		}	
	}
}

void xuat(int a[],int n){
	printf("{ ");
    if (n==0){
        printf("Tap rong ");
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("}\n");
}

