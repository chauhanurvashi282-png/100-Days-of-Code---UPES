//Q2: write a program to input two numbers and display there sum,diffence,product and quotient.
#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform standard calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display basic results
    printf("\nSum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);

    // Check for division by zero before calculating quotient
    if (num2 != 0.0) {
        double quotient = num1 / num2;
        printf("Quotient: %.2lf\n", quotient);
    } else {
        printf("Quotient: Undefined (Cannot divide by zero)\n");
    }

    return 0;
}