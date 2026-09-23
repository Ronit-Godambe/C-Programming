#include <stdio.h>
#include <stdlib.h>
/*
5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).
*/
int main()
{

    int n = 10;
    int *ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    printf("Upto 10 (Before realloc):\n");
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);  // for a moment i was thinking before ptr came to me just write 7*(i+1) again
        // ik this goes upto 9 but what matters is it "stores" 10 values
    }


    n = 15;
    int* temp = (int*) realloc(ptr, n*sizeof(int));
    if (temp != NULL)
    {
        ptr = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    printf("\nUpto 15 (after realloc):\n");
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]); // ya ik it will go upto 14 but it "stores" 15 values. 
    }

    free(ptr); // teko bandi banaya thaa jaa
    return 0;
}