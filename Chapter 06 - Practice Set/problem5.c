#include <stdio.h> 
/*
5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/
int* sum(int, int);
float* average(int, int);





    int* sum(int a, int b){
    int s = a + b;
    int* p1 = &s;
    printf("THe sum is %d\n", s);
    return p1;
   }



    float* average(int a, int b){
    float avg = (a+b)/2.0;
    float* p2 = &avg;
    printf("The average is %f\n", avg);
        return p2;
   }


   int main(){
    
    int x = 2, y = 2;
    
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The address of sum is %u, and of average is %u\n", ptr1, ptr2);
    return 0;
}
