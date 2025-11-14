#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;
    char month[4][10] = {"Jan", "Feb", "Mar", "Apr"};

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // Print in required format
    if (mm >= 1 && mm <= 4)
        printf("%02d-%s-%04d\n", dd, month[mm - 1], yyyy);
    else
        printf("Invalid month!\n");

    return 0;
}
