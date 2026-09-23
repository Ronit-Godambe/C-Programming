#include <stdio.h>
// 5. Write your own version of strcpy function from <string.h>
int mystrlen(char str[]);
int mystrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}


void mystrcpy(char target[], char source[]);
void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';

}

int main()
{
    char source[] = "Ronit";
    char target[30];
    mystrcpy(target, source);
    printf("Source: %s, Target: %s", source, target);

    return 0;
}