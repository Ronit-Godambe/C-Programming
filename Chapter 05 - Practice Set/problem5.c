#include <stdio.h> 
/*
5. What will the following line produce in a C program:

int a = 4;
printf("%d %d %d \n", a, ++a, a++);

*/
int main(){

int a = 4;
printf("%d, %d, %d \n", a, ++a, a++);    
// order is from right to left so the output will be 6, 6, 4.
    return 0;
}