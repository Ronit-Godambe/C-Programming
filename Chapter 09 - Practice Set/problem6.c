#include <stdio.h> 
/*
6. Create an array of 5 complex numbers created in Problem 5 and display them 
with the help of a display function. The values must be taken as an input from 
the user.
*/

typedef struct complex
{
    int real;
    int imaginary;
}complex;

void display(complex c);
void display(complex c){
    if (c.imaginary >= 0)
    {
        printf("%d + %d i\n\n", c.real, c.imaginary);
    }
    else
    {
        printf("%d - %d i\n\n", c.real, -c.imaginary);
        
    }
    
}
int main(){
    complex setofcomplex [5];

    for (int i = 0; i < 5; i++) // ya ik i should have used i = 0 and i < 5, but in my first printf statement i wanted it to be 1 and not 0
    {
        printf("For complex Number %d:\n", (i+1));
        printf("Enter Real part: ");
        if (scanf("%d", &setofcomplex[i].real) != 1)
        {
            printf("...INVALID INPUT...");
            return 0;
        }

        printf("Enter Imaginary part: ");
        if (scanf("%d", &setofcomplex[i].imaginary) != 1)
        {
            printf("...INVALID INPUT...");
            return 0;
        }

        printf("\n");
        
    }
    
    for (int i = 0; i < 5; i++)
    {
    printf("The value of complex number %d is: ", (i+1));
    display(setofcomplex[i]);
    }
    

    return 0;
}