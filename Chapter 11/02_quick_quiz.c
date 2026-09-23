#include <stdio.h> 
#include <stdlib.h>
/*
Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
*/
int main(){
    int n = 5;

    float *ptr;
    ptr = (float*) malloc(n*sizeof(float));

    ptr[0] = 4.2535;
    ptr[1] = 3.2535;
    ptr[2] = 2.2535;
    ptr[3] = 1.2535;
    ptr[4] = 0.2535;

    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    free(ptr);
    return 0;
}