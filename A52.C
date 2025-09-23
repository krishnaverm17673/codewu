#include <stdio.h>
//Q52: Write a program to print the following pattern:
 //*
 //
 //*
 //*
 //*
 //
 //*
 //
 //*
int main() {
    
    printf("*\n\n");

    
    for (int i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");

    
    for (int i = 0; i < 5; i++)
        printf("*\n");
    printf("\n");

    
    for (int i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");


    printf("*\n");

    return 0;
}
