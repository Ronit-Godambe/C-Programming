#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
} complex;
int main()
{
    complex z;
    printf("Real part:");
    if (scanf("%d", &z.real) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("Imaginary part:");
    if (scanf("%d", &z.imaginary) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("\n");

    printf("your complex number is: (%d + %d i)", z.real, z.imaginary);
    

    return 0;
}