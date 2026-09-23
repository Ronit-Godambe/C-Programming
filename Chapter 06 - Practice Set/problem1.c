#include <stdio.h> 
/*

1. Write a program to print the address of a variable. Use this address to get the
value of the variable.

*/
int main(){
    int i = 2;
    int* j = &i;
    printf("The address of i is %u, and value of the variable is %d", j , *j);

    
    return 0;
}