//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    // Prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Outer if-else block
    if (num >= 0) {
        // Inner nested if-else block for non-negative numbers
        if (num == 0) {
            printf("%d is Zero.\n", num);
        } else {
            printf("%d is a Positive number.\n", num);
        }
    } else {
        // Executed if the outer condition (num >= 0) is false
        printf("%d is a Negative number.\n", num);
    }

    return 0;
}
