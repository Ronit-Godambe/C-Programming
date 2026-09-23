#include <stdio.h> 
/* 
3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.
*/
int main(){
    int arr[10];
    int tableof;
    printf("Enter the number whose table you would like to store in the array.\n");
    printf("The number: ");
    if (scanf("%d", &tableof) != 1 || tableof<=0)
    {
        printf("...INVALID INPUT...");
        return 0;
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
     arr[i] =  (tableof*(i+1));   
    }


    for (int i = 0; i < 10; i++)
    {
     printf("The value of array at arr[%d] is %d\n", i, arr[i]);
    }
    
    return 0;
}