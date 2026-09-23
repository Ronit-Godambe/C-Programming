#include <stdio.h> 
/*

Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen.

*/
void display(int arr[2][2]);
void display(int arr[2][2]){
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("The value of arr[%d][%d] is: %d\n", row, column, arr[row][column]);
        }
        
    }
    
}

int main(){
    int arr[2][2];
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0;  column < 2;  column++)
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
    display(arr);

    printf("\nThe array itself looks like:\n");
   for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("%d ", arr[row][column]);
        }
        printf("\n");
    }
    
    
    return 0;
}