#include <stdio.h>

int main() {
    int n = 4; // Total rows in the upper half (including the middle row)

    // 1. Upper Half of the Diamond (Rows 1 to 4)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (1, 3, 5, 7)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower Half of the Diamond (Rows 3 down to 1)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars (5, 3, 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}