//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

// Function to calculate HCF/GCD using Euclidean Algorithm
int find_hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Prompt user for input
    printf("Enter two numbers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate HCF
    int hcf = find_hcf(num1, num2);

    // Print the result
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}


