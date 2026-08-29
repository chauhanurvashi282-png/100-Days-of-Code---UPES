//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char binary[100];
    
    // Read the binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    printf("1's complement: ");
    // Loop through each character until the end of the string
    for(int i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '1') {
            printf("0");
        } else if(binary[i] == '0') {
            printf("1");
        } else {
            printf("\nInvalid binary digit encountered: %c\n", binary[i]);
            return 1;
        }
    }
    printf("\n");
    
    return 0;
}




