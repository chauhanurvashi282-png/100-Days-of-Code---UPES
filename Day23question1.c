//Q45: Write a program to find the sum of the series:
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = (4.0 * i) - 1.0;
        sum += numerator / denominator;
    }
    printf("Approximate sum up to %d terms: %.2f\n", n, sum);

    return 0;
}

