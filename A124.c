#include <stdio.h>

int main() {
    char src[50], dest[50];
    FILE *f1, *f2;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    f1 = fopen(src, "r");
    if (f1 == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    f2 = fopen(dest, "w");

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }

    printf("File copied successfully.\n");

    fclose(f1);
    fclose(f2);
    return 0;
}
