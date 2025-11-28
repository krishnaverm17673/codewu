#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int pos = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (int i = 1; i < 5; i++)
        if (s[i].marks > s[pos].marks)
            pos = i;

    printf("Topper: %s %.2f\n", s[pos].name, s[pos].marks);

    return 0;
}
