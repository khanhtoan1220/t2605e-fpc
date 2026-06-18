#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	float s = 0;
	if(n<=0){
		printf("Loi, n khong phai la so nguyen duong");
	}else{
		for(int i =1 ; i <= n; i++){
			s += 1.0/i;
		}
		printf("S(%d) = %.2f",n,s);
	}
	
}
