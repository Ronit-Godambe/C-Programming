#include <stdio.h> 

int main(){
    // char str[] = {'a', 'b', 'c', 'd', '\0'};

    char str[] = "abc"; // same as printing char str[] = {'a', 'b', 'c', 'd', '\0'}; 
    // - WHEN WE USE DOUBLE QUOTES WE DONT NEED NULL CHARACTERS
    printf("%c\n", str[0]);

    // To print strings we use for  loops

    for (int i = 0; i < 3; i++) // we can print the null character by doing i<= 3 
    {
        printf("Character is %c\n", str[i]);
    }
    
    return 0;
}