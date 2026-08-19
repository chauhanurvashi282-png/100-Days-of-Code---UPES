//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Reading the three coefficients
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 1;
    }

    // Calculating the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Categorizing the roots based on the discriminant value
    if (discriminant > 0) {
        // Roots are real and distinct
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        // Formatting with %.0lf assuming integer sample outputs, or use %g for general floating points
        printf("Roots are real and different: %.0lf, %.0lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Roots are real and equal
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0lf\n", root1);
    } 
    else {
        // Roots are complex (discriminant < 0)
        printf("Roots are complex\n");
    }

    return 0;
}

