//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Asking user for input
    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using arithmetic operations
    a = a + b; // Step 1: 'a' now holds the sum of both numbers
    b = a - b; // Step 2: 'b' becomes the original value of 'a'
    a = a - b; // Step 3: 'a' becomes the original value of 'b'

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
