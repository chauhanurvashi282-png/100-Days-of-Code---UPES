//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

// Defining PI with 5 decimal places to match test case precision
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Reading the radius from the user
    if (scanf("%f", &radius) == 1) {
        
        // Mathematical formulas for calculations
        area = PI * radius * radius;
        circumference = 2 * PI * radius;

        // Displaying results formatted to 2 decimal places
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }

    return 0;
}
