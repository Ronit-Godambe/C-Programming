#include <stdio.h> 

int main(){
    /*
    Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
    */
    int n;
    printf("Input: ");
    scanf("%d", &n);
    printf("Output: (List of natural numbers from 1 to %d )\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}