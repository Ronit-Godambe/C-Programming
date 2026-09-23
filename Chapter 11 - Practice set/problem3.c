#include <stdio.h>
#include <stdlib.h>
    /*

    3. Solve problem 1 using calloc().
    1. Write a program to dynamically create an array of size 6 capable of storing 6
    integers

    */
int main()
{
    int n = 6;

    int *ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;

    printf("The values stored in your array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}