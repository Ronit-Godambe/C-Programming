#include <stdio.h> 

int main(){
    int i = 6;
    int* p1 = &i;
    int** p2 = &p1;

    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *p1);
    printf("The value of i is %d\n", **p2);

    return 0;
}