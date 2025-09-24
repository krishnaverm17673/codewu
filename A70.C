#include <stdio.h>
// Q70: Write a program to read n elements in an array and rotate the array to the right by k times.
int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    k = k % n;  

    int result[n];

    
    for(int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    printf("Array after %d right rotations:\n", k);
    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
