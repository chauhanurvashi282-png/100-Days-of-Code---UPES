//Q35: Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    // Read the input number from the user
    if (scanf("%d", &num) != 1) {
        return 1; // Exit if input is invalid
    }

    // Loop from 1 to the given number to find its factors
    for (i = 1; i <= num; i++) {
        // If the number is perfectly divisible by i, then i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Print a new line at the end
    return 0;
}


