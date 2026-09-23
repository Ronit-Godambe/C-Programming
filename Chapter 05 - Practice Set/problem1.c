#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

// 1. Write a program using function to find average of three numbers.

int main()
{
    int a, b, c;
    printf("This program is to find average of 3 numbers i.e. a, b, c\n");

    printf("a = ");
    if (scanf("%d", &a) != 1 || a <= 0)
    {
        printf("...Invalid Input...");
        return 0;
    }
    printf("b = ");
    if (scanf("%d", &b) != 1 || b < 0)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("c = ");
    if (scanf("%d", &c) != 1 || c < 0)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("the average of the 3 numbers %d, %d, and %d is %f", a, b, c, average(a, b, c));

    /*

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    if (a!= 1 || a< 0 || b!= 1 || b< 0 || c != 1 || c < 0) // well i was thinking if i ca make it in one line ig i cant no matter what it just keeps giving invalid input
    {
        printf("...INVALID INPUT...");
    }
    else
    {
        printf("the average of the 3 numbers %d, %d, and %d is %f", a, b, c, average(a, b, c));
    }
*/
    return 0;
}