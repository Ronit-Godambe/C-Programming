#include <stdio.h> 
# include<math.h>

int main(){
    /*
    Quick Quiz: Use the library function to calculate the area of a square with side a.
    */
int a;
printf("This program uses pow function included in math.h library to find the area of square with side 'a'.\n");

printf("a = ");

if(scanf("%d", &a) !=1 || a<=0){
    printf("...INVALID INPUT...");
}

else{
printf("The area of square with side %d unit(s) is %0.f.", a, pow(a, 2));
}   
    return 0;
}