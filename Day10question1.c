//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Read the lengths of the three sides from user input
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    // Optional safety check: Ensure the sides form a valid triangle
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("Not a Triangle\n");
    }
    // Condition 1: All three sides are equal
    else if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    // Condition 2: Any two sides are equal
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    }
    // Condition 3: All sides have different lengths
    else {
        printf("Scalene\n");
    }

    return 0;
}
