//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    
    if (scanf("%d", &num) != 1) {
        return 1; 
    }

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        remainder = num % 10; 
        sum = sum + remainder; 
        num = num / 10;      
    }

    
    printf("%d\n", sum);

    return 0;
}
