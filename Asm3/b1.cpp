#include <stdio.h>
int main(){
	int a, b,x1,x2, r, ucln, bcnn;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	x1=a;
	x2=b;
	r = a%b;
	
	while(r!=0){
		a= b;
		b= r;
		r = a%b;
	}
	ucln=b;
	bcnn= x1*x2/ucln;
	printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}
