#include <stdio.h>
#include <stdlib.h>

/*
Quick Quiz: Write a program to create an array of size n using calloc where n is an
            integer entered by the user.
*/

int main()
{
    int n;

    printf("n = ");

    if (scanf("%d", &n) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    ptr[0] = 2;
    printf("%d", ptr[0]);

    free(ptr);
    return 0;
}