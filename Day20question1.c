//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Process each digit
    while (num > 0) {
        digit = num % 10; 
        
        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit;
        }
        
        num /= 10; 
    }

    // Print the final result
    printf("Product of odd digits: %d\n", product);

    return 0;
}
