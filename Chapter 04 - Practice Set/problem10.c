#include <stdio.h>

int main()
{
    /*
        10. Write a program to check whether a given number is prime or not using loops
    */

    int n, i;
    int prime = 0;
    printf("This program is to check whether the entered number is prime or not.\n");

    printf("Enter Number:");

    if (scanf("%d", &n) != 1|| n < 0)
    {
        printf("...INVALID INPUT...\n");
        return 0;
    }

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime)
    {
        printf("The number is not prime.");
    }
    else
    {
        printf("The number is prime.");
    }

    return 0;
}