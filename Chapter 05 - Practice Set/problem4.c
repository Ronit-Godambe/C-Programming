#include <stdio.h>
/*
Fibonacci Series - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...........
fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
*/
int fibonacci(int);
int fibonacci(int n){

    printf("Calculating fib(%d)\n", n);

    if (n == 1 || n == 2){
        return n - 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}




// int fibonacci(int n)
// {
//     if (n == 1 || n == 2)
//         return n - 1;

//     int a = 0;
//     int b = 1;
//     int c;

//     for (int i = 3; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }

// return b;
// }
// 4. Write a program using recursion to calculate nth element of Fibonacci series.
int main()
{
    int n;
    printf("This program used recursion to calculate the nth element of Fibonacci series.\n");
    printf("Fibonacci series at n = ");
    if(scanf("%d", &n)!= 1 || n<0){
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}