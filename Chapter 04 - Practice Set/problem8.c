#include <stdio.h> 

int main(){
    /*

    8. Write a program to calculate the factorial of a given number using a for loop.
    let n = input, i = factorial (-_-)
    */
    
    int n, factorial = 1;
    
    printf("Factorial of: ");
    scanf("%d", &n);   
    
    for(int i = 1; i<=n; i++ ){
        factorial*=i;   
    }

    printf("factorial of %d is : %d ", n, factorial);

    return 0;

}