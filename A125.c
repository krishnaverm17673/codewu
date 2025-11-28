#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}
