#include <stdio.h> 
/*
5. Write a program to modify a file containing an integer to double its value. 
*/
int main(){
    FILE*ptr;
    int num;
    
    ptr = fopen("test5.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist.\n");
        return 0;
    }
    fscanf(ptr, "%d", &num);
    // printf("The double of value in the file is: %d", num*2);
    fclose(ptr);
    ptr = fopen("test5.txt", "w");
    fprintf(ptr, "%d", num*2);

    fclose(ptr);

    return 0;
}