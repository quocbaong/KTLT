#include"stdio.h"
#include"string.h"
int main(){
	char s[30];
	printf("nhap chuoi :");
	gets(s);
	puts(s);
	printf("so tu trong chuoi la :%d\n",strlen(s));
	for(int i=0;i<=strlen(s);i++){
		printf("%c",s[i]);
		//duyet tu dau cach truoc roi moi den sau no neu thoa dieu kien thi xuong dong
		if(s[i]==' '&& s[i+1]>='A'&& s[i+1]<='Z')    
		printf("\n");
	}
	
}
