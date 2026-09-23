#include <stdio.h>

int main()
{
    // way - 1
    int x[3] = {4, 2, 9};

    for (int i = 0; i < 3; i++){
        printf("The value of array at index %d is %d.\n", i, x[i]);
    }
    
    printf("\n");
    
    // Way 2 - no need to write the definite number that how many elements does the array contain
     //  |
     //  |
     //  V

    int y[] = {4, 2, 9};
    
    for (int i = 0; i < 3; i++){
        printf("The value of array at index %d is %d.\n", i, y[i]);
    }

    return 0;
}