#include <stdio.h>
// Q78: Write a program to read a square matrix of size n x n, print the matrix and find the sum of the main diagonal elements.
int main() {
    int n, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    
    printf("\nThe matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
