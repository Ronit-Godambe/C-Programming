#include <stdio.h>
/*

Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen.

*/
void display(int rows, int columns, int arr[rows][columns]){
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            printf("The value of arr[%d][%d] is : %d\n", row, column, arr[row][column]);
        }
    }
}
int main()
{
    int a, b;

    printf("No. of rows: ");
    if (scanf("%d", &a) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("No. of columns: ");
    if (scanf("%d", &b) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    
    int arr[a][b];
    for (int row = 0; row < a; row++)
    {
        for (int column = 0; column < b; column++)
        {
            printf("Enter the value to be placed at arr[%d][%d]: ", row, column);
           if (scanf("%d", &arr[row][column]) != 1)
           {
               printf("...INVALID INPUT...");
               return 0;
           }
        }

    }
    printf("\n");
    display(a, b, arr);
    return 0;
}