#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int n, sum = 0, count = 0;

    if (!fp) {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);

    fclose(fp);
    return 0;
}
