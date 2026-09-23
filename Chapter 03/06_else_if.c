#include <stdio.h>

int main(){

    // This program is to check whether one can drive or not!

    int a;
    printf("This program is to check whether one can drive or not!\n");
    printf("Enter Your Age :");
    scanf("%d", &a);

    if(a>=75){
        printf("You can drive but you are a senior citizen.");
    }

    else if(a>=60){
        printf("You can drive but you should be careful!");
    }

    else if(a>=18){
        printf("You can drive.");
    }
    else{
        printf("You cannot drive!");
    }

    return 0;
}