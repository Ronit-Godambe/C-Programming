#include <stdio.h> 

int main(){
    /*
    1. Write a program to print multiplication table of a given number n.

    Soln.
    let,
    i = multiple - 1 to 10
    n = user's input regarding any number
    */

    int n;
    printf("Table of: ");
    if(scanf("%d", &n) != 1){

        printf("...INVALID INPUT...");

    }
    else{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

}
    return 0;
}