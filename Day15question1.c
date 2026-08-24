//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Used to handle larger result values

    // Prompting user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative integers
    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        // Printing the final output
        printf("Output: %llu\n", fact);
    }

    return 0;
}


