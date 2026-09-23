#include <stdio.h>

/*
1. Create a two-dimensional vector using structures in C.
*/
typedef struct vector
{
    int i;
    int j;
} vector;

int main()
{
    vector a;
    a.i = 12;
    a.j = 8;
    printf("Your vector is %di + %dj.", a.i, a.j);

    return 0;
}