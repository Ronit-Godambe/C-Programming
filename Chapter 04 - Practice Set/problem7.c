#include <stdio.h>

int main()
{
    /*

    7. Write a program to calculate the sum of the numbers occurring in the
    multiplication table of 8. (consider 8 x 1 to 8 x 10).
sum = i*8
    */
int i; // (ya i initialised i here instead of for loop u got a prob?)
int sum;
int ssum = 0;
for ( i = 1; i <= 10; i++)
{
    sum = i * 8;
    ssum += sum;
}
printf("sum of the numbers occurring in the multiplication table of 8 is  = %d", ssum);

    return 0;
}