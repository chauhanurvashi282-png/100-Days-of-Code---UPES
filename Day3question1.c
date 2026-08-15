//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // 1. Get input from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // 2. Apply the conversion formula
    fahrenheit = (celsius * 1.8) + 32;

    // 3. Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
