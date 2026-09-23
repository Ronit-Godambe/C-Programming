#include <stdio.h>
/*
2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/

typedef struct vector
{
    int i;
    int j;
} vector;

vector sumVector(vector a, vector b);
vector sumVector(vector a, vector b)
{
    vector v3 = {a.i + b.i, a.j + b.j};

    // v3.i = a.i + b.i;
    // v3,j = a.j + b.j;
    return v3;
}
int main()
{
    printf("There are two vectors\n vector 1: x1 i + y1 j\nvector 2: x2 i + y2 j\n");
    printf("This program expects the user to put the values of x1, y1, x2, y2 and the program will return the sum of the two vectors.\n");
    printf("x1 = ");

    vector v1;

    if (scanf("%d", &v1.i) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("y1 = ");
    if (scanf("%d", &v1.j) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    vector v2;
    printf("x2 = ");
    if (scanf("%d", &v2.i) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("y2 = ");
    if (scanf("%d", &v2.j) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("so the two vectors are:\n vector 1: %d i + %d j\nvector 2: %d i + %d j\n", v1.i,v1.j ,v2.i , v2.j);

    vector v3 = sumVector(v1, v2);
    printf("The sum of the two vectors is %d i + %d j.", v3.i, v3.j);

        return 0;
        
}