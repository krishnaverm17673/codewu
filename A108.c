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
        int prevGreater = -1;

        // Check all elements to the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;    // nearest greater on the left
            }
        }

        // Print comma-separated
        if (i == n - 1)
            printf("%d", prevGreater);  // last element
        else
            printf("%d, ", prevGreater);
    }

    return 0;
}
