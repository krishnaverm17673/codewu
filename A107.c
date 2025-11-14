#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Find the first greater element to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print comma-separated
        if (i == n - 1)
            printf("%d", nextGreater);   // last element (no trailing comma)
        else
            printf("%d, ", nextGreater);
    }

    return 0;
}
