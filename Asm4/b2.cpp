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
        if (i % 2 == 0 && a[i] % 2 != 0) {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        printf("Khong co so le nao o vi tri chan.\n");
    else
        printf("Trung binh cong: %.2f\n", (float)tong / dem);

    return 0;
}
