#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (!fp) {
        printf("File not found!\n");
        return 1;
    }

    int ch, vowels = 0, consonants = 0;
    ch = fgetc(fp);

    while (ch != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }

        ch = fgetc(fp);
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    fclose(fp);
    return 0;
}
