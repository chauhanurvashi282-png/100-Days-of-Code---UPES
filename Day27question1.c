#include <stdio.h>

int main() {
    // 1. Upper Half of the pattern (Rows with 1, 3, 5, 7, 9 stars)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower Half of the pattern (Rows with 7, 5, 3, 1 stars)
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}