#include <stdio.h>
//Q60: Write a program to read n elements in an array and count the total number of positive, negative and zero elements.
int main() {
    int n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Total positive numbers = %d\n", positive);
    printf("Total negative numbers = %d\n", negative);
    printf("Total zeros = %d\n", zero);

    return 0;
}
