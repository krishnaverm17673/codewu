#include <stdio.h>
#include <math.h>

int main() { //Q41: Write a program to swap the first and last digit of a number.
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    
    digits = (int)log10(num);

    
    first = num / (int)pow(10, digits);
    last = num % 10;

    
    swapped = last * (int)pow(10, digits)  
              + (num % (int)pow(10, digits)) / 10 * 10 
              + first; 

    printf("Number after swapping first and last digit of %d is: %d\n", original, swapped);

    return 0;
}
