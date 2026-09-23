
#include <stdio.h>
void encrypt(char str[]);
void encrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]++;
    }
}
int main()
{
    char str[] = "Ronit Godambe";
    encrypt(str);
    printf("%s", str);
    return 0;
}