#include <stdio.h>

int main()
{

    /*

    Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.

    Input: 4
    Output: 1
            2
            3
            4

    */

int n;

int i = 1;
printf("Input: ");
scanf("%d", &n);


printf("Output: ");
do
{
    printf("%d\n", i);
    i++;
} while (i <= n);




}
  
