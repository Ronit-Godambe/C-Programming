#include <stdio.h> 
#include <stdlib.h>


int main(){
    int n;
    scanf("%d", &n);
    // int arr[n]; // this is invalid
    // that's the reason we use dynamic memory variables

    // malloc - memory alloc
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    
    ptr[0] = 49;
    ptr[1] = 13;
    ptr[2] = 94;
    ptr[3] = 31;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);

    free(ptr);
    return 0;
}