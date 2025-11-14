#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], freq[n+1];

    // initialize frequency array
    for (int i = 0; i <= n; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // check in the same loop (single iteration)
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    return 0;
}
