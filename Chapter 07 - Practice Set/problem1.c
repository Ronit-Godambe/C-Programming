#include <stdio.h>
/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.
*/
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * p1 = a;
    printf("The value at address %u id %u", (p1+2), *(p1+2));
// Hence verified
    return 0;
}