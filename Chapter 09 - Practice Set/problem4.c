#include <stdio.h> 
/*
4. Write a program to illustrate the use of arrow operator → in C. 
*/
typedef struct employee
{
    int salary;
    float score;
} employee;

int main(){
    employee e1;
        employee *ptr = &e1;
        // Now to access e1 through a pointer we have to type:
                // (*ptr1).score = 12.25;
        // Instead we can use this:
                ptr->score = 12.25;
                ptr->salary = 45;
    printf("The value of salaryis %d and he value of score is %f", ptr->salary, ptr->score);
    return 0;
}