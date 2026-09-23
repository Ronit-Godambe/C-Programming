#include <stdio.h> 

void printarray(int arr[], int n);
void printarray(int arr[], int n){
for (int i = 0; i < n; i++)
{
    printf("The value of array at index %d is %d\n",i, arr[i]);
}

}

void printarray2(int *ptr, int n);
void printarray2(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of array at index %d is %d\n",i, *ptr);
        ptr++;
    }
    
}

int main(){
    int marks[8] = {12, 43, 2, 56, 7, 3, 8, 0};

    printf("\n");

    printarray(marks, 5);

    printf("\n");

    int marks2[8] = {14, 54, 62, 85 , 59, 49, 65, 45};

    int *ptr = marks2;

    printarray2(ptr, 5);

    return 0;
}