#include <stdio.h>

int main()
{
    /*

    OPERATOR PRECEDENCE
    The following table lists the operator priority in C
        Priority       Operators
        1st             * / %
        2nd              + -
        3rd               =
    Operators of higher priority are evaluated first in the absence of parenthesis.

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    OPERATOR ASSOCIATIVITY
    When operators of equal priority are present in an expression, the tie is taken care of by
    associativity.
        x*y/z → (x*y)/z
        x/y*z → (x/y)*z
    *, / follows left to right associativity

    */

    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d", a * b / c + 7); // here it will show left to right associavity and then add 7
    printf("The value is %d", 3*b / 2*c + 7*a); // check precedence
    //  3*b/2*c + 7*a    precedence
    //  18/2*c + 21      associativity (left to right)
    //  9*c + 21         associativity (left to right)
    //  81 + 21          associativity (left to right) + precedence
    //  102              output


    return 0;
} 