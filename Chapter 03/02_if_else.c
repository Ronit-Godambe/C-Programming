#include <stdio.h> 

int main(){
    int a;
    printf("Enter your age:");
    scanf("%d", &a);

    if(a>=18){
        printf("You are an adult!");
    }
    else{
        printf("You are under 18.");
    }
    return 0;
}