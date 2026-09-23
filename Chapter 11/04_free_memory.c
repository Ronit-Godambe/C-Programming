#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("n = ");

    if (scanf("%d", &n) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 2;

    // free(ptr);       this should all the memory and printf should return garbage (formy compiler it doesnt (TvT) )

    printf("%d", ptr[0]);

    free(ptr);  // frees memory
    
    return 0;
}