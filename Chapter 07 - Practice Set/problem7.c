#include <stdio.h>

/*
7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.

    for 1D array

    for ( i = 0  ; i < 10 ; i++)
    arr[i = 2*(i+1)]

    for 2d array
    arr[i][row];
    for ( i = 0  ; i < 10 ; i++){
        arr[0][i] = 2*(i+1);
        arr[1][i] = 7*(i+1);
        arr[2][i] = 9*(i+1);
}
*/

int main()
{
    int arr[3][10];
    int table[] = {2, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = table[i] * (j + 1);
        }
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