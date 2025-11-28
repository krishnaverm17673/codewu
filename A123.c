#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && inWord == 0) {
            words++;
            inWord = 1;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    fclose(fp);
    return 0;
}
