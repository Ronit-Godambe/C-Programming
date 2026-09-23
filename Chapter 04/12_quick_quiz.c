#include <stdio.h>

int main()
{
    /*
    Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.
    */

    int n ;
    printf("Input: ");
    scanf("%d", &n);
    printf("Output: (List of natural numbers from 1 to %d in reverse order)\n", n);

    for (int i = n; i ; i--){
        printf("%d\n", i);
    }
    return 0;
}