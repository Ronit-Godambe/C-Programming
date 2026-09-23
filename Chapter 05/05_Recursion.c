#include <stdio.h> 

int factorial(int);
// Factorial (5) = 1 x 2 x 3 x 4 x 5
// Factorial (4) = 1 x 2 x 3 x 4
// Factorial (3) = 1 x 2 x 3 
// Factorial (2) = 1 x 2 
// Factorial (n) = 1 x 2 x 3 ...... x (n-1) x n
// Factorial (n-1) = 1 x 2 x 3 x .....x (n-1)

// Factorial (n) = Factorial (n-1) x n

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }

    return n * factorial (n-1);

}

int main(){
    int a;
    printf("Factorial of : ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}