#include <stdio.h>

int main()
 {
    int n, i, total = 0, left = 0, pivot = -1;

    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++)
     {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for (i = 0; i < n; i++)
     {
        int right = total - left - nums[i];

        if (left == right)
         {
            pivot = i;
            break;
        }

        left += nums[i];
    }

    printf("%d", pivot);

    return 0;
}