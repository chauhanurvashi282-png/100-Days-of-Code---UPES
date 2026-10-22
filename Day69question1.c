#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int total = (n - 1) * n / 2;

    printf("%d", sum - total);

    return 0;
}