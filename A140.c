#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p = {"Ravi", MALE};
    printf("%s %d", p.name, p.g);
    return 0;
}
