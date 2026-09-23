#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("test.txt", "r");
    // char c = fgetc(ptr);      // used to read a character from file - used when we use "r".
    // printf("%c", c);
    
    
    ptr = fopen("test.txt", "a"); 
    fputc('c', ptr); // used to write character 'c' to the file - used when we use "a" or "w"
    // c will get printed at the end (when we use "a")
    // everything will be erased and replaced by c (when we use "a")

    
    return 0;
}