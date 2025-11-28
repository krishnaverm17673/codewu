#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student top() {
    struct Student s = {"Rohan", 101, 98.5};
    return s;
}

int main() {
    struct Student t = top();
    printf("%s %d %.2f", t.name, t.roll, t.marks);
    return 0;
}
