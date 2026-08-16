//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Prompt user for input
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display the result in HH:MM:SS format
    printf("Converted format [HH:MM:SS]: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
