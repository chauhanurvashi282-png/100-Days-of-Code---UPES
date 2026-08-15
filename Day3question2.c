//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Taking user input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying values before swapping
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping logic using a third variable
    temp = num1; // Move num1 to temp
    num1 = num2; // Move num2 to num1
    num2 = temp; // Move temp to num2

    // Displaying values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
