#include <stdio.h>
/*
1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables.

Quick Quiz: Try these operations on another variable by creating pointers in a separate
program. Demonstrate all the four operations.
*/
int main()
{
    int a[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    // 1. Addition of a number to a pointer.

    printf("\n1. Addition of a number to a pointer:\n\n");

    int *b = &a[2];

    printf("The address of b is %p (%u)\n", b, b);
    printf("The address of b+1 is %p (%u)\n", b + 1, b + 1);

    printf("The value at b is %d\n", *b);
    printf("The value at b+1 is %d\n\n", *(b + 1));



    // 2. Subtraction of a number from a pointer.

    char c[] = {'a', 'b', 'c', 'd'};
    char *d = &c[1];

    printf("2. Subtraction of a number from a pointer:\n\n");

    printf("The address of d is %p (%u)\n", d, d);
    printf("The address of d-1 is %p (%u)\n", d-1, d-1);

    printf("The value at d is '%c'\n", *d);
    printf("The value at d-1 is '%c'\n\n", *(d - 1));



    // 3. Subtraction of one pointer from another.
    int e[] = {2, 3, 1, 5, 6, 2, 8, 9, 1};
    int *f = &e[5];
    int *g = &e[2];

    printf("3. Subtraction of one pointer from another.\n\n");
    printf("Address of f = %p (%u)\n", f, f);
    printf("Address of g = %p (%u)\n", g, g);

    printf("Difference   = %d (so f is %d places apart from g)\n", (f - g), (f - g));


    // 4. Comparison of two pointer variables.
    printf("Comparison of two pointer variables.\n\n");

    int h[] = {5, 6, 7, 1, 9, 7, 8, 5, 4};
    int * i = &h[5];
    int * j = &h[4];
    int * k = &h[5];


    if(i == j){
        printf("The addresses of i and j are equal.\n");
    }
    else{
        printf("addresses of i and j are not equal.\n");
    }

    
    if(j == k){
        printf("The addresses of j and k are equal.\n");
    }
    else{
        printf("addresses of j and k are not equal.\n");
    }
    
    
    if(i == k){
        printf("The addresses of i and k are equal.\n\n");
    }
    else{
        printf("addresses of i and k are not equal.\n");
    }
    
    
    printf("Address of i = %p (%u)\n", i, i);
    
    printf("Address of k = %p (%u)\n", k, k);
    
    printf("Address of j = %p (%u)\n", j, j);

    return 0;
}