/*
1. What will be the output of this program
    int a = 10;
    if (a = 11){}
    printf("I am 11");
    }
    else{
    printf("I am not 11");
    }

*/
#include <stdio.h>

int main()
{
    int a = 10;

    if (a = 11)
    {
        printf("I am 11");
    }

    else
    {
        printf("I am not 11");
    }

    // BE CAREFUL! 😭
    // '=' assigns a value, while '==' compares values.
    // Here a becomes 11, and since 11 is non-zero (true),
    // the if statement runs and prints "I am 11".

    return 0;
}