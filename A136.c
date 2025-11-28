#include <stdio.h>

enum Choice { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int c, a, b;
    printf("Enter choice (1-3): ");
    scanf("%d", &c);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(c) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
        default: printf("Invalid");
    }
    return 0;
}
