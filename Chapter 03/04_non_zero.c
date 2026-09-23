#include<stdio.h>
int main(){
    // for non-zero
    if(1){
        printf("This statement is executed\n");
    }
    // for multiple integers
    if(123){
        printf("This statement is executed as well\n");
    }
    // for float
    if(49.13){
        printf("This statement is executed, too\n");
    }
    // for characters
    if('a'){
        printf("This statement is executed\n");
    }
    // for zero
    if(0){
        printf("This statement will not be executed\n");
    }
    return 0;
}