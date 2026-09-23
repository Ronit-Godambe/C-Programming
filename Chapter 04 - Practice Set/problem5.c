#include <stdio.h>

int main()
{

    /*

    5. Write a program to sum first ten natural numbers using while loop.

    */
    int i = 1;
    int sum = 0;

    while (i <= 10){
        sum += i; 
        i++;    
    }
    printf("Sum of natural numbers from 1 to 10 is: %d", sum);

    
}

