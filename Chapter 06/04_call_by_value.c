#include <stdio.h> 

int sum(int, int);
int sum(int a, int b){
    a = 6; // sum function cannot change the value of a because copy of x is provided to a
    return a + b;
}

int main(){
    int x = 1, y = 6;
    printf("The sum is %d.\n", sum(x, y));
    printf("The value of x is %d", x);// sum function cannot chage the value of x!
    

    return 0;
}