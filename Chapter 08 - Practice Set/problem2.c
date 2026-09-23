#include <stdio.h>

/*
2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.
*/
int main()
{
    char str[6];

    // scanf("%s", str);

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5] = '\0';

    puts(str);
    
    return 0;
}