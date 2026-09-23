#include <stdio.h> 

int main(){

    // to store address of a variable in another variable we use int*
    char i = 'A';
    
    // to store adddress of i in j ,
    char* j = &i; // here, j is an character pointer

    float k = 67.67;
    float* k1 = &k;
    
    printf("The address of i is %p (to view in hexadecimal and %u (to view in decimal).\n", &i, &i);
    
    printf("The address of i is %p.\n", j); // here we used j
    
    printf("The address of k is %p.\n", &k);

    // to see the value at a particular address we use *(&variable)
    printf("The value of j at address %p is %c\n", j , *(j));
    printf("the value of k at address %p is %f\n", &k, *(k1));

    return 0;
}