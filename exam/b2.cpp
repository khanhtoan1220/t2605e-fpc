#include <stdio.h>
void reverseArray(int ary[], int n){
		int j = n-1;
	   	for(int i = 0; i< n/2;i++){
	   		int t = ary[i];
	   		ary[i] = ary[j-i];
	   		ary[j-i] = t;
	   		
		   }
	}
int main(){
	int n;
	printf("nhap so phan tu n: ");
	scanf("%d",&n);
	if(n<=0){
		printf("So phan tu khong hop le");
		return 0;
	}
	int arr[n];
	for(int i =0; i<n;i++){
		printf("phan tu thu %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	reverseArray(arr, n);
	printf("mang sau khi dao nguoc: \n");
	for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
