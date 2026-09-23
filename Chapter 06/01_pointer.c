#include <stdio.h> 

int main(){

    // to store address of a variable in another variable we use int*
    int i = 72;
    
    // to store adddress of i in j ,
    int* j = &i; // here, j is an integer pointer

    int k = 67;
    
    printf("The address of i is %p (to view in hexadecimal and %u (to view in decimal).\n", &i, &i);
    
    printf("The address of i is %p.\n", j); // here we used j
    
    printf("The address of k is %p.\n", &k);

    // to see the value at a particular address we use *(&variable)
    printf("The value of j at address %p is %d\n", j , *(j));

    return 0;
}