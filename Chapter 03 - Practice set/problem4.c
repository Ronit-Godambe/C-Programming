#include <stdio.h>

int main()
{

    /*

    4. Write a program to find whether a year entered by the user is a leap year or not.
    Take year as an input from the user.

    */

    int year;
    printf("This program is to find whether a year entered by the user is a leap year or not.\n");
    printf("Enter Year: ");
    

    /*

    A year is a leap year if:

    1. It is divisible by 4.
    2. But if it is divisible by 100, it is not a leap year.
    3. However, if it is divisible by 400, it is a leap year.

    condition 1: year %4 ==0
    condition 2: year %100 == 0
    condition 3: year %400 == 0
    */

    if(scanf("%d", &year) != 1 || year<=0 ){
        printf("...INVALID INPUT...");
    }
    else if (year % 400 == 0)
    {
        printf("The year %d, is a leap year", year);
    }
    else if (year % 100 == 0)
    {
        printf("The year %d, is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("The year %d, is a leap year", year);
    }
    else
    {
        printf("The year %d, is not a leap year.", year);
    }
    return 0;
}