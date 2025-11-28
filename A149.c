#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter name roll: ");
    scanf("%s %d", s->name, &s->roll);

    printf("%s %d", s->name, s->roll);

    free(s);
    return 0;
}
