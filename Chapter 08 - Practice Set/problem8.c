#include <stdio.h> 

// 8. Write a program to count the occurrence of a given character in a string.
int main(){
    char c = 'r';
    int count = 0;
    char str[] = "Ronit is learning c programming from harry on youtube";
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i] == c){
            count++;
        }
    }
    printf("The letter '%c' occurs %d times in '%s'",c, count, str);
    return 0;
}   