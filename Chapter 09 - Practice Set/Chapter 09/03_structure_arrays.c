#include <stdio.h>
struct employee
{
    int code;
    char name[30];
    float salary;
};

int main()
{
    // Ways to initialiaze struct into an array

    // Way 1: define first then assign the values
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 99;
    facebook[3].code = 98;
    facebook[4].code = 97;
    //      .
    //      .
    //      .
    //      .

    printf("Code for facebook 4: %d\n\n", facebook[4].code);


    // Way 2: Assign the values directly by following the correct sequence of the structure 
    struct employee facebook1 = {4913, "Ronit", 43.3};
    struct employee facebook2 = {1219, "Datta", 89.2};
    
    printf("facebook 2: \n\tCode: %d\n\tName: %s\n\tSalary: %f\n", facebook1.code, facebook1.name, facebook1.salary);
    printf("facebook 2: \n\tCode: %d\n\tName: %s\n\tSalary: %f\n", facebook2.code, facebook2.name, facebook2.salary);
    
    
    // Way 3: Used only if we want to assign all elements to 0
    struct employee facebook0 = {0};
    
    printf("facebook 0: \n\tCode: %d\n\tName: %s\n\tSalary: %f\n", facebook0.code, facebook0.name, facebook0.salary);
    return 0;
}