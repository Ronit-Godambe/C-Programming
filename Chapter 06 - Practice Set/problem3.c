#include <stdio.h> 
    /*
    3. Write a program to change the value of a variable to ten times of its current value.
    */
   void function (int*);
   void function (int* a){
    *a = *a * 10;
   }                    
int main(){
    int i = 8;

    printf("The value of 'i' is  %d.\n", i);

    function(&i); // send address of i to the function and the function does the rest.

    printf("The value of 'is' %d.\n", i);
    return 0;
}