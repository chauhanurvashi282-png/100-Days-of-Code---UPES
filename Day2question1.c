//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breath.
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Prompt user for input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Perform geometric calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("\n--- Results ---\n");
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
