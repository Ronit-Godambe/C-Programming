#include<stdio.h>
int main(){

// SIZE OF ALL VARIABLES


    // int - takes 4 bytes - 32 bit
    // char - takes 1 byte - 8 bits
    // float - 4 bytes - 32 bits\

    printf("Size of int: %zu bytes \n", sizeof(int));
    printf("Size of char: %zu bytes \n", sizeof(char));
    printf("Size of float: %zu bytes \n", sizeof(float));

    return 0;

}