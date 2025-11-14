#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str); // use fgets() in practice for safety

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
