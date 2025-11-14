#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }


    for(i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
