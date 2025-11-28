#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char ch;

    if (!in || !out) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    printf("Conversion complete.\n");

    fclose(in);
    fclose(out);
    return 0;
}
