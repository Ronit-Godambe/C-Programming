#include <stdio.h> 
#include <stdlib.h>
/*
2. Use the array in problem 1 to store 6 integers entered by the user.
*/

int main(){
    
     int n = 6;

    int *ptr = (int *)malloc(n * sizeof(int));
   
    printf("Enter 6 values  you would liketo store in the array:\n");
     for (int i = 0; i < n; i++)
    {   
        printf("ptr[%d]: ", i);
        if (scanf("%d", &ptr[i]) != 1)
        {
            printf("...INVALID INPUT...");
            free(ptr);
            return 0;
        }
    }

    printf("The values stored in your array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}