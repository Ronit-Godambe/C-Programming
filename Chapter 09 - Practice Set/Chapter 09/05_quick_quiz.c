#include <stdio.h> 
/*
Quick Quiz: Complete this show function to display the content of employee.
*/


struct employee{
    int code;
    char name[50];
    float salary;    
};

void show(struct employee e);
void show(struct employee e){
        printf("Employee code: %d\n\tEmployee Name: %s\n\tEmployee Salary: %f\n\n", e.code, e.name, e.salary);

}
int main(){
    struct employee e1;

    printf("Employee Code: ");
    scanf("%d", &e1.code);

    printf("Employee Name: ");
    scanf("%49s", e1.name);

    printf("Employee Salary: ");
    scanf("%f", &e1.salary);

    show(e1);
    return 0;
}