#include <stdio.h>

int main() {
    int r, c, v;
    scanf("%d %d", &r, &c);
    
    int n = (r < c) ? r : c;
    int a[n];
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &v);
            if (i == j) {
                a[i] = v;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("False\n");
                return 0;
            }
        }
    }
    
    printf("True\n");
    return 0;
}
