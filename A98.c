#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    // Remove newline if present
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    int start = 0;

    // Print first initial
    if (isalpha(name[0])) {
        printf("%c ", toupper(name[0]));
    }

    // Find last space → start of surname
    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print middle initials
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i != lastSpace) {
            if (isalpha(name[i + 1]))
                printf("%c ", toupper(name[i + 1]));
        }
    }

    // Print full surname
    printf("%s", &name[lastSpace + 1]);

    return 0;
}
