#include <stdio.h>

int main()
{

    // int a;
    // printf("This program is to determine whether the given number is divisible by 5\n");
    // printf("Enter a number:");
    // scanf("%d", &a);
    // printf("If the remainder turns out to be zero then the number given is divisible by 97\n, if not the number isn't divisible by 97");
    // // i plan to use if else statments when i learn them in future



    ///////////////////////////////////
    //  AFTER LEARNING IF ELSE STATEMENTS (from chap 3)
    int a, b, c;

    printf("Enter divided (Dividend): ");
    scanf("%d", &b);

    printf("Enter the divisor: ");
    scanf("%d", &a);

    c = b % a;

    if (c == 0)
    {
        printf("Yes %d is divisible by %d", b, a);
    }
    else
    {
        printf("No, %d is not divisible by %d", b, a);
    }
    return 0;
}