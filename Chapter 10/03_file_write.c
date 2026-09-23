#include <stdio.h> 

int main(){
    FILE *ptr;
    // ptr = fopen("test.txt", "w"); - - - - Erases everything in the file
    ptr = fopen("test.txt", "a");   // appends at the end of the file
    int num = 23;
    fprintf(ptr, "%d", num);
    fclose(ptr);

    return 0;
}