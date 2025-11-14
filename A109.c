#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    // Step 1: prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d ", answer[i]);
    }

    return 0;
}
