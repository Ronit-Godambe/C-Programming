#include <stdio.h> 

int main(){
    /*
    6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop
    
    (Problem 5: Write a program to sum first ten natural numbers using while loop.)
    */
    int i = 1;
    int sum = 0;

    do{
        sum += i; 
        i++;    
    }while (i <= 10);

    printf("Sum of natural numbers from 1 to 10 is: %d\t (Printed using do - while loop)\n", sum);


    // part 2 - using for loop
    int ssum = 0;
    for (i = 1; i<=10; i++)
    {
        ssum += i;
    }
    printf("Sum of natural numbers from 1 to 10 is: %d\t(Printed using for loop)", sum);

    

    return 0;
}