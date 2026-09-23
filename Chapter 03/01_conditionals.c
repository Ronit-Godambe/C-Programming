#include <stdio.h> 

int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);

    if(a<18){
        printf("You are under 18!");
    }


    // RUN THE FOLLOWING CODE BY IMPROVING IT BY ADDING LOGIC OPERATORS 
    

    // if(18<a<50){
    //     printf("You are officially an adult");
    // }
    // if(50<a<70){
    //     printf("You are old!");
    // }
    // if(a>70){
    //     printf("You are a senior citizen");
    // }

    return 0;
}