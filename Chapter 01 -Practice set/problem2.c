/*
2. Calculate the area of a circle and modify the same program to calculate the
   Volume of a cylinder given its radius and height (radius and height is taken from the user)
*/
#include <stdio.h> 

int main(){
    int h , r ;
    printf("This program is for calculating volume of a cylinder when its height and radius is given:\n");
    
    printf("Enter Height:");
    scanf("%d", &h);
    
    printf("Enter radius:");
    scanf("%d", &r);

    printf("Volume of the cylinder is %f", 3.14*r*h);
    
    return 0;

}
