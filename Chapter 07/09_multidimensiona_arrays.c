#include <stdio.h> 

int main(){
    int arr[3][2] = {{1, 4},  
                     {7, 9},  
                      {11, 22}};

    // This array has 3 rows and two columns making it a 2D array.
    // this is a 3 x 2 array
    // We can access this array as - arr[0][0] -- row 0 column 0
    //                               arr[0][1] -- row 0 column 1

    // printf("%d\n", arr[0][0]);  // 1
    // printf("%d\n", arr[0][1]);  // 4
    // printf("%d\n", arr[1][0]);  // 7
    // printf("%d\n", arr[1][1]);  // 9
    // printf("%d\n", arr[2][0]);  // 11
    // printf("%d\n", arr[2][1]);  // 22

//      1  4
//      7  9
//      11 22

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", arr[i][j] ); // for this part - arr[i][j] - i was really confused what do  iwrite here - hehe so took a sneak peek
            // still tell me how does thing thing work - each iteration
            // I literally assumed that the outer loop is for rows so I wrote i < 3 - and inner loop for columns so i < 2 - no personal thinking
        }
        
    }
    

    printf("Size of array = %d", sizeof arr);

    return 0;
}