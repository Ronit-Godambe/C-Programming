#include <stdio.h> 

int main(){
    /*
    6. Write a program to find greatest of four numbers entered by the user.
    */

    int a, b, c, d, greatest;
    printf(("This program is to find greatest of four numbers entered by the user.(i.e.YOU!)\n"));
    printf("Number 1:");
    scanf("%d", &a);
    printf("Number 2:");
    scanf("%d", &b);
    printf("Number 3:");
    scanf("%d", &c);
    printf("Number 4:");
    scanf("%d", &d);
    
    //
    // if(a > b && a > c && a > d ){
    //     printf("Greatest number: %d", a);
    // }
    // else if (b > a && b > c && b > d){
    //     printf("Greatest number: %d", b);
    // }
    // else if(c > a && c > b && c > d){
    //     printf("Greatest number: %d", c);
    // }
    // else if(d > a && d > b && d > c){
    //     printf("Greatest number: %d", d);
    // }
    // else {
    //     printf("invalid");
    // }
    //
    //               MORE REFINED SOLUTION 
    greatest = a;
     if (b > greatest){
        greatest = b;
    }

    if (c > greatest){
        greatest = c;
    }

    if (d > greatest){
        greatest = d;
    }

    printf("Greatest number = %d", greatest);
    return 0;
}