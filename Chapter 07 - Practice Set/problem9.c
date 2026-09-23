#include <stdio.h> 
/*
9. Create a three–dimensional array and print the address of its elements in 
increasing order.
*/
int main(){
    int arr[2][2][2];

    // its the addresses right? why to take the load of putting values in the array?

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%p ", &arr[i][j][k]);
            }
            
        }
        
    }
    printf("\n");
        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
            
        }
        
    }
    return 0;
}