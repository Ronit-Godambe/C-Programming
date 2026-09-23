#include <stdio.h> 
/*
8. Repeat problem 7 for a custom input given by the user.
*/
int main(){
    int a, b, c;
    int arr[3][10];
    printf("Enter the tables u want\n");

    printf("Table 1: ");
    if (scanf("%d", &a) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("Table 2: ");
    if (scanf("%d", &b) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("Table 3: ");
    if (scanf("%d", &c) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }



    for (int i = 0; i < 10; i++)
    {
        
            arr[0][i] = a * (i + 1);
            arr[1][i] = b * (i + 1);
            arr[2][i] = c * (i + 1);
       
    }

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 10; column++)
        {
            printf("%d ", arr[row][column]);
        }
        printf("\n");
    }

    return 0;
}