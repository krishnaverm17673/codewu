#include <stdio.h>
//Q66: Write a program to read n elements in a sorted array and insert a specific element at its correct position to keep the array sorted.
int main() {
    int n, i, key, pos;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = key;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
