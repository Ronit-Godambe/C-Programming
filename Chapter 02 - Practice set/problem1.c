#include <stdio.h>

int main()
{

    /*

    1. Which of the following is invalid in C?
    a. int a=1; int b = a;
    b. int v = 3*3;
    c. char dt = ‘21 dec 2020’;
    
    */

    // 1. 
    int a = 1 ;     // value assigned to variable a 
    int b = a ;     // value ofa assigned to b i.e. b = 1

    //  PERFECTLY VALID!!!!

    // 2. 
    int v = 3*3 ;
    // DUHH VALID!!

    // 3. char dt = '21 dec 2026'
    // INVALID 😊 - character can only be assigned with 1 character/alphabet 

    return 0;   
}