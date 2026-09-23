#include <stdio.h>

int main()
{

    char ch;

    FILE *ptr;
    ptr = fopen("test.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // This will read all the content in the file till its over and break.

        if (ch == EOF)  // EOF = end of file -- whenever the file ends we get EOF
        {
            break;
        }
    }

    return 0;
}