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

    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    int timThay = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Tim thay %d tai chi muc %d.\n", x, i);
            timThay = 1;
            break;
        }
    }

    if (timThay == 0)
        printf("%d khong co trong mang.\n", x);

    return 0;
}
