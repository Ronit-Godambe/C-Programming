#include <stdio.h>

int main()
{

    // Addition Operator (+)
    int a = 4, b = 3, c = a + b;
    printf("The value of a is %d, value of b is %d and value of c is %d\n", a, b, c);

    // Modulus operator (used to get remainder)
    printf("The remainder when a is divided by b is %d, where a = 4 and b = 3", a % b);
    // % cannot be applied on float
    // sign of the remainder is same as that of the numerator!!!

    /*

    int b = 2, c = 3;
    int z; z = b*c; //legal
    int z; b*c = z; //illegal (not allowed)


     No operator is assumed to pe present.
    int i = ab // invalid
    int i = a * b //valid
    
    
    There is no operator to perform exponentiation in C however we can use pow
    (x,y) from <math.h> (more later).

    int d = a^b; // not possible!!!

    An Arithmetic operation between
    • int and int → int
    • int and float → float
    • float and float → float

    */
////////////////////////////////////////////////////////////////////////////////



    return 0;
}