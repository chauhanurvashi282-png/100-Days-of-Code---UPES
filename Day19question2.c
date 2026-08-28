//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Read the input number from the user
    if (scanf("%d", &num) != 1) {
        return 1; 
    }

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Process each digit using a loop
    while (num > 0) {
        remainder = num % 10; // Extract the last digit
        sum = sum + remainder; // Add digit to sum
        num = num / 10;       // Remove the last digit
    }

    // Print the final result
    printf("%d\n", sum);

    return 0;
}
