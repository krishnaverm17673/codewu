#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student a = {"Ram", 1};
    struct Student b = {"Ram", 1};

    if (strcmp(a.name, b.name) == 0 && a.roll == b.roll)
        printf("Identical");
    else
        printf("Different");

    return 0;
}
