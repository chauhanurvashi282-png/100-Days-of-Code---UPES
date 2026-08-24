//Q30: Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Read input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;                  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit from original
    }

    // Print the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}

