#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    // Convert entire string to lowercase first
    for (int i = 0; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    // Convert first non-space character to uppercase
    int i = 0;
    while (s[i] == ' ')
        i++;

    if (s[i] != '\0')
        s[i] = toupper(s[i]);

    printf("%s", s);

    return 0;
}
