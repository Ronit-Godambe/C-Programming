#include <stdio.h> 
void swap(int*, int*);

void swap(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    
}
int main(){
   int x = 6, y = 4;
   swap(&x, &y);

printf("Value of a is %d and value of b is %d ", x, y);
// output: Value of a is 4 and value of b is 6.

    return 0;
}