#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // extra space for the new element
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int i;
    // find correct position and shift larger elements to the right
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
    n++; // array size increases by 1

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}