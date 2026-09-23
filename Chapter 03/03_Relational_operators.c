#include <stdio.h>

int main()
{
    // RELATIONAL OPERATORS
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    // a == b
    if (a == b){
        printf("a = b");
    }
    else{
        printf("a is not equal to b\n");
    }

    // a >= b
    if(a>=b){
        printf("a >= b, a is greater than or equal to b\n");
    }
    else{
        printf(" a is smaller than and not equal to b\n");
    }

    // a <= b
    if(a<=b){
        printf("a <= b, a is smaller than or equal to b\n");
    }
    else{
        printf(" a is greater than and not equal to b\n");
    }

    // a > b
    if(a>b){
        printf("a > b, a is greater than b\n");
    }
    else{
        printf("a < b, a is smaller than b\n");
    }


    // a < b
    if(a<b){
        printf("a < b, a is smaller than b\n");
    }
    else{
        printf("a > b, a is greater than b\n");
    }

    return 0;

}