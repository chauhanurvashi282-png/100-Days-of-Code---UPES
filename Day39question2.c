#include <stdio.h>

int main() {
    int r, c, v, s = 0;
    scanf("%d %d", &r, &c);
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &v);
            if (i == j) {
                s += v;
            }
        }
    }
    
    printf("%d\n", s);
    return 0;
}