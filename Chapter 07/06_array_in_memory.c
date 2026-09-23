#include <stdio.h> 
// const int SIZE = 10; // SO IN FUTURE - if we change the no. of  marks stored we can change it in one line!
#define SIZE 4

int main(){
    int marks[SIZE];

    for (int i = 0; i < SIZE; i++){
        printf("Marks%d = ", i);
        if(scanf("%d", &marks[i]) != 1 || marks[i]<0){
            printf("...INVALID INPUT...");
            return 0;
        }
    }

    printf("This is just to show that arrays are consecutive in memory.\n");

    for (int i = 0; i < SIZE; i++){
        printf("address of marks at index %d is %u\n", i, &marks[i]);
    }
    
    
    return 0;
}