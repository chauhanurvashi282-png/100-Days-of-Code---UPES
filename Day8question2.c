//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers separated by spaces: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Conditional evaluation using an if-else ladder
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %.2f\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %.2f\n", num2);
    } 
    else {
        printf("The largest number is: %.2f\n", num3);
    }

    return 0;
}
