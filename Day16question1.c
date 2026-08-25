//Q31: Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

int main() {
    int num;
    int binaryNum[32];
    int i = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle the special case where the input number is 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Store the original number for the final print statement
    int originalNum = num;

    // Convert decimal to binary
    // Note: This logic works for positive integers
    while (num > 0) {
        binaryNum[i] = num % 2; // Store remainder (0 or 1)
        num = num / 2;          // Divide number by 2
        i++;                    // Move to the next array index
    }

    // Print the binary array in reverse order
    printf("Binary representation of %d: ", originalNum);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}
