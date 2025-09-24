#include <stdio.h>
// Q68: Write a program to read n elements in an array and delete a specific element from the array.
int main() {
    int n, i, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        
        for(i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
