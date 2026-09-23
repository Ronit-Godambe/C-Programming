#include <stdio.h>

int main()
{
    /*

    Write a program to print natural numbers from 10 to 20 when initial loopcounter is initialized to 0.
    
    */

    int i = 10;
    while(i<=20){
        printf("%d\n", i);
        i++;
    }
    /*
    it just checks the condition, prints the statement, adds an increment of 1 to i, then checks the condition again............................
    this contiinues till i  =20, and increment of 1 is added, then i = 21, loop checks condition, 21 is not <= 20, therefore it doesn't print further.
    */
    return 0;
}