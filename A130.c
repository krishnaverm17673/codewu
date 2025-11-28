#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    char name[50];
    int roll, marks;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
