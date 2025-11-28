#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    if (r == ADMIN) printf("Admin Access");
    else if (r == USER) printf("User Access");
    else printf("Guest Access");

    return 0;
}
