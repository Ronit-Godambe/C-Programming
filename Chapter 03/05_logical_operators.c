#include <stdio.h>

int main()
{
    int a, b;
    
    printf("a = ");
    scanf("%d", &a);
    
    printf("b = ");
    scanf("%d", &b);

    printf("For AND operator:\n");
    printf("Output = %d\n", a&&b);
    
    printf("For OR operator:\n");
    printf("Output = %d\n", a||b);

    printf("For NOT operator\n");
    printf("For a = %d, Output = %d\n", a, !a);
    printf("For b = %d , Output = %d\n", b, !b);

    return 0;
}