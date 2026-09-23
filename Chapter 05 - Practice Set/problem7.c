#include <stdio.h>

/*

7. Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/

int main()
{
    int n;
    printf("n = ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        // for n = 0 ---> pritn 1 star
        // for n = 1 ---> pritn 3 stars
        // for n = 2 ---> pritn 5 stars

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}