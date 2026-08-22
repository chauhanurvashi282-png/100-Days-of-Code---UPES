//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Prompt user for two integer operands
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation based on the operator
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Error handling for division by zero
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            // Error handling for modulo by zero
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
            
        // If the operator does not match any case
        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;
}
