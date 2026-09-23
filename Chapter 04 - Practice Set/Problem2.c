#include <stdio.h> 

int main(){
    /*
    2. Write a program to print multiplication table of 10 in reversed order.
    */

    int n = 10;
    for ( int i = 10; i ; i--)
    {
        printf("%d x %d = %d\n", n , i , n*i);
    }
    


    return 0;
}