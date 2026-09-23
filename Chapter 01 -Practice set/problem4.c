/*

4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest

*/

#include <stdio.h> 

int main(){
    
int p, r, t ;
    printf("This program is for calculating SIMPLE INTEREST\n");

    printf("Enter Principal amount:");
    scanf("%d", &p);

    printf("Enter Rate of interest:");
    scanf("%d", &r);

    printf("Enter time (in years):");
    scanf("%d", &t);

    printf("Simple interest = (p x r x t)/100 = %d", (p*r*t)/100);
    return 0;
}