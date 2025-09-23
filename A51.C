#include <stdio.h>
//Q51: Write a program to print the following pattern:
 //12345
 // 2345
 //  345
 //   45
 //    5
 
int main() {
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {
        
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
