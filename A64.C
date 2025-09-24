#include <stdio.h>
//Q64: Write a program to read an integer number and find the digit that occurs the most times in the number.
int main() {
    long long num;
    int digit, freq[10] = {0}, i, maxFreq = 0, mostDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; 
    }

    
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostDigit = i;
        }
    }

    printf("The digit that occurs the most times is %d (appears %d times)\n", mostDigit, maxFreq);

    return 0;
}
