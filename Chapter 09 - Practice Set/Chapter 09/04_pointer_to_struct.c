#include <stdio.h> 
struct employee
{
    int code;
    char name[30];
    float salary;
};
int main(){
    struct employee e1;
    e1.code = 49;
    struct employee *ptr;
    ptr = &e1;
        ;
// Instead of using brackets and stars its is easier to use ->            me: !!!! o_o !!!!

    printf("%d", (*ptr).code);
    printf("%d", ptr->code);
    return 0;
}