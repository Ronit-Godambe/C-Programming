#include <stdio.h> 
/*
6. Write a recursive function to calculate the sum of first ‘n’ natural numbers
*/
int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural (n-1) + (n);
}

int main(){
    int n;
    printf("This program prints the sum of first n natural numbers using recursion.\n");
    printf("Enter n = ");
    if(scanf("%d", &n) != 1 || n<0){
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("Sum of first %d natural numbers is %d", n, sum_natural(n));

    return 0;
}