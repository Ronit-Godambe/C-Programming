#include <stdio.h>
#include <string.h>

typedef struct student
{
    int code;
    char name[50];
    float percentage;

} student;

int main()
{
    student s1;
    s1.code = 2921;
    strcpy(s1.name, "Ronit");
    s1.percentage = 45.56;


    // OR WE CAN DIRECTLY DO THIS

    typedef int Ronit;
    Ronit a = 23;
    printf("Ronit = %d", a);
    return 0;
}