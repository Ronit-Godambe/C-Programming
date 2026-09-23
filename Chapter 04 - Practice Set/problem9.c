#include <stdio.h> 

int main(){
    /*

    9. Repeat 8 using while loop.
    problem 8:  Write a program to calculate the factorial of a given number using a for loop.
    */
// YES YES I COPY PASTED IT AND THEN EDITED IT FROM PROBLEM 8

    int n, factorial = 1;
    int i = 1;
    printf("Factorial of: ");
    if(scanf("%d", &n) != 1 || n<0){
        printf("...INVALID INPUT...");
    }   
    else{
    while ( i<=n ){
        factorial*=i;   
        i++;
    }
    printf("factorial of %d is : %d ", n, factorial);
    }

    return 0;
}