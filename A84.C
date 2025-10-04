#include <stdio.h>
// Q84: Write a program to read a lowercase string and convert it to uppercase.
int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    gets(str);  

    while (str[i] != '\0') {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
