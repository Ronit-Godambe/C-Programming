#include <stdio.h>
/*
3. Write a program to read a text file character by character and write its content
twice in separate file.
*/
int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("test3.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist!"); // 
        return 0;

    }
    
    ptr2 = fopen("rewritetest3.txt", "a"); // actually i hadnt created it yet so it will create one so no null for this one
    while (1)
    {
        ch = fgetc(ptr);

        if (ch == EOF)
        {
            break;
        }
        fprintf(ptr2, "%c", ch);
        fprintf(ptr2, "%c", ch);
        printf("%c", ch);
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}