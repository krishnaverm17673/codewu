#include <stdio.h>
// Q77: Write a program to read a square matrix of size n x n, print the matrix and check whether all the diagonal elements are distinct or not.
int main() {
    int n, distinct = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], diag[n];

    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    
    if(distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
