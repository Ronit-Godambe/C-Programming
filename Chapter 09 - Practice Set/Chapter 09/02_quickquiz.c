#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{

    // Structure 1
    struct employee e1;

    printf("Employee 1\n");

    printf("Employee Code: ");
    scanf("%d", &e1.code);

    printf("Employee Name: ");
    scanf("%s", &e1.name);

    printf("Employee Salary: ");
    scanf("%f", &e1.salary);

    printf("\n");

    // Structure 2
    struct employee e2;

    printf("Employee 2\n");

    printf("Employee Code: ");
    scanf("%d", &e2.code);

    printf("Employee Name: ");
    scanf("%s", &e2.name);

    printf("Employee Salary: ");
    scanf("%f", &e2.salary);

    printf("\n");

    // Structure 3
    struct employee e3;

    printf("Employee 3\n");

    printf("Employee Code: ");
    scanf("%d", &e3.code);

    printf("Employee Name: ");
    scanf("%s", &e3.name);

    printf("Employee Salary: ");
    scanf("%f", &e3.salary);

    printf("\n");

    printf("Employee 1\n\tEmployee code: %d\n\tEmployee Name: %s\n\tEmployee Salary: %f\n\n", e1.code, e1.name, e1.salary);
    printf("Employee 2\n\tEmployee code: %d\n\tEmployee Name: %s\n\tEmployee Salary: %f\n\n", e2.code, e2.name, e2.salary);
    printf("Employee 3\n\tEmployee code: %d\n\tEmployee Name: %s\n\tEmployee Salary: %f\n\n", e3.code, e3.name, e3.salary);

    return 0;
}