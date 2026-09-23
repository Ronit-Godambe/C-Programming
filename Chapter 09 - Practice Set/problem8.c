#include <stdio.h> 
/*
8. Create a structure representing a bank account of a customer. What fields did 
you use and why? 
*/

struct bankaccount{
    int accountnumber; // accountno. is always in int
    char ifsc[12]; // has 11 characters one for null character
    char name[34]; // How does one even answer the why part of the problem for this
    float balance; // to store how much balance (money) the customer has
};
int main(){
    
    return 0;
}