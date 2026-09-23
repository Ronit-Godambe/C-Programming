#include <stdio.h> 
/*
6. Write a program containing functions which counts the number of positive 
integers in an array. 
*/

int count(int a[], int n);
int count(int a[], int n){
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            no_of_positive++;
        }
    }
    
    return no_of_positive;
}
int main(){
    int a[] = {1, 2, -3, 4, 5, 6, 7, 8, -9, 10};

    printf("The number of positive intgers in the array are %d.", count(a, 10));

    return 0;
}