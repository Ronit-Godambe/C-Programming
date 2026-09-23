#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of %d = ", i);
        if (scanf("%d", &marks[i]) != 1)
        {
            printf("...Invalid Input...");
            return 0;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of %d are %d\n", i, marks[i]);
    }

    return 0;
}