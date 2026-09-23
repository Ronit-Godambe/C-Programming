/*
1. Write a C program to calculate area of a rectangle:
    a. Using hard coded inputs.
    b. Using inputs supplied by the user
*/

#include <stdio.h>

int main()
{
    // a.
    int a, b;
    a = 2;
    b = 2;
    printf("The area of rectangle is %d", a * b);

    // b.
    int length, breadth;
    printf("\nArea of rectangle:\n");

    printf("enter length:");
    scanf("%d", &length);

    printf("Enter breadth:");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);
    return 0;
}