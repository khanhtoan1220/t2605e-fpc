#include <stdio.h>
#include <math.h>
int main(){
	float tien_ban_dau = 5000;
	int so_nam = 3;
	float lai_suat=8;
	float r = lai_suat/100;
	float tong_tien = tien_ban_dau * pow(1 + r, so_nam);
	printf("Tong tien sau 3 nam: %.2f$", tong_tien);
}
