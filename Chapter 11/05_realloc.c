#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;

    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 2;


    printf("%d", ptr[0]);
    ptr = (int*) realloc(ptr, 10 * sizeof(int));
    
    free(ptr);
    return 0;
}