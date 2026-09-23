#include <stdio.h> 

// 4. Write a function and pass the value by reference.

void function(int*);
void function(int* a){
    *a = 9;
}
int main(){
    int a = 1, b = 2;
    printf("Value of a is - %d\n", a);
    function(&a);
    printf("The value of a is - %d\n", a);
    // The value is passed by reference (or so i think).
    return 0;
}