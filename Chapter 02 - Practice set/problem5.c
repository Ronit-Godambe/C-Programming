#include <stdio.h>

int main()
{
    /*

    5. 3.0 + 1 will be:
        a. Integer.
        b. Floating point number.
        c. Character.

    */

    // calculation btwn a float and integer is always a float   ------  option b
    float a = 3.0+1;
    printf("%f\n", a);
    printf("%f", 3.0+1);
    return 0;
}