#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Ravi", 101, {12, 5, 2021}};
    printf("%s %d %02d-%02d-%d", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}
