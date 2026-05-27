#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Nhap so thu nhat:");
	scanf("%f", &a);
	float b;
	printf("Nhap so thu hai:");
	scanf("%f", &b);
	float c;
	printf("Nhap so thu ba:");
	scanf("%f", &c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float x = -c/b;
			printf("Phuong trinh co nghiem %.2f:",x);
		}
	}
	else{
		float z = (b*b) - 4*a*c;
		if(z<0){
			printf("Phuong trinh vo nghiem");
		}
		else if(z==0){
			float x=-b/(2*a);
			printf("Phuong trinh co nghiem kep %.2f: ",x);
		}
		else{
			float x1 = (-b + sqrt(z)) / (2 * a);
			float x2 = (-b - sqrt(z)) / (2 * a);
			printf("Phuongw trinh co hai nghiem phan biet:\n");
			printf("x1= %.2f",x1);
			printf("x2= %.2f",x2);
		}
	}
}
