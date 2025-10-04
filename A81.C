#include <stdio.h>
// Q81: Write a program to read a string and count the number of characters in it.
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // for simplicity (note: unsafe, use fgets in real programs)

    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);
    return 0;
}
