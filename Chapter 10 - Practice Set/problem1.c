#include <stdio.h> 
/*
1. Write a program to read three integers from a file.
*/
int main(){
    int num;
FILE *ptr; // Is this pointer necessary every time?
ptr = fopen("test1.txt", "r");
// To print integers or anything we use the function fscanf()
fscanf(ptr, "%d", &num);
printf("First integer: %d\n", num);
fscanf(ptr, "%d", &num);
printf("Seconf integer: %d\n", num);
fscanf(ptr, "%d", &num);
printf("Third integer: %d\n", num);

    return 0;
}