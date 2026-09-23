#include <stdio.h> 

int main(){
    // int a = 9;
    // int b = 2;
    // float c = 9/2;
    // printf("The value of a/b is %f", c);
    // OUTPUT - 4.000000  (int / int = int)

    // repaired: 
    float a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f\n", c);

    int d = 6.7;
    printf("if d = 6.7 and is defined by the function 'int' then the output is: %d, this is called demotion", d);
    
    float e = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)

    return 0;
}

