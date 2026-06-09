#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        printf("Mang khong co so le nao.\n");
    else
        printf("Trung binh cong cac so le: %.2f\n", (float)tong / dem);

    return 0;
}
