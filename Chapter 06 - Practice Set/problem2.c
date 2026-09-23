#include <stdio.h> 
/*

2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
   a function and print its address. Are these addresses same? Why?

*/
int function (int*);
int function(int* a){
    printf("Address of j is %d\n", a);
    printf("The value of j is %d\n", *a);
}
int main(){

    int i = 2;
    int* j = &i;
    printf("Address of i is %u.\n", &i);
    function(j);
    // So the adderess is same because when we use j as a pointer to point i's address and then we pass the same value to the function - that's the reason (as far as I know.)


    return 0;
}