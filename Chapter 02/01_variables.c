#include <stdio.h>

int main()
{
    // TYPE DECLARATION INSTRUCTIONS

    int a; // Declare an integer variable 'a'
    a = 20;
    float b; // Declare a float variable 'b'

    int i = 10; // Declare and initialize 'i' with 10
    int j = i;  // Declare 'j' and initialize with 'i'

    // % d is called format specifier
    // %d is for int, %f is for float and %c is for char

    printf("The value of i in %d and value of j is %d\n", i, j);
    int c = 2, d = 3, e = 4, f = 5; // Declare and initialize multiple variables

    printf("The value of c in %d and value of d is %d\n", c, d);
    printf("The value of e in %d and value of f is %d\n", e, f);

    int j1 = a + j - i; // Valid: use previously defined variables
    printf("%d", j1);

    // Invalid: 'a' is used before declaration
    // float b = a + 3;
    // float a = 1.1;

    // Valid: Assigning the same value to multiple variables
    int g, h, i, j;
    g = h = i = j = 30; // a, b, c, d all are equal to 30 (all are assigned the same value)


    return 0;
}