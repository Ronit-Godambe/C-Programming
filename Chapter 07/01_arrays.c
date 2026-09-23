#include <stdio.h> 
// Arrays allow us to store multiple values in a single variable
int main(){
    int marks [90]; //so this variable can store 90 values or 90 integers
    
    marks [1] = 45;
    marks [2] = 34;
    //      .
    //      .
    //      .
    //      .
    // marks [89] - this is the limit for marks[90]
    // because when we write marks[90] we reserve 90 places for values and as 0 is included we fill 
    // all of them till 89
    printf("Marks of 1 = %d\nMArks of 2 = %d\n", marks[1], marks[2]);
    return 0;
}