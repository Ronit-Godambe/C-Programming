#include <stdio.h> 

int main(){
    
    int i = 6;
    
    // j pointing to address of i
    int* j = &i;
    
    // k pointing to addressof j which itself is a pointer
    int** k = &j;

    printf("The value of i is %d.\t(i)\n", i);
    printf("The value of i is %d.\t(*j)\n", *j);
    printf("The value of i is %d.\t(88k)\n", **k);
    
    printf("The value of i is %d.\t(*(&i))\n", *(&i));
    printf("The value of i is %d.\t(**(&j))\n", **(&j));
    printf("The value of i is %d.\t(***(&k))\n", ***(&k));
    
    return 0;
}