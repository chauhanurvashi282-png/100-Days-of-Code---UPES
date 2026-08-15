//Write a program to find and display the sum of first n natural numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate sum using a for loop
    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display the final result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
