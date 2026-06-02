#include <stdio.h>
int main(){
	int n;
	printf("Nhap so can dao:");
	scanf("%d",&n);
	int i = 0;
	while(n!=0){
		i = i *10 + (n%10);
		n= n/10;
	}
	printf("so dao nguoc la: %d",i);
}
