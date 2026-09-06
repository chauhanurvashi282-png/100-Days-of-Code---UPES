#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d", a[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}