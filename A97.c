#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Print initials after every space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }

    return 0;
}
