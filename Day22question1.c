//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int num, originalNum, lastDigit;
    long long sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    if (num < 0)
    {
        printf("Not strong number\n");
        return 0;
    }

    while (num > 0)
    {
        lastDigit = num % 10;

        long long fact = 1;
        for (int i = 1; i <= lastDigit; i++)
        {
            fact *= i;
        }

        sum += fact;

        num /= 10;
    }

    if (sum == originalNum)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not strong number\n");
    }

    return 0;
}
