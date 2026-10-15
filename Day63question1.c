#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int find_kth_smallest(int arr[], int n, int k)
 {
    qsort(arr, n, sizeof(int), compare);
    return arr[k - 1];
}

int main()
 {
    int n;
    scanf("&d",n);
    int arr1[n];

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1; 
    scanf("&d",k1);
    printf("%d\n", find_kth_smallest(arr1, n1, k1));

    return 0;
}
