#include <stdio.h> 
/*
9. Write a program to check whether a given character is present in a string or not.
*/
int main(){

    char c = 'a' ; // or whatever you want
    char str[] = "Ronit Dattaraya Godambe";
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i] == c){
           printf("Yes! the character is present in the string!");
           return 0;
        }
        
    }    
    printf("No the character is not present in the string.");
    return 0;
}
