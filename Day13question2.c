//Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n and print each number
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Print a new line at the end
    return 0;
}
