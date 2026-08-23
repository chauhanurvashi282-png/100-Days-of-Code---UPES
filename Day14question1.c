//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, current_odd = 1, sum = 0;

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += current_odd;
        current_odd += 2; // Move to the next odd number
    }

    // Print the final result
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}