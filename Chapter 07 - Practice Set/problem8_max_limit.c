#include <stdio.h> 

int main(){
    int n, j;
    printf("How many tables are you printing?\n");
    printf("Ans: ");
    if (scanf("%d", &n) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    
        int arr[n][10];
        
        int table[n];
    
    for (int rows = 0; rows < n; rows++)
    {   
        printf("Table %d: ", rows+1);
        if (scanf("%d", &table[rows]) != 1)
        {
            printf("...INVALID INPUT...");
            return 0;
        }
    }
    printf("\n");

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < 10; column++)
        {
            arr[row][column] = table[row] * (column+1);
        }
        

    }
    
    for (int rows = 0; rows < n; rows++)
    {
        for (int columns = 0; columns < 10; columns++)
        {
            printf("%d ", arr[rows][columns]);
        }
        printf("\n");
    }

    return 0;
}