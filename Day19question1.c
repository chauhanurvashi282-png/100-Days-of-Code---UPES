//Write a program to find the LCM of two numbers.

#include <stdio.h>

// Function to find GCD using the Euclidean algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int find_lcm(int a, int b) {
    // Handling zero to avoid division by zero error
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / find_gcd(a, b);
}

int main() {
    int num1, num2;

    // Reading inputs from the user
    if (scanf("%d %d", &num1, &num2) == 2) {
        int lcm = find_lcm(num1, num2);
        printf("%d\n", lcm);
    }

    return 0;
}
