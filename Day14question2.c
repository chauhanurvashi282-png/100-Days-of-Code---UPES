//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle larger product values
    int found_even = 0;    // Flag to track if any even number exists in the range

    // Accept upper limit from user
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate product of even numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            found_even = 1;
        }
    }

    // Print result based on whether even numbers were present
    if (found_even) {
        printf("Output: %lld\n", product);
    } else {
        printf("Output: 0 (No even numbers in the range)\n");
    }

    return 0;
}
