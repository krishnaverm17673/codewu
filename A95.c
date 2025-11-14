#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return 0;

    char temp[200];

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}
