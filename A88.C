#include <stdio.h>
// Q88: Write a program to read a string and replace all spaces with hyphens.
int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("Modified string: %s\n", str);
    return 0;
}
