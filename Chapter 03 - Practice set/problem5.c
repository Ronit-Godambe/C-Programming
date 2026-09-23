#include <stdio.h>

int main()
{
    /*
    5. Write a program to determine whether a character entered by the user is
    lowercase or not.
    
    In ASCII:

    UPPERCASE: A - Z == 65 to 90  
    lowercase: a - z == 97 to 122
    */
    char character;
    printf("This program is  to determine whether a character entered by the user is lowercase or not. (or uppercase)\n");
    printf("\nUser is requested to enter 1 character only be it uppercase or lowercase\n");

    printf("\nInput:");
    scanf("%c", &character);
    if (character >= 65 && character <= 90){
        printf("Entered character is Uppercase.\nCharacter = %c \nAscii value of '%c' = %d", character, character, character);
    }
    else if (character >= 97 && character <= 122){
        printf("Entered character is Lowercase.\nCharacter = %c \nAscii value of '%c' = %d", character, character, character);
    }
    /*
    if (character >= 'A' && character <= 'Z'){
        printf("Entered character is Uppercase.\nCharacter = %c\nAscii value of '%c' = %d", character, character, character);
    }
    else if (character >= 'a' && character <= 'z'){
        printf("Entered character is Lowercase.\nCharacter = %c\nAscii value of '%c' = %d", character, character, character);
    }
    */
    else{
        printf("Told you to enter an ALPHABET!! (dumb beast)");
    }

    return 0;
}