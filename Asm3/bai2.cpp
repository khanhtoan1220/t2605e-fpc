#include <stdio.h>

int main() {
    int n, tong = 0, so;

    printf("Nhap n: ");
    scanf("%d", &n);

   
	if(n<0){
		n=-n;
	}
    while (n != 0) {
        so = n % 10;
        tong = tong + so;
        n = n / 10;
    }

    printf("Tong cac chu so = %d\n", tong);
    return 0;
}
