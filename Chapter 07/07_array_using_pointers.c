#include <stdio.h> 

int main(){

    int marks[5] ={23, 25, 45, 42, 12};

    // int*ptr = &marks[0];// can also be written as int*ptr = marks[]

    int*ptr = &marks[3];

    printf("We print values directly:\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, marks[i]);
    }

    printf("\n");

    printf("Or we use pointers to do the work (the result is the same!)\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, *ptr);
        ptr++;
    }
    
    return 0;
}