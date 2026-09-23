#include <stdio.h>

// function prototype
int sum(int x, int y)
{
    printf("The sum is %d\n", x + y);
}

// function prototype
int sum1(int x1, int y1)
{
    return x1 + y1;
}

int main()
{

    int a = 1;
    int b = 2;

    // INSTEAD OF WRITING THIS:
    // int c = a + b;
    // printf("The sum is: %d\n", c);

    // WE WRITE THIS:
    sum(a, b);

    int a1 = 3;
    int b1 = 4;
    // int c1 = a1 + b1;
    // printf("The sum is: %d\n", c1);
    sum(a1, b1); // INSTEAD: sum(3,4)

    sum(12, 13); // no need to create variables at all - can do it directly too !!

    int c = sum(12, 13);
    // so we can assign the function to the variable
    ////////////////////////////////////////////////////////////////////////////////////////////////////////

    // if the function is,

    /*
        int sum1(int x1, int y1){
            return x1+y1;
        }
    */

    // we can also write:
    int a2 = 5;
    int b2 = 6;

    int c2 = sum1(a2, b2);
    printf("The sum is %d", c2);

    return 0;
}