#include <stdio.h>

// 5. Write a program containing a function which reverses the array passed to it.
void printarray(int arr[], int n);
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n);
void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};

    printarray(arr1, 5);
    reverse(arr1, 5);
    printarray(arr1, 5);

    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printarray(arr2, 10);
    reverse(arr2, 10);
    printarray(arr2, 10);

    return 0;
}