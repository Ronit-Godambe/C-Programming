#include <stdio.h> 

int main(){

    // POINTER ARITHMETiC USING INTEGER POINTER
    
    printf("POINTER ARITHMETIC USING INTEGER POINTER\n\n");
    int a = 1;
    int * p1 = &a;

    printf("The address of a is - %u\n", &a);
    printf("The address of a is - %u\n", p1);
    p1++;
    printf("The value of p1 is %u....(p1++)\n", p1);

    printf("\n");
    
    // POINTER ARITHMETIC USING CHARACTER POINTER
    printf("POINTER ARITHMETIC USING CHARACTER POINTER\n\n");
    char b = 'a';
    char * p2 = &b;
    printf("The address of a is - %u\n", &a);
    printf("The address of a is - %u\n", p2);
    p2++;
    printf("The value of p2 is %u....(p2++)\n", p2);
    

    return 0;
}